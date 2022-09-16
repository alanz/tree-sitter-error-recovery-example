module.exports = grammar({
  name: "micro_erlang",
  externals: ($) => [
    $._newline,
    $._indent,
    $._dedent,
    $._string_start,
    $._string_content,
    $._string_end,

    // Mark comments as external tokens so that the external scanner is always
    // invoked, even if no external token is expected. This allows for better
    // error recovery, because the external scanner can maintain the overall
    // structure by returning dedent tokens whenever a dedent occurs, even
    // if no dedent is expected.
    $.comment,

    // Allow the external scanner to check for the validity of closing brackets
    // so that it can avoid returning dedent tokens between brackets.
    "]",
    ")",
    "}",
  ],
  conflicts: ($) => [[$.fun, $.any_tok]],
  rules: {
    source_file: ($) => repeat($.form),
    form: ($) => seq($.fun_recovery, $._newline),
    name: ($) => token(seq(token(/[a-z]/), repeat(token(/[a-z]/)))),
    fun_recovery: ($) => choice($.fun, $.catch_all),
    fun: ($) =>
      seq(
        field("name", $.name),
        field("args", $.args),
        field("body", $.clause_body),
        "."
      ),
    args: ($) => "()",
    _expr: ($) => choice($.call),
    call: ($) => seq(field("fn", $.name), token("("), token(")")),
    clause_body: ($) => seq("->", $._expr),
    catch_all: ($) => seq($.any_tok, repeat($.any_tok)),
    any_tok: ($) => choice($.name, $.args, "->", "(", ")"),
  },
});
