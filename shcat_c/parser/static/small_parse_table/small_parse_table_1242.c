/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1242.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6210(t_small_parse_table_array *v)
{
	v->a[124200] = anon_sym_DQUOTE;
	v->a[124201] = sym_raw_string;
	v->a[124202] = sym_ansi_c_string;
	v->a[124203] = anon_sym_DOLLAR_LBRACE;
	v->a[124204] = anon_sym_BQUOTE;
	v->a[124205] = anon_sym_DOLLAR_BQUOTE;
	v->a[124206] = anon_sym_LT_LPAREN;
	v->a[124207] = anon_sym_GT_LPAREN;
	v->a[124208] = 5;
	v->a[124209] = actions(71);
	v->a[124210] = 1;
	v->a[124211] = sym_comment;
	v->a[124212] = state(2350);
	v->a[124213] = 1;
	v->a[124214] = aux_sym_concatenation_repeat1;
	v->a[124215] = actions(6514);
	v->a[124216] = 2;
	v->a[124217] = sym__concat;
	v->a[124218] = aux_sym_concatenation_token1;
	v->a[124219] = actions(5389);
	small_parse_table_6211(v);
}

void	small_parse_table_6211(t_small_parse_table_array *v)
{
	v->a[124220] = 13;
	v->a[124221] = anon_sym_PIPE;
	v->a[124222] = anon_sym_LT;
	v->a[124223] = anon_sym_GT;
	v->a[124224] = anon_sym_LT_LT;
	v->a[124225] = anon_sym_AMP_GT;
	v->a[124226] = anon_sym_LT_AMP;
	v->a[124227] = anon_sym_GT_AMP;
	v->a[124228] = anon_sym_DOLLAR;
	v->a[124229] = aux_sym_number_token1;
	v->a[124230] = aux_sym_number_token2;
	v->a[124231] = anon_sym_DOLLAR_LPAREN;
	v->a[124232] = anon_sym_BQUOTE;
	v->a[124233] = sym_word;
	v->a[124234] = actions(5391);
	v->a[124235] = 25;
	v->a[124236] = sym_file_descriptor;
	v->a[124237] = sym_variable_name;
	v->a[124238] = sym_test_operator;
	v->a[124239] = sym__brace_start;
	small_parse_table_6212(v);
}

void	small_parse_table_6212(t_small_parse_table_array *v)
{
	v->a[124240] = anon_sym_LPAREN_LPAREN;
	v->a[124241] = anon_sym_PIPE_PIPE;
	v->a[124242] = anon_sym_AMP_AMP;
	v->a[124243] = anon_sym_GT_GT;
	v->a[124244] = anon_sym_PIPE_AMP;
	v->a[124245] = anon_sym_AMP_GT_GT;
	v->a[124246] = anon_sym_GT_PIPE;
	v->a[124247] = anon_sym_LT_AMP_DASH;
	v->a[124248] = anon_sym_GT_AMP_DASH;
	v->a[124249] = anon_sym_LT_LT_DASH;
	v->a[124250] = anon_sym_LT_LT_LT;
	v->a[124251] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124252] = anon_sym_DOLLAR_LBRACK;
	v->a[124253] = sym__special_character;
	v->a[124254] = anon_sym_DQUOTE;
	v->a[124255] = sym_raw_string;
	v->a[124256] = sym_ansi_c_string;
	v->a[124257] = anon_sym_DOLLAR_LBRACE;
	v->a[124258] = anon_sym_DOLLAR_BQUOTE;
	v->a[124259] = anon_sym_LT_LPAREN;
	small_parse_table_6213(v);
}

void	small_parse_table_6213(t_small_parse_table_array *v)
{
	v->a[124260] = anon_sym_GT_LPAREN;
	v->a[124261] = 5;
	v->a[124262] = actions(71);
	v->a[124263] = 1;
	v->a[124264] = sym_comment;
	v->a[124265] = actions(6518);
	v->a[124266] = 1;
	v->a[124267] = sym__special_character;
	v->a[124268] = state(2366);
	v->a[124269] = 1;
	v->a[124270] = aux_sym__literal_repeat1;
	v->a[124271] = actions(4467);
	v->a[124272] = 14;
	v->a[124273] = anon_sym_PIPE;
	v->a[124274] = anon_sym_EQ_EQ;
	v->a[124275] = anon_sym_LT;
	v->a[124276] = anon_sym_GT;
	v->a[124277] = anon_sym_LT_LT;
	v->a[124278] = anon_sym_EQ_TILDE;
	v->a[124279] = anon_sym_AMP_GT;
	small_parse_table_6214(v);
}

void	small_parse_table_6214(t_small_parse_table_array *v)
{
	v->a[124280] = anon_sym_LT_AMP;
	v->a[124281] = anon_sym_GT_AMP;
	v->a[124282] = anon_sym_DOLLAR;
	v->a[124283] = aux_sym_number_token1;
	v->a[124284] = aux_sym_number_token2;
	v->a[124285] = anon_sym_DOLLAR_LPAREN;
	v->a[124286] = sym_word;
	v->a[124287] = actions(4469);
	v->a[124288] = 25;
	v->a[124289] = sym_file_descriptor;
	v->a[124290] = sym_test_operator;
	v->a[124291] = sym__bare_dollar;
	v->a[124292] = sym__brace_start;
	v->a[124293] = anon_sym_LPAREN_LPAREN;
	v->a[124294] = anon_sym_PIPE_PIPE;
	v->a[124295] = anon_sym_AMP_AMP;
	v->a[124296] = anon_sym_GT_GT;
	v->a[124297] = anon_sym_PIPE_AMP;
	v->a[124298] = anon_sym_AMP_GT_GT;
	v->a[124299] = anon_sym_GT_PIPE;
	small_parse_table_6215(v);
}

/* EOF small_parse_table_1242.c */
