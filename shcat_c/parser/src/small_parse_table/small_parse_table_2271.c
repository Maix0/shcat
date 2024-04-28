/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2271.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11355(t_small_parse_table_array *v)
{
	v->a[227100] = actions(9910);
	v->a[227101] = 1;
	v->a[227102] = anon_sym_DQUOTE;
	v->a[227103] = actions(9912);
	v->a[227104] = 1;
	v->a[227105] = aux_sym_number_token1;
	v->a[227106] = actions(9914);
	v->a[227107] = 1;
	v->a[227108] = aux_sym_number_token2;
	v->a[227109] = actions(9916);
	v->a[227110] = 1;
	v->a[227111] = anon_sym_DOLLAR_LBRACE;
	v->a[227112] = actions(9918);
	v->a[227113] = 1;
	v->a[227114] = anon_sym_DOLLAR_LPAREN;
	v->a[227115] = actions(9920);
	v->a[227116] = 1;
	v->a[227117] = anon_sym_BQUOTE;
	v->a[227118] = actions(9922);
	v->a[227119] = 1;
	small_parse_table_11356(v);
}

void	small_parse_table_11356(t_small_parse_table_array *v)
{
	v->a[227120] = anon_sym_DOLLAR_BQUOTE;
	v->a[227121] = actions(10786);
	v->a[227122] = 1;
	v->a[227123] = aux_sym__simple_variable_name_token1;
	v->a[227124] = state(3359);
	v->a[227125] = 1;
	v->a[227126] = sym__arithmetic_postfix_expression;
	v->a[227127] = state(3361);
	v->a[227128] = 1;
	v->a[227129] = sym__arithmetic_unary_expression;
	v->a[227130] = state(3367);
	v->a[227131] = 1;
	v->a[227132] = sym__arithmetic_ternary_expression;
	v->a[227133] = state(3375);
	v->a[227134] = 1;
	v->a[227135] = sym__arithmetic_binary_expression;
	v->a[227136] = actions(9902);
	v->a[227137] = 2;
	v->a[227138] = anon_sym_PLUS_PLUS2;
	v->a[227139] = anon_sym_DASH_DASH2;
	small_parse_table_11357(v);
}

void	small_parse_table_11357(t_small_parse_table_array *v)
{
	v->a[227140] = actions(9904);
	v->a[227141] = 2;
	v->a[227142] = anon_sym_DASH2;
	v->a[227143] = anon_sym_PLUS2;
	v->a[227144] = state(3259);
	v->a[227145] = 9;
	v->a[227146] = sym_subscript;
	v->a[227147] = sym__arithmetic_expression;
	v->a[227148] = sym__arithmetic_literal;
	v->a[227149] = sym__arithmetic_parenthesized_expression;
	v->a[227150] = sym_string;
	v->a[227151] = sym_number;
	v->a[227152] = sym_simple_expansion;
	v->a[227153] = sym_expansion;
	v->a[227154] = sym_command_substitution;
	v->a[227155] = 20;
	v->a[227156] = actions(71);
	v->a[227157] = 1;
	v->a[227158] = sym_comment;
	v->a[227159] = actions(3787);
	small_parse_table_11358(v);
}

void	small_parse_table_11358(t_small_parse_table_array *v)
{
	v->a[227160] = 1;
	v->a[227161] = anon_sym_DOLLAR;
	v->a[227162] = actions(3793);
	v->a[227163] = 1;
	v->a[227164] = aux_sym_number_token1;
	v->a[227165] = actions(3795);
	v->a[227166] = 1;
	v->a[227167] = aux_sym_number_token2;
	v->a[227168] = actions(3799);
	v->a[227169] = 1;
	v->a[227170] = anon_sym_DOLLAR_LPAREN;
	v->a[227171] = actions(3809);
	v->a[227172] = 1;
	v->a[227173] = sym__brace_start;
	v->a[227174] = actions(9636);
	v->a[227175] = 1;
	v->a[227176] = anon_sym_DOLLAR_LBRACK;
	v->a[227177] = actions(9640);
	v->a[227178] = 1;
	v->a[227179] = anon_sym_DQUOTE;
	small_parse_table_11359(v);
}

void	small_parse_table_11359(t_small_parse_table_array *v)
{
	v->a[227180] = actions(9644);
	v->a[227181] = 1;
	v->a[227182] = anon_sym_DOLLAR_LBRACE;
	v->a[227183] = actions(9646);
	v->a[227184] = 1;
	v->a[227185] = anon_sym_BQUOTE;
	v->a[227186] = actions(9648);
	v->a[227187] = 1;
	v->a[227188] = anon_sym_DOLLAR_BQUOTE;
	v->a[227189] = actions(10788);
	v->a[227190] = 1;
	v->a[227191] = sym_word;
	v->a[227192] = actions(10790);
	v->a[227193] = 1;
	v->a[227194] = sym__special_character;
	v->a[227195] = actions(10794);
	v->a[227196] = 1;
	v->a[227197] = sym_test_operator;
	v->a[227198] = state(4294);
	v->a[227199] = 1;
	small_parse_table_11360(v);
}

/* EOF small_parse_table_2271.c */
