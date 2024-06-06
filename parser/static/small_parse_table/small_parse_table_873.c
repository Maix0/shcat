/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_873.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4365(t_small_parse_table_array *v)
{
	v->a[87300] = 1;
	v->a[87301] = sym__arithmetic_ternary_expression;
	v->a[87302] = state(1511);
	v->a[87303] = 1;
	v->a[87304] = sym__arithmetic_binary_expression;
	v->a[87305] = actions(4588);
	v->a[87306] = 2;
	v->a[87307] = anon_sym_PLUS_PLUS;
	v->a[87308] = anon_sym_DASH_DASH;
	v->a[87309] = actions(4590);
	v->a[87310] = 2;
	v->a[87311] = anon_sym_DASH2;
	v->a[87312] = anon_sym_PLUS2;
	v->a[87313] = state(1510);
	v->a[87314] = 8;
	v->a[87315] = sym__arithmetic_expression;
	v->a[87316] = sym__arithmetic_literal;
	v->a[87317] = sym__arithmetic_parenthesized_expression;
	v->a[87318] = sym_string;
	v->a[87319] = sym_number;
	small_parse_table_4366(v);
}

void	small_parse_table_4366(t_small_parse_table_array *v)
{
	v->a[87320] = sym_simple_expansion;
	v->a[87321] = sym_expansion;
	v->a[87322] = sym_command_substitution;
	v->a[87323] = 5;
	v->a[87324] = actions(57);
	v->a[87325] = 1;
	v->a[87326] = sym_comment;
	v->a[87327] = state(1782);
	v->a[87328] = 1;
	v->a[87329] = aux_sym_concatenation_repeat1;
	v->a[87330] = actions(4795);
	v->a[87331] = 2;
	v->a[87332] = sym__concat;
	v->a[87333] = aux_sym_concatenation_token1;
	v->a[87334] = actions(3119);
	v->a[87335] = 11;
	v->a[87336] = anon_sym_LT;
	v->a[87337] = anon_sym_GT;
	v->a[87338] = anon_sym_AMP_GT;
	v->a[87339] = anon_sym_LT_AMP;
	small_parse_table_4367(v);
}

void	small_parse_table_4367(t_small_parse_table_array *v)
{
	v->a[87340] = anon_sym_GT_AMP;
	v->a[87341] = anon_sym_DOLLAR;
	v->a[87342] = aux_sym_number_token1;
	v->a[87343] = aux_sym_number_token2;
	v->a[87344] = anon_sym_DOLLAR_LPAREN;
	v->a[87345] = anon_sym_BQUOTE;
	v->a[87346] = sym_word;
	v->a[87347] = actions(3121);
	v->a[87348] = 15;
	v->a[87349] = sym_file_descriptor;
	v->a[87350] = sym_variable_name;
	v->a[87351] = sym_test_operator;
	v->a[87352] = sym__brace_start;
	v->a[87353] = anon_sym_GT_GT;
	v->a[87354] = anon_sym_AMP_GT_GT;
	v->a[87355] = anon_sym_GT_PIPE;
	v->a[87356] = anon_sym_LT_AMP_DASH;
	v->a[87357] = anon_sym_GT_AMP_DASH;
	v->a[87358] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87359] = sym__special_character;
	small_parse_table_4368(v);
}

void	small_parse_table_4368(t_small_parse_table_array *v)
{
	v->a[87360] = anon_sym_DQUOTE;
	v->a[87361] = sym_raw_string;
	v->a[87362] = anon_sym_DOLLAR_LBRACE;
	v->a[87363] = anon_sym_DOLLAR_BQUOTE;
	v->a[87364] = 21;
	v->a[87365] = actions(57);
	v->a[87366] = 1;
	v->a[87367] = sym_comment;
	v->a[87368] = actions(4584);
	v->a[87369] = 1;
	v->a[87370] = anon_sym_LPAREN;
	v->a[87371] = actions(4586);
	v->a[87372] = 1;
	v->a[87373] = anon_sym_BANG;
	v->a[87374] = actions(4592);
	v->a[87375] = 1;
	v->a[87376] = anon_sym_TILDE;
	v->a[87377] = actions(4594);
	v->a[87378] = 1;
	v->a[87379] = anon_sym_DOLLAR;
	small_parse_table_4369(v);
}

void	small_parse_table_4369(t_small_parse_table_array *v)
{
	v->a[87380] = actions(4596);
	v->a[87381] = 1;
	v->a[87382] = anon_sym_DQUOTE;
	v->a[87383] = actions(4598);
	v->a[87384] = 1;
	v->a[87385] = aux_sym_number_token1;
	v->a[87386] = actions(4600);
	v->a[87387] = 1;
	v->a[87388] = aux_sym_number_token2;
	v->a[87389] = actions(4602);
	v->a[87390] = 1;
	v->a[87391] = anon_sym_DOLLAR_LBRACE;
	v->a[87392] = actions(4604);
	v->a[87393] = 1;
	v->a[87394] = anon_sym_DOLLAR_LPAREN;
	v->a[87395] = actions(4606);
	v->a[87396] = 1;
	v->a[87397] = anon_sym_BQUOTE;
	v->a[87398] = actions(4608);
	v->a[87399] = 1;
	small_parse_table_4370(v);
}

/* EOF small_parse_table_873.c */
