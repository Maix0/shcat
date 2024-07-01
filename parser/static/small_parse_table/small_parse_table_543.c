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
	v->a[54301] = anon_sym_LPAREN;
	v->a[54302] = actions(1746);
	v->a[54303] = 1;
	v->a[54304] = anon_sym_BANG;
	v->a[54305] = actions(1754);
	v->a[54306] = 1;
	v->a[54307] = anon_sym_TILDE;
	v->a[54308] = actions(1756);
	v->a[54309] = 1;
	v->a[54310] = anon_sym_DOLLAR;
	v->a[54311] = actions(1758);
	v->a[54312] = 1;
	v->a[54313] = anon_sym_DQUOTE;
	v->a[54314] = actions(1762);
	v->a[54315] = 1;
	v->a[54316] = anon_sym_DOLLAR_LBRACE;
	v->a[54317] = actions(1764);
	v->a[54318] = 1;
	v->a[54319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2716(v);
}

void	small_parse_table_2716(t_small_parse_table_array *v)
{
	v->a[54320] = actions(1766);
	v->a[54321] = 1;
	v->a[54322] = anon_sym_BQUOTE;
	v->a[54323] = actions(1768);
	v->a[54324] = 1;
	v->a[54325] = sym_variable_name;
	v->a[54326] = actions(1750);
	v->a[54327] = 2;
	v->a[54328] = anon_sym_PLUS_PLUS;
	v->a[54329] = anon_sym_DASH_DASH;
	v->a[54330] = actions(1752);
	v->a[54331] = 2;
	v->a[54332] = anon_sym_DASH2;
	v->a[54333] = anon_sym_PLUS2;
	v->a[54334] = actions(1760);
	v->a[54335] = 2;
	v->a[54336] = sym_number;
	v->a[54337] = aux_sym__simple_variable_name_token1;
	v->a[54338] = state(271);
	v->a[54339] = 3;
	small_parse_table_2717(v);
}

void	small_parse_table_2717(t_small_parse_table_array *v)
{
	v->a[54340] = sym_string;
	v->a[54341] = sym_simple_expansion;
	v->a[54342] = sym_expansion;
	v->a[54343] = state(244);
	v->a[54344] = 8;
	v->a[54345] = sym__arithmetic_expression;
	v->a[54346] = sym_arithmetic_literal;
	v->a[54347] = sym_arithmetic_binary_expression;
	v->a[54348] = sym_arithmetic_ternary_expression;
	v->a[54349] = sym_arithmetic_unary_expression;
	v->a[54350] = sym_arithmetic_postfix_expression;
	v->a[54351] = sym_arithmetic_parenthesized_expression;
	v->a[54352] = sym_command_substitution;
	v->a[54353] = 3;
	v->a[54354] = actions(3);
	v->a[54355] = 1;
	v->a[54356] = sym_comment;
	v->a[54357] = actions(1194);
	v->a[54358] = 3;
	v->a[54359] = sym_file_descriptor;
	small_parse_table_2718(v);
}

void	small_parse_table_2718(t_small_parse_table_array *v)
{
	v->a[54360] = sym__concat;
	v->a[54361] = sym_variable_name;
	v->a[54362] = actions(1189);
	v->a[54363] = 23;
	v->a[54364] = anon_sym_PIPE;
	v->a[54365] = anon_sym_AMP_AMP;
	v->a[54366] = anon_sym_PIPE_PIPE;
	v->a[54367] = anon_sym_LT;
	v->a[54368] = anon_sym_GT;
	v->a[54369] = anon_sym_GT_GT;
	v->a[54370] = anon_sym_LT_AMP;
	v->a[54371] = anon_sym_GT_AMP;
	v->a[54372] = anon_sym_GT_PIPE;
	v->a[54373] = anon_sym_LT_AMP_DASH;
	v->a[54374] = anon_sym_GT_AMP_DASH;
	v->a[54375] = anon_sym_LT_LT;
	v->a[54376] = anon_sym_LT_LT_DASH;
	v->a[54377] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54378] = aux_sym_concatenation_token1;
	v->a[54379] = anon_sym_DOLLAR;
	small_parse_table_2719(v);
}

void	small_parse_table_2719(t_small_parse_table_array *v)
{
	v->a[54380] = anon_sym_DQUOTE;
	v->a[54381] = sym_raw_string;
	v->a[54382] = sym_number;
	v->a[54383] = anon_sym_DOLLAR_LBRACE;
	v->a[54384] = anon_sym_DOLLAR_LPAREN;
	v->a[54385] = anon_sym_BQUOTE;
	v->a[54386] = sym_word;
	v->a[54387] = 12;
	v->a[54388] = actions(3);
	v->a[54389] = 1;
	v->a[54390] = sym_comment;
	v->a[54391] = actions(1903);
	v->a[54392] = 1;
	v->a[54393] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54394] = actions(1906);
	v->a[54395] = 1;
	v->a[54396] = anon_sym_DOLLAR;
	v->a[54397] = actions(1909);
	v->a[54398] = 1;
	v->a[54399] = anon_sym_DQUOTE;
	small_parse_table_2720(v);
}

/* EOF small_parse_table_543.c */
