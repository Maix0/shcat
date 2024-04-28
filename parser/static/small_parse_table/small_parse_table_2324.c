/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2324.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11620(t_small_parse_table_array *v)
{
	v->a[232400] = 1;
	v->a[232401] = aux_sym_number_token2;
	v->a[232402] = actions(4092);
	v->a[232403] = 1;
	v->a[232404] = anon_sym_DOLLAR_LPAREN;
	v->a[232405] = actions(4102);
	v->a[232406] = 1;
	v->a[232407] = sym__brace_start;
	v->a[232408] = actions(9310);
	v->a[232409] = 1;
	v->a[232410] = anon_sym_DOLLAR_LBRACK;
	v->a[232411] = actions(9316);
	v->a[232412] = 1;
	v->a[232413] = anon_sym_DQUOTE;
	v->a[232414] = actions(9320);
	v->a[232415] = 1;
	v->a[232416] = anon_sym_DOLLAR_LBRACE;
	v->a[232417] = actions(9322);
	v->a[232418] = 1;
	v->a[232419] = anon_sym_BQUOTE;
	small_parse_table_11621(v);
}

void	small_parse_table_11621(t_small_parse_table_array *v)
{
	v->a[232420] = actions(9324);
	v->a[232421] = 1;
	v->a[232422] = anon_sym_DOLLAR_BQUOTE;
	v->a[232423] = actions(10990);
	v->a[232424] = 1;
	v->a[232425] = sym_word;
	v->a[232426] = actions(10992);
	v->a[232427] = 1;
	v->a[232428] = sym__special_character;
	v->a[232429] = actions(10996);
	v->a[232430] = 1;
	v->a[232431] = sym_test_operator;
	v->a[232432] = state(4500);
	v->a[232433] = 1;
	v->a[232434] = aux_sym__literal_repeat1;
	v->a[232435] = state(5029);
	v->a[232436] = 1;
	v->a[232437] = sym_concatenation;
	v->a[232438] = actions(9308);
	v->a[232439] = 2;
	small_parse_table_11622(v);
}

void	small_parse_table_11622(t_small_parse_table_array *v)
{
	v->a[232440] = anon_sym_LPAREN_LPAREN;
	v->a[232441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[232442] = actions(9326);
	v->a[232443] = 2;
	v->a[232444] = anon_sym_LT_LPAREN;
	v->a[232445] = anon_sym_GT_LPAREN;
	v->a[232446] = actions(10994);
	v->a[232447] = 2;
	v->a[232448] = sym_raw_string;
	v->a[232449] = sym_ansi_c_string;
	v->a[232450] = state(4992);
	v->a[232451] = 9;
	v->a[232452] = sym_arithmetic_expansion;
	v->a[232453] = sym_brace_expression;
	v->a[232454] = sym_string;
	v->a[232455] = sym_translated_string;
	v->a[232456] = sym_number;
	v->a[232457] = sym_simple_expansion;
	v->a[232458] = sym_expansion;
	v->a[232459] = sym_command_substitution;
	small_parse_table_11623(v);
}

void	small_parse_table_11623(t_small_parse_table_array *v)
{
	v->a[232460] = sym_process_substitution;
	v->a[232461] = 20;
	v->a[232462] = actions(71);
	v->a[232463] = 1;
	v->a[232464] = sym_comment;
	v->a[232465] = actions(4080);
	v->a[232466] = 1;
	v->a[232467] = anon_sym_DOLLAR;
	v->a[232468] = actions(4086);
	v->a[232469] = 1;
	v->a[232470] = aux_sym_number_token1;
	v->a[232471] = actions(4088);
	v->a[232472] = 1;
	v->a[232473] = aux_sym_number_token2;
	v->a[232474] = actions(4092);
	v->a[232475] = 1;
	v->a[232476] = anon_sym_DOLLAR_LPAREN;
	v->a[232477] = actions(4102);
	v->a[232478] = 1;
	v->a[232479] = sym__brace_start;
	small_parse_table_11624(v);
}

void	small_parse_table_11624(t_small_parse_table_array *v)
{
	v->a[232480] = actions(9310);
	v->a[232481] = 1;
	v->a[232482] = anon_sym_DOLLAR_LBRACK;
	v->a[232483] = actions(9316);
	v->a[232484] = 1;
	v->a[232485] = anon_sym_DQUOTE;
	v->a[232486] = actions(9320);
	v->a[232487] = 1;
	v->a[232488] = anon_sym_DOLLAR_LBRACE;
	v->a[232489] = actions(9322);
	v->a[232490] = 1;
	v->a[232491] = anon_sym_BQUOTE;
	v->a[232492] = actions(9324);
	v->a[232493] = 1;
	v->a[232494] = anon_sym_DOLLAR_BQUOTE;
	v->a[232495] = actions(10992);
	v->a[232496] = 1;
	v->a[232497] = sym__special_character;
	v->a[232498] = actions(10998);
	v->a[232499] = 1;
	small_parse_table_11625(v);
}

/* EOF small_parse_table_2324.c */
