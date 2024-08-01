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
	v->a[18300] = sym_word;
	v->a[18301] = 5;
	v->a[18302] = actions(3);
	v->a[18303] = 1;
	v->a[18304] = sym_comment;
	v->a[18305] = actions(393);
	v->a[18306] = 1;
	v->a[18307] = sym_variable_name;
	v->a[18308] = actions(391);
	v->a[18309] = 2;
	v->a[18310] = aux_sym__simple_variable_name_token1;
	v->a[18311] = aux_sym__multiline_variable_name_token1;
	v->a[18312] = actions(389);
	v->a[18313] = 8;
	v->a[18314] = anon_sym_BANG;
	v->a[18315] = anon_sym_DASH;
	v->a[18316] = anon_sym_STAR;
	v->a[18317] = anon_sym_QMARK;
	v->a[18318] = anon_sym_DOLLAR;
	v->a[18319] = anon_sym_POUND;
	small_parse_table_916(v);
}

void	small_parse_table_916(t_small_parse_table_array *v)
{
	v->a[18320] = anon_sym_AT;
	v->a[18321] = anon_sym_0;
	v->a[18322] = actions(343);
	v->a[18323] = 16;
	v->a[18324] = anon_sym_PIPE;
	v->a[18325] = anon_sym_AMP_AMP;
	v->a[18326] = anon_sym_PIPE_PIPE;
	v->a[18327] = anon_sym_LT;
	v->a[18328] = anon_sym_GT;
	v->a[18329] = anon_sym_GT_GT;
	v->a[18330] = anon_sym_LT_LT;
	v->a[18331] = aux_sym_heredoc_redirect_token1;
	v->a[18332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18333] = anon_sym_DQUOTE;
	v->a[18334] = sym_raw_string;
	v->a[18335] = sym_number;
	v->a[18336] = anon_sym_DOLLAR_LBRACE;
	v->a[18337] = anon_sym_DOLLAR_LPAREN;
	v->a[18338] = anon_sym_BQUOTE;
	v->a[18339] = sym_word;
	small_parse_table_917(v);
}

void	small_parse_table_917(t_small_parse_table_array *v)
{
	v->a[18340] = 12;
	v->a[18341] = actions(3);
	v->a[18342] = 1;
	v->a[18343] = sym_comment;
	v->a[18344] = actions(53);
	v->a[18345] = 1;
	v->a[18346] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18347] = actions(55);
	v->a[18348] = 1;
	v->a[18349] = anon_sym_DOLLAR;
	v->a[18350] = actions(57);
	v->a[18351] = 1;
	v->a[18352] = anon_sym_DQUOTE;
	v->a[18353] = actions(61);
	v->a[18354] = 1;
	v->a[18355] = anon_sym_DOLLAR_LBRACE;
	v->a[18356] = actions(63);
	v->a[18357] = 1;
	v->a[18358] = anon_sym_DOLLAR_LPAREN;
	v->a[18359] = actions(419);
	small_parse_table_918(v);
}

void	small_parse_table_918(t_small_parse_table_array *v)
{
	v->a[18360] = 1;
	v->a[18361] = sym__bare_dollar;
	v->a[18362] = state(189);
	v->a[18363] = 1;
	v->a[18364] = aux_sym_command_repeat2;
	v->a[18365] = state(570);
	v->a[18366] = 1;
	v->a[18367] = sym_concatenation;
	v->a[18368] = actions(602);
	v->a[18369] = 3;
	v->a[18370] = sym_raw_string;
	v->a[18371] = sym_number;
	v->a[18372] = sym_word;
	v->a[18373] = state(431);
	v->a[18374] = 5;
	v->a[18375] = sym_arithmetic_expansion;
	v->a[18376] = sym_string;
	v->a[18377] = sym_simple_expansion;
	v->a[18378] = sym_expansion;
	v->a[18379] = sym_command_substitution;
	small_parse_table_919(v);
}

void	small_parse_table_919(t_small_parse_table_array *v)
{
	v->a[18380] = actions(411);
	v->a[18381] = 11;
	v->a[18382] = anon_sym_PIPE;
	v->a[18383] = anon_sym_SEMI_SEMI;
	v->a[18384] = anon_sym_AMP_AMP;
	v->a[18385] = anon_sym_PIPE_PIPE;
	v->a[18386] = anon_sym_LT;
	v->a[18387] = anon_sym_GT;
	v->a[18388] = anon_sym_GT_GT;
	v->a[18389] = anon_sym_LT_LT;
	v->a[18390] = aux_sym_heredoc_redirect_token1;
	v->a[18391] = anon_sym_BQUOTE;
	v->a[18392] = anon_sym_SEMI;
	v->a[18393] = 12;
	v->a[18394] = actions(3);
	v->a[18395] = 1;
	v->a[18396] = sym_comment;
	v->a[18397] = actions(53);
	v->a[18398] = 1;
	v->a[18399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_920(v);
}

/* EOF small_parse_table_183.c */
