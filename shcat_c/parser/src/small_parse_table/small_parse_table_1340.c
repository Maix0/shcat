/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1340.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6700(t_small_parse_table_array *v)
{
	v->a[134000] = anon_sym_AMP_EQ;
	v->a[134001] = anon_sym_CARET_EQ;
	v->a[134002] = anon_sym_PIPE_EQ;
	v->a[134003] = anon_sym_PIPE_PIPE;
	v->a[134004] = anon_sym_AMP_AMP;
	v->a[134005] = anon_sym_EQ_EQ;
	v->a[134006] = anon_sym_BANG_EQ;
	v->a[134007] = anon_sym_LT_EQ;
	v->a[134008] = anon_sym_GT_EQ;
	v->a[134009] = anon_sym_RBRACK;
	v->a[134010] = anon_sym_EQ_TILDE;
	v->a[134011] = anon_sym_QMARK;
	v->a[134012] = 7;
	v->a[134013] = actions(71);
	v->a[134014] = 1;
	v->a[134015] = sym_comment;
	v->a[134016] = actions(1119);
	v->a[134017] = 1;
	v->a[134018] = anon_sym_RBRACK;
	v->a[134019] = actions(6652);
	small_parse_table_6701(v);
}

void	small_parse_table_6701(t_small_parse_table_array *v)
{
	v->a[134020] = 1;
	v->a[134021] = sym__special_character;
	v->a[134022] = actions(6740);
	v->a[134023] = 1;
	v->a[134024] = sym__concat;
	v->a[134025] = state(2474);
	v->a[134026] = 1;
	v->a[134027] = aux_sym__literal_repeat1;
	v->a[134028] = actions(243);
	v->a[134029] = 14;
	v->a[134030] = anon_sym_EQ;
	v->a[134031] = anon_sym_PIPE;
	v->a[134032] = anon_sym_CARET;
	v->a[134033] = anon_sym_AMP;
	v->a[134034] = anon_sym_LT;
	v->a[134035] = anon_sym_GT;
	v->a[134036] = anon_sym_LT_LT;
	v->a[134037] = anon_sym_GT_GT;
	v->a[134038] = anon_sym_PLUS;
	v->a[134039] = anon_sym_DASH;
	small_parse_table_6702(v);
}

void	small_parse_table_6702(t_small_parse_table_array *v)
{
	v->a[134040] = anon_sym_STAR;
	v->a[134041] = anon_sym_SLASH;
	v->a[134042] = anon_sym_PERCENT;
	v->a[134043] = anon_sym_STAR_STAR;
	v->a[134044] = actions(354);
	v->a[134045] = 22;
	v->a[134046] = sym_test_operator;
	v->a[134047] = anon_sym_PLUS_PLUS;
	v->a[134048] = anon_sym_DASH_DASH;
	v->a[134049] = anon_sym_PLUS_EQ;
	v->a[134050] = anon_sym_DASH_EQ;
	v->a[134051] = anon_sym_STAR_EQ;
	v->a[134052] = anon_sym_SLASH_EQ;
	v->a[134053] = anon_sym_PERCENT_EQ;
	v->a[134054] = anon_sym_STAR_STAR_EQ;
	v->a[134055] = anon_sym_LT_LT_EQ;
	v->a[134056] = anon_sym_GT_GT_EQ;
	v->a[134057] = anon_sym_AMP_EQ;
	v->a[134058] = anon_sym_CARET_EQ;
	v->a[134059] = anon_sym_PIPE_EQ;
	small_parse_table_6703(v);
}

void	small_parse_table_6703(t_small_parse_table_array *v)
{
	v->a[134060] = anon_sym_PIPE_PIPE;
	v->a[134061] = anon_sym_AMP_AMP;
	v->a[134062] = anon_sym_EQ_EQ;
	v->a[134063] = anon_sym_BANG_EQ;
	v->a[134064] = anon_sym_LT_EQ;
	v->a[134065] = anon_sym_GT_EQ;
	v->a[134066] = anon_sym_EQ_TILDE;
	v->a[134067] = anon_sym_QMARK;
	v->a[134068] = 6;
	v->a[134069] = actions(71);
	v->a[134070] = 1;
	v->a[134071] = sym_comment;
	v->a[134072] = actions(6656);
	v->a[134073] = 1;
	v->a[134074] = aux_sym_concatenation_token1;
	v->a[134075] = actions(6742);
	v->a[134076] = 1;
	v->a[134077] = sym__concat;
	v->a[134078] = state(2548);
	v->a[134079] = 1;
	small_parse_table_6704(v);
}

void	small_parse_table_6704(t_small_parse_table_array *v)
{
	v->a[134080] = aux_sym_concatenation_repeat1;
	v->a[134081] = actions(1286);
	v->a[134082] = 14;
	v->a[134083] = anon_sym_PIPE;
	v->a[134084] = anon_sym_LT;
	v->a[134085] = anon_sym_GT;
	v->a[134086] = anon_sym_LT_LT;
	v->a[134087] = anon_sym_AMP_GT;
	v->a[134088] = anon_sym_LT_AMP;
	v->a[134089] = anon_sym_GT_AMP;
	v->a[134090] = anon_sym_DOLLAR;
	v->a[134091] = aux_sym_number_token1;
	v->a[134092] = aux_sym_number_token2;
	v->a[134093] = anon_sym_DOLLAR_LPAREN;
	v->a[134094] = anon_sym_BQUOTE;
	v->a[134095] = aux_sym__simple_variable_name_token1;
	v->a[134096] = sym_word;
	v->a[134097] = actions(1288);
	v->a[134098] = 23;
	v->a[134099] = sym_file_descriptor;
	small_parse_table_6705(v);
}

/* EOF small_parse_table_1340.c */
