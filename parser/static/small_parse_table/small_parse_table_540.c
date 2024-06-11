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
	v->a[54000] = anon_sym_GT_GT;
	v->a[54001] = anon_sym_AMP_GT;
	v->a[54002] = anon_sym_AMP_GT_GT;
	v->a[54003] = anon_sym_LT_AMP;
	v->a[54004] = anon_sym_GT_AMP;
	v->a[54005] = anon_sym_GT_PIPE;
	v->a[54006] = anon_sym_LT_AMP_DASH;
	v->a[54007] = anon_sym_GT_AMP_DASH;
	v->a[54008] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54009] = anon_sym_DOLLAR;
	v->a[54010] = anon_sym_DQUOTE;
	v->a[54011] = sym_raw_string;
	v->a[54012] = sym_number;
	v->a[54013] = anon_sym_DOLLAR_LBRACE;
	v->a[54014] = anon_sym_DOLLAR_LPAREN;
	v->a[54015] = anon_sym_BQUOTE;
	v->a[54016] = sym_word;
	v->a[54017] = 4;
	v->a[54018] = actions(3);
	v->a[54019] = 1;
	small_parse_table_2701(v);
}

void	small_parse_table_2701(t_small_parse_table_array *v)
{
	v->a[54020] = sym_comment;
	v->a[54021] = actions(1718);
	v->a[54022] = 1;
	v->a[54023] = ts_builtin_sym_end;
	v->a[54024] = actions(1556);
	v->a[54025] = 2;
	v->a[54026] = sym_file_descriptor;
	v->a[54027] = sym_variable_name;
	v->a[54028] = actions(1552);
	v->a[54029] = 27;
	v->a[54030] = anon_sym_for;
	v->a[54031] = anon_sym_while;
	v->a[54032] = anon_sym_until;
	v->a[54033] = anon_sym_if;
	v->a[54034] = anon_sym_case;
	v->a[54035] = anon_sym_LPAREN;
	v->a[54036] = anon_sym_LBRACE;
	v->a[54037] = anon_sym_BANG;
	v->a[54038] = anon_sym_LT;
	v->a[54039] = anon_sym_GT;
	small_parse_table_2702(v);
}

void	small_parse_table_2702(t_small_parse_table_array *v)
{
	v->a[54040] = anon_sym_GT_GT;
	v->a[54041] = anon_sym_AMP_GT;
	v->a[54042] = anon_sym_AMP_GT_GT;
	v->a[54043] = anon_sym_LT_AMP;
	v->a[54044] = anon_sym_GT_AMP;
	v->a[54045] = anon_sym_GT_PIPE;
	v->a[54046] = anon_sym_LT_AMP_DASH;
	v->a[54047] = anon_sym_GT_AMP_DASH;
	v->a[54048] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54049] = anon_sym_DOLLAR;
	v->a[54050] = anon_sym_DQUOTE;
	v->a[54051] = sym_raw_string;
	v->a[54052] = sym_number;
	v->a[54053] = anon_sym_DOLLAR_LBRACE;
	v->a[54054] = anon_sym_DOLLAR_LPAREN;
	v->a[54055] = anon_sym_BQUOTE;
	v->a[54056] = sym_word;
	v->a[54057] = 12;
	v->a[54058] = actions(3);
	v->a[54059] = 1;
	small_parse_table_2703(v);
}

void	small_parse_table_2703(t_small_parse_table_array *v)
{
	v->a[54060] = sym_comment;
	v->a[54061] = actions(543);
	v->a[54062] = 1;
	v->a[54063] = sym_file_descriptor;
	v->a[54064] = actions(1749);
	v->a[54065] = 1;
	v->a[54066] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54067] = actions(1751);
	v->a[54068] = 1;
	v->a[54069] = anon_sym_DOLLAR;
	v->a[54070] = actions(1753);
	v->a[54071] = 1;
	v->a[54072] = anon_sym_DQUOTE;
	v->a[54073] = actions(1755);
	v->a[54074] = 1;
	v->a[54075] = anon_sym_DOLLAR_LBRACE;
	v->a[54076] = actions(1757);
	v->a[54077] = 1;
	v->a[54078] = anon_sym_DOLLAR_LPAREN;
	v->a[54079] = actions(1759);
	small_parse_table_2704(v);
}

void	small_parse_table_2704(t_small_parse_table_array *v)
{
	v->a[54080] = 1;
	v->a[54081] = anon_sym_BQUOTE;
	v->a[54082] = state(853);
	v->a[54083] = 2;
	v->a[54084] = sym_concatenation;
	v->a[54085] = aux_sym_for_statement_repeat1;
	v->a[54086] = actions(1747);
	v->a[54087] = 3;
	v->a[54088] = sym_raw_string;
	v->a[54089] = sym_number;
	v->a[54090] = sym_word;
	v->a[54091] = state(1084);
	v->a[54092] = 5;
	v->a[54093] = sym_arithmetic_expansion;
	v->a[54094] = sym_string;
	v->a[54095] = sym_simple_expansion;
	v->a[54096] = sym_expansion;
	v->a[54097] = sym_command_substitution;
	v->a[54098] = actions(541);
	v->a[54099] = 13;
	small_parse_table_2705(v);
}

/* EOF small_parse_table_540.c */
