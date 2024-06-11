/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_983.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4915(t_small_parse_table_array *v)
{
	v->a[98300] = anon_sym_AMP_GT;
	v->a[98301] = anon_sym_LT_AMP;
	v->a[98302] = anon_sym_GT_AMP;
	v->a[98303] = 8;
	v->a[98304] = actions(1094);
	v->a[98305] = 1;
	v->a[98306] = sym_comment;
	v->a[98307] = actions(4307);
	v->a[98308] = 1;
	v->a[98309] = anon_sym_DOLLAR;
	v->a[98310] = actions(4309);
	v->a[98311] = 1;
	v->a[98312] = anon_sym_DOLLAR_LBRACE;
	v->a[98313] = actions(4311);
	v->a[98314] = 1;
	v->a[98315] = anon_sym_DOLLAR_LPAREN;
	v->a[98316] = actions(4313);
	v->a[98317] = 1;
	v->a[98318] = anon_sym_BQUOTE;
	v->a[98319] = actions(4325);
	small_parse_table_4916(v);
}

void	small_parse_table_4916(t_small_parse_table_array *v)
{
	v->a[98320] = 1;
	v->a[98321] = sym_heredoc_content;
	v->a[98322] = actions(4327);
	v->a[98323] = 1;
	v->a[98324] = sym_heredoc_end;
	v->a[98325] = state(2093);
	v->a[98326] = 4;
	v->a[98327] = sym_simple_expansion;
	v->a[98328] = sym_expansion;
	v->a[98329] = sym_command_substitution;
	v->a[98330] = aux_sym_heredoc_body_repeat1;
	v->a[98331] = 4;
	v->a[98332] = actions(1094);
	v->a[98333] = 1;
	v->a[98334] = sym_comment;
	v->a[98335] = actions(4333);
	v->a[98336] = 2;
	v->a[98337] = anon_sym_LT_AMP_DASH;
	v->a[98338] = anon_sym_GT_AMP_DASH;
	v->a[98339] = actions(4331);
	small_parse_table_4917(v);
}

void	small_parse_table_4917(t_small_parse_table_array *v)
{
	v->a[98340] = 3;
	v->a[98341] = anon_sym_GT_GT;
	v->a[98342] = anon_sym_AMP_GT_GT;
	v->a[98343] = anon_sym_GT_PIPE;
	v->a[98344] = actions(4329);
	v->a[98345] = 5;
	v->a[98346] = anon_sym_LT;
	v->a[98347] = anon_sym_GT;
	v->a[98348] = anon_sym_AMP_GT;
	v->a[98349] = anon_sym_LT_AMP;
	v->a[98350] = anon_sym_GT_AMP;
	v->a[98351] = 4;
	v->a[98352] = actions(1094);
	v->a[98353] = 1;
	v->a[98354] = sym_comment;
	v->a[98355] = actions(4339);
	v->a[98356] = 2;
	v->a[98357] = anon_sym_LT_AMP_DASH;
	v->a[98358] = anon_sym_GT_AMP_DASH;
	v->a[98359] = actions(4337);
	small_parse_table_4918(v);
}

void	small_parse_table_4918(t_small_parse_table_array *v)
{
	v->a[98360] = 3;
	v->a[98361] = anon_sym_GT_GT;
	v->a[98362] = anon_sym_AMP_GT_GT;
	v->a[98363] = anon_sym_GT_PIPE;
	v->a[98364] = actions(4335);
	v->a[98365] = 5;
	v->a[98366] = anon_sym_LT;
	v->a[98367] = anon_sym_GT;
	v->a[98368] = anon_sym_AMP_GT;
	v->a[98369] = anon_sym_LT_AMP;
	v->a[98370] = anon_sym_GT_AMP;
	v->a[98371] = 2;
	v->a[98372] = actions(3);
	v->a[98373] = 1;
	v->a[98374] = sym_comment;
	v->a[98375] = actions(3838);
	v->a[98376] = 10;
	v->a[98377] = aux_sym_heredoc_redirect_token1;
	v->a[98378] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98379] = anon_sym_DOLLAR;
	small_parse_table_4919(v);
}

void	small_parse_table_4919(t_small_parse_table_array *v)
{
	v->a[98380] = anon_sym_DQUOTE;
	v->a[98381] = sym_raw_string;
	v->a[98382] = sym_number;
	v->a[98383] = anon_sym_DOLLAR_LBRACE;
	v->a[98384] = anon_sym_DOLLAR_LPAREN;
	v->a[98385] = anon_sym_BQUOTE;
	v->a[98386] = sym_word;
	v->a[98387] = 4;
	v->a[98388] = actions(1094);
	v->a[98389] = 1;
	v->a[98390] = sym_comment;
	v->a[98391] = actions(4345);
	v->a[98392] = 2;
	v->a[98393] = anon_sym_LT_AMP_DASH;
	v->a[98394] = anon_sym_GT_AMP_DASH;
	v->a[98395] = actions(4343);
	v->a[98396] = 3;
	v->a[98397] = anon_sym_GT_GT;
	v->a[98398] = anon_sym_AMP_GT_GT;
	v->a[98399] = anon_sym_GT_PIPE;
	small_parse_table_4920(v);
}

/* EOF small_parse_table_983.c */
