/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_471.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2355(t_small_parse_table_array *v)
{
	v->a[47100] = sym_command_substitution;
	v->a[47101] = sym_process_substitution;
	v->a[47102] = actions(2496);
	v->a[47103] = 11;
	v->a[47104] = sym_file_descriptor;
	v->a[47105] = anon_sym_PIPE_PIPE;
	v->a[47106] = anon_sym_AMP_AMP;
	v->a[47107] = anon_sym_GT_GT;
	v->a[47108] = anon_sym_PIPE_AMP;
	v->a[47109] = anon_sym_RBRACK;
	v->a[47110] = anon_sym_AMP_GT_GT;
	v->a[47111] = anon_sym_GT_PIPE;
	v->a[47112] = anon_sym_LT_AMP_DASH;
	v->a[47113] = anon_sym_GT_AMP_DASH;
	v->a[47114] = anon_sym_LT_LT_DASH;
	v->a[47115] = 22;
	v->a[47116] = actions(71);
	v->a[47117] = 1;
	v->a[47118] = sym_comment;
	v->a[47119] = actions(5315);
	small_parse_table_2356(v);
}

void	small_parse_table_2356(t_small_parse_table_array *v)
{
	v->a[47120] = 1;
	v->a[47121] = anon_sym_DOLLAR_LBRACK;
	v->a[47122] = actions(5317);
	v->a[47123] = 1;
	v->a[47124] = anon_sym_DOLLAR;
	v->a[47125] = actions(5319);
	v->a[47126] = 1;
	v->a[47127] = sym__special_character;
	v->a[47128] = actions(5321);
	v->a[47129] = 1;
	v->a[47130] = anon_sym_DQUOTE;
	v->a[47131] = actions(5325);
	v->a[47132] = 1;
	v->a[47133] = aux_sym_number_token1;
	v->a[47134] = actions(5327);
	v->a[47135] = 1;
	v->a[47136] = aux_sym_number_token2;
	v->a[47137] = actions(5329);
	v->a[47138] = 1;
	v->a[47139] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2357(v);
}

void	small_parse_table_2357(t_small_parse_table_array *v)
{
	v->a[47140] = actions(5331);
	v->a[47141] = 1;
	v->a[47142] = anon_sym_DOLLAR_LPAREN;
	v->a[47143] = actions(5333);
	v->a[47144] = 1;
	v->a[47145] = anon_sym_BQUOTE;
	v->a[47146] = actions(5335);
	v->a[47147] = 1;
	v->a[47148] = anon_sym_DOLLAR_BQUOTE;
	v->a[47149] = actions(5341);
	v->a[47150] = 1;
	v->a[47151] = sym__brace_start;
	v->a[47152] = actions(5343);
	v->a[47153] = 1;
	v->a[47154] = sym_word;
	v->a[47155] = actions(5347);
	v->a[47156] = 1;
	v->a[47157] = sym_test_operator;
	v->a[47158] = state(5496);
	v->a[47159] = 1;
	small_parse_table_2358(v);
}

void	small_parse_table_2358(t_small_parse_table_array *v)
{
	v->a[47160] = aux_sym__literal_repeat1;
	v->a[47161] = state(5563);
	v->a[47162] = 1;
	v->a[47163] = sym_concatenation;
	v->a[47164] = actions(5313);
	v->a[47165] = 2;
	v->a[47166] = anon_sym_LPAREN_LPAREN;
	v->a[47167] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47168] = actions(5337);
	v->a[47169] = 2;
	v->a[47170] = anon_sym_LT_LPAREN;
	v->a[47171] = anon_sym_GT_LPAREN;
	v->a[47172] = actions(5345);
	v->a[47173] = 2;
	v->a[47174] = sym_raw_string;
	v->a[47175] = sym_ansi_c_string;
	v->a[47176] = actions(2498);
	v->a[47177] = 7;
	v->a[47178] = anon_sym_PIPE;
	v->a[47179] = anon_sym_LT;
	small_parse_table_2359(v);
}

void	small_parse_table_2359(t_small_parse_table_array *v)
{
	v->a[47180] = anon_sym_GT;
	v->a[47181] = anon_sym_LT_LT;
	v->a[47182] = anon_sym_AMP_GT;
	v->a[47183] = anon_sym_LT_AMP;
	v->a[47184] = anon_sym_GT_AMP;
	v->a[47185] = state(5331);
	v->a[47186] = 9;
	v->a[47187] = sym_arithmetic_expansion;
	v->a[47188] = sym_brace_expression;
	v->a[47189] = sym_string;
	v->a[47190] = sym_translated_string;
	v->a[47191] = sym_number;
	v->a[47192] = sym_simple_expansion;
	v->a[47193] = sym_expansion;
	v->a[47194] = sym_command_substitution;
	v->a[47195] = sym_process_substitution;
	v->a[47196] = actions(2500);
	v->a[47197] = 11;
	v->a[47198] = sym_file_descriptor;
	v->a[47199] = anon_sym_PIPE_PIPE;
	small_parse_table_2360(v);
}

/* EOF small_parse_table_471.c */
