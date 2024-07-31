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
	v->a[37300] = state(1746);
	v->a[37301] = 1;
	v->a[37302] = sym__case_item_last;
	v->a[37303] = state(1594);
	v->a[37304] = 2;
	v->a[37305] = sym_concatenation;
	v->a[37306] = sym__extglob_blob;
	v->a[37307] = actions(1333);
	v->a[37308] = 3;
	v->a[37309] = sym_raw_string;
	v->a[37310] = sym_number;
	v->a[37311] = sym_word;
	v->a[37312] = actions(1339);
	v->a[37313] = 3;
	v->a[37314] = anon_sym_SEMI_SEMI;
	v->a[37315] = aux_sym_heredoc_redirect_token1;
	v->a[37316] = anon_sym_SEMI;
	v->a[37317] = state(1520);
	v->a[37318] = 5;
	v->a[37319] = sym_arithmetic_expansion;
	small_parse_table_1866(v);
}

void	small_parse_table_1866(t_small_parse_table_array *v)
{
	v->a[37320] = sym_string;
	v->a[37321] = sym_simple_expansion;
	v->a[37322] = sym_expansion;
	v->a[37323] = sym_command_substitution;
	v->a[37324] = 18;
	v->a[37325] = actions(3);
	v->a[37326] = 1;
	v->a[37327] = sym_comment;
	v->a[37328] = actions(1337);
	v->a[37329] = 1;
	v->a[37330] = anon_sym_LPAREN;
	v->a[37331] = actions(1341);
	v->a[37332] = 1;
	v->a[37333] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37334] = actions(1343);
	v->a[37335] = 1;
	v->a[37336] = anon_sym_DOLLAR;
	v->a[37337] = actions(1345);
	v->a[37338] = 1;
	v->a[37339] = anon_sym_DQUOTE;
	small_parse_table_1867(v);
}

void	small_parse_table_1867(t_small_parse_table_array *v)
{
	v->a[37340] = actions(1347);
	v->a[37341] = 1;
	v->a[37342] = anon_sym_DOLLAR_LBRACE;
	v->a[37343] = actions(1349);
	v->a[37344] = 1;
	v->a[37345] = anon_sym_DOLLAR_LPAREN;
	v->a[37346] = actions(1351);
	v->a[37347] = 1;
	v->a[37348] = anon_sym_BQUOTE;
	v->a[37349] = actions(1353);
	v->a[37350] = 1;
	v->a[37351] = sym_extglob_pattern;
	v->a[37352] = actions(1418);
	v->a[37353] = 1;
	v->a[37354] = anon_sym_esac;
	v->a[37355] = state(749);
	v->a[37356] = 1;
	v->a[37357] = sym_terminator;
	v->a[37358] = state(804);
	v->a[37359] = 1;
	small_parse_table_1868(v);
}

void	small_parse_table_1868(t_small_parse_table_array *v)
{
	v->a[37360] = aux_sym_case_statement_repeat1;
	v->a[37361] = state(1432);
	v->a[37362] = 1;
	v->a[37363] = sym_case_item;
	v->a[37364] = state(1736);
	v->a[37365] = 1;
	v->a[37366] = sym__case_item_last;
	v->a[37367] = state(1594);
	v->a[37368] = 2;
	v->a[37369] = sym_concatenation;
	v->a[37370] = sym__extglob_blob;
	v->a[37371] = actions(1333);
	v->a[37372] = 3;
	v->a[37373] = sym_raw_string;
	v->a[37374] = sym_number;
	v->a[37375] = sym_word;
	v->a[37376] = actions(1339);
	v->a[37377] = 3;
	v->a[37378] = anon_sym_SEMI_SEMI;
	v->a[37379] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1869(v);
}

void	small_parse_table_1869(t_small_parse_table_array *v)
{
	v->a[37380] = anon_sym_SEMI;
	v->a[37381] = state(1520);
	v->a[37382] = 5;
	v->a[37383] = sym_arithmetic_expansion;
	v->a[37384] = sym_string;
	v->a[37385] = sym_simple_expansion;
	v->a[37386] = sym_expansion;
	v->a[37387] = sym_command_substitution;
	v->a[37388] = 3;
	v->a[37389] = actions(3);
	v->a[37390] = 1;
	v->a[37391] = sym_comment;
	v->a[37392] = actions(1111);
	v->a[37393] = 1;
	v->a[37394] = sym_variable_name;
	v->a[37395] = actions(1109);
	v->a[37396] = 25;
	v->a[37397] = anon_sym_for;
	v->a[37398] = anon_sym_while;
	v->a[37399] = anon_sym_until;
	small_parse_table_1870(v);
}

/* EOF small_parse_table_373.c */
