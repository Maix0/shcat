/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_53.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_265(t_small_parse_table_array *v)
{
	v->a[5300] = anon_sym_EQ_EQ;
	v->a[5301] = anon_sym_LT;
	v->a[5302] = anon_sym_GT;
	v->a[5303] = anon_sym_LT_LT;
	v->a[5304] = anon_sym_GT_GT;
	v->a[5305] = anon_sym_LPAREN;
	v->a[5306] = anon_sym_SEMI_SEMI;
	v->a[5307] = anon_sym_PIPE_AMP;
	v->a[5308] = anon_sym_EQ_TILDE;
	v->a[5309] = anon_sym_AMP_GT;
	v->a[5310] = anon_sym_AMP_GT_GT;
	v->a[5311] = anon_sym_LT_AMP;
	v->a[5312] = anon_sym_GT_AMP;
	v->a[5313] = anon_sym_GT_PIPE;
	v->a[5314] = anon_sym_LT_AMP_DASH;
	v->a[5315] = anon_sym_GT_AMP_DASH;
	v->a[5316] = anon_sym_LT_LT_DASH;
	v->a[5317] = aux_sym_heredoc_redirect_token1;
	v->a[5318] = anon_sym_LT_LT_LT;
	v->a[5319] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_266(v);
}

void	small_parse_table_266(t_small_parse_table_array *v)
{
	v->a[5320] = anon_sym_DOLLAR_LBRACK;
	v->a[5321] = sym__special_character;
	v->a[5322] = sym_raw_string;
	v->a[5323] = sym_ansi_c_string;
	v->a[5324] = aux_sym_number_token1;
	v->a[5325] = aux_sym_number_token2;
	v->a[5326] = anon_sym_DOLLAR_LBRACE;
	v->a[5327] = anon_sym_DOLLAR_LPAREN;
	v->a[5328] = anon_sym_BQUOTE;
	v->a[5329] = anon_sym_DOLLAR_BQUOTE;
	v->a[5330] = anon_sym_LT_LPAREN;
	v->a[5331] = anon_sym_GT_LPAREN;
	v->a[5332] = sym_word;
	v->a[5333] = 24;
	v->a[5334] = actions(3);
	v->a[5335] = 1;
	v->a[5336] = sym_comment;
	v->a[5337] = actions(2163);
	v->a[5338] = 1;
	v->a[5339] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_267(v);
}

void	small_parse_table_267(t_small_parse_table_array *v)
{
	v->a[5340] = actions(2166);
	v->a[5341] = 1;
	v->a[5342] = anon_sym_DOLLAR;
	v->a[5343] = actions(2169);
	v->a[5344] = 1;
	v->a[5345] = sym__special_character;
	v->a[5346] = actions(2172);
	v->a[5347] = 1;
	v->a[5348] = anon_sym_DQUOTE;
	v->a[5349] = actions(2175);
	v->a[5350] = 1;
	v->a[5351] = aux_sym_number_token1;
	v->a[5352] = actions(2178);
	v->a[5353] = 1;
	v->a[5354] = aux_sym_number_token2;
	v->a[5355] = actions(2181);
	v->a[5356] = 1;
	v->a[5357] = anon_sym_DOLLAR_LBRACE;
	v->a[5358] = actions(2184);
	v->a[5359] = 1;
	small_parse_table_268(v);
}

void	small_parse_table_268(t_small_parse_table_array *v)
{
	v->a[5360] = anon_sym_DOLLAR_LPAREN;
	v->a[5361] = actions(2187);
	v->a[5362] = 1;
	v->a[5363] = anon_sym_BQUOTE;
	v->a[5364] = actions(2190);
	v->a[5365] = 1;
	v->a[5366] = anon_sym_DOLLAR_BQUOTE;
	v->a[5367] = actions(2196);
	v->a[5368] = 1;
	v->a[5369] = aux_sym__simple_variable_name_token1;
	v->a[5370] = actions(2199);
	v->a[5371] = 1;
	v->a[5372] = sym_variable_name;
	v->a[5373] = actions(2202);
	v->a[5374] = 1;
	v->a[5375] = sym_test_operator;
	v->a[5376] = actions(2205);
	v->a[5377] = 1;
	v->a[5378] = sym__brace_start;
	v->a[5379] = state(1743);
	small_parse_table_269(v);
}

void	small_parse_table_269(t_small_parse_table_array *v)
{
	v->a[5380] = 1;
	v->a[5381] = aux_sym__literal_repeat1;
	v->a[5382] = state(6781);
	v->a[5383] = 1;
	v->a[5384] = sym_subscript;
	v->a[5385] = actions(1704);
	v->a[5386] = 2;
	v->a[5387] = sym_file_descriptor;
	v->a[5388] = aux_sym_heredoc_redirect_token1;
	v->a[5389] = actions(2160);
	v->a[5390] = 2;
	v->a[5391] = anon_sym_LPAREN_LPAREN;
	v->a[5392] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5393] = actions(2193);
	v->a[5394] = 2;
	v->a[5395] = anon_sym_LT_LPAREN;
	v->a[5396] = anon_sym_GT_LPAREN;
	v->a[5397] = actions(2157);
	v->a[5398] = 3;
	v->a[5399] = sym_raw_string;
	small_parse_table_270(v);
}

/* EOF small_parse_table_53.c */
