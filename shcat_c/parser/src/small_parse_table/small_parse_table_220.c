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
	v->a[22000] = anon_sym_GT_AMP_DASH;
	v->a[22001] = anon_sym_LT_LT_DASH;
	v->a[22002] = anon_sym_LT_LT_LT;
	v->a[22003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22004] = anon_sym_DOLLAR_LBRACK;
	v->a[22005] = anon_sym_DOLLAR;
	v->a[22006] = sym__special_character;
	v->a[22007] = anon_sym_DQUOTE;
	v->a[22008] = sym_raw_string;
	v->a[22009] = sym_ansi_c_string;
	v->a[22010] = aux_sym_number_token1;
	v->a[22011] = aux_sym_number_token2;
	v->a[22012] = anon_sym_DOLLAR_LBRACE;
	v->a[22013] = anon_sym_DOLLAR_LPAREN;
	v->a[22014] = anon_sym_BQUOTE;
	v->a[22015] = anon_sym_DOLLAR_BQUOTE;
	v->a[22016] = anon_sym_LT_LPAREN;
	v->a[22017] = anon_sym_GT_LPAREN;
	v->a[22018] = sym_word;
	v->a[22019] = 35;
	small_parse_table_1101(v);
}

void	small_parse_table_1101(t_small_parse_table_array *v)
{
	v->a[22020] = actions(71);
	v->a[22021] = 1;
	v->a[22022] = sym_comment;
	v->a[22023] = actions(237);
	v->a[22024] = 1;
	v->a[22025] = sym_word;
	v->a[22026] = actions(258);
	v->a[22027] = 1;
	v->a[22028] = anon_sym_DOLLAR;
	v->a[22029] = actions(264);
	v->a[22030] = 1;
	v->a[22031] = aux_sym_number_token1;
	v->a[22032] = actions(266);
	v->a[22033] = 1;
	v->a[22034] = aux_sym_number_token2;
	v->a[22035] = actions(270);
	v->a[22036] = 1;
	v->a[22037] = anon_sym_DOLLAR_LPAREN;
	v->a[22038] = actions(282);
	v->a[22039] = 1;
	small_parse_table_1102(v);
}

void	small_parse_table_1102(t_small_parse_table_array *v)
{
	v->a[22040] = sym_test_operator;
	v->a[22041] = actions(284);
	v->a[22042] = 1;
	v->a[22043] = sym__brace_start;
	v->a[22044] = actions(1075);
	v->a[22045] = 1;
	v->a[22046] = anon_sym_DOLLAR_LBRACK;
	v->a[22047] = actions(1079);
	v->a[22048] = 1;
	v->a[22049] = sym__special_character;
	v->a[22050] = actions(1081);
	v->a[22051] = 1;
	v->a[22052] = anon_sym_DQUOTE;
	v->a[22053] = actions(1085);
	v->a[22054] = 1;
	v->a[22055] = anon_sym_DOLLAR_LBRACE;
	v->a[22056] = actions(1087);
	v->a[22057] = 1;
	v->a[22058] = anon_sym_DOLLAR_BQUOTE;
	v->a[22059] = actions(3588);
	small_parse_table_1103(v);
}

void	small_parse_table_1103(t_small_parse_table_array *v)
{
	v->a[22060] = 1;
	v->a[22061] = anon_sym_LPAREN;
	v->a[22062] = actions(3590);
	v->a[22063] = 1;
	v->a[22064] = anon_sym_BANG;
	v->a[22065] = actions(3596);
	v->a[22066] = 1;
	v->a[22067] = anon_sym_TILDE;
	v->a[22068] = actions(3598);
	v->a[22069] = 1;
	v->a[22070] = anon_sym_BQUOTE;
	v->a[22071] = actions(3602);
	v->a[22072] = 1;
	v->a[22073] = sym_variable_name;
	v->a[22074] = actions(4042);
	v->a[22075] = 1;
	v->a[22076] = aux_sym__simple_variable_name_token1;
	v->a[22077] = state(2509);
	v->a[22078] = 1;
	v->a[22079] = sym_command_substitution;
	small_parse_table_1104(v);
}

void	small_parse_table_1104(t_small_parse_table_array *v)
{
	v->a[22080] = state(2690);
	v->a[22081] = 1;
	v->a[22082] = aux_sym__literal_repeat1;
	v->a[22083] = state(3111);
	v->a[22084] = 1;
	v->a[22085] = sym__expression;
	v->a[22086] = state(3359);
	v->a[22087] = 1;
	v->a[22088] = sym__arithmetic_postfix_expression;
	v->a[22089] = state(3361);
	v->a[22090] = 1;
	v->a[22091] = sym__arithmetic_unary_expression;
	v->a[22092] = state(3367);
	v->a[22093] = 1;
	v->a[22094] = sym__arithmetic_ternary_expression;
	v->a[22095] = state(3375);
	v->a[22096] = 1;
	v->a[22097] = sym__arithmetic_binary_expression;
	v->a[22098] = actions(1073);
	v->a[22099] = 2;
	small_parse_table_1105(v);
}

/* EOF small_parse_table_220.c */
