/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_554.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2770(t_small_parse_table_array *v)
{
	v->a[55400] = aux_sym_case_statement_repeat1;
	v->a[55401] = state(1923);
	v->a[55402] = 1;
	v->a[55403] = sym_case_item;
	v->a[55404] = state(2141);
	v->a[55405] = 1;
	v->a[55406] = sym__case_item_last;
	v->a[55407] = state(2078);
	v->a[55408] = 2;
	v->a[55409] = sym_concatenation;
	v->a[55410] = sym__extglob_blob;
	v->a[55411] = actions(1875);
	v->a[55412] = 3;
	v->a[55413] = sym_raw_string;
	v->a[55414] = sym_number;
	v->a[55415] = sym_word;
	v->a[55416] = actions(1881);
	v->a[55417] = 4;
	v->a[55418] = anon_sym_SEMI_SEMI;
	v->a[55419] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2771(v);
}

void	small_parse_table_2771(t_small_parse_table_array *v)
{
	v->a[55420] = anon_sym_AMP;
	v->a[55421] = anon_sym_SEMI;
	v->a[55422] = state(2004);
	v->a[55423] = 5;
	v->a[55424] = sym_arithmetic_expansion;
	v->a[55425] = sym_string;
	v->a[55426] = sym_simple_expansion;
	v->a[55427] = sym_expansion;
	v->a[55428] = sym_command_substitution;
	v->a[55429] = 16;
	v->a[55430] = actions(1074);
	v->a[55431] = 1;
	v->a[55432] = sym_comment;
	v->a[55433] = actions(1831);
	v->a[55434] = 1;
	v->a[55435] = anon_sym_LPAREN;
	v->a[55436] = actions(1833);
	v->a[55437] = 1;
	v->a[55438] = anon_sym_BANG;
	v->a[55439] = actions(1841);
	small_parse_table_2772(v);
}

void	small_parse_table_2772(t_small_parse_table_array *v)
{
	v->a[55440] = 1;
	v->a[55441] = anon_sym_TILDE;
	v->a[55442] = actions(1843);
	v->a[55443] = 1;
	v->a[55444] = anon_sym_DOLLAR;
	v->a[55445] = actions(1845);
	v->a[55446] = 1;
	v->a[55447] = anon_sym_DQUOTE;
	v->a[55448] = actions(1849);
	v->a[55449] = 1;
	v->a[55450] = anon_sym_DOLLAR_LBRACE;
	v->a[55451] = actions(1851);
	v->a[55452] = 1;
	v->a[55453] = anon_sym_DOLLAR_LPAREN;
	v->a[55454] = actions(1853);
	v->a[55455] = 1;
	v->a[55456] = anon_sym_BQUOTE;
	v->a[55457] = actions(1855);
	v->a[55458] = 1;
	v->a[55459] = sym_variable_name;
	small_parse_table_2773(v);
}

void	small_parse_table_2773(t_small_parse_table_array *v)
{
	v->a[55460] = actions(1897);
	v->a[55461] = 1;
	v->a[55462] = anon_sym_RPAREN_RPAREN;
	v->a[55463] = actions(1837);
	v->a[55464] = 2;
	v->a[55465] = anon_sym_PLUS_PLUS;
	v->a[55466] = anon_sym_DASH_DASH;
	v->a[55467] = actions(1839);
	v->a[55468] = 2;
	v->a[55469] = anon_sym_DASH2;
	v->a[55470] = anon_sym_PLUS2;
	v->a[55471] = actions(1847);
	v->a[55472] = 2;
	v->a[55473] = sym_number;
	v->a[55474] = aux_sym__simple_variable_name_token1;
	v->a[55475] = state(370);
	v->a[55476] = 3;
	v->a[55477] = sym_string;
	v->a[55478] = sym_simple_expansion;
	v->a[55479] = sym_expansion;
	small_parse_table_2774(v);
}

void	small_parse_table_2774(t_small_parse_table_array *v)
{
	v->a[55480] = state(451);
	v->a[55481] = 8;
	v->a[55482] = sym__arithmetic_expression;
	v->a[55483] = sym_arithmetic_literal;
	v->a[55484] = sym_arithmetic_binary_expression;
	v->a[55485] = sym_arithmetic_ternary_expression;
	v->a[55486] = sym_arithmetic_unary_expression;
	v->a[55487] = sym_arithmetic_postfix_expression;
	v->a[55488] = sym_arithmetic_parenthesized_expression;
	v->a[55489] = sym_command_substitution;
	v->a[55490] = 3;
	v->a[55491] = actions(3);
	v->a[55492] = 1;
	v->a[55493] = sym_comment;
	v->a[55494] = actions(1044);
	v->a[55495] = 2;
	v->a[55496] = sym_file_descriptor;
	v->a[55497] = sym__concat;
	v->a[55498] = actions(1042);
	v->a[55499] = 25;
	small_parse_table_2775(v);
}

/* EOF small_parse_table_554.c */
