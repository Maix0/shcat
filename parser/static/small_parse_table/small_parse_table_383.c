/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_383.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1915(t_small_parse_table_array *v)
{
	v->a[38300] = anon_sym_LT_AMP;
	v->a[38301] = anon_sym_GT_AMP;
	v->a[38302] = anon_sym_GT_PIPE;
	v->a[38303] = anon_sym_LT_GT;
	v->a[38304] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38305] = anon_sym_DOLLAR;
	v->a[38306] = anon_sym_DQUOTE;
	v->a[38307] = sym_raw_string;
	v->a[38308] = sym_number;
	v->a[38309] = anon_sym_DOLLAR_LBRACE;
	v->a[38310] = anon_sym_DOLLAR_LPAREN;
	v->a[38311] = anon_sym_BQUOTE;
	v->a[38312] = sym_word;
	v->a[38313] = 6;
	v->a[38314] = actions(3);
	v->a[38315] = 1;
	v->a[38316] = sym_comment;
	v->a[38317] = actions(975);
	v->a[38318] = 1;
	v->a[38319] = sym__bare_dollar;
	small_parse_table_1916(v);
}

void	small_parse_table_1916(t_small_parse_table_array *v)
{
	v->a[38320] = actions(1380);
	v->a[38321] = 1;
	v->a[38322] = aux_sym_concatenation_token1;
	v->a[38323] = actions(1382);
	v->a[38324] = 1;
	v->a[38325] = sym__concat;
	v->a[38326] = state(643);
	v->a[38327] = 1;
	v->a[38328] = aux_sym_concatenation_repeat1;
	v->a[38329] = actions(967);
	v->a[38330] = 21;
	v->a[38331] = anon_sym_PIPE;
	v->a[38332] = anon_sym_AMP_AMP;
	v->a[38333] = anon_sym_PIPE_PIPE;
	v->a[38334] = anon_sym_LT;
	v->a[38335] = anon_sym_GT;
	v->a[38336] = anon_sym_GT_GT;
	v->a[38337] = anon_sym_LT_AMP;
	v->a[38338] = anon_sym_GT_AMP;
	v->a[38339] = anon_sym_GT_PIPE;
	small_parse_table_1917(v);
}

void	small_parse_table_1917(t_small_parse_table_array *v)
{
	v->a[38340] = anon_sym_LT_GT;
	v->a[38341] = anon_sym_LT_LT;
	v->a[38342] = anon_sym_LT_LT_DASH;
	v->a[38343] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38344] = anon_sym_DOLLAR;
	v->a[38345] = anon_sym_DQUOTE;
	v->a[38346] = sym_raw_string;
	v->a[38347] = sym_number;
	v->a[38348] = anon_sym_DOLLAR_LBRACE;
	v->a[38349] = anon_sym_DOLLAR_LPAREN;
	v->a[38350] = anon_sym_BQUOTE;
	v->a[38351] = sym_word;
	v->a[38352] = 5;
	v->a[38353] = actions(3);
	v->a[38354] = 1;
	v->a[38355] = sym_comment;
	v->a[38356] = actions(1289);
	v->a[38357] = 1;
	v->a[38358] = sym_variable_name;
	v->a[38359] = actions(1279);
	small_parse_table_1918(v);
}

void	small_parse_table_1918(t_small_parse_table_array *v)
{
	v->a[38360] = 8;
	v->a[38361] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38362] = anon_sym_DOLLAR;
	v->a[38363] = anon_sym_DQUOTE;
	v->a[38364] = sym_raw_string;
	v->a[38365] = sym_number;
	v->a[38366] = anon_sym_DOLLAR_LBRACE;
	v->a[38367] = anon_sym_DOLLAR_LPAREN;
	v->a[38368] = sym_word;
	v->a[38369] = actions(1281);
	v->a[38370] = 8;
	v->a[38371] = anon_sym_PIPE;
	v->a[38372] = anon_sym_SEMI_SEMI;
	v->a[38373] = anon_sym_AMP_AMP;
	v->a[38374] = anon_sym_PIPE_PIPE;
	v->a[38375] = anon_sym_LT_LT;
	v->a[38376] = anon_sym_LT_LT_DASH;
	v->a[38377] = aux_sym_heredoc_redirect_token1;
	v->a[38378] = anon_sym_SEMI;
	v->a[38379] = actions(1286);
	small_parse_table_1919(v);
}

void	small_parse_table_1919(t_small_parse_table_array *v)
{
	v->a[38380] = 8;
	v->a[38381] = anon_sym_LT;
	v->a[38382] = anon_sym_GT;
	v->a[38383] = anon_sym_GT_GT;
	v->a[38384] = anon_sym_LT_AMP;
	v->a[38385] = anon_sym_GT_AMP;
	v->a[38386] = anon_sym_GT_PIPE;
	v->a[38387] = anon_sym_LT_GT;
	v->a[38388] = anon_sym_BQUOTE;
	v->a[38389] = 4;
	v->a[38390] = actions(3);
	v->a[38391] = 1;
	v->a[38392] = sym_comment;
	v->a[38393] = actions(1308);
	v->a[38394] = 1;
	v->a[38395] = sym_variable_name;
	v->a[38396] = actions(742);
	v->a[38397] = 8;
	v->a[38398] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38399] = anon_sym_DOLLAR;
	small_parse_table_1920(v);
}

/* EOF small_parse_table_383.c */
