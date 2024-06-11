/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_493.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2465(t_small_parse_table_array *v)
{
	v->a[49300] = sym_variable_name;
	v->a[49301] = actions(1605);
	v->a[49302] = 1;
	v->a[49303] = anon_sym_RPAREN;
	v->a[49304] = actions(1558);
	v->a[49305] = 9;
	v->a[49306] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49307] = anon_sym_DOLLAR;
	v->a[49308] = anon_sym_DQUOTE;
	v->a[49309] = sym_raw_string;
	v->a[49310] = sym_number;
	v->a[49311] = anon_sym_DOLLAR_LBRACE;
	v->a[49312] = anon_sym_DOLLAR_LPAREN;
	v->a[49313] = anon_sym_BQUOTE;
	v->a[49314] = sym_word;
	v->a[49315] = actions(1560);
	v->a[49316] = 9;
	v->a[49317] = anon_sym_PIPE;
	v->a[49318] = anon_sym_SEMI_SEMI;
	v->a[49319] = anon_sym_AMP_AMP;
	small_parse_table_2466(v);
}

void	small_parse_table_2466(t_small_parse_table_array *v)
{
	v->a[49320] = anon_sym_PIPE_PIPE;
	v->a[49321] = anon_sym_LT_LT;
	v->a[49322] = anon_sym_LT_LT_DASH;
	v->a[49323] = aux_sym_heredoc_redirect_token1;
	v->a[49324] = anon_sym_AMP;
	v->a[49325] = anon_sym_SEMI;
	v->a[49326] = actions(1562);
	v->a[49327] = 10;
	v->a[49328] = anon_sym_LT;
	v->a[49329] = anon_sym_GT;
	v->a[49330] = anon_sym_GT_GT;
	v->a[49331] = anon_sym_AMP_GT;
	v->a[49332] = anon_sym_AMP_GT_GT;
	v->a[49333] = anon_sym_LT_AMP;
	v->a[49334] = anon_sym_GT_AMP;
	v->a[49335] = anon_sym_GT_PIPE;
	v->a[49336] = anon_sym_LT_AMP_DASH;
	v->a[49337] = anon_sym_GT_AMP_DASH;
	v->a[49338] = 7;
	v->a[49339] = actions(3);
	small_parse_table_2467(v);
}

void	small_parse_table_2467(t_small_parse_table_array *v)
{
	v->a[49340] = 1;
	v->a[49341] = sym_comment;
	v->a[49342] = actions(1565);
	v->a[49343] = 1;
	v->a[49344] = sym_file_descriptor;
	v->a[49345] = actions(1568);
	v->a[49346] = 1;
	v->a[49347] = sym_variable_name;
	v->a[49348] = actions(1608);
	v->a[49349] = 1;
	v->a[49350] = anon_sym_RPAREN;
	v->a[49351] = actions(1558);
	v->a[49352] = 9;
	v->a[49353] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49354] = anon_sym_DOLLAR;
	v->a[49355] = anon_sym_DQUOTE;
	v->a[49356] = sym_raw_string;
	v->a[49357] = sym_number;
	v->a[49358] = anon_sym_DOLLAR_LBRACE;
	v->a[49359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2468(v);
}

void	small_parse_table_2468(t_small_parse_table_array *v)
{
	v->a[49360] = anon_sym_BQUOTE;
	v->a[49361] = sym_word;
	v->a[49362] = actions(1560);
	v->a[49363] = 9;
	v->a[49364] = anon_sym_PIPE;
	v->a[49365] = anon_sym_SEMI_SEMI;
	v->a[49366] = anon_sym_AMP_AMP;
	v->a[49367] = anon_sym_PIPE_PIPE;
	v->a[49368] = anon_sym_LT_LT;
	v->a[49369] = anon_sym_LT_LT_DASH;
	v->a[49370] = aux_sym_heredoc_redirect_token1;
	v->a[49371] = anon_sym_AMP;
	v->a[49372] = anon_sym_SEMI;
	v->a[49373] = actions(1562);
	v->a[49374] = 10;
	v->a[49375] = anon_sym_LT;
	v->a[49376] = anon_sym_GT;
	v->a[49377] = anon_sym_GT_GT;
	v->a[49378] = anon_sym_AMP_GT;
	v->a[49379] = anon_sym_AMP_GT_GT;
	small_parse_table_2469(v);
}

void	small_parse_table_2469(t_small_parse_table_array *v)
{
	v->a[49380] = anon_sym_LT_AMP;
	v->a[49381] = anon_sym_GT_AMP;
	v->a[49382] = anon_sym_GT_PIPE;
	v->a[49383] = anon_sym_LT_AMP_DASH;
	v->a[49384] = anon_sym_GT_AMP_DASH;
	v->a[49385] = 7;
	v->a[49386] = actions(3);
	v->a[49387] = 1;
	v->a[49388] = sym_comment;
	v->a[49389] = actions(1565);
	v->a[49390] = 1;
	v->a[49391] = sym_file_descriptor;
	v->a[49392] = actions(1568);
	v->a[49393] = 1;
	v->a[49394] = sym_variable_name;
	v->a[49395] = actions(1611);
	v->a[49396] = 1;
	v->a[49397] = anon_sym_RPAREN;
	v->a[49398] = actions(1558);
	v->a[49399] = 9;
	small_parse_table_2470(v);
}

/* EOF small_parse_table_493.c */
