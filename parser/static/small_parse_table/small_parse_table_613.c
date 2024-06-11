/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_613.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3065(t_small_parse_table_array *v)
{
	v->a[61300] = anon_sym_DOLLAR_LPAREN;
	v->a[61301] = actions(1891);
	v->a[61302] = 1;
	v->a[61303] = anon_sym_BQUOTE;
	v->a[61304] = actions(1893);
	v->a[61305] = 1;
	v->a[61306] = sym_variable_name;
	v->a[61307] = actions(1903);
	v->a[61308] = 1;
	v->a[61309] = anon_sym_RPAREN_RPAREN;
	v->a[61310] = actions(1875);
	v->a[61311] = 2;
	v->a[61312] = anon_sym_PLUS_PLUS;
	v->a[61313] = anon_sym_DASH_DASH;
	v->a[61314] = actions(1877);
	v->a[61315] = 2;
	v->a[61316] = anon_sym_DASH2;
	v->a[61317] = anon_sym_PLUS2;
	v->a[61318] = actions(1885);
	v->a[61319] = 2;
	small_parse_table_3066(v);
}

void	small_parse_table_3066(t_small_parse_table_array *v)
{
	v->a[61320] = sym_number;
	v->a[61321] = aux_sym__simple_variable_name_token1;
	v->a[61322] = state(365);
	v->a[61323] = 3;
	v->a[61324] = sym_string;
	v->a[61325] = sym_simple_expansion;
	v->a[61326] = sym_expansion;
	v->a[61327] = state(489);
	v->a[61328] = 8;
	v->a[61329] = sym__arithmetic_expression;
	v->a[61330] = sym_arithmetic_literal;
	v->a[61331] = sym_arithmetic_binary_expression;
	v->a[61332] = sym_arithmetic_ternary_expression;
	v->a[61333] = sym_arithmetic_unary_expression;
	v->a[61334] = sym_arithmetic_postfix_expression;
	v->a[61335] = sym_arithmetic_parenthesized_expression;
	v->a[61336] = sym_command_substitution;
	v->a[61337] = 16;
	v->a[61338] = actions(1094);
	v->a[61339] = 1;
	small_parse_table_3067(v);
}

void	small_parse_table_3067(t_small_parse_table_array *v)
{
	v->a[61340] = sym_comment;
	v->a[61341] = actions(1869);
	v->a[61342] = 1;
	v->a[61343] = anon_sym_LPAREN;
	v->a[61344] = actions(1871);
	v->a[61345] = 1;
	v->a[61346] = anon_sym_BANG;
	v->a[61347] = actions(1879);
	v->a[61348] = 1;
	v->a[61349] = anon_sym_TILDE;
	v->a[61350] = actions(1881);
	v->a[61351] = 1;
	v->a[61352] = anon_sym_DOLLAR;
	v->a[61353] = actions(1883);
	v->a[61354] = 1;
	v->a[61355] = anon_sym_DQUOTE;
	v->a[61356] = actions(1887);
	v->a[61357] = 1;
	v->a[61358] = anon_sym_DOLLAR_LBRACE;
	v->a[61359] = actions(1889);
	small_parse_table_3068(v);
}

void	small_parse_table_3068(t_small_parse_table_array *v)
{
	v->a[61360] = 1;
	v->a[61361] = anon_sym_DOLLAR_LPAREN;
	v->a[61362] = actions(1891);
	v->a[61363] = 1;
	v->a[61364] = anon_sym_BQUOTE;
	v->a[61365] = actions(1893);
	v->a[61366] = 1;
	v->a[61367] = sym_variable_name;
	v->a[61368] = actions(1905);
	v->a[61369] = 1;
	v->a[61370] = anon_sym_RPAREN_RPAREN;
	v->a[61371] = actions(1875);
	v->a[61372] = 2;
	v->a[61373] = anon_sym_PLUS_PLUS;
	v->a[61374] = anon_sym_DASH_DASH;
	v->a[61375] = actions(1877);
	v->a[61376] = 2;
	v->a[61377] = anon_sym_DASH2;
	v->a[61378] = anon_sym_PLUS2;
	v->a[61379] = actions(1885);
	small_parse_table_3069(v);
}

void	small_parse_table_3069(t_small_parse_table_array *v)
{
	v->a[61380] = 2;
	v->a[61381] = sym_number;
	v->a[61382] = aux_sym__simple_variable_name_token1;
	v->a[61383] = state(365);
	v->a[61384] = 3;
	v->a[61385] = sym_string;
	v->a[61386] = sym_simple_expansion;
	v->a[61387] = sym_expansion;
	v->a[61388] = state(437);
	v->a[61389] = 8;
	v->a[61390] = sym__arithmetic_expression;
	v->a[61391] = sym_arithmetic_literal;
	v->a[61392] = sym_arithmetic_binary_expression;
	v->a[61393] = sym_arithmetic_ternary_expression;
	v->a[61394] = sym_arithmetic_unary_expression;
	v->a[61395] = sym_arithmetic_postfix_expression;
	v->a[61396] = sym_arithmetic_parenthesized_expression;
	v->a[61397] = sym_command_substitution;
	v->a[61398] = 16;
	v->a[61399] = actions(1094);
	small_parse_table_3070(v);
}

/* EOF small_parse_table_613.c */
