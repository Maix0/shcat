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
	v->a[47200] = actions(1586);
	v->a[47201] = 1;
	v->a[47202] = anon_sym_DOLLAR;
	v->a[47203] = actions(1588);
	v->a[47204] = 1;
	v->a[47205] = anon_sym_DQUOTE;
	v->a[47206] = actions(1592);
	v->a[47207] = 1;
	v->a[47208] = anon_sym_DOLLAR_LBRACE;
	v->a[47209] = actions(1594);
	v->a[47210] = 1;
	v->a[47211] = anon_sym_DOLLAR_LPAREN;
	v->a[47212] = actions(1596);
	v->a[47213] = 1;
	v->a[47214] = anon_sym_BQUOTE;
	v->a[47215] = actions(1598);
	v->a[47216] = 1;
	v->a[47217] = sym_variable_name;
	v->a[47218] = actions(1699);
	v->a[47219] = 1;
	small_parse_table_2361(v);
}

void	small_parse_table_2361(t_small_parse_table_array *v)
{
	v->a[47220] = anon_sym_RPAREN_RPAREN;
	v->a[47221] = actions(1580);
	v->a[47222] = 2;
	v->a[47223] = anon_sym_PLUS_PLUS;
	v->a[47224] = anon_sym_DASH_DASH;
	v->a[47225] = actions(1582);
	v->a[47226] = 2;
	v->a[47227] = anon_sym_DASH2;
	v->a[47228] = anon_sym_PLUS2;
	v->a[47229] = actions(1590);
	v->a[47230] = 2;
	v->a[47231] = sym_number;
	v->a[47232] = aux_sym__simple_variable_name_token1;
	v->a[47233] = state(238);
	v->a[47234] = 3;
	v->a[47235] = sym_string;
	v->a[47236] = sym_simple_expansion;
	v->a[47237] = sym_expansion;
	v->a[47238] = state(291);
	v->a[47239] = 8;
	small_parse_table_2362(v);
}

void	small_parse_table_2362(t_small_parse_table_array *v)
{
	v->a[47240] = sym__arithmetic_expression;
	v->a[47241] = sym_arithmetic_literal;
	v->a[47242] = sym_arithmetic_binary_expression;
	v->a[47243] = sym_arithmetic_ternary_expression;
	v->a[47244] = sym_arithmetic_unary_expression;
	v->a[47245] = sym_arithmetic_postfix_expression;
	v->a[47246] = sym_arithmetic_parenthesized_expression;
	v->a[47247] = sym_command_substitution;
	v->a[47248] = 4;
	v->a[47249] = actions(3);
	v->a[47250] = 1;
	v->a[47251] = sym_comment;
	v->a[47252] = actions(1661);
	v->a[47253] = 1;
	v->a[47254] = ts_builtin_sym_end;
	v->a[47255] = actions(1426);
	v->a[47256] = 2;
	v->a[47257] = sym_file_descriptor;
	v->a[47258] = sym_variable_name;
	v->a[47259] = actions(1422);
	small_parse_table_2363(v);
}

void	small_parse_table_2363(t_small_parse_table_array *v)
{
	v->a[47260] = 24;
	v->a[47261] = anon_sym_for;
	v->a[47262] = anon_sym_while;
	v->a[47263] = anon_sym_until;
	v->a[47264] = anon_sym_if;
	v->a[47265] = anon_sym_case;
	v->a[47266] = anon_sym_LPAREN;
	v->a[47267] = anon_sym_LBRACE;
	v->a[47268] = anon_sym_BANG;
	v->a[47269] = anon_sym_LT;
	v->a[47270] = anon_sym_GT;
	v->a[47271] = anon_sym_GT_GT;
	v->a[47272] = anon_sym_LT_AMP;
	v->a[47273] = anon_sym_GT_AMP;
	v->a[47274] = anon_sym_GT_PIPE;
	v->a[47275] = anon_sym_LT_GT;
	v->a[47276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47277] = anon_sym_DOLLAR;
	v->a[47278] = anon_sym_DQUOTE;
	v->a[47279] = sym_raw_string;
	small_parse_table_2364(v);
}

void	small_parse_table_2364(t_small_parse_table_array *v)
{
	v->a[47280] = sym_number;
	v->a[47281] = anon_sym_DOLLAR_LBRACE;
	v->a[47282] = anon_sym_DOLLAR_LPAREN;
	v->a[47283] = anon_sym_BQUOTE;
	v->a[47284] = sym_word;
	v->a[47285] = 4;
	v->a[47286] = actions(3);
	v->a[47287] = 1;
	v->a[47288] = sym_comment;
	v->a[47289] = actions(1661);
	v->a[47290] = 1;
	v->a[47291] = ts_builtin_sym_end;
	v->a[47292] = actions(1426);
	v->a[47293] = 2;
	v->a[47294] = sym_file_descriptor;
	v->a[47295] = sym_variable_name;
	v->a[47296] = actions(1422);
	v->a[47297] = 24;
	v->a[47298] = anon_sym_for;
	v->a[47299] = anon_sym_while;
	small_parse_table_2365(v);
}

/* EOF small_parse_table_472.c */
