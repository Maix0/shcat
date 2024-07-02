/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_476.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2380(t_small_parse_table_array *v)
{
	v->a[47600] = anon_sym_GT_AMP;
	v->a[47601] = anon_sym_GT_PIPE;
	v->a[47602] = anon_sym_LT_GT;
	v->a[47603] = anon_sym_LT_LT;
	v->a[47604] = anon_sym_LT_LT_DASH;
	v->a[47605] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47606] = aux_sym_concatenation_token1;
	v->a[47607] = anon_sym_DOLLAR;
	v->a[47608] = anon_sym_DQUOTE;
	v->a[47609] = sym_raw_string;
	v->a[47610] = sym_number;
	v->a[47611] = anon_sym_DOLLAR_LBRACE;
	v->a[47612] = anon_sym_DOLLAR_LPAREN;
	v->a[47613] = anon_sym_BQUOTE;
	v->a[47614] = sym_word;
	v->a[47615] = 15;
	v->a[47616] = actions(680);
	v->a[47617] = 1;
	v->a[47618] = sym_comment;
	v->a[47619] = actions(1574);
	small_parse_table_2381(v);
}

void	small_parse_table_2381(t_small_parse_table_array *v)
{
	v->a[47620] = 1;
	v->a[47621] = anon_sym_LPAREN;
	v->a[47622] = actions(1576);
	v->a[47623] = 1;
	v->a[47624] = anon_sym_BANG;
	v->a[47625] = actions(1584);
	v->a[47626] = 1;
	v->a[47627] = anon_sym_TILDE;
	v->a[47628] = actions(1586);
	v->a[47629] = 1;
	v->a[47630] = anon_sym_DOLLAR;
	v->a[47631] = actions(1588);
	v->a[47632] = 1;
	v->a[47633] = anon_sym_DQUOTE;
	v->a[47634] = actions(1592);
	v->a[47635] = 1;
	v->a[47636] = anon_sym_DOLLAR_LBRACE;
	v->a[47637] = actions(1594);
	v->a[47638] = 1;
	v->a[47639] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2382(v);
}

void	small_parse_table_2382(t_small_parse_table_array *v)
{
	v->a[47640] = actions(1596);
	v->a[47641] = 1;
	v->a[47642] = anon_sym_BQUOTE;
	v->a[47643] = actions(1598);
	v->a[47644] = 1;
	v->a[47645] = sym_variable_name;
	v->a[47646] = actions(1580);
	v->a[47647] = 2;
	v->a[47648] = anon_sym_PLUS_PLUS;
	v->a[47649] = anon_sym_DASH_DASH;
	v->a[47650] = actions(1582);
	v->a[47651] = 2;
	v->a[47652] = anon_sym_DASH2;
	v->a[47653] = anon_sym_PLUS2;
	v->a[47654] = actions(1590);
	v->a[47655] = 2;
	v->a[47656] = sym_number;
	v->a[47657] = aux_sym__simple_variable_name_token1;
	v->a[47658] = state(238);
	v->a[47659] = 3;
	small_parse_table_2383(v);
}

void	small_parse_table_2383(t_small_parse_table_array *v)
{
	v->a[47660] = sym_string;
	v->a[47661] = sym_simple_expansion;
	v->a[47662] = sym_expansion;
	v->a[47663] = state(223);
	v->a[47664] = 8;
	v->a[47665] = sym__arithmetic_expression;
	v->a[47666] = sym_arithmetic_literal;
	v->a[47667] = sym_arithmetic_binary_expression;
	v->a[47668] = sym_arithmetic_ternary_expression;
	v->a[47669] = sym_arithmetic_unary_expression;
	v->a[47670] = sym_arithmetic_postfix_expression;
	v->a[47671] = sym_arithmetic_parenthesized_expression;
	v->a[47672] = sym_command_substitution;
	v->a[47673] = 6;
	v->a[47674] = actions(3);
	v->a[47675] = 1;
	v->a[47676] = sym_comment;
	v->a[47677] = actions(1724);
	v->a[47678] = 1;
	v->a[47679] = aux_sym_concatenation_token1;
	small_parse_table_2384(v);
}

void	small_parse_table_2384(t_small_parse_table_array *v)
{
	v->a[47680] = actions(1727);
	v->a[47681] = 1;
	v->a[47682] = sym__concat;
	v->a[47683] = state(778);
	v->a[47684] = 1;
	v->a[47685] = aux_sym_concatenation_repeat1;
	v->a[47686] = actions(1092);
	v->a[47687] = 2;
	v->a[47688] = sym_file_descriptor;
	v->a[47689] = sym_variable_name;
	v->a[47690] = actions(1094);
	v->a[47691] = 21;
	v->a[47692] = anon_sym_PIPE;
	v->a[47693] = anon_sym_AMP_AMP;
	v->a[47694] = anon_sym_PIPE_PIPE;
	v->a[47695] = anon_sym_LT;
	v->a[47696] = anon_sym_GT;
	v->a[47697] = anon_sym_GT_GT;
	v->a[47698] = anon_sym_LT_AMP;
	v->a[47699] = anon_sym_GT_AMP;
	small_parse_table_2385(v);
}

/* EOF small_parse_table_476.c */
