/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1984.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9920(t_small_parse_table_array *v)
{
	v->a[198400] = 1;
	v->a[198401] = aux_sym__literal_repeat1;
	v->a[198402] = actions(8174);
	v->a[198403] = 2;
	v->a[198404] = anon_sym_LPAREN_LPAREN;
	v->a[198405] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198406] = actions(8200);
	v->a[198407] = 2;
	v->a[198408] = anon_sym_LT_LPAREN;
	v->a[198409] = anon_sym_GT_LPAREN;
	v->a[198410] = actions(8980);
	v->a[198411] = 2;
	v->a[198412] = sym_raw_string;
	v->a[198413] = sym_ansi_c_string;
	v->a[198414] = state(646);
	v->a[198415] = 2;
	v->a[198416] = sym_concatenation;
	v->a[198417] = aux_sym_for_statement_repeat1;
	v->a[198418] = state(1370);
	v->a[198419] = 9;
	small_parse_table_9921(v);
}

void	small_parse_table_9921(t_small_parse_table_array *v)
{
	v->a[198420] = sym_arithmetic_expansion;
	v->a[198421] = sym_brace_expression;
	v->a[198422] = sym_string;
	v->a[198423] = sym_translated_string;
	v->a[198424] = sym_number;
	v->a[198425] = sym_simple_expansion;
	v->a[198426] = sym_expansion;
	v->a[198427] = sym_command_substitution;
	v->a[198428] = sym_process_substitution;
	v->a[198429] = 20;
	v->a[198430] = actions(71);
	v->a[198431] = 1;
	v->a[198432] = sym_comment;
	v->a[198433] = actions(2598);
	v->a[198434] = 1;
	v->a[198435] = sym_word;
	v->a[198436] = actions(2604);
	v->a[198437] = 1;
	v->a[198438] = anon_sym_DOLLAR;
	v->a[198439] = actions(2610);
	small_parse_table_9922(v);
}

void	small_parse_table_9922(t_small_parse_table_array *v)
{
	v->a[198440] = 1;
	v->a[198441] = aux_sym_number_token1;
	v->a[198442] = actions(2612);
	v->a[198443] = 1;
	v->a[198444] = aux_sym_number_token2;
	v->a[198445] = actions(2616);
	v->a[198446] = 1;
	v->a[198447] = anon_sym_DOLLAR_LPAREN;
	v->a[198448] = actions(2624);
	v->a[198449] = 1;
	v->a[198450] = sym_test_operator;
	v->a[198451] = actions(2626);
	v->a[198452] = 1;
	v->a[198453] = sym__brace_start;
	v->a[198454] = actions(8962);
	v->a[198455] = 1;
	v->a[198456] = anon_sym_DOLLAR_LBRACK;
	v->a[198457] = actions(8964);
	v->a[198458] = 1;
	v->a[198459] = sym__special_character;
	small_parse_table_9923(v);
}

void	small_parse_table_9923(t_small_parse_table_array *v)
{
	v->a[198460] = actions(8966);
	v->a[198461] = 1;
	v->a[198462] = anon_sym_DQUOTE;
	v->a[198463] = actions(8970);
	v->a[198464] = 1;
	v->a[198465] = anon_sym_DOLLAR_LBRACE;
	v->a[198466] = actions(8972);
	v->a[198467] = 1;
	v->a[198468] = anon_sym_BQUOTE;
	v->a[198469] = actions(8974);
	v->a[198470] = 1;
	v->a[198471] = anon_sym_DOLLAR_BQUOTE;
	v->a[198472] = state(1803);
	v->a[198473] = 1;
	v->a[198474] = aux_sym__literal_repeat1;
	v->a[198475] = actions(8960);
	v->a[198476] = 2;
	v->a[198477] = anon_sym_LPAREN_LPAREN;
	v->a[198478] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198479] = actions(8968);
	small_parse_table_9924(v);
}

void	small_parse_table_9924(t_small_parse_table_array *v)
{
	v->a[198480] = 2;
	v->a[198481] = sym_raw_string;
	v->a[198482] = sym_ansi_c_string;
	v->a[198483] = actions(8976);
	v->a[198484] = 2;
	v->a[198485] = anon_sym_LT_LPAREN;
	v->a[198486] = anon_sym_GT_LPAREN;
	v->a[198487] = state(616);
	v->a[198488] = 2;
	v->a[198489] = sym_concatenation;
	v->a[198490] = aux_sym_for_statement_repeat1;
	v->a[198491] = state(1381);
	v->a[198492] = 9;
	v->a[198493] = sym_arithmetic_expansion;
	v->a[198494] = sym_brace_expression;
	v->a[198495] = sym_string;
	v->a[198496] = sym_translated_string;
	v->a[198497] = sym_number;
	v->a[198498] = sym_simple_expansion;
	v->a[198499] = sym_expansion;
	small_parse_table_9925(v);
}

/* EOF small_parse_table_1984.c */
