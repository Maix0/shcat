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
	v->a[44300] = state(844);
	v->a[44301] = 5;
	v->a[44302] = sym_arithmetic_expansion;
	v->a[44303] = sym_string;
	v->a[44304] = sym_simple_expansion;
	v->a[44305] = sym_expansion;
	v->a[44306] = sym_command_substitution;
	v->a[44307] = actions(756);
	v->a[44308] = 24;
	v->a[44309] = anon_sym_PIPE;
	v->a[44310] = anon_sym_AMP_AMP;
	v->a[44311] = anon_sym_PIPE_PIPE;
	v->a[44312] = anon_sym_LT;
	v->a[44313] = anon_sym_GT;
	v->a[44314] = anon_sym_GT_GT;
	v->a[44315] = anon_sym_AMP_GT;
	v->a[44316] = anon_sym_AMP_GT_GT;
	v->a[44317] = anon_sym_LT_AMP;
	v->a[44318] = anon_sym_GT_AMP;
	v->a[44319] = anon_sym_GT_PIPE;
	small_parse_table_2216(v);
}

void	small_parse_table_2216(t_small_parse_table_array *v)
{
	v->a[44320] = anon_sym_LT_AMP_DASH;
	v->a[44321] = anon_sym_GT_AMP_DASH;
	v->a[44322] = anon_sym_LT_LT;
	v->a[44323] = anon_sym_LT_LT_DASH;
	v->a[44324] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44325] = anon_sym_DOLLAR;
	v->a[44326] = anon_sym_DQUOTE;
	v->a[44327] = sym_raw_string;
	v->a[44328] = sym_number;
	v->a[44329] = anon_sym_DOLLAR_LBRACE;
	v->a[44330] = anon_sym_DOLLAR_LPAREN;
	v->a[44331] = anon_sym_BQUOTE;
	v->a[44332] = sym_word;
	v->a[44333] = 3;
	v->a[44334] = actions(3);
	v->a[44335] = 1;
	v->a[44336] = sym_comment;
	v->a[44337] = actions(1118);
	v->a[44338] = 2;
	v->a[44339] = sym_file_descriptor;
	small_parse_table_2217(v);
}

void	small_parse_table_2217(t_small_parse_table_array *v)
{
	v->a[44340] = sym__concat;
	v->a[44341] = actions(1116);
	v->a[44342] = 30;
	v->a[44343] = anon_sym_PIPE;
	v->a[44344] = anon_sym_RPAREN;
	v->a[44345] = anon_sym_SEMI_SEMI;
	v->a[44346] = anon_sym_AMP_AMP;
	v->a[44347] = anon_sym_PIPE_PIPE;
	v->a[44348] = anon_sym_LT;
	v->a[44349] = anon_sym_GT;
	v->a[44350] = anon_sym_GT_GT;
	v->a[44351] = anon_sym_AMP_GT;
	v->a[44352] = anon_sym_AMP_GT_GT;
	v->a[44353] = anon_sym_LT_AMP;
	v->a[44354] = anon_sym_GT_AMP;
	v->a[44355] = anon_sym_GT_PIPE;
	v->a[44356] = anon_sym_LT_AMP_DASH;
	v->a[44357] = anon_sym_GT_AMP_DASH;
	v->a[44358] = anon_sym_LT_LT;
	v->a[44359] = anon_sym_LT_LT_DASH;
	small_parse_table_2218(v);
}

void	small_parse_table_2218(t_small_parse_table_array *v)
{
	v->a[44360] = aux_sym_heredoc_redirect_token1;
	v->a[44361] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44362] = anon_sym_AMP;
	v->a[44363] = aux_sym_concatenation_token1;
	v->a[44364] = anon_sym_DOLLAR;
	v->a[44365] = anon_sym_DQUOTE;
	v->a[44366] = sym_raw_string;
	v->a[44367] = sym_number;
	v->a[44368] = anon_sym_DOLLAR_LBRACE;
	v->a[44369] = anon_sym_DOLLAR_LPAREN;
	v->a[44370] = anon_sym_BQUOTE;
	v->a[44371] = sym_word;
	v->a[44372] = anon_sym_SEMI;
	v->a[44373] = 3;
	v->a[44374] = actions(3);
	v->a[44375] = 1;
	v->a[44376] = sym_comment;
	v->a[44377] = actions(1122);
	v->a[44378] = 2;
	v->a[44379] = sym_file_descriptor;
	small_parse_table_2219(v);
}

void	small_parse_table_2219(t_small_parse_table_array *v)
{
	v->a[44380] = sym__concat;
	v->a[44381] = actions(1120);
	v->a[44382] = 30;
	v->a[44383] = anon_sym_PIPE;
	v->a[44384] = anon_sym_RPAREN;
	v->a[44385] = anon_sym_SEMI_SEMI;
	v->a[44386] = anon_sym_AMP_AMP;
	v->a[44387] = anon_sym_PIPE_PIPE;
	v->a[44388] = anon_sym_LT;
	v->a[44389] = anon_sym_GT;
	v->a[44390] = anon_sym_GT_GT;
	v->a[44391] = anon_sym_AMP_GT;
	v->a[44392] = anon_sym_AMP_GT_GT;
	v->a[44393] = anon_sym_LT_AMP;
	v->a[44394] = anon_sym_GT_AMP;
	v->a[44395] = anon_sym_GT_PIPE;
	v->a[44396] = anon_sym_LT_AMP_DASH;
	v->a[44397] = anon_sym_GT_AMP_DASH;
	v->a[44398] = anon_sym_LT_LT;
	v->a[44399] = anon_sym_LT_LT_DASH;
	small_parse_table_2220(v);
}

/* EOF small_parse_table_443.c */
