/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_183.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_915(t_small_parse_table_array *v)
{
	v->a[18300] = sym_number;
	v->a[18301] = anon_sym_DOLLAR_LBRACE;
	v->a[18302] = anon_sym_DOLLAR_LPAREN;
	v->a[18303] = anon_sym_BQUOTE;
	v->a[18304] = sym_word;
	v->a[18305] = anon_sym_SEMI;
	v->a[18306] = 6;
	v->a[18307] = actions(3);
	v->a[18308] = 1;
	v->a[18309] = sym_comment;
	v->a[18310] = actions(387);
	v->a[18311] = 1;
	v->a[18312] = sym_variable_name;
	v->a[18313] = actions(367);
	v->a[18314] = 2;
	v->a[18315] = sym_file_descriptor;
	v->a[18316] = sym__bare_dollar;
	v->a[18317] = actions(385);
	v->a[18318] = 2;
	v->a[18319] = aux_sym__simple_variable_name_token1;
	small_parse_table_916(v);
}

void	small_parse_table_916(t_small_parse_table_array *v)
{
	v->a[18320] = aux_sym__multiline_variable_name_token1;
	v->a[18321] = actions(383);
	v->a[18322] = 8;
	v->a[18323] = anon_sym_BANG;
	v->a[18324] = anon_sym_DASH;
	v->a[18325] = anon_sym_STAR;
	v->a[18326] = anon_sym_QMARK;
	v->a[18327] = anon_sym_DOLLAR;
	v->a[18328] = anon_sym_POUND;
	v->a[18329] = anon_sym_AT;
	v->a[18330] = anon_sym_0;
	v->a[18331] = actions(361);
	v->a[18332] = 24;
	v->a[18333] = anon_sym_PIPE;
	v->a[18334] = anon_sym_RPAREN;
	v->a[18335] = anon_sym_SEMI_SEMI;
	v->a[18336] = anon_sym_AMP_AMP;
	v->a[18337] = anon_sym_PIPE_PIPE;
	v->a[18338] = anon_sym_LT;
	v->a[18339] = anon_sym_GT;
	small_parse_table_917(v);
}

void	small_parse_table_917(t_small_parse_table_array *v)
{
	v->a[18340] = anon_sym_GT_GT;
	v->a[18341] = anon_sym_LT_AMP;
	v->a[18342] = anon_sym_GT_AMP;
	v->a[18343] = anon_sym_GT_PIPE;
	v->a[18344] = anon_sym_LT_GT;
	v->a[18345] = anon_sym_LT_LT;
	v->a[18346] = anon_sym_LT_LT_DASH;
	v->a[18347] = aux_sym_heredoc_redirect_token1;
	v->a[18348] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18349] = anon_sym_DQUOTE;
	v->a[18350] = sym_raw_string;
	v->a[18351] = sym_number;
	v->a[18352] = anon_sym_DOLLAR_LBRACE;
	v->a[18353] = anon_sym_DOLLAR_LPAREN;
	v->a[18354] = anon_sym_BQUOTE;
	v->a[18355] = sym_word;
	v->a[18356] = anon_sym_SEMI;
	v->a[18357] = 6;
	v->a[18358] = actions(3);
	v->a[18359] = 1;
	small_parse_table_918(v);
}

void	small_parse_table_918(t_small_parse_table_array *v)
{
	v->a[18360] = sym_comment;
	v->a[18361] = actions(393);
	v->a[18362] = 1;
	v->a[18363] = sym_variable_name;
	v->a[18364] = actions(391);
	v->a[18365] = 2;
	v->a[18366] = aux_sym__simple_variable_name_token1;
	v->a[18367] = aux_sym__multiline_variable_name_token1;
	v->a[18368] = actions(367);
	v->a[18369] = 3;
	v->a[18370] = sym_file_descriptor;
	v->a[18371] = sym__bare_dollar;
	v->a[18372] = ts_builtin_sym_end;
	v->a[18373] = actions(389);
	v->a[18374] = 8;
	v->a[18375] = anon_sym_BANG;
	v->a[18376] = anon_sym_DASH;
	v->a[18377] = anon_sym_STAR;
	v->a[18378] = anon_sym_QMARK;
	v->a[18379] = anon_sym_DOLLAR;
	small_parse_table_919(v);
}

void	small_parse_table_919(t_small_parse_table_array *v)
{
	v->a[18380] = anon_sym_POUND;
	v->a[18381] = anon_sym_AT;
	v->a[18382] = anon_sym_0;
	v->a[18383] = actions(361);
	v->a[18384] = 23;
	v->a[18385] = anon_sym_PIPE;
	v->a[18386] = anon_sym_SEMI_SEMI;
	v->a[18387] = anon_sym_AMP_AMP;
	v->a[18388] = anon_sym_PIPE_PIPE;
	v->a[18389] = anon_sym_LT;
	v->a[18390] = anon_sym_GT;
	v->a[18391] = anon_sym_GT_GT;
	v->a[18392] = anon_sym_LT_AMP;
	v->a[18393] = anon_sym_GT_AMP;
	v->a[18394] = anon_sym_GT_PIPE;
	v->a[18395] = anon_sym_LT_GT;
	v->a[18396] = anon_sym_LT_LT;
	v->a[18397] = anon_sym_LT_LT_DASH;
	v->a[18398] = aux_sym_heredoc_redirect_token1;
	v->a[18399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_920(v);
}

/* EOF small_parse_table_183.c */
