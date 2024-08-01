/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_381.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1905(t_small_parse_table_array *v)
{
	v->a[38100] = sym_command_substitution;
	v->a[38101] = 10;
	v->a[38102] = actions(3);
	v->a[38103] = 1;
	v->a[38104] = sym_comment;
	v->a[38105] = actions(627);
	v->a[38106] = 1;
	v->a[38107] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38108] = actions(629);
	v->a[38109] = 1;
	v->a[38110] = anon_sym_DOLLAR;
	v->a[38111] = actions(631);
	v->a[38112] = 1;
	v->a[38113] = anon_sym_DQUOTE;
	v->a[38114] = actions(633);
	v->a[38115] = 1;
	v->a[38116] = anon_sym_DOLLAR_LBRACE;
	v->a[38117] = actions(635);
	v->a[38118] = 1;
	v->a[38119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1906(v);
}

void	small_parse_table_1906(t_small_parse_table_array *v)
{
	v->a[38120] = actions(637);
	v->a[38121] = 1;
	v->a[38122] = anon_sym_BQUOTE;
	v->a[38123] = actions(1727);
	v->a[38124] = 1;
	v->a[38125] = sym__bare_dollar;
	v->a[38126] = actions(1725);
	v->a[38127] = 5;
	v->a[38128] = aux_sym_concatenation_token1;
	v->a[38129] = sym_raw_string;
	v->a[38130] = sym_number;
	v->a[38131] = sym__comment_word;
	v->a[38132] = sym_word;
	v->a[38133] = state(475);
	v->a[38134] = 5;
	v->a[38135] = sym_arithmetic_expansion;
	v->a[38136] = sym_string;
	v->a[38137] = sym_simple_expansion;
	v->a[38138] = sym_expansion;
	v->a[38139] = sym_command_substitution;
	small_parse_table_1907(v);
}

void	small_parse_table_1907(t_small_parse_table_array *v)
{
	v->a[38140] = 10;
	v->a[38141] = actions(3);
	v->a[38142] = 1;
	v->a[38143] = sym_comment;
	v->a[38144] = actions(1665);
	v->a[38145] = 1;
	v->a[38146] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38147] = actions(1667);
	v->a[38148] = 1;
	v->a[38149] = anon_sym_DOLLAR;
	v->a[38150] = actions(1669);
	v->a[38151] = 1;
	v->a[38152] = anon_sym_DQUOTE;
	v->a[38153] = actions(1671);
	v->a[38154] = 1;
	v->a[38155] = anon_sym_DOLLAR_LBRACE;
	v->a[38156] = actions(1673);
	v->a[38157] = 1;
	v->a[38158] = anon_sym_DOLLAR_LPAREN;
	v->a[38159] = actions(1675);
	small_parse_table_1908(v);
}

void	small_parse_table_1908(t_small_parse_table_array *v)
{
	v->a[38160] = 1;
	v->a[38161] = anon_sym_BQUOTE;
	v->a[38162] = actions(1731);
	v->a[38163] = 1;
	v->a[38164] = sym__bare_dollar;
	v->a[38165] = actions(1729);
	v->a[38166] = 5;
	v->a[38167] = aux_sym_concatenation_token1;
	v->a[38168] = sym_raw_string;
	v->a[38169] = sym_number;
	v->a[38170] = sym__comment_word;
	v->a[38171] = sym_word;
	v->a[38172] = state(1293);
	v->a[38173] = 5;
	v->a[38174] = sym_arithmetic_expansion;
	v->a[38175] = sym_string;
	v->a[38176] = sym_simple_expansion;
	v->a[38177] = sym_expansion;
	v->a[38178] = sym_command_substitution;
	v->a[38179] = 10;
	small_parse_table_1909(v);
}

void	small_parse_table_1909(t_small_parse_table_array *v)
{
	v->a[38180] = actions(3);
	v->a[38181] = 1;
	v->a[38182] = sym_comment;
	v->a[38183] = actions(1505);
	v->a[38184] = 1;
	v->a[38185] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38186] = actions(1509);
	v->a[38187] = 1;
	v->a[38188] = anon_sym_DQUOTE;
	v->a[38189] = actions(1511);
	v->a[38190] = 1;
	v->a[38191] = anon_sym_DOLLAR_LBRACE;
	v->a[38192] = actions(1513);
	v->a[38193] = 1;
	v->a[38194] = anon_sym_DOLLAR_LPAREN;
	v->a[38195] = actions(1515);
	v->a[38196] = 1;
	v->a[38197] = anon_sym_BQUOTE;
	v->a[38198] = actions(1517);
	v->a[38199] = 1;
	small_parse_table_1910(v);
}

/* EOF small_parse_table_381.c */
