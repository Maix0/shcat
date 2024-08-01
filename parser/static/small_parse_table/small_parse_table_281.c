/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_281.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1405(t_small_parse_table_array *v)
{
	v->a[28100] = sym_number;
	v->a[28101] = anon_sym_DOLLAR_LBRACE;
	v->a[28102] = anon_sym_DOLLAR_LPAREN;
	v->a[28103] = anon_sym_BQUOTE;
	v->a[28104] = sym_word;
	v->a[28105] = anon_sym_SEMI;
	v->a[28106] = 5;
	v->a[28107] = actions(3);
	v->a[28108] = 1;
	v->a[28109] = sym_comment;
	v->a[28110] = actions(1191);
	v->a[28111] = 1;
	v->a[28112] = sym_variable_name;
	v->a[28113] = actions(1189);
	v->a[28114] = 2;
	v->a[28115] = aux_sym__simple_variable_name_token1;
	v->a[28116] = aux_sym__multiline_variable_name_token1;
	v->a[28117] = actions(1187);
	v->a[28118] = 8;
	v->a[28119] = anon_sym_BANG;
	small_parse_table_1406(v);
}

void	small_parse_table_1406(t_small_parse_table_array *v)
{
	v->a[28120] = anon_sym_DASH;
	v->a[28121] = anon_sym_STAR;
	v->a[28122] = anon_sym_QMARK;
	v->a[28123] = anon_sym_DOLLAR;
	v->a[28124] = anon_sym_POUND;
	v->a[28125] = anon_sym_AT;
	v->a[28126] = anon_sym_0;
	v->a[28127] = actions(343);
	v->a[28128] = 11;
	v->a[28129] = anon_sym_LT;
	v->a[28130] = anon_sym_GT;
	v->a[28131] = anon_sym_GT_GT;
	v->a[28132] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28133] = anon_sym_DQUOTE;
	v->a[28134] = sym_raw_string;
	v->a[28135] = sym_number;
	v->a[28136] = anon_sym_DOLLAR_LBRACE;
	v->a[28137] = anon_sym_DOLLAR_LPAREN;
	v->a[28138] = anon_sym_BQUOTE;
	v->a[28139] = sym_word;
	small_parse_table_1407(v);
}

void	small_parse_table_1407(t_small_parse_table_array *v)
{
	v->a[28140] = 3;
	v->a[28141] = actions(3);
	v->a[28142] = 1;
	v->a[28143] = sym_comment;
	v->a[28144] = actions(869);
	v->a[28145] = 1;
	v->a[28146] = sym_variable_name;
	v->a[28147] = actions(867);
	v->a[28148] = 21;
	v->a[28149] = anon_sym_for;
	v->a[28150] = anon_sym_while;
	v->a[28151] = anon_sym_until;
	v->a[28152] = anon_sym_do;
	v->a[28153] = anon_sym_if;
	v->a[28154] = anon_sym_case;
	v->a[28155] = anon_sym_LPAREN;
	v->a[28156] = anon_sym_LBRACE;
	v->a[28157] = anon_sym_BANG;
	v->a[28158] = anon_sym_LT;
	v->a[28159] = anon_sym_GT;
	small_parse_table_1408(v);
}

void	small_parse_table_1408(t_small_parse_table_array *v)
{
	v->a[28160] = anon_sym_GT_GT;
	v->a[28161] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28162] = anon_sym_DOLLAR;
	v->a[28163] = anon_sym_DQUOTE;
	v->a[28164] = sym_raw_string;
	v->a[28165] = sym_number;
	v->a[28166] = anon_sym_DOLLAR_LBRACE;
	v->a[28167] = anon_sym_DOLLAR_LPAREN;
	v->a[28168] = anon_sym_BQUOTE;
	v->a[28169] = sym_word;
	v->a[28170] = 13;
	v->a[28171] = actions(3);
	v->a[28172] = 1;
	v->a[28173] = sym_comment;
	v->a[28174] = actions(943);
	v->a[28175] = 1;
	v->a[28176] = sym__immediate_double_hash;
	v->a[28177] = actions(1193);
	v->a[28178] = 1;
	v->a[28179] = anon_sym_RPAREN;
	small_parse_table_1409(v);
}

void	small_parse_table_1409(t_small_parse_table_array *v)
{
	v->a[28180] = actions(1195);
	v->a[28181] = 1;
	v->a[28182] = anon_sym_RBRACE;
	v->a[28183] = actions(1198);
	v->a[28184] = 1;
	v->a[28185] = anon_sym_DQUOTE;
	v->a[28186] = actions(1200);
	v->a[28187] = 1;
	v->a[28188] = sym_raw_string;
	v->a[28189] = actions(1202);
	v->a[28190] = 1;
	v->a[28191] = aux_sym__expansion_regex_token1;
	v->a[28192] = actions(1204);
	v->a[28193] = 1;
	v->a[28194] = sym_regex;
	v->a[28195] = state(1587);
	v->a[28196] = 1;
	v->a[28197] = sym__expansion_regex;
	v->a[28198] = state(1588);
	v->a[28199] = 1;
	small_parse_table_1410(v);
}

/* EOF small_parse_table_281.c */
