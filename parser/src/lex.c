#include "../static/char_set/charset_inline.h"
#include "./api.h"
#include "gmr/symbols.h"

bool ts_lex(t_lexer *lexer, t_state_id state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '%', 310,
        '&', 295,
        '\'', 174,
        '(', 225,
        ')', 229,
        '*', 305,
        '+', 322,
        '-', 320,
        '/', 308,
        '0', 404,
        ':', 316,
        ';', 450,
        '<', 242,
        '=', 354,
        '>', 246,
        '?', 358,
        '@', 403,
        '\\', 96,
        '^', 293,
        '`', 367,
        'd', 443,
        'e', 440,
        'f', 438,
        'i', 442,
        '{', 232,
        '|', 227,
        '}', 234,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(206);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(142);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(145);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(147);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 230,
        '!', 238,
        '"', 331,
        '#', 372,
        '$', 328,
        '\'', 174,
        '(', 225,
        '<', 244,
        '>', 247,
        '\\', 104,
        '`', 366,
        '{', 232,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(148);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(149);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(150);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(165);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 259,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 13,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(408);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(445);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(383);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(408);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(10);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '\r') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(401);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\r') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(445);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(385);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(409);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(74);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\r') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(74);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(386);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(386);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == ' ') ADVANCE(412);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(83);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(386);
      if (lookahead == '\r') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(83);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(81);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(151);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(82);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(388);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(415);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(87);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\r') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(87);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(396);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(396);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == ' ') ADVANCE(420);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(143);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(396);
      if (lookahead == '\r') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(143);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(163);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(85);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '\n', 260,
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        '*', 304,
        '-', 301,
        '0', 406,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 36,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(384);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\r') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(34);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(387);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(387);
      if (lookahead == '\r') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(84);
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(146);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(389);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\r') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(88);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(391);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\r') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(90);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(397);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\r') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(421);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(144);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\r') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(144);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(393);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(92);
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(155);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(398);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\r') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(156);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(166);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(153);
      END_STATE();
    case 54:
      if (lookahead == '\n') SKIP(162);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(392);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == ' ') ADVANCE(417);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(91);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead == '\r') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(91);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(394);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(418);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(93);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\r') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(93);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 61:
      if (lookahead == '\n') SKIP(170);
      END_STATE();
    case 62:
      if (lookahead == '\n') SKIP(168);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(395);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(395);
      if (lookahead == '\r') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(94);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(399);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\r') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(157);
      END_STATE();
    case 68:
      if (lookahead == '\n') SKIP(159);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '\r') ADVANCE(335);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(400);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\r') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(160);
      END_STATE();
    case 72:
      if (lookahead == '\n') SKIP(167);
      END_STATE();
    case 73:
      if (lookahead == '\n') SKIP(169);
      END_STATE();
    case 74:
      ADVANCE_MAP(
        '\n', 262,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 19,
        '`', 366,
        'e', 376,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(74);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(409);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(445);
      END_STATE();
    case 75:
      if (lookahead == '\n') SKIP(86);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(390);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(89);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '\r') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(89);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 79:
      if (lookahead == '\n') SKIP(164);
      END_STATE();
    case 80:
      if (lookahead == '\n') SKIP(171);
      END_STATE();
    case 81:
      ADVANCE_MAP(
        '\n', 263,
        '"', 331,
        '#', 372,
        '$', 328,
        '&', 173,
        '\'', 174,
        ')', 229,
        ';', 450,
        '<', 243,
        '>', 247,
        '\\', 114,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(81);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead)) ADVANCE(445);
      END_STATE();
    case 82:
      ADVANCE_MAP(
        '\n', 264,
        '"', 331,
        '#', 372,
        '$', 328,
        '&', 173,
        '\'', 174,
        '(', 225,
        ';', 450,
        '<', 243,
        '>', 247,
        '\\', 117,
        '`', 366,
        'e', 444,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(82);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead)) ADVANCE(445);
      END_STATE();
    case 83:
      ADVANCE_MAP(
        '\n', 265,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        ')', 229,
        '*', 307,
        '-', 303,
        '0', 405,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 22,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(83);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(412);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(445);
      END_STATE();
    case 84:
      ADVANCE_MAP(
        '\n', 266,
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        '*', 304,
        '-', 301,
        '0', 406,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 38,
        'e', 381,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 85:
      ADVANCE_MAP(
        '\n', 267,
        '"', 331,
        '#', 372,
        '$', 328,
        '&', 173,
        '\'', 174,
        '(', 225,
        ')', 229,
        ';', 450,
        '<', 243,
        '>', 247,
        '\\', 123,
        '`', 367,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(85);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 86:
      ADVANCE_MAP(
        '\n', 268,
        '"', 331,
        '#', 372,
        '$', 328,
        '&', 173,
        '\'', 174,
        '(', 225,
        ';', 450,
        '<', 243,
        '>', 247,
        '\\', 121,
        '`', 367,
        'e', 444,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead)) ADVANCE(445);
      END_STATE();
    case 87:
      ADVANCE_MAP(
        '\n', 269,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        '<', 243,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 28,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(87);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(415);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(445);
      END_STATE();
    case 88:
      ADVANCE_MAP(
        '\n', 270,
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        ')', 229,
        '*', 304,
        '-', 301,
        '0', 406,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 41,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 89:
      ADVANCE_MAP(
        '\n', 271,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        '<', 244,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 78,
        '`', 366,
        '|', 191,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(89);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(416);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(445);
      END_STATE();
    case 90:
      ADVANCE_MAP(
        '\n', 272,
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        '*', 304,
        '-', 301,
        '0', 406,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 43,
        '`', 366,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(90);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 91:
      ADVANCE_MAP(
        '\n', 273,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        ';', 450,
        '?', 314,
        '@', 403,
        '\\', 57,
        '`', 366,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(91);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(417);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '>' || 'Z' < lookahead) &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 92:
      ADVANCE_MAP(
        '\n', 274,
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        '*', 304,
        '-', 301,
        '0', 406,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 48,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 93:
      ADVANCE_MAP(
        '\n', 275,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        '?', 314,
        '@', 403,
        '\\', 60,
        '`', 366,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(93);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(418);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '>' || 'Z' < lookahead) &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 94:
      ADVANCE_MAP(
        '\n', 276,
        '!', 237,
        '#', 346,
        '$', 327,
        '*', 304,
        '-', 301,
        '0', 406,
        ';', 450,
        '?', 313,
        '@', 402,
        '\\', 64,
        'i', 380,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 95:
      if (lookahead == '\r') SKIP(1);
      if (lookahead == ' ') ADVANCE(419);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(142);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 96:
      if (lookahead == '\r') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(142);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 97:
      if (lookahead == '\r') ADVANCE(340);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 98:
      if (lookahead == '\r') SKIP(2);
      if (lookahead == ' ') ADVANCE(422);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(145);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 99:
      if (lookahead == '\r') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(145);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 100:
      if (lookahead == '\r') ADVANCE(334);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 101:
      if (lookahead == '\r') SKIP(3);
      if (lookahead == ' ') ADVANCE(423);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(147);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 102:
      if (lookahead == '\r') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(147);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 103:
      if (lookahead == '\r') SKIP(4);
      if (lookahead == ' ') ADVANCE(407);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(5);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 104:
      if (lookahead == '\r') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 105:
      if (lookahead == '\r') SKIP(6);
      if (lookahead == ' ') ADVANCE(424);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(148);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 106:
      if (lookahead == '\r') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(148);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 107:
      if (lookahead == '\r') SKIP(7);
      if (lookahead == ' ') ADVANCE(425);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(149);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 108:
      if (lookahead == '\r') SKIP(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(149);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 109:
      if (lookahead == '\r') SKIP(8);
      if (lookahead == ' ') ADVANCE(426);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(150);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 110:
      if (lookahead == '\r') SKIP(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(150);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 111:
      if (lookahead == '\r') SKIP(9);
      if (lookahead == ' ') ADVANCE(428);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(165);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 112:
      if (lookahead == '\r') SKIP(9);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(165);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 113:
      if (lookahead == '\r') SKIP(23);
      if (lookahead == ' ') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(81);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 114:
      if (lookahead == '\r') SKIP(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(81);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 115:
      if (lookahead == '\r') SKIP(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(151);
      END_STATE();
    case 116:
      if (lookahead == '\r') SKIP(25);
      if (lookahead == ' ') ADVANCE(411);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(82);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 117:
      if (lookahead == '\r') SKIP(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(82);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 118:
      if (lookahead == '\r') SKIP(32);
      if (lookahead == ' ') ADVANCE(429);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(163);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 119:
      if (lookahead == '\r') SKIP(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(163);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 120:
      if (lookahead == '\r') SKIP(75);
      if (lookahead == ' ') ADVANCE(414);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(86);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 121:
      if (lookahead == '\r') SKIP(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(86);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 122:
      if (lookahead == '\r') SKIP(33);
      if (lookahead == ' ') ADVANCE(413);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(85);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 123:
      if (lookahead == '\r') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 124:
      if (lookahead == '\r') SKIP(39);
      if (lookahead == ' ') ADVANCE(427);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(146);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 125:
      if (lookahead == '\r') SKIP(39);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(146);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 126:
      if (lookahead == '\r') SKIP(79);
      if (lookahead == ' ') ADVANCE(430);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(164);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 127:
      if (lookahead == '\r') SKIP(79);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(164);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 128:
      if (lookahead == '\r') SKIP(49);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(155);
      END_STATE();
    case 129:
      if (lookahead == '\r') SKIP(52);
      if (lookahead == ' ') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(166);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 130:
      if (lookahead == '\r') SKIP(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(166);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 131:
      if (lookahead == '\r') SKIP(53);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(153);
      END_STATE();
    case 132:
      if (lookahead == '\r') SKIP(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(162);
      END_STATE();
    case 133:
      if (lookahead == '\r') SKIP(61);
      if (lookahead == ' ') ADVANCE(432);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(170);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 134:
      if (lookahead == '\r') SKIP(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(170);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 135:
      if (lookahead == '\r') SKIP(80);
      if (lookahead == ' ') ADVANCE(433);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(171);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 136:
      if (lookahead == '\r') SKIP(80);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(171);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 137:
      if (lookahead == '\r') SKIP(62);
      if (lookahead == ' ') ADVANCE(447);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(168);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 138:
      if (lookahead == '\r') SKIP(62);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(168);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 139:
      if (lookahead == '\r') SKIP(68);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(159);
      END_STATE();
    case 140:
      if (lookahead == '\r') SKIP(72);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(167);
      END_STATE();
    case 141:
      if (lookahead == '\r') SKIP(73);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(169);
      END_STATE();
    case 142:
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '%', 310,
        '&', 295,
        '\'', 174,
        '(', 225,
        ')', 229,
        '*', 305,
        '+', 322,
        '-', 320,
        '/', 308,
        '0', 404,
        ':', 317,
        ';', 450,
        '<', 242,
        '=', 241,
        '>', 246,
        '?', 314,
        '@', 403,
        '\\', 96,
        '^', 293,
        '`', 367,
        'd', 443,
        'e', 440,
        'f', 438,
        'i', 442,
        '{', 232,
        '|', 227,
        '}', 234,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(142);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 143:
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        '<', 243,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 31,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(143);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(420);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(445);
      END_STATE();
    case 144:
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        '<', 244,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 46,
        '`', 366,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(144);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(421);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 145:
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 372,
        '$', 328,
        '\'', 174,
        '(', 225,
        ')', 229,
        ';', 178,
        '<', 244,
        '>', 247,
        '\\', 99,
        '`', 366,
        '{', 232,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(145);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 146:
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 372,
        '$', 328,
        '\'', 174,
        '(', 225,
        ';', 178,
        '<', 244,
        '>', 247,
        '\\', 125,
        '`', 366,
        'e', 444,
        '{', 232,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(146);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 147:
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 372,
        '$', 328,
        '\'', 174,
        '(', 225,
        '<', 244,
        '>', 247,
        '\\', 102,
        '`', 366,
        'e', 441,
        'f', 438,
        '{', 232,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(147);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 148:
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 372,
        '$', 328,
        '\'', 174,
        '(', 225,
        '<', 244,
        '>', 247,
        '\\', 106,
        '`', 366,
        'd', 443,
        '{', 232,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(148);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 149:
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 372,
        '$', 328,
        '\'', 174,
        '(', 225,
        '<', 244,
        '>', 247,
        '\\', 108,
        '`', 366,
        '{', 232,
        '}', 234,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(149);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(445);
      END_STATE();
    case 150:
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 372,
        '$', 328,
        '\'', 174,
        '(', 225,
        '<', 244,
        '>', 247,
        '\\', 110,
        '`', 366,
        'f', 438,
        '{', 232,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(150);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 151:
      ADVANCE_MAP(
        '!', 179,
        '#', 372,
        '%', 312,
        '&', 295,
        ')', 229,
        '*', 306,
        '+', 300,
        '-', 302,
        '/', 309,
        '<', 245,
        '=', 240,
        '>', 248,
        '?', 313,
      );
      if (lookahead == '\\') SKIP(115);
      if (lookahead == '^') ADVANCE(294);
      if (lookahead == '`') ADVANCE(180);
      if (lookahead == '|') ADVANCE(227);
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 152:
      ADVANCE_MAP(
        '!', 237,
        '"', 331,
        '#', 346,
        '$', 327,
        '*', 304,
        '-', 301,
        '0', 406,
        '?', 313,
        '@', 402,
        '\\', 65,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(152);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(336);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(339);
      END_STATE();
    case 153:
      ADVANCE_MAP(
        '!', 237,
        '"', 331,
        '#', 372,
        '$', 330,
        '&', 173,
        '(', 225,
        ')', 229,
        '+', 323,
        '-', 321,
        '<', 243,
        '=', 239,
        '>', 247,
      );
      if (lookahead == '\\') SKIP(131);
      if (lookahead == '`') ADVANCE(180);
      if (lookahead == '|') ADVANCE(228);
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 154:
      ADVANCE_MAP(
        '!', 237,
        '#', 346,
        '$', 327,
        '%', 311,
        '*', 304,
        '+', 360,
        '-', 350,
        '0', 406,
        ':', 177,
        '=', 353,
        '?', 357,
        '@', 402,
      );
      if (lookahead == '\\') SKIP(128);
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(155);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 155:
      ADVANCE_MAP(
        '!', 237,
        '#', 346,
        '$', 327,
        '%', 311,
        '*', 304,
        '-', 301,
        '0', 406,
        '?', 313,
        '@', 402,
      );
      if (lookahead == '\\') SKIP(128);
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(155);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 156:
      ADVANCE_MAP(
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        '*', 304,
        '-', 301,
        '0', 406,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 51,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(156);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 157:
      ADVANCE_MAP(
        '!', 237,
        '#', 346,
        '$', 327,
        ')', 229,
        '*', 304,
        '-', 301,
        '0', 406,
        '?', 313,
        '@', 402,
        '\\', 67,
        '|', 226,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(157);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 158:
      ADVANCE_MAP(
        '!', 237,
        '#', 346,
        '$', 327,
        '*', 304,
        '-', 301,
        '0', 406,
        '?', 313,
        '@', 402,
        '\\', 69,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(158);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(337);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(339);
      END_STATE();
    case 159:
      ADVANCE_MAP(
        '!', 237,
        '#', 346,
        '$', 327,
        '*', 304,
        '-', 301,
        '0', 406,
        '?', 313,
        '@', 402,
      );
      if (lookahead == '\\') SKIP(139);
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(159);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 160:
      ADVANCE_MAP(
        '!', 237,
        '#', 346,
        '$', 327,
        '*', 304,
        '-', 301,
        '0', 406,
        '?', 313,
        '@', 402,
        '\\', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(160);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 161:
      ADVANCE_MAP(
        '"', 331,
        '#', 346,
        '%', 311,
        '\'', 174,
        ')', 229,
        '+', 360,
        '-', 350,
        ':', 177,
        '=', 353,
        '?', 357,
      );
      if (lookahead == '\\') SKIP(132);
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(363);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '%') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(174);
      if (lookahead == ')') ADVANCE(229);
      if (lookahead == '\\') SKIP(132);
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(363);
      END_STATE();
    case 163:
      ADVANCE_MAP(
        '"', 331,
        '#', 372,
        '$', 328,
        '&', 173,
        '\'', 174,
        '(', 225,
        '<', 243,
        '>', 247,
        '\\', 119,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(163);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(445);
      END_STATE();
    case 164:
      ADVANCE_MAP(
        '"', 331,
        '#', 372,
        '$', 328,
        '&', 173,
        '\'', 174,
        '(', 225,
        '<', 243,
        '>', 247,
        '\\', 127,
        '`', 367,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(164);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(445);
      END_STATE();
    case 165:
      ADVANCE_MAP(
        '"', 331,
        '#', 372,
        '$', 328,
        '\'', 174,
        '(', 225,
        '<', 244,
        '>', 247,
        '\\', 112,
        '`', 366,
        '{', 232,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(165);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 166:
      ADVANCE_MAP(
        '"', 331,
        '#', 372,
        '$', 328,
        '\'', 174,
        '(', 225,
        '\\', 130,
        '`', 366,
        'e', 444,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(166);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(372);
      if (lookahead == '$') ADVANCE(175);
      if (lookahead == ')') ADVANCE(229);
      if (lookahead == '\\') SKIP(140);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == '|') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(167);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(372);
      if (lookahead == '$') ADVANCE(329);
      if (lookahead == '\'') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(168);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(448);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(174);
      if (lookahead == ')') ADVANCE(229);
      if (lookahead == '\\') SKIP(141);
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(363);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(328);
      if (lookahead == '\'') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == '`') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(170);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '$') ADVANCE(328);
      if (lookahead == '\'') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(171);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '$') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(172);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 173:
      if (lookahead == '&') ADVANCE(235);
      END_STATE();
    case 174:
      if (lookahead == '\'') ADVANCE(342);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 175:
      if (lookahead == '(') ADVANCE(364);
      if (lookahead == '{') ADVANCE(348);
      END_STATE();
    case 176:
      if (lookahead == ')') ADVANCE(278);
      END_STATE();
    case 177:
      if (lookahead == '+') ADVANCE(359);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '=') ADVANCE(351);
      if (lookahead == '?') ADVANCE(355);
      END_STATE();
    case 178:
      if (lookahead == ';') ADVANCE(231);
      END_STATE();
    case 179:
      if (lookahead == '=') ADVANCE(297);
      END_STATE();
    case 180:
      if (lookahead == '`') ADVANCE(326);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 184:
      if (lookahead == 'f') ADVANCE(217);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 191:
      if (lookahead == '|') ADVANCE(236);
      END_STATE();
    case 192:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(445);
      END_STATE();
    case 193:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(448);
      END_STATE();
    case 194:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\n', 259,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 13,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(194);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(408);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(445);
      END_STATE();
    case 195:
      if (eof) ADVANCE(209);
      if (lookahead == '\n') SKIP(208);
      END_STATE();
    case 196:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\n', 260,
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        '*', 304,
        '-', 301,
        '0', 406,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 36,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(196);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 197:
      if (eof) ADVANCE(209);
      if (lookahead == '\n') SKIP(198);
      END_STATE();
    case 198:
      if (eof) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '#') ADVANCE(372);
      if (lookahead == '&') ADVANCE(173);
      if (lookahead == ')') ADVANCE(229);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == '\\') SKIP(204);
      if (lookahead == '`') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == '|') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(198);
      END_STATE();
    case 199:
      if (eof) ADVANCE(209);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '#') ADVANCE(372);
      if (lookahead == '&') ADVANCE(173);
      if (lookahead == ')') ADVANCE(229);
      if (lookahead == ';') ADVANCE(450);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == '\\') SKIP(205);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == '|') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(199);
      END_STATE();
    case 200:
      if (eof) ADVANCE(209);
      if (lookahead == '\n') SKIP(199);
      END_STATE();
    case 201:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\n', 263,
        '"', 331,
        '#', 372,
        '$', 328,
        '&', 173,
        '\'', 174,
        ')', 229,
        ';', 450,
        '<', 243,
        '>', 247,
        '\\', 114,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(201);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead)) ADVANCE(445);
      END_STATE();
    case 202:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\n', 267,
        '"', 331,
        '#', 372,
        '$', 328,
        '&', 173,
        '\'', 174,
        '(', 225,
        ')', 229,
        ';', 450,
        '<', 243,
        '>', 247,
        '\\', 123,
        '`', 367,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(202);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 203:
      if (eof) ADVANCE(209);
      if (lookahead == '\r') SKIP(195);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(208);
      END_STATE();
    case 204:
      if (eof) ADVANCE(209);
      if (lookahead == '\r') SKIP(197);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(198);
      END_STATE();
    case 205:
      if (eof) ADVANCE(209);
      if (lookahead == '\r') SKIP(200);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(199);
      END_STATE();
    case 206:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '%', 310,
        '&', 295,
        '\'', 174,
        '(', 225,
        ')', 229,
        '*', 305,
        '+', 322,
        '-', 320,
        '/', 308,
        '0', 404,
        ':', 317,
        ';', 450,
        '<', 242,
        '=', 241,
        '>', 246,
        '?', 314,
        '@', 403,
        '\\', 96,
        '^', 293,
        '`', 367,
        'd', 443,
        'e', 440,
        'f', 438,
        'i', 442,
        '{', 232,
        '|', 227,
        '}', 234,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(206);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 207:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 372,
        '$', 328,
        '\'', 174,
        '(', 225,
        ')', 229,
        ';', 178,
        '<', 244,
        '>', 247,
        '\\', 99,
        '`', 366,
        '{', 232,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(207);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 208:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '!', 179,
        '#', 372,
        '$', 329,
        '%', 312,
        '&', 295,
        ')', 176,
        '*', 306,
        '+', 300,
        '-', 302,
        '/', 309,
        ':', 315,
        ';', 178,
        '<', 245,
        '=', 240,
        '>', 248,
        '?', 313,
      );
      if (lookahead == '\\') SKIP(203);
      if (lookahead == '^') ADVANCE(294);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == '|') ADVANCE(227);
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_esac);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == '\\') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_esac);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(292);
      if (lookahead == '|') ADVANCE(236);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(236);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(104);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(407);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(296);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(298);
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '<') ADVANCE(255);
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(257);
      if (lookahead == '=') ADVANCE(298);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '>') ADVANCE(250);
      if (lookahead == '|') ADVANCE(253);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == '>') ADVANCE(249);
      if (lookahead == '|') ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '>') ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(288);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_GT_PIPE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '=') ADVANCE(287);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(287);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(13);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(408);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(36);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(19);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(409);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(114);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(117);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(411);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(22);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(412);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(123);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(121);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(414);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(28);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(415);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(41);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(78);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(416);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(57);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(417);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(48);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(60);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(418);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(64);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN_LPAREN);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(290);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(235);
      if (lookahead == '=') ADVANCE(289);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == '=') ADVANCE(279);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '=') ADVANCE(280);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(281);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(283);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(362);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(361);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(285);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '?') ADVANCE(356);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DASH2);
      if (lookahead == '-') ADVANCE(319);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '+') ADVANCE(318);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS2);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_concatenation_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == '{') ADVANCE(348);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(364);
      if (lookahead == '{') ADVANCE(348);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(348);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(341);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '!', 237,
        '"', 331,
        '#', 346,
        '$', 327,
        '*', 304,
        '-', 301,
        '0', 406,
        '?', 313,
        '@', 402,
        '\\', 65,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(152);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(336);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '!', 237,
        '#', 346,
        '$', 327,
        '*', 304,
        '-', 301,
        '0', 406,
        '?', 313,
        '@', 402,
        '\\', 69,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(158);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(337);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '$') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(172);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(339);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_raw_string);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(370);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(446);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DASH3);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_EQ2);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_PLUS3);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__expansion_regex_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead == '(') ADVANCE(277);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(326);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\r') ADVANCE(333);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(373);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(446);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(449);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__comment_word);
      if (lookahead == '\\') ADVANCE(369);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == 'a') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == 'c') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == 's') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 259,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 13,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(408);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(445);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 260,
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        '*', 304,
        '-', 301,
        '0', 406,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 36,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 262,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 19,
        '`', 366,
        'e', 376,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(74);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(409);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(445);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 265,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        ')', 229,
        '*', 307,
        '-', 303,
        '0', 405,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 22,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(83);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(412);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(445);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 266,
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        '*', 304,
        '-', 301,
        '0', 406,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 38,
        'e', 381,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 269,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        '<', 243,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 28,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(87);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(415);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(445);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 270,
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        ')', 229,
        '*', 304,
        '-', 301,
        '0', 406,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 41,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 271,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        '<', 244,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 78,
        '`', 366,
        '|', 191,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(89);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(416);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(445);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 272,
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        '*', 304,
        '-', 301,
        '0', 406,
        ';', 450,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 43,
        '`', 366,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(90);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 273,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        ';', 450,
        '?', 314,
        '@', 403,
        '\\', 57,
        '`', 366,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(91);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(417);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '>' || 'Z' < lookahead) &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 274,
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        '*', 304,
        '-', 301,
        '0', 406,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 48,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 275,
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        '?', 314,
        '@', 403,
        '\\', 60,
        '`', 366,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(93);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(418);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '>' || 'Z' < lookahead) &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 276,
        '!', 237,
        '#', 346,
        '$', 327,
        '*', 304,
        '-', 301,
        '0', 406,
        ';', 450,
        '?', 313,
        '@', 402,
        '\\', 64,
        'i', 380,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '&', 173,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        '<', 243,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 31,
        '`', 366,
        '|', 228,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(143);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(420);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(445);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 238,
        '"', 331,
        '#', 346,
        '$', 328,
        '\'', 174,
        '*', 307,
        '-', 303,
        '0', 405,
        '<', 244,
        '>', 247,
        '?', 314,
        '@', 403,
        '\\', 46,
        '`', 366,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(144);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(421);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|') ADVANCE(445);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 237,
        '#', 346,
        '$', 327,
        '&', 173,
        '*', 304,
        '-', 301,
        '0', 406,
        '<', 243,
        '>', 247,
        '?', 313,
        '@', 402,
        '\\', 51,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(156);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 237,
        '#', 346,
        '$', 327,
        ')', 229,
        '*', 304,
        '-', 301,
        '0', 406,
        '?', 313,
        '@', 402,
        '\\', 67,
        '|', 226,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(157);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 237,
        '#', 346,
        '$', 327,
        '*', 304,
        '-', 301,
        '0', 406,
        '?', 313,
        '@', 402,
        '\\', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(160);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      if (lookahead == '\\') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\\') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\\') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead == '{') ADVANCE(232);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 259,
        '!', 238,
        '#', 347,
        '*', 307,
        '-', 303,
        '0', 405,
        '?', 314,
        '@', 403,
        '\\', 12,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(408);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 262,
        '!', 238,
        '#', 347,
        '*', 307,
        '-', 303,
        '0', 405,
        '?', 314,
        '@', 403,
        '\\', 18,
        'e', 376,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(409);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(113);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(444);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 265,
        '!', 238,
        '#', 347,
        '*', 307,
        '-', 303,
        '0', 405,
        '?', 314,
        '@', 403,
        '\\', 21,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(412);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(122);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(444);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 269,
        '!', 238,
        '#', 347,
        '*', 307,
        '-', 303,
        '0', 405,
        '?', 314,
        '@', 403,
        '\\', 27,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(415);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 271,
        '!', 238,
        '#', 347,
        '*', 307,
        '-', 303,
        '0', 405,
        '?', 314,
        '@', 403,
        '\\', 77,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(416);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 273,
        '!', 238,
        '#', 347,
        '*', 307,
        '-', 303,
        '0', 405,
        '?', 314,
        '@', 403,
        '\\', 56,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(417);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 275,
        '!', 238,
        '#', 347,
        '*', 307,
        '-', 303,
        '0', 405,
        '?', 314,
        '@', 403,
        '\\', 59,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(418);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '!', 238,
        '#', 347,
        '%', 310,
        '*', 305,
        '+', 322,
        '-', 320,
        '/', 308,
        '0', 404,
        ':', 317,
        '=', 241,
        '?', 314,
        '@', 403,
        '\\', 95,
        '^', 293,
        'd', 443,
        'e', 440,
        'f', 438,
        'i', 442,
        '{', 232,
        '}', 234,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '+' < lookahead) &&
          (lookahead < '/' || '@' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(445);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '!', 238,
        '#', 347,
        '*', 307,
        '-', 303,
        '0', 405,
        '?', 314,
        '@', 403,
        '\\', 30,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(420);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '!', 238,
        '#', 347,
        '*', 307,
        '-', 303,
        '0', 405,
        '?', 314,
        '@', 403,
        '\\', 45,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(421);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead == '{') ADVANCE(232);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == '{') ADVANCE(232);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead == '{') ADVANCE(232);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '}') ADVANCE(234);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == '{') ADVANCE(232);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == '{') ADVANCE(232);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == '{') ADVANCE(232);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(118);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(126);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(444);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(133);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(135);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(445);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(435);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(222);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(220);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(218);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(216);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == 's') ADVANCE(436);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(439);
      if (lookahead == 's') ADVANCE(434);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(439);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(211);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(214);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 's') ADVANCE(434);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(192);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(370);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(137);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(447);
      if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead))) ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
      if (lookahead == '\\') ADVANCE(193);
      if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead))) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
      if (lookahead == '\\') ADVANCE(371);
      if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead))) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';') ADVANCE(231);
      END_STATE();
    default:
      return false;
  }
}

bool ts_lex_keywords(t_lexer *lexer, t_state_id state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'w') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\r') SKIP(9);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_until);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    default:
      return false;
  }
}