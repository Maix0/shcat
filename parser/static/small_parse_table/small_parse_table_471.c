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
	v->a[47100] = actions(681);
	v->a[47101] = 1;
	v->a[47102] = anon_sym_DOLLAR_BQUOTE;
	v->a[47103] = actions(687);
	v->a[47104] = 1;
	v->a[47105] = sym__brace_start;
	v->a[47106] = actions(2900);
	v->a[47107] = 1;
	v->a[47108] = sym_file_descriptor;
	v->a[47109] = actions(3044);
	v->a[47110] = 1;
	v->a[47111] = sym_word;
	v->a[47112] = actions(3046);
	v->a[47113] = 1;
	v->a[47114] = sym__special_character;
	v->a[47115] = actions(3621);
	v->a[47116] = 1;
	v->a[47117] = sym_variable_name;
	v->a[47118] = state(465);
	v->a[47119] = 1;
	small_parse_table_2356(v);
}

void	small_parse_table_2356(t_small_parse_table_array *v)
{
	v->a[47120] = sym_command_name;
	v->a[47121] = state(1597);
	v->a[47122] = 1;
	v->a[47123] = aux_sym__literal_repeat1;
	v->a[47124] = state(1625);
	v->a[47125] = 1;
	v->a[47126] = sym_concatenation;
	v->a[47127] = state(1995);
	v->a[47128] = 1;
	v->a[47129] = sym_file_redirect;
	v->a[47130] = actions(669);
	v->a[47131] = 2;
	v->a[47132] = sym_test_operator;
	v->a[47133] = sym_raw_string;
	v->a[47134] = actions(2896);
	v->a[47135] = 2;
	v->a[47136] = anon_sym_LT_AMP_DASH;
	v->a[47137] = anon_sym_GT_AMP_DASH;
	v->a[47138] = state(1776);
	v->a[47139] = 2;
	small_parse_table_2357(v);
}

void	small_parse_table_2357(t_small_parse_table_array *v)
{
	v->a[47140] = sym_variable_assignment;
	v->a[47141] = aux_sym_command_repeat1;
	v->a[47142] = actions(2894);
	v->a[47143] = 3;
	v->a[47144] = anon_sym_GT_GT;
	v->a[47145] = anon_sym_AMP_GT_GT;
	v->a[47146] = anon_sym_GT_PIPE;
	v->a[47147] = actions(2892);
	v->a[47148] = 5;
	v->a[47149] = anon_sym_LT;
	v->a[47150] = anon_sym_GT;
	v->a[47151] = anon_sym_AMP_GT;
	v->a[47152] = anon_sym_LT_AMP;
	v->a[47153] = anon_sym_GT_AMP;
	v->a[47154] = state(1341);
	v->a[47155] = 7;
	v->a[47156] = sym_arithmetic_expansion;
	v->a[47157] = sym_brace_expression;
	v->a[47158] = sym_string;
	v->a[47159] = sym_number;
	small_parse_table_2358(v);
}

void	small_parse_table_2358(t_small_parse_table_array *v)
{
	v->a[47160] = sym_simple_expansion;
	v->a[47161] = sym_expansion;
	v->a[47162] = sym_command_substitution;
	v->a[47163] = 25;
	v->a[47164] = actions(57);
	v->a[47165] = 1;
	v->a[47166] = sym_comment;
	v->a[47167] = actions(87);
	v->a[47168] = 1;
	v->a[47169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47170] = actions(89);
	v->a[47171] = 1;
	v->a[47172] = anon_sym_DOLLAR;
	v->a[47173] = actions(93);
	v->a[47174] = 1;
	v->a[47175] = anon_sym_DQUOTE;
	v->a[47176] = actions(97);
	v->a[47177] = 1;
	v->a[47178] = aux_sym_number_token1;
	v->a[47179] = actions(99);
	small_parse_table_2359(v);
}

void	small_parse_table_2359(t_small_parse_table_array *v)
{
	v->a[47180] = 1;
	v->a[47181] = aux_sym_number_token2;
	v->a[47182] = actions(101);
	v->a[47183] = 1;
	v->a[47184] = anon_sym_DOLLAR_LBRACE;
	v->a[47185] = actions(103);
	v->a[47186] = 1;
	v->a[47187] = anon_sym_DOLLAR_LPAREN;
	v->a[47188] = actions(105);
	v->a[47189] = 1;
	v->a[47190] = anon_sym_BQUOTE;
	v->a[47191] = actions(107);
	v->a[47192] = 1;
	v->a[47193] = anon_sym_DOLLAR_BQUOTE;
	v->a[47194] = actions(113);
	v->a[47195] = 1;
	v->a[47196] = sym__brace_start;
	v->a[47197] = actions(2900);
	v->a[47198] = 1;
	v->a[47199] = sym_file_descriptor;
	small_parse_table_2360(v);
}

/* EOF small_parse_table_471.c */
