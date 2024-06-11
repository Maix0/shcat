/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_223.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1115(t_small_parse_table_array *v)
{
	v->a[22300] = 12;
	v->a[22301] = actions(3);
	v->a[22302] = 1;
	v->a[22303] = sym_comment;
	v->a[22304] = actions(615);
	v->a[22305] = 1;
	v->a[22306] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22307] = actions(618);
	v->a[22308] = 1;
	v->a[22309] = anon_sym_DOLLAR;
	v->a[22310] = actions(621);
	v->a[22311] = 1;
	v->a[22312] = anon_sym_DQUOTE;
	v->a[22313] = actions(624);
	v->a[22314] = 1;
	v->a[22315] = anon_sym_DOLLAR_LBRACE;
	v->a[22316] = actions(627);
	v->a[22317] = 1;
	v->a[22318] = anon_sym_DOLLAR_LPAREN;
	v->a[22319] = actions(630);
	small_parse_table_1116(v);
}

void	small_parse_table_1116(t_small_parse_table_array *v)
{
	v->a[22320] = 1;
	v->a[22321] = anon_sym_BQUOTE;
	v->a[22322] = actions(559);
	v->a[22323] = 2;
	v->a[22324] = sym_file_descriptor;
	v->a[22325] = sym_variable_name;
	v->a[22326] = state(204);
	v->a[22327] = 2;
	v->a[22328] = sym_concatenation;
	v->a[22329] = aux_sym_for_statement_repeat1;
	v->a[22330] = actions(612);
	v->a[22331] = 3;
	v->a[22332] = sym_raw_string;
	v->a[22333] = sym_number;
	v->a[22334] = sym_word;
	v->a[22335] = state(400);
	v->a[22336] = 5;
	v->a[22337] = sym_arithmetic_expansion;
	v->a[22338] = sym_string;
	v->a[22339] = sym_simple_expansion;
	small_parse_table_1117(v);
}

void	small_parse_table_1117(t_small_parse_table_array *v)
{
	v->a[22340] = sym_expansion;
	v->a[22341] = sym_command_substitution;
	v->a[22342] = actions(564);
	v->a[22343] = 20;
	v->a[22344] = anon_sym_PIPE;
	v->a[22345] = anon_sym_RPAREN;
	v->a[22346] = anon_sym_SEMI_SEMI;
	v->a[22347] = anon_sym_AMP_AMP;
	v->a[22348] = anon_sym_PIPE_PIPE;
	v->a[22349] = anon_sym_LT;
	v->a[22350] = anon_sym_GT;
	v->a[22351] = anon_sym_GT_GT;
	v->a[22352] = anon_sym_AMP_GT;
	v->a[22353] = anon_sym_AMP_GT_GT;
	v->a[22354] = anon_sym_LT_AMP;
	v->a[22355] = anon_sym_GT_AMP;
	v->a[22356] = anon_sym_GT_PIPE;
	v->a[22357] = anon_sym_LT_AMP_DASH;
	v->a[22358] = anon_sym_GT_AMP_DASH;
	v->a[22359] = anon_sym_LT_LT;
	small_parse_table_1118(v);
}

void	small_parse_table_1118(t_small_parse_table_array *v)
{
	v->a[22360] = anon_sym_LT_LT_DASH;
	v->a[22361] = aux_sym_heredoc_redirect_token1;
	v->a[22362] = anon_sym_AMP;
	v->a[22363] = anon_sym_SEMI;
	v->a[22364] = 14;
	v->a[22365] = actions(3);
	v->a[22366] = 1;
	v->a[22367] = sym_comment;
	v->a[22368] = actions(459);
	v->a[22369] = 1;
	v->a[22370] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22371] = actions(461);
	v->a[22372] = 1;
	v->a[22373] = anon_sym_DOLLAR;
	v->a[22374] = actions(463);
	v->a[22375] = 1;
	v->a[22376] = anon_sym_DQUOTE;
	v->a[22377] = actions(465);
	v->a[22378] = 1;
	v->a[22379] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1119(v);
}

void	small_parse_table_1119(t_small_parse_table_array *v)
{
	v->a[22380] = actions(467);
	v->a[22381] = 1;
	v->a[22382] = anon_sym_DOLLAR_LPAREN;
	v->a[22383] = actions(469);
	v->a[22384] = 1;
	v->a[22385] = anon_sym_BQUOTE;
	v->a[22386] = actions(473);
	v->a[22387] = 1;
	v->a[22388] = sym__bare_dollar;
	v->a[22389] = actions(555);
	v->a[22390] = 1;
	v->a[22391] = sym_file_descriptor;
	v->a[22392] = state(192);
	v->a[22393] = 1;
	v->a[22394] = aux_sym_command_repeat2;
	v->a[22395] = state(793);
	v->a[22396] = 1;
	v->a[22397] = sym_concatenation;
	v->a[22398] = actions(455);
	v->a[22399] = 3;
	small_parse_table_1120(v);
}

/* EOF small_parse_table_223.c */
