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
	v->a[22000] = 1;
	v->a[22001] = anon_sym_DOLLAR;
	v->a[22002] = actions(481);
	v->a[22003] = 1;
	v->a[22004] = anon_sym_DQUOTE;
	v->a[22005] = actions(483);
	v->a[22006] = 1;
	v->a[22007] = anon_sym_DOLLAR_LBRACE;
	v->a[22008] = actions(485);
	v->a[22009] = 1;
	v->a[22010] = anon_sym_DOLLAR_LPAREN;
	v->a[22011] = actions(487);
	v->a[22012] = 1;
	v->a[22013] = anon_sym_BQUOTE;
	v->a[22014] = actions(489);
	v->a[22015] = 1;
	v->a[22016] = sym__bare_dollar;
	v->a[22017] = actions(542);
	v->a[22018] = 1;
	v->a[22019] = sym_file_descriptor;
	small_parse_table_1101(v);
}

void	small_parse_table_1101(t_small_parse_table_array *v)
{
	v->a[22020] = state(206);
	v->a[22021] = 1;
	v->a[22022] = aux_sym_command_repeat2;
	v->a[22023] = state(712);
	v->a[22024] = 1;
	v->a[22025] = sym_concatenation;
	v->a[22026] = actions(475);
	v->a[22027] = 3;
	v->a[22028] = sym_raw_string;
	v->a[22029] = sym_number;
	v->a[22030] = sym_word;
	v->a[22031] = state(334);
	v->a[22032] = 5;
	v->a[22033] = sym_arithmetic_expansion;
	v->a[22034] = sym_string;
	v->a[22035] = sym_simple_expansion;
	v->a[22036] = sym_expansion;
	v->a[22037] = sym_command_substitution;
	v->a[22038] = actions(544);
	v->a[22039] = 20;
	small_parse_table_1102(v);
}

void	small_parse_table_1102(t_small_parse_table_array *v)
{
	v->a[22040] = anon_sym_PIPE;
	v->a[22041] = anon_sym_RPAREN;
	v->a[22042] = anon_sym_SEMI_SEMI;
	v->a[22043] = anon_sym_AMP_AMP;
	v->a[22044] = anon_sym_PIPE_PIPE;
	v->a[22045] = anon_sym_LT;
	v->a[22046] = anon_sym_GT;
	v->a[22047] = anon_sym_GT_GT;
	v->a[22048] = anon_sym_AMP_GT;
	v->a[22049] = anon_sym_AMP_GT_GT;
	v->a[22050] = anon_sym_LT_AMP;
	v->a[22051] = anon_sym_GT_AMP;
	v->a[22052] = anon_sym_GT_PIPE;
	v->a[22053] = anon_sym_LT_AMP_DASH;
	v->a[22054] = anon_sym_GT_AMP_DASH;
	v->a[22055] = anon_sym_LT_LT;
	v->a[22056] = anon_sym_LT_LT_DASH;
	v->a[22057] = aux_sym_heredoc_redirect_token1;
	v->a[22058] = anon_sym_AMP;
	v->a[22059] = anon_sym_SEMI;
	small_parse_table_1103(v);
}

void	small_parse_table_1103(t_small_parse_table_array *v)
{
	v->a[22060] = 14;
	v->a[22061] = actions(3);
	v->a[22062] = 1;
	v->a[22063] = sym_comment;
	v->a[22064] = actions(497);
	v->a[22065] = 1;
	v->a[22066] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22067] = actions(499);
	v->a[22068] = 1;
	v->a[22069] = anon_sym_DOLLAR;
	v->a[22070] = actions(501);
	v->a[22071] = 1;
	v->a[22072] = anon_sym_DQUOTE;
	v->a[22073] = actions(503);
	v->a[22074] = 1;
	v->a[22075] = anon_sym_DOLLAR_LBRACE;
	v->a[22076] = actions(505);
	v->a[22077] = 1;
	v->a[22078] = anon_sym_DOLLAR_LPAREN;
	v->a[22079] = actions(507);
	small_parse_table_1104(v);
}

void	small_parse_table_1104(t_small_parse_table_array *v)
{
	v->a[22080] = 1;
	v->a[22081] = anon_sym_BQUOTE;
	v->a[22082] = actions(509);
	v->a[22083] = 1;
	v->a[22084] = sym__bare_dollar;
	v->a[22085] = actions(552);
	v->a[22086] = 1;
	v->a[22087] = sym_file_descriptor;
	v->a[22088] = state(198);
	v->a[22089] = 1;
	v->a[22090] = aux_sym_command_repeat2;
	v->a[22091] = state(684);
	v->a[22092] = 1;
	v->a[22093] = sym_concatenation;
	v->a[22094] = actions(495);
	v->a[22095] = 3;
	v->a[22096] = sym_raw_string;
	v->a[22097] = sym_number;
	v->a[22098] = sym_word;
	v->a[22099] = state(385);
	small_parse_table_1105(v);
}

/* EOF small_parse_table_220.c */
