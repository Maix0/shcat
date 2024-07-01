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
	v->a[44000] = actions(1545);
	v->a[44001] = 9;
	v->a[44002] = anon_sym_BANG;
	v->a[44003] = anon_sym_DASH;
	v->a[44004] = anon_sym_STAR;
	v->a[44005] = anon_sym_QMARK;
	v->a[44006] = anon_sym_DOLLAR;
	v->a[44007] = anon_sym_POUND;
	v->a[44008] = anon_sym_AT;
	v->a[44009] = anon_sym_0;
	v->a[44010] = anon_sym__;
	v->a[44011] = actions(361);
	v->a[44012] = 15;
	v->a[44013] = anon_sym_LT;
	v->a[44014] = anon_sym_GT;
	v->a[44015] = anon_sym_GT_GT;
	v->a[44016] = anon_sym_LT_AMP;
	v->a[44017] = anon_sym_GT_AMP;
	v->a[44018] = anon_sym_GT_PIPE;
	v->a[44019] = anon_sym_LT_GT;
	small_parse_table_2201(v);
}

void	small_parse_table_2201(t_small_parse_table_array *v)
{
	v->a[44020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44021] = anon_sym_DQUOTE;
	v->a[44022] = sym_raw_string;
	v->a[44023] = sym_number;
	v->a[44024] = anon_sym_DOLLAR_LBRACE;
	v->a[44025] = anon_sym_DOLLAR_LPAREN;
	v->a[44026] = anon_sym_BQUOTE;
	v->a[44027] = sym_word;
	v->a[44028] = 7;
	v->a[44029] = actions(3);
	v->a[44030] = 1;
	v->a[44031] = sym_comment;
	v->a[44032] = actions(1432);
	v->a[44033] = 1;
	v->a[44034] = sym_file_descriptor;
	v->a[44035] = actions(1435);
	v->a[44036] = 1;
	v->a[44037] = sym_variable_name;
	v->a[44038] = actions(1551);
	v->a[44039] = 1;
	small_parse_table_2202(v);
}

void	small_parse_table_2202(t_small_parse_table_array *v)
{
	v->a[44040] = anon_sym_RPAREN;
	v->a[44041] = actions(1429);
	v->a[44042] = 7;
	v->a[44043] = anon_sym_LT;
	v->a[44044] = anon_sym_GT;
	v->a[44045] = anon_sym_GT_GT;
	v->a[44046] = anon_sym_LT_AMP;
	v->a[44047] = anon_sym_GT_AMP;
	v->a[44048] = anon_sym_GT_PIPE;
	v->a[44049] = anon_sym_LT_GT;
	v->a[44050] = actions(1422);
	v->a[44051] = 9;
	v->a[44052] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44053] = anon_sym_DOLLAR;
	v->a[44054] = anon_sym_DQUOTE;
	v->a[44055] = sym_raw_string;
	v->a[44056] = sym_number;
	v->a[44057] = anon_sym_DOLLAR_LBRACE;
	v->a[44058] = anon_sym_DOLLAR_LPAREN;
	v->a[44059] = anon_sym_BQUOTE;
	small_parse_table_2203(v);
}

void	small_parse_table_2203(t_small_parse_table_array *v)
{
	v->a[44060] = sym_word;
	v->a[44061] = actions(1424);
	v->a[44062] = 9;
	v->a[44063] = anon_sym_PIPE;
	v->a[44064] = anon_sym_SEMI_SEMI;
	v->a[44065] = anon_sym_AMP_AMP;
	v->a[44066] = anon_sym_PIPE_PIPE;
	v->a[44067] = anon_sym_LT_LT;
	v->a[44068] = anon_sym_LT_LT_DASH;
	v->a[44069] = aux_sym_heredoc_redirect_token1;
	v->a[44070] = anon_sym_AMP;
	v->a[44071] = anon_sym_SEMI;
	v->a[44072] = 16;
	v->a[44073] = actions(3);
	v->a[44074] = 1;
	v->a[44075] = sym_comment;
	v->a[44076] = actions(55);
	v->a[44077] = 1;
	v->a[44078] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44079] = actions(57);
	small_parse_table_2204(v);
}

void	small_parse_table_2204(t_small_parse_table_array *v)
{
	v->a[44080] = 1;
	v->a[44081] = anon_sym_DOLLAR;
	v->a[44082] = actions(59);
	v->a[44083] = 1;
	v->a[44084] = anon_sym_DQUOTE;
	v->a[44085] = actions(63);
	v->a[44086] = 1;
	v->a[44087] = anon_sym_DOLLAR_LBRACE;
	v->a[44088] = actions(65);
	v->a[44089] = 1;
	v->a[44090] = anon_sym_DOLLAR_LPAREN;
	v->a[44091] = actions(67);
	v->a[44092] = 1;
	v->a[44093] = anon_sym_BQUOTE;
	v->a[44094] = actions(359);
	v->a[44095] = 1;
	v->a[44096] = sym_variable_name;
	v->a[44097] = actions(1152);
	v->a[44098] = 1;
	v->a[44099] = sym_file_descriptor;
	small_parse_table_2205(v);
}

/* EOF small_parse_table_440.c */
