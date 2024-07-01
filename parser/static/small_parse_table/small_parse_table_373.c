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
	v->a[37300] = state(603);
	v->a[37301] = 2;
	v->a[37302] = sym_concatenation;
	v->a[37303] = aux_sym_for_statement_repeat1;
	v->a[37304] = actions(1354);
	v->a[37305] = 3;
	v->a[37306] = sym_raw_string;
	v->a[37307] = sym_number;
	v->a[37308] = sym_word;
	v->a[37309] = state(884);
	v->a[37310] = 5;
	v->a[37311] = sym_arithmetic_expansion;
	v->a[37312] = sym_string;
	v->a[37313] = sym_simple_expansion;
	v->a[37314] = sym_expansion;
	v->a[37315] = sym_command_substitution;
	v->a[37316] = actions(573);
	v->a[37317] = 14;
	v->a[37318] = anon_sym_PIPE;
	v->a[37319] = anon_sym_AMP_AMP;
	small_parse_table_1866(v);
}

void	small_parse_table_1866(t_small_parse_table_array *v)
{
	v->a[37320] = anon_sym_PIPE_PIPE;
	v->a[37321] = anon_sym_LT;
	v->a[37322] = anon_sym_GT;
	v->a[37323] = anon_sym_GT_GT;
	v->a[37324] = anon_sym_LT_AMP;
	v->a[37325] = anon_sym_GT_AMP;
	v->a[37326] = anon_sym_GT_PIPE;
	v->a[37327] = anon_sym_LT_AMP_DASH;
	v->a[37328] = anon_sym_GT_AMP_DASH;
	v->a[37329] = anon_sym_LT_LT;
	v->a[37330] = anon_sym_LT_LT_DASH;
	v->a[37331] = aux_sym_heredoc_redirect_token1;
	v->a[37332] = 12;
	v->a[37333] = actions(3);
	v->a[37334] = 1;
	v->a[37335] = sym_comment;
	v->a[37336] = actions(1359);
	v->a[37337] = 1;
	v->a[37338] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37339] = actions(1362);
	small_parse_table_1867(v);
}

void	small_parse_table_1867(t_small_parse_table_array *v)
{
	v->a[37340] = 1;
	v->a[37341] = anon_sym_DOLLAR;
	v->a[37342] = actions(1365);
	v->a[37343] = 1;
	v->a[37344] = anon_sym_DQUOTE;
	v->a[37345] = actions(1368);
	v->a[37346] = 1;
	v->a[37347] = anon_sym_DOLLAR_LBRACE;
	v->a[37348] = actions(1371);
	v->a[37349] = 1;
	v->a[37350] = anon_sym_DOLLAR_LPAREN;
	v->a[37351] = actions(1374);
	v->a[37352] = 1;
	v->a[37353] = anon_sym_BQUOTE;
	v->a[37354] = actions(577);
	v->a[37355] = 2;
	v->a[37356] = sym_file_descriptor;
	v->a[37357] = sym_variable_name;
	v->a[37358] = state(496);
	v->a[37359] = 2;
	small_parse_table_1868(v);
}

void	small_parse_table_1868(t_small_parse_table_array *v)
{
	v->a[37360] = sym_concatenation;
	v->a[37361] = aux_sym_for_statement_repeat1;
	v->a[37362] = actions(1356);
	v->a[37363] = 3;
	v->a[37364] = sym_raw_string;
	v->a[37365] = sym_number;
	v->a[37366] = sym_word;
	v->a[37367] = state(828);
	v->a[37368] = 5;
	v->a[37369] = sym_arithmetic_expansion;
	v->a[37370] = sym_string;
	v->a[37371] = sym_simple_expansion;
	v->a[37372] = sym_expansion;
	v->a[37373] = sym_command_substitution;
	v->a[37374] = actions(582);
	v->a[37375] = 13;
	v->a[37376] = anon_sym_PIPE;
	v->a[37377] = anon_sym_AMP_AMP;
	v->a[37378] = anon_sym_PIPE_PIPE;
	v->a[37379] = anon_sym_LT;
	small_parse_table_1869(v);
}

void	small_parse_table_1869(t_small_parse_table_array *v)
{
	v->a[37380] = anon_sym_GT;
	v->a[37381] = anon_sym_GT_GT;
	v->a[37382] = anon_sym_LT_AMP;
	v->a[37383] = anon_sym_GT_AMP;
	v->a[37384] = anon_sym_GT_PIPE;
	v->a[37385] = anon_sym_LT_AMP_DASH;
	v->a[37386] = anon_sym_GT_AMP_DASH;
	v->a[37387] = anon_sym_LT_LT;
	v->a[37388] = anon_sym_LT_LT_DASH;
	v->a[37389] = 3;
	v->a[37390] = actions(3);
	v->a[37391] = 1;
	v->a[37392] = sym_comment;
	v->a[37393] = actions(1283);
	v->a[37394] = 3;
	v->a[37395] = sym_file_descriptor;
	v->a[37396] = sym__concat;
	v->a[37397] = sym__bare_dollar;
	v->a[37398] = actions(1285);
	v->a[37399] = 28;
	small_parse_table_1870(v);
}

/* EOF small_parse_table_373.c */
