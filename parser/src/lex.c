#include "../static/char_set/charset_inline.h"
#include "gmr/symbols.h"

bool ts_lex(t_lexer *lexer, t_state_id state) {
  START_LEXER();
  eof = lexer->funcs.eof((void *)lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(127);
      ADVANCE_MAP(
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '%', 157,
        '&', 105,
        '\'', 106,
        '(', 131,
        ')', 132,
        '*', 153,
        '+', 165,
        '-', 164,
        '/', 155,
        '0', 232,
        ':', 162,
        ';', 253,
        '<', 141,
        '=', 197,
        '>', 142,
        '?', 201,
        '@', 231,
        '\\', 53,
        '`', 210,
        '{', 128,
        '|', 133,
        '}', 130,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(124);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(81);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(84);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(85);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 255,
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '&', 105,
        '\'', 106,
        ')', 132,
        '*', 153,
        '-', 151,
        '0', 233,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 160,
        '@', 231,
        '\\', 7,
        '`', 209,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(248);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(220);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(220);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(4);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(220);
      if (lookahead == '\r') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(229);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(248);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(222);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(48);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(48);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(45);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(225);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(82);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(82);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(95);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(88);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(94);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(226);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(83);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(83);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 256,
        '!', 136,
        '#', 189,
        '$', 169,
        '&', 105,
        '*', 152,
        '-', 149,
        '0', 234,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 159,
        '@', 230,
        '\\', 26,
        '|', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(221);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '\r') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(24);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(223);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(49);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(224);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(51);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(96);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(227);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(89);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(99);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(97);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\r') ADVANCE(174);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(91);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(177);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(228);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == '\r') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(92);
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(103);
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(102);
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(98);
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(104);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        '\n', 258,
        '"', 173,
        '#', 215,
        '$', 170,
        '&', 105,
        '\'', 106,
        ')', 132,
        ';', 253,
        '<', 141,
        '>', 142,
        '\\', 61,
        '`', 209,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead)) ADVANCE(248);
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(50);
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(100);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        '\n', 259,
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '&', 105,
        '\'', 106,
        '*', 153,
        '-', 151,
        '0', 233,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 160,
        '@', 231,
        '\\', 13,
        '`', 209,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(237);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(248);
      END_STATE();
    case 49:
      ADVANCE_MAP(
        '\n', 260,
        '!', 136,
        '#', 189,
        '$', 169,
        '&', 105,
        '*', 152,
        '-', 149,
        '0', 234,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 159,
        '@', 230,
        '\\', 28,
        '`', 209,
        '|', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 50:
      ADVANCE_MAP(
        '\n', 261,
        '"', 173,
        '#', 215,
        '$', 170,
        '&', 105,
        '\'', 106,
        ')', 132,
        ';', 253,
        '<', 141,
        '>', 142,
        '\\', 66,
        '`', 210,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead)) ADVANCE(248);
      END_STATE();
    case 51:
      ADVANCE_MAP(
        '\n', 262,
        '!', 136,
        '#', 189,
        '$', 169,
        '&', 105,
        ')', 132,
        '*', 152,
        '-', 149,
        '0', 234,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 159,
        '@', 230,
        '\\', 30,
        '|', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 52:
      if (lookahead == '\r') SKIP(1);
      if (lookahead == ' ') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(81);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 53:
      if (lookahead == '\r') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(81);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 54:
      if (lookahead == '\r') ADVANCE(182);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 55:
      if (lookahead == '\r') SKIP(2);
      if (lookahead == ' ') ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(84);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 56:
      if (lookahead == '\r') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(84);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 57:
      if (lookahead == '\r') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 58:
      if (lookahead == '\r') SKIP(3);
      if (lookahead == ' ') ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(85);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 59:
      if (lookahead == '\r') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 60:
      if (lookahead == '\r') SKIP(14);
      if (lookahead == ' ') ADVANCE(236);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(45);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 61:
      if (lookahead == '\r') SKIP(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(45);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 62:
      if (lookahead == '\r') SKIP(18);
      if (lookahead == ' ') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(95);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 63:
      if (lookahead == '\r') SKIP(18);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(95);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 64:
      if (lookahead == '\r') SKIP(19);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(88);
      END_STATE();
    case 65:
      if (lookahead == '\r') SKIP(46);
      if (lookahead == ' ') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(50);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 66:
      if (lookahead == '\r') SKIP(46);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(50);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 67:
      if (lookahead == '\r') SKIP(20);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(94);
      END_STATE();
    case 68:
      if (lookahead == '\r') SKIP(31);
      if (lookahead == ' ') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(96);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 69:
      if (lookahead == '\r') SKIP(31);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(96);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 70:
      if (lookahead == '\r') SKIP(34);
      if (lookahead == ' ') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(99);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 71:
      if (lookahead == '\r') SKIP(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(99);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 72:
      if (lookahead == '\r') SKIP(47);
      if (lookahead == ' ') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(100);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 73:
      if (lookahead == '\r') SKIP(47);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(100);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 74:
      if (lookahead == '\r') SKIP(35);
      if (lookahead == ' ') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(97);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 75:
      if (lookahead == '\r') SKIP(35);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(97);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 76:
      if (lookahead == '\r') SKIP(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(91);
      END_STATE();
    case 77:
      if (lookahead == '\r') SKIP(41);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(103);
      END_STATE();
    case 78:
      if (lookahead == '\r') SKIP(42);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(102);
      END_STATE();
    case 79:
      if (lookahead == '\r') SKIP(43);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(98);
      END_STATE();
    case 80:
      if (lookahead == '\r') SKIP(44);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(104);
      END_STATE();
    case 81:
      ADVANCE_MAP(
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '%', 157,
        '&', 105,
        '\'', 106,
        '(', 131,
        ')', 132,
        '*', 153,
        '+', 165,
        '-', 164,
        '/', 155,
        '0', 232,
        ':', 163,
        ';', 253,
        '<', 141,
        '=', 139,
        '>', 142,
        '?', 160,
        '@', 231,
        '\\', 53,
        '`', 210,
        '{', 128,
        '|', 133,
        '}', 130,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(81);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 82:
      ADVANCE_MAP(
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '&', 105,
        '\'', 106,
        '*', 153,
        '-', 151,
        '0', 233,
        '<', 141,
        '>', 142,
        '?', 160,
        '@', 231,
        '\\', 17,
        '`', 209,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(82);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(240);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(248);
      END_STATE();
    case 83:
      ADVANCE_MAP(
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '\'', 106,
        '*', 153,
        '-', 151,
        '0', 233,
        '<', 140,
        '>', 142,
        '?', 160,
        '@', 231,
        '\\', 23,
        '`', 209,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(83);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(241);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|') ADVANCE(248);
      END_STATE();
    case 84:
      ADVANCE_MAP(
        '!', 137,
        '"', 173,
        '#', 215,
        '$', 170,
        '\'', 106,
        '(', 131,
        ')', 132,
        '<', 140,
        '>', 142,
        '\\', 56,
        '`', 209,
        '{', 128,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(84);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(248);
      END_STATE();
    case 85:
      ADVANCE_MAP(
        '!', 137,
        '"', 173,
        '#', 215,
        '$', 170,
        '\'', 106,
        '(', 131,
        '<', 140,
        '>', 142,
        '\\', 59,
        '`', 209,
        '{', 128,
        '}', 130,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(85);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(248);
      END_STATE();
    case 86:
      ADVANCE_MAP(
        '!', 136,
        '"', 173,
        '#', 189,
        '$', 169,
        '*', 152,
        '-', 149,
        '0', 234,
        '?', 159,
        '@', 230,
        '\\', 36,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(86);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(178);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(181);
      END_STATE();
    case 87:
      ADVANCE_MAP(
        '!', 136,
        '#', 189,
        '$', 169,
        '%', 158,
        '*', 152,
        '+', 203,
        '-', 193,
        '0', 234,
        ':', 108,
        '=', 196,
        '?', 200,
        '@', 230,
      );
      if (lookahead == '\\') SKIP(64);
      if (lookahead == '}') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 88:
      ADVANCE_MAP(
        '!', 136,
        '#', 189,
        '$', 169,
        '%', 158,
        '*', 152,
        '-', 149,
        '0', 234,
        '?', 159,
        '@', 230,
      );
      if (lookahead == '\\') SKIP(64);
      if (lookahead == '}') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 89:
      ADVANCE_MAP(
        '!', 136,
        '#', 189,
        '$', 169,
        '&', 105,
        '*', 152,
        '-', 149,
        '0', 234,
        '<', 141,
        '>', 142,
        '?', 159,
        '@', 230,
        '\\', 33,
        '|', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 90:
      ADVANCE_MAP(
        '!', 136,
        '#', 189,
        '$', 169,
        '*', 152,
        '-', 149,
        '0', 234,
        '?', 159,
        '@', 230,
        '\\', 38,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(90);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(179);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(181);
      END_STATE();
    case 91:
      ADVANCE_MAP(
        '!', 136,
        '#', 189,
        '$', 169,
        '*', 152,
        '-', 149,
        '0', 234,
        '?', 159,
        '@', 230,
      );
      if (lookahead == '\\') SKIP(76);
      if (lookahead == '}') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 92:
      ADVANCE_MAP(
        '!', 136,
        '#', 189,
        '$', 169,
        '*', 152,
        '-', 149,
        '0', 234,
        '?', 159,
        '@', 230,
        '\\', 40,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 93:
      ADVANCE_MAP(
        '"', 173,
        '#', 189,
        '%', 158,
        '\'', 106,
        ')', 132,
        '+', 203,
        '-', 193,
        ':', 108,
        '=', 196,
        '?', 200,
      );
      if (lookahead == '\\') SKIP(67);
      if (lookahead == '}') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '\\') SKIP(67);
      if (lookahead == '}') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 95:
      ADVANCE_MAP(
        '"', 173,
        '#', 215,
        '$', 170,
        '&', 105,
        '\'', 106,
        '(', 131,
        '<', 141,
        '>', 142,
        '\\', 63,
        '`', 209,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(95);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(248);
      END_STATE();
    case 96:
      ADVANCE_MAP(
        '"', 173,
        '#', 215,
        '$', 170,
        '&', 105,
        '\'', 106,
        '<', 141,
        '>', 142,
        '\\', 69,
        '`', 210,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(96);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(248);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(171);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '}') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(97);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(251);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '\\') SKIP(79);
      if (lookahead == '}') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '`') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(99);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(248);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(100);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(248);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(101);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 102:
      ADVANCE_MAP(
        '#', 215,
        '%', 156,
        ')', 132,
        '*', 152,
        '+', 148,
        '-', 150,
        '/', 154,
        '?', 159,
      );
      if (lookahead == '\\') SKIP(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(102);
      END_STATE();
    case 103:
      ADVANCE_MAP(
        '#', 215,
        '%', 156,
        ')', 107,
        '*', 152,
        '+', 148,
        '-', 150,
        '/', 154,
        ':', 161,
        '?', 159,
      );
      if (lookahead == '\\') SKIP(77);
      if (lookahead == '`') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(103);
      END_STATE();
    case 104:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') SKIP(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == '&') ADVANCE(134);
      END_STATE();
    case 106:
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      if (lookahead == ')') ADVANCE(147);
      END_STATE();
    case 108:
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '?') ADVANCE(198);
      END_STATE();
    case 109:
      if (lookahead == '`') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 110:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(248);
      END_STATE();
    case 111:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(251);
      END_STATE();
    case 112:
      if (eof) ADVANCE(127);
      ADVANCE_MAP(
        '\n', 256,
        '!', 136,
        '#', 189,
        '$', 169,
        '&', 105,
        '*', 152,
        '-', 149,
        '0', 234,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 159,
        '@', 230,
        '\\', 26,
        '|', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(112);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 113:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(126);
      END_STATE();
    case 114:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(115);
      END_STATE();
    case 115:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '&') ADVANCE(105);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == '\\') SKIP(122);
      if (lookahead == '`') ADVANCE(210);
      if (lookahead == '|') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(115);
      END_STATE();
    case 116:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '&') ADVANCE(105);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == '\\') SKIP(123);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '|') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(116);
      END_STATE();
    case 117:
      if (eof) ADVANCE(127);
      ADVANCE_MAP(
        '\n', 258,
        '"', 173,
        '#', 215,
        '$', 170,
        '&', 105,
        '\'', 106,
        ')', 132,
        ';', 253,
        '<', 141,
        '>', 142,
        '\\', 61,
        '`', 209,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(117);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead)) ADVANCE(248);
      END_STATE();
    case 118:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(116);
      END_STATE();
    case 119:
      if (eof) ADVANCE(127);
      ADVANCE_MAP(
        '\n', 259,
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '&', 105,
        '\'', 106,
        '*', 153,
        '-', 151,
        '0', 233,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 160,
        '@', 231,
        '\\', 13,
        '`', 209,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(119);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(237);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(248);
      END_STATE();
    case 120:
      if (eof) ADVANCE(127);
      ADVANCE_MAP(
        '\n', 261,
        '"', 173,
        '#', 215,
        '$', 170,
        '&', 105,
        '\'', 106,
        ')', 132,
        ';', 253,
        '<', 141,
        '>', 142,
        '\\', 66,
        '`', 210,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(120);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead)) ADVANCE(248);
      END_STATE();
    case 121:
      if (eof) ADVANCE(127);
      if (lookahead == '\r') SKIP(113);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(126);
      END_STATE();
    case 122:
      if (eof) ADVANCE(127);
      if (lookahead == '\r') SKIP(114);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(115);
      END_STATE();
    case 123:
      if (eof) ADVANCE(127);
      if (lookahead == '\r') SKIP(118);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(116);
      END_STATE();
    case 124:
      if (eof) ADVANCE(127);
      ADVANCE_MAP(
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '%', 157,
        '&', 105,
        '\'', 106,
        '(', 131,
        ')', 132,
        '*', 153,
        '+', 165,
        '-', 164,
        '/', 155,
        '0', 232,
        ':', 163,
        ';', 253,
        '<', 141,
        '=', 139,
        '>', 142,
        '?', 160,
        '@', 231,
        '\\', 53,
        '`', 210,
        '{', 128,
        '|', 133,
        '}', 130,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(124);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 125:
      if (eof) ADVANCE(127);
      ADVANCE_MAP(
        '!', 137,
        '"', 173,
        '#', 215,
        '$', 170,
        '\'', 106,
        '(', 131,
        ')', 132,
        '<', 140,
        '>', 142,
        '\\', 56,
        '`', 209,
        '{', 128,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(125);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(248);
      END_STATE();
    case 126:
      if (eof) ADVANCE(127);
      ADVANCE_MAP(
        '"', 173,
        '#', 215,
        '$', 172,
        '&', 105,
        '(', 131,
        ')', 132,
        '+', 165,
        '-', 164,
        '<', 141,
        '=', 138,
        '>', 142,
      );
      if (lookahead == '\\') SKIP(121);
      if (lookahead == '`') ADVANCE(109);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN_LPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(166);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(204);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '?') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_concatenation_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '{') ADVANCE(191);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == '{') ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(191);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '!', 136,
        '"', 173,
        '#', 189,
        '$', 169,
        '*', 152,
        '-', 149,
        '0', 234,
        '?', 159,
        '@', 230,
        '\\', 36,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(86);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(178);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '!', 136,
        '#', 189,
        '$', 169,
        '*', 152,
        '-', 149,
        '0', 234,
        '?', 159,
        '@', 230,
        '\\', 38,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(90);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(179);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(101);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_raw_string);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(213);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(249);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH3);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ2);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_PLUS3);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__expansion_regex_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead == '(') ADVANCE(146);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(216);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(249);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(252);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__comment_word);
      if (lookahead == '\\') ADVANCE(212);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == '\\') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == '\\') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 255,
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '&', 105,
        '\'', 106,
        ')', 132,
        '*', 153,
        '-', 151,
        '0', 233,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 160,
        '@', 231,
        '\\', 7,
        '`', 209,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(248);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 256,
        '!', 136,
        '#', 189,
        '$', 169,
        '&', 105,
        '*', 152,
        '-', 149,
        '0', 234,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 159,
        '@', 230,
        '\\', 26,
        '|', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 259,
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '&', 105,
        '\'', 106,
        '*', 153,
        '-', 151,
        '0', 233,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 160,
        '@', 231,
        '\\', 13,
        '`', 209,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(237);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(248);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 260,
        '!', 136,
        '#', 189,
        '$', 169,
        '&', 105,
        '*', 152,
        '-', 149,
        '0', 234,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 159,
        '@', 230,
        '\\', 28,
        '`', 209,
        '|', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 262,
        '!', 136,
        '#', 189,
        '$', 169,
        '&', 105,
        ')', 132,
        '*', 152,
        '-', 149,
        '0', 234,
        ';', 253,
        '<', 141,
        '>', 142,
        '?', 159,
        '@', 230,
        '\\', 30,
        '|', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '&', 105,
        '\'', 106,
        '*', 153,
        '-', 151,
        '0', 233,
        '<', 141,
        '>', 142,
        '?', 160,
        '@', 231,
        '\\', 17,
        '`', 209,
        '|', 133,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(82);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(240);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(248);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 137,
        '"', 173,
        '#', 189,
        '$', 170,
        '\'', 106,
        '*', 153,
        '-', 151,
        '0', 233,
        '<', 140,
        '>', 142,
        '?', 160,
        '@', 231,
        '\\', 23,
        '`', 209,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(83);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(241);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|') ADVANCE(248);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 136,
        '#', 189,
        '$', 169,
        '&', 105,
        '*', 152,
        '-', 149,
        '0', 234,
        '<', 141,
        '>', 142,
        '?', 159,
        '@', 230,
        '\\', 33,
        '|', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 136,
        '#', 189,
        '$', 169,
        '*', 152,
        '-', 149,
        '0', 234,
        '?', 159,
        '@', 230,
        '\\', 40,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      if (lookahead == '\\') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\\') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\\') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 255,
        '!', 137,
        '#', 190,
        '*', 153,
        '-', 151,
        '0', 233,
        '?', 160,
        '@', 231,
        '\\', 6,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(248);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(60);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 259,
        '!', 137,
        '#', 190,
        '*', 153,
        '-', 151,
        '0', 233,
        '?', 160,
        '@', 231,
        '\\', 12,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(237);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(248);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(65);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '!', 137,
        '#', 190,
        '%', 157,
        '*', 153,
        '+', 165,
        '-', 164,
        '/', 155,
        '0', 232,
        ':', 163,
        '=', 139,
        '?', 160,
        '@', 231,
        '\\', 52,
        '{', 128,
        '}', 130,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '+' < lookahead) &&
          (lookahead < '/' || 'Z' < lookahead) &&
          (lookahead < '_' || '}' < lookahead)) ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '!', 137,
        '#', 190,
        '*', 153,
        '-', 151,
        '0', 233,
        '?', 160,
        '@', 231,
        '\\', 16,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(240);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '!', 137,
        '#', 190,
        '*', 153,
        '-', 151,
        '0', 233,
        '?', 160,
        '@', 231,
        '\\', 22,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(241);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '{') ADVANCE(128);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '}') ADVANCE(130);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(62);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(68);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(70);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(72);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(110);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(213);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(74);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(250);
      if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead))) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
      if (lookahead == '\\') ADVANCE(111);
      if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead))) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
      if (lookahead == '\\') ADVANCE(214);
      if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead))) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_terminator_token1);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(7);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(235);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_terminator_token1);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_terminator_token1);
      if (lookahead == '\n') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_terminator_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(61);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(236);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_terminator_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(13);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(237);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_terminator_token1);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(28);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_terminator_token1);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(66);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(238);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_terminator_token1);
      if (lookahead == '\n') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

bool ts_lex_keywords(t_lexer *lexer, t_state_id state) {
  START_LEXER();
  eof = lexer->funcs.eof((void *)lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
  (void)(lookahead);
  goto next_state;
}