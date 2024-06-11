/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_626.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3130(t_small_parse_table_array *v)
{
	v->a[62600] = 3;
	v->a[62601] = sym_string;
	v->a[62602] = sym_simple_expansion;
	v->a[62603] = sym_expansion;
	v->a[62604] = state(536);
	v->a[62605] = 8;
	v->a[62606] = sym__arithmetic_expression;
	v->a[62607] = sym_arithmetic_literal;
	v->a[62608] = sym_arithmetic_binary_expression;
	v->a[62609] = sym_arithmetic_ternary_expression;
	v->a[62610] = sym_arithmetic_unary_expression;
	v->a[62611] = sym_arithmetic_postfix_expression;
	v->a[62612] = sym_arithmetic_parenthesized_expression;
	v->a[62613] = sym_command_substitution;
	v->a[62614] = 16;
	v->a[62615] = actions(1094);
	v->a[62616] = 1;
	v->a[62617] = sym_comment;
	v->a[62618] = actions(1869);
	v->a[62619] = 1;
	small_parse_table_3131(v);
}

void	small_parse_table_3131(t_small_parse_table_array *v)
{
	v->a[62620] = anon_sym_LPAREN;
	v->a[62621] = actions(1871);
	v->a[62622] = 1;
	v->a[62623] = anon_sym_BANG;
	v->a[62624] = actions(1879);
	v->a[62625] = 1;
	v->a[62626] = anon_sym_TILDE;
	v->a[62627] = actions(1881);
	v->a[62628] = 1;
	v->a[62629] = anon_sym_DOLLAR;
	v->a[62630] = actions(1883);
	v->a[62631] = 1;
	v->a[62632] = anon_sym_DQUOTE;
	v->a[62633] = actions(1887);
	v->a[62634] = 1;
	v->a[62635] = anon_sym_DOLLAR_LBRACE;
	v->a[62636] = actions(1889);
	v->a[62637] = 1;
	v->a[62638] = anon_sym_DOLLAR_LPAREN;
	v->a[62639] = actions(1891);
	small_parse_table_3132(v);
}

void	small_parse_table_3132(t_small_parse_table_array *v)
{
	v->a[62640] = 1;
	v->a[62641] = anon_sym_BQUOTE;
	v->a[62642] = actions(1893);
	v->a[62643] = 1;
	v->a[62644] = sym_variable_name;
	v->a[62645] = actions(1941);
	v->a[62646] = 1;
	v->a[62647] = anon_sym_RPAREN_RPAREN;
	v->a[62648] = actions(1875);
	v->a[62649] = 2;
	v->a[62650] = anon_sym_PLUS_PLUS;
	v->a[62651] = anon_sym_DASH_DASH;
	v->a[62652] = actions(1877);
	v->a[62653] = 2;
	v->a[62654] = anon_sym_DASH2;
	v->a[62655] = anon_sym_PLUS2;
	v->a[62656] = actions(1885);
	v->a[62657] = 2;
	v->a[62658] = sym_number;
	v->a[62659] = aux_sym__simple_variable_name_token1;
	small_parse_table_3133(v);
}

void	small_parse_table_3133(t_small_parse_table_array *v)
{
	v->a[62660] = state(365);
	v->a[62661] = 3;
	v->a[62662] = sym_string;
	v->a[62663] = sym_simple_expansion;
	v->a[62664] = sym_expansion;
	v->a[62665] = state(540);
	v->a[62666] = 8;
	v->a[62667] = sym__arithmetic_expression;
	v->a[62668] = sym_arithmetic_literal;
	v->a[62669] = sym_arithmetic_binary_expression;
	v->a[62670] = sym_arithmetic_ternary_expression;
	v->a[62671] = sym_arithmetic_unary_expression;
	v->a[62672] = sym_arithmetic_postfix_expression;
	v->a[62673] = sym_arithmetic_parenthesized_expression;
	v->a[62674] = sym_command_substitution;
	v->a[62675] = 3;
	v->a[62676] = actions(3);
	v->a[62677] = 1;
	v->a[62678] = sym_comment;
	v->a[62679] = actions(991);
	small_parse_table_3134(v);
}

void	small_parse_table_3134(t_small_parse_table_array *v)
{
	v->a[62680] = 2;
	v->a[62681] = sym_file_descriptor;
	v->a[62682] = sym__bare_dollar;
	v->a[62683] = actions(984);
	v->a[62684] = 25;
	v->a[62685] = anon_sym_LPAREN;
	v->a[62686] = anon_sym_PIPE;
	v->a[62687] = anon_sym_AMP_AMP;
	v->a[62688] = anon_sym_PIPE_PIPE;
	v->a[62689] = anon_sym_LT;
	v->a[62690] = anon_sym_GT;
	v->a[62691] = anon_sym_GT_GT;
	v->a[62692] = anon_sym_AMP_GT;
	v->a[62693] = anon_sym_AMP_GT_GT;
	v->a[62694] = anon_sym_LT_AMP;
	v->a[62695] = anon_sym_GT_AMP;
	v->a[62696] = anon_sym_GT_PIPE;
	v->a[62697] = anon_sym_LT_AMP_DASH;
	v->a[62698] = anon_sym_GT_AMP_DASH;
	v->a[62699] = anon_sym_LT_LT;
	small_parse_table_3135(v);
}

/* EOF small_parse_table_626.c */
