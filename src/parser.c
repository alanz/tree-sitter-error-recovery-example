// @generated

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_name = 1,
  anon_sym_DOT = 2,
  sym_args = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DASH_GT = 6,
  anon_sym_RBRACK = 7,
  anon_sym_RBRACE = 8,
  sym__newline = 9,
  sym__indent = 10,
  sym__dedent = 11,
  sym__string_start = 12,
  sym__string_content = 13,
  sym__string_end = 14,
  sym_comment = 15,
  sym_source_file = 16,
  sym_form = 17,
  sym_fun_recovery = 18,
  sym_fun = 19,
  sym__expr = 20,
  sym_call = 21,
  sym_clause_body = 22,
  sym_catch_all = 23,
  sym_any_tok = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_catch_all_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_DOT] = ".",
  [sym_args] = "args",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACE] = "}",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__string_start] = "_string_start",
  [sym__string_content] = "_string_content",
  [sym__string_end] = "_string_end",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_form] = "form",
  [sym_fun_recovery] = "fun_recovery",
  [sym_fun] = "fun",
  [sym__expr] = "_expr",
  [sym_call] = "call",
  [sym_clause_body] = "clause_body",
  [sym_catch_all] = "catch_all",
  [sym_any_tok] = "any_tok",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_catch_all_repeat1] = "catch_all_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_args] = sym_args,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__string_start] = sym__string_start,
  [sym__string_content] = sym__string_content,
  [sym__string_end] = sym__string_end,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_form] = sym_form,
  [sym_fun_recovery] = sym_fun_recovery,
  [sym_fun] = sym_fun,
  [sym__expr] = sym__expr,
  [sym_call] = sym_call,
  [sym_clause_body] = sym_clause_body,
  [sym_catch_all] = sym_catch_all,
  [sym_any_tok] = sym_any_tok,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_catch_all_repeat1] = aux_sym_catch_all_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_args] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__string_start] = {
    .visible = false,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__string_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_form] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_recovery] = {
    .visible = true,
    .named = true,
  },
  [sym_fun] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_clause_body] = {
    .visible = true,
    .named = true,
  },
  [sym_catch_all] = {
    .visible = true,
    .named = true,
  },
  [sym_any_tok] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_catch_all_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_body = 2,
  field_fn = 3,
  field_name = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_body] = "body",
  [field_fn] = "fn",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_args, 1},
    {field_body, 2},
    {field_name, 0},
  [3] =
    {field_fn, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(10);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_args);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(6);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0, .external_lex_state = 4},
  [13] = {.lex_state = 0, .external_lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0, .external_lex_state = 4},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__string_start = 3,
  ts_external_token__string_content = 4,
  ts_external_token__string_end = 5,
  ts_external_token_comment = 6,
  ts_external_token_RBRACK = 7,
  ts_external_token_RPAREN = 8,
  ts_external_token_RBRACE = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token__string_end] = sym__string_end,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_RBRACK] = anon_sym_RBRACK,
  [ts_external_token_RPAREN] = anon_sym_RPAREN,
  [ts_external_token_RBRACE] = anon_sym_RBRACE,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
    [ts_external_token_RPAREN] = true,
    [ts_external_token_RBRACE] = true,
  },
  [2] = {
    [ts_external_token_RPAREN] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token_RPAREN] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_args] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym_form] = STATE(3),
    [sym_fun_recovery] = STATE(13),
    [sym_fun] = STATE(12),
    [sym_catch_all] = STATE(12),
    [sym_any_tok] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [sym_args] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_DASH_GT] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_any_tok,
    STATE(13), 1,
      sym_fun_recovery,
    STATE(2), 2,
      sym_form,
      aux_sym_source_file_repeat1,
    STATE(12), 2,
      sym_fun,
      sym_catch_all,
    ACTIONS(16), 3,
      sym_args,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [29] = 8,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_any_tok,
    STATE(13), 1,
      sym_fun_recovery,
    STATE(2), 2,
      sym_form,
      aux_sym_source_file_repeat1,
    STATE(12), 2,
      sym_fun,
      sym_catch_all,
    ACTIONS(7), 3,
      sym_args,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [58] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(24), 1,
      sym__newline,
    STATE(6), 2,
      sym_any_tok,
      aux_sym_catch_all_repeat1,
    ACTIONS(7), 4,
      sym_name,
      sym_args,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [75] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym__newline,
    STATE(5), 2,
      sym_any_tok,
      aux_sym_catch_all_repeat1,
    ACTIONS(26), 4,
      sym_name,
      sym_args,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [92] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      sym__newline,
    STATE(5), 2,
      sym_any_tok,
      aux_sym_catch_all_repeat1,
    ACTIONS(7), 4,
      sym_name,
      sym_args,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [109] = 2,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      sym_name,
      sym_args,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [120] = 3,
    ACTIONS(42), 1,
      sym_args,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 4,
      sym__newline,
      sym_name,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [133] = 2,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 5,
      sym__newline,
      sym_name,
      sym_args,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [144] = 2,
    ACTIONS(47), 1,
      sym_name,
    STATE(17), 2,
      sym__expr,
      sym_call,
  [152] = 2,
    ACTIONS(49), 1,
      anon_sym_DASH_GT,
    STATE(15), 1,
      sym_clause_body,
  [159] = 1,
    ACTIONS(51), 1,
      sym__newline,
  [163] = 1,
    ACTIONS(53), 1,
      sym__newline,
  [167] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [171] = 1,
    ACTIONS(57), 1,
      anon_sym_DOT,
  [175] = 1,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
  [179] = 1,
    ACTIONS(61), 1,
      anon_sym_DOT,
  [183] = 1,
    ACTIONS(63), 1,
      sym__newline,
  [187] = 1,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
  [191] = 1,
    ACTIONS(67), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 152,
  [SMALL_STATE(12)] = 159,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 167,
  [SMALL_STATE(15)] = 171,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 179,
  [SMALL_STATE(18)] = 183,
  [SMALL_STATE(19)] = 187,
  [SMALL_STATE(20)] = 191,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_all, 1),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_catch_all_repeat1, 2), SHIFT_REPEAT(9),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_catch_all_repeat1, 2), SHIFT_REPEAT(9),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_catch_all_repeat1, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_all, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_tok, 1),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_any_tok, 1), SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_tok, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_recovery, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_body, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun, 4, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_micro_erlang_external_scanner_create(void);
void tree_sitter_micro_erlang_external_scanner_destroy(void *);
bool tree_sitter_micro_erlang_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_micro_erlang_external_scanner_serialize(void *, char *);
void tree_sitter_micro_erlang_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_micro_erlang(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_micro_erlang_external_scanner_create,
      tree_sitter_micro_erlang_external_scanner_destroy,
      tree_sitter_micro_erlang_external_scanner_scan,
      tree_sitter_micro_erlang_external_scanner_serialize,
      tree_sitter_micro_erlang_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
