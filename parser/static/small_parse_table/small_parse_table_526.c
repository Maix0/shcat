/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_526.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2630(t_small_parse_table_array *v)
{
	v->a[52600] = 1;
	v->a[52601] = anon_sym_TILDE;
	v->a[52602] = actions(1756);
	v->a[52603] = 1;
	v->a[52604] = anon_sym_DOLLAR;
	v->a[52605] = actions(1758);
	v->a[52606] = 1;
	v->a[52607] = anon_sym_DQUOTE;
	v->a[52608] = actions(1762);
	v->a[52609] = 1;
	v->a[52610] = anon_sym_DOLLAR_LBRACE;
	v->a[52611] = actions(1764);
	v->a[52612] = 1;
	v->a[52613] = anon_sym_DOLLAR_LPAREN;
	v->a[52614] = actions(1766);
	v->a[52615] = 1;
	v->a[52616] = anon_sym_BQUOTE;
	v->a[52617] = actions(1768);
	v->a[52618] = 1;
	v->a[52619] = sym_variable_name;
	small_parse_table_2631(v);
}

void	small_parse_table_2631(t_small_parse_table_array *v)
{
	v->a[52620] = actions(1848);
	v->a[52621] = 1;
	v->a[52622] = anon_sym_RPAREN_RPAREN;
	v->a[52623] = actions(1750);
	v->a[52624] = 2;
	v->a[52625] = anon_sym_PLUS_PLUS;
	v->a[52626] = anon_sym_DASH_DASH;
	v->a[52627] = actions(1752);
	v->a[52628] = 2;
	v->a[52629] = anon_sym_DASH2;
	v->a[52630] = anon_sym_PLUS2;
	v->a[52631] = actions(1760);
	v->a[52632] = 2;
	v->a[52633] = sym_number;
	v->a[52634] = aux_sym__simple_variable_name_token1;
	v->a[52635] = state(271);
	v->a[52636] = 3;
	v->a[52637] = sym_string;
	v->a[52638] = sym_simple_expansion;
	v->a[52639] = sym_expansion;
	small_parse_table_2632(v);
}

void	small_parse_table_2632(t_small_parse_table_array *v)
{
	v->a[52640] = state(356);
	v->a[52641] = 8;
	v->a[52642] = sym__arithmetic_expression;
	v->a[52643] = sym_arithmetic_literal;
	v->a[52644] = sym_arithmetic_binary_expression;
	v->a[52645] = sym_arithmetic_ternary_expression;
	v->a[52646] = sym_arithmetic_unary_expression;
	v->a[52647] = sym_arithmetic_postfix_expression;
	v->a[52648] = sym_arithmetic_parenthesized_expression;
	v->a[52649] = sym_command_substitution;
	v->a[52650] = 3;
	v->a[52651] = actions(3);
	v->a[52652] = 1;
	v->a[52653] = sym_comment;
	v->a[52654] = actions(1027);
	v->a[52655] = 3;
	v->a[52656] = sym_file_descriptor;
	v->a[52657] = sym__concat;
	v->a[52658] = sym__bare_dollar;
	v->a[52659] = actions(1025);
	small_parse_table_2633(v);
}

void	small_parse_table_2633(t_small_parse_table_array *v)
{
	v->a[52660] = 24;
	v->a[52661] = anon_sym_LPAREN;
	v->a[52662] = anon_sym_PIPE;
	v->a[52663] = anon_sym_AMP_AMP;
	v->a[52664] = anon_sym_PIPE_PIPE;
	v->a[52665] = anon_sym_LT;
	v->a[52666] = anon_sym_GT;
	v->a[52667] = anon_sym_GT_GT;
	v->a[52668] = anon_sym_LT_AMP;
	v->a[52669] = anon_sym_GT_AMP;
	v->a[52670] = anon_sym_GT_PIPE;
	v->a[52671] = anon_sym_LT_AMP_DASH;
	v->a[52672] = anon_sym_GT_AMP_DASH;
	v->a[52673] = anon_sym_LT_LT;
	v->a[52674] = anon_sym_LT_LT_DASH;
	v->a[52675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52676] = aux_sym_concatenation_token1;
	v->a[52677] = anon_sym_DOLLAR;
	v->a[52678] = anon_sym_DQUOTE;
	v->a[52679] = sym_raw_string;
	small_parse_table_2634(v);
}

void	small_parse_table_2634(t_small_parse_table_array *v)
{
	v->a[52680] = sym_number;
	v->a[52681] = anon_sym_DOLLAR_LBRACE;
	v->a[52682] = anon_sym_DOLLAR_LPAREN;
	v->a[52683] = anon_sym_BQUOTE;
	v->a[52684] = sym_word;
	v->a[52685] = 3;
	v->a[52686] = actions(3);
	v->a[52687] = 1;
	v->a[52688] = sym_comment;
	v->a[52689] = actions(1041);
	v->a[52690] = 3;
	v->a[52691] = sym_file_descriptor;
	v->a[52692] = sym__concat;
	v->a[52693] = sym__bare_dollar;
	v->a[52694] = actions(1039);
	v->a[52695] = 24;
	v->a[52696] = anon_sym_LPAREN;
	v->a[52697] = anon_sym_PIPE;
	v->a[52698] = anon_sym_AMP_AMP;
	v->a[52699] = anon_sym_PIPE_PIPE;
	small_parse_table_2635(v);
}

/* EOF small_parse_table_526.c */
