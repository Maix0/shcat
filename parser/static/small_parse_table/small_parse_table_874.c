/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_874.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4370(t_small_parse_table_array *v)
{
	v->a[87400] = anon_sym_DOLLAR_BQUOTE;
	v->a[87401] = actions(4849);
	v->a[87402] = 1;
	v->a[87403] = aux_sym__simple_variable_name_token1;
	v->a[87404] = actions(4851);
	v->a[87405] = 1;
	v->a[87406] = sym_variable_name;
	v->a[87407] = state(1476);
	v->a[87408] = 1;
	v->a[87409] = sym__arithmetic_postfix_expression;
	v->a[87410] = state(1478);
	v->a[87411] = 1;
	v->a[87412] = sym__arithmetic_unary_expression;
	v->a[87413] = state(1490);
	v->a[87414] = 1;
	v->a[87415] = sym__arithmetic_ternary_expression;
	v->a[87416] = state(1511);
	v->a[87417] = 1;
	v->a[87418] = sym__arithmetic_binary_expression;
	v->a[87419] = actions(4588);
	small_parse_table_4371(v);
}

void	small_parse_table_4371(t_small_parse_table_array *v)
{
	v->a[87420] = 2;
	v->a[87421] = anon_sym_PLUS_PLUS;
	v->a[87422] = anon_sym_DASH_DASH;
	v->a[87423] = actions(4590);
	v->a[87424] = 2;
	v->a[87425] = anon_sym_DASH2;
	v->a[87426] = anon_sym_PLUS2;
	v->a[87427] = state(1480);
	v->a[87428] = 8;
	v->a[87429] = sym__arithmetic_expression;
	v->a[87430] = sym__arithmetic_literal;
	v->a[87431] = sym__arithmetic_parenthesized_expression;
	v->a[87432] = sym_string;
	v->a[87433] = sym_number;
	v->a[87434] = sym_simple_expansion;
	v->a[87435] = sym_expansion;
	v->a[87436] = sym_command_substitution;
	v->a[87437] = 21;
	v->a[87438] = actions(57);
	v->a[87439] = 1;
	small_parse_table_4372(v);
}

void	small_parse_table_4372(t_small_parse_table_array *v)
{
	v->a[87440] = sym_comment;
	v->a[87441] = actions(4584);
	v->a[87442] = 1;
	v->a[87443] = anon_sym_LPAREN;
	v->a[87444] = actions(4586);
	v->a[87445] = 1;
	v->a[87446] = anon_sym_BANG;
	v->a[87447] = actions(4592);
	v->a[87448] = 1;
	v->a[87449] = anon_sym_TILDE;
	v->a[87450] = actions(4594);
	v->a[87451] = 1;
	v->a[87452] = anon_sym_DOLLAR;
	v->a[87453] = actions(4596);
	v->a[87454] = 1;
	v->a[87455] = anon_sym_DQUOTE;
	v->a[87456] = actions(4598);
	v->a[87457] = 1;
	v->a[87458] = aux_sym_number_token1;
	v->a[87459] = actions(4600);
	small_parse_table_4373(v);
}

void	small_parse_table_4373(t_small_parse_table_array *v)
{
	v->a[87460] = 1;
	v->a[87461] = aux_sym_number_token2;
	v->a[87462] = actions(4602);
	v->a[87463] = 1;
	v->a[87464] = anon_sym_DOLLAR_LBRACE;
	v->a[87465] = actions(4604);
	v->a[87466] = 1;
	v->a[87467] = anon_sym_DOLLAR_LPAREN;
	v->a[87468] = actions(4606);
	v->a[87469] = 1;
	v->a[87470] = anon_sym_BQUOTE;
	v->a[87471] = actions(4608);
	v->a[87472] = 1;
	v->a[87473] = anon_sym_DOLLAR_BQUOTE;
	v->a[87474] = actions(4853);
	v->a[87475] = 1;
	v->a[87476] = aux_sym__simple_variable_name_token1;
	v->a[87477] = actions(4855);
	v->a[87478] = 1;
	v->a[87479] = sym_variable_name;
	small_parse_table_4374(v);
}

void	small_parse_table_4374(t_small_parse_table_array *v)
{
	v->a[87480] = state(1476);
	v->a[87481] = 1;
	v->a[87482] = sym__arithmetic_postfix_expression;
	v->a[87483] = state(1478);
	v->a[87484] = 1;
	v->a[87485] = sym__arithmetic_unary_expression;
	v->a[87486] = state(1490);
	v->a[87487] = 1;
	v->a[87488] = sym__arithmetic_ternary_expression;
	v->a[87489] = state(1511);
	v->a[87490] = 1;
	v->a[87491] = sym__arithmetic_binary_expression;
	v->a[87492] = actions(4588);
	v->a[87493] = 2;
	v->a[87494] = anon_sym_PLUS_PLUS;
	v->a[87495] = anon_sym_DASH_DASH;
	v->a[87496] = actions(4590);
	v->a[87497] = 2;
	v->a[87498] = anon_sym_DASH2;
	v->a[87499] = anon_sym_PLUS2;
	small_parse_table_4375(v);
}

/* EOF small_parse_table_874.c */
