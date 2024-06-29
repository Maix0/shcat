/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_562.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2810(t_small_parse_table_array *v)
{
	v->a[56200] = sym_number;
	v->a[56201] = anon_sym_DOLLAR_LBRACE;
	v->a[56202] = anon_sym_DOLLAR_LPAREN;
	v->a[56203] = anon_sym_BQUOTE;
	v->a[56204] = sym_word;
	v->a[56205] = 16;
	v->a[56206] = actions(1074);
	v->a[56207] = 1;
	v->a[56208] = sym_comment;
	v->a[56209] = actions(1831);
	v->a[56210] = 1;
	v->a[56211] = anon_sym_LPAREN;
	v->a[56212] = actions(1833);
	v->a[56213] = 1;
	v->a[56214] = anon_sym_BANG;
	v->a[56215] = actions(1841);
	v->a[56216] = 1;
	v->a[56217] = anon_sym_TILDE;
	v->a[56218] = actions(1843);
	v->a[56219] = 1;
	small_parse_table_2811(v);
}

void	small_parse_table_2811(t_small_parse_table_array *v)
{
	v->a[56220] = anon_sym_DOLLAR;
	v->a[56221] = actions(1845);
	v->a[56222] = 1;
	v->a[56223] = anon_sym_DQUOTE;
	v->a[56224] = actions(1849);
	v->a[56225] = 1;
	v->a[56226] = anon_sym_DOLLAR_LBRACE;
	v->a[56227] = actions(1851);
	v->a[56228] = 1;
	v->a[56229] = anon_sym_DOLLAR_LPAREN;
	v->a[56230] = actions(1853);
	v->a[56231] = 1;
	v->a[56232] = anon_sym_BQUOTE;
	v->a[56233] = actions(1855);
	v->a[56234] = 1;
	v->a[56235] = sym_variable_name;
	v->a[56236] = actions(1913);
	v->a[56237] = 1;
	v->a[56238] = anon_sym_RPAREN_RPAREN;
	v->a[56239] = actions(1837);
	small_parse_table_2812(v);
}

void	small_parse_table_2812(t_small_parse_table_array *v)
{
	v->a[56240] = 2;
	v->a[56241] = anon_sym_PLUS_PLUS;
	v->a[56242] = anon_sym_DASH_DASH;
	v->a[56243] = actions(1839);
	v->a[56244] = 2;
	v->a[56245] = anon_sym_DASH2;
	v->a[56246] = anon_sym_PLUS2;
	v->a[56247] = actions(1847);
	v->a[56248] = 2;
	v->a[56249] = sym_number;
	v->a[56250] = aux_sym__simple_variable_name_token1;
	v->a[56251] = state(370);
	v->a[56252] = 3;
	v->a[56253] = sym_string;
	v->a[56254] = sym_simple_expansion;
	v->a[56255] = sym_expansion;
	v->a[56256] = state(502);
	v->a[56257] = 8;
	v->a[56258] = sym__arithmetic_expression;
	v->a[56259] = sym_arithmetic_literal;
	small_parse_table_2813(v);
}

void	small_parse_table_2813(t_small_parse_table_array *v)
{
	v->a[56260] = sym_arithmetic_binary_expression;
	v->a[56261] = sym_arithmetic_ternary_expression;
	v->a[56262] = sym_arithmetic_unary_expression;
	v->a[56263] = sym_arithmetic_postfix_expression;
	v->a[56264] = sym_arithmetic_parenthesized_expression;
	v->a[56265] = sym_command_substitution;
	v->a[56266] = 16;
	v->a[56267] = actions(1074);
	v->a[56268] = 1;
	v->a[56269] = sym_comment;
	v->a[56270] = actions(1831);
	v->a[56271] = 1;
	v->a[56272] = anon_sym_LPAREN;
	v->a[56273] = actions(1833);
	v->a[56274] = 1;
	v->a[56275] = anon_sym_BANG;
	v->a[56276] = actions(1841);
	v->a[56277] = 1;
	v->a[56278] = anon_sym_TILDE;
	v->a[56279] = actions(1843);
	small_parse_table_2814(v);
}

void	small_parse_table_2814(t_small_parse_table_array *v)
{
	v->a[56280] = 1;
	v->a[56281] = anon_sym_DOLLAR;
	v->a[56282] = actions(1845);
	v->a[56283] = 1;
	v->a[56284] = anon_sym_DQUOTE;
	v->a[56285] = actions(1849);
	v->a[56286] = 1;
	v->a[56287] = anon_sym_DOLLAR_LBRACE;
	v->a[56288] = actions(1851);
	v->a[56289] = 1;
	v->a[56290] = anon_sym_DOLLAR_LPAREN;
	v->a[56291] = actions(1853);
	v->a[56292] = 1;
	v->a[56293] = anon_sym_BQUOTE;
	v->a[56294] = actions(1855);
	v->a[56295] = 1;
	v->a[56296] = sym_variable_name;
	v->a[56297] = actions(1915);
	v->a[56298] = 1;
	v->a[56299] = anon_sym_RPAREN_RPAREN;
	small_parse_table_2815(v);
}

/* EOF small_parse_table_562.c */
