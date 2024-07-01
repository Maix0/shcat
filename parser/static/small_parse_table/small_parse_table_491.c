/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_491.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2455(t_small_parse_table_array *v)
{
	v->a[49100] = anon_sym_LT_GT;
	v->a[49101] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49102] = anon_sym_DOLLAR;
	v->a[49103] = anon_sym_DQUOTE;
	v->a[49104] = sym_raw_string;
	v->a[49105] = sym_number;
	v->a[49106] = anon_sym_DOLLAR_LBRACE;
	v->a[49107] = anon_sym_DOLLAR_LPAREN;
	v->a[49108] = sym_word;
	v->a[49109] = 15;
	v->a[49110] = actions(664);
	v->a[49111] = 1;
	v->a[49112] = sym_comment;
	v->a[49113] = actions(1560);
	v->a[49114] = 1;
	v->a[49115] = anon_sym_LPAREN;
	v->a[49116] = actions(1562);
	v->a[49117] = 1;
	v->a[49118] = anon_sym_BANG;
	v->a[49119] = actions(1570);
	small_parse_table_2456(v);
}

void	small_parse_table_2456(t_small_parse_table_array *v)
{
	v->a[49120] = 1;
	v->a[49121] = anon_sym_TILDE;
	v->a[49122] = actions(1572);
	v->a[49123] = 1;
	v->a[49124] = anon_sym_DOLLAR;
	v->a[49125] = actions(1574);
	v->a[49126] = 1;
	v->a[49127] = anon_sym_DQUOTE;
	v->a[49128] = actions(1578);
	v->a[49129] = 1;
	v->a[49130] = anon_sym_DOLLAR_LBRACE;
	v->a[49131] = actions(1580);
	v->a[49132] = 1;
	v->a[49133] = anon_sym_DOLLAR_LPAREN;
	v->a[49134] = actions(1582);
	v->a[49135] = 1;
	v->a[49136] = anon_sym_BQUOTE;
	v->a[49137] = actions(1584);
	v->a[49138] = 1;
	v->a[49139] = sym_variable_name;
	small_parse_table_2457(v);
}

void	small_parse_table_2457(t_small_parse_table_array *v)
{
	v->a[49140] = actions(1566);
	v->a[49141] = 2;
	v->a[49142] = anon_sym_PLUS_PLUS;
	v->a[49143] = anon_sym_DASH_DASH;
	v->a[49144] = actions(1568);
	v->a[49145] = 2;
	v->a[49146] = anon_sym_DASH2;
	v->a[49147] = anon_sym_PLUS2;
	v->a[49148] = actions(1576);
	v->a[49149] = 2;
	v->a[49150] = sym_number;
	v->a[49151] = aux_sym__simple_variable_name_token1;
	v->a[49152] = state(255);
	v->a[49153] = 3;
	v->a[49154] = sym_string;
	v->a[49155] = sym_simple_expansion;
	v->a[49156] = sym_expansion;
	v->a[49157] = state(216);
	v->a[49158] = 8;
	v->a[49159] = sym__arithmetic_expression;
	small_parse_table_2458(v);
}

void	small_parse_table_2458(t_small_parse_table_array *v)
{
	v->a[49160] = sym_arithmetic_literal;
	v->a[49161] = sym_arithmetic_binary_expression;
	v->a[49162] = sym_arithmetic_ternary_expression;
	v->a[49163] = sym_arithmetic_unary_expression;
	v->a[49164] = sym_arithmetic_postfix_expression;
	v->a[49165] = sym_arithmetic_parenthesized_expression;
	v->a[49166] = sym_command_substitution;
	v->a[49167] = 3;
	v->a[49168] = actions(3);
	v->a[49169] = 1;
	v->a[49170] = sym_comment;
	v->a[49171] = actions(662);
	v->a[49172] = 3;
	v->a[49173] = sym_file_descriptor;
	v->a[49174] = sym__concat;
	v->a[49175] = sym__bare_dollar;
	v->a[49176] = actions(660);
	v->a[49177] = 23;
	v->a[49178] = anon_sym_LPAREN;
	v->a[49179] = anon_sym_PIPE;
	small_parse_table_2459(v);
}

void	small_parse_table_2459(t_small_parse_table_array *v)
{
	v->a[49180] = anon_sym_AMP_AMP;
	v->a[49181] = anon_sym_PIPE_PIPE;
	v->a[49182] = anon_sym_LT;
	v->a[49183] = anon_sym_GT;
	v->a[49184] = anon_sym_GT_GT;
	v->a[49185] = anon_sym_LT_AMP;
	v->a[49186] = anon_sym_GT_AMP;
	v->a[49187] = anon_sym_GT_PIPE;
	v->a[49188] = anon_sym_LT_GT;
	v->a[49189] = anon_sym_LT_LT;
	v->a[49190] = anon_sym_LT_LT_DASH;
	v->a[49191] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49192] = aux_sym_concatenation_token1;
	v->a[49193] = anon_sym_DOLLAR;
	v->a[49194] = anon_sym_DQUOTE;
	v->a[49195] = sym_raw_string;
	v->a[49196] = sym_number;
	v->a[49197] = anon_sym_DOLLAR_LBRACE;
	v->a[49198] = anon_sym_DOLLAR_LPAREN;
	v->a[49199] = anon_sym_BQUOTE;
	small_parse_table_2460(v);
}

/* EOF small_parse_table_491.c */
