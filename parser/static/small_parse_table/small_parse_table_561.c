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
	v->a[56100] = 8;
	v->a[56101] = sym__arithmetic_expression;
	v->a[56102] = sym_arithmetic_literal;
	v->a[56103] = sym_arithmetic_binary_expression;
	v->a[56104] = sym_arithmetic_ternary_expression;
	v->a[56105] = sym_arithmetic_unary_expression;
	v->a[56106] = sym_arithmetic_postfix_expression;
	v->a[56107] = sym_arithmetic_parenthesized_expression;
	v->a[56108] = sym_command_substitution;
	v->a[56109] = 16;
	v->a[56110] = actions(1074);
	v->a[56111] = 1;
	v->a[56112] = sym_comment;
	v->a[56113] = actions(1831);
	v->a[56114] = 1;
	v->a[56115] = anon_sym_LPAREN;
	v->a[56116] = actions(1833);
	v->a[56117] = 1;
	v->a[56118] = anon_sym_BANG;
	v->a[56119] = actions(1841);
	small_parse_table_2806(v);
}

void	small_parse_table_2806(t_small_parse_table_array *v)
{
	v->a[56120] = 1;
	v->a[56121] = anon_sym_TILDE;
	v->a[56122] = actions(1843);
	v->a[56123] = 1;
	v->a[56124] = anon_sym_DOLLAR;
	v->a[56125] = actions(1845);
	v->a[56126] = 1;
	v->a[56127] = anon_sym_DQUOTE;
	v->a[56128] = actions(1849);
	v->a[56129] = 1;
	v->a[56130] = anon_sym_DOLLAR_LBRACE;
	v->a[56131] = actions(1851);
	v->a[56132] = 1;
	v->a[56133] = anon_sym_DOLLAR_LPAREN;
	v->a[56134] = actions(1853);
	v->a[56135] = 1;
	v->a[56136] = anon_sym_BQUOTE;
	v->a[56137] = actions(1855);
	v->a[56138] = 1;
	v->a[56139] = sym_variable_name;
	small_parse_table_2807(v);
}

void	small_parse_table_2807(t_small_parse_table_array *v)
{
	v->a[56140] = actions(1911);
	v->a[56141] = 1;
	v->a[56142] = anon_sym_RPAREN_RPAREN;
	v->a[56143] = actions(1837);
	v->a[56144] = 2;
	v->a[56145] = anon_sym_PLUS_PLUS;
	v->a[56146] = anon_sym_DASH_DASH;
	v->a[56147] = actions(1839);
	v->a[56148] = 2;
	v->a[56149] = anon_sym_DASH2;
	v->a[56150] = anon_sym_PLUS2;
	v->a[56151] = actions(1847);
	v->a[56152] = 2;
	v->a[56153] = sym_number;
	v->a[56154] = aux_sym__simple_variable_name_token1;
	v->a[56155] = state(370);
	v->a[56156] = 3;
	v->a[56157] = sym_string;
	v->a[56158] = sym_simple_expansion;
	v->a[56159] = sym_expansion;
	small_parse_table_2808(v);
}

void	small_parse_table_2808(t_small_parse_table_array *v)
{
	v->a[56160] = state(507);
	v->a[56161] = 8;
	v->a[56162] = sym__arithmetic_expression;
	v->a[56163] = sym_arithmetic_literal;
	v->a[56164] = sym_arithmetic_binary_expression;
	v->a[56165] = sym_arithmetic_ternary_expression;
	v->a[56166] = sym_arithmetic_unary_expression;
	v->a[56167] = sym_arithmetic_postfix_expression;
	v->a[56168] = sym_arithmetic_parenthesized_expression;
	v->a[56169] = sym_command_substitution;
	v->a[56170] = 3;
	v->a[56171] = actions(3);
	v->a[56172] = 1;
	v->a[56173] = sym_comment;
	v->a[56174] = actions(1114);
	v->a[56175] = 2;
	v->a[56176] = sym_file_descriptor;
	v->a[56177] = sym__concat;
	v->a[56178] = actions(1112);
	v->a[56179] = 25;
	small_parse_table_2809(v);
}

void	small_parse_table_2809(t_small_parse_table_array *v)
{
	v->a[56180] = anon_sym_PIPE;
	v->a[56181] = anon_sym_AMP_AMP;
	v->a[56182] = anon_sym_PIPE_PIPE;
	v->a[56183] = anon_sym_LT;
	v->a[56184] = anon_sym_GT;
	v->a[56185] = anon_sym_GT_GT;
	v->a[56186] = anon_sym_AMP_GT;
	v->a[56187] = anon_sym_AMP_GT_GT;
	v->a[56188] = anon_sym_LT_AMP;
	v->a[56189] = anon_sym_GT_AMP;
	v->a[56190] = anon_sym_GT_PIPE;
	v->a[56191] = anon_sym_LT_AMP_DASH;
	v->a[56192] = anon_sym_GT_AMP_DASH;
	v->a[56193] = anon_sym_LT_LT;
	v->a[56194] = anon_sym_LT_LT_DASH;
	v->a[56195] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56196] = aux_sym_concatenation_token1;
	v->a[56197] = anon_sym_DOLLAR;
	v->a[56198] = anon_sym_DQUOTE;
	v->a[56199] = sym_raw_string;
	small_parse_table_2810(v);
}

/* EOF small_parse_table_561.c */
