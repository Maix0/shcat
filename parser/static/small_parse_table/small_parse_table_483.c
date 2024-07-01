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
	v->a[48300] = 1;
	v->a[48301] = anon_sym_DOLLAR_LPAREN;
	v->a[48302] = actions(1582);
	v->a[48303] = 1;
	v->a[48304] = anon_sym_BQUOTE;
	v->a[48305] = actions(1584);
	v->a[48306] = 1;
	v->a[48307] = sym_variable_name;
	v->a[48308] = actions(1566);
	v->a[48309] = 2;
	v->a[48310] = anon_sym_PLUS_PLUS;
	v->a[48311] = anon_sym_DASH_DASH;
	v->a[48312] = actions(1568);
	v->a[48313] = 2;
	v->a[48314] = anon_sym_DASH2;
	v->a[48315] = anon_sym_PLUS2;
	v->a[48316] = actions(1576);
	v->a[48317] = 2;
	v->a[48318] = sym_number;
	v->a[48319] = aux_sym__simple_variable_name_token1;
	small_parse_table_2416(v);
}

void	small_parse_table_2416(t_small_parse_table_array *v)
{
	v->a[48320] = state(255);
	v->a[48321] = 3;
	v->a[48322] = sym_string;
	v->a[48323] = sym_simple_expansion;
	v->a[48324] = sym_expansion;
	v->a[48325] = state(207);
	v->a[48326] = 8;
	v->a[48327] = sym__arithmetic_expression;
	v->a[48328] = sym_arithmetic_literal;
	v->a[48329] = sym_arithmetic_binary_expression;
	v->a[48330] = sym_arithmetic_ternary_expression;
	v->a[48331] = sym_arithmetic_unary_expression;
	v->a[48332] = sym_arithmetic_postfix_expression;
	v->a[48333] = sym_arithmetic_parenthesized_expression;
	v->a[48334] = sym_command_substitution;
	v->a[48335] = 15;
	v->a[48336] = actions(664);
	v->a[48337] = 1;
	v->a[48338] = sym_comment;
	v->a[48339] = actions(1740);
	small_parse_table_2417(v);
}

void	small_parse_table_2417(t_small_parse_table_array *v)
{
	v->a[48340] = 1;
	v->a[48341] = anon_sym_LPAREN;
	v->a[48342] = actions(1742);
	v->a[48343] = 1;
	v->a[48344] = anon_sym_BANG;
	v->a[48345] = actions(1748);
	v->a[48346] = 1;
	v->a[48347] = anon_sym_TILDE;
	v->a[48348] = actions(1750);
	v->a[48349] = 1;
	v->a[48350] = anon_sym_DOLLAR;
	v->a[48351] = actions(1752);
	v->a[48352] = 1;
	v->a[48353] = anon_sym_DQUOTE;
	v->a[48354] = actions(1756);
	v->a[48355] = 1;
	v->a[48356] = anon_sym_DOLLAR_LBRACE;
	v->a[48357] = actions(1758);
	v->a[48358] = 1;
	v->a[48359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2418(v);
}

void	small_parse_table_2418(t_small_parse_table_array *v)
{
	v->a[48360] = actions(1760);
	v->a[48361] = 1;
	v->a[48362] = anon_sym_BQUOTE;
	v->a[48363] = actions(1762);
	v->a[48364] = 1;
	v->a[48365] = sym_variable_name;
	v->a[48366] = actions(1744);
	v->a[48367] = 2;
	v->a[48368] = anon_sym_PLUS_PLUS;
	v->a[48369] = anon_sym_DASH_DASH;
	v->a[48370] = actions(1746);
	v->a[48371] = 2;
	v->a[48372] = anon_sym_DASH2;
	v->a[48373] = anon_sym_PLUS2;
	v->a[48374] = actions(1754);
	v->a[48375] = 2;
	v->a[48376] = sym_number;
	v->a[48377] = aux_sym__simple_variable_name_token1;
	v->a[48378] = state(260);
	v->a[48379] = 3;
	small_parse_table_2419(v);
}

void	small_parse_table_2419(t_small_parse_table_array *v)
{
	v->a[48380] = sym_string;
	v->a[48381] = sym_simple_expansion;
	v->a[48382] = sym_expansion;
	v->a[48383] = state(336);
	v->a[48384] = 8;
	v->a[48385] = sym__arithmetic_expression;
	v->a[48386] = sym_arithmetic_literal;
	v->a[48387] = sym_arithmetic_binary_expression;
	v->a[48388] = sym_arithmetic_ternary_expression;
	v->a[48389] = sym_arithmetic_unary_expression;
	v->a[48390] = sym_arithmetic_postfix_expression;
	v->a[48391] = sym_arithmetic_parenthesized_expression;
	v->a[48392] = sym_command_substitution;
	v->a[48393] = 15;
	v->a[48394] = actions(664);
	v->a[48395] = 1;
	v->a[48396] = sym_comment;
	v->a[48397] = actions(1740);
	v->a[48398] = 1;
	v->a[48399] = anon_sym_LPAREN;
	small_parse_table_2420(v);
}

/* EOF small_parse_table_483.c */
