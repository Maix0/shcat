/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_588.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2940(t_small_parse_table_array *v)
{
	v->a[58800] = sym_comment;
	v->a[58801] = actions(1951);
	v->a[58802] = 1;
	v->a[58803] = anon_sym_LPAREN;
	v->a[58804] = actions(1953);
	v->a[58805] = 1;
	v->a[58806] = anon_sym_BANG;
	v->a[58807] = actions(1959);
	v->a[58808] = 1;
	v->a[58809] = anon_sym_TILDE;
	v->a[58810] = actions(1961);
	v->a[58811] = 1;
	v->a[58812] = anon_sym_DOLLAR;
	v->a[58813] = actions(1963);
	v->a[58814] = 1;
	v->a[58815] = anon_sym_DQUOTE;
	v->a[58816] = actions(1967);
	v->a[58817] = 1;
	v->a[58818] = anon_sym_DOLLAR_LBRACE;
	v->a[58819] = actions(1969);
	small_parse_table_2941(v);
}

void	small_parse_table_2941(t_small_parse_table_array *v)
{
	v->a[58820] = 1;
	v->a[58821] = anon_sym_DOLLAR_LPAREN;
	v->a[58822] = actions(1971);
	v->a[58823] = 1;
	v->a[58824] = anon_sym_BQUOTE;
	v->a[58825] = actions(1973);
	v->a[58826] = 1;
	v->a[58827] = sym_variable_name;
	v->a[58828] = actions(1955);
	v->a[58829] = 2;
	v->a[58830] = anon_sym_PLUS_PLUS;
	v->a[58831] = anon_sym_DASH_DASH;
	v->a[58832] = actions(1957);
	v->a[58833] = 2;
	v->a[58834] = anon_sym_DASH2;
	v->a[58835] = anon_sym_PLUS2;
	v->a[58836] = actions(1965);
	v->a[58837] = 2;
	v->a[58838] = sym_number;
	v->a[58839] = aux_sym__simple_variable_name_token1;
	small_parse_table_2942(v);
}

void	small_parse_table_2942(t_small_parse_table_array *v)
{
	v->a[58840] = state(462);
	v->a[58841] = 3;
	v->a[58842] = sym_string;
	v->a[58843] = sym_simple_expansion;
	v->a[58844] = sym_expansion;
	v->a[58845] = state(569);
	v->a[58846] = 8;
	v->a[58847] = sym__arithmetic_expression;
	v->a[58848] = sym_arithmetic_literal;
	v->a[58849] = sym_arithmetic_binary_expression;
	v->a[58850] = sym_arithmetic_ternary_expression;
	v->a[58851] = sym_arithmetic_unary_expression;
	v->a[58852] = sym_arithmetic_postfix_expression;
	v->a[58853] = sym_arithmetic_parenthesized_expression;
	v->a[58854] = sym_command_substitution;
	v->a[58855] = 3;
	v->a[58856] = actions(3);
	v->a[58857] = 1;
	v->a[58858] = sym_comment;
	v->a[58859] = actions(1114);
	small_parse_table_2943(v);
}

void	small_parse_table_2943(t_small_parse_table_array *v)
{
	v->a[58860] = 5;
	v->a[58861] = sym_file_descriptor;
	v->a[58862] = sym__concat;
	v->a[58863] = sym_variable_name;
	v->a[58864] = ts_builtin_sym_end;
	v->a[58865] = aux_sym_heredoc_redirect_token1;
	v->a[58866] = actions(1112);
	v->a[58867] = 21;
	v->a[58868] = anon_sym_PIPE;
	v->a[58869] = anon_sym_RPAREN;
	v->a[58870] = anon_sym_SEMI_SEMI;
	v->a[58871] = anon_sym_AMP_AMP;
	v->a[58872] = anon_sym_PIPE_PIPE;
	v->a[58873] = anon_sym_LT;
	v->a[58874] = anon_sym_GT;
	v->a[58875] = anon_sym_GT_GT;
	v->a[58876] = anon_sym_AMP_GT;
	v->a[58877] = anon_sym_AMP_GT_GT;
	v->a[58878] = anon_sym_LT_AMP;
	v->a[58879] = anon_sym_GT_AMP;
	small_parse_table_2944(v);
}

void	small_parse_table_2944(t_small_parse_table_array *v)
{
	v->a[58880] = anon_sym_GT_PIPE;
	v->a[58881] = anon_sym_LT_AMP_DASH;
	v->a[58882] = anon_sym_GT_AMP_DASH;
	v->a[58883] = anon_sym_LT_LT;
	v->a[58884] = anon_sym_LT_LT_DASH;
	v->a[58885] = anon_sym_AMP;
	v->a[58886] = aux_sym_concatenation_token1;
	v->a[58887] = anon_sym_BQUOTE;
	v->a[58888] = anon_sym_SEMI;
	v->a[58889] = 3;
	v->a[58890] = actions(3);
	v->a[58891] = 1;
	v->a[58892] = sym_comment;
	v->a[58893] = actions(1118);
	v->a[58894] = 5;
	v->a[58895] = sym_file_descriptor;
	v->a[58896] = sym__concat;
	v->a[58897] = sym_variable_name;
	v->a[58898] = ts_builtin_sym_end;
	v->a[58899] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2945(v);
}

/* EOF small_parse_table_588.c */
