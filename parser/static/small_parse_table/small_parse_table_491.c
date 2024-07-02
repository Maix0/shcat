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
	v->a[49100] = anon_sym_LT;
	v->a[49101] = anon_sym_GT;
	v->a[49102] = anon_sym_GT_GT;
	v->a[49103] = anon_sym_LT_AMP;
	v->a[49104] = anon_sym_GT_AMP;
	v->a[49105] = anon_sym_GT_PIPE;
	v->a[49106] = anon_sym_LT_GT;
	v->a[49107] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49108] = anon_sym_DOLLAR;
	v->a[49109] = anon_sym_DQUOTE;
	v->a[49110] = sym_raw_string;
	v->a[49111] = sym_number;
	v->a[49112] = anon_sym_DOLLAR_LBRACE;
	v->a[49113] = anon_sym_DOLLAR_LPAREN;
	v->a[49114] = sym_word;
	v->a[49115] = 15;
	v->a[49116] = actions(680);
	v->a[49117] = 1;
	v->a[49118] = sym_comment;
	v->a[49119] = actions(1574);
	small_parse_table_2456(v);
}

void	small_parse_table_2456(t_small_parse_table_array *v)
{
	v->a[49120] = 1;
	v->a[49121] = anon_sym_LPAREN;
	v->a[49122] = actions(1576);
	v->a[49123] = 1;
	v->a[49124] = anon_sym_BANG;
	v->a[49125] = actions(1584);
	v->a[49126] = 1;
	v->a[49127] = anon_sym_TILDE;
	v->a[49128] = actions(1586);
	v->a[49129] = 1;
	v->a[49130] = anon_sym_DOLLAR;
	v->a[49131] = actions(1588);
	v->a[49132] = 1;
	v->a[49133] = anon_sym_DQUOTE;
	v->a[49134] = actions(1592);
	v->a[49135] = 1;
	v->a[49136] = anon_sym_DOLLAR_LBRACE;
	v->a[49137] = actions(1594);
	v->a[49138] = 1;
	v->a[49139] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2457(v);
}

void	small_parse_table_2457(t_small_parse_table_array *v)
{
	v->a[49140] = actions(1596);
	v->a[49141] = 1;
	v->a[49142] = anon_sym_BQUOTE;
	v->a[49143] = actions(1598);
	v->a[49144] = 1;
	v->a[49145] = sym_variable_name;
	v->a[49146] = actions(1580);
	v->a[49147] = 2;
	v->a[49148] = anon_sym_PLUS_PLUS;
	v->a[49149] = anon_sym_DASH_DASH;
	v->a[49150] = actions(1582);
	v->a[49151] = 2;
	v->a[49152] = anon_sym_DASH2;
	v->a[49153] = anon_sym_PLUS2;
	v->a[49154] = actions(1590);
	v->a[49155] = 2;
	v->a[49156] = sym_number;
	v->a[49157] = aux_sym__simple_variable_name_token1;
	v->a[49158] = state(238);
	v->a[49159] = 3;
	small_parse_table_2458(v);
}

void	small_parse_table_2458(t_small_parse_table_array *v)
{
	v->a[49160] = sym_string;
	v->a[49161] = sym_simple_expansion;
	v->a[49162] = sym_expansion;
	v->a[49163] = state(226);
	v->a[49164] = 8;
	v->a[49165] = sym__arithmetic_expression;
	v->a[49166] = sym_arithmetic_literal;
	v->a[49167] = sym_arithmetic_binary_expression;
	v->a[49168] = sym_arithmetic_ternary_expression;
	v->a[49169] = sym_arithmetic_unary_expression;
	v->a[49170] = sym_arithmetic_postfix_expression;
	v->a[49171] = sym_arithmetic_parenthesized_expression;
	v->a[49172] = sym_command_substitution;
	v->a[49173] = 4;
	v->a[49174] = actions(3);
	v->a[49175] = 1;
	v->a[49176] = sym_comment;
	v->a[49177] = actions(1424);
	v->a[49178] = 1;
	v->a[49179] = anon_sym_BQUOTE;
	small_parse_table_2459(v);
}

void	small_parse_table_2459(t_small_parse_table_array *v)
{
	v->a[49180] = actions(1426);
	v->a[49181] = 2;
	v->a[49182] = sym_file_descriptor;
	v->a[49183] = sym_variable_name;
	v->a[49184] = actions(1422);
	v->a[49185] = 23;
	v->a[49186] = anon_sym_for;
	v->a[49187] = anon_sym_while;
	v->a[49188] = anon_sym_until;
	v->a[49189] = anon_sym_if;
	v->a[49190] = anon_sym_case;
	v->a[49191] = anon_sym_LPAREN;
	v->a[49192] = anon_sym_LBRACE;
	v->a[49193] = anon_sym_BANG;
	v->a[49194] = anon_sym_LT;
	v->a[49195] = anon_sym_GT;
	v->a[49196] = anon_sym_GT_GT;
	v->a[49197] = anon_sym_LT_AMP;
	v->a[49198] = anon_sym_GT_AMP;
	v->a[49199] = anon_sym_GT_PIPE;
	small_parse_table_2460(v);
}

/* EOF small_parse_table_491.c */
