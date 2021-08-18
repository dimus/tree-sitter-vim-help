#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_header_separator = 2,
  sym_target = 3,
  sym_link = 4,
  sym_vim_name = 5,
  sym_manual_title = 6,
  aux_sym_summary_token1 = 7,
  sym_source_file = 8,
  sym_header = 9,
  sym_file_name = 10,
  sym_summary = 11,
  aux_sym_header_repeat1 = 12,
  aux_sym_summary_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_header_separator] = "header_separator",
  [sym_target] = "target",
  [sym_link] = "link",
  [sym_vim_name] = "vim_name",
  [sym_manual_title] = "manual_title",
  [aux_sym_summary_token1] = "summary_token1",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_file_name] = "file_name",
  [sym_summary] = "summary",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_summary_repeat1] = "summary_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_header_separator] = sym_header_separator,
  [sym_target] = sym_target,
  [sym_link] = sym_link,
  [sym_vim_name] = sym_vim_name,
  [sym_manual_title] = sym_manual_title,
  [aux_sym_summary_token1] = aux_sym_summary_token1,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_file_name] = sym_file_name,
  [sym_summary] = sym_summary,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_summary_repeat1] = aux_sym_summary_repeat1,
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
  [sym_header_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_vim_name] = {
    .visible = true,
    .named = true,
  },
  [sym_manual_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_summary_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name] = {
    .visible = true,
    .named = true,
  },
  [sym_summary] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_summary_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == 'V') ADVANCE(21);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == 'F' ||
          lookahead == 'N') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'M') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == 'V') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '|') ADVANCE(19);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'F' ||
          lookahead == 'N' ||
          lookahead == 'V') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(3);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_header_separator);
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_link);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_vim_name);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_vim_name);
      if (lookahead == 'I') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_vim_name);
      if (lookahead == 'M') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_vim_name);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_manual_title);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_summary_token1);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_header_separator] = ACTIONS(1),
    [sym_target] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [sym_vim_name] = ACTIONS(1),
    [sym_manual_title] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym_header] = STATE(9),
    [sym_file_name] = STATE(10),
    [sym_target] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_header_separator,
    STATE(5), 1,
      aux_sym_summary_repeat1,
    ACTIONS(7), 2,
      sym_link,
      aux_sym_summary_token1,
    STATE(3), 2,
      sym_summary,
      aux_sym_header_repeat1,
  [15] = 4,
    ACTIONS(9), 1,
      sym_header_separator,
    STATE(5), 1,
      aux_sym_summary_repeat1,
    ACTIONS(7), 2,
      sym_link,
      aux_sym_summary_token1,
    STATE(4), 2,
      sym_summary,
      aux_sym_header_repeat1,
  [30] = 4,
    ACTIONS(11), 1,
      sym_header_separator,
    STATE(5), 1,
      aux_sym_summary_repeat1,
    ACTIONS(13), 2,
      sym_link,
      aux_sym_summary_token1,
    STATE(4), 2,
      sym_summary,
      aux_sym_header_repeat1,
  [45] = 2,
    STATE(6), 1,
      aux_sym_summary_repeat1,
    ACTIONS(16), 3,
      sym_header_separator,
      sym_link,
      aux_sym_summary_token1,
  [54] = 3,
    ACTIONS(18), 1,
      sym_header_separator,
    STATE(6), 1,
      aux_sym_summary_repeat1,
    ACTIONS(20), 2,
      sym_link,
      aux_sym_summary_token1,
  [65] = 1,
    ACTIONS(23), 1,
      sym_vim_name,
  [69] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
  [73] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [77] = 1,
    ACTIONS(29), 1,
      sym_vim_name,
  [81] = 1,
    ACTIONS(31), 1,
      anon_sym_LF,
  [85] = 1,
    ACTIONS(33), 1,
      sym_manual_title,
  [89] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
  [93] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 65,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 73,
  [SMALL_STATE(10)] = 77,
  [SMALL_STATE(11)] = 81,
  [SMALL_STATE(12)] = 85,
  [SMALL_STATE(13)] = 89,
  [SMALL_STATE(14)] = 93,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(5),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name, 1),
  [25] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_VimHelp(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
