#include "../static/char_set/charset_inline.h"
#include "gmr/symbols.h"

bool ts_lex(t_lexer *lexer, t_state_id state)
{
	START_LEXER();
	eof = lexer->data.eof((void *)lexer);
	switch (state)
	{
	case 0:
		if (eof)
			ADVANCE(205);
		ADVANCE_MAP('!', 233, '"', 288, '#', 303, '$', 285, '%', 272, '&', 170, '\'', 171, '(', 221, ')', 224, '*', 268, '+', 280, '-', 279,
					'/', 270, '0', 361, ':', 277, ';', 407, '<', 237, '=', 311, '>', 239, '?', 315, '@', 360, '\\', 95, '`', 324, 'd', 400,
					'e', 397, 'f', 395, 'i', 399, '{', 227, '|', 223, '}', 229, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(202);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(376);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 1:
		if (lookahead == '\n')
			SKIP(140);
		END_STATE();
	case 2:
		if (lookahead == '\n')
			SKIP(143);
		END_STATE();
	case 3:
		if (lookahead == '\n')
			SKIP(145);
		END_STATE();
	case 4:
		if (lookahead == '\n')
			SKIP(5);
		END_STATE();
	case 5:
		ADVANCE_MAP('\n', 225, '!', 233, '"', 288, '#', 329, '$', 285, '\'', 171, '(', 221, '<', 236, '>', 239, '\\', 103, '`', 323, '{',
					227, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(5);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(364);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 6:
		if (lookahead == '\n')
			SKIP(146);
		END_STATE();
	case 7:
		if (lookahead == '\n')
			SKIP(147);
		END_STATE();
	case 8:
		if (lookahead == '\n')
			SKIP(148);
		END_STATE();
	case 9:
		if (lookahead == '\n')
			SKIP(161);
		END_STATE();
	case 10:
		ADVANCE_MAP('\n', 243, '!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, ')', 224, '*', 268, '-', 266, '0', 362, ';',
					407, '<', 238, '>', 239, '?', 275, '@', 360, '\\', 13, '`', 323, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(10);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(365);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 11:
		if (lookahead == '\n')
			ADVANCE(340);
		END_STATE();
	case 12:
		if (lookahead == '\n')
			ADVANCE(340);
		if (lookahead == '\r')
			ADVANCE(11);
		if (lookahead == ' ')
			ADVANCE(365);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(10);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 13:
		if (lookahead == '\n')
			ADVANCE(340);
		if (lookahead == '\r')
			ADVANCE(11);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(10);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 14:
		if (lookahead == '\n')
			ADVANCE(358);
		END_STATE();
	case 15:
		if (lookahead == '\n')
			ADVANCE(358);
		if (lookahead == '\r')
			ADVANCE(14);
		END_STATE();
	case 16:
		if (lookahead == '\n')
			ADVANCE(358);
		if (lookahead == '\r')
			ADVANCE(14);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 17:
		if (lookahead == '\n')
			ADVANCE(343);
		END_STATE();
	case 18:
		if (lookahead == '\n')
			ADVANCE(343);
		if (lookahead == '\r')
			ADVANCE(17);
		if (lookahead == ' ')
			ADVANCE(369);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(82);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 19:
		if (lookahead == '\n')
			ADVANCE(343);
		if (lookahead == '\r')
			ADVANCE(17);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(82);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 20:
		if (lookahead == '\n')
			ADVANCE(342);
		END_STATE();
	case 21:
		if (lookahead == '\n')
			ADVANCE(342);
		if (lookahead == '\r')
			ADVANCE(20);
		if (lookahead == ' ')
			ADVANCE(366);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(73);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 22:
		if (lookahead == '\n')
			ADVANCE(342);
		if (lookahead == '\r')
			ADVANCE(20);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(73);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 23:
		if (lookahead == '\n')
			SKIP(80);
		END_STATE();
	case 24:
		if (lookahead == '\n')
			ADVANCE(345);
		END_STATE();
	case 25:
		if (lookahead == '\n')
			ADVANCE(345);
		if (lookahead == '\r')
			ADVANCE(24);
		if (lookahead == ' ')
			ADVANCE(372);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(86);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 26:
		if (lookahead == '\n')
			ADVANCE(345);
		if (lookahead == '\r')
			ADVANCE(24);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(86);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 27:
		if (lookahead == '\n')
			SKIP(81);
		END_STATE();
	case 28:
		if (lookahead == '\n')
			ADVANCE(353);
		END_STATE();
	case 29:
		if (lookahead == '\n')
			ADVANCE(353);
		if (lookahead == '\r')
			ADVANCE(28);
		if (lookahead == ' ')
			ADVANCE(377);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(141);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 30:
		if (lookahead == '\n')
			ADVANCE(353);
		if (lookahead == '\r')
			ADVANCE(28);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(141);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 31:
		if (lookahead == '\n')
			SKIP(159);
		END_STATE();
	case 32:
		if (lookahead == '\n')
			SKIP(85);
		END_STATE();
	case 33:
		if (lookahead == '\n')
			SKIP(151);
		END_STATE();
	case 34:
		if (lookahead == '\n')
			SKIP(144);
		END_STATE();
	case 35:
		ADVANCE_MAP('\n', 244, '!', 232, '#', 303, '$', 284, '&', 170, '*', 267, '-', 264, '0', 363, ';', 407, '<', 238, '>', 239, '?', 274,
					'@', 359, '\\', 37, '|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(35);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 36:
		if (lookahead == '\n')
			ADVANCE(341);
		END_STATE();
	case 37:
		if (lookahead == '\n')
			ADVANCE(341);
		if (lookahead == '\r')
			ADVANCE(36);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(35);
		END_STATE();
	case 38:
		if (lookahead == '\n')
			ADVANCE(354);
		END_STATE();
	case 39:
		if (lookahead == '\n')
			ADVANCE(354);
		if (lookahead == '\r')
			ADVANCE(38);
		if (lookahead == ' ')
			ADVANCE(378);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(142);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 40:
		if (lookahead == '\n')
			ADVANCE(354);
		if (lookahead == '\r')
			ADVANCE(38);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(142);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 41:
		if (lookahead == '\n')
			SKIP(158);
		END_STATE();
	case 42:
		if (lookahead == '\n')
			ADVANCE(344);
		END_STATE();
	case 43:
		if (lookahead == '\n')
			ADVANCE(344);
		if (lookahead == '\r')
			ADVANCE(42);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(83);
		END_STATE();
	case 44:
		if (lookahead == '\n')
			ADVANCE(346);
		END_STATE();
	case 45:
		if (lookahead == '\n')
			ADVANCE(346);
		if (lookahead == '\r')
			ADVANCE(44);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(87);
		END_STATE();
	case 46:
		if (lookahead == '\n')
			SKIP(162);
		END_STATE();
	case 47:
		if (lookahead == '\n')
			ADVANCE(348);
		END_STATE();
	case 48:
		if (lookahead == '\n')
			ADVANCE(348);
		if (lookahead == '\r')
			ADVANCE(47);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(89);
		END_STATE();
	case 49:
		if (lookahead == '\n')
			ADVANCE(349);
		END_STATE();
	case 50:
		if (lookahead == '\n')
			ADVANCE(349);
		if (lookahead == '\r')
			ADVANCE(49);
		if (lookahead == ' ')
			ADVANCE(374);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(90);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 51:
		if (lookahead == '\n')
			ADVANCE(349);
		if (lookahead == '\r')
			ADVANCE(49);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(90);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 52:
		if (lookahead == '\n')
			ADVANCE(351);
		END_STATE();
	case 53:
		if (lookahead == '\n')
			ADVANCE(351);
		if (lookahead == '\r')
			ADVANCE(52);
		if (lookahead == ' ')
			ADVANCE(375);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(92);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 54:
		if (lookahead == '\n')
			ADVANCE(351);
		if (lookahead == '\r')
			ADVANCE(52);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(92);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 55:
		if (lookahead == '\n')
			ADVANCE(350);
		END_STATE();
	case 56:
		if (lookahead == '\n')
			ADVANCE(350);
		if (lookahead == '\r')
			ADVANCE(55);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(91);
		END_STATE();
	case 57:
		if (lookahead == '\n')
			ADVANCE(355);
		END_STATE();
	case 58:
		if (lookahead == '\n')
			ADVANCE(355);
		if (lookahead == '\r')
			ADVANCE(57);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(152);
		END_STATE();
	case 59:
		if (lookahead == '\n')
			SKIP(166);
		END_STATE();
	case 60:
		if (lookahead == '\n')
			SKIP(164);
		END_STATE();
	case 61:
		if (lookahead == '\n')
			ADVANCE(352);
		END_STATE();
	case 62:
		if (lookahead == '\n')
			ADVANCE(352);
		if (lookahead == '\r')
			ADVANCE(61);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(93);
		END_STATE();
	case 63:
		if (lookahead == '\n')
			ADVANCE(356);
		END_STATE();
	case 64:
		if (lookahead == '\n')
			ADVANCE(356);
		if (lookahead == '\r')
			ADVANCE(63);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(153);
		END_STATE();
	case 65:
		if (lookahead == '\n')
			ADVANCE(293);
		if (lookahead == '\r')
			ADVANCE(289);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(293);
		if (lookahead != 0)
			ADVANCE(296);
		END_STATE();
	case 66:
		if (lookahead == '\n')
			SKIP(155);
		END_STATE();
	case 67:
		if (lookahead == '\n')
			ADVANCE(294);
		if (lookahead == '\r')
			ADVANCE(292);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(294);
		if (lookahead != 0)
			ADVANCE(296);
		END_STATE();
	case 68:
		if (lookahead == '\n')
			ADVANCE(357);
		END_STATE();
	case 69:
		if (lookahead == '\n')
			ADVANCE(357);
		if (lookahead == '\r')
			ADVANCE(68);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(156);
		END_STATE();
	case 70:
		if (lookahead == '\n')
			SKIP(169);
		END_STATE();
	case 71:
		if (lookahead == '\n')
			SKIP(163);
		END_STATE();
	case 72:
		if (lookahead == '\n')
			SKIP(165);
		END_STATE();
	case 73:
		ADVANCE_MAP('\n', 246, '!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, '*', 268, '-', 266, '0', 362, ';', 407, '<',
					238, '>', 239, '?', 275, '@', 360, '\\', 22, '`', 323, 'e', 333, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(73);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(366);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 74:
		if (lookahead == '\n')
			SKIP(84);
		END_STATE();
	case 75:
		if (lookahead == '\n')
			ADVANCE(347);
		END_STATE();
	case 76:
		if (lookahead == '\n')
			ADVANCE(347);
		if (lookahead == '\r')
			ADVANCE(75);
		if (lookahead == ' ')
			ADVANCE(373);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(88);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 77:
		if (lookahead == '\n')
			ADVANCE(347);
		if (lookahead == '\r')
			ADVANCE(75);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(88);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 78:
		if (lookahead == '\n')
			SKIP(160);
		END_STATE();
	case 79:
		if (lookahead == '\n')
			SKIP(167);
		END_STATE();
	case 80:
		ADVANCE_MAP('\n', 247, '"', 288, '#', 329, '$', 285, '&', 170, '\'', 171, '(', 221, ';', 407, '<', 238, '>', 239, '\\', 113, '`',
					323, 'e', 401, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(80);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(367);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 81:
		ADVANCE_MAP('\n', 248, '"', 288, '#', 329, '$', 285, '&', 170, '\'', 171, ')', 224, ';', 407, '<', 238, '>', 239, '\\', 115, '`',
					323, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(81);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(368);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 82:
		ADVANCE_MAP('\n', 249, '!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, '*', 268, '-', 266, '0', 362, ';', 407, '<',
					238, '>', 239, '?', 275, '@', 360, '\\', 19, '`', 323, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(82);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(369);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 83:
		ADVANCE_MAP('\n', 250, '!', 232, '#', 303, '$', 284, '&', 170, '*', 267, '-', 264, '0', 363, ';', 407, '<', 238, '>', 239, '?', 274,
					'@', 359, '\\', 43, 'e', 338, '|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(83);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 84:
		ADVANCE_MAP('\n', 251, '"', 288, '#', 329, '$', 285, '&', 170, '\'', 171, '(', 221, ';', 407, '<', 238, '>', 239, '\\', 119, '`',
					324, 'e', 401, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(84);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(370);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 85:
		ADVANCE_MAP('\n', 252, '"', 288, '#', 329, '$', 285, '&', 170, '\'', 171, '(', 221, ')', 224, ';', 407, '<', 238, '>', 239, '\\',
					121, '`', 324, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(85);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(371);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 86:
		ADVANCE_MAP('\n', 253, '!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, '*', 268, '-', 266, '0', 362, '<', 238, '>',
					239, '?', 275, '@', 360, '\\', 26, '`', 323, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(86);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(372);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(402);
		END_STATE();
	case 87:
		ADVANCE_MAP('\n', 254, '!', 232, '#', 303, '$', 284, '&', 170, ')', 224, '*', 267, '-', 264, '0', 363, ';', 407, '<', 238, '>', 239,
					'?', 274, '@', 359, '\\', 45, '|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(87);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 88:
		ADVANCE_MAP('\n', 255, '!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, '*', 268, '-', 266, '0', 362, '<', 236, '>',
					239, '?', 275, '@', 360, '\\', 77, '`', 323, '|', 187, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(88);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(373);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(402);
		END_STATE();
	case 89:
		ADVANCE_MAP('\n', 256, '!', 232, '#', 303, '$', 284, '&', 170, '*', 267, '-', 264, '0', 363, ';', 407, '<', 238, '>', 239, '?', 274,
					'@', 359, '\\', 48, '`', 323, '|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(89);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 90:
		ADVANCE_MAP('\n', 257, '!', 233, '"', 288, '#', 303, '$', 285, '\'', 171, '*', 268, '-', 266, '0', 362, ';', 407, '?', 275, '@',
					360, '\\', 51, '`', 323, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(90);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(374);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 91:
		ADVANCE_MAP('\n', 258, '!', 232, '#', 303, '$', 284, '&', 170, '*', 267, '-', 264, '0', 363, '<', 238, '>', 239, '?', 274, '@', 359,
					'\\', 56, '|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(91);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 92:
		ADVANCE_MAP('\n', 259, '!', 233, '"', 288, '#', 303, '$', 285, '\'', 171, '*', 268, '-', 266, '0', 362, '?', 275, '@', 360, '\\',
					54, '`', 323, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(92);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(375);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 93:
		ADVANCE_MAP('\n', 260, '!', 232, '#', 303, '$', 284, '*', 267, '-', 264, '0', 363, ';', 407, '?', 274, '@', 359, '\\', 62, 'i',
					337, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(93);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 94:
		if (lookahead == '\r')
			SKIP(1);
		if (lookahead == ' ')
			ADVANCE(376);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(140);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 95:
		if (lookahead == '\r')
			SKIP(1);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(140);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 96:
		if (lookahead == '\r')
			ADVANCE(297);
		if (lookahead != 0)
			ADVANCE(296);
		END_STATE();
	case 97:
		if (lookahead == '\r')
			SKIP(2);
		if (lookahead == ' ')
			ADVANCE(379);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(143);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 98:
		if (lookahead == '\r')
			SKIP(2);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(143);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 99:
		if (lookahead == '\r')
			ADVANCE(291);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(295);
		if (lookahead != 0)
			ADVANCE(296);
		END_STATE();
	case 100:
		if (lookahead == '\r')
			SKIP(3);
		if (lookahead == ' ')
			ADVANCE(380);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(145);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 101:
		if (lookahead == '\r')
			SKIP(3);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(145);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 102:
		if (lookahead == '\r')
			SKIP(4);
		if (lookahead == ' ')
			ADVANCE(364);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(5);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 103:
		if (lookahead == '\r')
			SKIP(4);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(5);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 104:
		if (lookahead == '\r')
			SKIP(6);
		if (lookahead == ' ')
			ADVANCE(381);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(146);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 105:
		if (lookahead == '\r')
			SKIP(6);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(146);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 106:
		if (lookahead == '\r')
			SKIP(7);
		if (lookahead == ' ')
			ADVANCE(382);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(147);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 107:
		if (lookahead == '\r')
			SKIP(7);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(147);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 108:
		if (lookahead == '\r')
			SKIP(8);
		if (lookahead == ' ')
			ADVANCE(383);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(148);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 109:
		if (lookahead == '\r')
			SKIP(8);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(148);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 110:
		if (lookahead == '\r')
			SKIP(9);
		if (lookahead == ' ')
			ADVANCE(385);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(161);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 111:
		if (lookahead == '\r')
			SKIP(9);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(161);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 112:
		if (lookahead == '\r')
			SKIP(23);
		if (lookahead == ' ')
			ADVANCE(367);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(80);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 113:
		if (lookahead == '\r')
			SKIP(23);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(80);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 114:
		if (lookahead == '\r')
			SKIP(27);
		if (lookahead == ' ')
			ADVANCE(368);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(81);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 115:
		if (lookahead == '\r')
			SKIP(27);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(81);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 116:
		if (lookahead == '\r')
			SKIP(31);
		if (lookahead == ' ')
			ADVANCE(386);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(159);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 117:
		if (lookahead == '\r')
			SKIP(31);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(159);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 118:
		if (lookahead == '\r')
			SKIP(74);
		if (lookahead == ' ')
			ADVANCE(370);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(84);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 119:
		if (lookahead == '\r')
			SKIP(74);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(84);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 120:
		if (lookahead == '\r')
			SKIP(32);
		if (lookahead == ' ')
			ADVANCE(371);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(85);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 121:
		if (lookahead == '\r')
			SKIP(32);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(85);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 122:
		if (lookahead == '\r')
			SKIP(33);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(151);
		END_STATE();
	case 123:
		if (lookahead == '\r')
			SKIP(34);
		if (lookahead == ' ')
			ADVANCE(384);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(144);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 124:
		if (lookahead == '\r')
			SKIP(34);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(144);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 125:
		if (lookahead == '\r')
			SKIP(41);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(158);
		END_STATE();
	case 126:
		if (lookahead == '\r')
			SKIP(46);
		if (lookahead == ' ')
			ADVANCE(387);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(162);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 127:
		if (lookahead == '\r')
			SKIP(46);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(162);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 128:
		if (lookahead == '\r')
			SKIP(78);
		if (lookahead == ' ')
			ADVANCE(388);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(160);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 129:
		if (lookahead == '\r')
			SKIP(78);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(160);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 130:
		if (lookahead == '\r')
			SKIP(59);
		if (lookahead == ' ')
			ADVANCE(389);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(166);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 131:
		if (lookahead == '\r')
			SKIP(59);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(166);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 132:
		if (lookahead == '\r')
			SKIP(79);
		if (lookahead == ' ')
			ADVANCE(390);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(167);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 133:
		if (lookahead == '\r')
			SKIP(79);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(167);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 134:
		if (lookahead == '\r')
			SKIP(60);
		if (lookahead == ' ')
			ADVANCE(404);
		if (('\t' <= lookahead && lookahead <= '\f'))
			SKIP(164);
		if (lookahead != 0)
			ADVANCE(405);
		END_STATE();
	case 135:
		if (lookahead == '\r')
			SKIP(60);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(164);
		if (lookahead != 0)
			ADVANCE(405);
		END_STATE();
	case 136:
		if (lookahead == '\r')
			SKIP(66);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(155);
		END_STATE();
	case 137:
		if (lookahead == '\r')
			SKIP(70);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(169);
		END_STATE();
	case 138:
		if (lookahead == '\r')
			SKIP(71);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(163);
		END_STATE();
	case 139:
		if (lookahead == '\r')
			SKIP(72);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(165);
		END_STATE();
	case 140:
		ADVANCE_MAP('!', 233, '"', 288, '#', 303, '$', 285, '%', 272, '&', 170, '\'', 171, '(', 221, ')', 224, '*', 268, '+', 280, '-', 279,
					'/', 270, '0', 361, ':', 278, ';', 407, '<', 237, '=', 235, '>', 239, '?', 275, '@', 360, '\\', 95, '`', 324, 'd', 400,
					'e', 397, 'f', 395, 'i', 399, '{', 227, '|', 223, '}', 229, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(140);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(376);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 141:
		ADVANCE_MAP('!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, '*', 268, '-', 266, '0', 362, '<', 238, '>', 239, '?', 275,
					'@', 360, '\\', 30, '`', 323, '|', 223, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(141);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(377);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(402);
		END_STATE();
	case 142:
		ADVANCE_MAP('!', 233, '"', 288, '#', 303, '$', 285, '\'', 171, '*', 268, '-', 266, '0', 362, '<', 236, '>', 239, '?', 275, '@', 360,
					'\\', 40, '`', 323, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(142);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(378);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 143:
		ADVANCE_MAP('!', 233, '"', 288, '#', 329, '$', 285, '\'', 171, '(', 221, ')', 224, ';', 175, '<', 236, '>', 239, '\\', 98, '`', 323,
					'{', 227, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(143);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(379);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != '{' && lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 144:
		ADVANCE_MAP('!', 233, '"', 288, '#', 329, '$', 285, '\'', 171, '(', 221, ';', 175, '<', 236, '>', 239, '\\', 124, '`', 323, 'e',
					401, '{', 227, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(144);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(384);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != '{' && lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 145:
		ADVANCE_MAP('!', 233, '"', 288, '#', 329, '$', 285, '\'', 171, '(', 221, '<', 236, '>', 239, '\\', 101, '`', 323, 'e', 398, 'f',
					395, '{', 227, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(145);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(380);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 146:
		ADVANCE_MAP('!', 233, '"', 288, '#', 329, '$', 285, '\'', 171, '(', 221, '<', 236, '>', 239, '\\', 105, '`', 323, 'd', 400, '{',
					227, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(146);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(381);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 147:
		ADVANCE_MAP('!', 233, '"', 288, '#', 329, '$', 285, '\'', 171, '(', 221, '<', 236, '>', 239, '\\', 107, '`', 323, '{', 227, '}',
					229, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(147);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(382);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '{' || '}' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 148:
		ADVANCE_MAP('!', 233, '"', 288, '#', 329, '$', 285, '\'', 171, '(', 221, '<', 236, '>', 239, '\\', 109, '`', 323, 'f', 395, '{',
					227, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(148);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(383);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 149:
		ADVANCE_MAP('!', 232, '"', 288, '#', 303, '$', 284, '*', 267, '-', 264, '0', 363, '?', 274, '@', 359, '\\', 65, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(149);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(293);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		if (lookahead != 0 && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(296);
		END_STATE();
	case 150:
		ADVANCE_MAP('!', 232, '#', 303, '$', 284, '%', 273, '*', 267, '+', 317, '-', 307, '0', 363, ':', 174, '=', 310, '?', 314, '@',
					359, );
		if (lookahead == '\\')
			SKIP(122);
		if (lookahead == '}')
			ADVANCE(228);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(151);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 151:
		ADVANCE_MAP('!', 232, '#', 303, '$', 284, '%', 273, '*', 267, '-', 264, '0', 363, '?', 274, '@', 359, );
		if (lookahead == '\\')
			SKIP(122);
		if (lookahead == '}')
			ADVANCE(228);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(151);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 152:
		ADVANCE_MAP('!', 232, '#', 303, '$', 284, '&', 170, '*', 267, '-', 264, '0', 363, '<', 238, '>', 239, '?', 274, '@', 359, '\\', 58,
					'|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(152);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 153:
		ADVANCE_MAP('!', 232, '#', 303, '$', 284, ')', 224, '*', 267, '-', 264, '0', 363, '?', 274, '@', 359, '\\', 64, '|', 222, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(153);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 154:
		ADVANCE_MAP('!', 232, '#', 303, '$', 284, '*', 267, '-', 264, '0', 363, '?', 274, '@', 359, '\\', 67, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(154);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(294);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		if (lookahead != 0 && (lookahead < ' ' || '$' < lookahead) && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(296);
		END_STATE();
	case 155:
		ADVANCE_MAP('!', 232, '#', 303, '$', 284, '*', 267, '-', 264, '0', 363, '?', 274, '@', 359, );
		if (lookahead == '\\')
			SKIP(136);
		if (lookahead == '}')
			ADVANCE(228);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(155);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 156:
		ADVANCE_MAP('!', 232, '#', 303, '$', 284, '*', 267, '-', 264, '0', 363, '?', 274, '@', 359, '\\', 69, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(156);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 157:
		ADVANCE_MAP('"', 288, '#', 303, '%', 273, '\'', 171, ')', 224, '+', 317, '-', 307, ':', 174, '=', 310, '?', 314, );
		if (lookahead == '\\')
			SKIP(125);
		if (lookahead == '}')
			ADVANCE(228);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(320);
		END_STATE();
	case 158:
		if (lookahead == '"')
			ADVANCE(288);
		if (lookahead == '#')
			ADVANCE(303);
		if (lookahead == '%')
			ADVANCE(273);
		if (lookahead == '\'')
			ADVANCE(171);
		if (lookahead == ')')
			ADVANCE(224);
		if (lookahead == '\\')
			SKIP(125);
		if (lookahead == '}')
			ADVANCE(228);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(320);
		END_STATE();
	case 159:
		ADVANCE_MAP('"', 288, '#', 329, '$', 285, '&', 170, '\'', 171, '(', 221, '<', 238, '>', 239, '\\', 117, '`', 323, '|', 223, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(159);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(386);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(402);
		END_STATE();
	case 160:
		ADVANCE_MAP('"', 288, '#', 329, '$', 285, '&', 170, '\'', 171, '(', 221, '<', 238, '>', 239, '\\', 129, '`', 324, '|', 223, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(160);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(388);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(402);
		END_STATE();
	case 161:
		ADVANCE_MAP('"', 288, '#', 329, '$', 285, '\'', 171, '(', 221, '<', 236, '>', 239, '\\', 111, '`', 323, '{', 227, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(161);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(385);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '{' &&
			lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 162:
		ADVANCE_MAP('"', 288, '#', 329, '$', 285, '\'', 171, '(', 221, '\\', 127, '`', 323, 'e', 401, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(162);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(387);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 163:
		ADVANCE_MAP('"', 288, '#', 329, '$', 172, '%', 271, ')', 224, '*', 267, '+', 263, '-', 265, '/', 269, '?', 274, );
		if (lookahead == '\\')
			SKIP(138);
		if (lookahead == '`')
			ADVANCE(323);
		if (lookahead == '|')
			ADVANCE(222);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(163);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 164:
		if (lookahead == '"')
			ADVANCE(288);
		if (lookahead == '#')
			ADVANCE(329);
		if (lookahead == '$')
			ADVANCE(286);
		if (lookahead == '\'')
			ADVANCE(171);
		if (lookahead == '\\')
			ADVANCE(135);
		if (lookahead == '`')
			ADVANCE(323);
		if (lookahead == '}')
			ADVANCE(228);
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(164);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(404);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			(lookahead < '{' || '}' < lookahead))
			ADVANCE(405);
		END_STATE();
	case 165:
		if (lookahead == '"')
			ADVANCE(288);
		if (lookahead == '#')
			ADVANCE(329);
		if (lookahead == '\'')
			ADVANCE(171);
		if (lookahead == ')')
			ADVANCE(224);
		if (lookahead == '\\')
			SKIP(139);
		if (lookahead == '}')
			ADVANCE(228);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(320);
		END_STATE();
	case 166:
		if (lookahead == '"')
			ADVANCE(288);
		if (lookahead == '#')
			ADVANCE(330);
		if (lookahead == '$')
			ADVANCE(285);
		if (lookahead == '\'')
			ADVANCE(171);
		if (lookahead == '\\')
			ADVANCE(131);
		if (lookahead == '`')
			ADVANCE(324);
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(166);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(389);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 167:
		if (lookahead == '"')
			ADVANCE(288);
		if (lookahead == '#')
			ADVANCE(330);
		if (lookahead == '$')
			ADVANCE(285);
		if (lookahead == '\'')
			ADVANCE(171);
		if (lookahead == '\\')
			ADVANCE(133);
		if (lookahead == '`')
			ADVANCE(323);
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(167);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(390);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '>' &&
			lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 168:
		if (lookahead == '"')
			ADVANCE(288);
		if (lookahead == '#')
			ADVANCE(298);
		if (lookahead == '$')
			ADVANCE(285);
		if (lookahead == '\\')
			ADVANCE(99);
		if (lookahead == '`')
			ADVANCE(323);
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(168);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(295);
		if (lookahead != 0)
			ADVANCE(296);
		END_STATE();
	case 169:
		ADVANCE_MAP('#', 329, '$', 286, '%', 271, ')', 173, '*', 267, '+', 263, '-', 265, '/', 269, ':', 276, ';', 175, '?', 274, );
		if (lookahead == '\\')
			SKIP(137);
		if (lookahead == '`')
			ADVANCE(323);
		if (lookahead == 'd')
			ADVANCE(185);
		if (lookahead == 'e')
			ADVANCE(183);
		if (lookahead == 'f')
			ADVANCE(181);
		if (lookahead == 'i')
			ADVANCE(184);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(169);
		END_STATE();
	case 170:
		if (lookahead == '&')
			ADVANCE(230);
		END_STATE();
	case 171:
		if (lookahead == '\'')
			ADVANCE(299);
		if (lookahead != 0)
			ADVANCE(171);
		END_STATE();
	case 172:
		if (lookahead == '(')
			ADVANCE(321);
		if (lookahead == '{')
			ADVANCE(305);
		END_STATE();
	case 173:
		if (lookahead == ')')
			ADVANCE(262);
		END_STATE();
	case 174:
		if (lookahead == '+')
			ADVANCE(316);
		if (lookahead == '-')
			ADVANCE(306);
		if (lookahead == '=')
			ADVANCE(308);
		if (lookahead == '?')
			ADVANCE(312);
		END_STATE();
	case 175:
		if (lookahead == ';')
			ADVANCE(226);
		END_STATE();
	case 176:
		if (lookahead == '`')
			ADVANCE(283);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(176);
		END_STATE();
	case 177:
		if (lookahead == 'a')
			ADVANCE(178);
		END_STATE();
	case 178:
		if (lookahead == 'c')
			ADVANCE(217);
		END_STATE();
	case 179:
		if (lookahead == 'e')
			ADVANCE(215);
		END_STATE();
	case 180:
		if (lookahead == 'f')
			ADVANCE(213);
		END_STATE();
	case 181:
		if (lookahead == 'i')
			ADVANCE(211);
		END_STATE();
	case 182:
		if (lookahead == 'i')
			ADVANCE(180);
		if (lookahead == 's')
			ADVANCE(179);
		END_STATE();
	case 183:
		if (lookahead == 'l')
			ADVANCE(182);
		if (lookahead == 's')
			ADVANCE(177);
		END_STATE();
	case 184:
		if (lookahead == 'n')
			ADVANCE(206);
		END_STATE();
	case 185:
		if (lookahead == 'o')
			ADVANCE(209);
		END_STATE();
	case 186:
		if (lookahead == 's')
			ADVANCE(177);
		END_STATE();
	case 187:
		if (lookahead == '|')
			ADVANCE(231);
		END_STATE();
	case 188:
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 189:
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(405);
		END_STATE();
	case 190:
		if (eof)
			ADVANCE(205);
		ADVANCE_MAP('\n', 244, '!', 232, '#', 303, '$', 284, '&', 170, '*', 267, '-', 264, '0', 363, ';', 407, '<', 238, '>', 239, '?', 274,
					'@', 359, '\\', 37, '|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(190);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 191:
		if (eof)
			ADVANCE(205);
		if (lookahead == '\n')
			SKIP(204);
		END_STATE();
	case 192:
		if (eof)
			ADVANCE(205);
		if (lookahead == '\n')
			SKIP(193);
		END_STATE();
	case 193:
		if (eof)
			ADVANCE(205);
		if (lookahead == '\n')
			ADVANCE(245);
		if (lookahead == '#')
			ADVANCE(329);
		if (lookahead == '&')
			ADVANCE(170);
		if (lookahead == ')')
			ADVANCE(224);
		if (lookahead == ';')
			ADVANCE(407);
		if (lookahead == '<')
			ADVANCE(238);
		if (lookahead == '>')
			ADVANCE(239);
		if (lookahead == '\\')
			SKIP(200);
		if (lookahead == '`')
			ADVANCE(324);
		if (lookahead == 'e')
			ADVANCE(186);
		if (lookahead == 'i')
			ADVANCE(184);
		if (lookahead == '|')
			ADVANCE(223);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(193);
		END_STATE();
	case 194:
		if (eof)
			ADVANCE(205);
		if (lookahead == '\n')
			ADVANCE(245);
		if (lookahead == '#')
			ADVANCE(329);
		if (lookahead == '&')
			ADVANCE(170);
		if (lookahead == ')')
			ADVANCE(224);
		if (lookahead == ';')
			ADVANCE(407);
		if (lookahead == '<')
			ADVANCE(238);
		if (lookahead == '>')
			ADVANCE(239);
		if (lookahead == '\\')
			SKIP(201);
		if (lookahead == '`')
			ADVANCE(323);
		if (lookahead == '|')
			ADVANCE(223);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(194);
		END_STATE();
	case 195:
		if (eof)
			ADVANCE(205);
		if (lookahead == '\n')
			SKIP(194);
		END_STATE();
	case 196:
		if (eof)
			ADVANCE(205);
		ADVANCE_MAP('\n', 248, '"', 288, '#', 329, '$', 285, '&', 170, '\'', 171, ')', 224, ';', 407, '<', 238, '>', 239, '\\', 115, '`',
					323, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(196);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(368);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 197:
		if (eof)
			ADVANCE(205);
		ADVANCE_MAP('\n', 249, '!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, '*', 268, '-', 266, '0', 362, ';', 407, '<',
					238, '>', 239, '?', 275, '@', 360, '\\', 19, '`', 323, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(197);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(369);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 198:
		if (eof)
			ADVANCE(205);
		ADVANCE_MAP('\n', 252, '"', 288, '#', 329, '$', 285, '&', 170, '\'', 171, '(', 221, ')', 224, ';', 407, '<', 238, '>', 239, '\\',
					121, '`', 324, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(198);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(371);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 199:
		if (eof)
			ADVANCE(205);
		if (lookahead == '\r')
			SKIP(191);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(204);
		END_STATE();
	case 200:
		if (eof)
			ADVANCE(205);
		if (lookahead == '\r')
			SKIP(192);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(193);
		END_STATE();
	case 201:
		if (eof)
			ADVANCE(205);
		if (lookahead == '\r')
			SKIP(195);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			SKIP(194);
		END_STATE();
	case 202:
		if (eof)
			ADVANCE(205);
		ADVANCE_MAP('!', 233, '"', 288, '#', 303, '$', 285, '%', 272, '&', 170, '\'', 171, '(', 221, ')', 224, '*', 268, '+', 280, '-', 279,
					'/', 270, '0', 361, ':', 278, ';', 407, '<', 237, '=', 235, '>', 239, '?', 275, '@', 360, '\\', 95, '`', 324, 'd', 400,
					'e', 397, 'f', 395, 'i', 399, '{', 227, '|', 223, '}', 229, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(202);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(376);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0)
			ADVANCE(402);
		END_STATE();
	case 203:
		if (eof)
			ADVANCE(205);
		ADVANCE_MAP('!', 233, '"', 288, '#', 329, '$', 285, '\'', 171, '(', 221, ')', 224, ';', 175, '<', 236, '>', 239, '\\', 98, '`', 323,
					'{', 227, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(203);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(379);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '&' || ')' < lookahead) && lookahead != '{' && lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 204:
		if (eof)
			ADVANCE(205);
		ADVANCE_MAP('"', 288, '#', 329, '$', 287, '&', 170, '(', 221, ')', 224, '+', 280, '-', 279, ';', 175, '<', 238, '=', 234, '>',
					239, );
		if (lookahead == '\\')
			SKIP(199);
		if (lookahead == '`')
			ADVANCE(176);
		if (lookahead == '|')
			ADVANCE(223);
		if (lookahead == '}')
			ADVANCE(228);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(204);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(302);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 205:
		ACCEPT_TOKEN(ts_builtin_sym_end);
		END_STATE();
	case 206:
		ACCEPT_TOKEN(anon_sym_in);
		END_STATE();
	case 207:
		ACCEPT_TOKEN(anon_sym_in);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 208:
		ACCEPT_TOKEN(anon_sym_in);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 209:
		ACCEPT_TOKEN(anon_sym_do);
		END_STATE();
	case 210:
		ACCEPT_TOKEN(anon_sym_do);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 211:
		ACCEPT_TOKEN(anon_sym_fi);
		END_STATE();
	case 212:
		ACCEPT_TOKEN(anon_sym_fi);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 213:
		ACCEPT_TOKEN(anon_sym_elif);
		END_STATE();
	case 214:
		ACCEPT_TOKEN(anon_sym_elif);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 215:
		ACCEPT_TOKEN(anon_sym_else);
		END_STATE();
	case 216:
		ACCEPT_TOKEN(anon_sym_else);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 217:
		ACCEPT_TOKEN(anon_sym_esac);
		END_STATE();
	case 218:
		ACCEPT_TOKEN(anon_sym_esac);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 219:
		ACCEPT_TOKEN(anon_sym_esac);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 220:
		ACCEPT_TOKEN(anon_sym_esac);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 221:
		ACCEPT_TOKEN(anon_sym_LPAREN);
		END_STATE();
	case 222:
		ACCEPT_TOKEN(anon_sym_PIPE);
		END_STATE();
	case 223:
		ACCEPT_TOKEN(anon_sym_PIPE);
		if (lookahead == '|')
			ADVANCE(231);
		END_STATE();
	case 224:
		ACCEPT_TOKEN(anon_sym_RPAREN);
		END_STATE();
	case 225:
		ACCEPT_TOKEN(anon_sym_LF);
		if (lookahead == '\n')
			ADVANCE(225);
		if (lookahead == '\\')
			ADVANCE(103);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(364);
		END_STATE();
	case 226:
		ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
		END_STATE();
	case 227:
		ACCEPT_TOKEN(anon_sym_LBRACE);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 228:
		ACCEPT_TOKEN(anon_sym_RBRACE);
		END_STATE();
	case 229:
		ACCEPT_TOKEN(anon_sym_RBRACE);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 230:
		ACCEPT_TOKEN(anon_sym_AMP_AMP);
		END_STATE();
	case 231:
		ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
		END_STATE();
	case 232:
		ACCEPT_TOKEN(anon_sym_BANG);
		END_STATE();
	case 233:
		ACCEPT_TOKEN(anon_sym_BANG);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 234:
		ACCEPT_TOKEN(anon_sym_EQ);
		END_STATE();
	case 235:
		ACCEPT_TOKEN(anon_sym_EQ);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 236:
		ACCEPT_TOKEN(anon_sym_LT);
		END_STATE();
	case 237:
		ACCEPT_TOKEN(anon_sym_LT);
		if (lookahead == '<')
			ADVANCE(242);
		END_STATE();
	case 238:
		ACCEPT_TOKEN(anon_sym_LT);
		if (lookahead == '<')
			ADVANCE(241);
		END_STATE();
	case 239:
		ACCEPT_TOKEN(anon_sym_GT);
		if (lookahead == '>')
			ADVANCE(240);
		END_STATE();
	case 240:
		ACCEPT_TOKEN(anon_sym_GT_GT);
		END_STATE();
	case 241:
		ACCEPT_TOKEN(anon_sym_LT_LT);
		END_STATE();
	case 242:
		ACCEPT_TOKEN(anon_sym_LT_LT);
		if (lookahead == '-')
			ADVANCE(408);
		END_STATE();
	case 243:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(243);
		if (lookahead == '\\')
			ADVANCE(13);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(365);
		END_STATE();
	case 244:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(244);
		if (lookahead == '\\')
			ADVANCE(37);
		END_STATE();
	case 245:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(245);
		END_STATE();
	case 246:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(246);
		if (lookahead == '\\')
			ADVANCE(22);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(366);
		END_STATE();
	case 247:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(247);
		if (lookahead == '\\')
			ADVANCE(113);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(367);
		END_STATE();
	case 248:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(248);
		if (lookahead == '\\')
			ADVANCE(115);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(368);
		END_STATE();
	case 249:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(249);
		if (lookahead == '\\')
			ADVANCE(19);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(369);
		END_STATE();
	case 250:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(250);
		if (lookahead == '\\')
			ADVANCE(43);
		END_STATE();
	case 251:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(251);
		if (lookahead == '\\')
			ADVANCE(119);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(370);
		END_STATE();
	case 252:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(252);
		if (lookahead == '\\')
			ADVANCE(121);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(371);
		END_STATE();
	case 253:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(253);
		if (lookahead == '\\')
			ADVANCE(26);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(372);
		END_STATE();
	case 254:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(254);
		if (lookahead == '\\')
			ADVANCE(45);
		END_STATE();
	case 255:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(255);
		if (lookahead == '\\')
			ADVANCE(77);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(373);
		END_STATE();
	case 256:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(256);
		if (lookahead == '\\')
			ADVANCE(48);
		END_STATE();
	case 257:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(257);
		if (lookahead == '\\')
			ADVANCE(51);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(374);
		END_STATE();
	case 258:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(258);
		if (lookahead == '\\')
			ADVANCE(56);
		END_STATE();
	case 259:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(259);
		if (lookahead == '\\')
			ADVANCE(54);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(375);
		END_STATE();
	case 260:
		ACCEPT_TOKEN(aux_sym_heredoc_redirect_token1);
		if (lookahead == '\n')
			ADVANCE(260);
		if (lookahead == '\\')
			ADVANCE(62);
		END_STATE();
	case 261:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN_LPAREN);
		END_STATE();
	case 262:
		ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
		END_STATE();
	case 263:
		ACCEPT_TOKEN(anon_sym_PLUS);
		if (lookahead == '+')
			ADVANCE(281);
		END_STATE();
	case 264:
		ACCEPT_TOKEN(anon_sym_DASH);
		END_STATE();
	case 265:
		ACCEPT_TOKEN(anon_sym_DASH);
		if (lookahead == '-')
			ADVANCE(282);
		END_STATE();
	case 266:
		ACCEPT_TOKEN(anon_sym_DASH);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 267:
		ACCEPT_TOKEN(anon_sym_STAR);
		END_STATE();
	case 268:
		ACCEPT_TOKEN(anon_sym_STAR);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 269:
		ACCEPT_TOKEN(anon_sym_SLASH);
		END_STATE();
	case 270:
		ACCEPT_TOKEN(anon_sym_SLASH);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 271:
		ACCEPT_TOKEN(anon_sym_PERCENT);
		END_STATE();
	case 272:
		ACCEPT_TOKEN(anon_sym_PERCENT);
		if (lookahead == '%')
			ADVANCE(319);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 273:
		ACCEPT_TOKEN(anon_sym_PERCENT);
		if (lookahead == '%')
			ADVANCE(318);
		END_STATE();
	case 274:
		ACCEPT_TOKEN(anon_sym_QMARK);
		END_STATE();
	case 275:
		ACCEPT_TOKEN(anon_sym_QMARK);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 276:
		ACCEPT_TOKEN(anon_sym_COLON);
		END_STATE();
	case 277:
		ACCEPT_TOKEN(anon_sym_COLON);
		if (lookahead == '=')
			ADVANCE(309);
		if (lookahead == '?')
			ADVANCE(313);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 278:
		ACCEPT_TOKEN(anon_sym_COLON);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 279:
		ACCEPT_TOKEN(anon_sym_DASH2);
		END_STATE();
	case 280:
		ACCEPT_TOKEN(anon_sym_PLUS2);
		END_STATE();
	case 281:
		ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
		END_STATE();
	case 282:
		ACCEPT_TOKEN(anon_sym_DASH_DASH);
		END_STATE();
	case 283:
		ACCEPT_TOKEN(aux_sym_concatenation_token1);
		END_STATE();
	case 284:
		ACCEPT_TOKEN(anon_sym_DOLLAR);
		END_STATE();
	case 285:
		ACCEPT_TOKEN(anon_sym_DOLLAR);
		if (lookahead == '(')
			ADVANCE(322);
		if (lookahead == '{')
			ADVANCE(305);
		END_STATE();
	case 286:
		ACCEPT_TOKEN(anon_sym_DOLLAR);
		if (lookahead == '(')
			ADVANCE(321);
		if (lookahead == '{')
			ADVANCE(305);
		END_STATE();
	case 287:
		ACCEPT_TOKEN(anon_sym_DOLLAR);
		if (lookahead == '{')
			ADVANCE(305);
		END_STATE();
	case 288:
		ACCEPT_TOKEN(anon_sym_DQUOTE);
		END_STATE();
	case 289:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(293);
		if (lookahead == '\\')
			ADVANCE(96);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(296);
		END_STATE();
	case 290:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(296);
		if (lookahead == '\\')
			ADVANCE(325);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(298);
		END_STATE();
	case 291:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(295);
		if (lookahead == '\\')
			ADVANCE(96);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(296);
		END_STATE();
	case 292:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\n')
			ADVANCE(294);
		if (lookahead == '\\')
			ADVANCE(96);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(296);
		END_STATE();
	case 293:
		ACCEPT_TOKEN(sym_string_content);
		ADVANCE_MAP('!', 232, '"', 288, '#', 303, '$', 284, '*', 267, '-', 264, '0', 363, '?', 274, '@', 359, '\\', 65, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(149);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(293);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		if (lookahead != 0 && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(296);
		END_STATE();
	case 294:
		ACCEPT_TOKEN(sym_string_content);
		ADVANCE_MAP('!', 232, '#', 303, '$', 284, '*', 267, '-', 264, '0', 363, '?', 274, '@', 359, '\\', 67, );
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(154);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(294);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		if (lookahead != 0 && (lookahead < ' ' || '$' < lookahead) && (lookahead < '_' || 'z' < lookahead))
			ADVANCE(296);
		END_STATE();
	case 295:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '"')
			ADVANCE(288);
		if (lookahead == '#')
			ADVANCE(298);
		if (lookahead == '$')
			ADVANCE(285);
		if (lookahead == '\\')
			ADVANCE(99);
		if (lookahead == '`')
			ADVANCE(323);
		if (lookahead == '\n' || lookahead == '\r')
			SKIP(168);
		if (('\t' <= lookahead && lookahead <= '\f') || lookahead == ' ')
			ADVANCE(295);
		if (lookahead != 0)
			ADVANCE(296);
		END_STATE();
	case 296:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\\')
			ADVANCE(96);
		if (lookahead != 0 && lookahead != '\n' && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(296);
		END_STATE();
	case 297:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\\')
			ADVANCE(96);
		if (lookahead != 0 && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(296);
		END_STATE();
	case 298:
		ACCEPT_TOKEN(sym_string_content);
		if (lookahead == '\\')
			ADVANCE(325);
		if (lookahead != 0 && lookahead != '\n' && lookahead != '\r' && lookahead != '"' && lookahead != '$' && lookahead != '`')
			ADVANCE(298);
		END_STATE();
	case 299:
		ACCEPT_TOKEN(sym_raw_string);
		END_STATE();
	case 300:
		ACCEPT_TOKEN(sym_number);
		if (lookahead == '\\')
			ADVANCE(188);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 301:
		ACCEPT_TOKEN(sym_number);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 302:
		ACCEPT_TOKEN(sym_number);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(302);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 303:
		ACCEPT_TOKEN(anon_sym_POUND);
		END_STATE();
	case 304:
		ACCEPT_TOKEN(anon_sym_POUND);
		if (lookahead == '\\')
			ADVANCE(327);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(403);
		END_STATE();
	case 305:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
		END_STATE();
	case 306:
		ACCEPT_TOKEN(anon_sym_COLON_DASH);
		END_STATE();
	case 307:
		ACCEPT_TOKEN(anon_sym_DASH3);
		END_STATE();
	case 308:
		ACCEPT_TOKEN(anon_sym_COLON_EQ);
		END_STATE();
	case 309:
		ACCEPT_TOKEN(anon_sym_COLON_EQ);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 310:
		ACCEPT_TOKEN(anon_sym_EQ2);
		END_STATE();
	case 311:
		ACCEPT_TOKEN(anon_sym_EQ2);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 312:
		ACCEPT_TOKEN(anon_sym_COLON_QMARK);
		END_STATE();
	case 313:
		ACCEPT_TOKEN(anon_sym_COLON_QMARK);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 314:
		ACCEPT_TOKEN(anon_sym_QMARK2);
		END_STATE();
	case 315:
		ACCEPT_TOKEN(anon_sym_QMARK2);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 316:
		ACCEPT_TOKEN(anon_sym_COLON_PLUS);
		END_STATE();
	case 317:
		ACCEPT_TOKEN(anon_sym_PLUS3);
		END_STATE();
	case 318:
		ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
		END_STATE();
	case 319:
		ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 320:
		ACCEPT_TOKEN(aux_sym__expansion_regex_token1);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(320);
		END_STATE();
	case 321:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
		END_STATE();
	case 322:
		ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
		if (lookahead == '(')
			ADVANCE(261);
		END_STATE();
	case 323:
		ACCEPT_TOKEN(anon_sym_BQUOTE);
		END_STATE();
	case 324:
		ACCEPT_TOKEN(anon_sym_BQUOTE);
		if (lookahead == '`')
			ADVANCE(283);
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			ADVANCE(176);
		END_STATE();
	case 325:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead == '\n')
			ADVANCE(296);
		if (lookahead == '\r')
			ADVANCE(290);
		if (lookahead != 0)
			ADVANCE(298);
		END_STATE();
	case 326:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead == '\t' || (0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(329);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(330);
		END_STATE();
	case 327:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead == '\t' || (0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(329);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(403);
		END_STATE();
	case 328:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead == '\t' || (0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(329);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead))
			ADVANCE(406);
		END_STATE();
	case 329:
		ACCEPT_TOKEN(sym_comment);
		if (lookahead != 0 && lookahead != '\n')
			ADVANCE(329);
		END_STATE();
	case 330:
		ACCEPT_TOKEN(sym__comment_word);
		if (lookahead == '\\')
			ADVANCE(326);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(330);
		END_STATE();
	case 331:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (lookahead == 'a')
			ADVANCE(332);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('b' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 332:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (lookahead == 'c')
			ADVANCE(219);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 333:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (lookahead == 's')
			ADVANCE(331);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 334:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 335:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 'a')
			ADVANCE(336);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('b' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 336:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 'c')
			ADVANCE(220);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 337:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 'n')
			ADVANCE(208);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 338:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (lookahead == 's')
			ADVANCE(335);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 339:
		ACCEPT_TOKEN(aux_sym__simple_variable_name_token1);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 340:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 243, '!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, ')', 224, '*', 268, '-', 266, '0', 362, ';',
					407, '<', 238, '>', 239, '?', 275, '@', 360, '\\', 13, '`', 323, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(10);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(365);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 341:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 244, '!', 232, '#', 303, '$', 284, '&', 170, '*', 267, '-', 264, '0', 363, ';', 407, '<', 238, '>', 239, '?', 274,
					'@', 359, '\\', 37, '|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(35);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 342:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 246, '!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, '*', 268, '-', 266, '0', 362, ';', 407, '<',
					238, '>', 239, '?', 275, '@', 360, '\\', 22, '`', 323, 'e', 333, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(73);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(366);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 343:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 249, '!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, '*', 268, '-', 266, '0', 362, ';', 407, '<',
					238, '>', 239, '?', 275, '@', 360, '\\', 19, '`', 323, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(82);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(369);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 344:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 250, '!', 232, '#', 303, '$', 284, '&', 170, '*', 267, '-', 264, '0', 363, ';', 407, '<', 238, '>', 239, '?', 274,
					'@', 359, '\\', 43, 'e', 338, '|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(83);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 345:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 253, '!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, '*', 268, '-', 266, '0', 362, '<', 238, '>',
					239, '?', 275, '@', 360, '\\', 26, '`', 323, '|', 223, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(86);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(372);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(402);
		END_STATE();
	case 346:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 254, '!', 232, '#', 303, '$', 284, '&', 170, ')', 224, '*', 267, '-', 264, '0', 363, ';', 407, '<', 238, '>', 239,
					'?', 274, '@', 359, '\\', 45, '|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(87);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 347:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 255, '!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, '*', 268, '-', 266, '0', 362, '<', 236, '>',
					239, '?', 275, '@', 360, '\\', 77, '`', 323, '|', 187, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(88);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(373);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(402);
		END_STATE();
	case 348:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 256, '!', 232, '#', 303, '$', 284, '&', 170, '*', 267, '-', 264, '0', 363, ';', 407, '<', 238, '>', 239, '?', 274,
					'@', 359, '\\', 48, '`', 323, '|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(89);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 349:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 257, '!', 233, '"', 288, '#', 303, '$', 285, '\'', 171, '*', 268, '-', 266, '0', 362, ';', 407, '?', 275, '@',
					360, '\\', 51, '`', 323, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(90);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(374);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 350:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 258, '!', 232, '#', 303, '$', 284, '&', 170, '*', 267, '-', 264, '0', 363, '<', 238, '>', 239, '?', 274, '@', 359,
					'\\', 56, '|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(91);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 351:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 259, '!', 233, '"', 288, '#', 303, '$', 285, '\'', 171, '*', 268, '-', 266, '0', 362, '?', 275, '@', 360, '\\',
					54, '`', 323, );
		if (lookahead == '\t' || lookahead == ' ')
			SKIP(92);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(375);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' &&
			(lookahead < '>' || 'Z' < lookahead) && lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 352:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('\n', 260, '!', 232, '#', 303, '$', 284, '*', 267, '-', 264, '0', 363, ';', 407, '?', 274, '@', 359, '\\', 62, 'i',
					337, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(93);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 353:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 233, '"', 288, '#', 303, '$', 285, '&', 170, '\'', 171, '*', 268, '-', 266, '0', 362, '<', 238, '>', 239, '?', 275,
					'@', 360, '\\', 30, '`', 323, '|', 223, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(141);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(377);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<')
			ADVANCE(402);
		END_STATE();
	case 354:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 233, '"', 288, '#', 303, '$', 285, '\'', 171, '*', 268, '-', 266, '0', 362, '<', 236, '>', 239, '?', 275, '@', 360,
					'\\', 40, '`', 323, );
		if (lookahead == '\t' || lookahead == '\n' || lookahead == ' ')
			SKIP(142);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(378);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || ('_' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if (lookahead != 0 && (lookahead < '&' || '*' < lookahead) && lookahead != ';' && lookahead != '<' && lookahead != '|')
			ADVANCE(402);
		END_STATE();
	case 355:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 232, '#', 303, '$', 284, '&', 170, '*', 267, '-', 264, '0', 363, '<', 238, '>', 239, '?', 274, '@', 359, '\\', 58,
					'|', 223, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(152);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 356:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 232, '#', 303, '$', 284, ')', 224, '*', 267, '-', 264, '0', 363, '?', 274, '@', 359, '\\', 64, '|', 222, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(153);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 357:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		ADVANCE_MAP('!', 232, '#', 303, '$', 284, '*', 267, '-', 264, '0', 363, '?', 274, '@', 359, '\\', 69, );
		if (('\t' <= lookahead && lookahead <= '\r') || lookahead == ' ')
			SKIP(156);
		if (('1' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 358:
		ACCEPT_TOKEN(aux_sym__multiline_variable_name_token1);
		if (lookahead == '\\')
			ADVANCE(15);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(358);
		END_STATE();
	case 359:
		ACCEPT_TOKEN(anon_sym_AT);
		END_STATE();
	case 360:
		ACCEPT_TOKEN(anon_sym_AT);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 361:
		ACCEPT_TOKEN(anon_sym_0);
		if (lookahead == '\\')
			ADVANCE(188);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 362:
		ACCEPT_TOKEN(anon_sym_0);
		if (lookahead == '\\')
			ADVANCE(16);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 363:
		ACCEPT_TOKEN(anon_sym_0);
		if (('0' <= lookahead && lookahead <= '9') || ('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' ||
			('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(339);
		END_STATE();
	case 364:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(225);
		if (lookahead == '!')
			ADVANCE(233);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(102);
		if (lookahead == '{')
			ADVANCE(227);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(364);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 365:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 243, '!', 233, '#', 304, '*', 268, '-', 266, '0', 362, '?', 275, '@', 360, '\\', 12, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(365);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 366:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 246, '!', 233, '#', 304, '*', 268, '-', 266, '0', 362, '?', 275, '@', 360, '\\', 21, 'e', 333, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(366);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 367:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(247);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(112);
		if (lookahead == 'e')
			ADVANCE(401);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(367);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 368:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(248);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(114);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(368);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 369:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 249, '!', 233, '#', 304, '*', 268, '-', 266, '0', 362, '?', 275, '@', 360, '\\', 18, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(369);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 370:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(251);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(118);
		if (lookahead == 'e')
			ADVANCE(401);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(370);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 371:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\n')
			ADVANCE(252);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(120);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(371);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 372:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 253, '!', 233, '#', 304, '*', 268, '-', 266, '0', 362, '?', 275, '@', 360, '\\', 25, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(372);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 373:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 255, '!', 233, '#', 304, '*', 268, '-', 266, '0', 362, '?', 275, '@', 360, '\\', 76, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(373);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 374:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 257, '!', 233, '#', 304, '*', 268, '-', 266, '0', 362, '?', 275, '@', 360, '\\', 50, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(374);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 375:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('\n', 259, '!', 233, '#', 304, '*', 268, '-', 266, '0', 362, '?', 275, '@', 360, '\\', 53, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(375);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 376:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('!', 233, '#', 304, '%', 272, '*', 268, '+', 280, '-', 279, '/', 270, '0', 361, ':', 278, '=', 235, '?', 275, '@', 360,
					'\\', 94, 'd', 400, 'e', 397, 'f', 395, 'i', 399, '{', 227, '}', 229, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(376);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if (lookahead != 0 && (lookahead < '\t' || '\r' < lookahead) && (lookahead < ' ' || '+' < lookahead) &&
			(lookahead < '/' || '@' < lookahead) && lookahead != '`' && (lookahead < '{' || '}' < lookahead))
			ADVANCE(402);
		END_STATE();
	case 377:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('!', 233, '#', 304, '*', 268, '-', 266, '0', 362, '?', 275, '@', 360, '\\', 29, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(377);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 378:
		ACCEPT_TOKEN(sym_word);
		ADVANCE_MAP('!', 233, '#', 304, '*', 268, '-', 266, '0', 362, '?', 275, '@', 360, '\\', 39, );
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(378);
		if (('1' <= lookahead && lookahead <= '9'))
			ADVANCE(301);
		if (('A' <= lookahead && lookahead <= 'Z') || lookahead == '_' || ('a' <= lookahead && lookahead <= 'z'))
			ADVANCE(334);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 379:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(233);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(97);
		if (lookahead == '{')
			ADVANCE(227);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(379);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 380:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(233);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(100);
		if (lookahead == 'e')
			ADVANCE(398);
		if (lookahead == 'f')
			ADVANCE(395);
		if (lookahead == '{')
			ADVANCE(227);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(380);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 381:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(233);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(104);
		if (lookahead == 'd')
			ADVANCE(400);
		if (lookahead == '{')
			ADVANCE(227);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(381);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 382:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(233);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(106);
		if (lookahead == '{')
			ADVANCE(227);
		if (lookahead == '}')
			ADVANCE(229);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(382);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 383:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(233);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(108);
		if (lookahead == 'f')
			ADVANCE(395);
		if (lookahead == '{')
			ADVANCE(227);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(383);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 384:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '!')
			ADVANCE(233);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(123);
		if (lookahead == 'e')
			ADVANCE(401);
		if (lookahead == '{')
			ADVANCE(227);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(384);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 385:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(110);
		if (lookahead == '{')
			ADVANCE(227);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(385);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 386:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(116);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(386);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 387:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(126);
		if (lookahead == 'e')
			ADVANCE(401);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(387);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 388:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(128);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(388);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 389:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(130);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(389);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 390:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '#')
			ADVANCE(403);
		if (lookahead == '\\')
			ADVANCE(132);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(390);
		if (('0' <= lookahead && lookahead <= '9'))
			ADVANCE(300);
		if ((!eof && set_contains(sym_word_character_set_1(), 9, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 391:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if (lookahead == 'a')
			ADVANCE(392);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 392:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if (lookahead == 'c')
			ADVANCE(218);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 393:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if (lookahead == 'e')
			ADVANCE(216);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 394:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if (lookahead == 'f')
			ADVANCE(214);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 395:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if (lookahead == 'i')
			ADVANCE(212);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 396:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if (lookahead == 'i')
			ADVANCE(394);
		if (lookahead == 's')
			ADVANCE(393);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 397:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if (lookahead == 'l')
			ADVANCE(396);
		if (lookahead == 's')
			ADVANCE(391);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 398:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if (lookahead == 'l')
			ADVANCE(396);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 399:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if (lookahead == 'n')
			ADVANCE(207);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 400:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if (lookahead == 'o')
			ADVANCE(210);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 401:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if (lookahead == 's')
			ADVANCE(391);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 402:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(188);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(402);
		END_STATE();
	case 403:
		ACCEPT_TOKEN(sym_word);
		if (lookahead == '\\')
			ADVANCE(327);
		if ((!eof && set_contains(sym__comment_word_character_set_1(), 10, lookahead)))
			ADVANCE(403);
		END_STATE();
	case 404:
		ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
		if (lookahead == '#')
			ADVANCE(406);
		if (lookahead == '\\')
			ADVANCE(134);
		if ((0x0b <= lookahead && lookahead <= '\r'))
			ADVANCE(404);
		if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead)))
			ADVANCE(405);
		END_STATE();
	case 405:
		ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
		if (lookahead == '\\')
			ADVANCE(189);
		if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead)))
			ADVANCE(405);
		END_STATE();
	case 406:
		ACCEPT_TOKEN(aux_sym__word_no_brace_token1);
		if (lookahead == '\\')
			ADVANCE(328);
		if ((!eof && set_contains(aux_sym__word_no_brace_token1_character_set_2(), 10, lookahead)))
			ADVANCE(406);
		END_STATE();
	case 407:
		ACCEPT_TOKEN(anon_sym_SEMI);
		if (lookahead == ';')
			ADVANCE(226);
		END_STATE();
	case 408:
		ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
		END_STATE();
	default:
		return false;
	}
}

bool ts_lex_keywords(t_lexer *lexer, t_state_id state)
{
	START_LEXER();
	eof = lexer->data.eof((void *)lexer);
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