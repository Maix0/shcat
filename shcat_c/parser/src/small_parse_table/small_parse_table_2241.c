/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2241.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11205(t_small_parse_table_array *v)
{
	v->a[224100] = sym__arithmetic_unary_expression;
	v->a[224101] = state(2825);
	v->a[224102] = 1;
	v->a[224103] = sym__arithmetic_postfix_expression;
	v->a[224104] = actions(9282);
	v->a[224105] = 2;
	v->a[224106] = anon_sym_PLUS_PLUS2;
	v->a[224107] = anon_sym_DASH_DASH2;
	v->a[224108] = actions(9284);
	v->a[224109] = 2;
	v->a[224110] = anon_sym_DASH2;
	v->a[224111] = anon_sym_PLUS2;
	v->a[224112] = state(2938);
	v->a[224113] = 9;
	v->a[224114] = sym_subscript;
	v->a[224115] = sym__arithmetic_expression;
	v->a[224116] = sym__arithmetic_literal;
	v->a[224117] = sym__arithmetic_parenthesized_expression;
	v->a[224118] = sym_string;
	v->a[224119] = sym_number;
	small_parse_table_11206(v);
}

void	small_parse_table_11206(t_small_parse_table_array *v)
{
	v->a[224120] = sym_simple_expansion;
	v->a[224121] = sym_expansion;
	v->a[224122] = sym_command_substitution;
	v->a[224123] = 18;
	v->a[224124] = actions(3);
	v->a[224125] = 1;
	v->a[224126] = sym_comment;
	v->a[224127] = actions(1557);
	v->a[224128] = 1;
	v->a[224129] = aux_sym_number_token1;
	v->a[224130] = actions(1559);
	v->a[224131] = 1;
	v->a[224132] = aux_sym_number_token2;
	v->a[224133] = actions(1563);
	v->a[224134] = 1;
	v->a[224135] = anon_sym_DOLLAR_LPAREN;
	v->a[224136] = actions(1575);
	v->a[224137] = 1;
	v->a[224138] = sym__brace_start;
	v->a[224139] = actions(9198);
	small_parse_table_11207(v);
}

void	small_parse_table_11207(t_small_parse_table_array *v)
{
	v->a[224140] = 1;
	v->a[224141] = anon_sym_DOLLAR_LBRACK;
	v->a[224142] = actions(9202);
	v->a[224143] = 1;
	v->a[224144] = anon_sym_DQUOTE;
	v->a[224145] = actions(9206);
	v->a[224146] = 1;
	v->a[224147] = anon_sym_DOLLAR_LBRACE;
	v->a[224148] = actions(9208);
	v->a[224149] = 1;
	v->a[224150] = anon_sym_BQUOTE;
	v->a[224151] = actions(9210);
	v->a[224152] = 1;
	v->a[224153] = anon_sym_DOLLAR_BQUOTE;
	v->a[224154] = actions(9268);
	v->a[224155] = 1;
	v->a[224156] = sym_word;
	v->a[224157] = actions(9276);
	v->a[224158] = 1;
	v->a[224159] = sym__comment_word;
	small_parse_table_11208(v);
}

void	small_parse_table_11208(t_small_parse_table_array *v)
{
	v->a[224160] = actions(10676);
	v->a[224161] = 1;
	v->a[224162] = anon_sym_DOLLAR;
	v->a[224163] = actions(9196);
	v->a[224164] = 2;
	v->a[224165] = anon_sym_LPAREN_LPAREN;
	v->a[224166] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[224167] = actions(9212);
	v->a[224168] = 2;
	v->a[224169] = anon_sym_LT_LPAREN;
	v->a[224170] = anon_sym_GT_LPAREN;
	v->a[224171] = actions(9272);
	v->a[224172] = 2;
	v->a[224173] = sym_test_operator;
	v->a[224174] = sym__special_character;
	v->a[224175] = actions(9274);
	v->a[224176] = 3;
	v->a[224177] = sym__bare_dollar;
	v->a[224178] = sym_raw_string;
	v->a[224179] = sym_ansi_c_string;
	small_parse_table_11209(v);
}

void	small_parse_table_11209(t_small_parse_table_array *v)
{
	v->a[224180] = state(1189);
	v->a[224181] = 9;
	v->a[224182] = sym_arithmetic_expansion;
	v->a[224183] = sym_brace_expression;
	v->a[224184] = sym_string;
	v->a[224185] = sym_translated_string;
	v->a[224186] = sym_number;
	v->a[224187] = sym_simple_expansion;
	v->a[224188] = sym_expansion;
	v->a[224189] = sym_command_substitution;
	v->a[224190] = sym_process_substitution;
	v->a[224191] = 18;
	v->a[224192] = actions(3);
	v->a[224193] = 1;
	v->a[224194] = sym_comment;
	v->a[224195] = actions(3191);
	v->a[224196] = 1;
	v->a[224197] = aux_sym_number_token1;
	v->a[224198] = actions(3193);
	v->a[224199] = 1;
	small_parse_table_11210(v);
}

/* EOF small_parse_table_2241.c */
