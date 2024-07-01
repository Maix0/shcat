#include "../static/char_set/charset_inline.h"
#include "./api.h"
#include "gmr/symbols.h"

bool ts_lex(TSLexer *lexer, TSStateId state)
{
	START_LEXER();
	eof = lexer->eof(lexer);
	switch (state)
	{
	case 0:
		if (eof)
			ADVANCE(235);
		ADVANCE_MAP('!', 266, '"', 368, '#', 383, '$', 366, '%', 347, '&', 332, '\'', 200, '(', 251, ')', 257, '*', 342, '+', 359, '-', 357,
					'/', 345, '0', 446, ':', 353, ';', 499, '<', 271, '=', 391, '>', 274, '?', 395, '@', 445, '\\', 119, '^', 328, '_', 449,
					'`', 404, 'd', 495, 'e', 492, 'f', 490, 'i', 494, '{', 260, '|', 253, '}', 262, '~', 361, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(232);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(468);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 1:
		if (lookahead == '\n')
			SKIP(167);
		END_STATE();
	case 2:
		if (lookahead == '\n')
			SKIP(171);
		END_STATE();
	case 3:
		if (lookahead == '\n')
			SKIP(173);
		END_STATE();
	case 4:
		if (lookahead == '\n')
			SKIP(5);
		END_STATE();
	case 5:
		ADVANCE_MAP('\n', 258, '!', 266, '"', 368, '#', 408, '$', 366, '\'', 200, '(', 251, '<', 270, '>', 275, '\\', 127, '`', 403, '{',
					260, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(5);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(452);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 6:
		if (lookahead == '\n')
			SKIP(174);
		END_STATE();
	case 7:
		if (lookahead == '\n')
			SKIP(175);
		END_STATE();
	case 8:
		if (lookahead == '\n')
			SKIP(176);
		END_STATE();
	case 9:
		if (lookahead == '\n')
			SKIP(187);
		END_STATE();
	case 10:
		ADVANCE_MAP('\n', 288, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, '*', 344, '-', 340, '0', 447, ';',
					499, '<', 272, '>', 275, '?', 351, '@', 445, '\\', 13, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(10);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(453);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 11:
		if (lookahead == '\n')
			ADVANCE(419);
		END_STATE();
	case 12:
		if (lookahead == '\n')
			ADVANCE(419);
		if (lookahead == '\r')
			ADVANCE(11);
		if (lookahead == ' ')
			ADVANCE(453);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(10);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 13:
		if (lookahead == '\n')
			ADVANCE(419);
		if (lookahead == '\r')
			ADVANCE(11);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(10);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 14:
		if (lookahead == '\n')
			ADVANCE(443);
		END_STATE();
	case 15:
		if (lookahead == '\n')
			ADVANCE(443);
		if (lookahead == '\r')
			ADVANCE(14);
		END_STATE();
	case 16:
		if (lookahead == '\n')
			ADVANCE(443);
		if (lookahead == '\r')
			ADVANCE(14);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 17:
		if (lookahead == '\n')
			ADVANCE(422);
		END_STATE();
	case 18:
		if (lookahead == '\n')
			ADVANCE(422);
		if (lookahead == '\r')
			ADVANCE(17);
		if (lookahead == ' ')
			ADVANCE(457);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(101);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 19:
		if (lookahead == '\n')
			ADVANCE(422);
		if (lookahead == '\r')
			ADVANCE(17);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(101);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 20:
		if (lookahead == '\n')
			ADVANCE(421);
		END_STATE();
	case 21:
		if (lookahead == '\n')
			ADVANCE(421);
		if (lookahead == '\r')
			ADVANCE(20);
		if (lookahead == ' ')
			ADVANCE(454);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(89);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 22:
		if (lookahead == '\n')
			ADVANCE(421);
		if (lookahead == '\r')
			ADVANCE(20);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(89);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 23:
		if (lookahead == '\n')
			ADVANCE(425);
		END_STATE();
	case 24:
		if (lookahead == '\n')
			ADVANCE(425);
		if (lookahead == '\r')
			ADVANCE(23);
		if (lookahead == ' ')
			ADVANCE(461);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(106);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 25:
		if (lookahead == '\n')
			ADVANCE(425);
		if (lookahead == '\r')
			ADVANCE(23);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(106);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 26:
		if (lookahead == '\n')
			ADVANCE(424);
		END_STATE();
	case 27:
		if (lookahead == '\n')
			ADVANCE(424);
		if (lookahead == '\r')
			ADVANCE(26);
		if (lookahead == ' ')
			ADVANCE(458);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(103);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 28:
		if (lookahead == '\n')
			ADVANCE(424);
		if (lookahead == '\r')
			ADVANCE(26);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(103);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 29:
		if (lookahead == '\n')
			ADVANCE(427);
		END_STATE();
	case 30:
		if (lookahead == '\n')
			ADVANCE(427);
		if (lookahead == '\r')
			ADVANCE(29);
		if (lookahead == ' ')
			ADVANCE(462);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(108);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 31:
		if (lookahead == '\n')
			ADVANCE(427);
		if (lookahead == '\r')
			ADVANCE(29);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(108);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 32:
		if (lookahead == '\n')
			SKIP(99);
		END_STATE();
	case 33:
		if (lookahead == '\n')
			SKIP(100);
		END_STATE();
	case 34:
		if (lookahead == '\n')
			ADVANCE(429);
		END_STATE();
	case 35:
		if (lookahead == '\n')
			ADVANCE(429);
		if (lookahead == '\r')
			ADVANCE(34);
		if (lookahead == ' ')
			ADVANCE(463);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(110);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 36:
		if (lookahead == '\n')
			ADVANCE(429);
		if (lookahead == '\r')
			ADVANCE(34);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(110);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 37:
		if (lookahead == '\n')
			ADVANCE(431);
		END_STATE();
	case 38:
		if (lookahead == '\n')
			ADVANCE(431);
		if (lookahead == '\r')
			ADVANCE(37);
		if (lookahead == ' ')
			ADVANCE(464);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(112);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 39:
		if (lookahead == '\n')
			ADVANCE(431);
		if (lookahead == '\r')
			ADVANCE(37);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(112);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 40:
		if (lookahead == '\n')
			ADVANCE(437);
		END_STATE();
	case 41:
		if (lookahead == '\n')
			ADVANCE(437);
		if (lookahead == '\r')
			ADVANCE(40);
		if (lookahead == ' ')
			ADVANCE(469);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(168);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 42:
		if (lookahead == '\n')
			ADVANCE(437);
		if (lookahead == '\r')
			ADVANCE(40);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(168);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 43:
		if (lookahead == '\n')
			ADVANCE(438);
		END_STATE();
	case 44:
		if (lookahead == '\n')
			ADVANCE(438);
		if (lookahead == '\r')
			ADVANCE(43);
		if (lookahead == ' ')
			ADVANCE(470);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(169);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 45:
		if (lookahead == '\n')
			ADVANCE(438);
		if (lookahead == '\r')
			ADVANCE(43);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(169);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 46:
		if (lookahead == '\n')
			SKIP(177);
		END_STATE();
	case 47:
		if (lookahead == '\n')
			SKIP(185);
		END_STATE();
	case 48:
		ADVANCE_MAP('\n', 289, '!', 265, '#', 383, '$', 365, '&', 331, ')', 257, '*', 341, '-', 338, '0', 448, ';', 499, '<', 272, '>', 275,
					'?', 350, '@', 444, '\\', 50, '_', 451, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(48);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 49:
		if (lookahead == '\n')
			ADVANCE(420);
		END_STATE();
	case 50:
		if (lookahead == '\n')
			ADVANCE(420);
		if (lookahead == '\r')
			ADVANCE(49);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(48);
		END_STATE();
	case 51:
		if (lookahead == '\n')
			ADVANCE(423);
		END_STATE();
	case 52:
		if (lookahead == '\n')
			ADVANCE(423);
		if (lookahead == '\r')
			ADVANCE(51);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(102);
		END_STATE();
	case 53:
		if (lookahead == '\n')
			ADVANCE(426);
		END_STATE();
	case 54:
		if (lookahead == '\n')
			ADVANCE(426);
		if (lookahead == '\r')
			ADVANCE(53);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(107);
		END_STATE();
	case 55:
		if (lookahead == '\n')
			ADVANCE(428);
		END_STATE();
	case 56:
		if (lookahead == '\n')
			ADVANCE(428);
		if (lookahead == '\r')
			ADVANCE(55);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(109);
		END_STATE();
	case 57:
		if (lookahead == '\n')
			SKIP(172);
		END_STATE();
	case 58:
		if (lookahead == '\n')
			ADVANCE(439);
		END_STATE();
	case 59:
		if (lookahead == '\n')
			ADVANCE(439);
		if (lookahead == '\r')
			ADVANCE(58);
		if (lookahead == ' ')
			ADVANCE(471);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(170);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 60:
		if (lookahead == '\n')
			ADVANCE(439);
		if (lookahead == '\r')
			ADVANCE(58);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(170);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 61:
		if (lookahead == '\n')
			SKIP(179);
		END_STATE();
	case 62:
		if (lookahead == '\n')
			ADVANCE(430);
		END_STATE();
	case 63:
		if (lookahead == '\n')
			ADVANCE(430);
		if (lookahead == '\r')
			ADVANCE(62);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(111);
		END_STATE();
	case 64:
		if (lookahead == '\n')
			ADVANCE(440);
		END_STATE();
	case 65:
		if (lookahead == '\n')
			ADVANCE(440);
		if (lookahead == '\r')
			ADVANCE(64);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(180);
		END_STATE();
	case 66:
		if (lookahead == '\n')
			ADVANCE(435);
		END_STATE();
	case 67:
		if (lookahead == '\n')
			ADVANCE(435);
		if (lookahead == '\r')
			ADVANCE(66);
		if (lookahead == ' ')
			ADVANCE(466);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(116);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 68:
		if (lookahead == '\n')
			ADVANCE(435);
		if (lookahead == '\r')
			ADVANCE(66);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(116);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 69:
		if (lookahead == '\n')
			SKIP(188);
		END_STATE();
	case 70:
		if (lookahead == '\n')
			ADVANCE(436);
		END_STATE();
	case 71:
		if (lookahead == '\n')
			ADVANCE(436);
		if (lookahead == '\r')
			ADVANCE(70);
		if (lookahead == ' ')
			ADVANCE(467);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(117);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 72:
		if (lookahead == '\n')
			ADVANCE(436);
		if (lookahead == '\r')
			ADVANCE(70);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(117);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 73:
		if (lookahead == '\n')
			SKIP(198);
		END_STATE();
	case 74:
		if (lookahead == '\n')
			SKIP(193);
		END_STATE();
	case 75:
		if (lookahead == '\n')
			ADVANCE(434);
		END_STATE();
	case 76:
		if (lookahead == '\n')
			ADVANCE(434);
		if (lookahead == '\r')
			ADVANCE(75);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(115);
		END_STATE();
	case 77:
		if (lookahead == '\n')
			SKIP(197);
		END_STATE();
	case 78:
		if (lookahead == '\n')
			SKIP(190);
		END_STATE();
	case 79:
		if (lookahead == '\n')
			ADVANCE(441);
		END_STATE();
	case 80:
		if (lookahead == '\n')
			ADVANCE(441);
		if (lookahead == '\r')
			ADVANCE(79);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(181);
		END_STATE();
	case 81:
		if (lookahead == '\n')
			ADVANCE(373);
		if (lookahead == '\r')
			ADVANCE(369);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(373);
		if (lookahead != 0)
			ADVANCE(376);
		END_STATE();
	case 82:
		if (lookahead == '\n')
			SKIP(183);
		END_STATE();
	case 83:
		if (lookahead == '\n')
			ADVANCE(374);
		if (lookahead == '\r')
			ADVANCE(371);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(374);
		if (lookahead != 0)
			ADVANCE(376);
		END_STATE();
	case 84:
		if (lookahead == '\n')
			SKIP(191);
		END_STATE();
	case 85:
		if (lookahead == '\n')
			ADVANCE(442);
		END_STATE();
	case 86:
		if (lookahead == '\n')
			ADVANCE(442);
		if (lookahead == '\r')
			ADVANCE(85);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(184);
		END_STATE();
	case 87:
		if (lookahead == '\n')
			SKIP(189);
		END_STATE();
	case 88:
		if (lookahead == '\n')
			SKIP(192);
		END_STATE();
	case 89:
		ADVANCE_MAP('\n', 291, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, '*', 344, '-', 340, '0', 447, ';',
					499, '<', 272, '>', 275, '?', 351, '@', 445, '\\', 22, '_', 450, '`', 403, 'e', 412, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(89);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(454);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 90:
		if (lookahead == '\n')
			SKIP(104);
		END_STATE();
	case 91:
		if (lookahead == '\n')
			SKIP(105);
		END_STATE();
	case 92:
		if (lookahead == '\n')
			ADVANCE(433);
		END_STATE();
	case 93:
		if (lookahead == '\n')
			ADVANCE(433);
		if (lookahead == '\r')
			ADVANCE(92);
		if (lookahead == ' ')
			ADVANCE(465);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(114);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 94:
		if (lookahead == '\n')
			ADVANCE(433);
		if (lookahead == '\r')
			ADVANCE(92);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(114);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 95:
		if (lookahead == '\n')
			SKIP(186);
		END_STATE();
	case 96:
		if (lookahead == '\n')
			ADVANCE(432);
		END_STATE();
	case 97:
		if (lookahead == '\n')
			ADVANCE(432);
		if (lookahead == '\r')
			ADVANCE(96);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(113);
		END_STATE();
	case 98:
		if (lookahead == '\n')
			SKIP(194);
		END_STATE();
	case 99:
		ADVANCE_MAP('\n', 292, '"', 368, '#', 408, '$', 366, '&', 331, '\'', 200, '(', 251, ')', 257, ';', 499, '<', 272, '>', 275, '\\',
					137, '`', 403, '|', 254, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(99);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(455);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 100:
		ADVANCE_MAP('\n', 293, '"', 368, '#', 408, '$', 366, '&', 331, '\'', 200, '(', 251, ';', 499, '<', 272, '>', 275, '\\', 139, '`',
					403, 'e', 496, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(100);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(456);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 101:
		ADVANCE_MAP('\n', 294, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, ')', 257, '*', 344, '-', 340, '0',
					447, ';', 499, '<', 272, '>', 275, '?', 351, '@', 445, '\\', 19, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(101);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(457);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 102:
		ADVANCE_MAP('\n', 295, '!', 265, '#', 383, '$', 365, '&', 331, '*', 341, '-', 338, '0', 448, ';', 499, '<', 272, '>', 275, '?', 350,
					'@', 444, '\\', 52, '_', 451, 'e', 417, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(102);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 103:
		ADVANCE_MAP('\n', 296, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '*', 344, '-', 340, '0', 447, ';', 499, '<',
					272, '>', 275, '?', 351, '@', 445, '\\', 28, '_', 450, '`', 403, 'e', 412, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(103);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(458);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 104:
		ADVANCE_MAP('\n', 297, '"', 368, '#', 408, '$', 366, '&', 331, '\'', 200, '(', 251, ')', 257, ';', 499, '<', 272, '>', 275, '\\',
					142, '`', 404, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(104);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(459);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 105:
		ADVANCE_MAP('\n', 298, '"', 368, '#', 408, '$', 366, '&', 331, '\'', 200, '(', 251, ';', 499, '<', 272, '>', 275, '\\', 146, '`',
					404, 'e', 496, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(105);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(460);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 106:
		ADVANCE_MAP('\n', 299, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '*', 344, '-', 340, '0', 447, ';', 499, '<',
					272, '>', 275, '?', 351, '@', 445, '\\', 25, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(106);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(461);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 107:
		ADVANCE_MAP('\n', 300, '!', 265, '#', 383, '$', 365, '&', 331, '*', 341, '-', 338, '0', 448, ';', 499, '<', 272, '>', 275, '?', 350,
					'@', 444, '\\', 54, '_', 451, '`', 403, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(107);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 108:
		ADVANCE_MAP('\n', 301, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, ')', 257, '*', 344, '-', 340, '0', 447, ';',
					499, '<', 272, '>', 275, '?', 351, '@', 445, '\\', 31, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(108);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(462);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 109:
		ADVANCE_MAP('\n', 302, '!', 265, '#', 383, '$', 365, '&', 331, '*', 341, '-', 338, '0', 448, ';', 499, '<', 272, '>', 275, '?', 350,
					'@', 444, '\\', 56, '_', 451, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(109);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 110:
		ADVANCE_MAP('\n', 303, '!', 266, '"', 368, '#', 383, '$', 366, '&', 199, '\'', 200, '(', 251, '*', 344, '-', 340, '0', 447, '<',
					272, '>', 275, '?', 351, '@', 445, '\\', 36, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(110);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(463);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 111:
		ADVANCE_MAP('\n', 304, '!', 265, '#', 383, '$', 365, '&', 199, '*', 341, '-', 338, '0', 448, '<', 272, '>', 275, '?', 350, '@', 444,
					'\\', 63, '_', 451, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(111);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 112:
		ADVANCE_MAP('\n', 305, '!', 266, '"', 368, '#', 383, '$', 366, '&', 199, '\'', 200, '*', 344, '-', 340, '0', 447, '<', 272, '>',
					275, '?', 351, '@', 445, '\\', 39, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(112);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(464);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 113:
		ADVANCE_MAP('\n', 306, '!', 265, '#', 383, '$', 365, '&', 199, '*', 341, '-', 338, '0', 448, '<', 270, '>', 275, '?', 350, '@', 444,
					'\\', 97, '_', 451, '|', 217, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(113);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 114:
		ADVANCE_MAP('\n', 307, '!', 266, '"', 368, '#', 383, '$', 366, '&', 199, '\'', 200, '*', 344, '-', 340, '0', 447, '<', 270, '>',
					275, '?', 351, '@', 445, '\\', 94, '_', 450, '`', 403, '|', 217, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(114);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(465);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 115:
		ADVANCE_MAP('\n', 308, '!', 265, '#', 383, '$', 365, '&', 330, '*', 341, '-', 338, '0', 448, ';', 499, '?', 350, '@', 444, '\\', 76,
					'_', 451, 'i', 416, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(115);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 116:
		ADVANCE_MAP('\n', 309, '!', 266, '"', 368, '#', 383, '$', 366, '&', 330, '\'', 200, '*', 344, '-', 340, '0', 447, ';', 499, '?',
					351, '@', 445, '\\', 68, '_', 450, '`', 403, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(116);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(466);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 117:
		ADVANCE_MAP('\n', 310, '!', 266, '"', 368, '#', 383, '$', 366, '\'', 200, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\',
					72, '_', 450, '`', 403, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(117);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(467);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 118:
		if (lookahead == '\r')
			SKIP(1);
		if (lookahead == ' ')
			ADVANCE(468);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(167);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 119:
		if (lookahead == '\r')
			SKIP(1);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(167);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 120:
		if (lookahead == '\r')
			ADVANCE(377);
		if (lookahead != 0)
			ADVANCE(376);
		END_STATE();
	case 121:
		if (lookahead == '\r')
			SKIP(2);
		if (lookahead == ' ')
			ADVANCE(472);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(171);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 122:
		if (lookahead == '\r')
			SKIP(2);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(171);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 123:
		if (lookahead == '\r')
			SKIP(3);
		if (lookahead == ' ')
			ADVANCE(473);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(173);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 124:
		if (lookahead == '\r')
			SKIP(3);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(173);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 125:
		if (lookahead == '\r')
			ADVANCE(372);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(375);
		if (lookahead != 0)
			ADVANCE(376);
		END_STATE();
	case 126:
		if (lookahead == '\r')
			SKIP(4);
		if (lookahead == ' ')
			ADVANCE(452);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(5);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 127:
		if (lookahead == '\r')
			SKIP(4);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(5);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 128:
		if (lookahead == '\r')
			SKIP(6);
		if (lookahead == ' ')
			ADVANCE(474);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(174);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 129:
		if (lookahead == '\r')
			SKIP(6);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(174);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 130:
		if (lookahead == '\r')
			SKIP(7);
		if (lookahead == ' ')
			ADVANCE(475);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(175);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 131:
		if (lookahead == '\r')
			SKIP(7);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(175);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 132:
		if (lookahead == '\r')
			SKIP(8);
		if (lookahead == ' ')
			ADVANCE(476);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(176);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 133:
		if (lookahead == '\r')
			SKIP(8);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(176);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 134:
		if (lookahead == '\r')
			SKIP(9);
		if (lookahead == ' ')
			ADVANCE(478);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(187);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 135:
		if (lookahead == '\r')
			SKIP(9);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(187);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 136:
		if (lookahead == '\r')
			SKIP(32);
		if (lookahead == ' ')
			ADVANCE(455);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(99);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 137:
		if (lookahead == '\r')
			SKIP(32);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(99);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 138:
		if (lookahead == '\r')
			SKIP(33);
		if (lookahead == ' ')
			ADVANCE(456);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(100);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 139:
		if (lookahead == '\r')
			SKIP(33);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(100);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 140:
		if (lookahead == '\r')
			SKIP(46);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(177);
		END_STATE();
	case 141:
		if (lookahead == '\r')
			SKIP(90);
		if (lookahead == ' ')
			ADVANCE(459);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(104);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 142:
		if (lookahead == '\r')
			SKIP(90);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(104);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 143:
		if (lookahead == '\r')
			SKIP(47);
		if (lookahead == ' ')
			ADVANCE(479);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(185);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 144:
		if (lookahead == '\r')
			SKIP(47);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(185);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 145:
		if (lookahead == '\r')
			SKIP(91);
		if (lookahead == ' ')
			ADVANCE(460);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(105);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 146:
		if (lookahead == '\r')
			SKIP(91);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(105);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 147:
		if (lookahead == '\r')
			SKIP(57);
		if (lookahead == ' ')
			ADVANCE(477);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(172);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 148:
		if (lookahead == '\r')
			SKIP(57);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(172);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 149:
		if (lookahead == '\r')
			SKIP(95);
		if (lookahead == ' ')
			ADVANCE(480);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(186);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 150:
		if (lookahead == '\r')
			SKIP(95);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(186);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 151:
		if (lookahead == '\r')
			SKIP(61);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(179);
		END_STATE();
	case 152:
		if (lookahead == '\r')
			SKIP(69);
		if (lookahead == ' ')
			ADVANCE(481);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(188);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 153:
		if (lookahead == '\r')
			SKIP(69);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(188);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 154:
		if (lookahead == '\r')
			SKIP(73);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(198);
		END_STATE();
	case 155:
		if (lookahead == '\r')
			SKIP(74);
		if (lookahead == ' ')
			ADVANCE(482);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(193);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 156:
		if (lookahead == '\r')
			SKIP(74);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(193);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 157:
		if (lookahead == '\r')
			SKIP(98);
		if (lookahead == ' ')
			ADVANCE(483);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(194);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 158:
		if (lookahead == '\r')
			SKIP(98);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(194);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 159:
		if (lookahead == '\r')
			SKIP(77);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(197);
		END_STATE();
	case 160:
		if (lookahead == '\r')
			SKIP(78);
		if (lookahead == ' ')
			ADVANCE(484);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(190);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 161:
		if (lookahead == '\r')
			SKIP(78);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(190);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 162:
		if (lookahead == '\r')
			SKIP(82);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(183);
		END_STATE();
	case 163:
		if (lookahead == '\r')
			SKIP(84);
		if (lookahead == ' ')
			ADVANCE(485);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(191);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 164:
		if (lookahead == '\r')
			SKIP(84);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(191);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 165:
		if (lookahead == '\r')
			SKIP(87);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(189);
		END_STATE();
	case 166:
		if (lookahead == '\r')
			SKIP(88);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(192);
		END_STATE();
	case 167:
		ADVANCE_MAP('!', 266, '"', 368, '#', 383, '$', 366, '%', 347, '&', 332, '\'', 200, '(', 251, ')', 257, '*', 342, '+', 359, '-', 357,
					'/', 345, '0', 446, ':', 354, ';', 499, '<', 271, '=', 269, '>', 274, '?', 351, '@', 445, '\\', 119, '^', 328, '_', 449,
					'`', 404, 'd', 495, 'e', 492, 'f', 490, 'i', 494, '{', 260, '|', 253, '}', 262, '~', 361, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(167);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(468);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 168:
		ADVANCE_MAP('!', 266, '"', 368, '#', 383, '$', 366, '&', 199, '\'', 200, '(', 251, '*', 344, '-', 340, '0', 447, '<', 272, '>', 275,
					'?', 351, '@', 445, '\\', 42, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(168);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(469);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 169:
		ADVANCE_MAP('!', 266, '"', 368, '#', 383, '$', 366, '&', 199, '\'', 200, '*', 344, '-', 340, '0', 447, '<', 272, '>', 275, '?', 351,
					'@', 445, '\\', 45, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(169);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(470);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 170:
		ADVANCE_MAP('!', 266, '"', 368, '#', 383, '$', 366, '\'', 200, '*', 344, '-', 340, '0', 447, '<', 270, '>', 275, '?', 351, '@', 445,
					'\\', 60, '_', 450, '`', 403, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(170);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(471);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 171:
		ADVANCE_MAP('!', 266, '"', 368, '#', 408, '$', 366, '\'', 200, '(', 251, ')', 257, ';', 204, '<', 270, '>', 275, '\\', 122, '`',
					403, '{', 260, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(171);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(472);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != '{' && lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 172:
		ADVANCE_MAP('!', 266, '"', 368, '#', 408, '$', 366, '\'', 200, '(', 251, ';', 204, '<', 270, '>', 275, '\\', 148, '`', 403, 'e',
					496, '{', 260, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(172);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(477);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != '{' && lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 173:
		ADVANCE_MAP('!', 266, '"', 368, '#', 408, '$', 366, '\'', 200, '(', 251, '<', 270, '>', 275, '\\', 124, '`', 403, 'e', 493, 'f',
					490, '{', 260, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(173);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(473);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 174:
		ADVANCE_MAP('!', 266, '"', 368, '#', 408, '$', 366, '\'', 200, '(', 251, '<', 270, '>', 275, '\\', 129, '`', 403, 'd', 495, '{',
					260, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(174);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(474);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 175:
		ADVANCE_MAP('!', 266, '"', 368, '#', 408, '$', 366, '\'', 200, '(', 251, '<', 270, '>', 275, '\\', 131, '`', 403, '{', 260, '}',
					262, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(175);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(475);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '{' || '}' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 176:
		ADVANCE_MAP('!', 266, '"', 368, '#', 408, '$', 366, '\'', 200, '(', 251, '<', 270, '>', 275, '\\', 133, '`', 403, 'f', 490, '{',
					260, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(176);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(476);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 177:
		ADVANCE_MAP('!', 205, '#', 408, '%', 349, '&', 332, ')', 257, '*', 343, '+', 337, '-', 339, '/', 346, '<', 273, '=', 268, '>', 276,
					'?', 350, );
		if (lookahead == '\\')
			SKIP(140);
		if (lookahead == '^')
			ADVANCE(329);
		if (lookahead == '`')
			ADVANCE(206);
		if (lookahead == '|')
			ADVANCE(255);
		if (lookahead == '}')
			ADVANCE(261);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(177);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 178:
		ADVANCE_MAP('!', 265, '"', 368, '#', 383, '$', 365, '*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', 81, '_', 451, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(178);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(373);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		if (lookahead != 0 && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(376);
		END_STATE();
	case 179:
		ADVANCE_MAP('!', 265, '"', 368, '#', 408, '$', 367, '&', 199, '(', 251, ')', 202, '+', 360, '-', 358, '<', 272, '=', 267, '>',
					275, );
		if (lookahead == '\\')
			SKIP(151);
		if (lookahead == '`')
			ADVANCE(403);
		if (lookahead == '|')
			ADVANCE(256);
		if (lookahead == '~')
			ADVANCE(361);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(179);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(382);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 180:
		ADVANCE_MAP('!', 265, '#', 383, '$', 365, '&', 199, '*', 341, '-', 338, '0', 448, '<', 272, '>', 275, '?', 350, '@', 444, '\\', 65,
					'_', 451, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(180);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 181:
		ADVANCE_MAP('!', 265, '#', 383, '$', 365, ')', 257, '*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', 80, '_', 451, '|',
					252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(181);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 182:
		ADVANCE_MAP('!', 265, '#', 383, '$', 365, '*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', 83, '_', 451, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(182);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(374);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		if (lookahead != 0 && (lookahead < ' ' || '$' < lookahead) && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(376);
		END_STATE();
	case 183:
		ADVANCE_MAP('!', 265, '#', 383, '$', 365, '*', 341, '-', 338, '0', 448, '?', 350, '@', 444, );
		if (lookahead == '\\')
			SKIP(162);
		if (lookahead == '_')
			ADVANCE(451);
		if (lookahead == '}')
			ADVANCE(261);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(183);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 184:
		ADVANCE_MAP('!', 265, '#', 383, '$', 365, '*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', 86, '_', 451, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(184);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 185:
		ADVANCE_MAP('"', 368, '#', 408, '$', 366, '&', 199, '\'', 200, '(', 251, '<', 272, '>', 275, '\\', 144, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(185);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(479);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 186:
		ADVANCE_MAP('"', 368, '#', 408, '$', 366, '&', 199, '\'', 200, '(', 251, '<', 272, '>', 275, '\\', 150, '`', 404, '|', 256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(186);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(480);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 187:
		ADVANCE_MAP('"', 368, '#', 408, '$', 366, '\'', 200, '(', 251, '<', 270, '>', 275, '\\', 135, '`', 403, '{', 260, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(187);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(478);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 188:
		ADVANCE_MAP('"', 368, '#', 408, '$', 366, '\'', 200, '(', 251, '\\', 153, '`', 403, 'e', 496, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(188);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(481);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 189:
		if (lookahead == '"')
			ADVANCE(368);
		if (lookahead == '#')
			ADVANCE(408);
		if (lookahead == '$')
			ADVANCE(201);
		if (lookahead == ')')
			ADVANCE(257);
		if (lookahead == '\\')
			SKIP(165);
		if (lookahead == '`')
			ADVANCE(403);
		if (lookahead == '|')
			ADVANCE(252);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(189);
		END_STATE();
	case 190:
		if (lookahead == '"')
			ADVANCE(368);
		if (lookahead == '#')
			ADVANCE(408);
		if (lookahead == '$')
			ADVANCE(367);
		if (lookahead == '\'')
			ADVANCE(200);
		if (lookahead == '\\')
			ADVANCE(161);
		if (lookahead == '`')
			ADVANCE(403);
		if (lookahead == '}')
			ADVANCE(262);
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(190);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(484);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			lookahead != '|' && lookahead != '}')
			ADVANCE(497);
		END_STATE();
	case 191:
		if (lookahead == '"')
			ADVANCE(368);
		if (lookahead == '#')
			ADVANCE(408);
		if (lookahead == '$')
			ADVANCE(367);
		if (lookahead == '\'')
			ADVANCE(200);
		if (lookahead == '\\')
			ADVANCE(164);
		if (lookahead == '`')
			ADVANCE(403);
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(191);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(485);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 192:
		if (lookahead == '"')
			ADVANCE(368);
		if (lookahead == '#')
			ADVANCE(408);
		if (lookahead == '\'')
			ADVANCE(200);
		if (lookahead == ')')
			ADVANCE(257);
		if (lookahead == '\\')
			SKIP(166);
		if (lookahead == '}')
			ADVANCE(261);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(400);
		END_STATE();
	case 193:
		if (lookahead == '"')
			ADVANCE(368);
		if (lookahead == '#')
			ADVANCE(409);
		if (lookahead == '$')
			ADVANCE(366);
		if (lookahead == '\'')
			ADVANCE(200);
		if (lookahead == '\\')
			ADVANCE(156);
		if (lookahead == '`')
			ADVANCE(404);
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(193);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(482);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 194:
		if (lookahead == '"')
			ADVANCE(368);
		if (lookahead == '#')
			ADVANCE(409);
		if (lookahead == '$')
			ADVANCE(366);
		if (lookahead == '\'')
			ADVANCE(200);
		if (lookahead == '\\')
			ADVANCE(158);
		if (lookahead == '`')
			ADVANCE(403);
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(194);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(483);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 195:
		if (lookahead == '"')
			ADVANCE(368);
		if (lookahead == '#')
			ADVANCE(378);
		if (lookahead == '$')
			ADVANCE(366);
		if (lookahead == '\\')
			ADVANCE(125);
		if (lookahead == '`')
			ADVANCE(403);
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(195);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(375);
		if (lookahead != 0)
			ADVANCE(376);
		END_STATE();
	case 196:
		if (lookahead == '#')
			ADVANCE(383);
		if (lookahead == '%')
			ADVANCE(348);
		if (lookahead == '+')
			ADVANCE(397);
		if (lookahead == '-')
			ADVANCE(387);
		if (lookahead == ':')
			ADVANCE(203);
		if (lookahead == '=')
			ADVANCE(390);
		if (lookahead == '?')
			ADVANCE(394);
		if (lookahead == '\\')
			SKIP(159);
		if (lookahead == '}')
			ADVANCE(261);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(197);
		END_STATE();
	case 197:
		if (lookahead == '#')
			ADVANCE(383);
		if (lookahead == '%')
			ADVANCE(348);
		if (lookahead == '\\')
			SKIP(159);
		if (lookahead == '}')
			ADVANCE(261);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(197);
		END_STATE();
	case 198:
		if (lookahead == '#')
			ADVANCE(408);
		if (lookahead == '&')
			ADVANCE(199);
		if (lookahead == ')')
			ADVANCE(257);
		if (lookahead == '<')
			ADVANCE(272);
		if (lookahead == '>')
			ADVANCE(275);
		if (lookahead == '\\')
			SKIP(154);
		if (lookahead == '`')
			ADVANCE(206);
		if (lookahead == '|')
			ADVANCE(256);
		if (lookahead == '}')
			ADVANCE(261);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(198);
		END_STATE();
	case 199:
		if (lookahead == '&')
			ADVANCE(263);
		END_STATE();
	case 200:
		if (lookahead == '\'')
			ADVANCE(379);
		if (lookahead != 0)
			ADVANCE(200);
		END_STATE();
	case 201:
		if (lookahead == '(')
			ADVANCE(401);
		if (lookahead == '{')
			ADVANCE(385);
		END_STATE();
	case 202:
		if (lookahead == ')')
			ADVANCE(313);
		END_STATE();
	case 203:
		if (lookahead == '+')
			ADVANCE(396);
		if (lookahead == '-')
			ADVANCE(386);
		if (lookahead == '=')
			ADVANCE(388);
		if (lookahead == '?')
			ADVANCE(392);
		END_STATE();
	case 204:
		if (lookahead == ';')
			ADVANCE(259);
		END_STATE();
	case 205:
		if (lookahead == '=')
			ADVANCE(334);
		END_STATE();
	case 206:
		if (lookahead == '`')
			ADVANCE(364);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(206);
		END_STATE();
	case 207:
		if (lookahead == 'a')
			ADVANCE(208);
		END_STATE();
	case 208:
		if (lookahead == 'c')
			ADVANCE(247);
		END_STATE();
	case 209:
		if (lookahead == 'e')
			ADVANCE(245);
		END_STATE();
	case 210:
		if (lookahead == 'f')
			ADVANCE(243);
		END_STATE();
	case 211:
		if (lookahead == 'i')
			ADVANCE(241);
		END_STATE();
	case 212:
		if (lookahead == 'i')
			ADVANCE(210);
		if (lookahead == 's')
			ADVANCE(209);
		END_STATE();
	case 213:
		if (lookahead == 'l')
			ADVANCE(212);
		if (lookahead == 's')
			ADVANCE(207);
		END_STATE();
	case 214:
		if (lookahead == 'n')
			ADVANCE(236);
		END_STATE();
	case 215:
		if (lookahead == 'o')
			ADVANCE(239);
		END_STATE();
	case 216:
		if (lookahead == 's')
			ADVANCE(207);
		END_STATE();
	case 217:
		if (lookahead == '|')
			ADVANCE(264);
		END_STATE();
	case 218:
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 219:
		if (eof)
			ADVANCE(235);
		ADVANCE_MAP('\n', 288, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, '*', 344, '-', 340, '0', 447, ';',
					499, '<', 272, '>', 275, '?', 351, '@', 445, '\\', 13, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(219);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(453);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 220:
		if (eof)
			ADVANCE(235);
		if (lookahead == '\n')
			SKIP(234);
		END_STATE();
	case 221:
		if (eof)
			ADVANCE(235);
		if (lookahead == '\n')
			SKIP(222);
		END_STATE();
	case 222:
		if (eof)
			ADVANCE(235);
		if (lookahead == '\n')
			ADVANCE(290);
		if (lookahead == '#')
			ADVANCE(408);
		if (lookahead == '&')
			ADVANCE(331);
		if (lookahead == ')')
			ADVANCE(257);
		if (lookahead == ';')
			ADVANCE(499);
		if (lookahead == '<')
			ADVANCE(272);
		if (lookahead == '>')
			ADVANCE(275);
		if (lookahead == '\\')
			SKIP(230);
		if (lookahead == '`')
			ADVANCE(404);
		if (lookahead == 'e')
			ADVANCE(216);
		if (lookahead == 'i')
			ADVANCE(214);
		if (lookahead == '|')
			ADVANCE(256);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(222);
		END_STATE();
	case 223:
		if (eof)
			ADVANCE(235);
		if (lookahead == '\n')
			ADVANCE(290);
		if (lookahead == '#')
			ADVANCE(408);
		if (lookahead == '&')
			ADVANCE(331);
		if (lookahead == ')')
			ADVANCE(257);
		if (lookahead == ';')
			ADVANCE(499);
		if (lookahead == '<')
			ADVANCE(272);
		if (lookahead == '>')
			ADVANCE(275);
		if (lookahead == '\\')
			SKIP(231);
		if (lookahead == '`')
			ADVANCE(403);
		if (lookahead == '|')
			ADVANCE(256);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(223);
		END_STATE();
	case 224:
		if (eof)
			ADVANCE(235);
		if (lookahead == '\n')
			SKIP(223);
		END_STATE();
	case 225:
		if (eof)
			ADVANCE(235);
		ADVANCE_MAP('\n', 292, '"', 368, '#', 408, '$', 366, '&', 331, '\'', 200, '(', 251, ')', 257, ';', 499, '<', 272, '>', 275, '\\',
					137, '`', 403, '|', 254, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(225);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(455);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 226:
		if (eof)
			ADVANCE(235);
		ADVANCE_MAP('\n', 297, '"', 368, '#', 408, '$', 366, '&', 331, '\'', 200, '(', 251, ')', 257, ';', 499, '<', 272, '>', 275, '\\',
					142, '`', 404, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(226);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(459);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 227:
		if (eof)
			ADVANCE(235);
		ADVANCE_MAP('\n', 299, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '*', 344, '-', 340, '0', 447, ';', 499, '<',
					272, '>', 275, '?', 351, '@', 445, '\\', 25, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(227);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(461);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 228:
		if (eof)
			ADVANCE(235);
		ADVANCE_MAP('\n', 302, '!', 265, '#', 383, '$', 365, '&', 331, '*', 341, '-', 338, '0', 448, ';', 499, '<', 272, '>', 275, '?', 350,
					'@', 444, '\\', 56, '_', 451, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(228);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 229:
		if (eof)
			ADVANCE(235);
		if (lookahead == '\r')
			SKIP(220);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(234);
		END_STATE();
	case 230:
		if (eof)
			ADVANCE(235);
		if (lookahead == '\r')
			SKIP(221);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(222);
		END_STATE();
	case 231:
		if (eof)
			ADVANCE(235);
		if (lookahead == '\r')
			SKIP(224);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(223);
		END_STATE();
	case 232:
		if (eof)
			ADVANCE(235);
		ADVANCE_MAP('!', 266, '"', 368, '#', 383, '$', 366, '%', 347, '&', 332, '\'', 200, '(', 251, ')', 257, '*', 342, '+', 359, '-', 357,
					'/', 345, '0', 446, ':', 354, ';', 499, '<', 271, '=', 269, '>', 274, '?', 351, '@', 445, '\\', 119, '^', 328, '_', 449,
					'`', 404, 'd', 495, 'e', 492, 'f', 490, 'i', 494, '{', 260, '|', 253, '}', 262, '~', 361, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(232);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(468);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 233:
		if (eof)
			ADVANCE(235);
		ADVANCE_MAP('!', 266, '"', 368, '#', 408, '$', 366, '\'', 200, '(', 251, ')', 257, ';', 204, '<', 270, '>', 275, '\\', 122, '`',
					403, '{', 260, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(233);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(472);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != '{' && lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 234:
		if (eof)
			ADVANCE(235);
		ADVANCE_MAP('!', 205, '#', 408, '$', 367, '%', 349, '&', 332, ')', 202, '*', 343, '+', 337, '-', 339, '/', 346, ':', 352, ';', 204,
					'<', 273, '=', 268, '>', 276, '?', 350, );
		if (lookahead == '\\')
			SKIP(229);
		if (lookahead == '^')
			ADVANCE(329);
		if (lookahead == '`')
			ADVANCE(403);
		if (lookahead == 'd')
			ADVANCE(215);
		if (lookahead == 'e')
			ADVANCE(213);
		if (lookahead == 'f')
			ADVANCE(211);
		if (lookahead == 'i')
			ADVANCE(214);
		if (lookahead == '|')
			ADVANCE(255);
		if (lookahead == '}')
			ADVANCE(261);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(234);
		END_STATE();
	case 235:
		ACCEPT_TOKEN(ts_builtin_sym_end);
		END_STATE();
	case 236:
		ACCEPT_TOKEN(anon_sym_in);
		END_STATE();
	case 237:
		ACCEPT_TOKEN(anon_sym_in);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 238:
		ACCEPT_TOKEN(anon_sym_in);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 239:
		ACCEPT_TOKEN(anon_sym_do);
		END_STATE();
	case 240:
		ACCEPT_TOKEN(anon_sym_do);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 241:
		ACCEPT_TOKEN(anon_sym_fi);
		END_STATE();
	case 242:
		ACCEPT_TOKEN(anon_sym_fi);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 243:
		ACCEPT_TOKEN(anon_sym_elif);
		END_STATE();
	case 244:
		ACCEPT_TOKEN(anon_sym_elif);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 245:
		ACCEPT_TOKEN(anon_sym_else);
		END_STATE();
	case 246:
		ACCEPT_TOKEN(anon_sym_else);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 247:
		ACCEPT_TOKEN(anon_sym_esac);
		END_STATE();
	case 248:
		ACCEPT_TOKEN(anon_sym_esac);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 249:
		ACCEPT_TOKEN(anon_sym_esac);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 250:
		ACCEPT_TOKEN(anon_sym_esac);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 251:
		ACCEPT_TOKEN(anon_sym_LPAREN);
		END_STATE();
	case 252:
		ACCEPT_TOKEN(anon_sym_PIPE);
		END_STATE();
	case 253:
		ACCEPT_TOKEN(anon_sym_PIPE);
		if (lookahead == '&')
			ADVANCE(311);
		if (lookahead == '=')
			ADVANCE(327);
		if (lookahead == '|')
			ADVANCE(264);
		END_STATE();
	case 254:
		ACCEPT_TOKEN(anon_sym_PIPE);
		if (lookahead == '&')
			ADVANCE(311);
		if (lookahead == '|')
			ADVANCE(264);
		END_STATE();
	case 255:
		ACCEPT_TOKEN(anon_sym_PIPE);
		if (lookahead == '=')
			ADVANCE(327);
		if (lookahead == '|')
			ADVANCE(264);
		END_STATE();
	case 256:
		ACCEPT_TOKEN(anon_sym_PIPE);
		if (lookahead == '|')
			ADVANCE(264);
		END_STATE();
	case 257:
		ACCEPT_TOKEN(anon_sym_RPAREN);
		END_STATE();
	case 258:
		ACCEPT_TOKEN(anon_sym_LF);
		if (lookahead == '\n')
			ADVANCE(258);
		if (lookahead == '\\')
			ADVANCE(127);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(452);
		END_STATE();
	case 259:
		ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
		END_STATE();
	case 260:
		ACCEPT_TOKEN(anon_sym_LBRACE);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 261:
		ACCEPT_TOKEN(anon_sym_RBRACE);
		END_STATE();
	case 262:
		ACCEPT_TOKEN(anon_sym_RBRACE);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 263:
		ACCEPT_TOKEN(anon_sym_AMP_AMP);
		END_STATE();
	case 264:
		ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
		END_STATE();
	case 265:
		ACCEPT_TOKEN(anon_sym_BANG);
		END_STATE();
	case 266:
		ACCEPT_TOKEN(anon_sym_BANG);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 267:
		ACCEPT_TOKEN(anon_sym_EQ);
		END_STATE();
	case 268:
		ACCEPT_TOKEN(anon_sym_EQ);
		if (lookahead == '=')
			ADVANCE(333);
		END_STATE();
	case 269:
		ACCEPT_TOKEN(anon_sym_EQ);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 270:
		ACCEPT_TOKEN(anon_sym_LT);
		if (lookahead == '&')
			ADVANCE(279);
		END_STATE();
	case 271:
		ACCEPT_TOKEN(anon_sym_LT);
		if (lookahead == '&')
			ADVANCE(279);
		if (lookahead == '<')
			ADVANCE(285);
		if (lookahead == '=')
			ADVANCE(335);
		END_STATE();
	case 272:
		ACCEPT_TOKEN(anon_sym_LT);
		if (lookahead == '&')
			ADVANCE(279);
		if (lookahead == '<')
			ADVANCE(284);
		END_STATE();
	case 273:
		ACCEPT_TOKEN(anon_sym_LT);
		if (lookahead == '<')
			ADVANCE(286);
		if (lookahead == '=')
			ADVANCE(335);
		END_STATE();
	case 274:
		ACCEPT_TOKEN(anon_sym_GT);
		if (lookahead == '&')
			ADVANCE(280);
		if (lookahead == '=')
			ADVANCE(336);
		if (lookahead == '>')
			ADVANCE(278);
		if (lookahead == '|')
			ADVANCE(281);
		END_STATE();
	case 275:
		ACCEPT_TOKEN(anon_sym_GT);
		if (lookahead == '&')
			ADVANCE(280);
		if (lookahead == '>')
			ADVANCE(277);
		if (lookahead == '|')
			ADVANCE(281);
		END_STATE();
	case 276:
		ACCEPT_TOKEN(anon_sym_GT);
		if (lookahead == '=')
			ADVANCE(336);
		if (lookahead == '>')
			ADVANCE(278);
		END_STATE();
	case 277:
		ACCEPT_TOKEN(anon_sym_GT_GT);
		END_STATE();
	case 278:
		ACCEPT_TOKEN(anon_sym_GT_GT);
		if (lookahead == '=')
			ADVANCE(323);
		END_STATE();
	case 279:
		ACCEPT_TOKEN(anon_sym_LT_AMP);
		if (lookahead == '-')
			ADVANCE(282);
		END_STATE();
	case 280:
		ACCEPT_TOKEN(anon_sym_GT_AMP);
		if (lookahead == '-')
			ADVANCE(283);
		END_STATE();
	case 281:
		ACCEPT_TOKEN(anon_sym_GT_PIPE);
		END_STATE();
	case 282:
		ACCEPT_TOKEN(anon_sym_LT_AMP_DASH);
		END_STATE();
	case 283:
		ACCEPT_TOKEN(anon_sym_GT_AMP_DASH);
		END_STATE();
	case 284:
		ACCEPT_TOKEN(anon_sym_LT_LT);
		if (lookahead == '-')
			ADVANCE(287);
		END_STATE();
	case 285:
		ACCEPT_TOKEN(anon_sym_LT_LT);
		if (lookahead == '-')
			ADVANCE(287);
		if (lookahead == '=')
			ADVANCE(322);
		END_STATE();
	case 286:
		ACCEPT_TOKEN(anon_sym_LT_LT);
		if (lookahead == '=')
			ADVANCE(322);
		END_STATE();
	case 287:
		ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
		END_STATE();
	case 288:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(288);
		if (lookahead == '\\')
			ADVANCE(13);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(453);
		END_STATE();
	case 289:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(289);
		if (lookahead == '\\')
			ADVANCE(50);
		END_STATE();
	case 290:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(290);
		END_STATE();
	case 291:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(291);
		if (lookahead == '\\')
			ADVANCE(22);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(454);
		END_STATE();
	case 292:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(292);
		if (lookahead == '\\')
			ADVANCE(137);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(455);
		END_STATE();
	case 293:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(293);
		if (lookahead == '\\')
			ADVANCE(139);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(456);
		END_STATE();
	case 294:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(294);
		if (lookahead == '\\')
			ADVANCE(19);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(457);
		END_STATE();
	case 295:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(295);
		if (lookahead == '\\')
			ADVANCE(52);
		END_STATE();
	case 296:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(296);
		if (lookahead == '\\')
			ADVANCE(28);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(458);
		END_STATE();
	case 297:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(297);
		if (lookahead == '\\')
			ADVANCE(142);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(459);
		END_STATE();
	case 298:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(298);
		if (lookahead == '\\')
			ADVANCE(146);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(460);
		END_STATE();
	case 299:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(299);
		if (lookahead == '\\')
			ADVANCE(25);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(461);
		END_STATE();
	case 300:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(300);
		if (lookahead == '\\')
			ADVANCE(54);
		END_STATE();
	case 301:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(301);
		if (lookahead == '\\')
			ADVANCE(31);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(462);
		END_STATE();
	case 302:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(302);
		if (lookahead == '\\')
			ADVANCE(56);
		END_STATE();
	case 303:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(303);
		if (lookahead == '\\')
			ADVANCE(36);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(463);
		END_STATE();
	case 304:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(304);
		if (lookahead == '\\')
			ADVANCE(63);
		END_STATE();
	case 305:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(305);
		if (lookahead == '\\')
			ADVANCE(39);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(464);
		END_STATE();
	case 306:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(306);
		if (lookahead == '\\')
			ADVANCE(97);
		END_STATE();
	case 307:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(307);
		if (lookahead == '\\')
			ADVANCE(94);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(465);
		END_STATE();
	case 308:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(308);
		if (lookahead == '\\')
			ADVANCE(76);
		END_STATE();
	case 309:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(309);
		if (lookahead == '\\')
			ADVANCE(68);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(466);
		END_STATE();
	case 310:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(310);
		if (lookahead == '\\')
			ADVANCE(72);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(467);
		END_STATE();
	case 311:
		ACCEPT_TOKEN(anon_sym_PIPE_AMP);
		END_STATE();
	case 312:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN_LPAREN);
		END_STATE();
	case 313:
		ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
		END_STATE();
	case 314:
		ACCEPT_TOKEN(anon_sym_PLUS_EQ);
		END_STATE();
	case 315:
		ACCEPT_TOKEN(anon_sym_DASH_EQ);
		END_STATE();
	case 316:
		ACCEPT_TOKEN(anon_sym_STAR_EQ);
		END_STATE();
	case 317:
		ACCEPT_TOKEN(anon_sym_STAR_EQ);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 318:
		ACCEPT_TOKEN(anon_sym_SLASH_EQ);
		END_STATE();
	case 319:
		ACCEPT_TOKEN(anon_sym_SLASH_EQ);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 320:
		ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
		END_STATE();
	case 321:
		ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 322:
		ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
		END_STATE();
	case 323:
		ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
		END_STATE();
	case 324:
		ACCEPT_TOKEN(anon_sym_AMP_EQ);
		END_STATE();
	case 325:
		ACCEPT_TOKEN(anon_sym_CARET_EQ);
		END_STATE();
	case 326:
		ACCEPT_TOKEN(anon_sym_CARET_EQ);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 327:
		ACCEPT_TOKEN(anon_sym_PIPE_EQ);
		END_STATE();
	case 328:
		ACCEPT_TOKEN(anon_sym_CARET);
		if (lookahead == '=')
			ADVANCE(326);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 329:
		ACCEPT_TOKEN(anon_sym_CARET);
		if (lookahead == '=')
			ADVANCE(325);
		END_STATE();
	case 330:
		ACCEPT_TOKEN(anon_sym_AMP);
		END_STATE();
	case 331:
		ACCEPT_TOKEN(anon_sym_AMP);
		if (lookahead == '&')
			ADVANCE(263);
		END_STATE();
	case 332:
		ACCEPT_TOKEN(anon_sym_AMP);
		if (lookahead == '&')
			ADVANCE(263);
		if (lookahead == '=')
			ADVANCE(324);
		END_STATE();
	case 333:
		ACCEPT_TOKEN(anon_sym_EQ_EQ);
		END_STATE();
	case 334:
		ACCEPT_TOKEN(anon_sym_BANG_EQ);
		END_STATE();
	case 335:
		ACCEPT_TOKEN(anon_sym_LT_EQ);
		END_STATE();
	case 336:
		ACCEPT_TOKEN(anon_sym_GT_EQ);
		END_STATE();
	case 337:
		ACCEPT_TOKEN(anon_sym_PLUS);
		if (lookahead == '+')
			ADVANCE(362);
		if (lookahead == '=')
			ADVANCE(314);
		END_STATE();
	case 338:
		ACCEPT_TOKEN(anon_sym_DASH);
		END_STATE();
	case 339:
		ACCEPT_TOKEN(anon_sym_DASH);
		if (lookahead == '-')
			ADVANCE(363);
		if (lookahead == '=')
			ADVANCE(315);
		END_STATE();
	case 340:
		ACCEPT_TOKEN(anon_sym_DASH);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 341:
		ACCEPT_TOKEN(anon_sym_STAR);
		END_STATE();
	case 342:
		ACCEPT_TOKEN(anon_sym_STAR);
		if (lookahead == '=')
			ADVANCE(317);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 343:
		ACCEPT_TOKEN(anon_sym_STAR);
		if (lookahead == '=')
			ADVANCE(316);
		END_STATE();
	case 344:
		ACCEPT_TOKEN(anon_sym_STAR);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 345:
		ACCEPT_TOKEN(anon_sym_SLASH);
		if (lookahead == '=')
			ADVANCE(319);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 346:
		ACCEPT_TOKEN(anon_sym_SLASH);
		if (lookahead == '=')
			ADVANCE(318);
		END_STATE();
	case 347:
		ACCEPT_TOKEN(anon_sym_PERCENT);
		if (lookahead == '%')
			ADVANCE(399);
		if (lookahead == '=')
			ADVANCE(321);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 348:
		ACCEPT_TOKEN(anon_sym_PERCENT);
		if (lookahead == '%')
			ADVANCE(398);
		END_STATE();
	case 349:
		ACCEPT_TOKEN(anon_sym_PERCENT);
		if (lookahead == '=')
			ADVANCE(320);
		END_STATE();
	case 350:
		ACCEPT_TOKEN(anon_sym_QMARK);
		END_STATE();
	case 351:
		ACCEPT_TOKEN(anon_sym_QMARK);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 352:
		ACCEPT_TOKEN(anon_sym_COLON);
		END_STATE();
	case 353:
		ACCEPT_TOKEN(anon_sym_COLON);
		if (lookahead == '=')
			ADVANCE(389);
		if (lookahead == '?')
			ADVANCE(393);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 354:
		ACCEPT_TOKEN(anon_sym_COLON);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 355:
		ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
		END_STATE();
	case 356:
		ACCEPT_TOKEN(anon_sym_DASH_DASH);
		END_STATE();
	case 357:
		ACCEPT_TOKEN(anon_sym_DASH2);
		END_STATE();
	case 358:
		ACCEPT_TOKEN(anon_sym_DASH2);
		if (lookahead == '-')
			ADVANCE(356);
		END_STATE();
	case 359:
		ACCEPT_TOKEN(anon_sym_PLUS2);
		END_STATE();
	case 360:
		ACCEPT_TOKEN(anon_sym_PLUS2);
		if (lookahead == '+')
			ADVANCE(355);
		END_STATE();
	case 361:
		ACCEPT_TOKEN(anon_sym_TILDE);
		END_STATE();
	case 362:
		ACCEPT_TOKEN(anon_sym_PLUS_PLUS2);
		END_STATE();
	case 363:
		ACCEPT_TOKEN(anon_sym_DASH_DASH2);
		END_STATE();
	case 364:
		ACCEPT_TOKEN(aux_sym_concatenation_token1);
		END_STATE();
	case 365:
		ACCEPT_TOKEN(anon_sym_DOLLAR);
		END_STATE();
	case 366:
		ACCEPT_TOKEN(anon_sym_DOLLAR);
		if (lookahead == '(')
			ADVANCE(402);
		if (lookahead == '{')
			ADVANCE(385);
		END_STATE();
	case 367:
		ACCEPT_TOKEN(anon_sym_DOLLAR);
		if (lookahead == '(')
			ADVANCE(401);
		if (lookahead == '{')
			ADVANCE(385);
		END_STATE();
	case 368:
		ACCEPT_TOKEN(anon_sym_DQUOTE);
		END_STATE();
	case 369:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(373);
		if (lookahead == '\\')
			ADVANCE(120);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(376);
		END_STATE();
	case 370:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(376);
		if (lookahead == '\\')
			ADVANCE(405);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(378);
		END_STATE();
	case 371:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(374);
		if (lookahead == '\\')
			ADVANCE(120);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(376);
		END_STATE();
	case 372:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(375);
		if (lookahead == '\\')
			ADVANCE(120);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(376);
		END_STATE();
	case 373:
		ACCEPT_TOKEN(sym_string_content);
		ADVANCE_MAP('!', 265, '"', 368, '#', 383, '$', 365, '*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', 81, '_', 451, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(178);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(373);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		if (lookahead != 0 && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(376);
		END_STATE();
	case 374:
		ACCEPT_TOKEN(sym_string_content);
		ADVANCE_MAP('!', 265, '#', 383, '$', 365, '*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', 83, '_', 451, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(182);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(374);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		if (lookahead != 0 && (lookahead < ' ' || '$' < lookahead) && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(376);
		END_STATE();
	case 375:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '"')
			ADVANCE(368);
		if (lookahead == '#')
			ADVANCE(378);
		if (lookahead == '$')
			ADVANCE(366);
		if (lookahead == '\\')
			ADVANCE(125);
		if (lookahead == '`')
			ADVANCE(403);
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(195);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(375);
		if (lookahead != 0)
			ADVANCE(376);
		END_STATE();
	case 376:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\\')
			ADVANCE(120);
		if (lookahead != 0 && lookahead != '\n' && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(376);
		END_STATE();
	case 377:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\\')
			ADVANCE(120);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(376);
		END_STATE();
	case 378:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\\')
			ADVANCE(405);
		if (lookahead != 0 && lookahead != '\n' && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(378);
		END_STATE();
	case 379:
		ACCEPT_TOKEN(sym_raw_string);
		END_STATE();
	case 380:
		ACCEPT_TOKEN(sym_number);
		if (lookahead == '\\')
			ADVANCE(218);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 381:
		ACCEPT_TOKEN(sym_number);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 382:
		ACCEPT_TOKEN(sym_number);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(382);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 383:
		ACCEPT_TOKEN(anon_sym_POUND);
		END_STATE();
	case 384:
		ACCEPT_TOKEN(anon_sym_POUND);
		if (lookahead == '\\')
			ADVANCE(407);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(498);
		END_STATE();
	case 385:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
		END_STATE();
	case 386:
		ACCEPT_TOKEN(anon_sym_COLON_DASH);
		END_STATE();
	case 387:
		ACCEPT_TOKEN(anon_sym_DASH3);
		END_STATE();
	case 388:
		ACCEPT_TOKEN(anon_sym_COLON_EQ);
		END_STATE();
	case 389:
		ACCEPT_TOKEN(anon_sym_COLON_EQ);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 390:
		ACCEPT_TOKEN(anon_sym_EQ2);
		END_STATE();
	case 391:
		ACCEPT_TOKEN(anon_sym_EQ2);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 392:
		ACCEPT_TOKEN(anon_sym_COLON_QMARK);
		END_STATE();
	case 393:
		ACCEPT_TOKEN(anon_sym_COLON_QMARK);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 394:
		ACCEPT_TOKEN(anon_sym_QMARK2);
		END_STATE();
	case 395:
		ACCEPT_TOKEN(anon_sym_QMARK2);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 396:
		ACCEPT_TOKEN(anon_sym_COLON_PLUS);
		END_STATE();
	case 397:
		ACCEPT_TOKEN(anon_sym_PLUS3);
		END_STATE();
	case 398:
		ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
		END_STATE();
	case 399:
		ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 400:
		ACCEPT_TOKEN(aux_sym_expansion_regex_token1);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(400);
		END_STATE();
	case 401:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
		END_STATE();
	case 402:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
		if (lookahead == '(')
			ADVANCE(312);
		END_STATE();
	case 403:
		ACCEPT_TOKEN(anon_sym_BQUOTE);
		END_STATE();
	case 404:
		ACCEPT_TOKEN(anon_sym_BQUOTE);
		if (lookahead == '`')
			ADVANCE(364);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(206);
		END_STATE();
	case 405:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead == '\n')
			ADVANCE(376);
		if (lookahead == '\r')
			ADVANCE(370);
		if (lookahead != 0)
			ADVANCE(378);
		END_STATE();
	case 406:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead == '\t' || (0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(408);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(409);
		END_STATE();
	case 407:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead == '\t' || (0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(408);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(498);
		END_STATE();
	case 408:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead != 0 && lookahead != '\n')
			ADVANCE(408);
		END_STATE();
	case 409:
		ACCEPT_TOKEN(sym__comment_word);
		if (lookahead == '\\')
			ADVANCE(406);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(409);
		END_STATE();
	case 410:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (lookahead == 'a')
			ADVANCE(411);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('b' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 411:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (lookahead == 'c')
			ADVANCE(249);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 412:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (lookahead == 's')
			ADVANCE(410);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 413:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 414:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 'a')
			ADVANCE(415);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('b' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 415:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 'c')
			ADVANCE(250);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 416:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 'n')
			ADVANCE(238);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 417:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 's')
			ADVANCE(414);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 418:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 419:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 288, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, '*', 344, '-', 340, '0', 447, ';',
					499, '<', 272, '>', 275, '?', 351, '@', 445, '\\', 13, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(10);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(453);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 420:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 289, '!', 265, '#', 383, '$', 365, '&', 331, ')', 257, '*', 341, '-', 338, '0', 448, ';', 499, '<', 272, '>', 275,
					'?', 350, '@', 444, '\\', 50, '_', 451, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(48);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 421:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 291, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, '*', 344, '-', 340, '0', 447, ';',
					499, '<', 272, '>', 275, '?', 351, '@', 445, '\\', 22, '_', 450, '`', 403, 'e', 412, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(89);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(454);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 422:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 294, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '(', 251, ')', 257, '*', 344, '-', 340, '0',
					447, ';', 499, '<', 272, '>', 275, '?', 351, '@', 445, '\\', 19, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(101);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(457);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0)
			ADVANCE(497);
		END_STATE();
	case 423:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 295, '!', 265, '#', 383, '$', 365, '&', 331, '*', 341, '-', 338, '0', 448, ';', 499, '<', 272, '>', 275, '?', 350,
					'@', 444, '\\', 52, '_', 451, 'e', 417, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(102);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 424:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 296, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '*', 344, '-', 340, '0', 447, ';', 499, '<',
					272, '>', 275, '?', 351, '@', 445, '\\', 28, '_', 450, '`', 403, 'e', 412, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(103);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(458);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 425:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 299, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, '*', 344, '-', 340, '0', 447, ';', 499, '<',
					272, '>', 275, '?', 351, '@', 445, '\\', 25, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(106);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(461);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 426:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 300, '!', 265, '#', 383, '$', 365, '&', 331, '*', 341, '-', 338, '0', 448, ';', 499, '<', 272, '>', 275, '?', 350,
					'@', 444, '\\', 54, '_', 451, '`', 403, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(107);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 427:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 301, '!', 266, '"', 368, '#', 383, '$', 366, '&', 331, '\'', 200, ')', 257, '*', 344, '-', 340, '0', 447, ';',
					499, '<', 272, '>', 275, '?', 351, '@', 445, '\\', 31, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(108);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(462);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 428:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 302, '!', 265, '#', 383, '$', 365, '&', 331, '*', 341, '-', 338, '0', 448, ';', 499, '<', 272, '>', 275, '?', 350,
					'@', 444, '\\', 56, '_', 451, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(109);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 429:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 303, '!', 266, '"', 368, '#', 383, '$', 366, '&', 199, '\'', 200, '(', 251, '*', 344, '-', 340, '0', 447, '<',
					272, '>', 275, '?', 351, '@', 445, '\\', 36, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(110);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(463);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 430:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 304, '!', 265, '#', 383, '$', 365, '&', 199, '*', 341, '-', 338, '0', 448, '<', 272, '>', 275, '?', 350, '@', 444,
					'\\', 63, '_', 451, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(111);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 431:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 305, '!', 266, '"', 368, '#', 383, '$', 366, '&', 199, '\'', 200, '*', 344, '-', 340, '0', 447, '<', 272, '>',
					275, '?', 351, '@', 445, '\\', 39, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(112);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(464);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 432:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 306, '!', 265, '#', 383, '$', 365, '&', 199, '*', 341, '-', 338, '0', 448, '<', 270, '>', 275, '?', 350, '@', 444,
					'\\', 97, '_', 451, '|', 217, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(113);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 433:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 307, '!', 266, '"', 368, '#', 383, '$', 366, '&', 199, '\'', 200, '*', 344, '-', 340, '0', 447, '<', 270, '>',
					275, '?', 351, '@', 445, '\\', 94, '_', 450, '`', 403, '|', 217, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(114);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(465);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 434:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 308, '!', 265, '#', 383, '$', 365, '&', 330, '*', 341, '-', 338, '0', 448, ';', 499, '?', 350, '@', 444, '\\', 76,
					'_', 451, 'i', 416, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(115);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 435:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 309, '!', 266, '"', 368, '#', 383, '$', 366, '&', 330, '\'', 200, '*', 344, '-', 340, '0', 447, ';', 499, '?',
					351, '@', 445, '\\', 68, '_', 450, '`', 403, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(116);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(466);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 436:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 310, '!', 266, '"', 368, '#', 383, '$', 366, '\'', 200, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\',
					72, '_', 450, '`', 403, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(117);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(467);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 437:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 266, '"', 368, '#', 383, '$', 366, '&', 199, '\'', 200, '(', 251, '*', 344, '-', 340, '0', 447, '<', 272, '>', 275,
					'?', 351, '@', 445, '\\', 42, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(168);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(469);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 438:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 266, '"', 368, '#', 383, '$', 366, '&', 199, '\'', 200, '*', 344, '-', 340, '0', 447, '<', 272, '>', 275, '?', 351,
					'@', 445, '\\', 45, '_', 450, '`', 403, '|', 256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(169);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(470);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(497);
		END_STATE();
	case 439:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 266, '"', 368, '#', 383, '$', 366, '\'', 200, '*', 344, '-', 340, '0', 447, '<', 270, '>', 275, '?', 351, '@', 445,
					'\\', 60, '_', 450, '`', 403, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(170);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(471);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '|')
			ADVANCE(497);
		END_STATE();
	case 440:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 265, '#', 383, '$', 365, '&', 199, '*', 341, '-', 338, '0', 448, '<', 272, '>', 275, '?', 350, '@', 444, '\\', 65,
					'_', 451, '|', 256, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(180);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 441:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 265, '#', 383, '$', 365, ')', 257, '*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', 80, '_', 451, '|',
					252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(181);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 442:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 265, '#', 383, '$', 365, '*', 341, '-', 338, '0', 448, '?', 350, '@', 444, '\\', 86, '_', 451, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(184);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 443:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(15);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(443);
		END_STATE();
	case 444:
		ACCEPT_TOKEN(anon_sym_AT);
		END_STATE();
	case 445:
		ACCEPT_TOKEN(anon_sym_AT);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 446:
		ACCEPT_TOKEN(anon_sym_0);
		if (lookahead == '\\')
			ADVANCE(218);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 447:
		ACCEPT_TOKEN(anon_sym_0);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 448:
		ACCEPT_TOKEN(anon_sym_0);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 449:
		ACCEPT_TOKEN(anon_sym__);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 450:
		ACCEPT_TOKEN(anon_sym__);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 451:
		ACCEPT_TOKEN(anon_sym__);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(418);
		END_STATE();
	case 452:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(258);
		if (lookahead == '!')
			ADVANCE(266);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(126);
		if (lookahead == '{')
			ADVANCE(260);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(452);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 453:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 288, '!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 12, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(453);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 454:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 291, '!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 21, '_', 450, 'e', 412, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(454);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 455:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(292);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(136);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(455);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 456:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(293);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(138);
		if (lookahead == 'e')
			ADVANCE(496);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(456);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 457:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 294, '!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 18, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(457);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 458:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 296, '!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 27, '_', 450, 'e', 412, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(458);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 459:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(297);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(141);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(459);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 460:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(298);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(145);
		if (lookahead == 'e')
			ADVANCE(496);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(460);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 461:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 299, '!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 24, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(461);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 462:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 301, '!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 30, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(462);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 463:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 303, '!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 35, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(463);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 464:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 305, '!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 38, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(464);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 465:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 307, '!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 93, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(465);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 466:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 309, '!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 67, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(466);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 467:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 310, '!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 71, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(467);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 468:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('!', 266, '#', 384, '%', 347, '*', 342, '+', 359, '-', 357, '/', 345, '0', 446, ':', 354, '=', 269, '?', 351, '@', 445,
					'\\', 118, '^', 328, '_', 449, 'd', 495, 'e', 492, 'f', 490, 'i', 494, '{', 260, '}', 262, '~', 361, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(468);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead) && (lookahead < ' ' || '+' < lookahead) &&
			(lookahead < '/' || '@' < lookahead) && (lookahead < '^' || '`' < lookahead) && (lookahead < '{' || '~' < lookahead))
			ADVANCE(497);
		END_STATE();
	case 469:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 41, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(469);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 470:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 44, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(470);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 471:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('!', 266, '#', 384, '*', 344, '-', 340, '0', 447, '?', 351, '@', 445, '\\', 59, '_', 450, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(471);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(381);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(413);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 472:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(266);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(121);
		if (lookahead == '{')
			ADVANCE(260);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(472);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 473:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(266);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(123);
		if (lookahead == 'e')
			ADVANCE(493);
		if (lookahead == 'f')
			ADVANCE(490);
		if (lookahead == '{')
			ADVANCE(260);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(473);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 474:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(266);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(128);
		if (lookahead == 'd')
			ADVANCE(495);
		if (lookahead == '{')
			ADVANCE(260);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(474);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 475:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(266);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(130);
		if (lookahead == '{')
			ADVANCE(260);
		if (lookahead == '}')
			ADVANCE(262);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(475);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 476:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(266);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(132);
		if (lookahead == 'f')
			ADVANCE(490);
		if (lookahead == '{')
			ADVANCE(260);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(476);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 477:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(266);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(147);
		if (lookahead == 'e')
			ADVANCE(496);
		if (lookahead == '{')
			ADVANCE(260);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(477);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 478:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(134);
		if (lookahead == '{')
			ADVANCE(260);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(478);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 479:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(143);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(479);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 480:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(149);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(480);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 481:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(152);
		if (lookahead == 'e')
			ADVANCE(496);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(481);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 482:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(155);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(482);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 483:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(157);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(483);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(380);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 484:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(160);
		if (lookahead == '}')
			ADVANCE(262);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(484);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 485:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(498);
		if (lookahead == '\\')
			ADVANCE(163);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(485);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 486:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if (lookahead == 'a')
			ADVANCE(487);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 487:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if (lookahead == 'c')
			ADVANCE(248);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 488:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if (lookahead == 'e')
			ADVANCE(246);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 489:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if (lookahead == 'f')
			ADVANCE(244);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 490:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if (lookahead == 'i')
			ADVANCE(242);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 491:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if (lookahead == 'i')
			ADVANCE(489);
		if (lookahead == 's')
			ADVANCE(488);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 492:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if (lookahead == 'l')
			ADVANCE(491);
		if (lookahead == 's')
			ADVANCE(486);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 493:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if (lookahead == 'l')
			ADVANCE(491);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 494:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if (lookahead == 'n')
			ADVANCE(237);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 495:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if (lookahead == 'o')
			ADVANCE(240);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 496:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if (lookahead == 's')
			ADVANCE(486);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 497:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(497);
		END_STATE();
	case 498:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(407);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(498);
		END_STATE();
	case 499:
		ACCEPT_TOKEN(anon_sym_SEMI);
		if (lookahead == ';')
			ADVANCE(259);
		END_STATE();
	default:
		return false;
	}
}

bool ts_lex_keywords(TSLexer *lexer, TSStateId state)
{
	START_LEXER();
	eof = lexer->eof(lexer);
	switch (state)
	{
	case 0:
		if (lookahead == '\\')
			SKIP(1);
		if (lookahead == 'c')
			ADVANCE(2);
		if (lookahead == 'd')
			ADVANCE(3);
		if (lookahead == 'f')
			ADVANCE(4);
		if (lookahead == 'i')
			ADVANCE(5);
		if (lookahead == 't')
			ADVANCE(6);
		if (lookahead == 'u')
			ADVANCE(7);
		if (lookahead == 'w')
			ADVANCE(8);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(0);
		END_STATE();
	case 1:
		if (lookahead == '\r')
			SKIP(9);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(0);
		END_STATE();
	case 2:
		if (lookahead == 'a')
			ADVANCE(10);
		END_STATE();
	case 3:
		if (lookahead == 'o')
			ADVANCE(11);
		END_STATE();
	case 4:
		if (lookahead == 'o')
			ADVANCE(12);
		END_STATE();
	case 5:
		if (lookahead == 'f')
			ADVANCE(13);
		END_STATE();
	case 6:
		if (lookahead == 'h')
			ADVANCE(14);
		END_STATE();
	case 7:
		if (lookahead == 'n')
			ADVANCE(15);
		END_STATE();
	case 8:
		if (lookahead == 'h')
			ADVANCE(16);
		END_STATE();
	case 9:
		if (lookahead == '\n')
			SKIP(0);
		END_STATE();
	case 10:
		if (lookahead == 's')
			ADVANCE(17);
		END_STATE();
	case 11:
		if (lookahead == 'n')
			ADVANCE(18);
		END_STATE();
	case 12:
		if (lookahead == 'r')
			ADVANCE(19);
		END_STATE();
	case 13:
		ACCEPT_TOKEN(anon_sym_if);
		END_STATE();
	case 14:
		if (lookahead == 'e')
			ADVANCE(20);
		END_STATE();
	case 15:
		if (lookahead == 't')
			ADVANCE(21);
		END_STATE();
	case 16:
		if (lookahead == 'i')
			ADVANCE(22);
		END_STATE();
	case 17:
		if (lookahead == 'e')
			ADVANCE(23);
		END_STATE();
	case 18:
		if (lookahead == 'e')
			ADVANCE(24);
		END_STATE();
	case 19:
		ACCEPT_TOKEN(anon_sym_for);
		END_STATE();
	case 20:
		if (lookahead == 'n')
			ADVANCE(25);
		END_STATE();
	case 21:
		if (lookahead == 'i')
			ADVANCE(26);
		END_STATE();
	case 22:
		if (lookahead == 'l')
			ADVANCE(27);
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
		if (lookahead == 'l')
			ADVANCE(28);
		END_STATE();
	case 27:
		if (lookahead == 'e')
			ADVANCE(29);
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