/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_860.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4300(t_small_parse_table_array *v)
{
	v->a[86000] = sym_expansion;
	v->a[86001] = sym_command_substitution;
	v->a[86002] = 12;
	v->a[86003] = actions(3);
	v->a[86004] = 1;
	v->a[86005] = sym_comment;
	v->a[86006] = actions(884);
	v->a[86007] = 1;
	v->a[86008] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86009] = actions(886);
	v->a[86010] = 1;
	v->a[86011] = anon_sym_DOLLAR;
	v->a[86012] = actions(888);
	v->a[86013] = 1;
	v->a[86014] = anon_sym_DQUOTE;
	v->a[86015] = actions(890);
	v->a[86016] = 1;
	v->a[86017] = anon_sym_DOLLAR_LBRACE;
	v->a[86018] = actions(892);
	v->a[86019] = 1;
	small_parse_table_4301(v);
}

void	small_parse_table_4301(t_small_parse_table_array *v)
{
	v->a[86020] = anon_sym_DOLLAR_LPAREN;
	v->a[86021] = actions(894);
	v->a[86022] = 1;
	v->a[86023] = anon_sym_BQUOTE;
	v->a[86024] = actions(3471);
	v->a[86025] = 1;
	v->a[86026] = aux_sym_heredoc_redirect_token1;
	v->a[86027] = state(1613);
	v->a[86028] = 1;
	v->a[86029] = aux_sym__heredoc_command;
	v->a[86030] = state(2098);
	v->a[86031] = 1;
	v->a[86032] = sym_concatenation;
	v->a[86033] = actions(872);
	v->a[86034] = 3;
	v->a[86035] = sym_raw_string;
	v->a[86036] = sym_number;
	v->a[86037] = sym_word;
	v->a[86038] = state(1944);
	v->a[86039] = 5;
	small_parse_table_4302(v);
}

void	small_parse_table_4302(t_small_parse_table_array *v)
{
	v->a[86040] = sym_arithmetic_expansion;
	v->a[86041] = sym_string;
	v->a[86042] = sym_simple_expansion;
	v->a[86043] = sym_expansion;
	v->a[86044] = sym_command_substitution;
	v->a[86045] = 10;
	v->a[86046] = actions(3);
	v->a[86047] = 1;
	v->a[86048] = sym_comment;
	v->a[86049] = actions(59);
	v->a[86050] = 1;
	v->a[86051] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86052] = actions(63);
	v->a[86053] = 1;
	v->a[86054] = anon_sym_DQUOTE;
	v->a[86055] = actions(67);
	v->a[86056] = 1;
	v->a[86057] = anon_sym_DOLLAR_LBRACE;
	v->a[86058] = actions(69);
	v->a[86059] = 1;
	small_parse_table_4303(v);
}

void	small_parse_table_4303(t_small_parse_table_array *v)
{
	v->a[86060] = anon_sym_DOLLAR_LPAREN;
	v->a[86061] = actions(71);
	v->a[86062] = 1;
	v->a[86063] = anon_sym_BQUOTE;
	v->a[86064] = actions(3152);
	v->a[86065] = 1;
	v->a[86066] = sym__bare_dollar;
	v->a[86067] = actions(3473);
	v->a[86068] = 1;
	v->a[86069] = anon_sym_DOLLAR;
	v->a[86070] = actions(3150);
	v->a[86071] = 5;
	v->a[86072] = aux_sym_concatenation_token1;
	v->a[86073] = sym_raw_string;
	v->a[86074] = sym_number;
	v->a[86075] = sym__comment_word;
	v->a[86076] = sym_word;
	v->a[86077] = state(326);
	v->a[86078] = 5;
	v->a[86079] = sym_arithmetic_expansion;
	small_parse_table_4304(v);
}

void	small_parse_table_4304(t_small_parse_table_array *v)
{
	v->a[86080] = sym_string;
	v->a[86081] = sym_simple_expansion;
	v->a[86082] = sym_expansion;
	v->a[86083] = sym_command_substitution;
	v->a[86084] = 5;
	v->a[86085] = actions(1094);
	v->a[86086] = 1;
	v->a[86087] = sym_comment;
	v->a[86088] = actions(2318);
	v->a[86089] = 1;
	v->a[86090] = anon_sym_PIPE;
	v->a[86091] = state(1663);
	v->a[86092] = 1;
	v->a[86093] = aux_sym_pipeline_repeat1;
	v->a[86094] = actions(2321);
	v->a[86095] = 6;
	v->a[86096] = anon_sym_LT;
	v->a[86097] = anon_sym_GT;
	v->a[86098] = anon_sym_AMP_GT;
	v->a[86099] = anon_sym_LT_AMP;
	small_parse_table_4305(v);
}

/* EOF small_parse_table_860.c */
