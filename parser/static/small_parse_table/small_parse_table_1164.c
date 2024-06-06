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
	v->a[116400] = aux_sym_number_token2;
	v->a[116401] = actions(101);
	v->a[116402] = 1;
	v->a[116403] = anon_sym_DOLLAR_LBRACE;
	v->a[116404] = actions(103);
	v->a[116405] = 1;
	v->a[116406] = anon_sym_DOLLAR_LPAREN;
	v->a[116407] = actions(105);
	v->a[116408] = 1;
	v->a[116409] = anon_sym_BQUOTE;
	v->a[116410] = actions(107);
	v->a[116411] = 1;
	v->a[116412] = anon_sym_DOLLAR_BQUOTE;
	v->a[116413] = actions(113);
	v->a[116414] = 1;
	v->a[116415] = sym__brace_start;
	v->a[116416] = actions(6845);
	v->a[116417] = 1;
	v->a[116418] = sym_word;
	v->a[116419] = actions(6847);
	small_parse_table_5821(v);
}

void	small_parse_table_5821(t_small_parse_table_array *v)
{
	v->a[116420] = 1;
	v->a[116421] = anon_sym_DOLLAR;
	v->a[116422] = actions(6849);
	v->a[116423] = 1;
	v->a[116424] = sym__special_character;
	v->a[116425] = actions(6853);
	v->a[116426] = 1;
	v->a[116427] = sym__comment_word;
	v->a[116428] = actions(6851);
	v->a[116429] = 3;
	v->a[116430] = sym_test_operator;
	v->a[116431] = sym__bare_dollar;
	v->a[116432] = sym_raw_string;
	v->a[116433] = state(853);
	v->a[116434] = 7;
	v->a[116435] = sym_arithmetic_expansion;
	v->a[116436] = sym_brace_expression;
	v->a[116437] = sym_string;
	v->a[116438] = sym_number;
	v->a[116439] = sym_simple_expansion;
	small_parse_table_5822(v);
}

void	small_parse_table_5822(t_small_parse_table_array *v)
{
	v->a[116440] = sym_expansion;
	v->a[116441] = sym_command_substitution;
	v->a[116442] = 16;
	v->a[116443] = actions(3);
	v->a[116444] = 1;
	v->a[116445] = sym_comment;
	v->a[116446] = actions(87);
	v->a[116447] = 1;
	v->a[116448] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116449] = actions(93);
	v->a[116450] = 1;
	v->a[116451] = anon_sym_DQUOTE;
	v->a[116452] = actions(97);
	v->a[116453] = 1;
	v->a[116454] = aux_sym_number_token1;
	v->a[116455] = actions(99);
	v->a[116456] = 1;
	v->a[116457] = aux_sym_number_token2;
	v->a[116458] = actions(101);
	v->a[116459] = 1;
	small_parse_table_5823(v);
}

void	small_parse_table_5823(t_small_parse_table_array *v)
{
	v->a[116460] = anon_sym_DOLLAR_LBRACE;
	v->a[116461] = actions(103);
	v->a[116462] = 1;
	v->a[116463] = anon_sym_DOLLAR_LPAREN;
	v->a[116464] = actions(105);
	v->a[116465] = 1;
	v->a[116466] = anon_sym_BQUOTE;
	v->a[116467] = actions(107);
	v->a[116468] = 1;
	v->a[116469] = anon_sym_DOLLAR_BQUOTE;
	v->a[116470] = actions(113);
	v->a[116471] = 1;
	v->a[116472] = sym__brace_start;
	v->a[116473] = actions(6845);
	v->a[116474] = 1;
	v->a[116475] = sym_word;
	v->a[116476] = actions(6849);
	v->a[116477] = 1;
	v->a[116478] = sym__special_character;
	v->a[116479] = actions(6853);
	small_parse_table_5824(v);
}

void	small_parse_table_5824(t_small_parse_table_array *v)
{
	v->a[116480] = 1;
	v->a[116481] = sym__comment_word;
	v->a[116482] = actions(6855);
	v->a[116483] = 1;
	v->a[116484] = anon_sym_DOLLAR;
	v->a[116485] = actions(6851);
	v->a[116486] = 3;
	v->a[116487] = sym_test_operator;
	v->a[116488] = sym__bare_dollar;
	v->a[116489] = sym_raw_string;
	v->a[116490] = state(853);
	v->a[116491] = 7;
	v->a[116492] = sym_arithmetic_expansion;
	v->a[116493] = sym_brace_expression;
	v->a[116494] = sym_string;
	v->a[116495] = sym_number;
	v->a[116496] = sym_simple_expansion;
	v->a[116497] = sym_expansion;
	v->a[116498] = sym_command_substitution;
	v->a[116499] = 16;
	small_parse_table_5825(v);
}

/* EOF small_parse_table_1164.c */
