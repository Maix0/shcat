/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_483.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2415(t_small_parse_table_array *v)
{
	v->a[48300] = sym_expansion;
	v->a[48301] = state(321);
	v->a[48302] = 8;
	v->a[48303] = sym__arithmetic_expression;
	v->a[48304] = sym_arithmetic_literal;
	v->a[48305] = sym_arithmetic_binary_expression;
	v->a[48306] = sym_arithmetic_ternary_expression;
	v->a[48307] = sym_arithmetic_unary_expression;
	v->a[48308] = sym_arithmetic_postfix_expression;
	v->a[48309] = sym_arithmetic_parenthesized_expression;
	v->a[48310] = sym_command_substitution;
	v->a[48311] = 15;
	v->a[48312] = actions(680);
	v->a[48313] = 1;
	v->a[48314] = sym_comment;
	v->a[48315] = actions(1730);
	v->a[48316] = 1;
	v->a[48317] = anon_sym_LPAREN;
	v->a[48318] = actions(1732);
	v->a[48319] = 1;
	small_parse_table_2416(v);
}

void	small_parse_table_2416(t_small_parse_table_array *v)
{
	v->a[48320] = anon_sym_BANG;
	v->a[48321] = actions(1738);
	v->a[48322] = 1;
	v->a[48323] = anon_sym_TILDE;
	v->a[48324] = actions(1740);
	v->a[48325] = 1;
	v->a[48326] = anon_sym_DOLLAR;
	v->a[48327] = actions(1742);
	v->a[48328] = 1;
	v->a[48329] = anon_sym_DQUOTE;
	v->a[48330] = actions(1746);
	v->a[48331] = 1;
	v->a[48332] = anon_sym_DOLLAR_LBRACE;
	v->a[48333] = actions(1748);
	v->a[48334] = 1;
	v->a[48335] = anon_sym_DOLLAR_LPAREN;
	v->a[48336] = actions(1750);
	v->a[48337] = 1;
	v->a[48338] = anon_sym_BQUOTE;
	v->a[48339] = actions(1752);
	small_parse_table_2417(v);
}

void	small_parse_table_2417(t_small_parse_table_array *v)
{
	v->a[48340] = 1;
	v->a[48341] = sym_variable_name;
	v->a[48342] = actions(1734);
	v->a[48343] = 2;
	v->a[48344] = anon_sym_PLUS_PLUS;
	v->a[48345] = anon_sym_DASH_DASH;
	v->a[48346] = actions(1736);
	v->a[48347] = 2;
	v->a[48348] = anon_sym_DASH2;
	v->a[48349] = anon_sym_PLUS2;
	v->a[48350] = actions(1744);
	v->a[48351] = 2;
	v->a[48352] = sym_number;
	v->a[48353] = aux_sym__simple_variable_name_token1;
	v->a[48354] = state(264);
	v->a[48355] = 3;
	v->a[48356] = sym_string;
	v->a[48357] = sym_simple_expansion;
	v->a[48358] = sym_expansion;
	v->a[48359] = state(323);
	small_parse_table_2418(v);
}

void	small_parse_table_2418(t_small_parse_table_array *v)
{
	v->a[48360] = 8;
	v->a[48361] = sym__arithmetic_expression;
	v->a[48362] = sym_arithmetic_literal;
	v->a[48363] = sym_arithmetic_binary_expression;
	v->a[48364] = sym_arithmetic_ternary_expression;
	v->a[48365] = sym_arithmetic_unary_expression;
	v->a[48366] = sym_arithmetic_postfix_expression;
	v->a[48367] = sym_arithmetic_parenthesized_expression;
	v->a[48368] = sym_command_substitution;
	v->a[48369] = 15;
	v->a[48370] = actions(680);
	v->a[48371] = 1;
	v->a[48372] = sym_comment;
	v->a[48373] = actions(1730);
	v->a[48374] = 1;
	v->a[48375] = anon_sym_LPAREN;
	v->a[48376] = actions(1732);
	v->a[48377] = 1;
	v->a[48378] = anon_sym_BANG;
	v->a[48379] = actions(1738);
	small_parse_table_2419(v);
}

void	small_parse_table_2419(t_small_parse_table_array *v)
{
	v->a[48380] = 1;
	v->a[48381] = anon_sym_TILDE;
	v->a[48382] = actions(1740);
	v->a[48383] = 1;
	v->a[48384] = anon_sym_DOLLAR;
	v->a[48385] = actions(1742);
	v->a[48386] = 1;
	v->a[48387] = anon_sym_DQUOTE;
	v->a[48388] = actions(1746);
	v->a[48389] = 1;
	v->a[48390] = anon_sym_DOLLAR_LBRACE;
	v->a[48391] = actions(1748);
	v->a[48392] = 1;
	v->a[48393] = anon_sym_DOLLAR_LPAREN;
	v->a[48394] = actions(1750);
	v->a[48395] = 1;
	v->a[48396] = anon_sym_BQUOTE;
	v->a[48397] = actions(1752);
	v->a[48398] = 1;
	v->a[48399] = sym_variable_name;
	small_parse_table_2420(v);
}

/* EOF small_parse_table_483.c */
