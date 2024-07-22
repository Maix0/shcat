/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_472.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2360(t_small_parse_table_array *v)
{
	v->a[47200] = 1;
	v->a[47201] = sym_variable_name;
	v->a[47202] = actions(1696);
	v->a[47203] = 2;
	v->a[47204] = anon_sym_PLUS_PLUS;
	v->a[47205] = anon_sym_DASH_DASH;
	v->a[47206] = actions(1698);
	v->a[47207] = 2;
	v->a[47208] = anon_sym_DASH2;
	v->a[47209] = anon_sym_PLUS2;
	v->a[47210] = actions(1706);
	v->a[47211] = 2;
	v->a[47212] = sym_number;
	v->a[47213] = aux_sym__simple_variable_name_token1;
	v->a[47214] = state(238);
	v->a[47215] = 3;
	v->a[47216] = sym_string;
	v->a[47217] = sym_simple_expansion;
	v->a[47218] = sym_expansion;
	v->a[47219] = state(243);
	small_parse_table_2361(v);
}

void	small_parse_table_2361(t_small_parse_table_array *v)
{
	v->a[47220] = 8;
	v->a[47221] = sym__arithmetic_expression;
	v->a[47222] = sym_arithmetic_literal;
	v->a[47223] = sym_arithmetic_binary_expression;
	v->a[47224] = sym_arithmetic_ternary_expression;
	v->a[47225] = sym_arithmetic_unary_expression;
	v->a[47226] = sym_arithmetic_postfix_expression;
	v->a[47227] = sym_arithmetic_parenthesized_expression;
	v->a[47228] = sym_command_substitution;
	v->a[47229] = 15;
	v->a[47230] = actions(501);
	v->a[47231] = 1;
	v->a[47232] = sym_comment;
	v->a[47233] = actions(1692);
	v->a[47234] = 1;
	v->a[47235] = anon_sym_LPAREN;
	v->a[47236] = actions(1694);
	v->a[47237] = 1;
	v->a[47238] = anon_sym_BANG;
	v->a[47239] = actions(1700);
	small_parse_table_2362(v);
}

void	small_parse_table_2362(t_small_parse_table_array *v)
{
	v->a[47240] = 1;
	v->a[47241] = anon_sym_TILDE;
	v->a[47242] = actions(1702);
	v->a[47243] = 1;
	v->a[47244] = anon_sym_DOLLAR;
	v->a[47245] = actions(1704);
	v->a[47246] = 1;
	v->a[47247] = anon_sym_DQUOTE;
	v->a[47248] = actions(1708);
	v->a[47249] = 1;
	v->a[47250] = anon_sym_DOLLAR_LBRACE;
	v->a[47251] = actions(1710);
	v->a[47252] = 1;
	v->a[47253] = anon_sym_DOLLAR_LPAREN;
	v->a[47254] = actions(1712);
	v->a[47255] = 1;
	v->a[47256] = anon_sym_BQUOTE;
	v->a[47257] = actions(1714);
	v->a[47258] = 1;
	v->a[47259] = sym_variable_name;
	small_parse_table_2363(v);
}

void	small_parse_table_2363(t_small_parse_table_array *v)
{
	v->a[47260] = actions(1696);
	v->a[47261] = 2;
	v->a[47262] = anon_sym_PLUS_PLUS;
	v->a[47263] = anon_sym_DASH_DASH;
	v->a[47264] = actions(1698);
	v->a[47265] = 2;
	v->a[47266] = anon_sym_DASH2;
	v->a[47267] = anon_sym_PLUS2;
	v->a[47268] = actions(1706);
	v->a[47269] = 2;
	v->a[47270] = sym_number;
	v->a[47271] = aux_sym__simple_variable_name_token1;
	v->a[47272] = state(238);
	v->a[47273] = 3;
	v->a[47274] = sym_string;
	v->a[47275] = sym_simple_expansion;
	v->a[47276] = sym_expansion;
	v->a[47277] = state(244);
	v->a[47278] = 8;
	v->a[47279] = sym__arithmetic_expression;
	small_parse_table_2364(v);
}

void	small_parse_table_2364(t_small_parse_table_array *v)
{
	v->a[47280] = sym_arithmetic_literal;
	v->a[47281] = sym_arithmetic_binary_expression;
	v->a[47282] = sym_arithmetic_ternary_expression;
	v->a[47283] = sym_arithmetic_unary_expression;
	v->a[47284] = sym_arithmetic_postfix_expression;
	v->a[47285] = sym_arithmetic_parenthesized_expression;
	v->a[47286] = sym_command_substitution;
	v->a[47287] = 6;
	v->a[47288] = actions(3);
	v->a[47289] = 1;
	v->a[47290] = sym_comment;
	v->a[47291] = actions(1208);
	v->a[47292] = 1;
	v->a[47293] = sym_file_descriptor;
	v->a[47294] = actions(1396);
	v->a[47295] = 1;
	v->a[47296] = aux_sym_concatenation_token1;
	v->a[47297] = actions(1398);
	v->a[47298] = 1;
	v->a[47299] = sym__concat;
	small_parse_table_2365(v);
}

/* EOF small_parse_table_472.c */
