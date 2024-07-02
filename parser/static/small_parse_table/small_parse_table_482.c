/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_482.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2410(t_small_parse_table_array *v)
{
	v->a[48200] = 1;
	v->a[48201] = anon_sym_LPAREN;
	v->a[48202] = actions(1732);
	v->a[48203] = 1;
	v->a[48204] = anon_sym_BANG;
	v->a[48205] = actions(1738);
	v->a[48206] = 1;
	v->a[48207] = anon_sym_TILDE;
	v->a[48208] = actions(1740);
	v->a[48209] = 1;
	v->a[48210] = anon_sym_DOLLAR;
	v->a[48211] = actions(1742);
	v->a[48212] = 1;
	v->a[48213] = anon_sym_DQUOTE;
	v->a[48214] = actions(1746);
	v->a[48215] = 1;
	v->a[48216] = anon_sym_DOLLAR_LBRACE;
	v->a[48217] = actions(1748);
	v->a[48218] = 1;
	v->a[48219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2411(v);
}

void	small_parse_table_2411(t_small_parse_table_array *v)
{
	v->a[48220] = actions(1750);
	v->a[48221] = 1;
	v->a[48222] = anon_sym_BQUOTE;
	v->a[48223] = actions(1752);
	v->a[48224] = 1;
	v->a[48225] = sym_variable_name;
	v->a[48226] = actions(1734);
	v->a[48227] = 2;
	v->a[48228] = anon_sym_PLUS_PLUS;
	v->a[48229] = anon_sym_DASH_DASH;
	v->a[48230] = actions(1736);
	v->a[48231] = 2;
	v->a[48232] = anon_sym_DASH2;
	v->a[48233] = anon_sym_PLUS2;
	v->a[48234] = actions(1744);
	v->a[48235] = 2;
	v->a[48236] = sym_number;
	v->a[48237] = aux_sym__simple_variable_name_token1;
	v->a[48238] = state(264);
	v->a[48239] = 3;
	small_parse_table_2412(v);
}

void	small_parse_table_2412(t_small_parse_table_array *v)
{
	v->a[48240] = sym_string;
	v->a[48241] = sym_simple_expansion;
	v->a[48242] = sym_expansion;
	v->a[48243] = state(319);
	v->a[48244] = 8;
	v->a[48245] = sym__arithmetic_expression;
	v->a[48246] = sym_arithmetic_literal;
	v->a[48247] = sym_arithmetic_binary_expression;
	v->a[48248] = sym_arithmetic_ternary_expression;
	v->a[48249] = sym_arithmetic_unary_expression;
	v->a[48250] = sym_arithmetic_postfix_expression;
	v->a[48251] = sym_arithmetic_parenthesized_expression;
	v->a[48252] = sym_command_substitution;
	v->a[48253] = 15;
	v->a[48254] = actions(680);
	v->a[48255] = 1;
	v->a[48256] = sym_comment;
	v->a[48257] = actions(1730);
	v->a[48258] = 1;
	v->a[48259] = anon_sym_LPAREN;
	small_parse_table_2413(v);
}

void	small_parse_table_2413(t_small_parse_table_array *v)
{
	v->a[48260] = actions(1732);
	v->a[48261] = 1;
	v->a[48262] = anon_sym_BANG;
	v->a[48263] = actions(1738);
	v->a[48264] = 1;
	v->a[48265] = anon_sym_TILDE;
	v->a[48266] = actions(1740);
	v->a[48267] = 1;
	v->a[48268] = anon_sym_DOLLAR;
	v->a[48269] = actions(1742);
	v->a[48270] = 1;
	v->a[48271] = anon_sym_DQUOTE;
	v->a[48272] = actions(1746);
	v->a[48273] = 1;
	v->a[48274] = anon_sym_DOLLAR_LBRACE;
	v->a[48275] = actions(1748);
	v->a[48276] = 1;
	v->a[48277] = anon_sym_DOLLAR_LPAREN;
	v->a[48278] = actions(1750);
	v->a[48279] = 1;
	small_parse_table_2414(v);
}

void	small_parse_table_2414(t_small_parse_table_array *v)
{
	v->a[48280] = anon_sym_BQUOTE;
	v->a[48281] = actions(1752);
	v->a[48282] = 1;
	v->a[48283] = sym_variable_name;
	v->a[48284] = actions(1734);
	v->a[48285] = 2;
	v->a[48286] = anon_sym_PLUS_PLUS;
	v->a[48287] = anon_sym_DASH_DASH;
	v->a[48288] = actions(1736);
	v->a[48289] = 2;
	v->a[48290] = anon_sym_DASH2;
	v->a[48291] = anon_sym_PLUS2;
	v->a[48292] = actions(1744);
	v->a[48293] = 2;
	v->a[48294] = sym_number;
	v->a[48295] = aux_sym__simple_variable_name_token1;
	v->a[48296] = state(264);
	v->a[48297] = 3;
	v->a[48298] = sym_string;
	v->a[48299] = sym_simple_expansion;
	small_parse_table_2415(v);
}

/* EOF small_parse_table_482.c */
