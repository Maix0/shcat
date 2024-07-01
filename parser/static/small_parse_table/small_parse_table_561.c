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
	v->a[56100] = 1;
	v->a[56101] = sym_variable_name;
	v->a[56102] = actions(1925);
	v->a[56103] = 2;
	v->a[56104] = anon_sym_PLUS_PLUS;
	v->a[56105] = anon_sym_DASH_DASH;
	v->a[56106] = actions(1927);
	v->a[56107] = 2;
	v->a[56108] = anon_sym_DASH2;
	v->a[56109] = anon_sym_PLUS2;
	v->a[56110] = actions(1935);
	v->a[56111] = 2;
	v->a[56112] = sym_number;
	v->a[56113] = aux_sym__simple_variable_name_token1;
	v->a[56114] = state(334);
	v->a[56115] = 3;
	v->a[56116] = sym_string;
	v->a[56117] = sym_simple_expansion;
	v->a[56118] = sym_expansion;
	v->a[56119] = state(355);
	small_parse_table_2806(v);
}

void	small_parse_table_2806(t_small_parse_table_array *v)
{
	v->a[56120] = 8;
	v->a[56121] = sym__arithmetic_expression;
	v->a[56122] = sym_arithmetic_literal;
	v->a[56123] = sym_arithmetic_binary_expression;
	v->a[56124] = sym_arithmetic_ternary_expression;
	v->a[56125] = sym_arithmetic_unary_expression;
	v->a[56126] = sym_arithmetic_postfix_expression;
	v->a[56127] = sym_arithmetic_parenthesized_expression;
	v->a[56128] = sym_command_substitution;
	v->a[56129] = 15;
	v->a[56130] = actions(870);
	v->a[56131] = 1;
	v->a[56132] = sym_comment;
	v->a[56133] = actions(1921);
	v->a[56134] = 1;
	v->a[56135] = anon_sym_LPAREN;
	v->a[56136] = actions(1923);
	v->a[56137] = 1;
	v->a[56138] = anon_sym_BANG;
	v->a[56139] = actions(1929);
	small_parse_table_2807(v);
}

void	small_parse_table_2807(t_small_parse_table_array *v)
{
	v->a[56140] = 1;
	v->a[56141] = anon_sym_TILDE;
	v->a[56142] = actions(1931);
	v->a[56143] = 1;
	v->a[56144] = anon_sym_DOLLAR;
	v->a[56145] = actions(1933);
	v->a[56146] = 1;
	v->a[56147] = anon_sym_DQUOTE;
	v->a[56148] = actions(1937);
	v->a[56149] = 1;
	v->a[56150] = anon_sym_DOLLAR_LBRACE;
	v->a[56151] = actions(1939);
	v->a[56152] = 1;
	v->a[56153] = anon_sym_DOLLAR_LPAREN;
	v->a[56154] = actions(1941);
	v->a[56155] = 1;
	v->a[56156] = anon_sym_BQUOTE;
	v->a[56157] = actions(1943);
	v->a[56158] = 1;
	v->a[56159] = sym_variable_name;
	small_parse_table_2808(v);
}

void	small_parse_table_2808(t_small_parse_table_array *v)
{
	v->a[56160] = actions(1925);
	v->a[56161] = 2;
	v->a[56162] = anon_sym_PLUS_PLUS;
	v->a[56163] = anon_sym_DASH_DASH;
	v->a[56164] = actions(1927);
	v->a[56165] = 2;
	v->a[56166] = anon_sym_DASH2;
	v->a[56167] = anon_sym_PLUS2;
	v->a[56168] = actions(1935);
	v->a[56169] = 2;
	v->a[56170] = sym_number;
	v->a[56171] = aux_sym__simple_variable_name_token1;
	v->a[56172] = state(334);
	v->a[56173] = 3;
	v->a[56174] = sym_string;
	v->a[56175] = sym_simple_expansion;
	v->a[56176] = sym_expansion;
	v->a[56177] = state(362);
	v->a[56178] = 8;
	v->a[56179] = sym__arithmetic_expression;
	small_parse_table_2809(v);
}

void	small_parse_table_2809(t_small_parse_table_array *v)
{
	v->a[56180] = sym_arithmetic_literal;
	v->a[56181] = sym_arithmetic_binary_expression;
	v->a[56182] = sym_arithmetic_ternary_expression;
	v->a[56183] = sym_arithmetic_unary_expression;
	v->a[56184] = sym_arithmetic_postfix_expression;
	v->a[56185] = sym_arithmetic_parenthesized_expression;
	v->a[56186] = sym_command_substitution;
	v->a[56187] = 3;
	v->a[56188] = actions(3);
	v->a[56189] = 1;
	v->a[56190] = sym_comment;
	v->a[56191] = actions(1027);
	v->a[56192] = 3;
	v->a[56193] = sym_file_descriptor;
	v->a[56194] = sym__concat;
	v->a[56195] = sym_variable_name;
	v->a[56196] = actions(1025);
	v->a[56197] = 23;
	v->a[56198] = anon_sym_PIPE;
	v->a[56199] = anon_sym_AMP_AMP;
	small_parse_table_2810(v);
}

/* EOF small_parse_table_561.c */
