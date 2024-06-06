/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1003.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5015(t_small_parse_table_array *v)
{
	v->a[100300] = sym_file_descriptor;
	v->a[100301] = actions(2516);
	v->a[100302] = 2;
	v->a[100303] = anon_sym_PIPE;
	v->a[100304] = anon_sym_PIPE_AMP;
	v->a[100305] = actions(2945);
	v->a[100306] = 2;
	v->a[100307] = anon_sym_LT_LT;
	v->a[100308] = anon_sym_LT_LT_DASH;
	v->a[100309] = actions(2960);
	v->a[100310] = 2;
	v->a[100311] = anon_sym_AMP_AMP;
	v->a[100312] = anon_sym_PIPE_PIPE;
	v->a[100313] = actions(5678);
	v->a[100314] = 2;
	v->a[100315] = anon_sym_LT_AMP_DASH;
	v->a[100316] = anon_sym_GT_AMP_DASH;
	v->a[100317] = actions(2712);
	v->a[100318] = 3;
	v->a[100319] = anon_sym_SEMI_SEMI;
	small_parse_table_5016(v);
}

void	small_parse_table_5016(t_small_parse_table_array *v)
{
	v->a[100320] = anon_sym_AMP;
	v->a[100321] = anon_sym_SEMI;
	v->a[100322] = state(2109);
	v->a[100323] = 3;
	v->a[100324] = sym_file_redirect;
	v->a[100325] = sym_heredoc_redirect;
	v->a[100326] = aux_sym_redirected_statement_repeat1;
	v->a[100327] = actions(5676);
	v->a[100328] = 8;
	v->a[100329] = anon_sym_LT;
	v->a[100330] = anon_sym_GT;
	v->a[100331] = anon_sym_GT_GT;
	v->a[100332] = anon_sym_AMP_GT;
	v->a[100333] = anon_sym_AMP_GT_GT;
	v->a[100334] = anon_sym_LT_AMP;
	v->a[100335] = anon_sym_GT_AMP;
	v->a[100336] = anon_sym_GT_PIPE;
	v->a[100337] = 19;
	v->a[100338] = actions(3);
	v->a[100339] = 1;
	small_parse_table_5017(v);
}

void	small_parse_table_5017(t_small_parse_table_array *v)
{
	v->a[100340] = sym_comment;
	v->a[100341] = actions(2541);
	v->a[100342] = 1;
	v->a[100343] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100344] = actions(2543);
	v->a[100345] = 1;
	v->a[100346] = anon_sym_DOLLAR;
	v->a[100347] = actions(2545);
	v->a[100348] = 1;
	v->a[100349] = sym__special_character;
	v->a[100350] = actions(2547);
	v->a[100351] = 1;
	v->a[100352] = anon_sym_DQUOTE;
	v->a[100353] = actions(2551);
	v->a[100354] = 1;
	v->a[100355] = aux_sym_number_token1;
	v->a[100356] = actions(2553);
	v->a[100357] = 1;
	v->a[100358] = aux_sym_number_token2;
	v->a[100359] = actions(2555);
	small_parse_table_5018(v);
}

void	small_parse_table_5018(t_small_parse_table_array *v)
{
	v->a[100360] = 1;
	v->a[100361] = anon_sym_DOLLAR_LBRACE;
	v->a[100362] = actions(2557);
	v->a[100363] = 1;
	v->a[100364] = anon_sym_DOLLAR_LPAREN;
	v->a[100365] = actions(2559);
	v->a[100366] = 1;
	v->a[100367] = anon_sym_BQUOTE;
	v->a[100368] = actions(2561);
	v->a[100369] = 1;
	v->a[100370] = anon_sym_DOLLAR_BQUOTE;
	v->a[100371] = actions(2567);
	v->a[100372] = 1;
	v->a[100373] = sym__brace_start;
	v->a[100374] = actions(5682);
	v->a[100375] = 1;
	v->a[100376] = sym_word;
	v->a[100377] = actions(5686);
	v->a[100378] = 1;
	v->a[100379] = sym__comment_word;
	small_parse_table_5019(v);
}

void	small_parse_table_5019(t_small_parse_table_array *v)
{
	v->a[100380] = actions(5688);
	v->a[100381] = 1;
	v->a[100382] = sym__empty_value;
	v->a[100383] = state(1564);
	v->a[100384] = 1;
	v->a[100385] = aux_sym__literal_repeat1;
	v->a[100386] = state(1654);
	v->a[100387] = 1;
	v->a[100388] = sym_concatenation;
	v->a[100389] = actions(5684);
	v->a[100390] = 2;
	v->a[100391] = sym_test_operator;
	v->a[100392] = sym_raw_string;
	v->a[100393] = state(1367);
	v->a[100394] = 7;
	v->a[100395] = sym_arithmetic_expansion;
	v->a[100396] = sym_brace_expression;
	v->a[100397] = sym_string;
	v->a[100398] = sym_number;
	v->a[100399] = sym_simple_expansion;
	small_parse_table_5020(v);
}

/* EOF small_parse_table_1003.c */
