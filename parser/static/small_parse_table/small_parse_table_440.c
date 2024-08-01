/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_440.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2200(t_small_parse_table_array *v)
{
	v->a[44000] = anon_sym_GT;
	v->a[44001] = anon_sym_GT_GT;
	v->a[44002] = anon_sym_LT_LT;
	v->a[44003] = aux_sym_concatenation_token1;
	v->a[44004] = anon_sym_SEMI;
	v->a[44005] = 6;
	v->a[44006] = actions(3);
	v->a[44007] = 1;
	v->a[44008] = sym_comment;
	v->a[44009] = actions(1890);
	v->a[44010] = 1;
	v->a[44011] = aux_sym_concatenation_token1;
	v->a[44012] = actions(1934);
	v->a[44013] = 1;
	v->a[44014] = sym__concat;
	v->a[44015] = state(766);
	v->a[44016] = 1;
	v->a[44017] = aux_sym_concatenation_repeat1;
	v->a[44018] = actions(921);
	v->a[44019] = 2;
	small_parse_table_2201(v);
}

void	small_parse_table_2201(t_small_parse_table_array *v)
{
	v->a[44020] = sym_variable_name;
	v->a[44021] = aux_sym_heredoc_redirect_token1;
	v->a[44022] = actions(923);
	v->a[44023] = 9;
	v->a[44024] = anon_sym_PIPE;
	v->a[44025] = anon_sym_SEMI_SEMI;
	v->a[44026] = anon_sym_AMP_AMP;
	v->a[44027] = anon_sym_PIPE_PIPE;
	v->a[44028] = anon_sym_LT;
	v->a[44029] = anon_sym_GT;
	v->a[44030] = anon_sym_GT_GT;
	v->a[44031] = anon_sym_LT_LT;
	v->a[44032] = anon_sym_SEMI;
	v->a[44033] = 6;
	v->a[44034] = actions(3);
	v->a[44035] = 1;
	v->a[44036] = sym_comment;
	v->a[44037] = actions(597);
	v->a[44038] = 1;
	v->a[44039] = anon_sym_LT_LT;
	small_parse_table_2202(v);
}

void	small_parse_table_2202(t_small_parse_table_array *v)
{
	v->a[44040] = actions(1938);
	v->a[44041] = 1;
	v->a[44042] = aux_sym_heredoc_redirect_token1;
	v->a[44043] = actions(1868);
	v->a[44044] = 3;
	v->a[44045] = anon_sym_LT;
	v->a[44046] = anon_sym_GT;
	v->a[44047] = anon_sym_GT_GT;
	v->a[44048] = state(919);
	v->a[44049] = 3;
	v->a[44050] = sym_file_redirect;
	v->a[44051] = sym_heredoc_redirect;
	v->a[44052] = aux_sym_redirected_statement_repeat1;
	v->a[44053] = actions(1936);
	v->a[44054] = 6;
	v->a[44055] = anon_sym_PIPE;
	v->a[44056] = anon_sym_RPAREN;
	v->a[44057] = anon_sym_SEMI_SEMI;
	v->a[44058] = anon_sym_AMP_AMP;
	v->a[44059] = anon_sym_PIPE_PIPE;
	small_parse_table_2203(v);
}

void	small_parse_table_2203(t_small_parse_table_array *v)
{
	v->a[44060] = anon_sym_SEMI;
	v->a[44061] = 5;
	v->a[44062] = actions(3);
	v->a[44063] = 1;
	v->a[44064] = sym_comment;
	v->a[44065] = actions(580);
	v->a[44066] = 1;
	v->a[44067] = anon_sym_PIPE;
	v->a[44068] = actions(827);
	v->a[44069] = 1;
	v->a[44070] = aux_sym_heredoc_redirect_token1;
	v->a[44071] = state(916);
	v->a[44072] = 3;
	v->a[44073] = sym_file_redirect;
	v->a[44074] = sym_heredoc_redirect;
	v->a[44075] = aux_sym_redirected_statement_repeat1;
	v->a[44076] = actions(816);
	v->a[44077] = 9;
	v->a[44078] = anon_sym_RPAREN;
	v->a[44079] = anon_sym_SEMI_SEMI;
	small_parse_table_2204(v);
}

void	small_parse_table_2204(t_small_parse_table_array *v)
{
	v->a[44080] = anon_sym_AMP_AMP;
	v->a[44081] = anon_sym_PIPE_PIPE;
	v->a[44082] = anon_sym_LT;
	v->a[44083] = anon_sym_GT;
	v->a[44084] = anon_sym_GT_GT;
	v->a[44085] = anon_sym_LT_LT;
	v->a[44086] = anon_sym_SEMI;
	v->a[44087] = 4;
	v->a[44088] = actions(3);
	v->a[44089] = 1;
	v->a[44090] = sym_comment;
	v->a[44091] = actions(827);
	v->a[44092] = 1;
	v->a[44093] = aux_sym_heredoc_redirect_token1;
	v->a[44094] = state(916);
	v->a[44095] = 3;
	v->a[44096] = sym_file_redirect;
	v->a[44097] = sym_heredoc_redirect;
	v->a[44098] = aux_sym_redirected_statement_repeat1;
	v->a[44099] = actions(816);
	small_parse_table_2205(v);
}

/* EOF small_parse_table_440.c */
