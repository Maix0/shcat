/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_605.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3025(t_small_parse_table_array *v)
{
	v->a[60500] = anon_sym_DASH2;
	v->a[60501] = anon_sym_PLUS2;
	v->a[60502] = actions(1847);
	v->a[60503] = 2;
	v->a[60504] = sym_number;
	v->a[60505] = aux_sym__simple_variable_name_token1;
	v->a[60506] = state(370);
	v->a[60507] = 3;
	v->a[60508] = sym_string;
	v->a[60509] = sym_simple_expansion;
	v->a[60510] = sym_expansion;
	v->a[60511] = state(345);
	v->a[60512] = 8;
	v->a[60513] = sym__arithmetic_expression;
	v->a[60514] = sym_arithmetic_literal;
	v->a[60515] = sym_arithmetic_binary_expression;
	v->a[60516] = sym_arithmetic_ternary_expression;
	v->a[60517] = sym_arithmetic_unary_expression;
	v->a[60518] = sym_arithmetic_postfix_expression;
	v->a[60519] = sym_arithmetic_parenthesized_expression;
	small_parse_table_3026(v);
}

void	small_parse_table_3026(t_small_parse_table_array *v)
{
	v->a[60520] = sym_command_substitution;
	v->a[60521] = 15;
	v->a[60522] = actions(1074);
	v->a[60523] = 1;
	v->a[60524] = sym_comment;
	v->a[60525] = actions(1951);
	v->a[60526] = 1;
	v->a[60527] = anon_sym_LPAREN;
	v->a[60528] = actions(1953);
	v->a[60529] = 1;
	v->a[60530] = anon_sym_BANG;
	v->a[60531] = actions(1959);
	v->a[60532] = 1;
	v->a[60533] = anon_sym_TILDE;
	v->a[60534] = actions(1961);
	v->a[60535] = 1;
	v->a[60536] = anon_sym_DOLLAR;
	v->a[60537] = actions(1963);
	v->a[60538] = 1;
	v->a[60539] = anon_sym_DQUOTE;
	small_parse_table_3027(v);
}

void	small_parse_table_3027(t_small_parse_table_array *v)
{
	v->a[60540] = actions(1967);
	v->a[60541] = 1;
	v->a[60542] = anon_sym_DOLLAR_LBRACE;
	v->a[60543] = actions(1969);
	v->a[60544] = 1;
	v->a[60545] = anon_sym_DOLLAR_LPAREN;
	v->a[60546] = actions(1971);
	v->a[60547] = 1;
	v->a[60548] = anon_sym_BQUOTE;
	v->a[60549] = actions(1973);
	v->a[60550] = 1;
	v->a[60551] = sym_variable_name;
	v->a[60552] = actions(1955);
	v->a[60553] = 2;
	v->a[60554] = anon_sym_PLUS_PLUS;
	v->a[60555] = anon_sym_DASH_DASH;
	v->a[60556] = actions(1957);
	v->a[60557] = 2;
	v->a[60558] = anon_sym_DASH2;
	v->a[60559] = anon_sym_PLUS2;
	small_parse_table_3028(v);
}

void	small_parse_table_3028(t_small_parse_table_array *v)
{
	v->a[60560] = actions(1965);
	v->a[60561] = 2;
	v->a[60562] = sym_number;
	v->a[60563] = aux_sym__simple_variable_name_token1;
	v->a[60564] = state(462);
	v->a[60565] = 3;
	v->a[60566] = sym_string;
	v->a[60567] = sym_simple_expansion;
	v->a[60568] = sym_expansion;
	v->a[60569] = state(557);
	v->a[60570] = 8;
	v->a[60571] = sym__arithmetic_expression;
	v->a[60572] = sym_arithmetic_literal;
	v->a[60573] = sym_arithmetic_binary_expression;
	v->a[60574] = sym_arithmetic_ternary_expression;
	v->a[60575] = sym_arithmetic_unary_expression;
	v->a[60576] = sym_arithmetic_postfix_expression;
	v->a[60577] = sym_arithmetic_parenthesized_expression;
	v->a[60578] = sym_command_substitution;
	v->a[60579] = 15;
	small_parse_table_3029(v);
}

void	small_parse_table_3029(t_small_parse_table_array *v)
{
	v->a[60580] = actions(1074);
	v->a[60581] = 1;
	v->a[60582] = sym_comment;
	v->a[60583] = actions(1831);
	v->a[60584] = 1;
	v->a[60585] = anon_sym_LPAREN;
	v->a[60586] = actions(1833);
	v->a[60587] = 1;
	v->a[60588] = anon_sym_BANG;
	v->a[60589] = actions(1841);
	v->a[60590] = 1;
	v->a[60591] = anon_sym_TILDE;
	v->a[60592] = actions(1843);
	v->a[60593] = 1;
	v->a[60594] = anon_sym_DOLLAR;
	v->a[60595] = actions(1845);
	v->a[60596] = 1;
	v->a[60597] = anon_sym_DQUOTE;
	v->a[60598] = actions(1849);
	v->a[60599] = 1;
	small_parse_table_3030(v);
}

/* EOF small_parse_table_605.c */
