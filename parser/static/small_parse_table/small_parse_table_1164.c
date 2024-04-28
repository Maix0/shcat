/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1164.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5820(t_small_parse_table_array *v)
{
	v->a[116400] = anon_sym_DOLLAR_LPAREN;
	v->a[116401] = actions(282);
	v->a[116402] = 1;
	v->a[116403] = sym_test_operator;
	v->a[116404] = actions(284);
	v->a[116405] = 1;
	v->a[116406] = sym__brace_start;
	v->a[116407] = actions(1075);
	v->a[116408] = 1;
	v->a[116409] = anon_sym_DOLLAR_LBRACK;
	v->a[116410] = actions(1079);
	v->a[116411] = 1;
	v->a[116412] = sym__special_character;
	v->a[116413] = actions(1081);
	v->a[116414] = 1;
	v->a[116415] = anon_sym_DQUOTE;
	v->a[116416] = actions(1085);
	v->a[116417] = 1;
	v->a[116418] = anon_sym_DOLLAR_LBRACE;
	v->a[116419] = actions(1087);
	small_parse_table_5821(v);
}

void	small_parse_table_5821(t_small_parse_table_array *v)
{
	v->a[116420] = 1;
	v->a[116421] = anon_sym_DOLLAR_BQUOTE;
	v->a[116422] = actions(3598);
	v->a[116423] = 1;
	v->a[116424] = anon_sym_BQUOTE;
	v->a[116425] = state(2690);
	v->a[116426] = 1;
	v->a[116427] = aux_sym__literal_repeat1;
	v->a[116428] = state(3083);
	v->a[116429] = 1;
	v->a[116430] = sym__expression;
	v->a[116431] = actions(103);
	v->a[116432] = 2;
	v->a[116433] = anon_sym_PLUS_PLUS2;
	v->a[116434] = anon_sym_DASH_DASH2;
	v->a[116435] = actions(105);
	v->a[116436] = 2;
	v->a[116437] = anon_sym_DASH2;
	v->a[116438] = anon_sym_PLUS2;
	v->a[116439] = actions(1073);
	small_parse_table_5822(v);
}

void	small_parse_table_5822(t_small_parse_table_array *v)
{
	v->a[116440] = 2;
	v->a[116441] = anon_sym_LPAREN_LPAREN;
	v->a[116442] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116443] = actions(1083);
	v->a[116444] = 2;
	v->a[116445] = sym_raw_string;
	v->a[116446] = sym_ansi_c_string;
	v->a[116447] = actions(1089);
	v->a[116448] = 2;
	v->a[116449] = anon_sym_LT_LPAREN;
	v->a[116450] = anon_sym_GT_LPAREN;
	v->a[116451] = state(3053);
	v->a[116452] = 6;
	v->a[116453] = sym_binary_expression;
	v->a[116454] = sym_ternary_expression;
	v->a[116455] = sym_unary_expression;
	v->a[116456] = sym_postfix_expression;
	v->a[116457] = sym_parenthesized_expression;
	v->a[116458] = sym_concatenation;
	v->a[116459] = state(2500);
	small_parse_table_5823(v);
}

void	small_parse_table_5823(t_small_parse_table_array *v)
{
	v->a[116460] = 9;
	v->a[116461] = sym_arithmetic_expansion;
	v->a[116462] = sym_brace_expression;
	v->a[116463] = sym_string;
	v->a[116464] = sym_translated_string;
	v->a[116465] = sym_number;
	v->a[116466] = sym_simple_expansion;
	v->a[116467] = sym_expansion;
	v->a[116468] = sym_command_substitution;
	v->a[116469] = sym_process_substitution;
	v->a[116470] = 27;
	v->a[116471] = actions(71);
	v->a[116472] = 1;
	v->a[116473] = sym_comment;
	v->a[116474] = actions(363);
	v->a[116475] = 1;
	v->a[116476] = anon_sym_DOLLAR_LBRACK;
	v->a[116477] = actions(367);
	v->a[116478] = 1;
	v->a[116479] = anon_sym_DOLLAR;
	small_parse_table_5824(v);
}

void	small_parse_table_5824(t_small_parse_table_array *v)
{
	v->a[116480] = actions(371);
	v->a[116481] = 1;
	v->a[116482] = anon_sym_DQUOTE;
	v->a[116483] = actions(375);
	v->a[116484] = 1;
	v->a[116485] = aux_sym_number_token1;
	v->a[116486] = actions(377);
	v->a[116487] = 1;
	v->a[116488] = aux_sym_number_token2;
	v->a[116489] = actions(379);
	v->a[116490] = 1;
	v->a[116491] = anon_sym_DOLLAR_LBRACE;
	v->a[116492] = actions(381);
	v->a[116493] = 1;
	v->a[116494] = anon_sym_DOLLAR_LPAREN;
	v->a[116495] = actions(385);
	v->a[116496] = 1;
	v->a[116497] = anon_sym_DOLLAR_BQUOTE;
	v->a[116498] = actions(391);
	v->a[116499] = 1;
	small_parse_table_5825(v);
}

/* EOF small_parse_table_1164.c */
