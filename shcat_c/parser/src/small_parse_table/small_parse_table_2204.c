/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2204.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11020(t_small_parse_table_array *v)
{
	v->a[220400] = sym_comment;
	v->a[220401] = actions(8512);
	v->a[220402] = 1;
	v->a[220403] = anon_sym_DOLLAR_LBRACK;
	v->a[220404] = actions(8518);
	v->a[220405] = 1;
	v->a[220406] = anon_sym_DQUOTE;
	v->a[220407] = actions(8522);
	v->a[220408] = 1;
	v->a[220409] = aux_sym_number_token1;
	v->a[220410] = actions(8524);
	v->a[220411] = 1;
	v->a[220412] = aux_sym_number_token2;
	v->a[220413] = actions(8526);
	v->a[220414] = 1;
	v->a[220415] = anon_sym_DOLLAR_LBRACE;
	v->a[220416] = actions(8528);
	v->a[220417] = 1;
	v->a[220418] = anon_sym_DOLLAR_LPAREN;
	v->a[220419] = actions(8530);
	small_parse_table_11021(v);
}

void	small_parse_table_11021(t_small_parse_table_array *v)
{
	v->a[220420] = 1;
	v->a[220421] = anon_sym_BQUOTE;
	v->a[220422] = actions(8532);
	v->a[220423] = 1;
	v->a[220424] = anon_sym_DOLLAR_BQUOTE;
	v->a[220425] = actions(8542);
	v->a[220426] = 1;
	v->a[220427] = sym__brace_start;
	v->a[220428] = actions(10220);
	v->a[220429] = 1;
	v->a[220430] = sym_word;
	v->a[220431] = actions(10226);
	v->a[220432] = 1;
	v->a[220433] = sym__comment_word;
	v->a[220434] = actions(10538);
	v->a[220435] = 1;
	v->a[220436] = anon_sym_DOLLAR;
	v->a[220437] = actions(8508);
	v->a[220438] = 2;
	v->a[220439] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11022(v);
}

void	small_parse_table_11022(t_small_parse_table_array *v)
{
	v->a[220440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220441] = actions(8534);
	v->a[220442] = 2;
	v->a[220443] = anon_sym_LT_LPAREN;
	v->a[220444] = anon_sym_GT_LPAREN;
	v->a[220445] = actions(10222);
	v->a[220446] = 2;
	v->a[220447] = sym_test_operator;
	v->a[220448] = sym__special_character;
	v->a[220449] = actions(10224);
	v->a[220450] = 3;
	v->a[220451] = sym__bare_dollar;
	v->a[220452] = sym_raw_string;
	v->a[220453] = sym_ansi_c_string;
	v->a[220454] = state(2514);
	v->a[220455] = 9;
	v->a[220456] = sym_arithmetic_expansion;
	v->a[220457] = sym_brace_expression;
	v->a[220458] = sym_string;
	v->a[220459] = sym_translated_string;
	small_parse_table_11023(v);
}

void	small_parse_table_11023(t_small_parse_table_array *v)
{
	v->a[220460] = sym_number;
	v->a[220461] = sym_simple_expansion;
	v->a[220462] = sym_expansion;
	v->a[220463] = sym_command_substitution;
	v->a[220464] = sym_process_substitution;
	v->a[220465] = 18;
	v->a[220466] = actions(3);
	v->a[220467] = 1;
	v->a[220468] = sym_comment;
	v->a[220469] = actions(3675);
	v->a[220470] = 1;
	v->a[220471] = anon_sym_DOLLAR;
	v->a[220472] = actions(3681);
	v->a[220473] = 1;
	v->a[220474] = aux_sym_number_token1;
	v->a[220475] = actions(3683);
	v->a[220476] = 1;
	v->a[220477] = aux_sym_number_token2;
	v->a[220478] = actions(3687);
	v->a[220479] = 1;
	small_parse_table_11024(v);
}

void	small_parse_table_11024(t_small_parse_table_array *v)
{
	v->a[220480] = anon_sym_DOLLAR_LPAREN;
	v->a[220481] = actions(3697);
	v->a[220482] = 1;
	v->a[220483] = sym__brace_start;
	v->a[220484] = actions(10062);
	v->a[220485] = 1;
	v->a[220486] = anon_sym_DOLLAR_LBRACK;
	v->a[220487] = actions(10066);
	v->a[220488] = 1;
	v->a[220489] = anon_sym_DQUOTE;
	v->a[220490] = actions(10070);
	v->a[220491] = 1;
	v->a[220492] = anon_sym_DOLLAR_LBRACE;
	v->a[220493] = actions(10072);
	v->a[220494] = 1;
	v->a[220495] = anon_sym_BQUOTE;
	v->a[220496] = actions(10074);
	v->a[220497] = 1;
	v->a[220498] = anon_sym_DOLLAR_BQUOTE;
	v->a[220499] = actions(10540);
	small_parse_table_11025(v);
}

/* EOF small_parse_table_2204.c */
