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
	v->a[22000] = sym_file_descriptor;
	v->a[22001] = actions(587);
	v->a[22002] = 1;
	v->a[22003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22004] = actions(590);
	v->a[22005] = 1;
	v->a[22006] = anon_sym_DOLLAR;
	v->a[22007] = actions(593);
	v->a[22008] = 1;
	v->a[22009] = anon_sym_DQUOTE;
	v->a[22010] = actions(596);
	v->a[22011] = 1;
	v->a[22012] = anon_sym_DOLLAR_LBRACE;
	v->a[22013] = actions(599);
	v->a[22014] = 1;
	v->a[22015] = anon_sym_DOLLAR_LPAREN;
	v->a[22016] = actions(602);
	v->a[22017] = 1;
	v->a[22018] = anon_sym_BQUOTE;
	v->a[22019] = actions(605);
	small_parse_table_1101(v);
}

void	small_parse_table_1101(t_small_parse_table_array *v)
{
	v->a[22020] = 1;
	v->a[22021] = sym__bare_dollar;
	v->a[22022] = state(199);
	v->a[22023] = 1;
	v->a[22024] = aux_sym_command_repeat2;
	v->a[22025] = state(729);
	v->a[22026] = 1;
	v->a[22027] = sym_concatenation;
	v->a[22028] = actions(584);
	v->a[22029] = 3;
	v->a[22030] = sym_raw_string;
	v->a[22031] = sym_number;
	v->a[22032] = sym_word;
	v->a[22033] = state(334);
	v->a[22034] = 5;
	v->a[22035] = sym_arithmetic_expansion;
	v->a[22036] = sym_string;
	v->a[22037] = sym_simple_expansion;
	v->a[22038] = sym_expansion;
	v->a[22039] = sym_command_substitution;
	small_parse_table_1102(v);
}

void	small_parse_table_1102(t_small_parse_table_array *v)
{
	v->a[22040] = actions(516);
	v->a[22041] = 20;
	v->a[22042] = anon_sym_PIPE;
	v->a[22043] = anon_sym_RPAREN;
	v->a[22044] = anon_sym_SEMI_SEMI;
	v->a[22045] = anon_sym_AMP_AMP;
	v->a[22046] = anon_sym_PIPE_PIPE;
	v->a[22047] = anon_sym_LT;
	v->a[22048] = anon_sym_GT;
	v->a[22049] = anon_sym_GT_GT;
	v->a[22050] = anon_sym_AMP_GT;
	v->a[22051] = anon_sym_AMP_GT_GT;
	v->a[22052] = anon_sym_LT_AMP;
	v->a[22053] = anon_sym_GT_AMP;
	v->a[22054] = anon_sym_GT_PIPE;
	v->a[22055] = anon_sym_LT_AMP_DASH;
	v->a[22056] = anon_sym_GT_AMP_DASH;
	v->a[22057] = anon_sym_LT_LT;
	v->a[22058] = anon_sym_LT_LT_DASH;
	v->a[22059] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1103(v);
}

void	small_parse_table_1103(t_small_parse_table_array *v)
{
	v->a[22060] = anon_sym_AMP;
	v->a[22061] = anon_sym_SEMI;
	v->a[22062] = 14;
	v->a[22063] = actions(3);
	v->a[22064] = 1;
	v->a[22065] = sym_comment;
	v->a[22066] = actions(497);
	v->a[22067] = 1;
	v->a[22068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22069] = actions(499);
	v->a[22070] = 1;
	v->a[22071] = anon_sym_DOLLAR;
	v->a[22072] = actions(501);
	v->a[22073] = 1;
	v->a[22074] = anon_sym_DQUOTE;
	v->a[22075] = actions(503);
	v->a[22076] = 1;
	v->a[22077] = anon_sym_DOLLAR_LBRACE;
	v->a[22078] = actions(505);
	v->a[22079] = 1;
	small_parse_table_1104(v);
}

void	small_parse_table_1104(t_small_parse_table_array *v)
{
	v->a[22080] = anon_sym_DOLLAR_LPAREN;
	v->a[22081] = actions(507);
	v->a[22082] = 1;
	v->a[22083] = anon_sym_BQUOTE;
	v->a[22084] = actions(509);
	v->a[22085] = 1;
	v->a[22086] = sym__bare_dollar;
	v->a[22087] = actions(555);
	v->a[22088] = 1;
	v->a[22089] = sym_file_descriptor;
	v->a[22090] = state(199);
	v->a[22091] = 1;
	v->a[22092] = aux_sym_command_repeat2;
	v->a[22093] = state(729);
	v->a[22094] = 1;
	v->a[22095] = sym_concatenation;
	v->a[22096] = actions(495);
	v->a[22097] = 3;
	v->a[22098] = sym_raw_string;
	v->a[22099] = sym_number;
	small_parse_table_1105(v);
}

/* EOF small_parse_table_220.c */
