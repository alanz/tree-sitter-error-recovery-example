# TREE_SITTER=tree-sitter
TREE_SITTER=npm run

all: fmt gen test

fmt:
	./node_modules/.bin/prettier --write grammar.js

.PHONY: test
test: gen
	$(TREE_SITTER) test

.PHONY: update
update: gen
	$(TREE_SITTER) test -- --update

.PHONY: debug
debug: gen
	$(TREE_SITTER) test -d

.PHONY: gen
gen:
	$(TREE_SITTER) generate

.PHONY: deps
deps:
	npm install

.PHONY: web
web: wasm
	$(TREE_SITTER) web-ui

.PHONY: wasm
wasm:
	$(TREE_SITTER) build-wasm

.PHONY: publish
publish: all wasm
	cp ./tree-sitter-micro-erlang.wasm ./docs

