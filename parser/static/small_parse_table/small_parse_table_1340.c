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
	v->a[134000] = anon_sym_DASH;
	v->a[134001] = anon_sym_STAR;
	v->a[134002] = anon_sym_QMARK;
	v->a[134003] = anon_sym_DOLLAR;
	v->a[134004] = anon_sym_POUND;
	v->a[134005] = anon_sym_AT;
	v->a[134006] = anon_sym_0;
	v->a[134007] = anon_sym__;
	v->a[134008] = 6;
	v->a[134009] = actions(3);
	v->a[134010] = 1;
	v->a[134011] = sym_comment;
	v->a[134012] = actions(7534);
	v->a[134013] = 1;
	v->a[134014] = sym_string_content;
	v->a[134015] = actions(7538);
	v->a[134016] = 1;
	v->a[134017] = sym_variable_name;
	v->a[134018] = actions(7720);
	v->a[134019] = 1;
	small_parse_table_6701(v);
}

void	small_parse_table_6701(t_small_parse_table_array *v)
{
	v->a[134020] = anon_sym_DQUOTE;
	v->a[134021] = actions(7536);
	v->a[134022] = 2;
	v->a[134023] = aux_sym__simple_variable_name_token1;
	v->a[134024] = aux_sym__multiline_variable_name_token1;
	v->a[134025] = actions(7530);
	v->a[134026] = 9;
	v->a[134027] = anon_sym_BANG;
	v->a[134028] = anon_sym_DASH;
	v->a[134029] = anon_sym_STAR;
	v->a[134030] = anon_sym_QMARK;
	v->a[134031] = anon_sym_DOLLAR;
	v->a[134032] = anon_sym_POUND;
	v->a[134033] = anon_sym_AT;
	v->a[134034] = anon_sym_0;
	v->a[134035] = anon_sym__;
	v->a[134036] = 6;
	v->a[134037] = actions(3);
	v->a[134038] = 1;
	v->a[134039] = sym_comment;
	small_parse_table_6702(v);
}

void	small_parse_table_6702(t_small_parse_table_array *v)
{
	v->a[134040] = actions(7534);
	v->a[134041] = 1;
	v->a[134042] = sym_string_content;
	v->a[134043] = actions(7538);
	v->a[134044] = 1;
	v->a[134045] = sym_variable_name;
	v->a[134046] = actions(7722);
	v->a[134047] = 1;
	v->a[134048] = anon_sym_DQUOTE;
	v->a[134049] = actions(7536);
	v->a[134050] = 2;
	v->a[134051] = aux_sym__simple_variable_name_token1;
	v->a[134052] = aux_sym__multiline_variable_name_token1;
	v->a[134053] = actions(7530);
	v->a[134054] = 9;
	v->a[134055] = anon_sym_BANG;
	v->a[134056] = anon_sym_DASH;
	v->a[134057] = anon_sym_STAR;
	v->a[134058] = anon_sym_QMARK;
	v->a[134059] = anon_sym_DOLLAR;
	small_parse_table_6703(v);
}

void	small_parse_table_6703(t_small_parse_table_array *v)
{
	v->a[134060] = anon_sym_POUND;
	v->a[134061] = anon_sym_AT;
	v->a[134062] = anon_sym_0;
	v->a[134063] = anon_sym__;
	v->a[134064] = 3;
	v->a[134065] = actions(3);
	v->a[134066] = 1;
	v->a[134067] = sym_comment;
	v->a[134068] = actions(1182);
	v->a[134069] = 2;
	v->a[134070] = sym_file_descriptor;
	v->a[134071] = aux_sym_heredoc_redirect_token1;
	v->a[134072] = actions(1180);
	v->a[134073] = 12;
	v->a[134074] = anon_sym_AMP_AMP;
	v->a[134075] = anon_sym_PIPE_PIPE;
	v->a[134076] = anon_sym_LT;
	v->a[134077] = anon_sym_GT;
	v->a[134078] = anon_sym_GT_GT;
	v->a[134079] = anon_sym_AMP_GT;
	small_parse_table_6704(v);
}

void	small_parse_table_6704(t_small_parse_table_array *v)
{
	v->a[134080] = anon_sym_AMP_GT_GT;
	v->a[134081] = anon_sym_LT_AMP;
	v->a[134082] = anon_sym_GT_AMP;
	v->a[134083] = anon_sym_GT_PIPE;
	v->a[134084] = anon_sym_LT_AMP_DASH;
	v->a[134085] = anon_sym_GT_AMP_DASH;
	v->a[134086] = 6;
	v->a[134087] = actions(3);
	v->a[134088] = 1;
	v->a[134089] = sym_comment;
	v->a[134090] = actions(7534);
	v->a[134091] = 1;
	v->a[134092] = sym_string_content;
	v->a[134093] = actions(7538);
	v->a[134094] = 1;
	v->a[134095] = sym_variable_name;
	v->a[134096] = actions(7724);
	v->a[134097] = 1;
	v->a[134098] = anon_sym_DQUOTE;
	v->a[134099] = actions(7536);
	small_parse_table_6705(v);
}

/* EOF small_parse_table_1340.c */
