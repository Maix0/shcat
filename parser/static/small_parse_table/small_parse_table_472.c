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
	v->a[47200] = anon_sym_PLUS2;
	v->a[47201] = actions(1576);
	v->a[47202] = 2;
	v->a[47203] = sym_number;
	v->a[47204] = aux_sym__simple_variable_name_token1;
	v->a[47205] = state(255);
	v->a[47206] = 3;
	v->a[47207] = sym_string;
	v->a[47208] = sym_simple_expansion;
	v->a[47209] = sym_expansion;
	v->a[47210] = state(339);
	v->a[47211] = 8;
	v->a[47212] = sym__arithmetic_expression;
	v->a[47213] = sym_arithmetic_literal;
	v->a[47214] = sym_arithmetic_binary_expression;
	v->a[47215] = sym_arithmetic_ternary_expression;
	v->a[47216] = sym_arithmetic_unary_expression;
	v->a[47217] = sym_arithmetic_postfix_expression;
	v->a[47218] = sym_arithmetic_parenthesized_expression;
	v->a[47219] = sym_command_substitution;
	small_parse_table_2361(v);
}

void	small_parse_table_2361(t_small_parse_table_array *v)
{
	v->a[47220] = 4;
	v->a[47221] = actions(3);
	v->a[47222] = 1;
	v->a[47223] = sym_comment;
	v->a[47224] = actions(1612);
	v->a[47225] = 1;
	v->a[47226] = ts_builtin_sym_end;
	v->a[47227] = actions(1441);
	v->a[47228] = 2;
	v->a[47229] = sym_file_descriptor;
	v->a[47230] = sym_variable_name;
	v->a[47231] = actions(1437);
	v->a[47232] = 24;
	v->a[47233] = anon_sym_for;
	v->a[47234] = anon_sym_while;
	v->a[47235] = anon_sym_until;
	v->a[47236] = anon_sym_if;
	v->a[47237] = anon_sym_case;
	v->a[47238] = anon_sym_LPAREN;
	v->a[47239] = anon_sym_LBRACE;
	small_parse_table_2362(v);
}

void	small_parse_table_2362(t_small_parse_table_array *v)
{
	v->a[47240] = anon_sym_BANG;
	v->a[47241] = anon_sym_LT;
	v->a[47242] = anon_sym_GT;
	v->a[47243] = anon_sym_GT_GT;
	v->a[47244] = anon_sym_LT_AMP;
	v->a[47245] = anon_sym_GT_AMP;
	v->a[47246] = anon_sym_GT_PIPE;
	v->a[47247] = anon_sym_LT_GT;
	v->a[47248] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47249] = anon_sym_DOLLAR;
	v->a[47250] = anon_sym_DQUOTE;
	v->a[47251] = sym_raw_string;
	v->a[47252] = sym_number;
	v->a[47253] = anon_sym_DOLLAR_LBRACE;
	v->a[47254] = anon_sym_DOLLAR_LPAREN;
	v->a[47255] = anon_sym_BQUOTE;
	v->a[47256] = sym_word;
	v->a[47257] = 16;
	v->a[47258] = actions(664);
	v->a[47259] = 1;
	small_parse_table_2363(v);
}

void	small_parse_table_2363(t_small_parse_table_array *v)
{
	v->a[47260] = sym_comment;
	v->a[47261] = actions(1560);
	v->a[47262] = 1;
	v->a[47263] = anon_sym_LPAREN;
	v->a[47264] = actions(1562);
	v->a[47265] = 1;
	v->a[47266] = anon_sym_BANG;
	v->a[47267] = actions(1570);
	v->a[47268] = 1;
	v->a[47269] = anon_sym_TILDE;
	v->a[47270] = actions(1572);
	v->a[47271] = 1;
	v->a[47272] = anon_sym_DOLLAR;
	v->a[47273] = actions(1574);
	v->a[47274] = 1;
	v->a[47275] = anon_sym_DQUOTE;
	v->a[47276] = actions(1578);
	v->a[47277] = 1;
	v->a[47278] = anon_sym_DOLLAR_LBRACE;
	v->a[47279] = actions(1580);
	small_parse_table_2364(v);
}

void	small_parse_table_2364(t_small_parse_table_array *v)
{
	v->a[47280] = 1;
	v->a[47281] = anon_sym_DOLLAR_LPAREN;
	v->a[47282] = actions(1582);
	v->a[47283] = 1;
	v->a[47284] = anon_sym_BQUOTE;
	v->a[47285] = actions(1584);
	v->a[47286] = 1;
	v->a[47287] = sym_variable_name;
	v->a[47288] = actions(1718);
	v->a[47289] = 1;
	v->a[47290] = anon_sym_RPAREN_RPAREN;
	v->a[47291] = actions(1566);
	v->a[47292] = 2;
	v->a[47293] = anon_sym_PLUS_PLUS;
	v->a[47294] = anon_sym_DASH_DASH;
	v->a[47295] = actions(1568);
	v->a[47296] = 2;
	v->a[47297] = anon_sym_DASH2;
	v->a[47298] = anon_sym_PLUS2;
	v->a[47299] = actions(1576);
	small_parse_table_2365(v);
}

/* EOF small_parse_table_472.c */
