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
	v->a[22000] = state(739);
	v->a[22001] = 1;
	v->a[22002] = sym_concatenation;
	v->a[22003] = state(1188);
	v->a[22004] = 1;
	v->a[22005] = sym_subshell;
	v->a[22006] = actions(517);
	v->a[22007] = 2;
	v->a[22008] = sym_file_descriptor;
	v->a[22009] = ts_builtin_sym_end;
	v->a[22010] = actions(525);
	v->a[22011] = 2;
	v->a[22012] = sym_raw_string;
	v->a[22013] = sym_word;
	v->a[22014] = state(343);
	v->a[22015] = 6;
	v->a[22016] = sym_arithmetic_expansion;
	v->a[22017] = sym_string;
	v->a[22018] = sym_number;
	v->a[22019] = sym_simple_expansion;
	small_parse_table_1101(v);
}

void	small_parse_table_1101(t_small_parse_table_array *v)
{
	v->a[22020] = sym_expansion;
	v->a[22021] = sym_command_substitution;
	v->a[22022] = actions(515);
	v->a[22023] = 19;
	v->a[22024] = anon_sym_PIPE;
	v->a[22025] = anon_sym_SEMI_SEMI;
	v->a[22026] = anon_sym_AMP_AMP;
	v->a[22027] = anon_sym_PIPE_PIPE;
	v->a[22028] = anon_sym_LT;
	v->a[22029] = anon_sym_GT;
	v->a[22030] = anon_sym_GT_GT;
	v->a[22031] = anon_sym_AMP_GT;
	v->a[22032] = anon_sym_AMP_GT_GT;
	v->a[22033] = anon_sym_LT_AMP;
	v->a[22034] = anon_sym_GT_AMP;
	v->a[22035] = anon_sym_GT_PIPE;
	v->a[22036] = anon_sym_LT_AMP_DASH;
	v->a[22037] = anon_sym_GT_AMP_DASH;
	v->a[22038] = anon_sym_LT_LT;
	v->a[22039] = anon_sym_LT_LT_DASH;
	small_parse_table_1102(v);
}

void	small_parse_table_1102(t_small_parse_table_array *v)
{
	v->a[22040] = aux_sym_heredoc_redirect_token1;
	v->a[22041] = anon_sym_AMP;
	v->a[22042] = anon_sym_SEMI;
	v->a[22043] = 17;
	v->a[22044] = actions(3);
	v->a[22045] = 1;
	v->a[22046] = sym_comment;
	v->a[22047] = actions(17);
	v->a[22048] = 1;
	v->a[22049] = anon_sym_LPAREN;
	v->a[22050] = actions(473);
	v->a[22051] = 1;
	v->a[22052] = sym_file_descriptor;
	v->a[22053] = actions(485);
	v->a[22054] = 1;
	v->a[22055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22056] = actions(487);
	v->a[22057] = 1;
	v->a[22058] = anon_sym_DOLLAR;
	v->a[22059] = actions(489);
	small_parse_table_1103(v);
}

void	small_parse_table_1103(t_small_parse_table_array *v)
{
	v->a[22060] = 1;
	v->a[22061] = anon_sym_DQUOTE;
	v->a[22062] = actions(491);
	v->a[22063] = 1;
	v->a[22064] = aux_sym_number_token1;
	v->a[22065] = actions(493);
	v->a[22066] = 1;
	v->a[22067] = aux_sym_number_token2;
	v->a[22068] = actions(495);
	v->a[22069] = 1;
	v->a[22070] = anon_sym_DOLLAR_LBRACE;
	v->a[22071] = actions(497);
	v->a[22072] = 1;
	v->a[22073] = anon_sym_DOLLAR_LPAREN;
	v->a[22074] = actions(501);
	v->a[22075] = 1;
	v->a[22076] = sym__bare_dollar;
	v->a[22077] = state(233);
	v->a[22078] = 1;
	v->a[22079] = aux_sym_command_repeat2;
	small_parse_table_1104(v);
}

void	small_parse_table_1104(t_small_parse_table_array *v)
{
	v->a[22080] = state(753);
	v->a[22081] = 1;
	v->a[22082] = sym_concatenation;
	v->a[22083] = state(1206);
	v->a[22084] = 1;
	v->a[22085] = sym_subshell;
	v->a[22086] = actions(551);
	v->a[22087] = 2;
	v->a[22088] = sym_raw_string;
	v->a[22089] = sym_word;
	v->a[22090] = state(452);
	v->a[22091] = 6;
	v->a[22092] = sym_arithmetic_expansion;
	v->a[22093] = sym_string;
	v->a[22094] = sym_number;
	v->a[22095] = sym_simple_expansion;
	v->a[22096] = sym_expansion;
	v->a[22097] = sym_command_substitution;
	v->a[22098] = actions(455);
	v->a[22099] = 20;
	small_parse_table_1105(v);
}

/* EOF small_parse_table_220.c */
