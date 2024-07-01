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
	v->a[22000] = anon_sym_SEMI_SEMI;
	v->a[22001] = aux_sym_heredoc_redirect_token1;
	v->a[22002] = anon_sym_AMP;
	v->a[22003] = anon_sym_SEMI;
	v->a[22004] = actions(734);
	v->a[22005] = 16;
	v->a[22006] = anon_sym_LT;
	v->a[22007] = anon_sym_GT;
	v->a[22008] = anon_sym_GT_GT;
	v->a[22009] = anon_sym_LT_AMP;
	v->a[22010] = anon_sym_GT_AMP;
	v->a[22011] = anon_sym_GT_PIPE;
	v->a[22012] = anon_sym_LT_GT;
	v->a[22013] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22014] = anon_sym_DOLLAR;
	v->a[22015] = anon_sym_DQUOTE;
	v->a[22016] = sym_raw_string;
	v->a[22017] = sym_number;
	v->a[22018] = anon_sym_DOLLAR_LBRACE;
	v->a[22019] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1101(v);
}

void	small_parse_table_1101(t_small_parse_table_array *v)
{
	v->a[22020] = anon_sym_BQUOTE;
	v->a[22021] = sym_word;
	v->a[22022] = 13;
	v->a[22023] = actions(3);
	v->a[22024] = 1;
	v->a[22025] = sym_comment;
	v->a[22026] = actions(459);
	v->a[22027] = 1;
	v->a[22028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22029] = actions(461);
	v->a[22030] = 1;
	v->a[22031] = anon_sym_DOLLAR;
	v->a[22032] = actions(463);
	v->a[22033] = 1;
	v->a[22034] = anon_sym_DQUOTE;
	v->a[22035] = actions(465);
	v->a[22036] = 1;
	v->a[22037] = anon_sym_DOLLAR_LBRACE;
	v->a[22038] = actions(467);
	v->a[22039] = 1;
	small_parse_table_1102(v);
}

void	small_parse_table_1102(t_small_parse_table_array *v)
{
	v->a[22040] = anon_sym_DOLLAR_LPAREN;
	v->a[22041] = actions(471);
	v->a[22042] = 1;
	v->a[22043] = sym__bare_dollar;
	v->a[22044] = actions(560);
	v->a[22045] = 1;
	v->a[22046] = sym_file_descriptor;
	v->a[22047] = state(235);
	v->a[22048] = 1;
	v->a[22049] = aux_sym_command_repeat2;
	v->a[22050] = state(627);
	v->a[22051] = 1;
	v->a[22052] = sym_concatenation;
	v->a[22053] = actions(493);
	v->a[22054] = 3;
	v->a[22055] = sym_raw_string;
	v->a[22056] = sym_number;
	v->a[22057] = sym_word;
	v->a[22058] = state(469);
	v->a[22059] = 5;
	small_parse_table_1103(v);
}

void	small_parse_table_1103(t_small_parse_table_array *v)
{
	v->a[22060] = sym_arithmetic_expansion;
	v->a[22061] = sym_string;
	v->a[22062] = sym_simple_expansion;
	v->a[22063] = sym_expansion;
	v->a[22064] = sym_command_substitution;
	v->a[22065] = actions(562);
	v->a[22066] = 17;
	v->a[22067] = anon_sym_PIPE;
	v->a[22068] = anon_sym_SEMI_SEMI;
	v->a[22069] = anon_sym_AMP_AMP;
	v->a[22070] = anon_sym_PIPE_PIPE;
	v->a[22071] = anon_sym_LT;
	v->a[22072] = anon_sym_GT;
	v->a[22073] = anon_sym_GT_GT;
	v->a[22074] = anon_sym_LT_AMP;
	v->a[22075] = anon_sym_GT_AMP;
	v->a[22076] = anon_sym_GT_PIPE;
	v->a[22077] = anon_sym_LT_GT;
	v->a[22078] = anon_sym_LT_LT;
	v->a[22079] = anon_sym_LT_LT_DASH;
	small_parse_table_1104(v);
}

void	small_parse_table_1104(t_small_parse_table_array *v)
{
	v->a[22080] = aux_sym_heredoc_redirect_token1;
	v->a[22081] = anon_sym_AMP;
	v->a[22082] = anon_sym_BQUOTE;
	v->a[22083] = anon_sym_SEMI;
	v->a[22084] = 3;
	v->a[22085] = actions(664);
	v->a[22086] = 1;
	v->a[22087] = sym_comment;
	v->a[22088] = actions(751);
	v->a[22089] = 13;
	v->a[22090] = anon_sym_PIPE;
	v->a[22091] = anon_sym_EQ;
	v->a[22092] = anon_sym_LT;
	v->a[22093] = anon_sym_GT;
	v->a[22094] = anon_sym_GT_GT;
	v->a[22095] = anon_sym_LT_LT;
	v->a[22096] = anon_sym_CARET;
	v->a[22097] = anon_sym_AMP;
	v->a[22098] = anon_sym_PLUS;
	v->a[22099] = anon_sym_DASH;
	small_parse_table_1105(v);
}

/* EOF small_parse_table_220.c */
