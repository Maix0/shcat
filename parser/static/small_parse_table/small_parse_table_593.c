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
	v->a[59300] = actions(1967);
	v->a[59301] = 1;
	v->a[59302] = anon_sym_DOLLAR_LBRACE;
	v->a[59303] = actions(1969);
	v->a[59304] = 1;
	v->a[59305] = anon_sym_DOLLAR_LPAREN;
	v->a[59306] = actions(1971);
	v->a[59307] = 1;
	v->a[59308] = anon_sym_BQUOTE;
	v->a[59309] = actions(1973);
	v->a[59310] = 1;
	v->a[59311] = sym_variable_name;
	v->a[59312] = actions(1955);
	v->a[59313] = 2;
	v->a[59314] = anon_sym_PLUS_PLUS;
	v->a[59315] = anon_sym_DASH_DASH;
	v->a[59316] = actions(1957);
	v->a[59317] = 2;
	v->a[59318] = anon_sym_DASH2;
	v->a[59319] = anon_sym_PLUS2;
	small_parse_table_2966(v);
}

void	small_parse_table_2966(t_small_parse_table_array *v)
{
	v->a[59320] = actions(1965);
	v->a[59321] = 2;
	v->a[59322] = sym_number;
	v->a[59323] = aux_sym__simple_variable_name_token1;
	v->a[59324] = state(462);
	v->a[59325] = 3;
	v->a[59326] = sym_string;
	v->a[59327] = sym_simple_expansion;
	v->a[59328] = sym_expansion;
	v->a[59329] = state(580);
	v->a[59330] = 8;
	v->a[59331] = sym__arithmetic_expression;
	v->a[59332] = sym_arithmetic_literal;
	v->a[59333] = sym_arithmetic_binary_expression;
	v->a[59334] = sym_arithmetic_ternary_expression;
	v->a[59335] = sym_arithmetic_unary_expression;
	v->a[59336] = sym_arithmetic_postfix_expression;
	v->a[59337] = sym_arithmetic_parenthesized_expression;
	v->a[59338] = sym_command_substitution;
	v->a[59339] = 3;
	small_parse_table_2967(v);
}

void	small_parse_table_2967(t_small_parse_table_array *v)
{
	v->a[59340] = actions(3);
	v->a[59341] = 1;
	v->a[59342] = sym_comment;
	v->a[59343] = actions(1122);
	v->a[59344] = 5;
	v->a[59345] = sym_file_descriptor;
	v->a[59346] = sym__concat;
	v->a[59347] = sym_variable_name;
	v->a[59348] = ts_builtin_sym_end;
	v->a[59349] = aux_sym_heredoc_redirect_token1;
	v->a[59350] = actions(1120);
	v->a[59351] = 21;
	v->a[59352] = anon_sym_PIPE;
	v->a[59353] = anon_sym_RPAREN;
	v->a[59354] = anon_sym_SEMI_SEMI;
	v->a[59355] = anon_sym_AMP_AMP;
	v->a[59356] = anon_sym_PIPE_PIPE;
	v->a[59357] = anon_sym_LT;
	v->a[59358] = anon_sym_GT;
	v->a[59359] = anon_sym_GT_GT;
	small_parse_table_2968(v);
}

void	small_parse_table_2968(t_small_parse_table_array *v)
{
	v->a[59360] = anon_sym_AMP_GT;
	v->a[59361] = anon_sym_AMP_GT_GT;
	v->a[59362] = anon_sym_LT_AMP;
	v->a[59363] = anon_sym_GT_AMP;
	v->a[59364] = anon_sym_GT_PIPE;
	v->a[59365] = anon_sym_LT_AMP_DASH;
	v->a[59366] = anon_sym_GT_AMP_DASH;
	v->a[59367] = anon_sym_LT_LT;
	v->a[59368] = anon_sym_LT_LT_DASH;
	v->a[59369] = anon_sym_AMP;
	v->a[59370] = aux_sym_concatenation_token1;
	v->a[59371] = anon_sym_BQUOTE;
	v->a[59372] = anon_sym_SEMI;
	v->a[59373] = 15;
	v->a[59374] = actions(1074);
	v->a[59375] = 1;
	v->a[59376] = sym_comment;
	v->a[59377] = actions(1951);
	v->a[59378] = 1;
	v->a[59379] = anon_sym_LPAREN;
	small_parse_table_2969(v);
}

void	small_parse_table_2969(t_small_parse_table_array *v)
{
	v->a[59380] = actions(1953);
	v->a[59381] = 1;
	v->a[59382] = anon_sym_BANG;
	v->a[59383] = actions(1959);
	v->a[59384] = 1;
	v->a[59385] = anon_sym_TILDE;
	v->a[59386] = actions(1961);
	v->a[59387] = 1;
	v->a[59388] = anon_sym_DOLLAR;
	v->a[59389] = actions(1963);
	v->a[59390] = 1;
	v->a[59391] = anon_sym_DQUOTE;
	v->a[59392] = actions(1967);
	v->a[59393] = 1;
	v->a[59394] = anon_sym_DOLLAR_LBRACE;
	v->a[59395] = actions(1969);
	v->a[59396] = 1;
	v->a[59397] = anon_sym_DOLLAR_LPAREN;
	v->a[59398] = actions(1971);
	v->a[59399] = 1;
	small_parse_table_2970(v);
}

/* EOF small_parse_table_593.c */
