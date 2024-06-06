/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1058.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5290(t_small_parse_table_array *v)
{
	v->a[105800] = anon_sym_BQUOTE;
	v->a[105801] = actions(5354);
	v->a[105802] = 1;
	v->a[105803] = anon_sym_DOLLAR_BQUOTE;
	v->a[105804] = actions(5360);
	v->a[105805] = 1;
	v->a[105806] = sym__brace_start;
	v->a[105807] = actions(5586);
	v->a[105808] = 1;
	v->a[105809] = sym__special_character;
	v->a[105810] = actions(6077);
	v->a[105811] = 1;
	v->a[105812] = sym_word;
	v->a[105813] = state(1237);
	v->a[105814] = 1;
	v->a[105815] = aux_sym__literal_repeat1;
	v->a[105816] = actions(6079);
	v->a[105817] = 2;
	v->a[105818] = sym_test_operator;
	v->a[105819] = sym_raw_string;
	small_parse_table_5291(v);
}

void	small_parse_table_5291(t_small_parse_table_array *v)
{
	v->a[105820] = state(498);
	v->a[105821] = 2;
	v->a[105822] = sym_concatenation;
	v->a[105823] = aux_sym_for_statement_repeat1;
	v->a[105824] = state(1343);
	v->a[105825] = 7;
	v->a[105826] = sym_arithmetic_expansion;
	v->a[105827] = sym_brace_expression;
	v->a[105828] = sym_string;
	v->a[105829] = sym_number;
	v->a[105830] = sym_simple_expansion;
	v->a[105831] = sym_expansion;
	v->a[105832] = sym_command_substitution;
	v->a[105833] = 3;
	v->a[105834] = actions(3);
	v->a[105835] = 1;
	v->a[105836] = sym_comment;
	v->a[105837] = actions(6081);
	v->a[105838] = 3;
	v->a[105839] = sym_file_descriptor;
	small_parse_table_5292(v);
}

void	small_parse_table_5292(t_small_parse_table_array *v)
{
	v->a[105840] = ts_builtin_sym_end;
	v->a[105841] = aux_sym_heredoc_redirect_token1;
	v->a[105842] = actions(6083);
	v->a[105843] = 21;
	v->a[105844] = anon_sym_PIPE;
	v->a[105845] = anon_sym_RPAREN;
	v->a[105846] = anon_sym_SEMI_SEMI;
	v->a[105847] = anon_sym_PIPE_AMP;
	v->a[105848] = anon_sym_AMP_AMP;
	v->a[105849] = anon_sym_PIPE_PIPE;
	v->a[105850] = anon_sym_LT;
	v->a[105851] = anon_sym_GT;
	v->a[105852] = anon_sym_GT_GT;
	v->a[105853] = anon_sym_AMP_GT;
	v->a[105854] = anon_sym_AMP_GT_GT;
	v->a[105855] = anon_sym_LT_AMP;
	v->a[105856] = anon_sym_GT_AMP;
	v->a[105857] = anon_sym_GT_PIPE;
	v->a[105858] = anon_sym_LT_AMP_DASH;
	v->a[105859] = anon_sym_GT_AMP_DASH;
	small_parse_table_5293(v);
}

void	small_parse_table_5293(t_small_parse_table_array *v)
{
	v->a[105860] = anon_sym_LT_LT;
	v->a[105861] = anon_sym_LT_LT_DASH;
	v->a[105862] = anon_sym_AMP;
	v->a[105863] = anon_sym_BQUOTE;
	v->a[105864] = anon_sym_SEMI;
	v->a[105865] = 17;
	v->a[105866] = actions(57);
	v->a[105867] = 1;
	v->a[105868] = sym_comment;
	v->a[105869] = actions(5814);
	v->a[105870] = 1;
	v->a[105871] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105872] = actions(5816);
	v->a[105873] = 1;
	v->a[105874] = anon_sym_DOLLAR;
	v->a[105875] = actions(5818);
	v->a[105876] = 1;
	v->a[105877] = sym__special_character;
	v->a[105878] = actions(5820);
	v->a[105879] = 1;
	small_parse_table_5294(v);
}

void	small_parse_table_5294(t_small_parse_table_array *v)
{
	v->a[105880] = anon_sym_DQUOTE;
	v->a[105881] = actions(5824);
	v->a[105882] = 1;
	v->a[105883] = aux_sym_number_token1;
	v->a[105884] = actions(5826);
	v->a[105885] = 1;
	v->a[105886] = aux_sym_number_token2;
	v->a[105887] = actions(5828);
	v->a[105888] = 1;
	v->a[105889] = anon_sym_DOLLAR_LBRACE;
	v->a[105890] = actions(5830);
	v->a[105891] = 1;
	v->a[105892] = anon_sym_DOLLAR_LPAREN;
	v->a[105893] = actions(5832);
	v->a[105894] = 1;
	v->a[105895] = anon_sym_BQUOTE;
	v->a[105896] = actions(5834);
	v->a[105897] = 1;
	v->a[105898] = anon_sym_DOLLAR_BQUOTE;
	v->a[105899] = actions(5840);
	small_parse_table_5295(v);
}

/* EOF small_parse_table_1058.c */
