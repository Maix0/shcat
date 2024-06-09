/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_585.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2925(t_small_parse_table_array *v)
{
	v->a[58500] = actions(1997);
	v->a[58501] = 1;
	v->a[58502] = aux_sym_number_token2;
	v->a[58503] = actions(1999);
	v->a[58504] = 1;
	v->a[58505] = anon_sym_DOLLAR_LBRACE;
	v->a[58506] = actions(2001);
	v->a[58507] = 1;
	v->a[58508] = anon_sym_DOLLAR_LPAREN;
	v->a[58509] = actions(2003);
	v->a[58510] = 1;
	v->a[58511] = anon_sym_BQUOTE;
	v->a[58512] = actions(2005);
	v->a[58513] = 1;
	v->a[58514] = aux_sym__simple_variable_name_token1;
	v->a[58515] = actions(2007);
	v->a[58516] = 1;
	v->a[58517] = sym_variable_name;
	v->a[58518] = actions(1985);
	v->a[58519] = 2;
	small_parse_table_2926(v);
}

void	small_parse_table_2926(t_small_parse_table_array *v)
{
	v->a[58520] = anon_sym_PLUS_PLUS;
	v->a[58521] = anon_sym_DASH_DASH;
	v->a[58522] = actions(1987);
	v->a[58523] = 2;
	v->a[58524] = anon_sym_DASH2;
	v->a[58525] = anon_sym_PLUS2;
	v->a[58526] = state(530);
	v->a[58527] = 4;
	v->a[58528] = sym_string;
	v->a[58529] = sym_number;
	v->a[58530] = sym_simple_expansion;
	v->a[58531] = sym_expansion;
	v->a[58532] = state(414);
	v->a[58533] = 8;
	v->a[58534] = sym__arithmetic_expression;
	v->a[58535] = sym_arithmetic_literal;
	v->a[58536] = sym_arithmetic_binary_expression;
	v->a[58537] = sym_arithmetic_ternary_expression;
	v->a[58538] = sym_arithmetic_unary_expression;
	v->a[58539] = sym_arithmetic_postfix_expression;
	small_parse_table_2927(v);
}

void	small_parse_table_2927(t_small_parse_table_array *v)
{
	v->a[58540] = sym_arithmetic_parenthesized_expression;
	v->a[58541] = sym_command_substitution;
	v->a[58542] = 17;
	v->a[58543] = actions(1404);
	v->a[58544] = 1;
	v->a[58545] = sym_comment;
	v->a[58546] = actions(2077);
	v->a[58547] = 1;
	v->a[58548] = anon_sym_LPAREN;
	v->a[58549] = actions(2079);
	v->a[58550] = 1;
	v->a[58551] = anon_sym_BANG;
	v->a[58552] = actions(2085);
	v->a[58553] = 1;
	v->a[58554] = anon_sym_TILDE;
	v->a[58555] = actions(2087);
	v->a[58556] = 1;
	v->a[58557] = anon_sym_DOLLAR;
	v->a[58558] = actions(2089);
	v->a[58559] = 1;
	small_parse_table_2928(v);
}

void	small_parse_table_2928(t_small_parse_table_array *v)
{
	v->a[58560] = anon_sym_DQUOTE;
	v->a[58561] = actions(2091);
	v->a[58562] = 1;
	v->a[58563] = aux_sym_number_token1;
	v->a[58564] = actions(2093);
	v->a[58565] = 1;
	v->a[58566] = aux_sym_number_token2;
	v->a[58567] = actions(2095);
	v->a[58568] = 1;
	v->a[58569] = anon_sym_DOLLAR_LBRACE;
	v->a[58570] = actions(2097);
	v->a[58571] = 1;
	v->a[58572] = anon_sym_DOLLAR_LPAREN;
	v->a[58573] = actions(2099);
	v->a[58574] = 1;
	v->a[58575] = anon_sym_BQUOTE;
	v->a[58576] = actions(2101);
	v->a[58577] = 1;
	v->a[58578] = aux_sym__simple_variable_name_token1;
	v->a[58579] = actions(2103);
	small_parse_table_2929(v);
}

void	small_parse_table_2929(t_small_parse_table_array *v)
{
	v->a[58580] = 1;
	v->a[58581] = sym_variable_name;
	v->a[58582] = actions(2081);
	v->a[58583] = 2;
	v->a[58584] = anon_sym_PLUS_PLUS;
	v->a[58585] = anon_sym_DASH_DASH;
	v->a[58586] = actions(2083);
	v->a[58587] = 2;
	v->a[58588] = anon_sym_DASH2;
	v->a[58589] = anon_sym_PLUS2;
	v->a[58590] = state(588);
	v->a[58591] = 4;
	v->a[58592] = sym_string;
	v->a[58593] = sym_number;
	v->a[58594] = sym_simple_expansion;
	v->a[58595] = sym_expansion;
	v->a[58596] = state(601);
	v->a[58597] = 8;
	v->a[58598] = sym__arithmetic_expression;
	v->a[58599] = sym_arithmetic_literal;
	small_parse_table_2930(v);
}

/* EOF small_parse_table_585.c */
