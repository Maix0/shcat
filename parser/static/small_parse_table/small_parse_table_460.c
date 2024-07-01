/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_460.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2300(t_small_parse_table_array *v)
{
	v->a[46000] = anon_sym_DQUOTE;
	v->a[46001] = sym_raw_string;
	v->a[46002] = sym_number;
	v->a[46003] = anon_sym_DOLLAR_LBRACE;
	v->a[46004] = anon_sym_DOLLAR_LPAREN;
	v->a[46005] = anon_sym_BQUOTE;
	v->a[46006] = sym_word;
	v->a[46007] = 7;
	v->a[46008] = actions(3);
	v->a[46009] = 1;
	v->a[46010] = sym_comment;
	v->a[46011] = actions(1530);
	v->a[46012] = 1;
	v->a[46013] = sym_file_descriptor;
	v->a[46014] = actions(1533);
	v->a[46015] = 1;
	v->a[46016] = sym_variable_name;
	v->a[46017] = actions(1596);
	v->a[46018] = 1;
	v->a[46019] = anon_sym_RPAREN;
	small_parse_table_2301(v);
}

void	small_parse_table_2301(t_small_parse_table_array *v)
{
	v->a[46020] = actions(1527);
	v->a[46021] = 8;
	v->a[46022] = anon_sym_LT;
	v->a[46023] = anon_sym_GT;
	v->a[46024] = anon_sym_GT_GT;
	v->a[46025] = anon_sym_LT_AMP;
	v->a[46026] = anon_sym_GT_AMP;
	v->a[46027] = anon_sym_GT_PIPE;
	v->a[46028] = anon_sym_LT_AMP_DASH;
	v->a[46029] = anon_sym_GT_AMP_DASH;
	v->a[46030] = actions(1520);
	v->a[46031] = 9;
	v->a[46032] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46033] = anon_sym_DOLLAR;
	v->a[46034] = anon_sym_DQUOTE;
	v->a[46035] = sym_raw_string;
	v->a[46036] = sym_number;
	v->a[46037] = anon_sym_DOLLAR_LBRACE;
	v->a[46038] = anon_sym_DOLLAR_LPAREN;
	v->a[46039] = anon_sym_BQUOTE;
	small_parse_table_2302(v);
}

void	small_parse_table_2302(t_small_parse_table_array *v)
{
	v->a[46040] = sym_word;
	v->a[46041] = actions(1522);
	v->a[46042] = 9;
	v->a[46043] = anon_sym_PIPE;
	v->a[46044] = anon_sym_SEMI_SEMI;
	v->a[46045] = anon_sym_AMP_AMP;
	v->a[46046] = anon_sym_PIPE_PIPE;
	v->a[46047] = anon_sym_LT_LT;
	v->a[46048] = anon_sym_LT_LT_DASH;
	v->a[46049] = aux_sym_heredoc_redirect_token1;
	v->a[46050] = anon_sym_AMP;
	v->a[46051] = anon_sym_SEMI;
	v->a[46052] = 7;
	v->a[46053] = actions(3);
	v->a[46054] = 1;
	v->a[46055] = sym_comment;
	v->a[46056] = actions(976);
	v->a[46057] = 1;
	v->a[46058] = sym_file_descriptor;
	v->a[46059] = actions(1599);
	small_parse_table_2303(v);
}

void	small_parse_table_2303(t_small_parse_table_array *v)
{
	v->a[46060] = 1;
	v->a[46061] = sym_variable_name;
	v->a[46062] = state(1412);
	v->a[46063] = 2;
	v->a[46064] = sym_variable_assignment;
	v->a[46065] = aux_sym__variable_assignments_repeat1;
	v->a[46066] = state(1520);
	v->a[46067] = 3;
	v->a[46068] = sym_file_redirect;
	v->a[46069] = sym_heredoc_redirect;
	v->a[46070] = aux_sym_redirected_statement_repeat1;
	v->a[46071] = actions(678);
	v->a[46072] = 9;
	v->a[46073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46074] = anon_sym_DOLLAR;
	v->a[46075] = anon_sym_DQUOTE;
	v->a[46076] = sym_raw_string;
	v->a[46077] = sym_number;
	v->a[46078] = anon_sym_DOLLAR_LBRACE;
	v->a[46079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2304(v);
}

void	small_parse_table_2304(t_small_parse_table_array *v)
{
	v->a[46080] = anon_sym_BQUOTE;
	v->a[46081] = sym_word;
	v->a[46082] = actions(682);
	v->a[46083] = 13;
	v->a[46084] = anon_sym_PIPE;
	v->a[46085] = anon_sym_AMP_AMP;
	v->a[46086] = anon_sym_PIPE_PIPE;
	v->a[46087] = anon_sym_LT;
	v->a[46088] = anon_sym_GT;
	v->a[46089] = anon_sym_GT_GT;
	v->a[46090] = anon_sym_LT_AMP;
	v->a[46091] = anon_sym_GT_AMP;
	v->a[46092] = anon_sym_GT_PIPE;
	v->a[46093] = anon_sym_LT_AMP_DASH;
	v->a[46094] = anon_sym_GT_AMP_DASH;
	v->a[46095] = anon_sym_LT_LT;
	v->a[46096] = anon_sym_LT_LT_DASH;
	v->a[46097] = 7;
	v->a[46098] = actions(3);
	v->a[46099] = 1;
	small_parse_table_2305(v);
}

/* EOF small_parse_table_460.c */
