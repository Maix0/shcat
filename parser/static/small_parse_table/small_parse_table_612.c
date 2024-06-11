/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_612.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3060(t_small_parse_table_array *v)
{
	v->a[61200] = state(365);
	v->a[61201] = 3;
	v->a[61202] = sym_string;
	v->a[61203] = sym_simple_expansion;
	v->a[61204] = sym_expansion;
	v->a[61205] = state(513);
	v->a[61206] = 8;
	v->a[61207] = sym__arithmetic_expression;
	v->a[61208] = sym_arithmetic_literal;
	v->a[61209] = sym_arithmetic_binary_expression;
	v->a[61210] = sym_arithmetic_ternary_expression;
	v->a[61211] = sym_arithmetic_unary_expression;
	v->a[61212] = sym_arithmetic_postfix_expression;
	v->a[61213] = sym_arithmetic_parenthesized_expression;
	v->a[61214] = sym_command_substitution;
	v->a[61215] = 16;
	v->a[61216] = actions(1094);
	v->a[61217] = 1;
	v->a[61218] = sym_comment;
	v->a[61219] = actions(1869);
	small_parse_table_3061(v);
}

void	small_parse_table_3061(t_small_parse_table_array *v)
{
	v->a[61220] = 1;
	v->a[61221] = anon_sym_LPAREN;
	v->a[61222] = actions(1871);
	v->a[61223] = 1;
	v->a[61224] = anon_sym_BANG;
	v->a[61225] = actions(1879);
	v->a[61226] = 1;
	v->a[61227] = anon_sym_TILDE;
	v->a[61228] = actions(1881);
	v->a[61229] = 1;
	v->a[61230] = anon_sym_DOLLAR;
	v->a[61231] = actions(1883);
	v->a[61232] = 1;
	v->a[61233] = anon_sym_DQUOTE;
	v->a[61234] = actions(1887);
	v->a[61235] = 1;
	v->a[61236] = anon_sym_DOLLAR_LBRACE;
	v->a[61237] = actions(1889);
	v->a[61238] = 1;
	v->a[61239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3062(v);
}

void	small_parse_table_3062(t_small_parse_table_array *v)
{
	v->a[61240] = actions(1891);
	v->a[61241] = 1;
	v->a[61242] = anon_sym_BQUOTE;
	v->a[61243] = actions(1893);
	v->a[61244] = 1;
	v->a[61245] = sym_variable_name;
	v->a[61246] = actions(1901);
	v->a[61247] = 1;
	v->a[61248] = anon_sym_RPAREN_RPAREN;
	v->a[61249] = actions(1875);
	v->a[61250] = 2;
	v->a[61251] = anon_sym_PLUS_PLUS;
	v->a[61252] = anon_sym_DASH_DASH;
	v->a[61253] = actions(1877);
	v->a[61254] = 2;
	v->a[61255] = anon_sym_DASH2;
	v->a[61256] = anon_sym_PLUS2;
	v->a[61257] = actions(1885);
	v->a[61258] = 2;
	v->a[61259] = sym_number;
	small_parse_table_3063(v);
}

void	small_parse_table_3063(t_small_parse_table_array *v)
{
	v->a[61260] = aux_sym__simple_variable_name_token1;
	v->a[61261] = state(365);
	v->a[61262] = 3;
	v->a[61263] = sym_string;
	v->a[61264] = sym_simple_expansion;
	v->a[61265] = sym_expansion;
	v->a[61266] = state(427);
	v->a[61267] = 8;
	v->a[61268] = sym__arithmetic_expression;
	v->a[61269] = sym_arithmetic_literal;
	v->a[61270] = sym_arithmetic_binary_expression;
	v->a[61271] = sym_arithmetic_ternary_expression;
	v->a[61272] = sym_arithmetic_unary_expression;
	v->a[61273] = sym_arithmetic_postfix_expression;
	v->a[61274] = sym_arithmetic_parenthesized_expression;
	v->a[61275] = sym_command_substitution;
	v->a[61276] = 16;
	v->a[61277] = actions(1094);
	v->a[61278] = 1;
	v->a[61279] = sym_comment;
	small_parse_table_3064(v);
}

void	small_parse_table_3064(t_small_parse_table_array *v)
{
	v->a[61280] = actions(1869);
	v->a[61281] = 1;
	v->a[61282] = anon_sym_LPAREN;
	v->a[61283] = actions(1871);
	v->a[61284] = 1;
	v->a[61285] = anon_sym_BANG;
	v->a[61286] = actions(1879);
	v->a[61287] = 1;
	v->a[61288] = anon_sym_TILDE;
	v->a[61289] = actions(1881);
	v->a[61290] = 1;
	v->a[61291] = anon_sym_DOLLAR;
	v->a[61292] = actions(1883);
	v->a[61293] = 1;
	v->a[61294] = anon_sym_DQUOTE;
	v->a[61295] = actions(1887);
	v->a[61296] = 1;
	v->a[61297] = anon_sym_DOLLAR_LBRACE;
	v->a[61298] = actions(1889);
	v->a[61299] = 1;
	small_parse_table_3065(v);
}

/* EOF small_parse_table_612.c */
