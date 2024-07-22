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
	v->a[49100] = 8;
	v->a[49101] = sym__arithmetic_expression;
	v->a[49102] = sym_arithmetic_literal;
	v->a[49103] = sym_arithmetic_binary_expression;
	v->a[49104] = sym_arithmetic_ternary_expression;
	v->a[49105] = sym_arithmetic_unary_expression;
	v->a[49106] = sym_arithmetic_postfix_expression;
	v->a[49107] = sym_arithmetic_parenthesized_expression;
	v->a[49108] = sym_command_substitution;
	v->a[49109] = 4;
	v->a[49110] = actions(3);
	v->a[49111] = 1;
	v->a[49112] = sym_comment;
	v->a[49113] = actions(1410);
	v->a[49114] = 1;
	v->a[49115] = anon_sym_BQUOTE;
	v->a[49116] = actions(1412);
	v->a[49117] = 2;
	v->a[49118] = sym_file_descriptor;
	v->a[49119] = sym_variable_name;
	small_parse_table_2456(v);
}

void	small_parse_table_2456(t_small_parse_table_array *v)
{
	v->a[49120] = actions(1408);
	v->a[49121] = 23;
	v->a[49122] = anon_sym_for;
	v->a[49123] = anon_sym_while;
	v->a[49124] = anon_sym_until;
	v->a[49125] = anon_sym_if;
	v->a[49126] = anon_sym_case;
	v->a[49127] = anon_sym_LPAREN;
	v->a[49128] = anon_sym_LBRACE;
	v->a[49129] = anon_sym_BANG;
	v->a[49130] = anon_sym_LT;
	v->a[49131] = anon_sym_GT;
	v->a[49132] = anon_sym_GT_GT;
	v->a[49133] = anon_sym_LT_AMP;
	v->a[49134] = anon_sym_GT_AMP;
	v->a[49135] = anon_sym_GT_PIPE;
	v->a[49136] = anon_sym_LT_GT;
	v->a[49137] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49138] = anon_sym_DOLLAR;
	v->a[49139] = anon_sym_DQUOTE;
	small_parse_table_2457(v);
}

void	small_parse_table_2457(t_small_parse_table_array *v)
{
	v->a[49140] = sym_raw_string;
	v->a[49141] = sym_number;
	v->a[49142] = anon_sym_DOLLAR_LBRACE;
	v->a[49143] = anon_sym_DOLLAR_LPAREN;
	v->a[49144] = sym_word;
	v->a[49145] = 15;
	v->a[49146] = actions(501);
	v->a[49147] = 1;
	v->a[49148] = sym_comment;
	v->a[49149] = actions(1469);
	v->a[49150] = 1;
	v->a[49151] = anon_sym_LPAREN;
	v->a[49152] = actions(1471);
	v->a[49153] = 1;
	v->a[49154] = anon_sym_BANG;
	v->a[49155] = actions(1479);
	v->a[49156] = 1;
	v->a[49157] = anon_sym_TILDE;
	v->a[49158] = actions(1481);
	v->a[49159] = 1;
	small_parse_table_2458(v);
}

void	small_parse_table_2458(t_small_parse_table_array *v)
{
	v->a[49160] = anon_sym_DOLLAR;
	v->a[49161] = actions(1483);
	v->a[49162] = 1;
	v->a[49163] = anon_sym_DQUOTE;
	v->a[49164] = actions(1487);
	v->a[49165] = 1;
	v->a[49166] = anon_sym_DOLLAR_LBRACE;
	v->a[49167] = actions(1489);
	v->a[49168] = 1;
	v->a[49169] = anon_sym_DOLLAR_LPAREN;
	v->a[49170] = actions(1491);
	v->a[49171] = 1;
	v->a[49172] = anon_sym_BQUOTE;
	v->a[49173] = actions(1493);
	v->a[49174] = 1;
	v->a[49175] = sym_variable_name;
	v->a[49176] = actions(1475);
	v->a[49177] = 2;
	v->a[49178] = anon_sym_PLUS_PLUS;
	v->a[49179] = anon_sym_DASH_DASH;
	small_parse_table_2459(v);
}

void	small_parse_table_2459(t_small_parse_table_array *v)
{
	v->a[49180] = actions(1477);
	v->a[49181] = 2;
	v->a[49182] = anon_sym_DASH2;
	v->a[49183] = anon_sym_PLUS2;
	v->a[49184] = actions(1485);
	v->a[49185] = 2;
	v->a[49186] = sym_number;
	v->a[49187] = aux_sym__simple_variable_name_token1;
	v->a[49188] = state(194);
	v->a[49189] = 3;
	v->a[49190] = sym_string;
	v->a[49191] = sym_simple_expansion;
	v->a[49192] = sym_expansion;
	v->a[49193] = state(227);
	v->a[49194] = 8;
	v->a[49195] = sym__arithmetic_expression;
	v->a[49196] = sym_arithmetic_literal;
	v->a[49197] = sym_arithmetic_binary_expression;
	v->a[49198] = sym_arithmetic_ternary_expression;
	v->a[49199] = sym_arithmetic_unary_expression;
	small_parse_table_2460(v);
}

/* EOF small_parse_table_491.c */
