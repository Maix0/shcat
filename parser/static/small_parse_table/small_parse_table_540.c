/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_540.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2700(t_small_parse_table_array *v)
{
	v->a[54000] = sym_command_substitution;
	v->a[54001] = 10;
	v->a[54002] = actions(3);
	v->a[54003] = 1;
	v->a[54004] = sym_comment;
	v->a[54005] = actions(25);
	v->a[54006] = 1;
	v->a[54007] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54008] = actions(27);
	v->a[54009] = 1;
	v->a[54010] = anon_sym_DOLLAR;
	v->a[54011] = actions(29);
	v->a[54012] = 1;
	v->a[54013] = anon_sym_DQUOTE;
	v->a[54014] = actions(33);
	v->a[54015] = 1;
	v->a[54016] = anon_sym_DOLLAR_LBRACE;
	v->a[54017] = actions(35);
	v->a[54018] = 1;
	v->a[54019] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2701(v);
}

void	small_parse_table_2701(t_small_parse_table_array *v)
{
	v->a[54020] = actions(37);
	v->a[54021] = 1;
	v->a[54022] = anon_sym_BQUOTE;
	v->a[54023] = actions(2079);
	v->a[54024] = 1;
	v->a[54025] = sym__bare_dollar;
	v->a[54026] = actions(2077);
	v->a[54027] = 5;
	v->a[54028] = aux_sym_concatenation_token1;
	v->a[54029] = sym_raw_string;
	v->a[54030] = sym_number;
	v->a[54031] = sym__comment_word;
	v->a[54032] = sym_word;
	v->a[54033] = state(441);
	v->a[54034] = 5;
	v->a[54035] = sym_arithmetic_expansion;
	v->a[54036] = sym_string;
	v->a[54037] = sym_simple_expansion;
	v->a[54038] = sym_expansion;
	v->a[54039] = sym_command_substitution;
	small_parse_table_2702(v);
}

void	small_parse_table_2702(t_small_parse_table_array *v)
{
	v->a[54040] = 12;
	v->a[54041] = actions(3);
	v->a[54042] = 1;
	v->a[54043] = sym_comment;
	v->a[54044] = actions(2015);
	v->a[54045] = 1;
	v->a[54046] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54047] = actions(2017);
	v->a[54048] = 1;
	v->a[54049] = anon_sym_DOLLAR;
	v->a[54050] = actions(2019);
	v->a[54051] = 1;
	v->a[54052] = anon_sym_DQUOTE;
	v->a[54053] = actions(2021);
	v->a[54054] = 1;
	v->a[54055] = anon_sym_DOLLAR_LBRACE;
	v->a[54056] = actions(2023);
	v->a[54057] = 1;
	v->a[54058] = anon_sym_DOLLAR_LPAREN;
	v->a[54059] = actions(2025);
	small_parse_table_2703(v);
}

void	small_parse_table_2703(t_small_parse_table_array *v)
{
	v->a[54060] = 1;
	v->a[54061] = anon_sym_BQUOTE;
	v->a[54062] = actions(2073);
	v->a[54063] = 1;
	v->a[54064] = sym__comment_word;
	v->a[54065] = actions(2075);
	v->a[54066] = 1;
	v->a[54067] = sym__empty_value;
	v->a[54068] = state(567);
	v->a[54069] = 1;
	v->a[54070] = sym_concatenation;
	v->a[54071] = actions(2081);
	v->a[54072] = 3;
	v->a[54073] = sym_raw_string;
	v->a[54074] = sym_number;
	v->a[54075] = sym_word;
	v->a[54076] = state(619);
	v->a[54077] = 5;
	v->a[54078] = sym_arithmetic_expansion;
	v->a[54079] = sym_string;
	small_parse_table_2704(v);
}

void	small_parse_table_2704(t_small_parse_table_array *v)
{
	v->a[54080] = sym_simple_expansion;
	v->a[54081] = sym_expansion;
	v->a[54082] = sym_command_substitution;
	v->a[54083] = 12;
	v->a[54084] = actions(3);
	v->a[54085] = 1;
	v->a[54086] = sym_comment;
	v->a[54087] = actions(930);
	v->a[54088] = 1;
	v->a[54089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54090] = actions(932);
	v->a[54091] = 1;
	v->a[54092] = anon_sym_DOLLAR;
	v->a[54093] = actions(934);
	v->a[54094] = 1;
	v->a[54095] = anon_sym_DQUOTE;
	v->a[54096] = actions(936);
	v->a[54097] = 1;
	v->a[54098] = anon_sym_DOLLAR_LBRACE;
	v->a[54099] = actions(938);
	small_parse_table_2705(v);
}

/* EOF small_parse_table_540.c */
