/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_433.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2165(t_small_parse_table_array *v)
{
	v->a[43300] = anon_sym_SEMI_SEMI;
	v->a[43301] = anon_sym_PIPE_AMP;
	v->a[43302] = anon_sym_EQ_TILDE;
	v->a[43303] = anon_sym_AMP_GT;
	v->a[43304] = anon_sym_AMP_GT_GT;
	v->a[43305] = anon_sym_LT_AMP;
	v->a[43306] = anon_sym_GT_AMP;
	v->a[43307] = anon_sym_GT_PIPE;
	v->a[43308] = anon_sym_LT_AMP_DASH;
	v->a[43309] = anon_sym_GT_AMP_DASH;
	v->a[43310] = anon_sym_LT_LT_DASH;
	v->a[43311] = anon_sym_LT_LT_LT;
	v->a[43312] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43313] = anon_sym_DOLLAR_LBRACK;
	v->a[43314] = aux_sym_concatenation_token1;
	v->a[43315] = anon_sym_DOLLAR;
	v->a[43316] = sym__special_character;
	v->a[43317] = anon_sym_DQUOTE;
	v->a[43318] = sym_raw_string;
	v->a[43319] = sym_ansi_c_string;
	small_parse_table_2166(v);
}

void	small_parse_table_2166(t_small_parse_table_array *v)
{
	v->a[43320] = aux_sym_number_token1;
	v->a[43321] = aux_sym_number_token2;
	v->a[43322] = anon_sym_DOLLAR_LBRACE;
	v->a[43323] = anon_sym_DOLLAR_LPAREN;
	v->a[43324] = anon_sym_BQUOTE;
	v->a[43325] = anon_sym_DOLLAR_BQUOTE;
	v->a[43326] = anon_sym_LT_LPAREN;
	v->a[43327] = anon_sym_GT_LPAREN;
	v->a[43328] = sym_word;
	v->a[43329] = 10;
	v->a[43330] = actions(3);
	v->a[43331] = 1;
	v->a[43332] = sym_comment;
	v->a[43333] = actions(4272);
	v->a[43334] = 1;
	v->a[43335] = aux_sym_heredoc_redirect_token1;
	v->a[43336] = actions(5094);
	v->a[43337] = 1;
	v->a[43338] = sym_variable_name;
	v->a[43339] = state(6758);
	small_parse_table_2167(v);
}

void	small_parse_table_2167(t_small_parse_table_array *v)
{
	v->a[43340] = 1;
	v->a[43341] = sym_subscript;
	v->a[43342] = actions(4253);
	v->a[43343] = 2;
	v->a[43344] = anon_sym_PIPE;
	v->a[43345] = anon_sym_PIPE_AMP;
	v->a[43346] = state(4568);
	v->a[43347] = 2;
	v->a[43348] = sym_variable_assignment;
	v->a[43349] = aux_sym_variable_assignments_repeat1;
	v->a[43350] = actions(4261);
	v->a[43351] = 3;
	v->a[43352] = sym_file_descriptor;
	v->a[43353] = sym_test_operator;
	v->a[43354] = sym__brace_start;
	v->a[43355] = state(4697);
	v->a[43356] = 3;
	v->a[43357] = sym_file_redirect;
	v->a[43358] = sym_heredoc_redirect;
	v->a[43359] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2168(v);
}

void	small_parse_table_2168(t_small_parse_table_array *v)
{
	v->a[43360] = actions(4270);
	v->a[43361] = 7;
	v->a[43362] = anon_sym_SEMI;
	v->a[43363] = anon_sym_PIPE_PIPE;
	v->a[43364] = anon_sym_AMP_AMP;
	v->a[43365] = anon_sym_AMP;
	v->a[43366] = anon_sym_LT_LT;
	v->a[43367] = anon_sym_SEMI_SEMI;
	v->a[43368] = anon_sym_LT_LT_DASH;
	v->a[43369] = actions(4247);
	v->a[43370] = 28;
	v->a[43371] = anon_sym_LPAREN_LPAREN;
	v->a[43372] = anon_sym_LT;
	v->a[43373] = anon_sym_GT;
	v->a[43374] = anon_sym_GT_GT;
	v->a[43375] = anon_sym_AMP_GT;
	v->a[43376] = anon_sym_AMP_GT_GT;
	v->a[43377] = anon_sym_LT_AMP;
	v->a[43378] = anon_sym_GT_AMP;
	v->a[43379] = anon_sym_GT_PIPE;
	small_parse_table_2169(v);
}

void	small_parse_table_2169(t_small_parse_table_array *v)
{
	v->a[43380] = anon_sym_LT_AMP_DASH;
	v->a[43381] = anon_sym_GT_AMP_DASH;
	v->a[43382] = anon_sym_LT_LT_LT;
	v->a[43383] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43384] = anon_sym_DOLLAR_LBRACK;
	v->a[43385] = anon_sym_DOLLAR;
	v->a[43386] = sym__special_character;
	v->a[43387] = anon_sym_DQUOTE;
	v->a[43388] = sym_raw_string;
	v->a[43389] = sym_ansi_c_string;
	v->a[43390] = aux_sym_number_token1;
	v->a[43391] = aux_sym_number_token2;
	v->a[43392] = anon_sym_DOLLAR_LBRACE;
	v->a[43393] = anon_sym_DOLLAR_LPAREN;
	v->a[43394] = anon_sym_BQUOTE;
	v->a[43395] = anon_sym_DOLLAR_BQUOTE;
	v->a[43396] = anon_sym_LT_LPAREN;
	v->a[43397] = anon_sym_GT_LPAREN;
	v->a[43398] = sym_word;
	v->a[43399] = 3;
	small_parse_table_2170(v);
}

/* EOF small_parse_table_433.c */
