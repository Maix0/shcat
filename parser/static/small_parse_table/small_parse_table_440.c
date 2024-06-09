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
	v->a[44000] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44001] = anon_sym_AMP;
	v->a[44002] = aux_sym_concatenation_token1;
	v->a[44003] = anon_sym_DOLLAR;
	v->a[44004] = anon_sym_DQUOTE;
	v->a[44005] = sym_raw_string;
	v->a[44006] = aux_sym_number_token1;
	v->a[44007] = aux_sym_number_token2;
	v->a[44008] = anon_sym_DOLLAR_LBRACE;
	v->a[44009] = anon_sym_DOLLAR_LPAREN;
	v->a[44010] = anon_sym_BQUOTE;
	v->a[44011] = sym_word;
	v->a[44012] = anon_sym_SEMI;
	v->a[44013] = 3;
	v->a[44014] = actions(1404);
	v->a[44015] = 1;
	v->a[44016] = sym_comment;
	v->a[44017] = actions(1249);
	v->a[44018] = 13;
	v->a[44019] = anon_sym_PIPE;
	small_parse_table_2201(v);
}

void	small_parse_table_2201(t_small_parse_table_array *v)
{
	v->a[44020] = anon_sym_EQ;
	v->a[44021] = anon_sym_LT;
	v->a[44022] = anon_sym_GT;
	v->a[44023] = anon_sym_GT_GT;
	v->a[44024] = anon_sym_LT_LT;
	v->a[44025] = anon_sym_CARET;
	v->a[44026] = anon_sym_AMP;
	v->a[44027] = anon_sym_PLUS;
	v->a[44028] = anon_sym_DASH;
	v->a[44029] = anon_sym_STAR;
	v->a[44030] = anon_sym_SLASH;
	v->a[44031] = anon_sym_PERCENT;
	v->a[44032] = actions(1247);
	v->a[44033] = 20;
	v->a[44034] = anon_sym_RPAREN;
	v->a[44035] = anon_sym_AMP_AMP;
	v->a[44036] = anon_sym_PIPE_PIPE;
	v->a[44037] = anon_sym_PLUS_EQ;
	v->a[44038] = anon_sym_DASH_EQ;
	v->a[44039] = anon_sym_STAR_EQ;
	small_parse_table_2202(v);
}

void	small_parse_table_2202(t_small_parse_table_array *v)
{
	v->a[44040] = anon_sym_SLASH_EQ;
	v->a[44041] = anon_sym_PERCENT_EQ;
	v->a[44042] = anon_sym_LT_LT_EQ;
	v->a[44043] = anon_sym_GT_GT_EQ;
	v->a[44044] = anon_sym_AMP_EQ;
	v->a[44045] = anon_sym_CARET_EQ;
	v->a[44046] = anon_sym_PIPE_EQ;
	v->a[44047] = anon_sym_EQ_EQ;
	v->a[44048] = anon_sym_BANG_EQ;
	v->a[44049] = anon_sym_LT_EQ;
	v->a[44050] = anon_sym_GT_EQ;
	v->a[44051] = anon_sym_QMARK;
	v->a[44052] = anon_sym_PLUS_PLUS2;
	v->a[44053] = anon_sym_DASH_DASH2;
	v->a[44054] = 17;
	v->a[44055] = actions(1404);
	v->a[44056] = 1;
	v->a[44057] = sym_comment;
	v->a[44058] = actions(1418);
	v->a[44059] = 1;
	small_parse_table_2203(v);
}

void	small_parse_table_2203(t_small_parse_table_array *v)
{
	v->a[44060] = anon_sym_AMP;
	v->a[44061] = actions(1420);
	v->a[44062] = 1;
	v->a[44063] = anon_sym_PIPE;
	v->a[44064] = actions(1422);
	v->a[44065] = 1;
	v->a[44066] = anon_sym_AMP_AMP;
	v->a[44067] = actions(1424);
	v->a[44068] = 1;
	v->a[44069] = anon_sym_PIPE_PIPE;
	v->a[44070] = actions(1426);
	v->a[44071] = 1;
	v->a[44072] = anon_sym_EQ;
	v->a[44073] = actions(1428);
	v->a[44074] = 1;
	v->a[44075] = anon_sym_CARET;
	v->a[44076] = actions(1430);
	v->a[44077] = 1;
	v->a[44078] = anon_sym_QMARK;
	v->a[44079] = actions(1642);
	small_parse_table_2204(v);
}

void	small_parse_table_2204(t_small_parse_table_array *v)
{
	v->a[44080] = 1;
	v->a[44081] = anon_sym_RPAREN_RPAREN;
	v->a[44082] = actions(1402);
	v->a[44083] = 2;
	v->a[44084] = anon_sym_PLUS_PLUS2;
	v->a[44085] = anon_sym_DASH_DASH2;
	v->a[44086] = actions(1408);
	v->a[44087] = 2;
	v->a[44088] = anon_sym_LT;
	v->a[44089] = anon_sym_GT;
	v->a[44090] = actions(1410);
	v->a[44091] = 2;
	v->a[44092] = anon_sym_GT_GT;
	v->a[44093] = anon_sym_LT_LT;
	v->a[44094] = actions(1412);
	v->a[44095] = 2;
	v->a[44096] = anon_sym_LT_EQ;
	v->a[44097] = anon_sym_GT_EQ;
	v->a[44098] = actions(1414);
	v->a[44099] = 2;
	small_parse_table_2205(v);
}

/* EOF small_parse_table_440.c */
