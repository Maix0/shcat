/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_893.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4465(t_small_parse_table_array *v)
{
	v->a[89300] = actions(3);
	v->a[89301] = 1;
	v->a[89302] = sym_comment;
	v->a[89303] = actions(749);
	v->a[89304] = 1;
	v->a[89305] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89306] = actions(751);
	v->a[89307] = 1;
	v->a[89308] = anon_sym_DOLLAR;
	v->a[89309] = actions(753);
	v->a[89310] = 1;
	v->a[89311] = anon_sym_DQUOTE;
	v->a[89312] = actions(755);
	v->a[89313] = 1;
	v->a[89314] = anon_sym_DOLLAR_LBRACE;
	v->a[89315] = actions(757);
	v->a[89316] = 1;
	v->a[89317] = anon_sym_DOLLAR_LPAREN;
	v->a[89318] = actions(759);
	v->a[89319] = 1;
	small_parse_table_4466(v);
}

void	small_parse_table_4466(t_small_parse_table_array *v)
{
	v->a[89320] = anon_sym_BQUOTE;
	v->a[89321] = state(261);
	v->a[89322] = 2;
	v->a[89323] = sym_concatenation;
	v->a[89324] = aux_sym_for_statement_repeat1;
	v->a[89325] = actions(928);
	v->a[89326] = 3;
	v->a[89327] = sym_raw_string;
	v->a[89328] = sym_number;
	v->a[89329] = sym_word;
	v->a[89330] = state(646);
	v->a[89331] = 5;
	v->a[89332] = sym_arithmetic_expansion;
	v->a[89333] = sym_string;
	v->a[89334] = sym_simple_expansion;
	v->a[89335] = sym_expansion;
	v->a[89336] = sym_command_substitution;
	v->a[89337] = 3;
	v->a[89338] = actions(1094);
	v->a[89339] = 1;
	small_parse_table_4467(v);
}

void	small_parse_table_4467(t_small_parse_table_array *v)
{
	v->a[89340] = sym_comment;
	v->a[89341] = actions(2622);
	v->a[89342] = 7;
	v->a[89343] = anon_sym_PIPE;
	v->a[89344] = anon_sym_LT;
	v->a[89345] = anon_sym_GT;
	v->a[89346] = anon_sym_AMP_GT;
	v->a[89347] = anon_sym_LT_AMP;
	v->a[89348] = anon_sym_GT_AMP;
	v->a[89349] = anon_sym_LT_LT;
	v->a[89350] = actions(2620);
	v->a[89351] = 9;
	v->a[89352] = sym_file_descriptor;
	v->a[89353] = anon_sym_AMP_AMP;
	v->a[89354] = anon_sym_PIPE_PIPE;
	v->a[89355] = anon_sym_GT_GT;
	v->a[89356] = anon_sym_AMP_GT_GT;
	v->a[89357] = anon_sym_GT_PIPE;
	v->a[89358] = anon_sym_LT_AMP_DASH;
	v->a[89359] = anon_sym_GT_AMP_DASH;
	small_parse_table_4468(v);
}

void	small_parse_table_4468(t_small_parse_table_array *v)
{
	v->a[89360] = anon_sym_LT_LT_DASH;
	v->a[89361] = 3;
	v->a[89362] = actions(1094);
	v->a[89363] = 1;
	v->a[89364] = sym_comment;
	v->a[89365] = actions(2720);
	v->a[89366] = 7;
	v->a[89367] = anon_sym_PIPE;
	v->a[89368] = anon_sym_LT;
	v->a[89369] = anon_sym_GT;
	v->a[89370] = anon_sym_AMP_GT;
	v->a[89371] = anon_sym_LT_AMP;
	v->a[89372] = anon_sym_GT_AMP;
	v->a[89373] = anon_sym_LT_LT;
	v->a[89374] = actions(2718);
	v->a[89375] = 9;
	v->a[89376] = sym_file_descriptor;
	v->a[89377] = anon_sym_AMP_AMP;
	v->a[89378] = anon_sym_PIPE_PIPE;
	v->a[89379] = anon_sym_GT_GT;
	small_parse_table_4469(v);
}

void	small_parse_table_4469(t_small_parse_table_array *v)
{
	v->a[89380] = anon_sym_AMP_GT_GT;
	v->a[89381] = anon_sym_GT_PIPE;
	v->a[89382] = anon_sym_LT_AMP_DASH;
	v->a[89383] = anon_sym_GT_AMP_DASH;
	v->a[89384] = anon_sym_LT_LT_DASH;
	v->a[89385] = 3;
	v->a[89386] = actions(3);
	v->a[89387] = 1;
	v->a[89388] = sym_comment;
	v->a[89389] = actions(1004);
	v->a[89390] = 3;
	v->a[89391] = sym_file_descriptor;
	v->a[89392] = sym__concat;
	v->a[89393] = aux_sym_heredoc_redirect_token1;
	v->a[89394] = actions(999);
	v->a[89395] = 13;
	v->a[89396] = anon_sym_AMP_AMP;
	v->a[89397] = anon_sym_PIPE_PIPE;
	v->a[89398] = anon_sym_LT;
	v->a[89399] = anon_sym_GT;
	small_parse_table_4470(v);
}

/* EOF small_parse_table_893.c */
