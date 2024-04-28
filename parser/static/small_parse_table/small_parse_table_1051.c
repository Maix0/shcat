/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1051.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5255(t_small_parse_table_array *v)
{
	v->a[105100] = 1;
	v->a[105101] = anon_sym_BANG;
	v->a[105102] = actions(1219);
	v->a[105103] = 1;
	v->a[105104] = anon_sym_TILDE;
	v->a[105105] = actions(1221);
	v->a[105106] = 1;
	v->a[105107] = sym__special_character;
	v->a[105108] = actions(1225);
	v->a[105109] = 1;
	v->a[105110] = sym_test_operator;
	v->a[105111] = actions(3060);
	v->a[105112] = 1;
	v->a[105113] = anon_sym_BQUOTE;
	v->a[105114] = state(2484);
	v->a[105115] = 1;
	v->a[105116] = aux_sym__literal_repeat1;
	v->a[105117] = state(3193);
	v->a[105118] = 1;
	v->a[105119] = sym__expression;
	small_parse_table_5256(v);
}

void	small_parse_table_5256(t_small_parse_table_array *v)
{
	v->a[105120] = actions(1129);
	v->a[105121] = 2;
	v->a[105122] = anon_sym_LPAREN_LPAREN;
	v->a[105123] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105124] = actions(1165);
	v->a[105125] = 2;
	v->a[105126] = anon_sym_LT_LPAREN;
	v->a[105127] = anon_sym_GT_LPAREN;
	v->a[105128] = actions(1215);
	v->a[105129] = 2;
	v->a[105130] = anon_sym_PLUS_PLUS2;
	v->a[105131] = anon_sym_DASH_DASH2;
	v->a[105132] = actions(1217);
	v->a[105133] = 2;
	v->a[105134] = anon_sym_DASH2;
	v->a[105135] = anon_sym_PLUS2;
	v->a[105136] = actions(1223);
	v->a[105137] = 2;
	v->a[105138] = sym_raw_string;
	v->a[105139] = sym_ansi_c_string;
	small_parse_table_5257(v);
}

void	small_parse_table_5257(t_small_parse_table_array *v)
{
	v->a[105140] = state(2594);
	v->a[105141] = 6;
	v->a[105142] = sym_binary_expression;
	v->a[105143] = sym_ternary_expression;
	v->a[105144] = sym_unary_expression;
	v->a[105145] = sym_postfix_expression;
	v->a[105146] = sym_parenthesized_expression;
	v->a[105147] = sym_concatenation;
	v->a[105148] = state(2588);
	v->a[105149] = 9;
	v->a[105150] = sym_arithmetic_expansion;
	v->a[105151] = sym_brace_expression;
	v->a[105152] = sym_string;
	v->a[105153] = sym_translated_string;
	v->a[105154] = sym_number;
	v->a[105155] = sym_simple_expansion;
	v->a[105156] = sym_expansion;
	v->a[105157] = sym_command_substitution;
	v->a[105158] = sym_process_substitution;
	v->a[105159] = 8;
	small_parse_table_5258(v);
}

void	small_parse_table_5258(t_small_parse_table_array *v)
{
	v->a[105160] = actions(3);
	v->a[105161] = 1;
	v->a[105162] = sym_comment;
	v->a[105163] = actions(5826);
	v->a[105164] = 1;
	v->a[105165] = aux_sym_heredoc_redirect_token1;
	v->a[105166] = actions(5828);
	v->a[105167] = 1;
	v->a[105168] = sym_file_descriptor;
	v->a[105169] = actions(6148);
	v->a[105170] = 1;
	v->a[105171] = anon_sym_RPAREN;
	v->a[105172] = actions(5831);
	v->a[105173] = 3;
	v->a[105174] = sym_variable_name;
	v->a[105175] = sym_test_operator;
	v->a[105176] = sym__brace_start;
	v->a[105177] = actions(5821);
	v->a[105178] = 9;
	v->a[105179] = anon_sym_SEMI;
	small_parse_table_5259(v);
}

void	small_parse_table_5259(t_small_parse_table_array *v)
{
	v->a[105180] = anon_sym_PIPE_PIPE;
	v->a[105181] = anon_sym_AMP_AMP;
	v->a[105182] = anon_sym_PIPE;
	v->a[105183] = anon_sym_AMP;
	v->a[105184] = anon_sym_LT_LT;
	v->a[105185] = anon_sym_SEMI_SEMI;
	v->a[105186] = anon_sym_PIPE_AMP;
	v->a[105187] = anon_sym_LT_LT_DASH;
	v->a[105188] = actions(5823);
	v->a[105189] = 11;
	v->a[105190] = anon_sym_LT;
	v->a[105191] = anon_sym_GT;
	v->a[105192] = anon_sym_GT_GT;
	v->a[105193] = anon_sym_AMP_GT;
	v->a[105194] = anon_sym_AMP_GT_GT;
	v->a[105195] = anon_sym_LT_AMP;
	v->a[105196] = anon_sym_GT_AMP;
	v->a[105197] = anon_sym_GT_PIPE;
	v->a[105198] = anon_sym_LT_AMP_DASH;
	v->a[105199] = anon_sym_GT_AMP_DASH;
	small_parse_table_5260(v);
}

/* EOF small_parse_table_1051.c */
