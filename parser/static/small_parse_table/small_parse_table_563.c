/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_563.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2815(t_small_parse_table_array *v)
{
	v->a[56300] = actions(1837);
	v->a[56301] = 2;
	v->a[56302] = anon_sym_PLUS_PLUS;
	v->a[56303] = anon_sym_DASH_DASH;
	v->a[56304] = actions(1839);
	v->a[56305] = 2;
	v->a[56306] = anon_sym_DASH2;
	v->a[56307] = anon_sym_PLUS2;
	v->a[56308] = actions(1847);
	v->a[56309] = 2;
	v->a[56310] = sym_number;
	v->a[56311] = aux_sym__simple_variable_name_token1;
	v->a[56312] = state(370);
	v->a[56313] = 3;
	v->a[56314] = sym_string;
	v->a[56315] = sym_simple_expansion;
	v->a[56316] = sym_expansion;
	v->a[56317] = state(472);
	v->a[56318] = 8;
	v->a[56319] = sym__arithmetic_expression;
	small_parse_table_2816(v);
}

void	small_parse_table_2816(t_small_parse_table_array *v)
{
	v->a[56320] = sym_arithmetic_literal;
	v->a[56321] = sym_arithmetic_binary_expression;
	v->a[56322] = sym_arithmetic_ternary_expression;
	v->a[56323] = sym_arithmetic_unary_expression;
	v->a[56324] = sym_arithmetic_postfix_expression;
	v->a[56325] = sym_arithmetic_parenthesized_expression;
	v->a[56326] = sym_command_substitution;
	v->a[56327] = 16;
	v->a[56328] = actions(1074);
	v->a[56329] = 1;
	v->a[56330] = sym_comment;
	v->a[56331] = actions(1831);
	v->a[56332] = 1;
	v->a[56333] = anon_sym_LPAREN;
	v->a[56334] = actions(1833);
	v->a[56335] = 1;
	v->a[56336] = anon_sym_BANG;
	v->a[56337] = actions(1841);
	v->a[56338] = 1;
	v->a[56339] = anon_sym_TILDE;
	small_parse_table_2817(v);
}

void	small_parse_table_2817(t_small_parse_table_array *v)
{
	v->a[56340] = actions(1843);
	v->a[56341] = 1;
	v->a[56342] = anon_sym_DOLLAR;
	v->a[56343] = actions(1845);
	v->a[56344] = 1;
	v->a[56345] = anon_sym_DQUOTE;
	v->a[56346] = actions(1849);
	v->a[56347] = 1;
	v->a[56348] = anon_sym_DOLLAR_LBRACE;
	v->a[56349] = actions(1851);
	v->a[56350] = 1;
	v->a[56351] = anon_sym_DOLLAR_LPAREN;
	v->a[56352] = actions(1853);
	v->a[56353] = 1;
	v->a[56354] = anon_sym_BQUOTE;
	v->a[56355] = actions(1855);
	v->a[56356] = 1;
	v->a[56357] = sym_variable_name;
	v->a[56358] = actions(1917);
	v->a[56359] = 1;
	small_parse_table_2818(v);
}

void	small_parse_table_2818(t_small_parse_table_array *v)
{
	v->a[56360] = anon_sym_RPAREN_RPAREN;
	v->a[56361] = actions(1837);
	v->a[56362] = 2;
	v->a[56363] = anon_sym_PLUS_PLUS;
	v->a[56364] = anon_sym_DASH_DASH;
	v->a[56365] = actions(1839);
	v->a[56366] = 2;
	v->a[56367] = anon_sym_DASH2;
	v->a[56368] = anon_sym_PLUS2;
	v->a[56369] = actions(1847);
	v->a[56370] = 2;
	v->a[56371] = sym_number;
	v->a[56372] = aux_sym__simple_variable_name_token1;
	v->a[56373] = state(370);
	v->a[56374] = 3;
	v->a[56375] = sym_string;
	v->a[56376] = sym_simple_expansion;
	v->a[56377] = sym_expansion;
	v->a[56378] = state(538);
	v->a[56379] = 8;
	small_parse_table_2819(v);
}

void	small_parse_table_2819(t_small_parse_table_array *v)
{
	v->a[56380] = sym__arithmetic_expression;
	v->a[56381] = sym_arithmetic_literal;
	v->a[56382] = sym_arithmetic_binary_expression;
	v->a[56383] = sym_arithmetic_ternary_expression;
	v->a[56384] = sym_arithmetic_unary_expression;
	v->a[56385] = sym_arithmetic_postfix_expression;
	v->a[56386] = sym_arithmetic_parenthesized_expression;
	v->a[56387] = sym_command_substitution;
	v->a[56388] = 16;
	v->a[56389] = actions(1074);
	v->a[56390] = 1;
	v->a[56391] = sym_comment;
	v->a[56392] = actions(1831);
	v->a[56393] = 1;
	v->a[56394] = anon_sym_LPAREN;
	v->a[56395] = actions(1833);
	v->a[56396] = 1;
	v->a[56397] = anon_sym_BANG;
	v->a[56398] = actions(1841);
	v->a[56399] = 1;
	small_parse_table_2820(v);
}

/* EOF small_parse_table_563.c */
