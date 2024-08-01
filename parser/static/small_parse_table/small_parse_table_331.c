/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_331.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1655(t_small_parse_table_array *v)
{
	v->a[33100] = actions(665);
	v->a[33101] = 1;
	v->a[33102] = anon_sym_BQUOTE;
	v->a[33103] = state(1556);
	v->a[33104] = 1;
	v->a[33105] = sym_terminator;
	v->a[33106] = state(650);
	v->a[33107] = 2;
	v->a[33108] = sym_concatenation;
	v->a[33109] = aux_sym_for_statement_repeat1;
	v->a[33110] = actions(1346);
	v->a[33111] = 3;
	v->a[33112] = sym_raw_string;
	v->a[33113] = sym_number;
	v->a[33114] = sym_word;
	v->a[33115] = actions(1348);
	v->a[33116] = 3;
	v->a[33117] = anon_sym_SEMI_SEMI;
	v->a[33118] = aux_sym_heredoc_redirect_token1;
	v->a[33119] = anon_sym_SEMI;
	small_parse_table_1656(v);
}

void	small_parse_table_1656(t_small_parse_table_array *v)
{
	v->a[33120] = state(857);
	v->a[33121] = 5;
	v->a[33122] = sym_arithmetic_expansion;
	v->a[33123] = sym_string;
	v->a[33124] = sym_simple_expansion;
	v->a[33125] = sym_expansion;
	v->a[33126] = sym_command_substitution;
	v->a[33127] = 12;
	v->a[33128] = actions(3);
	v->a[33129] = 1;
	v->a[33130] = sym_comment;
	v->a[33131] = actions(448);
	v->a[33132] = 1;
	v->a[33133] = sym_variable_name;
	v->a[33134] = actions(1353);
	v->a[33135] = 1;
	v->a[33136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33137] = actions(1356);
	v->a[33138] = 1;
	v->a[33139] = anon_sym_DOLLAR;
	small_parse_table_1657(v);
}

void	small_parse_table_1657(t_small_parse_table_array *v)
{
	v->a[33140] = actions(1359);
	v->a[33141] = 1;
	v->a[33142] = anon_sym_DQUOTE;
	v->a[33143] = actions(1362);
	v->a[33144] = 1;
	v->a[33145] = anon_sym_DOLLAR_LBRACE;
	v->a[33146] = actions(1365);
	v->a[33147] = 1;
	v->a[33148] = anon_sym_DOLLAR_LPAREN;
	v->a[33149] = actions(1368);
	v->a[33150] = 1;
	v->a[33151] = anon_sym_BQUOTE;
	v->a[33152] = state(595);
	v->a[33153] = 2;
	v->a[33154] = sym_concatenation;
	v->a[33155] = aux_sym_for_statement_repeat1;
	v->a[33156] = actions(428);
	v->a[33157] = 3;
	v->a[33158] = anon_sym_LT;
	v->a[33159] = anon_sym_GT;
	small_parse_table_1658(v);
}

void	small_parse_table_1658(t_small_parse_table_array *v)
{
	v->a[33160] = anon_sym_GT_GT;
	v->a[33161] = actions(1350);
	v->a[33162] = 3;
	v->a[33163] = sym_raw_string;
	v->a[33164] = sym_number;
	v->a[33165] = sym_word;
	v->a[33166] = state(782);
	v->a[33167] = 5;
	v->a[33168] = sym_arithmetic_expansion;
	v->a[33169] = sym_string;
	v->a[33170] = sym_simple_expansion;
	v->a[33171] = sym_expansion;
	v->a[33172] = sym_command_substitution;
	v->a[33173] = 6;
	v->a[33174] = actions(3);
	v->a[33175] = 1;
	v->a[33176] = sym_comment;
	v->a[33177] = actions(981);
	v->a[33178] = 1;
	v->a[33179] = sym_variable_name;
	small_parse_table_1659(v);
}

void	small_parse_table_1659(t_small_parse_table_array *v)
{
	v->a[33180] = actions(1371);
	v->a[33181] = 1;
	v->a[33182] = aux_sym_concatenation_token1;
	v->a[33183] = actions(1374);
	v->a[33184] = 1;
	v->a[33185] = sym__concat;
	v->a[33186] = state(596);
	v->a[33187] = 1;
	v->a[33188] = aux_sym_concatenation_repeat1;
	v->a[33189] = actions(973);
	v->a[33190] = 16;
	v->a[33191] = anon_sym_PIPE;
	v->a[33192] = anon_sym_AMP_AMP;
	v->a[33193] = anon_sym_PIPE_PIPE;
	v->a[33194] = anon_sym_LT;
	v->a[33195] = anon_sym_GT;
	v->a[33196] = anon_sym_GT_GT;
	v->a[33197] = anon_sym_LT_LT;
	v->a[33198] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33199] = anon_sym_DOLLAR;
	small_parse_table_1660(v);
}

/* EOF small_parse_table_331.c */
