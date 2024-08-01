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
	v->a[22000] = sym_raw_string;
	v->a[22001] = sym_number;
	v->a[22002] = anon_sym_DOLLAR_LBRACE;
	v->a[22003] = anon_sym_DOLLAR_LPAREN;
	v->a[22004] = anon_sym_BQUOTE;
	v->a[22005] = sym_word;
	v->a[22006] = anon_sym_SEMI;
	v->a[22007] = 13;
	v->a[22008] = actions(3);
	v->a[22009] = 1;
	v->a[22010] = sym_comment;
	v->a[22011] = actions(315);
	v->a[22012] = 1;
	v->a[22013] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22014] = actions(317);
	v->a[22015] = 1;
	v->a[22016] = anon_sym_DOLLAR;
	v->a[22017] = actions(319);
	v->a[22018] = 1;
	v->a[22019] = anon_sym_DQUOTE;
	small_parse_table_1101(v);
}

void	small_parse_table_1101(t_small_parse_table_array *v)
{
	v->a[22020] = actions(323);
	v->a[22021] = 1;
	v->a[22022] = anon_sym_DOLLAR_LBRACE;
	v->a[22023] = actions(325);
	v->a[22024] = 1;
	v->a[22025] = anon_sym_DOLLAR_LPAREN;
	v->a[22026] = actions(327);
	v->a[22027] = 1;
	v->a[22028] = anon_sym_BQUOTE;
	v->a[22029] = actions(915);
	v->a[22030] = 1;
	v->a[22031] = sym__bare_dollar;
	v->a[22032] = state(262);
	v->a[22033] = 1;
	v->a[22034] = aux_sym_command_repeat2;
	v->a[22035] = state(775);
	v->a[22036] = 1;
	v->a[22037] = sym_concatenation;
	v->a[22038] = actions(913);
	v->a[22039] = 3;
	small_parse_table_1102(v);
}

void	small_parse_table_1102(t_small_parse_table_array *v)
{
	v->a[22040] = sym_raw_string;
	v->a[22041] = sym_number;
	v->a[22042] = sym_word;
	v->a[22043] = state(600);
	v->a[22044] = 5;
	v->a[22045] = sym_arithmetic_expansion;
	v->a[22046] = sym_string;
	v->a[22047] = sym_simple_expansion;
	v->a[22048] = sym_expansion;
	v->a[22049] = sym_command_substitution;
	v->a[22050] = actions(417);
	v->a[22051] = 7;
	v->a[22052] = anon_sym_PIPE;
	v->a[22053] = anon_sym_AMP_AMP;
	v->a[22054] = anon_sym_PIPE_PIPE;
	v->a[22055] = anon_sym_LT;
	v->a[22056] = anon_sym_GT;
	v->a[22057] = anon_sym_GT_GT;
	v->a[22058] = anon_sym_LT_LT;
	v->a[22059] = 6;
	small_parse_table_1103(v);
}

void	small_parse_table_1103(t_small_parse_table_array *v)
{
	v->a[22060] = actions(3);
	v->a[22061] = 1;
	v->a[22062] = sym_comment;
	v->a[22063] = actions(917);
	v->a[22064] = 1;
	v->a[22065] = sym_variable_name;
	v->a[22066] = actions(991);
	v->a[22067] = 1;
	v->a[22068] = aux_sym_concatenation_token1;
	v->a[22069] = actions(993);
	v->a[22070] = 1;
	v->a[22071] = sym__concat;
	v->a[22072] = state(288);
	v->a[22073] = 1;
	v->a[22074] = aux_sym_concatenation_repeat1;
	v->a[22075] = actions(919);
	v->a[22076] = 20;
	v->a[22077] = anon_sym_esac;
	v->a[22078] = anon_sym_PIPE;
	v->a[22079] = anon_sym_SEMI_SEMI;
	small_parse_table_1104(v);
}

void	small_parse_table_1104(t_small_parse_table_array *v)
{
	v->a[22080] = anon_sym_AMP_AMP;
	v->a[22081] = anon_sym_PIPE_PIPE;
	v->a[22082] = anon_sym_LT;
	v->a[22083] = anon_sym_GT;
	v->a[22084] = anon_sym_GT_GT;
	v->a[22085] = anon_sym_LT_LT;
	v->a[22086] = aux_sym_heredoc_redirect_token1;
	v->a[22087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22088] = anon_sym_DOLLAR;
	v->a[22089] = anon_sym_DQUOTE;
	v->a[22090] = sym_raw_string;
	v->a[22091] = sym_number;
	v->a[22092] = anon_sym_DOLLAR_LBRACE;
	v->a[22093] = anon_sym_DOLLAR_LPAREN;
	v->a[22094] = anon_sym_BQUOTE;
	v->a[22095] = sym_word;
	v->a[22096] = anon_sym_SEMI;
	v->a[22097] = 6;
	v->a[22098] = actions(3);
	v->a[22099] = 1;
	small_parse_table_1105(v);
}

/* EOF small_parse_table_220.c */
