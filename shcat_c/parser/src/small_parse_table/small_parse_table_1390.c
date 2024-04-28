/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1390.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6950(t_small_parse_table_array *v)
{
	v->a[139000] = anon_sym_SLASH_EQ;
	v->a[139001] = anon_sym_PERCENT_EQ;
	v->a[139002] = anon_sym_STAR_STAR_EQ;
	v->a[139003] = anon_sym_LT_LT_EQ;
	v->a[139004] = anon_sym_GT_GT_EQ;
	v->a[139005] = anon_sym_AMP_EQ;
	v->a[139006] = anon_sym_CARET_EQ;
	v->a[139007] = anon_sym_PIPE_EQ;
	v->a[139008] = anon_sym_PIPE_PIPE;
	v->a[139009] = anon_sym_AMP_AMP;
	v->a[139010] = anon_sym_EQ_EQ;
	v->a[139011] = anon_sym_BANG_EQ;
	v->a[139012] = anon_sym_LT_EQ;
	v->a[139013] = anon_sym_GT_EQ;
	v->a[139014] = anon_sym_RPAREN;
	v->a[139015] = anon_sym_EQ_TILDE;
	v->a[139016] = anon_sym_QMARK;
	v->a[139017] = aux_sym_concatenation_token1;
	v->a[139018] = 3;
	v->a[139019] = actions(71);
	small_parse_table_6951(v);
}

void	small_parse_table_6951(t_small_parse_table_array *v)
{
	v->a[139020] = 1;
	v->a[139021] = sym_comment;
	v->a[139022] = actions(1344);
	v->a[139023] = 13;
	v->a[139024] = anon_sym_PIPE;
	v->a[139025] = anon_sym_LT;
	v->a[139026] = anon_sym_GT;
	v->a[139027] = anon_sym_LT_LT;
	v->a[139028] = anon_sym_AMP_GT;
	v->a[139029] = anon_sym_LT_AMP;
	v->a[139030] = anon_sym_GT_AMP;
	v->a[139031] = anon_sym_DOLLAR;
	v->a[139032] = aux_sym_number_token1;
	v->a[139033] = aux_sym_number_token2;
	v->a[139034] = anon_sym_DOLLAR_LPAREN;
	v->a[139035] = anon_sym_BQUOTE;
	v->a[139036] = sym_word;
	v->a[139037] = actions(1346);
	v->a[139038] = 26;
	v->a[139039] = sym_file_descriptor;
	small_parse_table_6952(v);
}

void	small_parse_table_6952(t_small_parse_table_array *v)
{
	v->a[139040] = sym__concat;
	v->a[139041] = sym_test_operator;
	v->a[139042] = sym__brace_start;
	v->a[139043] = anon_sym_LPAREN_LPAREN;
	v->a[139044] = anon_sym_PIPE_PIPE;
	v->a[139045] = anon_sym_AMP_AMP;
	v->a[139046] = anon_sym_GT_GT;
	v->a[139047] = anon_sym_PIPE_AMP;
	v->a[139048] = anon_sym_AMP_GT_GT;
	v->a[139049] = anon_sym_GT_PIPE;
	v->a[139050] = anon_sym_LT_AMP_DASH;
	v->a[139051] = anon_sym_GT_AMP_DASH;
	v->a[139052] = anon_sym_LT_LT_DASH;
	v->a[139053] = anon_sym_LT_LT_LT;
	v->a[139054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[139055] = anon_sym_DOLLAR_LBRACK;
	v->a[139056] = aux_sym_concatenation_token1;
	v->a[139057] = sym__special_character;
	v->a[139058] = anon_sym_DQUOTE;
	v->a[139059] = sym_raw_string;
	small_parse_table_6953(v);
}

void	small_parse_table_6953(t_small_parse_table_array *v)
{
	v->a[139060] = sym_ansi_c_string;
	v->a[139061] = anon_sym_DOLLAR_LBRACE;
	v->a[139062] = anon_sym_DOLLAR_BQUOTE;
	v->a[139063] = anon_sym_LT_LPAREN;
	v->a[139064] = anon_sym_GT_LPAREN;
	v->a[139065] = 3;
	v->a[139066] = actions(71);
	v->a[139067] = 1;
	v->a[139068] = sym_comment;
	v->a[139069] = actions(1320);
	v->a[139070] = 14;
	v->a[139071] = anon_sym_EQ;
	v->a[139072] = anon_sym_PIPE;
	v->a[139073] = anon_sym_CARET;
	v->a[139074] = anon_sym_AMP;
	v->a[139075] = anon_sym_LT;
	v->a[139076] = anon_sym_GT;
	v->a[139077] = anon_sym_LT_LT;
	v->a[139078] = anon_sym_GT_GT;
	v->a[139079] = anon_sym_PLUS;
	small_parse_table_6954(v);
}

void	small_parse_table_6954(t_small_parse_table_array *v)
{
	v->a[139080] = anon_sym_DASH;
	v->a[139081] = anon_sym_STAR;
	v->a[139082] = anon_sym_SLASH;
	v->a[139083] = anon_sym_PERCENT;
	v->a[139084] = anon_sym_STAR_STAR;
	v->a[139085] = actions(1322);
	v->a[139086] = 25;
	v->a[139087] = sym__concat;
	v->a[139088] = sym_test_operator;
	v->a[139089] = sym_extglob_pattern;
	v->a[139090] = anon_sym_PLUS_PLUS;
	v->a[139091] = anon_sym_DASH_DASH;
	v->a[139092] = anon_sym_PLUS_EQ;
	v->a[139093] = anon_sym_DASH_EQ;
	v->a[139094] = anon_sym_STAR_EQ;
	v->a[139095] = anon_sym_SLASH_EQ;
	v->a[139096] = anon_sym_PERCENT_EQ;
	v->a[139097] = anon_sym_STAR_STAR_EQ;
	v->a[139098] = anon_sym_LT_LT_EQ;
	v->a[139099] = anon_sym_GT_GT_EQ;
	small_parse_table_6955(v);
}

/* EOF small_parse_table_1390.c */
