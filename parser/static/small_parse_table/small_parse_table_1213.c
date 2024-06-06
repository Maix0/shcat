/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1213.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6065(t_small_parse_table_array *v)
{
	v->a[121300] = anon_sym_RPAREN;
	v->a[121301] = actions(2710);
	v->a[121302] = 1;
	v->a[121303] = aux_sym_heredoc_redirect_token1;
	v->a[121304] = actions(5680);
	v->a[121305] = 1;
	v->a[121306] = sym_file_descriptor;
	v->a[121307] = actions(2945);
	v->a[121308] = 2;
	v->a[121309] = anon_sym_LT_LT;
	v->a[121310] = anon_sym_LT_LT_DASH;
	v->a[121311] = actions(2960);
	v->a[121312] = 2;
	v->a[121313] = anon_sym_AMP_AMP;
	v->a[121314] = anon_sym_PIPE_PIPE;
	v->a[121315] = actions(5678);
	v->a[121316] = 2;
	v->a[121317] = anon_sym_LT_AMP_DASH;
	v->a[121318] = anon_sym_GT_AMP_DASH;
	v->a[121319] = actions(2712);
	small_parse_table_6066(v);
}

void	small_parse_table_6066(t_small_parse_table_array *v)
{
	v->a[121320] = 3;
	v->a[121321] = anon_sym_SEMI_SEMI;
	v->a[121322] = anon_sym_AMP;
	v->a[121323] = anon_sym_SEMI;
	v->a[121324] = state(2109);
	v->a[121325] = 3;
	v->a[121326] = sym_file_redirect;
	v->a[121327] = sym_heredoc_redirect;
	v->a[121328] = aux_sym_redirected_statement_repeat1;
	v->a[121329] = actions(5676);
	v->a[121330] = 8;
	v->a[121331] = anon_sym_LT;
	v->a[121332] = anon_sym_GT;
	v->a[121333] = anon_sym_GT_GT;
	v->a[121334] = anon_sym_AMP_GT;
	v->a[121335] = anon_sym_AMP_GT_GT;
	v->a[121336] = anon_sym_LT_AMP;
	v->a[121337] = anon_sym_GT_AMP;
	v->a[121338] = anon_sym_GT_PIPE;
	v->a[121339] = 16;
	small_parse_table_6067(v);
}

void	small_parse_table_6067(t_small_parse_table_array *v)
{
	v->a[121340] = actions(3);
	v->a[121341] = 1;
	v->a[121342] = sym_comment;
	v->a[121343] = actions(87);
	v->a[121344] = 1;
	v->a[121345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121346] = actions(93);
	v->a[121347] = 1;
	v->a[121348] = anon_sym_DQUOTE;
	v->a[121349] = actions(97);
	v->a[121350] = 1;
	v->a[121351] = aux_sym_number_token1;
	v->a[121352] = actions(99);
	v->a[121353] = 1;
	v->a[121354] = aux_sym_number_token2;
	v->a[121355] = actions(101);
	v->a[121356] = 1;
	v->a[121357] = anon_sym_DOLLAR_LBRACE;
	v->a[121358] = actions(103);
	v->a[121359] = 1;
	small_parse_table_6068(v);
}

void	small_parse_table_6068(t_small_parse_table_array *v)
{
	v->a[121360] = anon_sym_DOLLAR_LPAREN;
	v->a[121361] = actions(105);
	v->a[121362] = 1;
	v->a[121363] = anon_sym_BQUOTE;
	v->a[121364] = actions(107);
	v->a[121365] = 1;
	v->a[121366] = anon_sym_DOLLAR_BQUOTE;
	v->a[121367] = actions(113);
	v->a[121368] = 1;
	v->a[121369] = sym__brace_start;
	v->a[121370] = actions(6845);
	v->a[121371] = 1;
	v->a[121372] = sym_word;
	v->a[121373] = actions(6849);
	v->a[121374] = 1;
	v->a[121375] = sym__special_character;
	v->a[121376] = actions(6853);
	v->a[121377] = 1;
	v->a[121378] = sym__comment_word;
	v->a[121379] = actions(7037);
	small_parse_table_6069(v);
}

void	small_parse_table_6069(t_small_parse_table_array *v)
{
	v->a[121380] = 1;
	v->a[121381] = anon_sym_DOLLAR;
	v->a[121382] = actions(6851);
	v->a[121383] = 3;
	v->a[121384] = sym_test_operator;
	v->a[121385] = sym__bare_dollar;
	v->a[121386] = sym_raw_string;
	v->a[121387] = state(853);
	v->a[121388] = 7;
	v->a[121389] = sym_arithmetic_expansion;
	v->a[121390] = sym_brace_expression;
	v->a[121391] = sym_string;
	v->a[121392] = sym_number;
	v->a[121393] = sym_simple_expansion;
	v->a[121394] = sym_expansion;
	v->a[121395] = sym_command_substitution;
	v->a[121396] = 16;
	v->a[121397] = actions(3);
	v->a[121398] = 1;
	v->a[121399] = sym_comment;
	small_parse_table_6070(v);
}

/* EOF small_parse_table_1213.c */
