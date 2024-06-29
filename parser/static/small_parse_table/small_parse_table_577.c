/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_577.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2885(t_small_parse_table_array *v)
{
	v->a[57700] = actions(3);
	v->a[57701] = 1;
	v->a[57702] = sym_comment;
	v->a[57703] = actions(1100);
	v->a[57704] = 5;
	v->a[57705] = sym_file_descriptor;
	v->a[57706] = sym__concat;
	v->a[57707] = sym_variable_name;
	v->a[57708] = ts_builtin_sym_end;
	v->a[57709] = aux_sym_heredoc_redirect_token1;
	v->a[57710] = actions(1098);
	v->a[57711] = 21;
	v->a[57712] = anon_sym_PIPE;
	v->a[57713] = anon_sym_RPAREN;
	v->a[57714] = anon_sym_SEMI_SEMI;
	v->a[57715] = anon_sym_AMP_AMP;
	v->a[57716] = anon_sym_PIPE_PIPE;
	v->a[57717] = anon_sym_LT;
	v->a[57718] = anon_sym_GT;
	v->a[57719] = anon_sym_GT_GT;
	small_parse_table_2886(v);
}

void	small_parse_table_2886(t_small_parse_table_array *v)
{
	v->a[57720] = anon_sym_AMP_GT;
	v->a[57721] = anon_sym_AMP_GT_GT;
	v->a[57722] = anon_sym_LT_AMP;
	v->a[57723] = anon_sym_GT_AMP;
	v->a[57724] = anon_sym_GT_PIPE;
	v->a[57725] = anon_sym_LT_AMP_DASH;
	v->a[57726] = anon_sym_GT_AMP_DASH;
	v->a[57727] = anon_sym_LT_LT;
	v->a[57728] = anon_sym_LT_LT_DASH;
	v->a[57729] = anon_sym_AMP;
	v->a[57730] = aux_sym_concatenation_token1;
	v->a[57731] = anon_sym_BQUOTE;
	v->a[57732] = anon_sym_SEMI;
	v->a[57733] = 15;
	v->a[57734] = actions(1074);
	v->a[57735] = 1;
	v->a[57736] = sym_comment;
	v->a[57737] = actions(1951);
	v->a[57738] = 1;
	v->a[57739] = anon_sym_LPAREN;
	small_parse_table_2887(v);
}

void	small_parse_table_2887(t_small_parse_table_array *v)
{
	v->a[57740] = actions(1953);
	v->a[57741] = 1;
	v->a[57742] = anon_sym_BANG;
	v->a[57743] = actions(1959);
	v->a[57744] = 1;
	v->a[57745] = anon_sym_TILDE;
	v->a[57746] = actions(1961);
	v->a[57747] = 1;
	v->a[57748] = anon_sym_DOLLAR;
	v->a[57749] = actions(1963);
	v->a[57750] = 1;
	v->a[57751] = anon_sym_DQUOTE;
	v->a[57752] = actions(1967);
	v->a[57753] = 1;
	v->a[57754] = anon_sym_DOLLAR_LBRACE;
	v->a[57755] = actions(1969);
	v->a[57756] = 1;
	v->a[57757] = anon_sym_DOLLAR_LPAREN;
	v->a[57758] = actions(1971);
	v->a[57759] = 1;
	small_parse_table_2888(v);
}

void	small_parse_table_2888(t_small_parse_table_array *v)
{
	v->a[57760] = anon_sym_BQUOTE;
	v->a[57761] = actions(1973);
	v->a[57762] = 1;
	v->a[57763] = sym_variable_name;
	v->a[57764] = actions(1955);
	v->a[57765] = 2;
	v->a[57766] = anon_sym_PLUS_PLUS;
	v->a[57767] = anon_sym_DASH_DASH;
	v->a[57768] = actions(1957);
	v->a[57769] = 2;
	v->a[57770] = anon_sym_DASH2;
	v->a[57771] = anon_sym_PLUS2;
	v->a[57772] = actions(1965);
	v->a[57773] = 2;
	v->a[57774] = sym_number;
	v->a[57775] = aux_sym__simple_variable_name_token1;
	v->a[57776] = state(462);
	v->a[57777] = 3;
	v->a[57778] = sym_string;
	v->a[57779] = sym_simple_expansion;
	small_parse_table_2889(v);
}

void	small_parse_table_2889(t_small_parse_table_array *v)
{
	v->a[57780] = sym_expansion;
	v->a[57781] = state(513);
	v->a[57782] = 8;
	v->a[57783] = sym__arithmetic_expression;
	v->a[57784] = sym_arithmetic_literal;
	v->a[57785] = sym_arithmetic_binary_expression;
	v->a[57786] = sym_arithmetic_ternary_expression;
	v->a[57787] = sym_arithmetic_unary_expression;
	v->a[57788] = sym_arithmetic_postfix_expression;
	v->a[57789] = sym_arithmetic_parenthesized_expression;
	v->a[57790] = sym_command_substitution;
	v->a[57791] = 15;
	v->a[57792] = actions(1074);
	v->a[57793] = 1;
	v->a[57794] = sym_comment;
	v->a[57795] = actions(1951);
	v->a[57796] = 1;
	v->a[57797] = anon_sym_LPAREN;
	v->a[57798] = actions(1953);
	v->a[57799] = 1;
	small_parse_table_2890(v);
}

/* EOF small_parse_table_577.c */
