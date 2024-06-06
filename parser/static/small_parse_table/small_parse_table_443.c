/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_443.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2215(t_small_parse_table_array *v)
{
	v->a[44300] = anon_sym_DQUOTE;
	v->a[44301] = sym_raw_string;
	v->a[44302] = aux_sym_number_token1;
	v->a[44303] = aux_sym_number_token2;
	v->a[44304] = anon_sym_DOLLAR_LBRACE;
	v->a[44305] = anon_sym_DOLLAR_LPAREN;
	v->a[44306] = anon_sym_BQUOTE;
	v->a[44307] = anon_sym_DOLLAR_BQUOTE;
	v->a[44308] = sym_word;
	v->a[44309] = anon_sym_SEMI;
	v->a[44310] = 3;
	v->a[44311] = actions(3);
	v->a[44312] = 1;
	v->a[44313] = sym_comment;
	v->a[44314] = actions(3050);
	v->a[44315] = 6;
	v->a[44316] = sym_file_descriptor;
	v->a[44317] = sym__concat;
	v->a[44318] = sym_test_operator;
	v->a[44319] = sym__bare_dollar;
	small_parse_table_2216(v);
}

void	small_parse_table_2216(t_small_parse_table_array *v)
{
	v->a[44320] = sym__brace_start;
	v->a[44321] = aux_sym_heredoc_redirect_token1;
	v->a[44322] = actions(3048);
	v->a[44323] = 33;
	v->a[44324] = anon_sym_PIPE;
	v->a[44325] = anon_sym_RPAREN;
	v->a[44326] = anon_sym_SEMI_SEMI;
	v->a[44327] = anon_sym_PIPE_AMP;
	v->a[44328] = anon_sym_AMP_AMP;
	v->a[44329] = anon_sym_PIPE_PIPE;
	v->a[44330] = anon_sym_LT;
	v->a[44331] = anon_sym_GT;
	v->a[44332] = anon_sym_GT_GT;
	v->a[44333] = anon_sym_AMP_GT;
	v->a[44334] = anon_sym_AMP_GT_GT;
	v->a[44335] = anon_sym_LT_AMP;
	v->a[44336] = anon_sym_GT_AMP;
	v->a[44337] = anon_sym_GT_PIPE;
	v->a[44338] = anon_sym_LT_AMP_DASH;
	v->a[44339] = anon_sym_GT_AMP_DASH;
	small_parse_table_2217(v);
}

void	small_parse_table_2217(t_small_parse_table_array *v)
{
	v->a[44340] = anon_sym_LT_LT;
	v->a[44341] = anon_sym_LT_LT_DASH;
	v->a[44342] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44343] = anon_sym_AMP;
	v->a[44344] = aux_sym_concatenation_token1;
	v->a[44345] = anon_sym_DOLLAR;
	v->a[44346] = sym__special_character;
	v->a[44347] = anon_sym_DQUOTE;
	v->a[44348] = sym_raw_string;
	v->a[44349] = aux_sym_number_token1;
	v->a[44350] = aux_sym_number_token2;
	v->a[44351] = anon_sym_DOLLAR_LBRACE;
	v->a[44352] = anon_sym_DOLLAR_LPAREN;
	v->a[44353] = anon_sym_BQUOTE;
	v->a[44354] = anon_sym_DOLLAR_BQUOTE;
	v->a[44355] = sym_word;
	v->a[44356] = anon_sym_SEMI;
	v->a[44357] = 3;
	v->a[44358] = actions(3);
	v->a[44359] = 1;
	small_parse_table_2218(v);
}

void	small_parse_table_2218(t_small_parse_table_array *v)
{
	v->a[44360] = sym_comment;
	v->a[44361] = actions(3066);
	v->a[44362] = 6;
	v->a[44363] = sym_file_descriptor;
	v->a[44364] = sym__concat;
	v->a[44365] = sym_variable_name;
	v->a[44366] = sym_test_operator;
	v->a[44367] = sym__brace_start;
	v->a[44368] = aux_sym_heredoc_redirect_token1;
	v->a[44369] = actions(3064);
	v->a[44370] = 33;
	v->a[44371] = anon_sym_PIPE;
	v->a[44372] = anon_sym_RPAREN;
	v->a[44373] = anon_sym_SEMI_SEMI;
	v->a[44374] = anon_sym_PIPE_AMP;
	v->a[44375] = anon_sym_AMP_AMP;
	v->a[44376] = anon_sym_PIPE_PIPE;
	v->a[44377] = anon_sym_LT;
	v->a[44378] = anon_sym_GT;
	v->a[44379] = anon_sym_GT_GT;
	small_parse_table_2219(v);
}

void	small_parse_table_2219(t_small_parse_table_array *v)
{
	v->a[44380] = anon_sym_AMP_GT;
	v->a[44381] = anon_sym_AMP_GT_GT;
	v->a[44382] = anon_sym_LT_AMP;
	v->a[44383] = anon_sym_GT_AMP;
	v->a[44384] = anon_sym_GT_PIPE;
	v->a[44385] = anon_sym_LT_AMP_DASH;
	v->a[44386] = anon_sym_GT_AMP_DASH;
	v->a[44387] = anon_sym_LT_LT;
	v->a[44388] = anon_sym_LT_LT_DASH;
	v->a[44389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44390] = anon_sym_AMP;
	v->a[44391] = aux_sym_concatenation_token1;
	v->a[44392] = anon_sym_DOLLAR;
	v->a[44393] = sym__special_character;
	v->a[44394] = anon_sym_DQUOTE;
	v->a[44395] = sym_raw_string;
	v->a[44396] = aux_sym_number_token1;
	v->a[44397] = aux_sym_number_token2;
	v->a[44398] = anon_sym_DOLLAR_LBRACE;
	v->a[44399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2220(v);
}

/* EOF small_parse_table_443.c */
