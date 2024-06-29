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
	v->a[58500] = anon_sym_BANG;
	v->a[58501] = actions(1959);
	v->a[58502] = 1;
	v->a[58503] = anon_sym_TILDE;
	v->a[58504] = actions(1961);
	v->a[58505] = 1;
	v->a[58506] = anon_sym_DOLLAR;
	v->a[58507] = actions(1963);
	v->a[58508] = 1;
	v->a[58509] = anon_sym_DQUOTE;
	v->a[58510] = actions(1967);
	v->a[58511] = 1;
	v->a[58512] = anon_sym_DOLLAR_LBRACE;
	v->a[58513] = actions(1969);
	v->a[58514] = 1;
	v->a[58515] = anon_sym_DOLLAR_LPAREN;
	v->a[58516] = actions(1971);
	v->a[58517] = 1;
	v->a[58518] = anon_sym_BQUOTE;
	v->a[58519] = actions(1973);
	small_parse_table_2926(v);
}

void	small_parse_table_2926(t_small_parse_table_array *v)
{
	v->a[58520] = 1;
	v->a[58521] = sym_variable_name;
	v->a[58522] = actions(1955);
	v->a[58523] = 2;
	v->a[58524] = anon_sym_PLUS_PLUS;
	v->a[58525] = anon_sym_DASH_DASH;
	v->a[58526] = actions(1957);
	v->a[58527] = 2;
	v->a[58528] = anon_sym_DASH2;
	v->a[58529] = anon_sym_PLUS2;
	v->a[58530] = actions(1965);
	v->a[58531] = 2;
	v->a[58532] = sym_number;
	v->a[58533] = aux_sym__simple_variable_name_token1;
	v->a[58534] = state(462);
	v->a[58535] = 3;
	v->a[58536] = sym_string;
	v->a[58537] = sym_simple_expansion;
	v->a[58538] = sym_expansion;
	v->a[58539] = state(577);
	small_parse_table_2927(v);
}

void	small_parse_table_2927(t_small_parse_table_array *v)
{
	v->a[58540] = 8;
	v->a[58541] = sym__arithmetic_expression;
	v->a[58542] = sym_arithmetic_literal;
	v->a[58543] = sym_arithmetic_binary_expression;
	v->a[58544] = sym_arithmetic_ternary_expression;
	v->a[58545] = sym_arithmetic_unary_expression;
	v->a[58546] = sym_arithmetic_postfix_expression;
	v->a[58547] = sym_arithmetic_parenthesized_expression;
	v->a[58548] = sym_command_substitution;
	v->a[58549] = 15;
	v->a[58550] = actions(1074);
	v->a[58551] = 1;
	v->a[58552] = sym_comment;
	v->a[58553] = actions(1951);
	v->a[58554] = 1;
	v->a[58555] = anon_sym_LPAREN;
	v->a[58556] = actions(1953);
	v->a[58557] = 1;
	v->a[58558] = anon_sym_BANG;
	v->a[58559] = actions(1959);
	small_parse_table_2928(v);
}

void	small_parse_table_2928(t_small_parse_table_array *v)
{
	v->a[58560] = 1;
	v->a[58561] = anon_sym_TILDE;
	v->a[58562] = actions(1961);
	v->a[58563] = 1;
	v->a[58564] = anon_sym_DOLLAR;
	v->a[58565] = actions(1963);
	v->a[58566] = 1;
	v->a[58567] = anon_sym_DQUOTE;
	v->a[58568] = actions(1967);
	v->a[58569] = 1;
	v->a[58570] = anon_sym_DOLLAR_LBRACE;
	v->a[58571] = actions(1969);
	v->a[58572] = 1;
	v->a[58573] = anon_sym_DOLLAR_LPAREN;
	v->a[58574] = actions(1971);
	v->a[58575] = 1;
	v->a[58576] = anon_sym_BQUOTE;
	v->a[58577] = actions(1973);
	v->a[58578] = 1;
	v->a[58579] = sym_variable_name;
	small_parse_table_2929(v);
}

void	small_parse_table_2929(t_small_parse_table_array *v)
{
	v->a[58580] = actions(1955);
	v->a[58581] = 2;
	v->a[58582] = anon_sym_PLUS_PLUS;
	v->a[58583] = anon_sym_DASH_DASH;
	v->a[58584] = actions(1957);
	v->a[58585] = 2;
	v->a[58586] = anon_sym_DASH2;
	v->a[58587] = anon_sym_PLUS2;
	v->a[58588] = actions(1965);
	v->a[58589] = 2;
	v->a[58590] = sym_number;
	v->a[58591] = aux_sym__simple_variable_name_token1;
	v->a[58592] = state(462);
	v->a[58593] = 3;
	v->a[58594] = sym_string;
	v->a[58595] = sym_simple_expansion;
	v->a[58596] = sym_expansion;
	v->a[58597] = state(476);
	v->a[58598] = 8;
	v->a[58599] = sym__arithmetic_expression;
	small_parse_table_2930(v);
}

/* EOF small_parse_table_585.c */
