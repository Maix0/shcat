#include "./api.h"
#include "gmr/symbols.h"
#include "../static/char_set/charset_inline.h"

bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(255);
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '%', 374,
        '&', 358,
        '\'', 219,
        '(', 271,
        ')', 277,
        '*', 369,
        '+', 386,
        '-', 384,
        '/', 372,
        '0', 473,
        ':', 380,
        ';', 530,
        '<', 291,
        '=', 418,
        '>', 294,
        '?', 422,
        '@', 472,
        '\\', 129,
        '^', 354,
        '_', 476,
        '`', 431,
        'd', 526,
        'e', 523,
        'f', 521,
        'i', 525,
        '{', 280,
        '|', 273,
        '}', 282,
        '~', 388,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(252);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(499);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(186);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(190);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(192);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 278,
        '!', 286,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 225,
        '\'', 219,
        '(', 271,
        '<', 290,
        '>', 295,
        '\\', 137,
        '`', 430,
        '{', 280,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(193);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(194);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(195);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(204);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 310,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 13,
        '_', 477,
        '`', 430,
        'e', 439,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(480);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(446);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(480);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(10);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '\r') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(470);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(470);
      if (lookahead == '\r') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(470);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(528);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(448);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(481);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(94);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '\r') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(94);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(451);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(451);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == ' ') ADVANCE(485);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(109);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(451);
      if (lookahead == '\r') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(109);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(449);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(449);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(484);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(107);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(449);
      if (lookahead == '\r') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(107);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(453);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(488);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(113);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(113);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(455);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(455);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == ' ') ADVANCE(491);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(117);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(455);
      if (lookahead == '\r') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(117);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(105);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(106);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(457);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(457);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(493);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(120);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(457);
      if (lookahead == '\r') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(120);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(459);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(459);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(495);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(123);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(459);
      if (lookahead == '\r') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(123);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(465);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == ' ') ADVANCE(500);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(188);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(465);
      if (lookahead == '\r') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(188);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(466);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '\r') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(501);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(189);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(466);
      if (lookahead == '\r') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(189);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(110);
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(205);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        '\n', 311,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 359,
        ')', 277,
        '*', 368,
        '-', 365,
        '0', 475,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 50,
        '_', 478,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(447);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(447);
      if (lookahead == '\r') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(48);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(196);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(450);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(450);
      if (lookahead == '\r') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(108);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(452);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(452);
      if (lookahead == '\r') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(112);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(454);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(454);
      if (lookahead == '\r') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(116);
      END_STATE();
    case 58:
      if (lookahead == '\n') SKIP(191);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(464);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(464);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(502);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(187);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(464);
      if (lookahead == '\r') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(187);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(456);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(456);
      if (lookahead == '\r') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(119);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(467);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '\r') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(199);
      END_STATE();
    case 66:
      if (lookahead == '\n') SKIP(198);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '&') ADVANCE(356);
      if (lookahead == ';') ADVANCE(530);
      if (lookahead == '\\') SKIP(183);
      if (lookahead == '`') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67);
      END_STATE();
    case 68:
      if (lookahead == '\n') SKIP(115);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(462);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(462);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == ' ') ADVANCE(497);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(126);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(462);
      if (lookahead == '\r') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(126);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 72:
      if (lookahead == '\n') SKIP(207);
      END_STATE();
    case 73:
      if (lookahead == '\n') SKIP(118);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(463);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(463);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(498);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(127);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(463);
      if (lookahead == '\r') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(127);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 77:
      if (lookahead == '\n') SKIP(217);
      END_STATE();
    case 78:
      if (lookahead == '\n') SKIP(212);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(460);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(460);
      if (lookahead == '\r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(124);
      END_STATE();
    case 81:
      if (lookahead == '\n') SKIP(209);
      END_STATE();
    case 82:
      if (lookahead == '\n') SKIP(216);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\r') ADVANCE(396);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(400);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(468);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(468);
      if (lookahead == '\r') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(200);
      END_STATE();
    case 86:
      if (lookahead == '\n') SKIP(202);
      END_STATE();
    case 87:
      if (lookahead == '\n') SKIP(210);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\r') ADVANCE(398);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(401);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(469);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(469);
      if (lookahead == '\r') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(203);
      END_STATE();
    case 91:
      if (lookahead == '\n') SKIP(67);
      END_STATE();
    case 92:
      if (lookahead == '\n') SKIP(208);
      END_STATE();
    case 93:
      if (lookahead == '\n') SKIP(211);
      END_STATE();
    case 94:
      ADVANCE_MAP(
        '\n', 313,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 19,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(94);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(481);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 95:
      if (lookahead == '\n') SKIP(114);
      END_STATE();
    case 96:
      if (lookahead == '\n') SKIP(111);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(461);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(461);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == ' ') ADVANCE(496);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(125);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(461);
      if (lookahead == '\r') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(125);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 100:
      if (lookahead == '\n') SKIP(206);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(458);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(458);
      if (lookahead == '\r') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(122);
      END_STATE();
    case 103:
      if (lookahead == '\n') SKIP(121);
      END_STATE();
    case 104:
      if (lookahead == '\n') SKIP(213);
      END_STATE();
    case 105:
      ADVANCE_MAP(
        '\n', 314,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        ')', 277,
        ';', 530,
        '<', 292,
        '>', 295,
        '\\', 147,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(105);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 106:
      ADVANCE_MAP(
        '\n', 315,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        ';', 530,
        '<', 292,
        '>', 295,
        '\\', 149,
        '`', 430,
        'e', 527,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(106);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead)) ADVANCE(528);
      END_STATE();
    case 107:
      ADVANCE_MAP(
        '\n', 316,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 25,
        '_', 477,
        '`', 430,
        'e', 439,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(107);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(484);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 108:
      ADVANCE_MAP(
        '\n', 317,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 359,
        '*', 368,
        '-', 365,
        '0', 475,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 53,
        '_', 478,
        '`', 430,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(108);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 109:
      ADVANCE_MAP(
        '\n', 318,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        ')', 277,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 22,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(109);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(485);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 110:
      ADVANCE_MAP(
        '\n', 319,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 218,
        '\'', 219,
        '<', 290,
        '>', 295,
        '\\', 151,
        '`', 430,
        '|', 274,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(110);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 111:
      ADVANCE_MAP(
        '\n', 320,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        ';', 530,
        '<', 292,
        '>', 295,
        '\\', 157,
        '`', 431,
        'e', 527,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(111);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead)) ADVANCE(528);
      END_STATE();
    case 112:
      ADVANCE_MAP(
        '\n', 321,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 359,
        '*', 368,
        '-', 365,
        '0', 475,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 55,
        '_', 478,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(112);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 113:
      ADVANCE_MAP(
        '\n', 322,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        ')', 277,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 28,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(113);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(488);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 114:
      ADVANCE_MAP(
        '\n', 323,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        ')', 277,
        ';', 530,
        '<', 292,
        '>', 295,
        '\\', 153,
        '`', 431,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(114);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 115:
      ADVANCE_MAP(
        '\n', 324,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 356,
        '\'', 219,
        '(', 271,
        ';', 530,
        '\\', 165,
        '`', 430,
        'e', 527,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(115);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 116:
      ADVANCE_MAP(
        '\n', 325,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 359,
        '*', 368,
        '-', 365,
        '0', 475,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 57,
        '_', 478,
        'e', 444,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(116);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 117:
      ADVANCE_MAP(
        '\n', 326,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 31,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(117);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(491);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 118:
      ADVANCE_MAP(
        '\n', 327,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 356,
        '\'', 219,
        ';', 530,
        '\\', 169,
        '`', 430,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 119:
      ADVANCE_MAP(
        '\n', 328,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 218,
        '*', 368,
        '-', 365,
        '0', 475,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 63,
        '_', 478,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(119);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 120:
      ADVANCE_MAP(
        '\n', 329,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 218,
        '\'', 219,
        '(', 271,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 36,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(120);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(493);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 121:
      ADVANCE_MAP(
        '\n', 330,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 356,
        '\'', 219,
        ';', 530,
        '\\', 176,
        '`', 431,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(121);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 122:
      ADVANCE_MAP(
        '\n', 331,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 218,
        '*', 368,
        '-', 365,
        '0', 475,
        '<', 290,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 102,
        '_', 478,
        '|', 237,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(122);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 123:
      ADVANCE_MAP(
        '\n', 332,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 218,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 39,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(123);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(495);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 124:
      ADVANCE_MAP(
        '\n', 333,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 356,
        '*', 368,
        '-', 365,
        '0', 475,
        ';', 530,
        '?', 377,
        '@', 471,
        '\\', 80,
        '_', 478,
        'i', 443,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(124);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 125:
      ADVANCE_MAP(
        '\n', 334,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 218,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 290,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 99,
        '_', 477,
        '`', 430,
        '|', 237,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(125);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(496);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 126:
      ADVANCE_MAP(
        '\n', 335,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 356,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '?', 378,
        '@', 472,
        '\\', 71,
        '_', 477,
        '`', 430,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(126);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(497);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '>' || 'Z' < lookahead) &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 127:
      ADVANCE_MAP(
        '\n', 336,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 76,
        '_', 477,
        '`', 430,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(127);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(498);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '>' || 'Z' < lookahead) &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 128:
      if (lookahead == '\r') SKIP(1);
      if (lookahead == ' ') ADVANCE(499);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(186);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 129:
      if (lookahead == '\r') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(186);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 130:
      if (lookahead == '\r') ADVANCE(404);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 131:
      if (lookahead == '\r') SKIP(2);
      if (lookahead == ' ') ADVANCE(503);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(190);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 132:
      if (lookahead == '\r') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(190);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 133:
      if (lookahead == '\r') SKIP(3);
      if (lookahead == ' ') ADVANCE(504);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(192);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 134:
      if (lookahead == '\r') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(192);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 135:
      if (lookahead == '\r') ADVANCE(399);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 136:
      if (lookahead == '\r') SKIP(4);
      if (lookahead == ' ') ADVANCE(479);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(5);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 137:
      if (lookahead == '\r') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 138:
      if (lookahead == '\r') SKIP(6);
      if (lookahead == ' ') ADVANCE(505);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(193);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 139:
      if (lookahead == '\r') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(193);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 140:
      if (lookahead == '\r') SKIP(7);
      if (lookahead == ' ') ADVANCE(506);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(194);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 141:
      if (lookahead == '\r') SKIP(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(194);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 142:
      if (lookahead == '\r') SKIP(8);
      if (lookahead == ' ') ADVANCE(507);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(195);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 143:
      if (lookahead == '\r') SKIP(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(195);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 144:
      if (lookahead == '\r') SKIP(9);
      if (lookahead == ' ') ADVANCE(509);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(204);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 145:
      if (lookahead == '\r') SKIP(9);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(204);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 146:
      if (lookahead == '\r') SKIP(32);
      if (lookahead == ' ') ADVANCE(482);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(105);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 147:
      if (lookahead == '\r') SKIP(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(105);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 148:
      if (lookahead == '\r') SKIP(33);
      if (lookahead == ' ') ADVANCE(483);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(106);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 149:
      if (lookahead == '\r') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(106);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 150:
      if (lookahead == '\r') SKIP(46);
      if (lookahead == ' ') ADVANCE(486);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(110);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 151:
      if (lookahead == '\r') SKIP(46);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(110);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 152:
      if (lookahead == '\r') SKIP(95);
      if (lookahead == ' ') ADVANCE(489);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(114);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 153:
      if (lookahead == '\r') SKIP(95);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(114);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 154:
      if (lookahead == '\r') SKIP(47);
      if (lookahead == ' ') ADVANCE(510);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(205);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 155:
      if (lookahead == '\r') SKIP(47);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(205);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 156:
      if (lookahead == '\r') SKIP(96);
      if (lookahead == ' ') ADVANCE(487);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(111);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 157:
      if (lookahead == '\r') SKIP(96);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(111);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 158:
      if (lookahead == '\r') SKIP(51);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(196);
      END_STATE();
    case 159:
      if (lookahead == '\r') SKIP(58);
      if (lookahead == ' ') ADVANCE(508);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(191);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 160:
      if (lookahead == '\r') SKIP(58);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(191);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 161:
      if (lookahead == '\r') SKIP(100);
      if (lookahead == ' ') ADVANCE(511);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(206);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 162:
      if (lookahead == '\r') SKIP(100);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(206);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 163:
      if (lookahead == '\r') SKIP(66);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(198);
      END_STATE();
    case 164:
      if (lookahead == '\r') SKIP(68);
      if (lookahead == ' ') ADVANCE(490);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(115);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 165:
      if (lookahead == '\r') SKIP(68);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(115);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 166:
      if (lookahead == '\r') SKIP(72);
      if (lookahead == ' ') ADVANCE(512);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(207);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 167:
      if (lookahead == '\r') SKIP(72);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(207);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 168:
      if (lookahead == '\r') SKIP(73);
      if (lookahead == ' ') ADVANCE(492);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(118);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 169:
      if (lookahead == '\r') SKIP(73);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(118);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 170:
      if (lookahead == '\r') SKIP(77);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(217);
      END_STATE();
    case 171:
      if (lookahead == '\r') SKIP(78);
      if (lookahead == ' ') ADVANCE(513);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(212);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 172:
      if (lookahead == '\r') SKIP(78);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(212);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 173:
      if (lookahead == '\r') SKIP(104);
      if (lookahead == ' ') ADVANCE(514);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(213);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 174:
      if (lookahead == '\r') SKIP(104);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(213);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 175:
      if (lookahead == '\r') SKIP(103);
      if (lookahead == ' ') ADVANCE(494);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(121);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 176:
      if (lookahead == '\r') SKIP(103);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(121);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 177:
      if (lookahead == '\r') SKIP(81);
      if (lookahead == ' ') ADVANCE(515);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(209);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 178:
      if (lookahead == '\r') SKIP(81);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(209);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 179:
      if (lookahead == '\r') SKIP(82);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(216);
      END_STATE();
    case 180:
      if (lookahead == '\r') SKIP(86);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(202);
      END_STATE();
    case 181:
      if (lookahead == '\r') SKIP(87);
      if (lookahead == ' ') ADVANCE(516);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(210);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 182:
      if (lookahead == '\r') SKIP(87);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(210);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 183:
      if (lookahead == '\r') SKIP(91);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(67);
      END_STATE();
    case 184:
      if (lookahead == '\r') SKIP(92);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(208);
      END_STATE();
    case 185:
      if (lookahead == '\r') SKIP(93);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(211);
      END_STATE();
    case 186:
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '%', 374,
        '&', 358,
        '\'', 219,
        '(', 271,
        ')', 277,
        '*', 369,
        '+', 386,
        '-', 384,
        '/', 372,
        '0', 473,
        ':', 381,
        ';', 530,
        '<', 291,
        '=', 289,
        '>', 294,
        '?', 378,
        '@', 472,
        '\\', 129,
        '^', 354,
        '_', 476,
        '`', 431,
        'd', 526,
        'e', 523,
        'f', 521,
        'i', 525,
        '{', 280,
        '|', 273,
        '}', 282,
        '~', 388,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(186);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(499);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 187:
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 225,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 290,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 61,
        '_', 477,
        '`', 430,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(187);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(502);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 188:
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 218,
        '\'', 219,
        '(', 271,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 42,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(188);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(500);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 189:
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 218,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 45,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(189);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(501);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 190:
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 225,
        '\'', 219,
        '(', 271,
        ')', 277,
        ';', 223,
        '<', 290,
        '>', 295,
        '\\', 132,
        '`', 430,
        '{', 280,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(190);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 191:
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 225,
        '\'', 219,
        '(', 271,
        ';', 223,
        '<', 290,
        '>', 295,
        '\\', 160,
        '`', 430,
        'e', 527,
        '{', 280,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(191);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 192:
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 225,
        '\'', 219,
        '(', 271,
        '<', 290,
        '>', 295,
        '\\', 134,
        '`', 430,
        'e', 524,
        'f', 521,
        '{', 280,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(192);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 193:
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 225,
        '\'', 219,
        '(', 271,
        '<', 290,
        '>', 295,
        '\\', 139,
        '`', 430,
        'd', 526,
        '{', 280,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(193);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 194:
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 225,
        '\'', 219,
        '(', 271,
        '<', 290,
        '>', 295,
        '\\', 141,
        '`', 430,
        'f', 521,
        '{', 280,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(194);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 195:
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 225,
        '\'', 219,
        '(', 271,
        '<', 290,
        '>', 295,
        '\\', 143,
        '`', 430,
        '{', 280,
        '}', 282,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(195);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(528);
      END_STATE();
    case 196:
      ADVANCE_MAP(
        '!', 224,
        '#', 435,
        '%', 376,
        '&', 357,
        ')', 277,
        '*', 370,
        '+', 364,
        '-', 366,
        '/', 373,
        '<', 293,
        '=', 288,
        '>', 296,
        '?', 377,
      );
      if (lookahead == '\\') SKIP(158);
      if (lookahead == '^') ADVANCE(355);
      if (lookahead == '`') ADVANCE(226);
      if (lookahead == '|') ADVANCE(275);
      if (lookahead == '}') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 197:
      ADVANCE_MAP(
        '!', 285,
        '"', 395,
        '#', 410,
        '$', 392,
        '*', 368,
        '-', 365,
        '0', 475,
        '?', 377,
        '@', 471,
        '\\', 83,
        '_', 478,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(197);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(400);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(403);
      END_STATE();
    case 198:
      ADVANCE_MAP(
        '!', 285,
        '"', 395,
        '#', 435,
        '$', 394,
        '&', 218,
        '(', 271,
        ')', 221,
        '+', 387,
        '-', 385,
        '<', 292,
        '=', 287,
        '>', 295,
      );
      if (lookahead == '\\') SKIP(163);
      if (lookahead == '`') ADVANCE(430);
      if (lookahead == '|') ADVANCE(276);
      if (lookahead == '~') ADVANCE(388);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 199:
      ADVANCE_MAP(
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 218,
        '*', 368,
        '-', 365,
        '0', 475,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 65,
        '_', 478,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(199);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 200:
      ADVANCE_MAP(
        '!', 285,
        '#', 410,
        '$', 392,
        ')', 277,
        '*', 368,
        '-', 365,
        '0', 475,
        '?', 377,
        '@', 471,
        '\\', 85,
        '_', 478,
        '|', 272,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(200);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 201:
      ADVANCE_MAP(
        '!', 285,
        '#', 410,
        '$', 392,
        '*', 368,
        '-', 365,
        '0', 475,
        '?', 377,
        '@', 471,
        '\\', 88,
        '_', 478,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(201);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(401);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(403);
      END_STATE();
    case 202:
      ADVANCE_MAP(
        '!', 285,
        '#', 410,
        '$', 392,
        '*', 368,
        '-', 365,
        '0', 475,
        '?', 377,
        '@', 471,
      );
      if (lookahead == '\\') SKIP(180);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == '}') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 203:
      ADVANCE_MAP(
        '!', 285,
        '#', 410,
        '$', 392,
        '*', 368,
        '-', 365,
        '0', 475,
        '?', 377,
        '@', 471,
        '\\', 90,
        '_', 478,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(203);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 204:
      ADVANCE_MAP(
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 225,
        '\'', 219,
        '(', 271,
        '<', 290,
        '>', 295,
        '\\', 145,
        '`', 430,
        '{', 280,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(204);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 205:
      ADVANCE_MAP(
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 218,
        '\'', 219,
        '(', 271,
        '<', 292,
        '>', 295,
        '\\', 155,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(205);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 206:
      ADVANCE_MAP(
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 218,
        '\'', 219,
        '(', 271,
        '<', 292,
        '>', 295,
        '\\', 162,
        '`', 431,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(206);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 207:
      ADVANCE_MAP(
        '"', 395,
        '#', 435,
        '$', 393,
        '\'', 219,
        '(', 271,
        '\\', 167,
        '`', 430,
        'e', 527,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(207);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == '\\') SKIP(184);
      if (lookahead == '`') ADVANCE(430);
      if (lookahead == '|') ADVANCE(272);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(208);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '$') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '`') ADVANCE(430);
      if (lookahead == '}') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(209);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(528);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '$') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '`') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(210);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == '\\') SKIP(185);
      if (lookahead == '}') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(427);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '#') ADVANCE(436);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == '`') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(212);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '#') ADVANCE(436);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '`') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(213);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '`') ADVANCE(430);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(214);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 215:
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '%') ADVANCE(375);
      if (lookahead == '+') ADVANCE(424);
      if (lookahead == '-') ADVANCE(414);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '=') ADVANCE(417);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '\\') SKIP(179);
      if (lookahead == '}') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(216);
      END_STATE();
    case 216:
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '%') ADVANCE(375);
      if (lookahead == '\\') SKIP(179);
      if (lookahead == '}') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(216);
      END_STATE();
    case 217:
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '&') ADVANCE(218);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == '<') ADVANCE(292);
      if (lookahead == '>') ADVANCE(295);
      if (lookahead == '\\') SKIP(170);
      if (lookahead == '`') ADVANCE(226);
      if (lookahead == '|') ADVANCE(276);
      if (lookahead == '}') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(217);
      END_STATE();
    case 218:
      if (lookahead == '&') ADVANCE(283);
      if (lookahead == '>') ADVANCE(299);
      END_STATE();
    case 219:
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 220:
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '{') ADVANCE(412);
      END_STATE();
    case 221:
      if (lookahead == ')') ADVANCE(339);
      END_STATE();
    case 222:
      if (lookahead == '+') ADVANCE(423);
      if (lookahead == '-') ADVANCE(413);
      if (lookahead == '=') ADVANCE(415);
      if (lookahead == '?') ADVANCE(419);
      END_STATE();
    case 223:
      if (lookahead == ';') ADVANCE(279);
      END_STATE();
    case 224:
      if (lookahead == '=') ADVANCE(361);
      END_STATE();
    case 225:
      if (lookahead == '>') ADVANCE(299);
      END_STATE();
    case 226:
      if (lookahead == '`') ADVANCE(391);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 230:
      if (lookahead == 'f') ADVANCE(263);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 237:
      if (lookahead == '|') ADVANCE(284);
      END_STATE();
    case 238:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(528);
      END_STATE();
    case 239:
      if (eof) ADVANCE(255);
      if (lookahead == '\n') SKIP(254);
      END_STATE();
    case 240:
      if (eof) ADVANCE(255);
      if (lookahead == '\n') SKIP(241);
      END_STATE();
    case 241:
      if (eof) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '&') ADVANCE(359);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == ';') ADVANCE(530);
      if (lookahead == '<') ADVANCE(292);
      if (lookahead == '>') ADVANCE(295);
      if (lookahead == '\\') SKIP(250);
      if (lookahead == '`') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '|') ADVANCE(276);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(241);
      END_STATE();
    case 242:
      if (eof) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '&') ADVANCE(359);
      if (lookahead == ')') ADVANCE(277);
      if (lookahead == ';') ADVANCE(530);
      if (lookahead == '<') ADVANCE(292);
      if (lookahead == '>') ADVANCE(295);
      if (lookahead == '\\') SKIP(251);
      if (lookahead == '`') ADVANCE(430);
      if (lookahead == '|') ADVANCE(276);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(242);
      END_STATE();
    case 243:
      if (eof) ADVANCE(255);
      if (lookahead == '\n') SKIP(242);
      END_STATE();
    case 244:
      if (eof) ADVANCE(255);
      ADVANCE_MAP(
        '\n', 313,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 19,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(244);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(481);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 245:
      if (eof) ADVANCE(255);
      ADVANCE_MAP(
        '\n', 314,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        ')', 277,
        ';', 530,
        '<', 292,
        '>', 295,
        '\\', 147,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(245);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 246:
      if (eof) ADVANCE(255);
      ADVANCE_MAP(
        '\n', 321,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 359,
        '*', 368,
        '-', 365,
        '0', 475,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 55,
        '_', 478,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(246);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 247:
      if (eof) ADVANCE(255);
      ADVANCE_MAP(
        '\n', 323,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        ')', 277,
        ';', 530,
        '<', 292,
        '>', 295,
        '\\', 153,
        '`', 431,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(247);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 248:
      if (eof) ADVANCE(255);
      ADVANCE_MAP(
        '\n', 326,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 31,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(248);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(491);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 249:
      if (eof) ADVANCE(255);
      if (lookahead == '\r') SKIP(239);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(254);
      END_STATE();
    case 250:
      if (eof) ADVANCE(255);
      if (lookahead == '\r') SKIP(240);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(241);
      END_STATE();
    case 251:
      if (eof) ADVANCE(255);
      if (lookahead == '\r') SKIP(243);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(242);
      END_STATE();
    case 252:
      if (eof) ADVANCE(255);
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '%', 374,
        '&', 358,
        '\'', 219,
        '(', 271,
        ')', 277,
        '*', 369,
        '+', 386,
        '-', 384,
        '/', 372,
        '0', 473,
        ':', 381,
        ';', 530,
        '<', 291,
        '=', 289,
        '>', 294,
        '?', 378,
        '@', 472,
        '\\', 129,
        '^', 354,
        '_', 476,
        '`', 431,
        'd', 526,
        'e', 523,
        'f', 521,
        'i', 525,
        '{', 280,
        '|', 273,
        '}', 282,
        '~', 388,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(252);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(499);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 253:
      if (eof) ADVANCE(255);
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 435,
        '$', 393,
        '&', 225,
        '\'', 219,
        '(', 271,
        ')', 277,
        ';', 223,
        '<', 290,
        '>', 295,
        '\\', 132,
        '`', 430,
        '{', 280,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(253);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 254:
      if (eof) ADVANCE(255);
      ADVANCE_MAP(
        '!', 224,
        '#', 435,
        '$', 394,
        '%', 376,
        '&', 357,
        ')', 221,
        '*', 370,
        '+', 364,
        '-', 366,
        '/', 373,
        ':', 379,
        ';', 223,
        '<', 293,
        '=', 288,
        '>', 296,
        '?', 377,
      );
      if (lookahead == '\\') SKIP(249);
      if (lookahead == '^') ADVANCE(355);
      if (lookahead == '`') ADVANCE(430);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == '|') ADVANCE(275);
      if (lookahead == '}') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_esac);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == '\\') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_esac);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&') ADVANCE(337);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '|') ADVANCE(284);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&') ADVANCE(337);
      if (lookahead == '|') ADVANCE(284);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '|') ADVANCE(284);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(284);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(137);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(479);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(360);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&') ADVANCE(301);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&') ADVANCE(301);
      if (lookahead == '<') ADVANCE(307);
      if (lookahead == '=') ADVANCE(362);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&') ADVANCE(301);
      if (lookahead == '<') ADVANCE(306);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(308);
      if (lookahead == '=') ADVANCE(362);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&') ADVANCE(302);
      if (lookahead == '=') ADVANCE(363);
      if (lookahead == '>') ADVANCE(298);
      if (lookahead == '|') ADVANCE(303);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&') ADVANCE(302);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '|') ADVANCE(303);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(363);
      if (lookahead == '>') ADVANCE(298);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(349);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '>') ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      if (lookahead == '-') ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead == '-') ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_GT_PIPE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LT_AMP_DASH);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_GT_AMP_DASH);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(309);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == '=') ADVANCE(348);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(348);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(13);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(480);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(50);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(19);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(481);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(147);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(482);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '\\') ADVANCE(149);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(483);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(25);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(484);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(53);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(318);
      if (lookahead == '\\') ADVANCE(22);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(485);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(151);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(486);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead == '\\') ADVANCE(157);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(487);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(321);
      if (lookahead == '\\') ADVANCE(55);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(322);
      if (lookahead == '\\') ADVANCE(28);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(488);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead == '\\') ADVANCE(153);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(489);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '\\') ADVANCE(165);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(490);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\\') ADVANCE(57);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '\\') ADVANCE(31);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(491);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(169);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(492);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(63);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(36);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(493);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(176);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(494);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(102);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(39);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(495);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(80);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(99);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(496);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(71);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(497);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(76);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(498);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN_LPAREN);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(351);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(283);
      if (lookahead == '=') ADVANCE(350);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(283);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '>') ADVANCE(299);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(283);
      if (lookahead == '>') ADVANCE(299);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(389);
      if (lookahead == '=') ADVANCE(340);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '=') ADVANCE(341);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(342);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(344);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(426);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(425);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(346);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(416);
      if (lookahead == '?') ADVANCE(420);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_DASH2);
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '+') ADVANCE(382);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS2);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_concatenation_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == '{') ADVANCE(412);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == '{') ADVANCE(412);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(403);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\\') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(405);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(403);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(403);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '!', 285,
        '"', 395,
        '#', 410,
        '$', 392,
        '*', 368,
        '-', 365,
        '0', 475,
        '?', 377,
        '@', 471,
        '\\', 83,
        '_', 478,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(197);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(400);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(403);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '!', 285,
        '#', 410,
        '$', 392,
        '*', 368,
        '-', 365,
        '0', 475,
        '?', 377,
        '@', 471,
        '\\', 88,
        '_', 478,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(201);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(401);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < ' ' || '$' < lookahead) &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(403);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '$') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '`') ADVANCE(430);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(214);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(403);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_raw_string);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\\') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(434);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(529);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DASH3);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_EQ2);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_PLUS3);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_expansion_regex_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead == '(') ADVANCE(338);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(391);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\r') ADVANCE(397);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(436);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(529);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__comment_word);
      if (lookahead == '\\') ADVANCE(433);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == 'a') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == 'c') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == 'n') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (lookahead == 's') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 310,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 13,
        '_', 477,
        '`', 430,
        'e', 439,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(480);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 311,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 359,
        ')', 277,
        '*', 368,
        '-', 365,
        '0', 475,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 50,
        '_', 478,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 313,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 19,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(94);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(481);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 316,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 25,
        '_', 477,
        '`', 430,
        'e', 439,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(107);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(484);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 317,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 359,
        '*', 368,
        '-', 365,
        '0', 475,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 53,
        '_', 478,
        '`', 430,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(108);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 318,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '(', 271,
        ')', 277,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 22,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(109);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(485);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 321,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 359,
        '*', 368,
        '-', 365,
        '0', 475,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 55,
        '_', 478,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(112);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 322,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        ')', 277,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 28,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(113);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(488);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 325,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 359,
        '*', 368,
        '-', 365,
        '0', 475,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 57,
        '_', 478,
        'e', 444,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(116);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 326,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 359,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 31,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(117);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(491);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead)) ADVANCE(528);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 328,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 218,
        '*', 368,
        '-', 365,
        '0', 475,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 63,
        '_', 478,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(119);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 329,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 218,
        '\'', 219,
        '(', 271,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 36,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(120);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(493);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 331,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 218,
        '*', 368,
        '-', 365,
        '0', 475,
        '<', 290,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 102,
        '_', 478,
        '|', 237,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(122);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 332,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 218,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 39,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(123);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(495);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 333,
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 356,
        '*', 368,
        '-', 365,
        '0', 475,
        ';', 530,
        '?', 377,
        '@', 471,
        '\\', 80,
        '_', 478,
        'i', 443,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(124);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 334,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 218,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 290,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 99,
        '_', 477,
        '`', 430,
        '|', 237,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(125);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(496);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 335,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 356,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        ';', 530,
        '?', 378,
        '@', 472,
        '\\', 71,
        '_', 477,
        '`', 430,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(126);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(497);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '>' || 'Z' < lookahead) &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '\n', 336,
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 76,
        '_', 477,
        '`', 430,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(127);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(498);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          (lookahead < '>' || 'Z' < lookahead) &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 225,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 290,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 61,
        '_', 477,
        '`', 430,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(187);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(502);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '|') ADVANCE(528);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 218,
        '\'', 219,
        '(', 271,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 42,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(188);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(500);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 286,
        '"', 395,
        '#', 410,
        '$', 393,
        '&', 218,
        '\'', 219,
        '*', 371,
        '-', 367,
        '0', 474,
        '<', 292,
        '>', 295,
        '?', 378,
        '@', 472,
        '\\', 45,
        '_', 477,
        '`', 430,
        '|', 276,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(189);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(501);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(528);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 285,
        '#', 410,
        '$', 392,
        '&', 218,
        '*', 368,
        '-', 365,
        '0', 475,
        '<', 292,
        '>', 295,
        '?', 377,
        '@', 471,
        '\\', 65,
        '_', 478,
        '|', 276,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(199);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 285,
        '#', 410,
        '$', 392,
        ')', 277,
        '*', 368,
        '-', 365,
        '0', 475,
        '?', 377,
        '@', 471,
        '\\', 85,
        '_', 478,
        '|', 272,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(200);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      ADVANCE_MAP(
        '!', 285,
        '#', 410,
        '$', 392,
        '*', 368,
        '-', 365,
        '0', 475,
        '?', 377,
        '@', 471,
        '\\', 90,
        '_', 478,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(203);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
      if (lookahead == '\\') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\\') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '\\') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\\') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '!') ADVANCE(286);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '{') ADVANCE(280);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 310,
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 12,
        '_', 477,
        'e', 439,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(480);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 313,
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 18,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(481);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(146);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(527);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 316,
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 24,
        '_', 477,
        'e', 439,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(484);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 318,
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 21,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(485);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(150);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(527);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 322,
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 27,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(488);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(152);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(527);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 326,
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 30,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(491);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(168);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 329,
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 35,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(493);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(330);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(175);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 332,
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 38,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(495);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 334,
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 98,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(496);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 335,
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 70,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(497);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '\n', 336,
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 75,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(498);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '!', 286,
        '#', 411,
        '%', 374,
        '*', 369,
        '+', 386,
        '-', 384,
        '/', 372,
        '0', 473,
        ':', 381,
        '=', 289,
        '?', 378,
        '@', 472,
        '\\', 128,
        '^', 354,
        '_', 476,
        'd', 526,
        'e', 523,
        'f', 521,
        'i', 525,
        '{', 280,
        '}', 282,
        '~', 388,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(499);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '+' < lookahead) &&
          (lookahead < '/' || '@' < lookahead) &&
          (lookahead < '^' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(528);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 41,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(500);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 44,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(501);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        '!', 286,
        '#', 411,
        '*', 371,
        '-', 367,
        '0', 474,
        '?', 378,
        '@', 472,
        '\\', 60,
        '_', 477,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(502);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(286);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(131);
      if (lookahead == '{') ADVANCE(280);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(286);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == 'f') ADVANCE(521);
      if (lookahead == '{') ADVANCE(280);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(286);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(526);
      if (lookahead == '{') ADVANCE(280);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(286);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead == 'f') ADVANCE(521);
      if (lookahead == '{') ADVANCE(280);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(286);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(142);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead == '}') ADVANCE(282);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(286);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == '{') ADVANCE(280);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '{') ADVANCE(280);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(154);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(161);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(527);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(171);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(173);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '}') ADVANCE(282);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(515);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(181);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(516);
      if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead))) ADVANCE(528);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == 'a') ADVANCE(518);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(268);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(266);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == 'f') ADVANCE(264);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(262);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead == 's') ADVANCE(519);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(522);
      if (lookahead == 's') ADVANCE(517);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(522);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(257);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(260);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == 's') ADVANCE(517);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(238);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(434);
      if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead))) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';') ADVANCE(279);
      END_STATE();
    default:
      return false;
  }
}

bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
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