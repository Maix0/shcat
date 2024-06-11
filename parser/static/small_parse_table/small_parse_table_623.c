/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_623.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3115(t_small_parse_table_array *v)
{
	v->a[62300] = sym_variable_name;
	v->a[62301] = actions(1931);
	v->a[62302] = 1;
	v->a[62303] = anon_sym_RPAREN_RPAREN;
	v->a[62304] = actions(1875);
	v->a[62305] = 2;
	v->a[62306] = anon_sym_PLUS_PLUS;
	v->a[62307] = anon_sym_DASH_DASH;
	v->a[62308] = actions(1877);
	v->a[62309] = 2;
	v->a[62310] = anon_sym_DASH2;
	v->a[62311] = anon_sym_PLUS2;
	v->a[62312] = actions(1885);
	v->a[62313] = 2;
	v->a[62314] = sym_number;
	v->a[62315] = aux_sym__simple_variable_name_token1;
	v->a[62316] = state(365);
	v->a[62317] = 3;
	v->a[62318] = sym_string;
	v->a[62319] = sym_simple_expansion;
	small_parse_table_3116(v);
}

void	small_parse_table_3116(t_small_parse_table_array *v)
{
	v->a[62320] = sym_expansion;
	v->a[62321] = state(525);
	v->a[62322] = 8;
	v->a[62323] = sym__arithmetic_expression;
	v->a[62324] = sym_arithmetic_literal;
	v->a[62325] = sym_arithmetic_binary_expression;
	v->a[62326] = sym_arithmetic_ternary_expression;
	v->a[62327] = sym_arithmetic_unary_expression;
	v->a[62328] = sym_arithmetic_postfix_expression;
	v->a[62329] = sym_arithmetic_parenthesized_expression;
	v->a[62330] = sym_command_substitution;
	v->a[62331] = 5;
	v->a[62332] = actions(3);
	v->a[62333] = 1;
	v->a[62334] = sym_comment;
	v->a[62335] = state(1529);
	v->a[62336] = 1;
	v->a[62337] = sym_concatenation;
	v->a[62338] = actions(717);
	v->a[62339] = 2;
	small_parse_table_3117(v);
}

void	small_parse_table_3117(t_small_parse_table_array *v)
{
	v->a[62340] = sym_file_descriptor;
	v->a[62341] = sym_variable_name;
	v->a[62342] = state(1201);
	v->a[62343] = 5;
	v->a[62344] = sym_arithmetic_expansion;
	v->a[62345] = sym_string;
	v->a[62346] = sym_simple_expansion;
	v->a[62347] = sym_expansion;
	v->a[62348] = sym_command_substitution;
	v->a[62349] = actions(719);
	v->a[62350] = 19;
	v->a[62351] = anon_sym_LT;
	v->a[62352] = anon_sym_GT;
	v->a[62353] = anon_sym_GT_GT;
	v->a[62354] = anon_sym_AMP_GT;
	v->a[62355] = anon_sym_AMP_GT_GT;
	v->a[62356] = anon_sym_LT_AMP;
	v->a[62357] = anon_sym_GT_AMP;
	v->a[62358] = anon_sym_GT_PIPE;
	v->a[62359] = anon_sym_LT_AMP_DASH;
	small_parse_table_3118(v);
}

void	small_parse_table_3118(t_small_parse_table_array *v)
{
	v->a[62360] = anon_sym_GT_AMP_DASH;
	v->a[62361] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62362] = anon_sym_DOLLAR;
	v->a[62363] = anon_sym_DQUOTE;
	v->a[62364] = sym_raw_string;
	v->a[62365] = sym_number;
	v->a[62366] = anon_sym_DOLLAR_LBRACE;
	v->a[62367] = anon_sym_DOLLAR_LPAREN;
	v->a[62368] = anon_sym_BQUOTE;
	v->a[62369] = sym_word;
	v->a[62370] = 16;
	v->a[62371] = actions(1094);
	v->a[62372] = 1;
	v->a[62373] = sym_comment;
	v->a[62374] = actions(1869);
	v->a[62375] = 1;
	v->a[62376] = anon_sym_LPAREN;
	v->a[62377] = actions(1871);
	v->a[62378] = 1;
	v->a[62379] = anon_sym_BANG;
	small_parse_table_3119(v);
}

void	small_parse_table_3119(t_small_parse_table_array *v)
{
	v->a[62380] = actions(1879);
	v->a[62381] = 1;
	v->a[62382] = anon_sym_TILDE;
	v->a[62383] = actions(1881);
	v->a[62384] = 1;
	v->a[62385] = anon_sym_DOLLAR;
	v->a[62386] = actions(1883);
	v->a[62387] = 1;
	v->a[62388] = anon_sym_DQUOTE;
	v->a[62389] = actions(1887);
	v->a[62390] = 1;
	v->a[62391] = anon_sym_DOLLAR_LBRACE;
	v->a[62392] = actions(1889);
	v->a[62393] = 1;
	v->a[62394] = anon_sym_DOLLAR_LPAREN;
	v->a[62395] = actions(1891);
	v->a[62396] = 1;
	v->a[62397] = anon_sym_BQUOTE;
	v->a[62398] = actions(1893);
	v->a[62399] = 1;
	small_parse_table_3120(v);
}

/* EOF small_parse_table_623.c */
