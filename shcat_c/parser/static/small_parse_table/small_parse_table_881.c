/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_881.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4405(t_small_parse_table_array *v)
{
	v->a[88100] = 1;
	v->a[88101] = anon_sym_BQUOTE;
	v->a[88102] = actions(5779);
	v->a[88103] = 1;
	v->a[88104] = sym__special_character;
	v->a[88105] = state(2717);
	v->a[88106] = 1;
	v->a[88107] = aux_sym__literal_repeat1;
	v->a[88108] = state(3141);
	v->a[88109] = 1;
	v->a[88110] = sym__expression;
	v->a[88111] = state(6913);
	v->a[88112] = 1;
	v->a[88113] = sym__test_command_binary_expression;
	v->a[88114] = actions(1129);
	v->a[88115] = 2;
	v->a[88116] = anon_sym_LPAREN_LPAREN;
	v->a[88117] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88118] = actions(1165);
	v->a[88119] = 2;
	small_parse_table_4406(v);
}

void	small_parse_table_4406(t_small_parse_table_array *v)
{
	v->a[88120] = anon_sym_LT_LPAREN;
	v->a[88121] = anon_sym_GT_LPAREN;
	v->a[88122] = actions(1191);
	v->a[88123] = 2;
	v->a[88124] = anon_sym_PLUS_PLUS2;
	v->a[88125] = anon_sym_DASH_DASH2;
	v->a[88126] = actions(1193);
	v->a[88127] = 2;
	v->a[88128] = anon_sym_DASH2;
	v->a[88129] = anon_sym_PLUS2;
	v->a[88130] = actions(1199);
	v->a[88131] = 2;
	v->a[88132] = sym_raw_string;
	v->a[88133] = sym_ansi_c_string;
	v->a[88134] = state(2594);
	v->a[88135] = 6;
	v->a[88136] = sym_binary_expression;
	v->a[88137] = sym_ternary_expression;
	v->a[88138] = sym_unary_expression;
	v->a[88139] = sym_postfix_expression;
	small_parse_table_4407(v);
}

void	small_parse_table_4407(t_small_parse_table_array *v)
{
	v->a[88140] = sym_parenthesized_expression;
	v->a[88141] = sym_concatenation;
	v->a[88142] = state(2503);
	v->a[88143] = 9;
	v->a[88144] = sym_arithmetic_expansion;
	v->a[88145] = sym_brace_expression;
	v->a[88146] = sym_string;
	v->a[88147] = sym_translated_string;
	v->a[88148] = sym_number;
	v->a[88149] = sym_simple_expansion;
	v->a[88150] = sym_expansion;
	v->a[88151] = sym_command_substitution;
	v->a[88152] = sym_process_substitution;
	v->a[88153] = 6;
	v->a[88154] = actions(71);
	v->a[88155] = 1;
	v->a[88156] = sym_comment;
	v->a[88157] = state(3543);
	v->a[88158] = 1;
	v->a[88159] = aux_sym__literal_repeat1;
	small_parse_table_4408(v);
}

void	small_parse_table_4408(t_small_parse_table_array *v)
{
	v->a[88160] = state(1868);
	v->a[88161] = 2;
	v->a[88162] = sym_concatenation;
	v->a[88163] = aux_sym_for_statement_repeat1;
	v->a[88164] = state(3480);
	v->a[88165] = 9;
	v->a[88166] = sym_arithmetic_expansion;
	v->a[88167] = sym_brace_expression;
	v->a[88168] = sym_string;
	v->a[88169] = sym_translated_string;
	v->a[88170] = sym_number;
	v->a[88171] = sym_simple_expansion;
	v->a[88172] = sym_expansion;
	v->a[88173] = sym_command_substitution;
	v->a[88174] = sym_process_substitution;
	v->a[88175] = actions(2072);
	v->a[88176] = 10;
	v->a[88177] = anon_sym_LT;
	v->a[88178] = anon_sym_GT;
	v->a[88179] = anon_sym_AMP_GT;
	small_parse_table_4409(v);
}

void	small_parse_table_4409(t_small_parse_table_array *v)
{
	v->a[88180] = anon_sym_LT_AMP;
	v->a[88181] = anon_sym_GT_AMP;
	v->a[88182] = anon_sym_DOLLAR;
	v->a[88183] = aux_sym_number_token1;
	v->a[88184] = aux_sym_number_token2;
	v->a[88185] = anon_sym_DOLLAR_LPAREN;
	v->a[88186] = sym_word;
	v->a[88187] = actions(2074);
	v->a[88188] = 22;
	v->a[88189] = sym_file_descriptor;
	v->a[88190] = sym_variable_name;
	v->a[88191] = sym_test_operator;
	v->a[88192] = sym__brace_start;
	v->a[88193] = anon_sym_LPAREN_LPAREN;
	v->a[88194] = anon_sym_GT_GT;
	v->a[88195] = anon_sym_AMP_GT_GT;
	v->a[88196] = anon_sym_GT_PIPE;
	v->a[88197] = anon_sym_LT_AMP_DASH;
	v->a[88198] = anon_sym_GT_AMP_DASH;
	v->a[88199] = anon_sym_LT_LT_LT;
	small_parse_table_4410(v);
}

/* EOF small_parse_table_881.c */
