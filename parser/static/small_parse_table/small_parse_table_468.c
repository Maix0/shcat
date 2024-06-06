/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_468.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2340(t_small_parse_table_array *v)
{
	v->a[46800] = anon_sym_DOLLAR_LBRACE;
	v->a[46801] = actions(103);
	v->a[46802] = 1;
	v->a[46803] = anon_sym_DOLLAR_LPAREN;
	v->a[46804] = actions(105);
	v->a[46805] = 1;
	v->a[46806] = anon_sym_BQUOTE;
	v->a[46807] = actions(107);
	v->a[46808] = 1;
	v->a[46809] = anon_sym_DOLLAR_BQUOTE;
	v->a[46810] = actions(113);
	v->a[46811] = 1;
	v->a[46812] = sym__brace_start;
	v->a[46813] = actions(2900);
	v->a[46814] = 1;
	v->a[46815] = sym_file_descriptor;
	v->a[46816] = actions(2935);
	v->a[46817] = 1;
	v->a[46818] = sym_word;
	v->a[46819] = actions(2937);
	small_parse_table_2341(v);
}

void	small_parse_table_2341(t_small_parse_table_array *v)
{
	v->a[46820] = 1;
	v->a[46821] = sym__special_character;
	v->a[46822] = actions(3621);
	v->a[46823] = 1;
	v->a[46824] = sym_variable_name;
	v->a[46825] = state(321);
	v->a[46826] = 1;
	v->a[46827] = sym_command_name;
	v->a[46828] = state(1048);
	v->a[46829] = 1;
	v->a[46830] = aux_sym__literal_repeat1;
	v->a[46831] = state(1192);
	v->a[46832] = 1;
	v->a[46833] = sym_concatenation;
	v->a[46834] = state(1995);
	v->a[46835] = 1;
	v->a[46836] = sym_file_redirect;
	v->a[46837] = actions(95);
	v->a[46838] = 2;
	v->a[46839] = sym_test_operator;
	small_parse_table_2342(v);
}

void	small_parse_table_2342(t_small_parse_table_array *v)
{
	v->a[46840] = sym_raw_string;
	v->a[46841] = actions(2896);
	v->a[46842] = 2;
	v->a[46843] = anon_sym_LT_AMP_DASH;
	v->a[46844] = anon_sym_GT_AMP_DASH;
	v->a[46845] = state(1776);
	v->a[46846] = 2;
	v->a[46847] = sym_variable_assignment;
	v->a[46848] = aux_sym_command_repeat1;
	v->a[46849] = actions(2894);
	v->a[46850] = 3;
	v->a[46851] = anon_sym_GT_GT;
	v->a[46852] = anon_sym_AMP_GT_GT;
	v->a[46853] = anon_sym_GT_PIPE;
	v->a[46854] = actions(2892);
	v->a[46855] = 5;
	v->a[46856] = anon_sym_LT;
	v->a[46857] = anon_sym_GT;
	v->a[46858] = anon_sym_AMP_GT;
	v->a[46859] = anon_sym_LT_AMP;
	small_parse_table_2343(v);
}

void	small_parse_table_2343(t_small_parse_table_array *v)
{
	v->a[46860] = anon_sym_GT_AMP;
	v->a[46861] = state(834);
	v->a[46862] = 7;
	v->a[46863] = sym_arithmetic_expansion;
	v->a[46864] = sym_brace_expression;
	v->a[46865] = sym_string;
	v->a[46866] = sym_number;
	v->a[46867] = sym_simple_expansion;
	v->a[46868] = sym_expansion;
	v->a[46869] = sym_command_substitution;
	v->a[46870] = 5;
	v->a[46871] = actions(3);
	v->a[46872] = 1;
	v->a[46873] = sym_comment;
	v->a[46874] = actions(3651);
	v->a[46875] = 1;
	v->a[46876] = sym__special_character;
	v->a[46877] = state(1036);
	v->a[46878] = 1;
	v->a[46879] = aux_sym__literal_repeat1;
	small_parse_table_2344(v);
}

void	small_parse_table_2344(t_small_parse_table_array *v)
{
	v->a[46880] = actions(3197);
	v->a[46881] = 6;
	v->a[46882] = sym_file_descriptor;
	v->a[46883] = sym_test_operator;
	v->a[46884] = sym__bare_dollar;
	v->a[46885] = sym__brace_start;
	v->a[46886] = ts_builtin_sym_end;
	v->a[46887] = aux_sym_heredoc_redirect_token1;
	v->a[46888] = actions(3195);
	v->a[46889] = 31;
	v->a[46890] = anon_sym_LPAREN;
	v->a[46891] = anon_sym_PIPE;
	v->a[46892] = anon_sym_SEMI_SEMI;
	v->a[46893] = anon_sym_PIPE_AMP;
	v->a[46894] = anon_sym_AMP_AMP;
	v->a[46895] = anon_sym_PIPE_PIPE;
	v->a[46896] = anon_sym_LT;
	v->a[46897] = anon_sym_GT;
	v->a[46898] = anon_sym_GT_GT;
	v->a[46899] = anon_sym_AMP_GT;
	small_parse_table_2345(v);
}

/* EOF small_parse_table_468.c */
