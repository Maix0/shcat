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
	v->a[46000] = anon_sym_GT_AMP;
	v->a[46001] = anon_sym_GT_PIPE;
	v->a[46002] = anon_sym_LT_AMP_DASH;
	v->a[46003] = anon_sym_GT_AMP_DASH;
	v->a[46004] = 7;
	v->a[46005] = actions(3);
	v->a[46006] = 1;
	v->a[46007] = sym_comment;
	v->a[46008] = actions(1536);
	v->a[46009] = 1;
	v->a[46010] = sym_file_descriptor;
	v->a[46011] = actions(1539);
	v->a[46012] = 1;
	v->a[46013] = sym_variable_name;
	v->a[46014] = actions(1547);
	v->a[46015] = 1;
	v->a[46016] = anon_sym_RPAREN;
	v->a[46017] = actions(1526);
	v->a[46018] = 9;
	v->a[46019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2301(v);
}

void	small_parse_table_2301(t_small_parse_table_array *v)
{
	v->a[46020] = anon_sym_DOLLAR;
	v->a[46021] = anon_sym_DQUOTE;
	v->a[46022] = sym_raw_string;
	v->a[46023] = sym_number;
	v->a[46024] = anon_sym_DOLLAR_LBRACE;
	v->a[46025] = anon_sym_DOLLAR_LPAREN;
	v->a[46026] = anon_sym_BQUOTE;
	v->a[46027] = sym_word;
	v->a[46028] = actions(1528);
	v->a[46029] = 9;
	v->a[46030] = anon_sym_PIPE;
	v->a[46031] = anon_sym_SEMI_SEMI;
	v->a[46032] = anon_sym_AMP_AMP;
	v->a[46033] = anon_sym_PIPE_PIPE;
	v->a[46034] = anon_sym_LT_LT;
	v->a[46035] = anon_sym_LT_LT_DASH;
	v->a[46036] = aux_sym_heredoc_redirect_token1;
	v->a[46037] = anon_sym_AMP;
	v->a[46038] = anon_sym_SEMI;
	v->a[46039] = actions(1533);
	small_parse_table_2302(v);
}

void	small_parse_table_2302(t_small_parse_table_array *v)
{
	v->a[46040] = 10;
	v->a[46041] = anon_sym_LT;
	v->a[46042] = anon_sym_GT;
	v->a[46043] = anon_sym_GT_GT;
	v->a[46044] = anon_sym_AMP_GT;
	v->a[46045] = anon_sym_AMP_GT_GT;
	v->a[46046] = anon_sym_LT_AMP;
	v->a[46047] = anon_sym_GT_AMP;
	v->a[46048] = anon_sym_GT_PIPE;
	v->a[46049] = anon_sym_LT_AMP_DASH;
	v->a[46050] = anon_sym_GT_AMP_DASH;
	v->a[46051] = 7;
	v->a[46052] = actions(3);
	v->a[46053] = 1;
	v->a[46054] = sym_comment;
	v->a[46055] = actions(1536);
	v->a[46056] = 1;
	v->a[46057] = sym_file_descriptor;
	v->a[46058] = actions(1539);
	v->a[46059] = 1;
	small_parse_table_2303(v);
}

void	small_parse_table_2303(t_small_parse_table_array *v)
{
	v->a[46060] = sym_variable_name;
	v->a[46061] = actions(1550);
	v->a[46062] = 1;
	v->a[46063] = anon_sym_RPAREN;
	v->a[46064] = actions(1526);
	v->a[46065] = 9;
	v->a[46066] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46067] = anon_sym_DOLLAR;
	v->a[46068] = anon_sym_DQUOTE;
	v->a[46069] = sym_raw_string;
	v->a[46070] = sym_number;
	v->a[46071] = anon_sym_DOLLAR_LBRACE;
	v->a[46072] = anon_sym_DOLLAR_LPAREN;
	v->a[46073] = anon_sym_BQUOTE;
	v->a[46074] = sym_word;
	v->a[46075] = actions(1528);
	v->a[46076] = 9;
	v->a[46077] = anon_sym_PIPE;
	v->a[46078] = anon_sym_SEMI_SEMI;
	v->a[46079] = anon_sym_AMP_AMP;
	small_parse_table_2304(v);
}

void	small_parse_table_2304(t_small_parse_table_array *v)
{
	v->a[46080] = anon_sym_PIPE_PIPE;
	v->a[46081] = anon_sym_LT_LT;
	v->a[46082] = anon_sym_LT_LT_DASH;
	v->a[46083] = aux_sym_heredoc_redirect_token1;
	v->a[46084] = anon_sym_AMP;
	v->a[46085] = anon_sym_SEMI;
	v->a[46086] = actions(1533);
	v->a[46087] = 10;
	v->a[46088] = anon_sym_LT;
	v->a[46089] = anon_sym_GT;
	v->a[46090] = anon_sym_GT_GT;
	v->a[46091] = anon_sym_AMP_GT;
	v->a[46092] = anon_sym_AMP_GT_GT;
	v->a[46093] = anon_sym_LT_AMP;
	v->a[46094] = anon_sym_GT_AMP;
	v->a[46095] = anon_sym_GT_PIPE;
	v->a[46096] = anon_sym_LT_AMP_DASH;
	v->a[46097] = anon_sym_GT_AMP_DASH;
	v->a[46098] = 7;
	v->a[46099] = actions(3);
	small_parse_table_2305(v);
}

/* EOF small_parse_table_460.c */
