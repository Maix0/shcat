/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_173.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_865(t_small_parse_table_array *v)
{
	v->a[17300] = 3;
	v->a[17301] = sym_file_redirect;
	v->a[17302] = sym_heredoc_redirect;
	v->a[17303] = aux_sym_redirected_statement_repeat1;
	v->a[17304] = actions(576);
	v->a[17305] = 12;
	v->a[17306] = anon_sym_LT;
	v->a[17307] = anon_sym_GT;
	v->a[17308] = anon_sym_GT_GT;
	v->a[17309] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17310] = anon_sym_DOLLAR;
	v->a[17311] = anon_sym_DQUOTE;
	v->a[17312] = sym_raw_string;
	v->a[17313] = sym_number;
	v->a[17314] = anon_sym_DOLLAR_LBRACE;
	v->a[17315] = anon_sym_DOLLAR_LPAREN;
	v->a[17316] = anon_sym_BQUOTE;
	v->a[17317] = sym_word;
	v->a[17318] = 12;
	v->a[17319] = actions(3);
	small_parse_table_866(v);
}

void	small_parse_table_866(t_small_parse_table_array *v)
{
	v->a[17320] = 1;
	v->a[17321] = sym_comment;
	v->a[17322] = actions(53);
	v->a[17323] = 1;
	v->a[17324] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17325] = actions(55);
	v->a[17326] = 1;
	v->a[17327] = anon_sym_DOLLAR;
	v->a[17328] = actions(57);
	v->a[17329] = 1;
	v->a[17330] = anon_sym_DQUOTE;
	v->a[17331] = actions(61);
	v->a[17332] = 1;
	v->a[17333] = anon_sym_DOLLAR_LBRACE;
	v->a[17334] = actions(63);
	v->a[17335] = 1;
	v->a[17336] = anon_sym_DOLLAR_LPAREN;
	v->a[17337] = actions(419);
	v->a[17338] = 1;
	v->a[17339] = sym__bare_dollar;
	small_parse_table_867(v);
}

void	small_parse_table_867(t_small_parse_table_array *v)
{
	v->a[17340] = state(199);
	v->a[17341] = 1;
	v->a[17342] = aux_sym_command_repeat2;
	v->a[17343] = state(570);
	v->a[17344] = 1;
	v->a[17345] = sym_concatenation;
	v->a[17346] = actions(602);
	v->a[17347] = 3;
	v->a[17348] = sym_raw_string;
	v->a[17349] = sym_number;
	v->a[17350] = sym_word;
	v->a[17351] = state(431);
	v->a[17352] = 5;
	v->a[17353] = sym_arithmetic_expansion;
	v->a[17354] = sym_string;
	v->a[17355] = sym_simple_expansion;
	v->a[17356] = sym_expansion;
	v->a[17357] = sym_command_substitution;
	v->a[17358] = actions(417);
	v->a[17359] = 11;
	small_parse_table_868(v);
}

void	small_parse_table_868(t_small_parse_table_array *v)
{
	v->a[17360] = anon_sym_PIPE;
	v->a[17361] = anon_sym_SEMI_SEMI;
	v->a[17362] = anon_sym_AMP_AMP;
	v->a[17363] = anon_sym_PIPE_PIPE;
	v->a[17364] = anon_sym_LT;
	v->a[17365] = anon_sym_GT;
	v->a[17366] = anon_sym_GT_GT;
	v->a[17367] = anon_sym_LT_LT;
	v->a[17368] = aux_sym_heredoc_redirect_token1;
	v->a[17369] = anon_sym_BQUOTE;
	v->a[17370] = anon_sym_SEMI;
	v->a[17371] = 12;
	v->a[17372] = actions(3);
	v->a[17373] = 1;
	v->a[17374] = sym_comment;
	v->a[17375] = actions(53);
	v->a[17376] = 1;
	v->a[17377] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17378] = actions(55);
	v->a[17379] = 1;
	small_parse_table_869(v);
}

void	small_parse_table_869(t_small_parse_table_array *v)
{
	v->a[17380] = anon_sym_DOLLAR;
	v->a[17381] = actions(57);
	v->a[17382] = 1;
	v->a[17383] = anon_sym_DQUOTE;
	v->a[17384] = actions(61);
	v->a[17385] = 1;
	v->a[17386] = anon_sym_DOLLAR_LBRACE;
	v->a[17387] = actions(63);
	v->a[17388] = 1;
	v->a[17389] = anon_sym_DOLLAR_LPAREN;
	v->a[17390] = actions(419);
	v->a[17391] = 1;
	v->a[17392] = sym__bare_dollar;
	v->a[17393] = state(189);
	v->a[17394] = 1;
	v->a[17395] = aux_sym_command_repeat2;
	v->a[17396] = state(570);
	v->a[17397] = 1;
	v->a[17398] = sym_concatenation;
	v->a[17399] = actions(602);
	small_parse_table_870(v);
}

/* EOF small_parse_table_173.c */
