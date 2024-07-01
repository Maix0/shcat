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
	v->a[22000] = anon_sym_LT_LT_DASH;
	v->a[22001] = aux_sym_heredoc_redirect_token1;
	v->a[22002] = anon_sym_AMP;
	v->a[22003] = anon_sym_SEMI;
	v->a[22004] = 5;
	v->a[22005] = actions(3);
	v->a[22006] = 1;
	v->a[22007] = sym_comment;
	v->a[22008] = actions(602);
	v->a[22009] = 2;
	v->a[22010] = sym_file_descriptor;
	v->a[22011] = sym_variable_name;
	v->a[22012] = state(209);
	v->a[22013] = 2;
	v->a[22014] = sym_concatenation;
	v->a[22015] = aux_sym_for_statement_repeat1;
	v->a[22016] = state(442);
	v->a[22017] = 5;
	v->a[22018] = sym_arithmetic_expansion;
	v->a[22019] = sym_string;
	small_parse_table_1101(v);
}

void	small_parse_table_1101(t_small_parse_table_array *v)
{
	v->a[22020] = sym_simple_expansion;
	v->a[22021] = sym_expansion;
	v->a[22022] = sym_command_substitution;
	v->a[22023] = actions(604);
	v->a[22024] = 27;
	v->a[22025] = anon_sym_PIPE;
	v->a[22026] = anon_sym_RPAREN;
	v->a[22027] = anon_sym_SEMI_SEMI;
	v->a[22028] = anon_sym_AMP_AMP;
	v->a[22029] = anon_sym_PIPE_PIPE;
	v->a[22030] = anon_sym_LT;
	v->a[22031] = anon_sym_GT;
	v->a[22032] = anon_sym_GT_GT;
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
	v->a[22041] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22042] = anon_sym_AMP;
	v->a[22043] = anon_sym_DOLLAR;
	v->a[22044] = anon_sym_DQUOTE;
	v->a[22045] = sym_raw_string;
	v->a[22046] = sym_number;
	v->a[22047] = anon_sym_DOLLAR_LBRACE;
	v->a[22048] = anon_sym_DOLLAR_LPAREN;
	v->a[22049] = anon_sym_BQUOTE;
	v->a[22050] = sym_word;
	v->a[22051] = anon_sym_SEMI;
	v->a[22052] = 14;
	v->a[22053] = actions(3);
	v->a[22054] = 1;
	v->a[22055] = sym_comment;
	v->a[22056] = actions(477);
	v->a[22057] = 1;
	v->a[22058] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22059] = actions(479);
	small_parse_table_1103(v);
}

void	small_parse_table_1103(t_small_parse_table_array *v)
{
	v->a[22060] = 1;
	v->a[22061] = anon_sym_DOLLAR;
	v->a[22062] = actions(481);
	v->a[22063] = 1;
	v->a[22064] = anon_sym_DQUOTE;
	v->a[22065] = actions(483);
	v->a[22066] = 1;
	v->a[22067] = anon_sym_DOLLAR_LBRACE;
	v->a[22068] = actions(485);
	v->a[22069] = 1;
	v->a[22070] = anon_sym_DOLLAR_LPAREN;
	v->a[22071] = actions(487);
	v->a[22072] = 1;
	v->a[22073] = anon_sym_BQUOTE;
	v->a[22074] = actions(489);
	v->a[22075] = 1;
	v->a[22076] = sym__bare_dollar;
	v->a[22077] = state(194);
	v->a[22078] = 1;
	v->a[22079] = aux_sym_command_repeat2;
	small_parse_table_1104(v);
}

void	small_parse_table_1104(t_small_parse_table_array *v)
{
	v->a[22080] = state(731);
	v->a[22081] = 1;
	v->a[22082] = sym_concatenation;
	v->a[22083] = actions(571);
	v->a[22084] = 2;
	v->a[22085] = sym_file_descriptor;
	v->a[22086] = ts_builtin_sym_end;
	v->a[22087] = actions(475);
	v->a[22088] = 3;
	v->a[22089] = sym_raw_string;
	v->a[22090] = sym_number;
	v->a[22091] = sym_word;
	v->a[22092] = state(476);
	v->a[22093] = 5;
	v->a[22094] = sym_arithmetic_expansion;
	v->a[22095] = sym_string;
	v->a[22096] = sym_simple_expansion;
	v->a[22097] = sym_expansion;
	v->a[22098] = sym_command_substitution;
	v->a[22099] = actions(569);
	small_parse_table_1105(v);
}

/* EOF small_parse_table_220.c */
