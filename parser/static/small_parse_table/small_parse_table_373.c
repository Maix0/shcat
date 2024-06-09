/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_373.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1865(t_small_parse_table_array *v)
{
	v->a[37300] = anon_sym_PIPE_PIPE;
	v->a[37301] = anon_sym_RPAREN_RPAREN;
	v->a[37302] = anon_sym_PLUS_EQ;
	v->a[37303] = anon_sym_DASH_EQ;
	v->a[37304] = anon_sym_STAR_EQ;
	v->a[37305] = anon_sym_SLASH_EQ;
	v->a[37306] = anon_sym_PERCENT_EQ;
	v->a[37307] = anon_sym_LT_LT_EQ;
	v->a[37308] = anon_sym_GT_GT_EQ;
	v->a[37309] = anon_sym_AMP_EQ;
	v->a[37310] = anon_sym_CARET_EQ;
	v->a[37311] = anon_sym_PIPE_EQ;
	v->a[37312] = anon_sym_EQ_EQ;
	v->a[37313] = anon_sym_BANG_EQ;
	v->a[37314] = anon_sym_LT_EQ;
	v->a[37315] = anon_sym_GT_EQ;
	v->a[37316] = anon_sym_QMARK;
	v->a[37317] = anon_sym_COLON;
	v->a[37318] = 6;
	v->a[37319] = actions(3);
	small_parse_table_1866(v);
}

void	small_parse_table_1866(t_small_parse_table_array *v)
{
	v->a[37320] = 1;
	v->a[37321] = sym_comment;
	v->a[37322] = actions(1208);
	v->a[37323] = 1;
	v->a[37324] = aux_sym_concatenation_token1;
	v->a[37325] = actions(1212);
	v->a[37326] = 1;
	v->a[37327] = sym__concat;
	v->a[37328] = state(519);
	v->a[37329] = 1;
	v->a[37330] = aux_sym_concatenation_repeat1;
	v->a[37331] = actions(555);
	v->a[37332] = 2;
	v->a[37333] = sym_file_descriptor;
	v->a[37334] = sym_variable_name;
	v->a[37335] = actions(553);
	v->a[37336] = 29;
	v->a[37337] = anon_sym_PIPE;
	v->a[37338] = anon_sym_SEMI_SEMI;
	v->a[37339] = anon_sym_AMP_AMP;
	small_parse_table_1867(v);
}

void	small_parse_table_1867(t_small_parse_table_array *v)
{
	v->a[37340] = anon_sym_PIPE_PIPE;
	v->a[37341] = anon_sym_LT;
	v->a[37342] = anon_sym_GT;
	v->a[37343] = anon_sym_GT_GT;
	v->a[37344] = anon_sym_AMP_GT;
	v->a[37345] = anon_sym_AMP_GT_GT;
	v->a[37346] = anon_sym_LT_AMP;
	v->a[37347] = anon_sym_GT_AMP;
	v->a[37348] = anon_sym_GT_PIPE;
	v->a[37349] = anon_sym_LT_AMP_DASH;
	v->a[37350] = anon_sym_GT_AMP_DASH;
	v->a[37351] = anon_sym_LT_LT;
	v->a[37352] = anon_sym_LT_LT_DASH;
	v->a[37353] = aux_sym_heredoc_redirect_token1;
	v->a[37354] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37355] = anon_sym_AMP;
	v->a[37356] = anon_sym_DOLLAR;
	v->a[37357] = anon_sym_DQUOTE;
	v->a[37358] = sym_raw_string;
	v->a[37359] = aux_sym_number_token1;
	small_parse_table_1868(v);
}

void	small_parse_table_1868(t_small_parse_table_array *v)
{
	v->a[37360] = aux_sym_number_token2;
	v->a[37361] = anon_sym_DOLLAR_LBRACE;
	v->a[37362] = anon_sym_DOLLAR_LPAREN;
	v->a[37363] = anon_sym_BQUOTE;
	v->a[37364] = sym_word;
	v->a[37365] = anon_sym_SEMI;
	v->a[37366] = 4;
	v->a[37367] = actions(1404);
	v->a[37368] = 1;
	v->a[37369] = sym_comment;
	v->a[37370] = actions(1402);
	v->a[37371] = 2;
	v->a[37372] = anon_sym_PLUS_PLUS2;
	v->a[37373] = anon_sym_DASH_DASH2;
	v->a[37374] = actions(1513);
	v->a[37375] = 13;
	v->a[37376] = anon_sym_PIPE;
	v->a[37377] = anon_sym_EQ;
	v->a[37378] = anon_sym_LT;
	v->a[37379] = anon_sym_GT;
	small_parse_table_1869(v);
}

void	small_parse_table_1869(t_small_parse_table_array *v)
{
	v->a[37380] = anon_sym_GT_GT;
	v->a[37381] = anon_sym_LT_LT;
	v->a[37382] = anon_sym_CARET;
	v->a[37383] = anon_sym_AMP;
	v->a[37384] = anon_sym_PLUS;
	v->a[37385] = anon_sym_DASH;
	v->a[37386] = anon_sym_STAR;
	v->a[37387] = anon_sym_SLASH;
	v->a[37388] = anon_sym_PERCENT;
	v->a[37389] = actions(1515);
	v->a[37390] = 19;
	v->a[37391] = anon_sym_AMP_AMP;
	v->a[37392] = anon_sym_PIPE_PIPE;
	v->a[37393] = anon_sym_RPAREN_RPAREN;
	v->a[37394] = anon_sym_PLUS_EQ;
	v->a[37395] = anon_sym_DASH_EQ;
	v->a[37396] = anon_sym_STAR_EQ;
	v->a[37397] = anon_sym_SLASH_EQ;
	v->a[37398] = anon_sym_PERCENT_EQ;
	v->a[37399] = anon_sym_LT_LT_EQ;
	small_parse_table_1870(v);
}

/* EOF small_parse_table_373.c */
