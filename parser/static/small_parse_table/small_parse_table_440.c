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
	v->a[44000] = 7;
	v->a[44001] = actions(3);
	v->a[44002] = 1;
	v->a[44003] = sym_comment;
	v->a[44004] = actions(1435);
	v->a[44005] = 1;
	v->a[44006] = sym_file_descriptor;
	v->a[44007] = actions(1438);
	v->a[44008] = 1;
	v->a[44009] = sym_variable_name;
	v->a[44010] = actions(1548);
	v->a[44011] = 1;
	v->a[44012] = anon_sym_RPAREN;
	v->a[44013] = actions(1432);
	v->a[44014] = 7;
	v->a[44015] = anon_sym_LT;
	v->a[44016] = anon_sym_GT;
	v->a[44017] = anon_sym_GT_GT;
	v->a[44018] = anon_sym_LT_AMP;
	v->a[44019] = anon_sym_GT_AMP;
	small_parse_table_2201(v);
}

void	small_parse_table_2201(t_small_parse_table_array *v)
{
	v->a[44020] = anon_sym_GT_PIPE;
	v->a[44021] = anon_sym_LT_GT;
	v->a[44022] = actions(1428);
	v->a[44023] = 9;
	v->a[44024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44025] = anon_sym_DOLLAR;
	v->a[44026] = anon_sym_DQUOTE;
	v->a[44027] = sym_raw_string;
	v->a[44028] = sym_number;
	v->a[44029] = anon_sym_DOLLAR_LBRACE;
	v->a[44030] = anon_sym_DOLLAR_LPAREN;
	v->a[44031] = anon_sym_BQUOTE;
	v->a[44032] = sym_word;
	v->a[44033] = actions(1430);
	v->a[44034] = 9;
	v->a[44035] = anon_sym_PIPE;
	v->a[44036] = anon_sym_SEMI_SEMI;
	v->a[44037] = anon_sym_AMP_AMP;
	v->a[44038] = anon_sym_PIPE_PIPE;
	v->a[44039] = anon_sym_LT_LT;
	small_parse_table_2202(v);
}

void	small_parse_table_2202(t_small_parse_table_array *v)
{
	v->a[44040] = anon_sym_LT_LT_DASH;
	v->a[44041] = aux_sym_heredoc_redirect_token1;
	v->a[44042] = anon_sym_AMP;
	v->a[44043] = anon_sym_SEMI;
	v->a[44044] = 7;
	v->a[44045] = actions(3);
	v->a[44046] = 1;
	v->a[44047] = sym_comment;
	v->a[44048] = actions(1435);
	v->a[44049] = 1;
	v->a[44050] = sym_file_descriptor;
	v->a[44051] = actions(1438);
	v->a[44052] = 1;
	v->a[44053] = sym_variable_name;
	v->a[44054] = actions(1551);
	v->a[44055] = 1;
	v->a[44056] = anon_sym_RPAREN;
	v->a[44057] = actions(1432);
	v->a[44058] = 7;
	v->a[44059] = anon_sym_LT;
	small_parse_table_2203(v);
}

void	small_parse_table_2203(t_small_parse_table_array *v)
{
	v->a[44060] = anon_sym_GT;
	v->a[44061] = anon_sym_GT_GT;
	v->a[44062] = anon_sym_LT_AMP;
	v->a[44063] = anon_sym_GT_AMP;
	v->a[44064] = anon_sym_GT_PIPE;
	v->a[44065] = anon_sym_LT_GT;
	v->a[44066] = actions(1428);
	v->a[44067] = 9;
	v->a[44068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44069] = anon_sym_DOLLAR;
	v->a[44070] = anon_sym_DQUOTE;
	v->a[44071] = sym_raw_string;
	v->a[44072] = sym_number;
	v->a[44073] = anon_sym_DOLLAR_LBRACE;
	v->a[44074] = anon_sym_DOLLAR_LPAREN;
	v->a[44075] = anon_sym_BQUOTE;
	v->a[44076] = sym_word;
	v->a[44077] = actions(1430);
	v->a[44078] = 9;
	v->a[44079] = anon_sym_PIPE;
	small_parse_table_2204(v);
}

void	small_parse_table_2204(t_small_parse_table_array *v)
{
	v->a[44080] = anon_sym_SEMI_SEMI;
	v->a[44081] = anon_sym_AMP_AMP;
	v->a[44082] = anon_sym_PIPE_PIPE;
	v->a[44083] = anon_sym_LT_LT;
	v->a[44084] = anon_sym_LT_LT_DASH;
	v->a[44085] = aux_sym_heredoc_redirect_token1;
	v->a[44086] = anon_sym_AMP;
	v->a[44087] = anon_sym_SEMI;
	v->a[44088] = 7;
	v->a[44089] = actions(3);
	v->a[44090] = 1;
	v->a[44091] = sym_comment;
	v->a[44092] = actions(1435);
	v->a[44093] = 1;
	v->a[44094] = sym_file_descriptor;
	v->a[44095] = actions(1438);
	v->a[44096] = 1;
	v->a[44097] = sym_variable_name;
	v->a[44098] = actions(1554);
	v->a[44099] = 1;
	small_parse_table_2205(v);
}

/* EOF small_parse_table_440.c */
