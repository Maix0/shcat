/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_587.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2935(t_small_parse_table_array *v)
{
	v->a[58700] = anon_sym_LT_AMP;
	v->a[58701] = anon_sym_GT_AMP;
	v->a[58702] = anon_sym_GT_PIPE;
	v->a[58703] = anon_sym_LT_AMP_DASH;
	v->a[58704] = anon_sym_GT_AMP_DASH;
	v->a[58705] = 15;
	v->a[58706] = actions(1074);
	v->a[58707] = 1;
	v->a[58708] = sym_comment;
	v->a[58709] = actions(1951);
	v->a[58710] = 1;
	v->a[58711] = anon_sym_LPAREN;
	v->a[58712] = actions(1953);
	v->a[58713] = 1;
	v->a[58714] = anon_sym_BANG;
	v->a[58715] = actions(1959);
	v->a[58716] = 1;
	v->a[58717] = anon_sym_TILDE;
	v->a[58718] = actions(1961);
	v->a[58719] = 1;
	small_parse_table_2936(v);
}

void	small_parse_table_2936(t_small_parse_table_array *v)
{
	v->a[58720] = anon_sym_DOLLAR;
	v->a[58721] = actions(1963);
	v->a[58722] = 1;
	v->a[58723] = anon_sym_DQUOTE;
	v->a[58724] = actions(1967);
	v->a[58725] = 1;
	v->a[58726] = anon_sym_DOLLAR_LBRACE;
	v->a[58727] = actions(1969);
	v->a[58728] = 1;
	v->a[58729] = anon_sym_DOLLAR_LPAREN;
	v->a[58730] = actions(1971);
	v->a[58731] = 1;
	v->a[58732] = anon_sym_BQUOTE;
	v->a[58733] = actions(1973);
	v->a[58734] = 1;
	v->a[58735] = sym_variable_name;
	v->a[58736] = actions(1955);
	v->a[58737] = 2;
	v->a[58738] = anon_sym_PLUS_PLUS;
	v->a[58739] = anon_sym_DASH_DASH;
	small_parse_table_2937(v);
}

void	small_parse_table_2937(t_small_parse_table_array *v)
{
	v->a[58740] = actions(1957);
	v->a[58741] = 2;
	v->a[58742] = anon_sym_DASH2;
	v->a[58743] = anon_sym_PLUS2;
	v->a[58744] = actions(1965);
	v->a[58745] = 2;
	v->a[58746] = sym_number;
	v->a[58747] = aux_sym__simple_variable_name_token1;
	v->a[58748] = state(462);
	v->a[58749] = 3;
	v->a[58750] = sym_string;
	v->a[58751] = sym_simple_expansion;
	v->a[58752] = sym_expansion;
	v->a[58753] = state(578);
	v->a[58754] = 8;
	v->a[58755] = sym__arithmetic_expression;
	v->a[58756] = sym_arithmetic_literal;
	v->a[58757] = sym_arithmetic_binary_expression;
	v->a[58758] = sym_arithmetic_ternary_expression;
	v->a[58759] = sym_arithmetic_unary_expression;
	small_parse_table_2938(v);
}

void	small_parse_table_2938(t_small_parse_table_array *v)
{
	v->a[58760] = sym_arithmetic_postfix_expression;
	v->a[58761] = sym_arithmetic_parenthesized_expression;
	v->a[58762] = sym_command_substitution;
	v->a[58763] = 3;
	v->a[58764] = actions(3);
	v->a[58765] = 1;
	v->a[58766] = sym_comment;
	v->a[58767] = actions(1048);
	v->a[58768] = 5;
	v->a[58769] = sym_file_descriptor;
	v->a[58770] = sym__concat;
	v->a[58771] = sym_variable_name;
	v->a[58772] = ts_builtin_sym_end;
	v->a[58773] = aux_sym_heredoc_redirect_token1;
	v->a[58774] = actions(1046);
	v->a[58775] = 21;
	v->a[58776] = anon_sym_PIPE;
	v->a[58777] = anon_sym_RPAREN;
	v->a[58778] = anon_sym_SEMI_SEMI;
	v->a[58779] = anon_sym_AMP_AMP;
	small_parse_table_2939(v);
}

void	small_parse_table_2939(t_small_parse_table_array *v)
{
	v->a[58780] = anon_sym_PIPE_PIPE;
	v->a[58781] = anon_sym_LT;
	v->a[58782] = anon_sym_GT;
	v->a[58783] = anon_sym_GT_GT;
	v->a[58784] = anon_sym_AMP_GT;
	v->a[58785] = anon_sym_AMP_GT_GT;
	v->a[58786] = anon_sym_LT_AMP;
	v->a[58787] = anon_sym_GT_AMP;
	v->a[58788] = anon_sym_GT_PIPE;
	v->a[58789] = anon_sym_LT_AMP_DASH;
	v->a[58790] = anon_sym_GT_AMP_DASH;
	v->a[58791] = anon_sym_LT_LT;
	v->a[58792] = anon_sym_LT_LT_DASH;
	v->a[58793] = anon_sym_AMP;
	v->a[58794] = aux_sym_concatenation_token1;
	v->a[58795] = anon_sym_BQUOTE;
	v->a[58796] = anon_sym_SEMI;
	v->a[58797] = 15;
	v->a[58798] = actions(1074);
	v->a[58799] = 1;
	small_parse_table_2940(v);
}

/* EOF small_parse_table_587.c */
