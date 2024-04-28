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
	v->a[49300] = sym_file_descriptor;
	v->a[49301] = sym_test_operator;
	v->a[49302] = sym__brace_start;
	v->a[49303] = actions(5385);
	v->a[49304] = 3;
	v->a[49305] = anon_sym_SEMI;
	v->a[49306] = anon_sym_AMP;
	v->a[49307] = anon_sym_SEMI_SEMI;
	v->a[49308] = state(4986);
	v->a[49309] = 3;
	v->a[49310] = sym_file_redirect;
	v->a[49311] = sym_heredoc_redirect;
	v->a[49312] = aux_sym_redirected_statement_repeat1;
	v->a[49313] = actions(4247);
	v->a[49314] = 28;
	v->a[49315] = anon_sym_LPAREN_LPAREN;
	v->a[49316] = anon_sym_LT;
	v->a[49317] = anon_sym_GT;
	v->a[49318] = anon_sym_GT_GT;
	v->a[49319] = anon_sym_AMP_GT;
	small_parse_table_2466(v);
}

void	small_parse_table_2466(t_small_parse_table_array *v)
{
	v->a[49320] = anon_sym_AMP_GT_GT;
	v->a[49321] = anon_sym_LT_AMP;
	v->a[49322] = anon_sym_GT_AMP;
	v->a[49323] = anon_sym_GT_PIPE;
	v->a[49324] = anon_sym_LT_AMP_DASH;
	v->a[49325] = anon_sym_GT_AMP_DASH;
	v->a[49326] = anon_sym_LT_LT_LT;
	v->a[49327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49328] = anon_sym_DOLLAR_LBRACK;
	v->a[49329] = anon_sym_DOLLAR;
	v->a[49330] = sym__special_character;
	v->a[49331] = anon_sym_DQUOTE;
	v->a[49332] = sym_raw_string;
	v->a[49333] = sym_ansi_c_string;
	v->a[49334] = aux_sym_number_token1;
	v->a[49335] = aux_sym_number_token2;
	v->a[49336] = anon_sym_DOLLAR_LBRACE;
	v->a[49337] = anon_sym_DOLLAR_LPAREN;
	v->a[49338] = anon_sym_BQUOTE;
	v->a[49339] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2467(v);
}

void	small_parse_table_2467(t_small_parse_table_array *v)
{
	v->a[49340] = anon_sym_LT_LPAREN;
	v->a[49341] = anon_sym_GT_LPAREN;
	v->a[49342] = sym_word;
	v->a[49343] = 8;
	v->a[49344] = actions(3);
	v->a[49345] = 1;
	v->a[49346] = sym_comment;
	v->a[49347] = actions(1235);
	v->a[49348] = 1;
	v->a[49349] = sym_test_operator;
	v->a[49350] = actions(5086);
	v->a[49351] = 1;
	v->a[49352] = anon_sym_DQUOTE;
	v->a[49353] = actions(5090);
	v->a[49354] = 1;
	v->a[49355] = sym_variable_name;
	v->a[49356] = state(2442);
	v->a[49357] = 1;
	v->a[49358] = sym_string;
	v->a[49359] = actions(5088);
	small_parse_table_2468(v);
}

void	small_parse_table_2468(t_small_parse_table_array *v)
{
	v->a[49360] = 2;
	v->a[49361] = aux_sym__simple_variable_name_token1;
	v->a[49362] = aux_sym__multiline_variable_name_token1;
	v->a[49363] = actions(5084);
	v->a[49364] = 9;
	v->a[49365] = anon_sym_DASH;
	v->a[49366] = anon_sym_STAR;
	v->a[49367] = anon_sym_BANG;
	v->a[49368] = anon_sym_QMARK;
	v->a[49369] = anon_sym_DOLLAR;
	v->a[49370] = anon_sym_POUND;
	v->a[49371] = anon_sym_AT2;
	v->a[49372] = anon_sym_0;
	v->a[49373] = anon_sym__;
	v->a[49374] = actions(1227);
	v->a[49375] = 33;
	v->a[49376] = anon_sym_RPAREN_RPAREN;
	v->a[49377] = anon_sym_EQ;
	v->a[49378] = anon_sym_PLUS_PLUS;
	v->a[49379] = anon_sym_DASH_DASH;
	small_parse_table_2469(v);
}

void	small_parse_table_2469(t_small_parse_table_array *v)
{
	v->a[49380] = anon_sym_PLUS_EQ;
	v->a[49381] = anon_sym_DASH_EQ;
	v->a[49382] = anon_sym_STAR_EQ;
	v->a[49383] = anon_sym_SLASH_EQ;
	v->a[49384] = anon_sym_PERCENT_EQ;
	v->a[49385] = anon_sym_STAR_STAR_EQ;
	v->a[49386] = anon_sym_LT_LT_EQ;
	v->a[49387] = anon_sym_GT_GT_EQ;
	v->a[49388] = anon_sym_AMP_EQ;
	v->a[49389] = anon_sym_CARET_EQ;
	v->a[49390] = anon_sym_PIPE_EQ;
	v->a[49391] = anon_sym_PIPE_PIPE;
	v->a[49392] = anon_sym_AMP_AMP;
	v->a[49393] = anon_sym_PIPE;
	v->a[49394] = anon_sym_CARET;
	v->a[49395] = anon_sym_AMP;
	v->a[49396] = anon_sym_EQ_EQ;
	v->a[49397] = anon_sym_BANG_EQ;
	v->a[49398] = anon_sym_LT;
	v->a[49399] = anon_sym_GT;
	small_parse_table_2470(v);
}

/* EOF small_parse_table_493.c */
