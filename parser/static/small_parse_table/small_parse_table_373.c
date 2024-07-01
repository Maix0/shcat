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
	v->a[37300] = anon_sym_DOLLAR;
	v->a[37301] = anon_sym_DQUOTE;
	v->a[37302] = sym_raw_string;
	v->a[37303] = sym_number;
	v->a[37304] = anon_sym_DOLLAR_LBRACE;
	v->a[37305] = anon_sym_DOLLAR_LPAREN;
	v->a[37306] = anon_sym_BQUOTE;
	v->a[37307] = sym_word;
	v->a[37308] = anon_sym_SEMI;
	v->a[37309] = 12;
	v->a[37310] = actions(3);
	v->a[37311] = 1;
	v->a[37312] = sym_comment;
	v->a[37313] = actions(499);
	v->a[37314] = 1;
	v->a[37315] = sym_file_descriptor;
	v->a[37316] = actions(824);
	v->a[37317] = 1;
	v->a[37318] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37319] = actions(827);
	small_parse_table_1866(v);
}

void	small_parse_table_1866(t_small_parse_table_array *v)
{
	v->a[37320] = 1;
	v->a[37321] = anon_sym_DOLLAR;
	v->a[37322] = actions(830);
	v->a[37323] = 1;
	v->a[37324] = anon_sym_DQUOTE;
	v->a[37325] = actions(833);
	v->a[37326] = 1;
	v->a[37327] = anon_sym_DOLLAR_LBRACE;
	v->a[37328] = actions(836);
	v->a[37329] = 1;
	v->a[37330] = anon_sym_DOLLAR_LPAREN;
	v->a[37331] = actions(839);
	v->a[37332] = 1;
	v->a[37333] = anon_sym_BQUOTE;
	v->a[37334] = state(539);
	v->a[37335] = 2;
	v->a[37336] = sym_concatenation;
	v->a[37337] = aux_sym_for_statement_repeat1;
	v->a[37338] = actions(1337);
	v->a[37339] = 3;
	small_parse_table_1867(v);
}

void	small_parse_table_1867(t_small_parse_table_array *v)
{
	v->a[37340] = sym_raw_string;
	v->a[37341] = sym_number;
	v->a[37342] = sym_word;
	v->a[37343] = state(842);
	v->a[37344] = 5;
	v->a[37345] = sym_arithmetic_expansion;
	v->a[37346] = sym_string;
	v->a[37347] = sym_simple_expansion;
	v->a[37348] = sym_expansion;
	v->a[37349] = sym_command_substitution;
	v->a[37350] = actions(504);
	v->a[37351] = 13;
	v->a[37352] = anon_sym_PIPE;
	v->a[37353] = anon_sym_AMP_AMP;
	v->a[37354] = anon_sym_PIPE_PIPE;
	v->a[37355] = anon_sym_LT;
	v->a[37356] = anon_sym_GT;
	v->a[37357] = anon_sym_GT_GT;
	v->a[37358] = anon_sym_LT_AMP;
	v->a[37359] = anon_sym_GT_AMP;
	small_parse_table_1868(v);
}

void	small_parse_table_1868(t_small_parse_table_array *v)
{
	v->a[37360] = anon_sym_GT_PIPE;
	v->a[37361] = anon_sym_LT_GT;
	v->a[37362] = anon_sym_LT_LT;
	v->a[37363] = anon_sym_LT_LT_DASH;
	v->a[37364] = aux_sym_heredoc_redirect_token1;
	v->a[37365] = 3;
	v->a[37366] = actions(3);
	v->a[37367] = 1;
	v->a[37368] = sym_comment;
	v->a[37369] = actions(766);
	v->a[37370] = 4;
	v->a[37371] = sym_file_descriptor;
	v->a[37372] = sym__concat;
	v->a[37373] = sym_variable_name;
	v->a[37374] = ts_builtin_sym_end;
	v->a[37375] = actions(764);
	v->a[37376] = 26;
	v->a[37377] = anon_sym_PIPE;
	v->a[37378] = anon_sym_SEMI_SEMI;
	v->a[37379] = anon_sym_AMP_AMP;
	small_parse_table_1869(v);
}

void	small_parse_table_1869(t_small_parse_table_array *v)
{
	v->a[37380] = anon_sym_PIPE_PIPE;
	v->a[37381] = anon_sym_LT;
	v->a[37382] = anon_sym_GT;
	v->a[37383] = anon_sym_GT_GT;
	v->a[37384] = anon_sym_LT_AMP;
	v->a[37385] = anon_sym_GT_AMP;
	v->a[37386] = anon_sym_GT_PIPE;
	v->a[37387] = anon_sym_LT_GT;
	v->a[37388] = anon_sym_LT_LT;
	v->a[37389] = anon_sym_LT_LT_DASH;
	v->a[37390] = aux_sym_heredoc_redirect_token1;
	v->a[37391] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37392] = anon_sym_AMP;
	v->a[37393] = aux_sym_concatenation_token1;
	v->a[37394] = anon_sym_DOLLAR;
	v->a[37395] = anon_sym_DQUOTE;
	v->a[37396] = sym_raw_string;
	v->a[37397] = sym_number;
	v->a[37398] = anon_sym_DOLLAR_LBRACE;
	v->a[37399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1870(v);
}

/* EOF small_parse_table_373.c */
