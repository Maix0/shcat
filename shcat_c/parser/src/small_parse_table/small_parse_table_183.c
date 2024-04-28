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
	v->a[18300] = anon_sym_DQUOTE;
	v->a[18301] = actions(3653);
	v->a[18302] = 1;
	v->a[18303] = sym_variable_name;
	v->a[18304] = state(1878);
	v->a[18305] = 1;
	v->a[18306] = sym_string;
	v->a[18307] = actions(3651);
	v->a[18308] = 2;
	v->a[18309] = aux_sym__simple_variable_name_token1;
	v->a[18310] = aux_sym__multiline_variable_name_token1;
	v->a[18311] = actions(1241);
	v->a[18312] = 4;
	v->a[18313] = sym_file_descriptor;
	v->a[18314] = sym_test_operator;
	v->a[18315] = sym__brace_start;
	v->a[18316] = ts_builtin_sym_end;
	v->a[18317] = actions(3649);
	v->a[18318] = 9;
	v->a[18319] = anon_sym_DASH;
	small_parse_table_916(v);
}

void	small_parse_table_916(t_small_parse_table_array *v)
{
	v->a[18320] = anon_sym_STAR;
	v->a[18321] = anon_sym_BANG;
	v->a[18322] = anon_sym_QMARK;
	v->a[18323] = anon_sym_DOLLAR;
	v->a[18324] = anon_sym_POUND;
	v->a[18325] = anon_sym_AT2;
	v->a[18326] = anon_sym_0;
	v->a[18327] = anon_sym__;
	v->a[18328] = actions(1239);
	v->a[18329] = 35;
	v->a[18330] = anon_sym_LPAREN_LPAREN;
	v->a[18331] = anon_sym_SEMI;
	v->a[18332] = anon_sym_PIPE_PIPE;
	v->a[18333] = anon_sym_AMP_AMP;
	v->a[18334] = anon_sym_PIPE;
	v->a[18335] = anon_sym_AMP;
	v->a[18336] = anon_sym_LT;
	v->a[18337] = anon_sym_GT;
	v->a[18338] = anon_sym_LT_LT;
	v->a[18339] = anon_sym_GT_GT;
	small_parse_table_917(v);
}

void	small_parse_table_917(t_small_parse_table_array *v)
{
	v->a[18340] = anon_sym_SEMI_SEMI;
	v->a[18341] = anon_sym_PIPE_AMP;
	v->a[18342] = anon_sym_AMP_GT;
	v->a[18343] = anon_sym_AMP_GT_GT;
	v->a[18344] = anon_sym_LT_AMP;
	v->a[18345] = anon_sym_GT_AMP;
	v->a[18346] = anon_sym_GT_PIPE;
	v->a[18347] = anon_sym_LT_AMP_DASH;
	v->a[18348] = anon_sym_GT_AMP_DASH;
	v->a[18349] = anon_sym_LT_LT_DASH;
	v->a[18350] = aux_sym_heredoc_redirect_token1;
	v->a[18351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18352] = anon_sym_DOLLAR_LBRACK;
	v->a[18353] = sym__special_character;
	v->a[18354] = sym_raw_string;
	v->a[18355] = sym_ansi_c_string;
	v->a[18356] = aux_sym_number_token1;
	v->a[18357] = aux_sym_number_token2;
	v->a[18358] = anon_sym_DOLLAR_LBRACE;
	v->a[18359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_918(v);
}

void	small_parse_table_918(t_small_parse_table_array *v)
{
	v->a[18360] = anon_sym_BQUOTE;
	v->a[18361] = anon_sym_DOLLAR_BQUOTE;
	v->a[18362] = anon_sym_LT_LPAREN;
	v->a[18363] = anon_sym_GT_LPAREN;
	v->a[18364] = sym_word;
	v->a[18365] = 21;
	v->a[18366] = actions(3);
	v->a[18367] = 1;
	v->a[18368] = sym_comment;
	v->a[18369] = actions(3673);
	v->a[18370] = 1;
	v->a[18371] = anon_sym_DOLLAR_LBRACK;
	v->a[18372] = actions(3675);
	v->a[18373] = 1;
	v->a[18374] = anon_sym_DOLLAR;
	v->a[18375] = actions(3677);
	v->a[18376] = 1;
	v->a[18377] = sym__special_character;
	v->a[18378] = actions(3679);
	v->a[18379] = 1;
	small_parse_table_919(v);
}

void	small_parse_table_919(t_small_parse_table_array *v)
{
	v->a[18380] = anon_sym_DQUOTE;
	v->a[18381] = actions(3681);
	v->a[18382] = 1;
	v->a[18383] = aux_sym_number_token1;
	v->a[18384] = actions(3683);
	v->a[18385] = 1;
	v->a[18386] = aux_sym_number_token2;
	v->a[18387] = actions(3685);
	v->a[18388] = 1;
	v->a[18389] = anon_sym_DOLLAR_LBRACE;
	v->a[18390] = actions(3687);
	v->a[18391] = 1;
	v->a[18392] = anon_sym_DOLLAR_LPAREN;
	v->a[18393] = actions(3689);
	v->a[18394] = 1;
	v->a[18395] = anon_sym_BQUOTE;
	v->a[18396] = actions(3691);
	v->a[18397] = 1;
	v->a[18398] = anon_sym_DOLLAR_BQUOTE;
	v->a[18399] = actions(3695);
	small_parse_table_920(v);
}

/* EOF small_parse_table_183.c */
