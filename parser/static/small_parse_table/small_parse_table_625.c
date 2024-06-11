/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_625.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3125(t_small_parse_table_array *v)
{
	v->a[62500] = 1;
	v->a[62501] = anon_sym_BANG;
	v->a[62502] = actions(1879);
	v->a[62503] = 1;
	v->a[62504] = anon_sym_TILDE;
	v->a[62505] = actions(1881);
	v->a[62506] = 1;
	v->a[62507] = anon_sym_DOLLAR;
	v->a[62508] = actions(1883);
	v->a[62509] = 1;
	v->a[62510] = anon_sym_DQUOTE;
	v->a[62511] = actions(1887);
	v->a[62512] = 1;
	v->a[62513] = anon_sym_DOLLAR_LBRACE;
	v->a[62514] = actions(1889);
	v->a[62515] = 1;
	v->a[62516] = anon_sym_DOLLAR_LPAREN;
	v->a[62517] = actions(1891);
	v->a[62518] = 1;
	v->a[62519] = anon_sym_BQUOTE;
	small_parse_table_3126(v);
}

void	small_parse_table_3126(t_small_parse_table_array *v)
{
	v->a[62520] = actions(1893);
	v->a[62521] = 1;
	v->a[62522] = sym_variable_name;
	v->a[62523] = actions(1937);
	v->a[62524] = 1;
	v->a[62525] = anon_sym_RPAREN_RPAREN;
	v->a[62526] = actions(1875);
	v->a[62527] = 2;
	v->a[62528] = anon_sym_PLUS_PLUS;
	v->a[62529] = anon_sym_DASH_DASH;
	v->a[62530] = actions(1877);
	v->a[62531] = 2;
	v->a[62532] = anon_sym_DASH2;
	v->a[62533] = anon_sym_PLUS2;
	v->a[62534] = actions(1885);
	v->a[62535] = 2;
	v->a[62536] = sym_number;
	v->a[62537] = aux_sym__simple_variable_name_token1;
	v->a[62538] = state(365);
	v->a[62539] = 3;
	small_parse_table_3127(v);
}

void	small_parse_table_3127(t_small_parse_table_array *v)
{
	v->a[62540] = sym_string;
	v->a[62541] = sym_simple_expansion;
	v->a[62542] = sym_expansion;
	v->a[62543] = state(430);
	v->a[62544] = 8;
	v->a[62545] = sym__arithmetic_expression;
	v->a[62546] = sym_arithmetic_literal;
	v->a[62547] = sym_arithmetic_binary_expression;
	v->a[62548] = sym_arithmetic_ternary_expression;
	v->a[62549] = sym_arithmetic_unary_expression;
	v->a[62550] = sym_arithmetic_postfix_expression;
	v->a[62551] = sym_arithmetic_parenthesized_expression;
	v->a[62552] = sym_command_substitution;
	v->a[62553] = 16;
	v->a[62554] = actions(1094);
	v->a[62555] = 1;
	v->a[62556] = sym_comment;
	v->a[62557] = actions(1869);
	v->a[62558] = 1;
	v->a[62559] = anon_sym_LPAREN;
	small_parse_table_3128(v);
}

void	small_parse_table_3128(t_small_parse_table_array *v)
{
	v->a[62560] = actions(1871);
	v->a[62561] = 1;
	v->a[62562] = anon_sym_BANG;
	v->a[62563] = actions(1879);
	v->a[62564] = 1;
	v->a[62565] = anon_sym_TILDE;
	v->a[62566] = actions(1881);
	v->a[62567] = 1;
	v->a[62568] = anon_sym_DOLLAR;
	v->a[62569] = actions(1883);
	v->a[62570] = 1;
	v->a[62571] = anon_sym_DQUOTE;
	v->a[62572] = actions(1887);
	v->a[62573] = 1;
	v->a[62574] = anon_sym_DOLLAR_LBRACE;
	v->a[62575] = actions(1889);
	v->a[62576] = 1;
	v->a[62577] = anon_sym_DOLLAR_LPAREN;
	v->a[62578] = actions(1891);
	v->a[62579] = 1;
	small_parse_table_3129(v);
}

void	small_parse_table_3129(t_small_parse_table_array *v)
{
	v->a[62580] = anon_sym_BQUOTE;
	v->a[62581] = actions(1893);
	v->a[62582] = 1;
	v->a[62583] = sym_variable_name;
	v->a[62584] = actions(1939);
	v->a[62585] = 1;
	v->a[62586] = anon_sym_RPAREN_RPAREN;
	v->a[62587] = actions(1875);
	v->a[62588] = 2;
	v->a[62589] = anon_sym_PLUS_PLUS;
	v->a[62590] = anon_sym_DASH_DASH;
	v->a[62591] = actions(1877);
	v->a[62592] = 2;
	v->a[62593] = anon_sym_DASH2;
	v->a[62594] = anon_sym_PLUS2;
	v->a[62595] = actions(1885);
	v->a[62596] = 2;
	v->a[62597] = sym_number;
	v->a[62598] = aux_sym__simple_variable_name_token1;
	v->a[62599] = state(365);
	small_parse_table_3130(v);
}

/* EOF small_parse_table_625.c */
