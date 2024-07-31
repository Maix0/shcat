/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_543.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2715(t_small_parse_table_array *v)
{
	v->a[54300] = 1;
	v->a[54301] = sym__bare_dollar;
	v->a[54302] = actions(2113);
	v->a[54303] = 1;
	v->a[54304] = anon_sym_DOLLAR;
	v->a[54305] = actions(2013);
	v->a[54306] = 5;
	v->a[54307] = aux_sym_concatenation_token1;
	v->a[54308] = sym_raw_string;
	v->a[54309] = sym_number;
	v->a[54310] = sym__comment_word;
	v->a[54311] = sym_word;
	v->a[54312] = state(395);
	v->a[54313] = 5;
	v->a[54314] = sym_arithmetic_expansion;
	v->a[54315] = sym_string;
	v->a[54316] = sym_simple_expansion;
	v->a[54317] = sym_expansion;
	v->a[54318] = sym_command_substitution;
	v->a[54319] = 10;
	small_parse_table_2716(v);
}

void	small_parse_table_2716(t_small_parse_table_array *v)
{
	v->a[54320] = actions(3);
	v->a[54321] = 1;
	v->a[54322] = sym_comment;
	v->a[54323] = actions(803);
	v->a[54324] = 1;
	v->a[54325] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54326] = actions(805);
	v->a[54327] = 1;
	v->a[54328] = anon_sym_DOLLAR;
	v->a[54329] = actions(807);
	v->a[54330] = 1;
	v->a[54331] = anon_sym_DQUOTE;
	v->a[54332] = actions(809);
	v->a[54333] = 1;
	v->a[54334] = anon_sym_DOLLAR_LBRACE;
	v->a[54335] = actions(811);
	v->a[54336] = 1;
	v->a[54337] = anon_sym_DOLLAR_LPAREN;
	v->a[54338] = actions(813);
	v->a[54339] = 1;
	small_parse_table_2717(v);
}

void	small_parse_table_2717(t_small_parse_table_array *v)
{
	v->a[54340] = anon_sym_BQUOTE;
	v->a[54341] = actions(1946);
	v->a[54342] = 1;
	v->a[54343] = sym__bare_dollar;
	v->a[54344] = actions(1942);
	v->a[54345] = 5;
	v->a[54346] = aux_sym_concatenation_token1;
	v->a[54347] = sym_raw_string;
	v->a[54348] = sym_number;
	v->a[54349] = sym__comment_word;
	v->a[54350] = sym_word;
	v->a[54351] = state(508);
	v->a[54352] = 5;
	v->a[54353] = sym_arithmetic_expansion;
	v->a[54354] = sym_string;
	v->a[54355] = sym_simple_expansion;
	v->a[54356] = sym_expansion;
	v->a[54357] = sym_command_substitution;
	v->a[54358] = 3;
	v->a[54359] = actions(3);
	small_parse_table_2718(v);
}

void	small_parse_table_2718(t_small_parse_table_array *v)
{
	v->a[54360] = 1;
	v->a[54361] = sym_comment;
	v->a[54362] = actions(1289);
	v->a[54363] = 1;
	v->a[54364] = sym_variable_name;
	v->a[54365] = actions(1279);
	v->a[54366] = 16;
	v->a[54367] = anon_sym_LT;
	v->a[54368] = anon_sym_GT;
	v->a[54369] = anon_sym_GT_GT;
	v->a[54370] = anon_sym_LT_AMP;
	v->a[54371] = anon_sym_GT_AMP;
	v->a[54372] = anon_sym_GT_PIPE;
	v->a[54373] = anon_sym_LT_GT;
	v->a[54374] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54375] = anon_sym_DOLLAR;
	v->a[54376] = anon_sym_DQUOTE;
	v->a[54377] = sym_raw_string;
	v->a[54378] = sym_number;
	v->a[54379] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2719(v);
}

void	small_parse_table_2719(t_small_parse_table_array *v)
{
	v->a[54380] = anon_sym_DOLLAR_LPAREN;
	v->a[54381] = anon_sym_BQUOTE;
	v->a[54382] = sym_word;
	v->a[54383] = 10;
	v->a[54384] = actions(3);
	v->a[54385] = 1;
	v->a[54386] = sym_comment;
	v->a[54387] = actions(2117);
	v->a[54388] = 1;
	v->a[54389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54390] = actions(2119);
	v->a[54391] = 1;
	v->a[54392] = anon_sym_DOLLAR;
	v->a[54393] = actions(2121);
	v->a[54394] = 1;
	v->a[54395] = anon_sym_DQUOTE;
	v->a[54396] = actions(2123);
	v->a[54397] = 1;
	v->a[54398] = anon_sym_DOLLAR_LBRACE;
	v->a[54399] = actions(2125);
	small_parse_table_2720(v);
}

/* EOF small_parse_table_543.c */
