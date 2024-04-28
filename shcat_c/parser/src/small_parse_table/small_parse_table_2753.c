/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2753.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13765(t_small_parse_table_array *v)
{
	v->a[275300] = sym_ansi_c_string;
	v->a[275301] = anon_sym_DOLLAR_LBRACE;
	v->a[275302] = anon_sym_BQUOTE;
	v->a[275303] = anon_sym_DOLLAR_BQUOTE;
	v->a[275304] = anon_sym_LT_LPAREN;
	v->a[275305] = anon_sym_GT_LPAREN;
	v->a[275306] = 4;
	v->a[275307] = actions(71);
	v->a[275308] = 1;
	v->a[275309] = sym_comment;
	v->a[275310] = actions(12366);
	v->a[275311] = 1;
	v->a[275312] = anon_sym_esac;
	v->a[275313] = actions(12362);
	v->a[275314] = 6;
	v->a[275315] = anon_sym_LPAREN;
	v->a[275316] = anon_sym_DOLLAR;
	v->a[275317] = aux_sym_number_token1;
	v->a[275318] = aux_sym_number_token2;
	v->a[275319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_13766(v);
}

void	small_parse_table_13766(t_small_parse_table_array *v)
{
	v->a[275320] = sym_word;
	v->a[275321] = actions(12364);
	v->a[275322] = 15;
	v->a[275323] = sym_test_operator;
	v->a[275324] = sym_extglob_pattern;
	v->a[275325] = sym__brace_start;
	v->a[275326] = anon_sym_LPAREN_LPAREN;
	v->a[275327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[275328] = anon_sym_DOLLAR_LBRACK;
	v->a[275329] = sym__special_character;
	v->a[275330] = anon_sym_DQUOTE;
	v->a[275331] = sym_raw_string;
	v->a[275332] = sym_ansi_c_string;
	v->a[275333] = anon_sym_DOLLAR_LBRACE;
	v->a[275334] = anon_sym_BQUOTE;
	v->a[275335] = anon_sym_DOLLAR_BQUOTE;
	v->a[275336] = anon_sym_LT_LPAREN;
	v->a[275337] = anon_sym_GT_LPAREN;
	v->a[275338] = 5;
	v->a[275339] = actions(71);
	small_parse_table_13767(v);
}

void	small_parse_table_13767(t_small_parse_table_array *v)
{
	v->a[275340] = 1;
	v->a[275341] = sym_comment;
	v->a[275342] = state(5175);
	v->a[275343] = 1;
	v->a[275344] = aux_sym_concatenation_repeat1;
	v->a[275345] = actions(12327);
	v->a[275346] = 2;
	v->a[275347] = sym__concat;
	v->a[275348] = aux_sym_concatenation_token1;
	v->a[275349] = actions(4564);
	v->a[275350] = 7;
	v->a[275351] = anon_sym_PIPE;
	v->a[275352] = anon_sym_LT;
	v->a[275353] = anon_sym_GT;
	v->a[275354] = anon_sym_LT_LT;
	v->a[275355] = anon_sym_AMP_GT;
	v->a[275356] = anon_sym_LT_AMP;
	v->a[275357] = anon_sym_GT_AMP;
	v->a[275358] = actions(4566);
	v->a[275359] = 12;
	small_parse_table_13768(v);
}

void	small_parse_table_13768(t_small_parse_table_array *v)
{
	v->a[275360] = sym_file_descriptor;
	v->a[275361] = anon_sym_PIPE_PIPE;
	v->a[275362] = anon_sym_AMP_AMP;
	v->a[275363] = anon_sym_GT_GT;
	v->a[275364] = anon_sym_PIPE_AMP;
	v->a[275365] = anon_sym_RBRACK;
	v->a[275366] = anon_sym_AMP_GT_GT;
	v->a[275367] = anon_sym_GT_PIPE;
	v->a[275368] = anon_sym_LT_AMP_DASH;
	v->a[275369] = anon_sym_GT_AMP_DASH;
	v->a[275370] = anon_sym_LT_LT_DASH;
	v->a[275371] = anon_sym_LT_LT_LT;
	v->a[275372] = 6;
	v->a[275373] = actions(3);
	v->a[275374] = 1;
	v->a[275375] = sym_comment;
	v->a[275376] = actions(11512);
	v->a[275377] = 1;
	v->a[275378] = aux_sym_concatenation_token1;
	v->a[275379] = actions(11514);
	small_parse_table_13769(v);
}

void	small_parse_table_13769(t_small_parse_table_array *v)
{
	v->a[275380] = 1;
	v->a[275381] = sym__concat;
	v->a[275382] = state(5208);
	v->a[275383] = 1;
	v->a[275384] = aux_sym_concatenation_repeat1;
	v->a[275385] = actions(4554);
	v->a[275386] = 2;
	v->a[275387] = sym_file_descriptor;
	v->a[275388] = aux_sym_heredoc_redirect_token1;
	v->a[275389] = actions(4552);
	v->a[275390] = 17;
	v->a[275391] = anon_sym_PIPE_PIPE;
	v->a[275392] = anon_sym_AMP_AMP;
	v->a[275393] = anon_sym_PIPE;
	v->a[275394] = anon_sym_LT;
	v->a[275395] = anon_sym_GT;
	v->a[275396] = anon_sym_LT_LT;
	v->a[275397] = anon_sym_GT_GT;
	v->a[275398] = anon_sym_PIPE_AMP;
	v->a[275399] = anon_sym_AMP_GT;
	small_parse_table_13770(v);
}

/* EOF small_parse_table_2753.c */
