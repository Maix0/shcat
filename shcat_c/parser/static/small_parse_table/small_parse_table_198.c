/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_198.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_990(t_small_parse_table_array *v)
{
	v->a[19800] = anon_sym_PIPE_AMP;
	v->a[19801] = actions(3723);
	v->a[19802] = 2;
	v->a[19803] = anon_sym_LT_AMP_DASH;
	v->a[19804] = anon_sym_GT_AMP_DASH;
	v->a[19805] = actions(3749);
	v->a[19806] = 2;
	v->a[19807] = anon_sym_LT_LPAREN;
	v->a[19808] = anon_sym_GT_LPAREN;
	v->a[19809] = actions(3713);
	v->a[19810] = 3;
	v->a[19811] = sym_raw_string;
	v->a[19812] = sym_ansi_c_string;
	v->a[19813] = sym_word;
	v->a[19814] = state(5531);
	v->a[19815] = 3;
	v->a[19816] = sym_file_redirect;
	v->a[19817] = sym_herestring_redirect;
	v->a[19818] = aux_sym_redirected_statement_repeat2;
	v->a[19819] = actions(3721);
	small_parse_table_991(v);
}

void	small_parse_table_991(t_small_parse_table_array *v)
{
	v->a[19820] = 8;
	v->a[19821] = anon_sym_LT;
	v->a[19822] = anon_sym_GT;
	v->a[19823] = anon_sym_GT_GT;
	v->a[19824] = anon_sym_AMP_GT;
	v->a[19825] = anon_sym_AMP_GT_GT;
	v->a[19826] = anon_sym_LT_AMP;
	v->a[19827] = anon_sym_GT_AMP;
	v->a[19828] = anon_sym_GT_PIPE;
	v->a[19829] = state(5062);
	v->a[19830] = 9;
	v->a[19831] = sym_arithmetic_expansion;
	v->a[19832] = sym_brace_expression;
	v->a[19833] = sym_string;
	v->a[19834] = sym_translated_string;
	v->a[19835] = sym_number;
	v->a[19836] = sym_simple_expansion;
	v->a[19837] = sym_expansion;
	v->a[19838] = sym_command_substitution;
	v->a[19839] = sym_process_substitution;
	small_parse_table_992(v);
}

void	small_parse_table_992(t_small_parse_table_array *v)
{
	v->a[19840] = 8;
	v->a[19841] = actions(3);
	v->a[19842] = 1;
	v->a[19843] = sym_comment;
	v->a[19844] = actions(3775);
	v->a[19845] = 1;
	v->a[19846] = anon_sym_DQUOTE;
	v->a[19847] = actions(3779);
	v->a[19848] = 1;
	v->a[19849] = sym_variable_name;
	v->a[19850] = state(2093);
	v->a[19851] = 1;
	v->a[19852] = sym_string;
	v->a[19853] = actions(3777);
	v->a[19854] = 2;
	v->a[19855] = aux_sym__simple_variable_name_token1;
	v->a[19856] = aux_sym__multiline_variable_name_token1;
	v->a[19857] = actions(1241);
	v->a[19858] = 4;
	v->a[19859] = sym_file_descriptor;
	small_parse_table_993(v);
}

void	small_parse_table_993(t_small_parse_table_array *v)
{
	v->a[19860] = sym_test_operator;
	v->a[19861] = sym__bare_dollar;
	v->a[19862] = sym__brace_start;
	v->a[19863] = actions(3773);
	v->a[19864] = 9;
	v->a[19865] = anon_sym_DASH;
	v->a[19866] = anon_sym_STAR;
	v->a[19867] = anon_sym_BANG;
	v->a[19868] = anon_sym_QMARK;
	v->a[19869] = anon_sym_DOLLAR;
	v->a[19870] = anon_sym_POUND;
	v->a[19871] = anon_sym_AT2;
	v->a[19872] = anon_sym_0;
	v->a[19873] = anon_sym__;
	v->a[19874] = actions(1239);
	v->a[19875] = 35;
	v->a[19876] = anon_sym_LPAREN_LPAREN;
	v->a[19877] = anon_sym_PIPE_PIPE;
	v->a[19878] = anon_sym_AMP_AMP;
	v->a[19879] = anon_sym_PIPE;
	small_parse_table_994(v);
}

void	small_parse_table_994(t_small_parse_table_array *v)
{
	v->a[19880] = anon_sym_EQ_EQ;
	v->a[19881] = anon_sym_LT;
	v->a[19882] = anon_sym_GT;
	v->a[19883] = anon_sym_LT_LT;
	v->a[19884] = anon_sym_GT_GT;
	v->a[19885] = anon_sym_LPAREN;
	v->a[19886] = anon_sym_PIPE_AMP;
	v->a[19887] = anon_sym_EQ_TILDE;
	v->a[19888] = anon_sym_AMP_GT;
	v->a[19889] = anon_sym_AMP_GT_GT;
	v->a[19890] = anon_sym_LT_AMP;
	v->a[19891] = anon_sym_GT_AMP;
	v->a[19892] = anon_sym_GT_PIPE;
	v->a[19893] = anon_sym_LT_AMP_DASH;
	v->a[19894] = anon_sym_GT_AMP_DASH;
	v->a[19895] = anon_sym_LT_LT_DASH;
	v->a[19896] = anon_sym_LT_LT_LT;
	v->a[19897] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19898] = anon_sym_DOLLAR_LBRACK;
	v->a[19899] = sym__special_character;
	small_parse_table_995(v);
}

/* EOF small_parse_table_198.c */
