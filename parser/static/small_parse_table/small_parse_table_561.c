/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_561.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2805(t_small_parse_table_array *v)
{
	v->a[56100] = anon_sym_LT_AMP;
	v->a[56101] = anon_sym_GT_AMP;
	v->a[56102] = anon_sym_GT_PIPE;
	v->a[56103] = anon_sym_LT_AMP_DASH;
	v->a[56104] = anon_sym_GT_AMP_DASH;
	v->a[56105] = anon_sym_LT_LT;
	v->a[56106] = anon_sym_LT_LT_DASH;
	v->a[56107] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56108] = aux_sym_concatenation_token1;
	v->a[56109] = anon_sym_DOLLAR;
	v->a[56110] = anon_sym_DQUOTE;
	v->a[56111] = sym_raw_string;
	v->a[56112] = aux_sym_number_token1;
	v->a[56113] = aux_sym_number_token2;
	v->a[56114] = anon_sym_DOLLAR_LBRACE;
	v->a[56115] = anon_sym_DOLLAR_LPAREN;
	v->a[56116] = anon_sym_BQUOTE;
	v->a[56117] = sym_word;
	v->a[56118] = 18;
	v->a[56119] = actions(1404);
	small_parse_table_2806(v);
}

void	small_parse_table_2806(t_small_parse_table_array *v)
{
	v->a[56120] = 1;
	v->a[56121] = sym_comment;
	v->a[56122] = actions(1979);
	v->a[56123] = 1;
	v->a[56124] = anon_sym_LPAREN;
	v->a[56125] = actions(1981);
	v->a[56126] = 1;
	v->a[56127] = anon_sym_BANG;
	v->a[56128] = actions(1989);
	v->a[56129] = 1;
	v->a[56130] = anon_sym_TILDE;
	v->a[56131] = actions(1991);
	v->a[56132] = 1;
	v->a[56133] = anon_sym_DOLLAR;
	v->a[56134] = actions(1993);
	v->a[56135] = 1;
	v->a[56136] = anon_sym_DQUOTE;
	v->a[56137] = actions(1995);
	v->a[56138] = 1;
	v->a[56139] = aux_sym_number_token1;
	small_parse_table_2807(v);
}

void	small_parse_table_2807(t_small_parse_table_array *v)
{
	v->a[56140] = actions(1997);
	v->a[56141] = 1;
	v->a[56142] = aux_sym_number_token2;
	v->a[56143] = actions(1999);
	v->a[56144] = 1;
	v->a[56145] = anon_sym_DOLLAR_LBRACE;
	v->a[56146] = actions(2001);
	v->a[56147] = 1;
	v->a[56148] = anon_sym_DOLLAR_LPAREN;
	v->a[56149] = actions(2003);
	v->a[56150] = 1;
	v->a[56151] = anon_sym_BQUOTE;
	v->a[56152] = actions(2005);
	v->a[56153] = 1;
	v->a[56154] = aux_sym__simple_variable_name_token1;
	v->a[56155] = actions(2007);
	v->a[56156] = 1;
	v->a[56157] = sym_variable_name;
	v->a[56158] = actions(2069);
	v->a[56159] = 1;
	small_parse_table_2808(v);
}

void	small_parse_table_2808(t_small_parse_table_array *v)
{
	v->a[56160] = anon_sym_RPAREN_RPAREN;
	v->a[56161] = actions(1985);
	v->a[56162] = 2;
	v->a[56163] = anon_sym_PLUS_PLUS;
	v->a[56164] = anon_sym_DASH_DASH;
	v->a[56165] = actions(1987);
	v->a[56166] = 2;
	v->a[56167] = anon_sym_DASH2;
	v->a[56168] = anon_sym_PLUS2;
	v->a[56169] = state(530);
	v->a[56170] = 4;
	v->a[56171] = sym_string;
	v->a[56172] = sym_number;
	v->a[56173] = sym_simple_expansion;
	v->a[56174] = sym_expansion;
	v->a[56175] = state(575);
	v->a[56176] = 8;
	v->a[56177] = sym__arithmetic_expression;
	v->a[56178] = sym_arithmetic_literal;
	v->a[56179] = sym_arithmetic_binary_expression;
	small_parse_table_2809(v);
}

void	small_parse_table_2809(t_small_parse_table_array *v)
{
	v->a[56180] = sym_arithmetic_ternary_expression;
	v->a[56181] = sym_arithmetic_unary_expression;
	v->a[56182] = sym_arithmetic_postfix_expression;
	v->a[56183] = sym_arithmetic_parenthesized_expression;
	v->a[56184] = sym_command_substitution;
	v->a[56185] = 3;
	v->a[56186] = actions(3);
	v->a[56187] = 1;
	v->a[56188] = sym_comment;
	v->a[56189] = actions(1251);
	v->a[56190] = 3;
	v->a[56191] = sym_file_descriptor;
	v->a[56192] = sym__concat;
	v->a[56193] = sym__bare_dollar;
	v->a[56194] = actions(1253);
	v->a[56195] = 26;
	v->a[56196] = anon_sym_PIPE;
	v->a[56197] = anon_sym_AMP_AMP;
	v->a[56198] = anon_sym_PIPE_PIPE;
	v->a[56199] = anon_sym_LT;
	small_parse_table_2810(v);
}

/* EOF small_parse_table_561.c */
