/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_220.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1100(t_small_parse_table_array *v)
{
	v->a[22000] = aux_sym_number_token2;
	v->a[22001] = actions(101);
	v->a[22002] = 1;
	v->a[22003] = anon_sym_DOLLAR_LBRACE;
	v->a[22004] = actions(103);
	v->a[22005] = 1;
	v->a[22006] = anon_sym_DOLLAR_LPAREN;
	v->a[22007] = actions(105);
	v->a[22008] = 1;
	v->a[22009] = anon_sym_BQUOTE;
	v->a[22010] = actions(107);
	v->a[22011] = 1;
	v->a[22012] = anon_sym_DOLLAR_BQUOTE;
	v->a[22013] = actions(113);
	v->a[22014] = 1;
	v->a[22015] = sym__brace_start;
	v->a[22016] = actions(443);
	v->a[22017] = 1;
	v->a[22018] = sym_variable_name;
	v->a[22019] = actions(2900);
	small_parse_table_1101(v);
}

void	small_parse_table_1101(t_small_parse_table_array *v)
{
	v->a[22020] = 1;
	v->a[22021] = sym_file_descriptor;
	v->a[22022] = actions(3052);
	v->a[22023] = 1;
	v->a[22024] = sym_word;
	v->a[22025] = actions(3054);
	v->a[22026] = 1;
	v->a[22027] = sym__special_character;
	v->a[22028] = state(292);
	v->a[22029] = 1;
	v->a[22030] = sym_command_name;
	v->a[22031] = state(1041);
	v->a[22032] = 1;
	v->a[22033] = aux_sym_command_repeat1;
	v->a[22034] = state(1048);
	v->a[22035] = 1;
	v->a[22036] = aux_sym__literal_repeat1;
	v->a[22037] = state(1192);
	v->a[22038] = 1;
	v->a[22039] = sym_concatenation;
	small_parse_table_1102(v);
}

void	small_parse_table_1102(t_small_parse_table_array *v)
{
	v->a[22040] = state(1291);
	v->a[22041] = 1;
	v->a[22042] = sym_variable_assignment;
	v->a[22043] = state(1995);
	v->a[22044] = 1;
	v->a[22045] = sym_file_redirect;
	v->a[22046] = state(2168);
	v->a[22047] = 1;
	v->a[22048] = sym_subshell;
	v->a[22049] = state(2169);
	v->a[22050] = 1;
	v->a[22051] = sym_command;
	v->a[22052] = actions(439);
	v->a[22053] = 2;
	v->a[22054] = sym_test_operator;
	v->a[22055] = sym_raw_string;
	v->a[22056] = actions(2896);
	v->a[22057] = 2;
	v->a[22058] = anon_sym_LT_AMP_DASH;
	v->a[22059] = anon_sym_GT_AMP_DASH;
	small_parse_table_1103(v);
}

void	small_parse_table_1103(t_small_parse_table_array *v)
{
	v->a[22060] = actions(2894);
	v->a[22061] = 3;
	v->a[22062] = anon_sym_GT_GT;
	v->a[22063] = anon_sym_AMP_GT_GT;
	v->a[22064] = anon_sym_GT_PIPE;
	v->a[22065] = actions(2892);
	v->a[22066] = 5;
	v->a[22067] = anon_sym_LT;
	v->a[22068] = anon_sym_GT;
	v->a[22069] = anon_sym_AMP_GT;
	v->a[22070] = anon_sym_LT_AMP;
	v->a[22071] = anon_sym_GT_AMP;
	v->a[22072] = state(702);
	v->a[22073] = 7;
	v->a[22074] = sym_arithmetic_expansion;
	v->a[22075] = sym_brace_expression;
	v->a[22076] = sym_string;
	v->a[22077] = sym_number;
	v->a[22078] = sym_simple_expansion;
	v->a[22079] = sym_expansion;
	small_parse_table_1104(v);
}

void	small_parse_table_1104(t_small_parse_table_array *v)
{
	v->a[22080] = sym_command_substitution;
	v->a[22081] = 6;
	v->a[22082] = actions(3);
	v->a[22083] = 1;
	v->a[22084] = sym_comment;
	v->a[22085] = actions(3056);
	v->a[22086] = 1;
	v->a[22087] = aux_sym_concatenation_token1;
	v->a[22088] = actions(3058);
	v->a[22089] = 1;
	v->a[22090] = sym__concat;
	v->a[22091] = state(515);
	v->a[22092] = 1;
	v->a[22093] = aux_sym_concatenation_repeat1;
	v->a[22094] = actions(2696);
	v->a[22095] = 5;
	v->a[22096] = sym_file_descriptor;
	v->a[22097] = sym_test_operator;
	v->a[22098] = sym__bare_dollar;
	v->a[22099] = sym__brace_start;
	small_parse_table_1105(v);
}

/* EOF small_parse_table_220.c */
