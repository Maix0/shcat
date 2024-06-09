/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_593.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2965(t_small_parse_table_array *v)
{
	v->a[59300] = anon_sym_PLUS_PLUS;
	v->a[59301] = anon_sym_DASH_DASH;
	v->a[59302] = actions(2083);
	v->a[59303] = 2;
	v->a[59304] = anon_sym_DASH2;
	v->a[59305] = anon_sym_PLUS2;
	v->a[59306] = state(588);
	v->a[59307] = 4;
	v->a[59308] = sym_string;
	v->a[59309] = sym_number;
	v->a[59310] = sym_simple_expansion;
	v->a[59311] = sym_expansion;
	v->a[59312] = state(616);
	v->a[59313] = 8;
	v->a[59314] = sym__arithmetic_expression;
	v->a[59315] = sym_arithmetic_literal;
	v->a[59316] = sym_arithmetic_binary_expression;
	v->a[59317] = sym_arithmetic_ternary_expression;
	v->a[59318] = sym_arithmetic_unary_expression;
	v->a[59319] = sym_arithmetic_postfix_expression;
	small_parse_table_2966(v);
}

void	small_parse_table_2966(t_small_parse_table_array *v)
{
	v->a[59320] = sym_arithmetic_parenthesized_expression;
	v->a[59321] = sym_command_substitution;
	v->a[59322] = 17;
	v->a[59323] = actions(1404);
	v->a[59324] = 1;
	v->a[59325] = sym_comment;
	v->a[59326] = actions(2077);
	v->a[59327] = 1;
	v->a[59328] = anon_sym_LPAREN;
	v->a[59329] = actions(2079);
	v->a[59330] = 1;
	v->a[59331] = anon_sym_BANG;
	v->a[59332] = actions(2085);
	v->a[59333] = 1;
	v->a[59334] = anon_sym_TILDE;
	v->a[59335] = actions(2087);
	v->a[59336] = 1;
	v->a[59337] = anon_sym_DOLLAR;
	v->a[59338] = actions(2089);
	v->a[59339] = 1;
	small_parse_table_2967(v);
}

void	small_parse_table_2967(t_small_parse_table_array *v)
{
	v->a[59340] = anon_sym_DQUOTE;
	v->a[59341] = actions(2091);
	v->a[59342] = 1;
	v->a[59343] = aux_sym_number_token1;
	v->a[59344] = actions(2093);
	v->a[59345] = 1;
	v->a[59346] = aux_sym_number_token2;
	v->a[59347] = actions(2095);
	v->a[59348] = 1;
	v->a[59349] = anon_sym_DOLLAR_LBRACE;
	v->a[59350] = actions(2097);
	v->a[59351] = 1;
	v->a[59352] = anon_sym_DOLLAR_LPAREN;
	v->a[59353] = actions(2099);
	v->a[59354] = 1;
	v->a[59355] = anon_sym_BQUOTE;
	v->a[59356] = actions(2101);
	v->a[59357] = 1;
	v->a[59358] = aux_sym__simple_variable_name_token1;
	v->a[59359] = actions(2103);
	small_parse_table_2968(v);
}

void	small_parse_table_2968(t_small_parse_table_array *v)
{
	v->a[59360] = 1;
	v->a[59361] = sym_variable_name;
	v->a[59362] = actions(2081);
	v->a[59363] = 2;
	v->a[59364] = anon_sym_PLUS_PLUS;
	v->a[59365] = anon_sym_DASH_DASH;
	v->a[59366] = actions(2083);
	v->a[59367] = 2;
	v->a[59368] = anon_sym_DASH2;
	v->a[59369] = anon_sym_PLUS2;
	v->a[59370] = state(588);
	v->a[59371] = 4;
	v->a[59372] = sym_string;
	v->a[59373] = sym_number;
	v->a[59374] = sym_simple_expansion;
	v->a[59375] = sym_expansion;
	v->a[59376] = state(606);
	v->a[59377] = 8;
	v->a[59378] = sym__arithmetic_expression;
	v->a[59379] = sym_arithmetic_literal;
	small_parse_table_2969(v);
}

void	small_parse_table_2969(t_small_parse_table_array *v)
{
	v->a[59380] = sym_arithmetic_binary_expression;
	v->a[59381] = sym_arithmetic_ternary_expression;
	v->a[59382] = sym_arithmetic_unary_expression;
	v->a[59383] = sym_arithmetic_postfix_expression;
	v->a[59384] = sym_arithmetic_parenthesized_expression;
	v->a[59385] = sym_command_substitution;
	v->a[59386] = 3;
	v->a[59387] = actions(3);
	v->a[59388] = 1;
	v->a[59389] = sym_comment;
	v->a[59390] = actions(1319);
	v->a[59391] = 2;
	v->a[59392] = sym_file_descriptor;
	v->a[59393] = sym__concat;
	v->a[59394] = actions(1317);
	v->a[59395] = 26;
	v->a[59396] = anon_sym_PIPE;
	v->a[59397] = anon_sym_AMP_AMP;
	v->a[59398] = anon_sym_PIPE_PIPE;
	v->a[59399] = anon_sym_LT;
	small_parse_table_2970(v);
}

/* EOF small_parse_table_593.c */
