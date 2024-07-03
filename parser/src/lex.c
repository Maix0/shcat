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
			ADVANCE(233);
		ADVANCE_MAP('!', 262, '"', 361, '#', 376, '$', 359, '%', 340, '&', 325, '\'', 197, '(', 249, ')', 253, '*', 335, '+', 352, '-', 350,
					'/', 338, '0', 439, ':', 346, ';', 493, '<', 266, '=', 384, '>', 270, '?', 388, '@', 438, '\\', 116, '^', 321, '_', 442,
					'`', 397, 'd', 486, 'e', 483, 'f', 481, 'i', 485, '{', 256, '|', 251, '}', 258, '~', 354, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(230);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(461);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 1:
		if (lookahead == '\n')
			SKIP(163);
		END_STATE();
	case 2:
		if (lookahead == '\n')
			SKIP(167);
		END_STATE();
	case 3:
		if (lookahead == '\n')
			SKIP(169);
		END_STATE();
	case 4:
		if (lookahead == '\n')
			SKIP(5);
		END_STATE();
	case 5:
		ADVANCE_MAP('\n', 254, '!', 262, '"', 361, '#', 402, '$', 359, '\'', 197, '(', 249, '<', 268, '>', 271, '\\', 124, '`', 396, '{',
					256, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(5);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(445);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 6:
		if (lookahead == '\n')
			SKIP(170);
		END_STATE();
	case 7:
		if (lookahead == '\n')
			SKIP(171);
		END_STATE();
	case 8:
		if (lookahead == '\n')
			SKIP(172);
		END_STATE();
	case 9:
		if (lookahead == '\n')
			SKIP(187);
		END_STATE();
	case 10:
		ADVANCE_MAP('\n', 283, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '(', 249, '*', 337, '-', 333, '0', 440, ';',
					493, '<', 267, '>', 271, '?', 344, '@', 438, '\\', 13, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(10);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(446);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 11:
		if (lookahead == '\n')
			ADVANCE(413);
		END_STATE();
	case 12:
		if (lookahead == '\n')
			ADVANCE(413);
		if (lookahead == '\r')
			ADVANCE(11);
		if (lookahead == ' ')
			ADVANCE(446);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(10);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 13:
		if (lookahead == '\n')
			ADVANCE(413);
		if (lookahead == '\r')
			ADVANCE(11);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(10);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 14:
		if (lookahead == '\n')
			ADVANCE(436);
		END_STATE();
	case 15:
		if (lookahead == '\n')
			ADVANCE(436);
		if (lookahead == '\r')
			ADVANCE(14);
		END_STATE();
	case 16:
		if (lookahead == '\n')
			ADVANCE(436);
		if (lookahead == '\r')
			ADVANCE(14);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 17:
		if (lookahead == '\n')
			ADVANCE(415);
		END_STATE();
	case 18:
		if (lookahead == '\n')
			ADVANCE(415);
		if (lookahead == '\r')
			ADVANCE(17);
		if (lookahead == ' ')
			ADVANCE(447);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(89);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 19:
		if (lookahead == '\n')
			ADVANCE(415);
		if (lookahead == '\r')
			ADVANCE(17);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(89);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 20:
		if (lookahead == '\n')
			ADVANCE(416);
		END_STATE();
	case 21:
		if (lookahead == '\n')
			ADVANCE(416);
		if (lookahead == '\r')
			ADVANCE(20);
		if (lookahead == ' ')
			ADVANCE(450);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(99);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 22:
		if (lookahead == '\n')
			ADVANCE(416);
		if (lookahead == '\r')
			ADVANCE(20);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(99);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 23:
		if (lookahead == '\n')
			ADVANCE(419);
		END_STATE();
	case 24:
		if (lookahead == '\n')
			ADVANCE(419);
		if (lookahead == '\r')
			ADVANCE(23);
		if (lookahead == ' ')
			ADVANCE(454);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(104);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 25:
		if (lookahead == '\n')
			ADVANCE(419);
		if (lookahead == '\r')
			ADVANCE(23);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(104);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 26:
		if (lookahead == '\n')
			ADVANCE(421);
		END_STATE();
	case 27:
		if (lookahead == '\n')
			ADVANCE(421);
		if (lookahead == '\r')
			ADVANCE(26);
		if (lookahead == ' ')
			ADVANCE(455);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(106);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 28:
		if (lookahead == '\n')
			ADVANCE(421);
		if (lookahead == '\r')
			ADVANCE(26);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(106);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 29:
		if (lookahead == '\n')
			ADVANCE(418);
		END_STATE();
	case 30:
		if (lookahead == '\n')
			ADVANCE(418);
		if (lookahead == '\r')
			ADVANCE(29);
		if (lookahead == ' ')
			ADVANCE(451);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(101);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 31:
		if (lookahead == '\n')
			ADVANCE(418);
		if (lookahead == '\r')
			ADVANCE(29);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(101);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 32:
		if (lookahead == '\n')
			SKIP(97);
		END_STATE();
	case 33:
		if (lookahead == '\n')
			SKIP(98);
		END_STATE();
	case 34:
		if (lookahead == '\n')
			ADVANCE(423);
		END_STATE();
	case 35:
		if (lookahead == '\n')
			ADVANCE(423);
		if (lookahead == '\r')
			ADVANCE(34);
		if (lookahead == ' ')
			ADVANCE(456);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(108);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 36:
		if (lookahead == '\n')
			ADVANCE(423);
		if (lookahead == '\r')
			ADVANCE(34);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(108);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 37:
		if (lookahead == '\n')
			ADVANCE(430);
		END_STATE();
	case 38:
		if (lookahead == '\n')
			ADVANCE(430);
		if (lookahead == '\r')
			ADVANCE(37);
		if (lookahead == ' ')
			ADVANCE(462);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(164);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 39:
		if (lookahead == '\n')
			ADVANCE(430);
		if (lookahead == '\r')
			ADVANCE(37);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(164);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 40:
		if (lookahead == '\n')
			ADVANCE(425);
		END_STATE();
	case 41:
		if (lookahead == '\n')
			ADVANCE(425);
		if (lookahead == '\r')
			ADVANCE(40);
		if (lookahead == ' ')
			ADVANCE(457);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(110);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 42:
		if (lookahead == '\n')
			ADVANCE(425);
		if (lookahead == '\r')
			ADVANCE(40);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(110);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 43:
		if (lookahead == '\n')
			ADVANCE(431);
		END_STATE();
	case 44:
		if (lookahead == '\n')
			ADVANCE(431);
		if (lookahead == '\r')
			ADVANCE(43);
		if (lookahead == ' ')
			ADVANCE(463);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(165);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 45:
		if (lookahead == '\n')
			ADVANCE(431);
		if (lookahead == '\r')
			ADVANCE(43);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(165);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 46:
		if (lookahead == '\n')
			SKIP(173);
		END_STATE();
	case 47:
		if (lookahead == '\n')
			SKIP(185);
		END_STATE();
	case 48:
		ADVANCE_MAP('\n', 284, '!', 261, '#', 376, '$', 358, '&', 324, ')', 253, '*', 334, '-', 331, '0', 441, ';', 493, '<', 267, '>', 271,
					'?', 343, '@', 437, '\\', 50, '_', 444, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(48);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 49:
		if (lookahead == '\n')
			ADVANCE(414);
		END_STATE();
	case 50:
		if (lookahead == '\n')
			ADVANCE(414);
		if (lookahead == '\r')
			ADVANCE(49);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(48);
		END_STATE();
	case 51:
		if (lookahead == '\n')
			ADVANCE(417);
		END_STATE();
	case 52:
		if (lookahead == '\n')
			ADVANCE(417);
		if (lookahead == '\r')
			ADVANCE(51);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(100);
		END_STATE();
	case 53:
		if (lookahead == '\n')
			ADVANCE(420);
		END_STATE();
	case 54:
		if (lookahead == '\n')
			ADVANCE(420);
		if (lookahead == '\r')
			ADVANCE(53);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(105);
		END_STATE();
	case 55:
		if (lookahead == '\n')
			ADVANCE(422);
		END_STATE();
	case 56:
		if (lookahead == '\n')
			ADVANCE(422);
		if (lookahead == '\r')
			ADVANCE(55);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(107);
		END_STATE();
	case 57:
		if (lookahead == '\n')
			SKIP(168);
		END_STATE();
	case 58:
		if (lookahead == '\n')
			ADVANCE(432);
		END_STATE();
	case 59:
		if (lookahead == '\n')
			ADVANCE(432);
		if (lookahead == '\r')
			ADVANCE(58);
		if (lookahead == ' ')
			ADVANCE(464);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(166);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 60:
		if (lookahead == '\n')
			ADVANCE(432);
		if (lookahead == '\r')
			ADVANCE(58);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(166);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 61:
		if (lookahead == '\n')
			SKIP(175);
		END_STATE();
	case 62:
		if (lookahead == '\n')
			ADVANCE(424);
		END_STATE();
	case 63:
		if (lookahead == '\n')
			ADVANCE(424);
		if (lookahead == '\r')
			ADVANCE(62);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(109);
		END_STATE();
	case 64:
		if (lookahead == '\n')
			SKIP(177);
		END_STATE();
	case 65:
		if (lookahead == '\n')
			ADVANCE(433);
		END_STATE();
	case 66:
		if (lookahead == '\n')
			ADVANCE(433);
		if (lookahead == '\r')
			ADVANCE(65);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(178);
		END_STATE();
	case 67:
		if (lookahead == '\n')
			ADVANCE(428);
		END_STATE();
	case 68:
		if (lookahead == '\n')
			ADVANCE(428);
		if (lookahead == '\r')
			ADVANCE(67);
		if (lookahead == ' ')
			ADVANCE(459);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(113);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 69:
		if (lookahead == '\n')
			ADVANCE(428);
		if (lookahead == '\r')
			ADVANCE(67);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(113);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 70:
		if (lookahead == '\n')
			SKIP(188);
		END_STATE();
	case 71:
		if (lookahead == '\n')
			SKIP(184);
		END_STATE();
	case 72:
		if (lookahead == '\n')
			ADVANCE(429);
		END_STATE();
	case 73:
		if (lookahead == '\n')
			ADVANCE(429);
		if (lookahead == '\r')
			ADVANCE(72);
		if (lookahead == ' ')
			ADVANCE(460);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(114);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 74:
		if (lookahead == '\n')
			ADVANCE(429);
		if (lookahead == '\r')
			ADVANCE(72);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(114);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 75:
		if (lookahead == '\n')
			SKIP(192);
		END_STATE();
	case 76:
		if (lookahead == '\n')
			ADVANCE(426);
		END_STATE();
	case 77:
		if (lookahead == '\n')
			ADVANCE(426);
		if (lookahead == '\r')
			ADVANCE(76);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(111);
		END_STATE();
	case 78:
		if (lookahead == '\n')
			SKIP(195);
		END_STATE();
	case 79:
		if (lookahead == '\n')
			SKIP(190);
		END_STATE();
	case 80:
		if (lookahead == '\n')
			ADVANCE(366);
		if (lookahead == '\r')
			ADVANCE(362);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(366);
		if (lookahead != 0)
			ADVANCE(369);
		END_STATE();
	case 81:
		if (lookahead == '\n')
			ADVANCE(434);
		END_STATE();
	case 82:
		if (lookahead == '\n')
			ADVANCE(434);
		if (lookahead == '\r')
			ADVANCE(81);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(179);
		END_STATE();
	case 83:
		if (lookahead == '\n')
			SKIP(181);
		END_STATE();
	case 84:
		if (lookahead == '\n')
			ADVANCE(367);
		if (lookahead == '\r')
			ADVANCE(364);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(367);
		if (lookahead != 0)
			ADVANCE(369);
		END_STATE();
	case 85:
		if (lookahead == '\n')
			ADVANCE(435);
		END_STATE();
	case 86:
		if (lookahead == '\n')
			ADVANCE(435);
		if (lookahead == '\r')
			ADVANCE(85);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(182);
		END_STATE();
	case 87:
		if (lookahead == '\n')
			SKIP(189);
		END_STATE();
	case 88:
		if (lookahead == '\n')
			SKIP(191);
		END_STATE();
	case 89:
		ADVANCE_MAP('\n', 286, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '(', 249, '*', 337, '-', 333, '0', 440, ';',
					493, '<', 267, '>', 271, '?', 344, '@', 438, '\\', 19, '_', 443, '`', 396, 'e', 406, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(89);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(447);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 90:
		if (lookahead == '\n')
			SKIP(102);
		END_STATE();
	case 91:
		if (lookahead == '\n')
			SKIP(103);
		END_STATE();
	case 92:
		if (lookahead == '\n')
			ADVANCE(427);
		END_STATE();
	case 93:
		if (lookahead == '\n')
			ADVANCE(427);
		if (lookahead == '\r')
			ADVANCE(92);
		if (lookahead == ' ')
			ADVANCE(458);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(112);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 94:
		if (lookahead == '\n')
			ADVANCE(427);
		if (lookahead == '\r')
			ADVANCE(92);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(112);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 95:
		if (lookahead == '\n')
			SKIP(186);
		END_STATE();
	case 96:
		if (lookahead == '\n')
			SKIP(193);
		END_STATE();
	case 97:
		ADVANCE_MAP('\n', 287, '"', 361, '#', 402, '$', 359, '&', 324, '\'', 197, '(', 249, ';', 493, '<', 267, '>', 271, '\\', 134, '`',
					396, 'e', 487, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(97);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(448);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 98:
		ADVANCE_MAP('\n', 288, '"', 361, '#', 402, '$', 359, '&', 324, '\'', 197, '(', 249, ')', 253, ';', 493, '<', 267, '>', 271, '\\',
					136, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(98);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(449);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 99:
		ADVANCE_MAP('\n', 289, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '(', 249, ')', 253, '*', 337, '-', 333, '0',
					440, ';', 493, '<', 267, '>', 271, '?', 344, '@', 438, '\\', 22, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(99);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(450);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 100:
		ADVANCE_MAP('\n', 290, '!', 261, '#', 376, '$', 358, '&', 324, '*', 334, '-', 331, '0', 441, ';', 493, '<', 267, '>', 271, '?', 343,
					'@', 437, '\\', 52, '_', 444, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(100);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 101:
		ADVANCE_MAP('\n', 291, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '*', 337, '-', 333, '0', 440, ';', 493, '<',
					267, '>', 271, '?', 344, '@', 438, '\\', 31, '_', 443, '`', 396, 'e', 406, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(101);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(451);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 102:
		ADVANCE_MAP('\n', 292, '"', 361, '#', 402, '$', 359, '&', 324, '\'', 197, '(', 249, ';', 493, '<', 267, '>', 271, '\\', 141, '`',
					397, 'e', 487, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(102);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(452);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 103:
		ADVANCE_MAP('\n', 293, '"', 361, '#', 402, '$', 359, '&', 324, '\'', 197, '(', 249, ')', 253, ';', 493, '<', 267, '>', 271, '\\',
					139, '`', 397, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(103);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(453);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 104:
		ADVANCE_MAP('\n', 294, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '*', 337, '-', 333, '0', 440, ';', 493, '<',
					267, '>', 271, '?', 344, '@', 438, '\\', 25, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(104);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(454);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 105:
		ADVANCE_MAP('\n', 295, '!', 261, '#', 376, '$', 358, '&', 324, '*', 334, '-', 331, '0', 441, ';', 493, '<', 267, '>', 271, '?', 343,
					'@', 437, '\\', 54, '_', 444, '`', 396, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(105);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 106:
		ADVANCE_MAP('\n', 296, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, ')', 253, '*', 337, '-', 333, '0', 440, ';',
					493, '<', 267, '>', 271, '?', 344, '@', 438, '\\', 28, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(106);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(455);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 107:
		ADVANCE_MAP('\n', 297, '!', 261, '#', 376, '$', 358, '&', 324, '*', 334, '-', 331, '0', 441, ';', 493, '<', 267, '>', 271, '?', 343,
					'@', 437, '\\', 56, '_', 444, 'e', 411, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(107);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 108:
		ADVANCE_MAP('\n', 298, '!', 262, '"', 361, '#', 376, '$', 359, '&', 196, '\'', 197, '(', 249, '*', 337, '-', 333, '0', 440, '<',
					267, '>', 271, '?', 344, '@', 438, '\\', 36, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(108);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(456);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 109:
		ADVANCE_MAP('\n', 299, '!', 261, '#', 376, '$', 358, '&', 196, '*', 334, '-', 331, '0', 441, '<', 267, '>', 271, '?', 343, '@', 437,
					'\\', 63, '_', 444, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(109);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 110:
		ADVANCE_MAP('\n', 300, '!', 262, '"', 361, '#', 376, '$', 359, '&', 196, '\'', 197, '*', 337, '-', 333, '0', 440, '<', 267, '>',
					271, '?', 344, '@', 438, '\\', 42, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(110);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(457);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 111:
		ADVANCE_MAP('\n', 301, '!', 261, '#', 376, '$', 358, '&', 323, '*', 334, '-', 331, '0', 441, ';', 493, '?', 343, '@', 437, '\\', 77,
					'_', 444, 'i', 410, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(111);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 112:
		ADVANCE_MAP('\n', 302, '!', 262, '"', 361, '#', 376, '$', 359, '&', 196, '\'', 197, '*', 337, '-', 333, '0', 440, '<', 268, '>',
					271, '?', 344, '@', 438, '\\', 94, '_', 443, '`', 396, '|', 214, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(112);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(458);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 113:
		ADVANCE_MAP('\n', 303, '!', 262, '"', 361, '#', 376, '$', 359, '&', 323, '\'', 197, '*', 337, '-', 333, '0', 440, ';', 493, '?',
					344, '@', 438, '\\', 69, '_', 443, '`', 396, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(113);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(459);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 114:
		ADVANCE_MAP('\n', 304, '!', 262, '"', 361, '#', 376, '$', 359, '\'', 197, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\',
					74, '_', 443, '`', 396, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(114);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(460);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 115:
		if (lookahead == '\r')
			SKIP(1);
		if (lookahead == ' ')
			ADVANCE(461);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(163);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 116:
		if (lookahead == '\r')
			SKIP(1);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(163);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 117:
		if (lookahead == '\r')
			ADVANCE(370);
		if (lookahead != 0)
			ADVANCE(369);
		END_STATE();
	case 118:
		if (lookahead == '\r')
			SKIP(2);
		if (lookahead == ' ')
			ADVANCE(465);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(167);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 119:
		if (lookahead == '\r')
			SKIP(2);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(167);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 120:
		if (lookahead == '\r')
			SKIP(3);
		if (lookahead == ' ')
			ADVANCE(466);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(169);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 121:
		if (lookahead == '\r')
			SKIP(3);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(169);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 122:
		if (lookahead == '\r')
			ADVANCE(365);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(368);
		if (lookahead != 0)
			ADVANCE(369);
		END_STATE();
	case 123:
		if (lookahead == '\r')
			SKIP(4);
		if (lookahead == ' ')
			ADVANCE(445);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(5);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 124:
		if (lookahead == '\r')
			SKIP(4);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(5);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 125:
		if (lookahead == '\r')
			SKIP(6);
		if (lookahead == ' ')
			ADVANCE(467);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(170);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 126:
		if (lookahead == '\r')
			SKIP(6);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(170);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 127:
		if (lookahead == '\r')
			SKIP(7);
		if (lookahead == ' ')
			ADVANCE(468);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(171);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 128:
		if (lookahead == '\r')
			SKIP(7);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(171);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 129:
		if (lookahead == '\r')
			SKIP(8);
		if (lookahead == ' ')
			ADVANCE(469);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(172);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 130:
		if (lookahead == '\r')
			SKIP(8);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(172);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 131:
		if (lookahead == '\r')
			SKIP(9);
		if (lookahead == ' ')
			ADVANCE(471);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(187);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 132:
		if (lookahead == '\r')
			SKIP(9);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(187);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 133:
		if (lookahead == '\r')
			SKIP(32);
		if (lookahead == ' ')
			ADVANCE(448);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(97);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 134:
		if (lookahead == '\r')
			SKIP(32);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(97);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 135:
		if (lookahead == '\r')
			SKIP(33);
		if (lookahead == ' ')
			ADVANCE(449);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(98);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 136:
		if (lookahead == '\r')
			SKIP(33);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(98);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 137:
		if (lookahead == '\r')
			SKIP(46);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(173);
		END_STATE();
	case 138:
		if (lookahead == '\r')
			SKIP(91);
		if (lookahead == ' ')
			ADVANCE(453);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(103);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 139:
		if (lookahead == '\r')
			SKIP(91);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(103);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 140:
		if (lookahead == '\r')
			SKIP(90);
		if (lookahead == ' ')
			ADVANCE(452);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(102);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 141:
		if (lookahead == '\r')
			SKIP(90);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(102);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 142:
		if (lookahead == '\r')
			SKIP(47);
		if (lookahead == ' ')
			ADVANCE(472);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(185);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 143:
		if (lookahead == '\r')
			SKIP(47);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(185);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 144:
		if (lookahead == '\r')
			SKIP(57);
		if (lookahead == ' ')
			ADVANCE(470);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(168);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 145:
		if (lookahead == '\r')
			SKIP(57);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(168);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 146:
		if (lookahead == '\r')
			SKIP(61);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(175);
		END_STATE();
	case 147:
		if (lookahead == '\r')
			SKIP(95);
		if (lookahead == ' ')
			ADVANCE(473);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(186);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 148:
		if (lookahead == '\r')
			SKIP(95);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(186);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 149:
		if (lookahead == '\r')
			SKIP(64);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(177);
		END_STATE();
	case 150:
		if (lookahead == '\r')
			SKIP(70);
		if (lookahead == ' ')
			ADVANCE(474);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(188);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 151:
		if (lookahead == '\r')
			SKIP(70);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(188);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 152:
		if (lookahead == '\r')
			SKIP(71);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(184);
		END_STATE();
	case 153:
		if (lookahead == '\r')
			SKIP(75);
		if (lookahead == ' ')
			ADVANCE(475);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(192);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 154:
		if (lookahead == '\r')
			SKIP(75);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(192);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 155:
		if (lookahead == '\r')
			SKIP(96);
		if (lookahead == ' ')
			ADVANCE(476);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(193);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 156:
		if (lookahead == '\r')
			SKIP(96);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(193);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 157:
		if (lookahead == '\r')
			SKIP(78);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(195);
		END_STATE();
	case 158:
		if (lookahead == '\r')
			SKIP(79);
		if (lookahead == ' ')
			ADVANCE(490);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(190);
		if (lookahead != 0)
			ADVANCE(491);
		END_STATE();
	case 159:
		if (lookahead == '\r')
			SKIP(79);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(190);
		if (lookahead != 0)
			ADVANCE(491);
		END_STATE();
	case 160:
		if (lookahead == '\r')
			SKIP(83);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(181);
		END_STATE();
	case 161:
		if (lookahead == '\r')
			SKIP(87);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(189);
		END_STATE();
	case 162:
		if (lookahead == '\r')
			SKIP(88);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(191);
		END_STATE();
	case 163:
		ADVANCE_MAP('!', 262, '"', 361, '#', 376, '$', 359, '%', 340, '&', 325, '\'', 197, '(', 249, ')', 253, '*', 335, '+', 352, '-', 350,
					'/', 338, '0', 439, ':', 347, ';', 493, '<', 266, '=', 265, '>', 270, '?', 344, '@', 438, '\\', 116, '^', 321, '_', 442,
					'`', 397, 'd', 486, 'e', 483, 'f', 481, 'i', 485, '{', 256, '|', 251, '}', 258, '~', 354, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(163);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(461);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 164:
		ADVANCE_MAP('!', 262, '"', 361, '#', 376, '$', 359, '&', 196, '\'', 197, '(', 249, '*', 337, '-', 333, '0', 440, '<', 267, '>', 271,
					'?', 344, '@', 438, '\\', 39, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(164);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(462);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 165:
		ADVANCE_MAP('!', 262, '"', 361, '#', 376, '$', 359, '&', 196, '\'', 197, '*', 337, '-', 333, '0', 440, '<', 267, '>', 271, '?', 344,
					'@', 438, '\\', 45, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(165);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(463);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 166:
		ADVANCE_MAP('!', 262, '"', 361, '#', 376, '$', 359, '\'', 197, '*', 337, '-', 333, '0', 440, '<', 268, '>', 271, '?', 344, '@', 438,
					'\\', 60, '_', 443, '`', 396, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(166);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(464);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 167:
		ADVANCE_MAP('!', 262, '"', 361, '#', 402, '$', 359, '\'', 197, '(', 249, ')', 253, ';', 201, '<', 268, '>', 271, '\\', 119, '`',
					396, '{', 256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(167);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(465);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != '{' && lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 168:
		ADVANCE_MAP('!', 262, '"', 361, '#', 402, '$', 359, '\'', 197, '(', 249, ';', 201, '<', 268, '>', 271, '\\', 145, '`', 396, 'e',
					487, '{', 256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(168);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(470);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != '{' && lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 169:
		ADVANCE_MAP('!', 262, '"', 361, '#', 402, '$', 359, '\'', 197, '(', 249, '<', 268, '>', 271, '\\', 121, '`', 396, 'e', 484, 'f',
					481, '{', 256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(169);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(466);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 170:
		ADVANCE_MAP('!', 262, '"', 361, '#', 402, '$', 359, '\'', 197, '(', 249, '<', 268, '>', 271, '\\', 126, '`', 396, 'd', 486, '{',
					256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(170);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(467);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 171:
		ADVANCE_MAP('!', 262, '"', 361, '#', 402, '$', 359, '\'', 197, '(', 249, '<', 268, '>', 271, '\\', 128, '`', 396, 'f', 481, '{',
					256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(171);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(468);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 172:
		ADVANCE_MAP('!', 262, '"', 361, '#', 402, '$', 359, '\'', 197, '(', 249, '<', 268, '>', 271, '\\', 130, '`', 396, '{', 256, '}',
					258, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(172);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(469);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '{' || '}' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 173:
		ADVANCE_MAP('!', 202, '#', 402, '%', 342, '&', 325, ')', 253, '*', 336, '+', 330, '-', 332, '/', 339, '<', 269, '=', 264, '>', 272,
					'?', 343, );
		if (lookahead == '\\')
			SKIP(137);
		if (lookahead == '^')
			ADVANCE(322);
		if (lookahead == '`')
			ADVANCE(203);
		if (lookahead == '|')
			ADVANCE(251);
		if (lookahead == '}')
			ADVANCE(257);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(173);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 174:
		ADVANCE_MAP('!', 261, '"', 361, '#', 376, '$', 358, '*', 334, '-', 331, '0', 441, '?', 343, '@', 437, '\\', 80, '_', 444, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(174);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(366);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		if (lookahead != 0 && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(369);
		END_STATE();
	case 175:
		ADVANCE_MAP('!', 261, '"', 361, '#', 402, '$', 360, '&', 196, '(', 249, ')', 199, '+', 353, '-', 351, '<', 267, '=', 263, '>',
					271, );
		if (lookahead == '\\')
			SKIP(146);
		if (lookahead == '`')
			ADVANCE(396);
		if (lookahead == '|')
			ADVANCE(252);
		if (lookahead == '~')
			ADVANCE(354);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(175);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(375);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 176:
		ADVANCE_MAP('!', 261, '#', 376, '$', 358, '%', 341, '*', 334, '+', 390, '-', 380, '0', 441, ':', 200, '=', 383, '?', 387, '@',
					437, );
		if (lookahead == '\\')
			SKIP(149);
		if (lookahead == '_')
			ADVANCE(444);
		if (lookahead == '}')
			ADVANCE(257);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(177);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 177:
		ADVANCE_MAP('!', 261, '#', 376, '$', 358, '%', 341, '*', 334, '-', 331, '0', 441, '?', 343, '@', 437, );
		if (lookahead == '\\')
			SKIP(149);
		if (lookahead == '_')
			ADVANCE(444);
		if (lookahead == '}')
			ADVANCE(257);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(177);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 178:
		ADVANCE_MAP('!', 261, '#', 376, '$', 358, '&', 196, '*', 334, '-', 331, '0', 441, '<', 267, '>', 271, '?', 343, '@', 437, '\\', 66,
					'_', 444, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(178);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 179:
		ADVANCE_MAP('!', 261, '#', 376, '$', 358, ')', 253, '*', 334, '-', 331, '0', 441, '?', 343, '@', 437, '\\', 82, '_', 444, '|',
					250, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(179);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 180:
		ADVANCE_MAP('!', 261, '#', 376, '$', 358, '*', 334, '-', 331, '0', 441, '?', 343, '@', 437, '\\', 84, '_', 444, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(180);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(367);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		if (lookahead != 0 && (lookahead < ' ' || '$' < lookahead) && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(369);
		END_STATE();
	case 181:
		ADVANCE_MAP('!', 261, '#', 376, '$', 358, '*', 334, '-', 331, '0', 441, '?', 343, '@', 437, );
		if (lookahead == '\\')
			SKIP(160);
		if (lookahead == '_')
			ADVANCE(444);
		if (lookahead == '}')
			ADVANCE(257);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(181);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 182:
		ADVANCE_MAP('!', 261, '#', 376, '$', 358, '*', 334, '-', 331, '0', 441, '?', 343, '@', 437, '\\', 86, '_', 444, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(182);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 183:
		ADVANCE_MAP('"', 361, '#', 376, '%', 341, '\'', 197, ')', 253, '+', 390, '-', 380, ':', 200, '=', 383, '?', 387, );
		if (lookahead == '\\')
			SKIP(152);
		if (lookahead == '}')
			ADVANCE(257);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(393);
		END_STATE();
	case 184:
		if (lookahead == '"')
			ADVANCE(361);
		if (lookahead == '#')
			ADVANCE(376);
		if (lookahead == '%')
			ADVANCE(341);
		if (lookahead == '\'')
			ADVANCE(197);
		if (lookahead == ')')
			ADVANCE(253);
		if (lookahead == '\\')
			SKIP(152);
		if (lookahead == '}')
			ADVANCE(257);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(393);
		END_STATE();
	case 185:
		ADVANCE_MAP('"', 361, '#', 402, '$', 359, '&', 196, '\'', 197, '(', 249, '<', 267, '>', 271, '\\', 143, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(185);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(472);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 186:
		ADVANCE_MAP('"', 361, '#', 402, '$', 359, '&', 196, '\'', 197, '(', 249, '<', 267, '>', 271, '\\', 148, '`', 397, '|', 252, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(186);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(473);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 187:
		ADVANCE_MAP('"', 361, '#', 402, '$', 359, '\'', 197, '(', 249, '<', 268, '>', 271, '\\', 132, '`', 396, '{', 256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(187);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(471);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 188:
		ADVANCE_MAP('"', 361, '#', 402, '$', 359, '\'', 197, '(', 249, '\\', 151, '`', 396, 'e', 487, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(188);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(474);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 189:
		if (lookahead == '"')
			ADVANCE(361);
		if (lookahead == '#')
			ADVANCE(402);
		if (lookahead == '$')
			ADVANCE(198);
		if (lookahead == ')')
			ADVANCE(253);
		if (lookahead == '\\')
			SKIP(161);
		if (lookahead == '`')
			ADVANCE(396);
		if (lookahead == '|')
			ADVANCE(250);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(189);
		END_STATE();
	case 190:
		if (lookahead == '"')
			ADVANCE(361);
		if (lookahead == '#')
			ADVANCE(402);
		if (lookahead == '$')
			ADVANCE(360);
		if (lookahead == '\'')
			ADVANCE(197);
		if (lookahead == '\\')
			ADVANCE(159);
		if (lookahead == '`')
			ADVANCE(396);
		if (lookahead == '}')
			ADVANCE(257);
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(190);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(490);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			(lookahead < '{' || '}' < lookahead))
			ADVANCE(491);
		END_STATE();
	case 191:
		if (lookahead == '"')
			ADVANCE(361);
		if (lookahead == '#')
			ADVANCE(402);
		if (lookahead == '\'')
			ADVANCE(197);
		if (lookahead == ')')
			ADVANCE(253);
		if (lookahead == '\\')
			SKIP(162);
		if (lookahead == '}')
			ADVANCE(257);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(393);
		END_STATE();
	case 192:
		if (lookahead == '"')
			ADVANCE(361);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '$')
			ADVANCE(359);
		if (lookahead == '\'')
			ADVANCE(197);
		if (lookahead == '\\')
			ADVANCE(154);
		if (lookahead == '`')
			ADVANCE(397);
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(192);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(475);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 193:
		if (lookahead == '"')
			ADVANCE(361);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '$')
			ADVANCE(359);
		if (lookahead == '\'')
			ADVANCE(197);
		if (lookahead == '\\')
			ADVANCE(156);
		if (lookahead == '`')
			ADVANCE(396);
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(193);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(476);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 194:
		if (lookahead == '"')
			ADVANCE(361);
		if (lookahead == '#')
			ADVANCE(371);
		if (lookahead == '$')
			ADVANCE(359);
		if (lookahead == '\\')
			ADVANCE(122);
		if (lookahead == '`')
			ADVANCE(396);
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(194);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(368);
		if (lookahead != 0)
			ADVANCE(369);
		END_STATE();
	case 195:
		if (lookahead == '#')
			ADVANCE(402);
		if (lookahead == '&')
			ADVANCE(196);
		if (lookahead == ')')
			ADVANCE(253);
		if (lookahead == '<')
			ADVANCE(267);
		if (lookahead == '>')
			ADVANCE(271);
		if (lookahead == '\\')
			SKIP(157);
		if (lookahead == '`')
			ADVANCE(203);
		if (lookahead == '|')
			ADVANCE(252);
		if (lookahead == '}')
			ADVANCE(257);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(195);
		END_STATE();
	case 196:
		if (lookahead == '&')
			ADVANCE(259);
		END_STATE();
	case 197:
		if (lookahead == '\'')
			ADVANCE(372);
		if (lookahead != 0)
			ADVANCE(197);
		END_STATE();
	case 198:
		if (lookahead == '(')
			ADVANCE(394);
		if (lookahead == '{')
			ADVANCE(378);
		END_STATE();
	case 199:
		if (lookahead == ')')
			ADVANCE(306);
		END_STATE();
	case 200:
		if (lookahead == '+')
			ADVANCE(389);
		if (lookahead == '-')
			ADVANCE(379);
		if (lookahead == '=')
			ADVANCE(381);
		if (lookahead == '?')
			ADVANCE(385);
		END_STATE();
	case 201:
		if (lookahead == ';')
			ADVANCE(255);
		END_STATE();
	case 202:
		if (lookahead == '=')
			ADVANCE(327);
		END_STATE();
	case 203:
		if (lookahead == '`')
			ADVANCE(357);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(203);
		END_STATE();
	case 204:
		if (lookahead == 'a')
			ADVANCE(205);
		END_STATE();
	case 205:
		if (lookahead == 'c')
			ADVANCE(245);
		END_STATE();
	case 206:
		if (lookahead == 'e')
			ADVANCE(243);
		END_STATE();
	case 207:
		if (lookahead == 'f')
			ADVANCE(241);
		END_STATE();
	case 208:
		if (lookahead == 'i')
			ADVANCE(239);
		END_STATE();
	case 209:
		if (lookahead == 'i')
			ADVANCE(207);
		if (lookahead == 's')
			ADVANCE(206);
		END_STATE();
	case 210:
		if (lookahead == 'l')
			ADVANCE(209);
		if (lookahead == 's')
			ADVANCE(204);
		END_STATE();
	case 211:
		if (lookahead == 'n')
			ADVANCE(234);
		END_STATE();
	case 212:
		if (lookahead == 'o')
			ADVANCE(237);
		END_STATE();
	case 213:
		if (lookahead == 's')
			ADVANCE(204);
		END_STATE();
	case 214:
		if (lookahead == '|')
			ADVANCE(260);
		END_STATE();
	case 215:
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 216:
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(491);
		END_STATE();
	case 217:
		if (eof)
			ADVANCE(233);
		ADVANCE_MAP('\n', 283, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '(', 249, '*', 337, '-', 333, '0', 440, ';',
					493, '<', 267, '>', 271, '?', 344, '@', 438, '\\', 13, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(217);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(446);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 218:
		if (eof)
			ADVANCE(233);
		if (lookahead == '\n')
			SKIP(232);
		END_STATE();
	case 219:
		if (eof)
			ADVANCE(233);
		if (lookahead == '\n')
			SKIP(220);
		END_STATE();
	case 220:
		if (eof)
			ADVANCE(233);
		if (lookahead == '\n')
			ADVANCE(285);
		if (lookahead == '#')
			ADVANCE(402);
		if (lookahead == '&')
			ADVANCE(324);
		if (lookahead == ')')
			ADVANCE(253);
		if (lookahead == ';')
			ADVANCE(493);
		if (lookahead == '<')
			ADVANCE(267);
		if (lookahead == '>')
			ADVANCE(271);
		if (lookahead == '\\')
			SKIP(228);
		if (lookahead == '`')
			ADVANCE(397);
		if (lookahead == 'e')
			ADVANCE(213);
		if (lookahead == 'i')
			ADVANCE(211);
		if (lookahead == '|')
			ADVANCE(252);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(220);
		END_STATE();
	case 221:
		if (eof)
			ADVANCE(233);
		if (lookahead == '\n')
			ADVANCE(285);
		if (lookahead == '#')
			ADVANCE(402);
		if (lookahead == '&')
			ADVANCE(324);
		if (lookahead == ')')
			ADVANCE(253);
		if (lookahead == ';')
			ADVANCE(493);
		if (lookahead == '<')
			ADVANCE(267);
		if (lookahead == '>')
			ADVANCE(271);
		if (lookahead == '\\')
			SKIP(229);
		if (lookahead == '`')
			ADVANCE(396);
		if (lookahead == '|')
			ADVANCE(252);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(221);
		END_STATE();
	case 222:
		if (eof)
			ADVANCE(233);
		if (lookahead == '\n')
			SKIP(221);
		END_STATE();
	case 223:
		if (eof)
			ADVANCE(233);
		ADVANCE_MAP('\n', 288, '"', 361, '#', 402, '$', 359, '&', 324, '\'', 197, '(', 249, ')', 253, ';', 493, '<', 267, '>', 271, '\\',
					136, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(223);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(449);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 224:
		if (eof)
			ADVANCE(233);
		ADVANCE_MAP('\n', 290, '!', 261, '#', 376, '$', 358, '&', 324, '*', 334, '-', 331, '0', 441, ';', 493, '<', 267, '>', 271, '?', 343,
					'@', 437, '\\', 52, '_', 444, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(224);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 225:
		if (eof)
			ADVANCE(233);
		ADVANCE_MAP('\n', 293, '"', 361, '#', 402, '$', 359, '&', 324, '\'', 197, '(', 249, ')', 253, ';', 493, '<', 267, '>', 271, '\\',
					139, '`', 397, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(225);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(453);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 226:
		if (eof)
			ADVANCE(233);
		ADVANCE_MAP('\n', 294, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '*', 337, '-', 333, '0', 440, ';', 493, '<',
					267, '>', 271, '?', 344, '@', 438, '\\', 25, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(226);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(454);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 227:
		if (eof)
			ADVANCE(233);
		if (lookahead == '\r')
			SKIP(218);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(232);
		END_STATE();
	case 228:
		if (eof)
			ADVANCE(233);
		if (lookahead == '\r')
			SKIP(219);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(220);
		END_STATE();
	case 229:
		if (eof)
			ADVANCE(233);
		if (lookahead == '\r')
			SKIP(222);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(221);
		END_STATE();
	case 230:
		if (eof)
			ADVANCE(233);
		ADVANCE_MAP('!', 262, '"', 361, '#', 376, '$', 359, '%', 340, '&', 325, '\'', 197, '(', 249, ')', 253, '*', 335, '+', 352, '-', 350,
					'/', 338, '0', 439, ':', 347, ';', 493, '<', 266, '=', 265, '>', 270, '?', 344, '@', 438, '\\', 116, '^', 321, '_', 442,
					'`', 397, 'd', 486, 'e', 483, 'f', 481, 'i', 485, '{', 256, '|', 251, '}', 258, '~', 354, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(230);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(461);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 231:
		if (eof)
			ADVANCE(233);
		ADVANCE_MAP('!', 262, '"', 361, '#', 402, '$', 359, '\'', 197, '(', 249, ')', 253, ';', 201, '<', 268, '>', 271, '\\', 119, '`',
					396, '{', 256, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(231);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(465);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != '{' && lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 232:
		if (eof)
			ADVANCE(233);
		ADVANCE_MAP('!', 202, '#', 402, '$', 360, '%', 342, '&', 325, ')', 199, '*', 336, '+', 330, '-', 332, '/', 339, ':', 345, ';', 201,
					'<', 269, '=', 264, '>', 272, '?', 343, );
		if (lookahead == '\\')
			SKIP(227);
		if (lookahead == '^')
			ADVANCE(322);
		if (lookahead == '`')
			ADVANCE(396);
		if (lookahead == 'd')
			ADVANCE(212);
		if (lookahead == 'e')
			ADVANCE(210);
		if (lookahead == 'f')
			ADVANCE(208);
		if (lookahead == 'i')
			ADVANCE(211);
		if (lookahead == '|')
			ADVANCE(251);
		if (lookahead == '}')
			ADVANCE(257);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(232);
		END_STATE();
	case 233:
		ACCEPT_TOKEN(ts_builtin_sym_end);
		END_STATE();
	case 234:
		ACCEPT_TOKEN(anon_sym_in);
		END_STATE();
	case 235:
		ACCEPT_TOKEN(anon_sym_in);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 236:
		ACCEPT_TOKEN(anon_sym_in);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 237:
		ACCEPT_TOKEN(anon_sym_do);
		END_STATE();
	case 238:
		ACCEPT_TOKEN(anon_sym_do);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 239:
		ACCEPT_TOKEN(anon_sym_fi);
		END_STATE();
	case 240:
		ACCEPT_TOKEN(anon_sym_fi);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 241:
		ACCEPT_TOKEN(anon_sym_elif);
		END_STATE();
	case 242:
		ACCEPT_TOKEN(anon_sym_elif);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 243:
		ACCEPT_TOKEN(anon_sym_else);
		END_STATE();
	case 244:
		ACCEPT_TOKEN(anon_sym_else);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 245:
		ACCEPT_TOKEN(anon_sym_esac);
		END_STATE();
	case 246:
		ACCEPT_TOKEN(anon_sym_esac);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 247:
		ACCEPT_TOKEN(anon_sym_esac);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 248:
		ACCEPT_TOKEN(anon_sym_esac);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 249:
		ACCEPT_TOKEN(anon_sym_LPAREN);
		END_STATE();
	case 250:
		ACCEPT_TOKEN(anon_sym_PIPE);
		END_STATE();
	case 251:
		ACCEPT_TOKEN(anon_sym_PIPE);
		if (lookahead == '=')
			ADVANCE(320);
		if (lookahead == '|')
			ADVANCE(260);
		END_STATE();
	case 252:
		ACCEPT_TOKEN(anon_sym_PIPE);
		if (lookahead == '|')
			ADVANCE(260);
		END_STATE();
	case 253:
		ACCEPT_TOKEN(anon_sym_RPAREN);
		END_STATE();
	case 254:
		ACCEPT_TOKEN(anon_sym_LF);
		if (lookahead == '\n')
			ADVANCE(254);
		if (lookahead == '\\')
			ADVANCE(124);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(445);
		END_STATE();
	case 255:
		ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
		END_STATE();
	case 256:
		ACCEPT_TOKEN(anon_sym_LBRACE);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 257:
		ACCEPT_TOKEN(anon_sym_RBRACE);
		END_STATE();
	case 258:
		ACCEPT_TOKEN(anon_sym_RBRACE);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 259:
		ACCEPT_TOKEN(anon_sym_AMP_AMP);
		END_STATE();
	case 260:
		ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
		END_STATE();
	case 261:
		ACCEPT_TOKEN(anon_sym_BANG);
		END_STATE();
	case 262:
		ACCEPT_TOKEN(anon_sym_BANG);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 263:
		ACCEPT_TOKEN(anon_sym_EQ);
		END_STATE();
	case 264:
		ACCEPT_TOKEN(anon_sym_EQ);
		if (lookahead == '=')
			ADVANCE(326);
		END_STATE();
	case 265:
		ACCEPT_TOKEN(anon_sym_EQ);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 266:
		ACCEPT_TOKEN(anon_sym_LT);
		if (lookahead == '&')
			ADVANCE(275);
		if (lookahead == '<')
			ADVANCE(280);
		if (lookahead == '=')
			ADVANCE(328);
		if (lookahead == '>')
			ADVANCE(278);
		END_STATE();
	case 267:
		ACCEPT_TOKEN(anon_sym_LT);
		if (lookahead == '&')
			ADVANCE(275);
		if (lookahead == '<')
			ADVANCE(279);
		if (lookahead == '>')
			ADVANCE(278);
		END_STATE();
	case 268:
		ACCEPT_TOKEN(anon_sym_LT);
		if (lookahead == '&')
			ADVANCE(275);
		if (lookahead == '>')
			ADVANCE(278);
		END_STATE();
	case 269:
		ACCEPT_TOKEN(anon_sym_LT);
		if (lookahead == '<')
			ADVANCE(281);
		if (lookahead == '=')
			ADVANCE(328);
		END_STATE();
	case 270:
		ACCEPT_TOKEN(anon_sym_GT);
		if (lookahead == '&')
			ADVANCE(276);
		if (lookahead == '=')
			ADVANCE(329);
		if (lookahead == '>')
			ADVANCE(274);
		if (lookahead == '|')
			ADVANCE(277);
		END_STATE();
	case 271:
		ACCEPT_TOKEN(anon_sym_GT);
		if (lookahead == '&')
			ADVANCE(276);
		if (lookahead == '>')
			ADVANCE(273);
		if (lookahead == '|')
			ADVANCE(277);
		END_STATE();
	case 272:
		ACCEPT_TOKEN(anon_sym_GT);
		if (lookahead == '=')
			ADVANCE(329);
		if (lookahead == '>')
			ADVANCE(274);
		END_STATE();
	case 273:
		ACCEPT_TOKEN(anon_sym_GT_GT);
		END_STATE();
	case 274:
		ACCEPT_TOKEN(anon_sym_GT_GT);
		if (lookahead == '=')
			ADVANCE(316);
		END_STATE();
	case 275:
		ACCEPT_TOKEN(anon_sym_LT_AMP);
		END_STATE();
	case 276:
		ACCEPT_TOKEN(anon_sym_GT_AMP);
		END_STATE();
	case 277:
		ACCEPT_TOKEN(anon_sym_GT_PIPE);
		END_STATE();
	case 278:
		ACCEPT_TOKEN(anon_sym_LT_GT);
		END_STATE();
	case 279:
		ACCEPT_TOKEN(anon_sym_LT_LT);
		if (lookahead == '-')
			ADVANCE(282);
		END_STATE();
	case 280:
		ACCEPT_TOKEN(anon_sym_LT_LT);
		if (lookahead == '-')
			ADVANCE(282);
		if (lookahead == '=')
			ADVANCE(315);
		END_STATE();
	case 281:
		ACCEPT_TOKEN(anon_sym_LT_LT);
		if (lookahead == '=')
			ADVANCE(315);
		END_STATE();
	case 282:
		ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
		END_STATE();
	case 283:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(283);
		if (lookahead == '\\')
			ADVANCE(13);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(446);
		END_STATE();
	case 284:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(284);
		if (lookahead == '\\')
			ADVANCE(50);
		END_STATE();
	case 285:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(285);
		END_STATE();
	case 286:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(286);
		if (lookahead == '\\')
			ADVANCE(19);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(447);
		END_STATE();
	case 287:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(287);
		if (lookahead == '\\')
			ADVANCE(134);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(448);
		END_STATE();
	case 288:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(288);
		if (lookahead == '\\')
			ADVANCE(136);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(449);
		END_STATE();
	case 289:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(289);
		if (lookahead == '\\')
			ADVANCE(22);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(450);
		END_STATE();
	case 290:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(290);
		if (lookahead == '\\')
			ADVANCE(52);
		END_STATE();
	case 291:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(291);
		if (lookahead == '\\')
			ADVANCE(31);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(451);
		END_STATE();
	case 292:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(292);
		if (lookahead == '\\')
			ADVANCE(141);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(452);
		END_STATE();
	case 293:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(293);
		if (lookahead == '\\')
			ADVANCE(139);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(453);
		END_STATE();
	case 294:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(294);
		if (lookahead == '\\')
			ADVANCE(25);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(454);
		END_STATE();
	case 295:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(295);
		if (lookahead == '\\')
			ADVANCE(54);
		END_STATE();
	case 296:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(296);
		if (lookahead == '\\')
			ADVANCE(28);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(455);
		END_STATE();
	case 297:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(297);
		if (lookahead == '\\')
			ADVANCE(56);
		END_STATE();
	case 298:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(298);
		if (lookahead == '\\')
			ADVANCE(36);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(456);
		END_STATE();
	case 299:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(299);
		if (lookahead == '\\')
			ADVANCE(63);
		END_STATE();
	case 300:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(300);
		if (lookahead == '\\')
			ADVANCE(42);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(457);
		END_STATE();
	case 301:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(301);
		if (lookahead == '\\')
			ADVANCE(77);
		END_STATE();
	case 302:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(302);
		if (lookahead == '\\')
			ADVANCE(94);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(458);
		END_STATE();
	case 303:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(303);
		if (lookahead == '\\')
			ADVANCE(69);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(459);
		END_STATE();
	case 304:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(304);
		if (lookahead == '\\')
			ADVANCE(74);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(460);
		END_STATE();
	case 305:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN_LPAREN);
		END_STATE();
	case 306:
		ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
		END_STATE();
	case 307:
		ACCEPT_TOKEN(anon_sym_PLUS_EQ);
		END_STATE();
	case 308:
		ACCEPT_TOKEN(anon_sym_DASH_EQ);
		END_STATE();
	case 309:
		ACCEPT_TOKEN(anon_sym_STAR_EQ);
		END_STATE();
	case 310:
		ACCEPT_TOKEN(anon_sym_STAR_EQ);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 311:
		ACCEPT_TOKEN(anon_sym_SLASH_EQ);
		END_STATE();
	case 312:
		ACCEPT_TOKEN(anon_sym_SLASH_EQ);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 313:
		ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
		END_STATE();
	case 314:
		ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 315:
		ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
		END_STATE();
	case 316:
		ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
		END_STATE();
	case 317:
		ACCEPT_TOKEN(anon_sym_AMP_EQ);
		END_STATE();
	case 318:
		ACCEPT_TOKEN(anon_sym_CARET_EQ);
		END_STATE();
	case 319:
		ACCEPT_TOKEN(anon_sym_CARET_EQ);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 320:
		ACCEPT_TOKEN(anon_sym_PIPE_EQ);
		END_STATE();
	case 321:
		ACCEPT_TOKEN(anon_sym_CARET);
		if (lookahead == '=')
			ADVANCE(319);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 322:
		ACCEPT_TOKEN(anon_sym_CARET);
		if (lookahead == '=')
			ADVANCE(318);
		END_STATE();
	case 323:
		ACCEPT_TOKEN(anon_sym_AMP);
		END_STATE();
	case 324:
		ACCEPT_TOKEN(anon_sym_AMP);
		if (lookahead == '&')
			ADVANCE(259);
		END_STATE();
	case 325:
		ACCEPT_TOKEN(anon_sym_AMP);
		if (lookahead == '&')
			ADVANCE(259);
		if (lookahead == '=')
			ADVANCE(317);
		END_STATE();
	case 326:
		ACCEPT_TOKEN(anon_sym_EQ_EQ);
		END_STATE();
	case 327:
		ACCEPT_TOKEN(anon_sym_BANG_EQ);
		END_STATE();
	case 328:
		ACCEPT_TOKEN(anon_sym_LT_EQ);
		END_STATE();
	case 329:
		ACCEPT_TOKEN(anon_sym_GT_EQ);
		END_STATE();
	case 330:
		ACCEPT_TOKEN(anon_sym_PLUS);
		if (lookahead == '+')
			ADVANCE(355);
		if (lookahead == '=')
			ADVANCE(307);
		END_STATE();
	case 331:
		ACCEPT_TOKEN(anon_sym_DASH);
		END_STATE();
	case 332:
		ACCEPT_TOKEN(anon_sym_DASH);
		if (lookahead == '-')
			ADVANCE(356);
		if (lookahead == '=')
			ADVANCE(308);
		END_STATE();
	case 333:
		ACCEPT_TOKEN(anon_sym_DASH);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 334:
		ACCEPT_TOKEN(anon_sym_STAR);
		END_STATE();
	case 335:
		ACCEPT_TOKEN(anon_sym_STAR);
		if (lookahead == '=')
			ADVANCE(310);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 336:
		ACCEPT_TOKEN(anon_sym_STAR);
		if (lookahead == '=')
			ADVANCE(309);
		END_STATE();
	case 337:
		ACCEPT_TOKEN(anon_sym_STAR);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 338:
		ACCEPT_TOKEN(anon_sym_SLASH);
		if (lookahead == '=')
			ADVANCE(312);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 339:
		ACCEPT_TOKEN(anon_sym_SLASH);
		if (lookahead == '=')
			ADVANCE(311);
		END_STATE();
	case 340:
		ACCEPT_TOKEN(anon_sym_PERCENT);
		if (lookahead == '%')
			ADVANCE(392);
		if (lookahead == '=')
			ADVANCE(314);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 341:
		ACCEPT_TOKEN(anon_sym_PERCENT);
		if (lookahead == '%')
			ADVANCE(391);
		END_STATE();
	case 342:
		ACCEPT_TOKEN(anon_sym_PERCENT);
		if (lookahead == '=')
			ADVANCE(313);
		END_STATE();
	case 343:
		ACCEPT_TOKEN(anon_sym_QMARK);
		END_STATE();
	case 344:
		ACCEPT_TOKEN(anon_sym_QMARK);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 345:
		ACCEPT_TOKEN(anon_sym_COLON);
		END_STATE();
	case 346:
		ACCEPT_TOKEN(anon_sym_COLON);
		if (lookahead == '=')
			ADVANCE(382);
		if (lookahead == '?')
			ADVANCE(386);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 347:
		ACCEPT_TOKEN(anon_sym_COLON);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 348:
		ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
		END_STATE();
	case 349:
		ACCEPT_TOKEN(anon_sym_DASH_DASH);
		END_STATE();
	case 350:
		ACCEPT_TOKEN(anon_sym_DASH2);
		END_STATE();
	case 351:
		ACCEPT_TOKEN(anon_sym_DASH2);
		if (lookahead == '-')
			ADVANCE(349);
		END_STATE();
	case 352:
		ACCEPT_TOKEN(anon_sym_PLUS2);
		END_STATE();
	case 353:
		ACCEPT_TOKEN(anon_sym_PLUS2);
		if (lookahead == '+')
			ADVANCE(348);
		END_STATE();
	case 354:
		ACCEPT_TOKEN(anon_sym_TILDE);
		END_STATE();
	case 355:
		ACCEPT_TOKEN(anon_sym_PLUS_PLUS2);
		END_STATE();
	case 356:
		ACCEPT_TOKEN(anon_sym_DASH_DASH2);
		END_STATE();
	case 357:
		ACCEPT_TOKEN(aux_sym_concatenation_token1);
		END_STATE();
	case 358:
		ACCEPT_TOKEN(anon_sym_DOLLAR);
		END_STATE();
	case 359:
		ACCEPT_TOKEN(anon_sym_DOLLAR);
		if (lookahead == '(')
			ADVANCE(395);
		if (lookahead == '{')
			ADVANCE(378);
		END_STATE();
	case 360:
		ACCEPT_TOKEN(anon_sym_DOLLAR);
		if (lookahead == '(')
			ADVANCE(394);
		if (lookahead == '{')
			ADVANCE(378);
		END_STATE();
	case 361:
		ACCEPT_TOKEN(anon_sym_DQUOTE);
		END_STATE();
	case 362:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(366);
		if (lookahead == '\\')
			ADVANCE(117);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(369);
		END_STATE();
	case 363:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(369);
		if (lookahead == '\\')
			ADVANCE(398);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(371);
		END_STATE();
	case 364:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(367);
		if (lookahead == '\\')
			ADVANCE(117);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(369);
		END_STATE();
	case 365:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(368);
		if (lookahead == '\\')
			ADVANCE(117);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(369);
		END_STATE();
	case 366:
		ACCEPT_TOKEN(sym_string_content);
		ADVANCE_MAP('!', 261, '"', 361, '#', 376, '$', 358, '*', 334, '-', 331, '0', 441, '?', 343, '@', 437, '\\', 80, '_', 444, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(174);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(366);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		if (lookahead != 0 && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(369);
		END_STATE();
	case 367:
		ACCEPT_TOKEN(sym_string_content);
		ADVANCE_MAP('!', 261, '#', 376, '$', 358, '*', 334, '-', 331, '0', 441, '?', 343, '@', 437, '\\', 84, '_', 444, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(180);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(367);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		if (lookahead != 0 && (lookahead < ' ' || '$' < lookahead) && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(369);
		END_STATE();
	case 368:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '"')
			ADVANCE(361);
		if (lookahead == '#')
			ADVANCE(371);
		if (lookahead == '$')
			ADVANCE(359);
		if (lookahead == '\\')
			ADVANCE(122);
		if (lookahead == '`')
			ADVANCE(396);
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(194);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(368);
		if (lookahead != 0)
			ADVANCE(369);
		END_STATE();
	case 369:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\\')
			ADVANCE(117);
		if (lookahead != 0 && lookahead != '\n' && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(369);
		END_STATE();
	case 370:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\\')
			ADVANCE(117);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(369);
		END_STATE();
	case 371:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\\')
			ADVANCE(398);
		if (lookahead != 0 && lookahead != '\n' && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(371);
		END_STATE();
	case 372:
		ACCEPT_TOKEN(sym_raw_string);
		END_STATE();
	case 373:
		ACCEPT_TOKEN(sym_number);
		if (lookahead == '\\')
			ADVANCE(215);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 374:
		ACCEPT_TOKEN(sym_number);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 375:
		ACCEPT_TOKEN(sym_number);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(375);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 376:
		ACCEPT_TOKEN(anon_sym_POUND);
		END_STATE();
	case 377:
		ACCEPT_TOKEN(anon_sym_POUND);
		if (lookahead == '\\')
			ADVANCE(400);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(489);
		END_STATE();
	case 378:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
		END_STATE();
	case 379:
		ACCEPT_TOKEN(anon_sym_COLON_DASH);
		END_STATE();
	case 380:
		ACCEPT_TOKEN(anon_sym_DASH3);
		END_STATE();
	case 381:
		ACCEPT_TOKEN(anon_sym_COLON_EQ);
		END_STATE();
	case 382:
		ACCEPT_TOKEN(anon_sym_COLON_EQ);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 383:
		ACCEPT_TOKEN(anon_sym_EQ2);
		END_STATE();
	case 384:
		ACCEPT_TOKEN(anon_sym_EQ2);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 385:
		ACCEPT_TOKEN(anon_sym_COLON_QMARK);
		END_STATE();
	case 386:
		ACCEPT_TOKEN(anon_sym_COLON_QMARK);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 387:
		ACCEPT_TOKEN(anon_sym_QMARK2);
		END_STATE();
	case 388:
		ACCEPT_TOKEN(anon_sym_QMARK2);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 389:
		ACCEPT_TOKEN(anon_sym_COLON_PLUS);
		END_STATE();
	case 390:
		ACCEPT_TOKEN(anon_sym_PLUS3);
		END_STATE();
	case 391:
		ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
		END_STATE();
	case 392:
		ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 393:
		ACCEPT_TOKEN(aux_sym__expansion_regex_token1);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(393);
		END_STATE();
	case 394:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
		END_STATE();
	case 395:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
		if (lookahead == '(')
			ADVANCE(305);
		END_STATE();
	case 396:
		ACCEPT_TOKEN(anon_sym_BQUOTE);
		END_STATE();
	case 397:
		ACCEPT_TOKEN(anon_sym_BQUOTE);
		if (lookahead == '`')
			ADVANCE(357);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(203);
		END_STATE();
	case 398:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead == '\n')
			ADVANCE(369);
		if (lookahead == '\r')
			ADVANCE(363);
		if (lookahead != 0)
			ADVANCE(371);
		END_STATE();
	case 399:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead == '\t' || (0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(402);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(403);
		END_STATE();
	case 400:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead == '\t' || (0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(402);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(489);
		END_STATE();
	case 401:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead == '\t' || (0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(402);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(492);
		END_STATE();
	case 402:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead != 0 && lookahead != '\n')
			ADVANCE(402);
		END_STATE();
	case 403:
		ACCEPT_TOKEN(sym__comment_word);
		if (lookahead == '\\')
			ADVANCE(399);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(403);
		END_STATE();
	case 404:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (lookahead == 'a')
			ADVANCE(405);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('b' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 405:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (lookahead == 'c')
			ADVANCE(247);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 406:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (lookahead == 's')
			ADVANCE(404);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 407:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 408:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 'a')
			ADVANCE(409);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('b' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 409:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 'c')
			ADVANCE(248);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 410:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 'n')
			ADVANCE(236);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 411:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 's')
			ADVANCE(408);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 412:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 413:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 283, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '(', 249, '*', 337, '-', 333, '0', 440, ';',
					493, '<', 267, '>', 271, '?', 344, '@', 438, '\\', 13, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(10);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(446);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 414:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 284, '!', 261, '#', 376, '$', 358, '&', 324, ')', 253, '*', 334, '-', 331, '0', 441, ';', 493, '<', 267, '>', 271,
					'?', 343, '@', 437, '\\', 50, '_', 444, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(48);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 415:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 286, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '(', 249, '*', 337, '-', 333, '0', 440, ';',
					493, '<', 267, '>', 271, '?', 344, '@', 438, '\\', 19, '_', 443, '`', 396, 'e', 406, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(89);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(447);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 416:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 289, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '(', 249, ')', 253, '*', 337, '-', 333, '0',
					440, ';', 493, '<', 267, '>', 271, '?', 344, '@', 438, '\\', 22, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(99);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(450);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0)
			ADVANCE(488);
		END_STATE();
	case 417:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 290, '!', 261, '#', 376, '$', 358, '&', 324, '*', 334, '-', 331, '0', 441, ';', 493, '<', 267, '>', 271, '?', 343,
					'@', 437, '\\', 52, '_', 444, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(100);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 418:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 291, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '*', 337, '-', 333, '0', 440, ';', 493, '<',
					267, '>', 271, '?', 344, '@', 438, '\\', 31, '_', 443, '`', 396, 'e', 406, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(101);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(451);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 419:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 294, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, '*', 337, '-', 333, '0', 440, ';', 493, '<',
					267, '>', 271, '?', 344, '@', 438, '\\', 25, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(104);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(454);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 420:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 295, '!', 261, '#', 376, '$', 358, '&', 324, '*', 334, '-', 331, '0', 441, ';', 493, '<', 267, '>', 271, '?', 343,
					'@', 437, '\\', 54, '_', 444, '`', 396, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(105);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 421:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 296, '!', 262, '"', 361, '#', 376, '$', 359, '&', 324, '\'', 197, ')', 253, '*', 337, '-', 333, '0', 440, ';',
					493, '<', 267, '>', 271, '?', 344, '@', 438, '\\', 28, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(106);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(455);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 422:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 297, '!', 261, '#', 376, '$', 358, '&', 324, '*', 334, '-', 331, '0', 441, ';', 493, '<', 267, '>', 271, '?', 343,
					'@', 437, '\\', 56, '_', 444, 'e', 411, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(107);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 423:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 298, '!', 262, '"', 361, '#', 376, '$', 359, '&', 196, '\'', 197, '(', 249, '*', 337, '-', 333, '0', 440, '<',
					267, '>', 271, '?', 344, '@', 438, '\\', 36, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(108);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(456);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 424:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 299, '!', 261, '#', 376, '$', 358, '&', 196, '*', 334, '-', 331, '0', 441, '<', 267, '>', 271, '?', 343, '@', 437,
					'\\', 63, '_', 444, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(109);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 425:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 300, '!', 262, '"', 361, '#', 376, '$', 359, '&', 196, '\'', 197, '*', 337, '-', 333, '0', 440, '<', 267, '>',
					271, '?', 344, '@', 438, '\\', 42, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(110);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(457);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 426:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 301, '!', 261, '#', 376, '$', 358, '&', 323, '*', 334, '-', 331, '0', 441, ';', 493, '?', 343, '@', 437, '\\', 77,
					'_', 444, 'i', 410, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(111);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 427:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 302, '!', 262, '"', 361, '#', 376, '$', 359, '&', 196, '\'', 197, '*', 337, '-', 333, '0', 440, '<', 268, '>',
					271, '?', 344, '@', 438, '\\', 94, '_', 443, '`', 396, '|', 214, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(112);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(458);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 428:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 303, '!', 262, '"', 361, '#', 376, '$', 359, '&', 323, '\'', 197, '*', 337, '-', 333, '0', 440, ';', 493, '?',
					344, '@', 438, '\\', 69, '_', 443, '`', 396, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(113);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(459);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 429:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 304, '!', 262, '"', 361, '#', 376, '$', 359, '\'', 197, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\',
					74, '_', 443, '`', 396, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(114);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(460);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 430:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 262, '"', 361, '#', 376, '$', 359, '&', 196, '\'', 197, '(', 249, '*', 337, '-', 333, '0', 440, '<', 267, '>', 271,
					'?', 344, '@', 438, '\\', 39, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(164);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(462);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 431:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 262, '"', 361, '#', 376, '$', 359, '&', 196, '\'', 197, '*', 337, '-', 333, '0', 440, '<', 267, '>', 271, '?', 344,
					'@', 438, '\\', 45, '_', 443, '`', 396, '|', 252, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(165);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(463);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(488);
		END_STATE();
	case 432:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 262, '"', 361, '#', 376, '$', 359, '\'', 197, '*', 337, '-', 333, '0', 440, '<', 268, '>', 271, '?', 344, '@', 438,
					'\\', 60, '_', 443, '`', 396, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(166);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(464);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '|')
			ADVANCE(488);
		END_STATE();
	case 433:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 261, '#', 376, '$', 358, '&', 196, '*', 334, '-', 331, '0', 441, '<', 267, '>', 271, '?', 343, '@', 437, '\\', 66,
					'_', 444, '|', 252, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(178);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 434:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 261, '#', 376, '$', 358, ')', 253, '*', 334, '-', 331, '0', 441, '?', 343, '@', 437, '\\', 82, '_', 444, '|',
					250, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(179);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 435:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 261, '#', 376, '$', 358, '*', 334, '-', 331, '0', 441, '?', 343, '@', 437, '\\', 86, '_', 444, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(182);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 436:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(15);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(436);
		END_STATE();
	case 437:
		ACCEPT_TOKEN(anon_sym_AT);
		END_STATE();
	case 438:
		ACCEPT_TOKEN(anon_sym_AT);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 439:
		ACCEPT_TOKEN(anon_sym_0);
		if (lookahead == '\\')
			ADVANCE(215);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 440:
		ACCEPT_TOKEN(anon_sym_0);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 441:
		ACCEPT_TOKEN(anon_sym_0);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 442:
		ACCEPT_TOKEN(anon_sym__);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 443:
		ACCEPT_TOKEN(anon_sym__);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 444:
		ACCEPT_TOKEN(anon_sym__);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(412);
		END_STATE();
	case 445:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(254);
		if (lookahead == '!')
			ADVANCE(262);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(123);
		if (lookahead == '{')
			ADVANCE(256);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(445);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 446:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 283, '!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 12, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(446);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 447:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 286, '!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 18, '_', 443, 'e', 406, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(447);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 448:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(287);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(133);
		if (lookahead == 'e')
			ADVANCE(487);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(448);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 449:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(288);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(135);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(449);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 450:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 289, '!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 21, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(450);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 451:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 291, '!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 30, '_', 443, 'e', 406, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(451);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 452:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(292);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(140);
		if (lookahead == 'e')
			ADVANCE(487);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(452);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 453:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(293);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(138);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(453);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 454:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 294, '!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 24, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(454);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 455:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 296, '!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 27, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(455);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 456:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 298, '!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 35, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(456);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 457:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 300, '!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 41, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(457);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 458:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 302, '!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 93, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(458);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 459:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 303, '!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 68, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(459);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 460:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 304, '!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 73, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(460);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 461:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('!', 262, '#', 377, '%', 340, '*', 335, '+', 352, '-', 350, '/', 338, '0', 439, ':', 347, '=', 265, '?', 344, '@', 438,
					'\\', 115, '^', 321, '_', 442, 'd', 486, 'e', 483, 'f', 481, 'i', 485, '{', 256, '}', 258, '~', 354, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(461);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead) && (lookahead < ' ' || '+' < lookahead) &&
			(lookahead < '/' || '@' < lookahead) && (lookahead < '^' || '`' < lookahead) && (lookahead < '{' || '~' < lookahead))
			ADVANCE(488);
		END_STATE();
	case 462:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 38, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(462);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 463:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 44, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(463);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 464:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('!', 262, '#', 377, '*', 337, '-', 333, '0', 440, '?', 344, '@', 438, '\\', 59, '_', 443, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(464);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(374);
		if (('A' <= lookahead && lookahead <= 'Z') || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(407);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 465:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(262);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(118);
		if (lookahead == '{')
			ADVANCE(256);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(465);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 466:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(262);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(120);
		if (lookahead == 'e')
			ADVANCE(484);
		if (lookahead == 'f')
			ADVANCE(481);
		if (lookahead == '{')
			ADVANCE(256);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(466);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 467:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(262);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(125);
		if (lookahead == 'd')
			ADVANCE(486);
		if (lookahead == '{')
			ADVANCE(256);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(467);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 468:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(262);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(127);
		if (lookahead == 'f')
			ADVANCE(481);
		if (lookahead == '{')
			ADVANCE(256);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(468);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 469:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(262);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(129);
		if (lookahead == '{')
			ADVANCE(256);
		if (lookahead == '}')
			ADVANCE(258);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(469);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 470:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(262);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(144);
		if (lookahead == 'e')
			ADVANCE(487);
		if (lookahead == '{')
			ADVANCE(256);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(470);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 471:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(131);
		if (lookahead == '{')
			ADVANCE(256);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(471);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 472:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(142);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(472);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 473:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(147);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(473);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 474:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(150);
		if (lookahead == 'e')
			ADVANCE(487);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(474);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 475:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(153);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(475);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 476:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(489);
		if (lookahead == '\\')
			ADVANCE(155);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(476);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(373);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 477:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if (lookahead == 'a')
			ADVANCE(478);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 478:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if (lookahead == 'c')
			ADVANCE(246);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 479:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if (lookahead == 'e')
			ADVANCE(244);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 480:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if (lookahead == 'f')
			ADVANCE(242);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 481:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if (lookahead == 'i')
			ADVANCE(240);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 482:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if (lookahead == 'i')
			ADVANCE(480);
		if (lookahead == 's')
			ADVANCE(479);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 483:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if (lookahead == 'l')
			ADVANCE(482);
		if (lookahead == 's')
			ADVANCE(477);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 484:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if (lookahead == 'l')
			ADVANCE(482);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 485:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if (lookahead == 'n')
			ADVANCE(235);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 486:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if (lookahead == 'o')
			ADVANCE(238);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 487:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if (lookahead == 's')
			ADVANCE(477);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 488:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(215);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(488);
		END_STATE();
	case 489:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(400);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(489);
		END_STATE();
	case 490:
		ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
		if (lookahead == '#')
			ADVANCE(492);
		if (lookahead == '\\')
			ADVANCE(158);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(490);
		if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead)))
			ADVANCE(491);
		END_STATE();
	case 491:
		ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
		if (lookahead == '\\')
			ADVANCE(216);
		if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead)))
			ADVANCE(491);
		END_STATE();
	case 492:
		ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
		if (lookahead == '\\')
			ADVANCE(401);
		if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead)))
			ADVANCE(492);
		END_STATE();
	case 493:
		ACCEPT_TOKEN(anon_sym_SEMI);
		if (lookahead == ';')
			ADVANCE(255);
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
