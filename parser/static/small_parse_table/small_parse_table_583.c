/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_583.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2915(t_small_parse_table_array *v)
{
	v->a[58300] = aux_sym_concatenation_token1;
	v->a[58301] = anon_sym_BQUOTE;
	v->a[58302] = anon_sym_SEMI;
	v->a[58303] = 3;
	v->a[58304] = actions(3);
	v->a[58305] = 1;
	v->a[58306] = sym_comment;
	v->a[58307] = actions(1580);
	v->a[58308] = 2;
	v->a[58309] = sym_file_descriptor;
	v->a[58310] = sym__bare_dollar;
	v->a[58311] = actions(1578);
	v->a[58312] = 24;
	v->a[58313] = anon_sym_PIPE;
	v->a[58314] = anon_sym_AMP_AMP;
	v->a[58315] = anon_sym_PIPE_PIPE;
	v->a[58316] = anon_sym_LT;
	v->a[58317] = anon_sym_GT;
	v->a[58318] = anon_sym_GT_GT;
	v->a[58319] = anon_sym_AMP_GT;
	small_parse_table_2916(v);
}

void	small_parse_table_2916(t_small_parse_table_array *v)
{
	v->a[58320] = anon_sym_AMP_GT_GT;
	v->a[58321] = anon_sym_LT_AMP;
	v->a[58322] = anon_sym_GT_AMP;
	v->a[58323] = anon_sym_GT_PIPE;
	v->a[58324] = anon_sym_LT_AMP_DASH;
	v->a[58325] = anon_sym_GT_AMP_DASH;
	v->a[58326] = anon_sym_LT_LT;
	v->a[58327] = anon_sym_LT_LT_DASH;
	v->a[58328] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58329] = anon_sym_DOLLAR;
	v->a[58330] = anon_sym_DQUOTE;
	v->a[58331] = sym_raw_string;
	v->a[58332] = sym_number;
	v->a[58333] = anon_sym_DOLLAR_LBRACE;
	v->a[58334] = anon_sym_DOLLAR_LPAREN;
	v->a[58335] = anon_sym_BQUOTE;
	v->a[58336] = sym_word;
	v->a[58337] = 15;
	v->a[58338] = actions(1074);
	v->a[58339] = 1;
	small_parse_table_2917(v);
}

void	small_parse_table_2917(t_small_parse_table_array *v)
{
	v->a[58340] = sym_comment;
	v->a[58341] = actions(1951);
	v->a[58342] = 1;
	v->a[58343] = anon_sym_LPAREN;
	v->a[58344] = actions(1953);
	v->a[58345] = 1;
	v->a[58346] = anon_sym_BANG;
	v->a[58347] = actions(1959);
	v->a[58348] = 1;
	v->a[58349] = anon_sym_TILDE;
	v->a[58350] = actions(1961);
	v->a[58351] = 1;
	v->a[58352] = anon_sym_DOLLAR;
	v->a[58353] = actions(1963);
	v->a[58354] = 1;
	v->a[58355] = anon_sym_DQUOTE;
	v->a[58356] = actions(1967);
	v->a[58357] = 1;
	v->a[58358] = anon_sym_DOLLAR_LBRACE;
	v->a[58359] = actions(1969);
	small_parse_table_2918(v);
}

void	small_parse_table_2918(t_small_parse_table_array *v)
{
	v->a[58360] = 1;
	v->a[58361] = anon_sym_DOLLAR_LPAREN;
	v->a[58362] = actions(1971);
	v->a[58363] = 1;
	v->a[58364] = anon_sym_BQUOTE;
	v->a[58365] = actions(1973);
	v->a[58366] = 1;
	v->a[58367] = sym_variable_name;
	v->a[58368] = actions(1955);
	v->a[58369] = 2;
	v->a[58370] = anon_sym_PLUS_PLUS;
	v->a[58371] = anon_sym_DASH_DASH;
	v->a[58372] = actions(1957);
	v->a[58373] = 2;
	v->a[58374] = anon_sym_DASH2;
	v->a[58375] = anon_sym_PLUS2;
	v->a[58376] = actions(1965);
	v->a[58377] = 2;
	v->a[58378] = sym_number;
	v->a[58379] = aux_sym__simple_variable_name_token1;
	small_parse_table_2919(v);
}

void	small_parse_table_2919(t_small_parse_table_array *v)
{
	v->a[58380] = state(462);
	v->a[58381] = 3;
	v->a[58382] = sym_string;
	v->a[58383] = sym_simple_expansion;
	v->a[58384] = sym_expansion;
	v->a[58385] = state(575);
	v->a[58386] = 8;
	v->a[58387] = sym__arithmetic_expression;
	v->a[58388] = sym_arithmetic_literal;
	v->a[58389] = sym_arithmetic_binary_expression;
	v->a[58390] = sym_arithmetic_ternary_expression;
	v->a[58391] = sym_arithmetic_unary_expression;
	v->a[58392] = sym_arithmetic_postfix_expression;
	v->a[58393] = sym_arithmetic_parenthesized_expression;
	v->a[58394] = sym_command_substitution;
	v->a[58395] = 5;
	v->a[58396] = actions(3);
	v->a[58397] = 1;
	v->a[58398] = sym_comment;
	v->a[58399] = actions(774);
	small_parse_table_2920(v);
}

/* EOF small_parse_table_583.c */
