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
	v->a[121300] = aux_sym_number_token2;
	v->a[121301] = anon_sym_DOLLAR_LPAREN;
	v->a[121302] = anon_sym_BQUOTE;
	v->a[121303] = sym_word;
	v->a[121304] = actions(1338);
	v->a[121305] = 27;
	v->a[121306] = sym_file_descriptor;
	v->a[121307] = sym__concat;
	v->a[121308] = sym_test_operator;
	v->a[121309] = sym__bare_dollar;
	v->a[121310] = sym__brace_start;
	v->a[121311] = anon_sym_LPAREN_LPAREN;
	v->a[121312] = anon_sym_PIPE_PIPE;
	v->a[121313] = anon_sym_AMP_AMP;
	v->a[121314] = anon_sym_GT_GT;
	v->a[121315] = anon_sym_PIPE_AMP;
	v->a[121316] = anon_sym_AMP_GT_GT;
	v->a[121317] = anon_sym_GT_PIPE;
	v->a[121318] = anon_sym_LT_AMP_DASH;
	v->a[121319] = anon_sym_GT_AMP_DASH;
	small_parse_table_6066(v);
}

void	small_parse_table_6066(t_small_parse_table_array *v)
{
	v->a[121320] = anon_sym_LT_LT_DASH;
	v->a[121321] = anon_sym_LT_LT_LT;
	v->a[121322] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121323] = anon_sym_DOLLAR_LBRACK;
	v->a[121324] = aux_sym_concatenation_token1;
	v->a[121325] = sym__special_character;
	v->a[121326] = anon_sym_DQUOTE;
	v->a[121327] = sym_raw_string;
	v->a[121328] = sym_ansi_c_string;
	v->a[121329] = anon_sym_DOLLAR_LBRACE;
	v->a[121330] = anon_sym_DOLLAR_BQUOTE;
	v->a[121331] = anon_sym_LT_LPAREN;
	v->a[121332] = anon_sym_GT_LPAREN;
	v->a[121333] = 3;
	v->a[121334] = actions(71);
	v->a[121335] = 1;
	v->a[121336] = sym_comment;
	v->a[121337] = actions(1308);
	v->a[121338] = 14;
	v->a[121339] = anon_sym_EQ;
	small_parse_table_6067(v);
}

void	small_parse_table_6067(t_small_parse_table_array *v)
{
	v->a[121340] = anon_sym_PIPE;
	v->a[121341] = anon_sym_CARET;
	v->a[121342] = anon_sym_AMP;
	v->a[121343] = anon_sym_LT;
	v->a[121344] = anon_sym_GT;
	v->a[121345] = anon_sym_LT_LT;
	v->a[121346] = anon_sym_GT_GT;
	v->a[121347] = anon_sym_PLUS;
	v->a[121348] = anon_sym_DASH;
	v->a[121349] = anon_sym_STAR;
	v->a[121350] = anon_sym_SLASH;
	v->a[121351] = anon_sym_PERCENT;
	v->a[121352] = anon_sym_STAR_STAR;
	v->a[121353] = actions(1310);
	v->a[121354] = 28;
	v->a[121355] = sym__concat;
	v->a[121356] = sym_test_operator;
	v->a[121357] = anon_sym_RPAREN_RPAREN;
	v->a[121358] = anon_sym_COMMA;
	v->a[121359] = anon_sym_PLUS_PLUS;
	small_parse_table_6068(v);
}

void	small_parse_table_6068(t_small_parse_table_array *v)
{
	v->a[121360] = anon_sym_DASH_DASH;
	v->a[121361] = anon_sym_PLUS_EQ;
	v->a[121362] = anon_sym_DASH_EQ;
	v->a[121363] = anon_sym_STAR_EQ;
	v->a[121364] = anon_sym_SLASH_EQ;
	v->a[121365] = anon_sym_PERCENT_EQ;
	v->a[121366] = anon_sym_STAR_STAR_EQ;
	v->a[121367] = anon_sym_LT_LT_EQ;
	v->a[121368] = anon_sym_GT_GT_EQ;
	v->a[121369] = anon_sym_AMP_EQ;
	v->a[121370] = anon_sym_CARET_EQ;
	v->a[121371] = anon_sym_PIPE_EQ;
	v->a[121372] = anon_sym_PIPE_PIPE;
	v->a[121373] = anon_sym_AMP_AMP;
	v->a[121374] = anon_sym_EQ_EQ;
	v->a[121375] = anon_sym_BANG_EQ;
	v->a[121376] = anon_sym_LT_EQ;
	v->a[121377] = anon_sym_GT_EQ;
	v->a[121378] = anon_sym_RBRACK_RBRACK;
	v->a[121379] = anon_sym_EQ_TILDE;
	small_parse_table_6069(v);
}

void	small_parse_table_6069(t_small_parse_table_array *v)
{
	v->a[121380] = anon_sym_QMARK;
	v->a[121381] = anon_sym_COLON;
	v->a[121382] = aux_sym_concatenation_token1;
	v->a[121383] = 3;
	v->a[121384] = actions(71);
	v->a[121385] = 1;
	v->a[121386] = sym_comment;
	v->a[121387] = actions(1344);
	v->a[121388] = 15;
	v->a[121389] = anon_sym_PIPE;
	v->a[121390] = anon_sym_EQ_EQ;
	v->a[121391] = anon_sym_LT;
	v->a[121392] = anon_sym_GT;
	v->a[121393] = anon_sym_LT_LT;
	v->a[121394] = anon_sym_EQ_TILDE;
	v->a[121395] = anon_sym_AMP_GT;
	v->a[121396] = anon_sym_LT_AMP;
	v->a[121397] = anon_sym_GT_AMP;
	v->a[121398] = anon_sym_DOLLAR;
	v->a[121399] = aux_sym_number_token1;
	small_parse_table_6070(v);
}

/* EOF small_parse_table_1213.c */
