/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2743.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13715(t_small_parse_table_array *v)
{
	v->a[274300] = 21;
	v->a[274301] = anon_sym_SEMI;
	v->a[274302] = anon_sym_PIPE_PIPE;
	v->a[274303] = anon_sym_AMP_AMP;
	v->a[274304] = anon_sym_PIPE;
	v->a[274305] = anon_sym_AMP;
	v->a[274306] = anon_sym_LT;
	v->a[274307] = anon_sym_GT;
	v->a[274308] = anon_sym_LT_LT;
	v->a[274309] = anon_sym_GT_GT;
	v->a[274310] = anon_sym_SEMI_SEMI;
	v->a[274311] = anon_sym_SEMI_AMP;
	v->a[274312] = anon_sym_SEMI_SEMI_AMP;
	v->a[274313] = anon_sym_PIPE_AMP;
	v->a[274314] = anon_sym_AMP_GT;
	v->a[274315] = anon_sym_AMP_GT_GT;
	v->a[274316] = anon_sym_LT_AMP;
	v->a[274317] = anon_sym_GT_AMP;
	v->a[274318] = anon_sym_GT_PIPE;
	v->a[274319] = anon_sym_LT_AMP_DASH;
	small_parse_table_13716(v);
}

void	small_parse_table_13716(t_small_parse_table_array *v)
{
	v->a[274320] = anon_sym_GT_AMP_DASH;
	v->a[274321] = anon_sym_LT_LT_DASH;
	v->a[274322] = 5;
	v->a[274323] = actions(71);
	v->a[274324] = 1;
	v->a[274325] = sym_comment;
	v->a[274326] = state(5065);
	v->a[274327] = 1;
	v->a[274328] = aux_sym_concatenation_repeat1;
	v->a[274329] = actions(12309);
	v->a[274330] = 2;
	v->a[274331] = sym__concat;
	v->a[274332] = aux_sym_concatenation_token1;
	v->a[274333] = actions(1261);
	v->a[274334] = 6;
	v->a[274335] = anon_sym_DOLLAR;
	v->a[274336] = aux_sym_number_token1;
	v->a[274337] = aux_sym_number_token2;
	v->a[274338] = anon_sym_DOLLAR_LPAREN;
	v->a[274339] = anon_sym_BQUOTE;
	small_parse_table_13717(v);
}

void	small_parse_table_13717(t_small_parse_table_array *v)
{
	v->a[274340] = sym_word;
	v->a[274341] = actions(1263);
	v->a[274342] = 14;
	v->a[274343] = sym_test_operator;
	v->a[274344] = sym__brace_start;
	v->a[274345] = anon_sym_LPAREN_LPAREN;
	v->a[274346] = anon_sym_RPAREN;
	v->a[274347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[274348] = anon_sym_DOLLAR_LBRACK;
	v->a[274349] = sym__special_character;
	v->a[274350] = anon_sym_DQUOTE;
	v->a[274351] = sym_raw_string;
	v->a[274352] = sym_ansi_c_string;
	v->a[274353] = anon_sym_DOLLAR_LBRACE;
	v->a[274354] = anon_sym_DOLLAR_BQUOTE;
	v->a[274355] = anon_sym_LT_LPAREN;
	v->a[274356] = anon_sym_GT_LPAREN;
	v->a[274357] = 3;
	v->a[274358] = actions(3);
	v->a[274359] = 1;
	small_parse_table_13718(v);
}

void	small_parse_table_13718(t_small_parse_table_array *v)
{
	v->a[274360] = sym_comment;
	v->a[274361] = actions(12199);
	v->a[274362] = 2;
	v->a[274363] = sym_file_descriptor;
	v->a[274364] = aux_sym_heredoc_redirect_token1;
	v->a[274365] = actions(12201);
	v->a[274366] = 21;
	v->a[274367] = anon_sym_SEMI;
	v->a[274368] = anon_sym_PIPE_PIPE;
	v->a[274369] = anon_sym_AMP_AMP;
	v->a[274370] = anon_sym_PIPE;
	v->a[274371] = anon_sym_AMP;
	v->a[274372] = anon_sym_LT;
	v->a[274373] = anon_sym_GT;
	v->a[274374] = anon_sym_LT_LT;
	v->a[274375] = anon_sym_GT_GT;
	v->a[274376] = anon_sym_SEMI_SEMI;
	v->a[274377] = anon_sym_SEMI_AMP;
	v->a[274378] = anon_sym_SEMI_SEMI_AMP;
	v->a[274379] = anon_sym_PIPE_AMP;
	small_parse_table_13719(v);
}

void	small_parse_table_13719(t_small_parse_table_array *v)
{
	v->a[274380] = anon_sym_AMP_GT;
	v->a[274381] = anon_sym_AMP_GT_GT;
	v->a[274382] = anon_sym_LT_AMP;
	v->a[274383] = anon_sym_GT_AMP;
	v->a[274384] = anon_sym_GT_PIPE;
	v->a[274385] = anon_sym_LT_AMP_DASH;
	v->a[274386] = anon_sym_GT_AMP_DASH;
	v->a[274387] = anon_sym_LT_LT_DASH;
	v->a[274388] = 3;
	v->a[274389] = actions(3);
	v->a[274390] = 1;
	v->a[274391] = sym_comment;
	v->a[274392] = actions(12225);
	v->a[274393] = 2;
	v->a[274394] = sym_file_descriptor;
	v->a[274395] = aux_sym_heredoc_redirect_token1;
	v->a[274396] = actions(12223);
	v->a[274397] = 21;
	v->a[274398] = anon_sym_SEMI;
	v->a[274399] = anon_sym_PIPE_PIPE;
	small_parse_table_13720(v);
}

/* EOF small_parse_table_2743.c */
