/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_661.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3305(t_small_parse_table_array *v)
{
	v->a[66100] = 1;
	v->a[66101] = anon_sym_DQUOTE;
	v->a[66102] = actions(2019);
	v->a[66103] = 1;
	v->a[66104] = anon_sym_DOLLAR_LBRACE;
	v->a[66105] = actions(2021);
	v->a[66106] = 1;
	v->a[66107] = anon_sym_DOLLAR_LPAREN;
	v->a[66108] = actions(2023);
	v->a[66109] = 1;
	v->a[66110] = anon_sym_BQUOTE;
	v->a[66111] = actions(2025);
	v->a[66112] = 1;
	v->a[66113] = sym_variable_name;
	v->a[66114] = actions(2007);
	v->a[66115] = 2;
	v->a[66116] = anon_sym_PLUS_PLUS;
	v->a[66117] = anon_sym_DASH_DASH;
	v->a[66118] = actions(2009);
	v->a[66119] = 2;
	small_parse_table_3306(v);
}

void	small_parse_table_3306(t_small_parse_table_array *v)
{
	v->a[66120] = anon_sym_DASH2;
	v->a[66121] = anon_sym_PLUS2;
	v->a[66122] = actions(2017);
	v->a[66123] = 2;
	v->a[66124] = sym_number;
	v->a[66125] = aux_sym__simple_variable_name_token1;
	v->a[66126] = state(503);
	v->a[66127] = 3;
	v->a[66128] = sym_string;
	v->a[66129] = sym_simple_expansion;
	v->a[66130] = sym_expansion;
	v->a[66131] = state(594);
	v->a[66132] = 8;
	v->a[66133] = sym__arithmetic_expression;
	v->a[66134] = sym_arithmetic_literal;
	v->a[66135] = sym_arithmetic_binary_expression;
	v->a[66136] = sym_arithmetic_ternary_expression;
	v->a[66137] = sym_arithmetic_unary_expression;
	v->a[66138] = sym_arithmetic_postfix_expression;
	v->a[66139] = sym_arithmetic_parenthesized_expression;
	small_parse_table_3307(v);
}

void	small_parse_table_3307(t_small_parse_table_array *v)
{
	v->a[66140] = sym_command_substitution;
	v->a[66141] = 6;
	v->a[66142] = actions(3);
	v->a[66143] = 1;
	v->a[66144] = sym_comment;
	v->a[66145] = actions(379);
	v->a[66146] = 1;
	v->a[66147] = sym_file_descriptor;
	v->a[66148] = actions(2039);
	v->a[66149] = 1;
	v->a[66150] = sym_variable_name;
	v->a[66151] = actions(2037);
	v->a[66152] = 2;
	v->a[66153] = aux_sym__simple_variable_name_token1;
	v->a[66154] = aux_sym__multiline_variable_name_token1;
	v->a[66155] = actions(2035);
	v->a[66156] = 9;
	v->a[66157] = anon_sym_BANG;
	v->a[66158] = anon_sym_DASH;
	v->a[66159] = anon_sym_STAR;
	small_parse_table_3308(v);
}

void	small_parse_table_3308(t_small_parse_table_array *v)
{
	v->a[66160] = anon_sym_QMARK;
	v->a[66161] = anon_sym_DOLLAR;
	v->a[66162] = anon_sym_POUND;
	v->a[66163] = anon_sym_AT;
	v->a[66164] = anon_sym_0;
	v->a[66165] = anon_sym__;
	v->a[66166] = actions(381);
	v->a[66167] = 13;
	v->a[66168] = anon_sym_AMP_AMP;
	v->a[66169] = anon_sym_PIPE_PIPE;
	v->a[66170] = anon_sym_LT;
	v->a[66171] = anon_sym_GT;
	v->a[66172] = anon_sym_GT_GT;
	v->a[66173] = anon_sym_AMP_GT;
	v->a[66174] = anon_sym_AMP_GT_GT;
	v->a[66175] = anon_sym_LT_AMP;
	v->a[66176] = anon_sym_GT_AMP;
	v->a[66177] = anon_sym_GT_PIPE;
	v->a[66178] = anon_sym_LT_AMP_DASH;
	v->a[66179] = anon_sym_GT_AMP_DASH;
	small_parse_table_3309(v);
}

void	small_parse_table_3309(t_small_parse_table_array *v)
{
	v->a[66180] = aux_sym_heredoc_redirect_token1;
	v->a[66181] = 15;
	v->a[66182] = actions(1094);
	v->a[66183] = 1;
	v->a[66184] = sym_comment;
	v->a[66185] = actions(1869);
	v->a[66186] = 1;
	v->a[66187] = anon_sym_LPAREN;
	v->a[66188] = actions(1871);
	v->a[66189] = 1;
	v->a[66190] = anon_sym_BANG;
	v->a[66191] = actions(1879);
	v->a[66192] = 1;
	v->a[66193] = anon_sym_TILDE;
	v->a[66194] = actions(1881);
	v->a[66195] = 1;
	v->a[66196] = anon_sym_DOLLAR;
	v->a[66197] = actions(1883);
	v->a[66198] = 1;
	v->a[66199] = anon_sym_DQUOTE;
	small_parse_table_3310(v);
}

/* EOF small_parse_table_661.c */
