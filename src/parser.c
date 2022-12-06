#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_LBRACK = 2,
  anon_sym_COLON = 3,
  anon_sym_RBRACK = 4,
  anon_sym_COLON_COLON = 5,
  aux_sym_body_token1 = 6,
  sym_comment = 7,
  aux_sym_target_token1 = 8,
  aux_sym_option_params_token1 = 9,
  sym_runscript = 10,
  sym_script = 11,
  sym_header = 12,
  sym_option = 13,
  sym_body = 14,
  sym_target = 15,
  sym_phase = 16,
  sym_option_name = 17,
  sym_option_params = 18,
  sym_executor = 19,
  aux_sym_runscript_repeat1 = 20,
  aux_sym_runscript_repeat2 = 21,
  aux_sym_script_repeat1 = 22,
  aux_sym_body_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON_COLON] = "::",
  [aux_sym_body_token1] = "body_token1",
  [sym_comment] = "comment",
  [aux_sym_target_token1] = "target_token1",
  [aux_sym_option_params_token1] = "option_params_token1",
  [sym_runscript] = "runscript",
  [sym_script] = "script",
  [sym_header] = "header",
  [sym_option] = "option",
  [sym_body] = "body",
  [sym_target] = "target",
  [sym_phase] = "phase",
  [sym_option_name] = "option_name",
  [sym_option_params] = "option_params",
  [sym_executor] = "executor",
  [aux_sym_runscript_repeat1] = "runscript_repeat1",
  [aux_sym_runscript_repeat2] = "runscript_repeat2",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [aux_sym_body_token1] = aux_sym_body_token1,
  [sym_comment] = sym_comment,
  [aux_sym_target_token1] = aux_sym_target_token1,
  [aux_sym_option_params_token1] = aux_sym_option_params_token1,
  [sym_runscript] = sym_runscript,
  [sym_script] = sym_script,
  [sym_header] = sym_header,
  [sym_option] = sym_option,
  [sym_body] = sym_body,
  [sym_target] = sym_target,
  [sym_phase] = sym_phase,
  [sym_option_name] = sym_option_name,
  [sym_option_params] = sym_option_params,
  [sym_executor] = sym_executor,
  [aux_sym_runscript_repeat1] = aux_sym_runscript_repeat1,
  [aux_sym_runscript_repeat2] = aux_sym_runscript_repeat2,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_body_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_target_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_params_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_runscript] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_phase] = {
    .visible = true,
    .named = true,
  },
  [sym_option_name] = {
    .visible = true,
    .named = true,
  },
  [sym_option_params] = {
    .visible = true,
    .named = true,
  },
  [sym_executor] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_runscript_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_runscript_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 12,
  [27] = 11,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '[') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '[') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_body_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_option_params_token1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_option_params_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_target_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_runscript] = STATE(38),
    [sym_script] = STATE(6),
    [sym_header] = STATE(36),
    [sym_option] = STATE(2),
    [aux_sym_runscript_repeat1] = STATE(2),
    [aux_sym_runscript_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_header,
    STATE(5), 2,
      sym_option,
      aux_sym_runscript_repeat1,
    STATE(7), 2,
      sym_script,
      aux_sym_runscript_repeat2,
  [27] = 6,
    ACTIONS(17), 1,
      anon_sym_COLON_COLON,
    ACTIONS(19), 1,
      aux_sym_body_token1,
    ACTIONS(21), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_body_repeat1,
    STATE(20), 1,
      sym_body,
    STATE(10), 2,
      sym_option,
      aux_sym_script_repeat1,
  [47] = 6,
    ACTIONS(17), 1,
      anon_sym_COLON_COLON,
    ACTIONS(19), 1,
      aux_sym_body_token1,
    ACTIONS(21), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_body_repeat1,
    STATE(21), 1,
      sym_body,
    STATE(3), 2,
      sym_option,
      aux_sym_script_repeat1,
  [67] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(28), 1,
      anon_sym_COLON_COLON,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(5), 2,
      sym_option,
      aux_sym_runscript_repeat1,
  [85] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_header,
    STATE(8), 2,
      sym_script,
      aux_sym_runscript_repeat2,
  [102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_header,
    STATE(8), 2,
      sym_script,
      aux_sym_runscript_repeat2,
  [119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_header,
    STATE(8), 2,
      sym_script,
      aux_sym_runscript_repeat2,
  [136] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_body_token1,
    STATE(9), 1,
      aux_sym_body_repeat1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [150] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(46), 1,
      aux_sym_body_token1,
    STATE(10), 2,
      sym_option,
      aux_sym_script_repeat1,
  [164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
  [174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
  [184] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_body_token1,
    STATE(9), 1,
      aux_sym_body_repeat1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [198] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      aux_sym_option_params_token1,
    STATE(40), 1,
      sym_option_params,
  [211] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LF,
    ACTIONS(62), 1,
      aux_sym_option_params_token1,
    STATE(39), 1,
      sym_executor,
  [224] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(62), 1,
      aux_sym_option_params_token1,
    ACTIONS(64), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_executor,
  [237] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_option_params_token1,
    ACTIONS(66), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym_option_params,
  [250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    ACTIONS(70), 1,
      aux_sym_target_token1,
    STATE(33), 1,
      sym_phase,
  [263] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(62), 1,
      aux_sym_option_params_token1,
    ACTIONS(72), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym_executor,
  [276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      aux_sym_target_token1,
    STATE(24), 1,
      sym_target,
  [302] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_LF,
      aux_sym_option_params_token1,
  [310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
  [320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [328] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(50), 1,
      aux_sym_body_token1,
    ACTIONS(88), 1,
      anon_sym_COLON_COLON,
  [338] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym_body_token1,
    ACTIONS(90), 1,
      anon_sym_COLON_COLON,
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_target_token1,
    STATE(17), 1,
      sym_option_name,
  [358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_target_token1,
    STATE(14), 1,
      sym_option_name,
  [368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LF,
  [375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LF,
  [382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
  [389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
  [396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_LF,
  [403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LF,
  [410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LF,
  [417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LF,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
  [431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_LF,
  [438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 119,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 164,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 198,
  [SMALL_STATE(15)] = 211,
  [SMALL_STATE(16)] = 224,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 263,
  [SMALL_STATE(20)] = 276,
  [SMALL_STATE(21)] = 284,
  [SMALL_STATE(22)] = 292,
  [SMALL_STATE(23)] = 302,
  [SMALL_STATE(24)] = 310,
  [SMALL_STATE(25)] = 320,
  [SMALL_STATE(26)] = 328,
  [SMALL_STATE(27)] = 338,
  [SMALL_STATE(28)] = 348,
  [SMALL_STATE(29)] = 358,
  [SMALL_STATE(30)] = 368,
  [SMALL_STATE(31)] = 375,
  [SMALL_STATE(32)] = 382,
  [SMALL_STATE(33)] = 389,
  [SMALL_STATE(34)] = 396,
  [SMALL_STATE(35)] = 403,
  [SMALL_STATE(36)] = 410,
  [SMALL_STATE(37)] = 417,
  [SMALL_STATE(38)] = 424,
  [SMALL_STATE(39)] = 431,
  [SMALL_STATE(40)] = 438,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runscript, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runscript, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runscript_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runscript_repeat1, 2), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runscript_repeat1, 2), SHIFT_REPEAT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runscript, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_runscript_repeat2, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_runscript_repeat2, 2), SHIFT_REPEAT(22),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(29),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_name, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_params, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phase, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executor, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [110] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_runscript(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
