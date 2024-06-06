/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1171.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5855(t_small_parse_table_array *v)
{
	v->a[117100] = 7;
	v->a[117101] = sym_arithmetic_expansion;
	v->a[117102] = sym_brace_expression;
	v->a[117103] = sym_string;
	v->a[117104] = sym_number;
	v->a[117105] = sym_simple_expansion;
	v->a[117106] = sym_expansion;
	v->a[117107] = sym_command_substitution;
	v->a[117108] = 16;
	v->a[117109] = actions(3);
	v->a[117110] = 1;
	v->a[117111] = sym_comment;
	v->a[117112] = actions(5334);
	v->a[117113] = 1;
	v->a[117114] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117115] = actions(5340);
	v->a[117116] = 1;
	v->a[117117] = anon_sym_DQUOTE;
	v->a[117118] = actions(5344);
	v->a[117119] = 1;
	small_parse_table_5856(v);
}

void	small_parse_table_5856(t_small_parse_table_array *v)
{
	v->a[117120] = aux_sym_number_token1;
	v->a[117121] = actions(5346);
	v->a[117122] = 1;
	v->a[117123] = aux_sym_number_token2;
	v->a[117124] = actions(5348);
	v->a[117125] = 1;
	v->a[117126] = anon_sym_DOLLAR_LBRACE;
	v->a[117127] = actions(5350);
	v->a[117128] = 1;
	v->a[117129] = anon_sym_DOLLAR_LPAREN;
	v->a[117130] = actions(5352);
	v->a[117131] = 1;
	v->a[117132] = anon_sym_BQUOTE;
	v->a[117133] = actions(5354);
	v->a[117134] = 1;
	v->a[117135] = anon_sym_DOLLAR_BQUOTE;
	v->a[117136] = actions(5360);
	v->a[117137] = 1;
	v->a[117138] = sym__brace_start;
	v->a[117139] = actions(6833);
	small_parse_table_5857(v);
}

void	small_parse_table_5857(t_small_parse_table_array *v)
{
	v->a[117140] = 1;
	v->a[117141] = sym_word;
	v->a[117142] = actions(6837);
	v->a[117143] = 1;
	v->a[117144] = sym__special_character;
	v->a[117145] = actions(6841);
	v->a[117146] = 1;
	v->a[117147] = sym__comment_word;
	v->a[117148] = actions(6875);
	v->a[117149] = 1;
	v->a[117150] = anon_sym_DOLLAR;
	v->a[117151] = actions(6839);
	v->a[117152] = 3;
	v->a[117153] = sym_test_operator;
	v->a[117154] = sym__bare_dollar;
	v->a[117155] = sym_raw_string;
	v->a[117156] = state(1070);
	v->a[117157] = 7;
	v->a[117158] = sym_arithmetic_expansion;
	v->a[117159] = sym_brace_expression;
	small_parse_table_5858(v);
}

void	small_parse_table_5858(t_small_parse_table_array *v)
{
	v->a[117160] = sym_string;
	v->a[117161] = sym_number;
	v->a[117162] = sym_simple_expansion;
	v->a[117163] = sym_expansion;
	v->a[117164] = sym_command_substitution;
	v->a[117165] = 16;
	v->a[117166] = actions(3);
	v->a[117167] = 1;
	v->a[117168] = sym_comment;
	v->a[117169] = actions(5334);
	v->a[117170] = 1;
	v->a[117171] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117172] = actions(5340);
	v->a[117173] = 1;
	v->a[117174] = anon_sym_DQUOTE;
	v->a[117175] = actions(5344);
	v->a[117176] = 1;
	v->a[117177] = aux_sym_number_token1;
	v->a[117178] = actions(5346);
	v->a[117179] = 1;
	small_parse_table_5859(v);
}

void	small_parse_table_5859(t_small_parse_table_array *v)
{
	v->a[117180] = aux_sym_number_token2;
	v->a[117181] = actions(5348);
	v->a[117182] = 1;
	v->a[117183] = anon_sym_DOLLAR_LBRACE;
	v->a[117184] = actions(5350);
	v->a[117185] = 1;
	v->a[117186] = anon_sym_DOLLAR_LPAREN;
	v->a[117187] = actions(5352);
	v->a[117188] = 1;
	v->a[117189] = anon_sym_BQUOTE;
	v->a[117190] = actions(5354);
	v->a[117191] = 1;
	v->a[117192] = anon_sym_DOLLAR_BQUOTE;
	v->a[117193] = actions(5360);
	v->a[117194] = 1;
	v->a[117195] = sym__brace_start;
	v->a[117196] = actions(6833);
	v->a[117197] = 1;
	v->a[117198] = sym_word;
	v->a[117199] = actions(6837);
	small_parse_table_5860(v);
}

/* EOF small_parse_table_1171.c */
