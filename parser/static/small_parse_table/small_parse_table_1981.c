/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1981.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9905(t_small_parse_table_array *v)
{
	v->a[198100] = aux_sym_number_token2;
	v->a[198101] = actions(3407);
	v->a[198102] = 1;
	v->a[198103] = anon_sym_DOLLAR_LPAREN;
	v->a[198104] = actions(3417);
	v->a[198105] = 1;
	v->a[198106] = sym__brace_start;
	v->a[198107] = actions(4484);
	v->a[198108] = 1;
	v->a[198109] = sym_word;
	v->a[198110] = actions(4488);
	v->a[198111] = 1;
	v->a[198112] = sym_test_operator;
	v->a[198113] = actions(8926);
	v->a[198114] = 1;
	v->a[198115] = anon_sym_DOLLAR_LBRACK;
	v->a[198116] = actions(8928);
	v->a[198117] = 1;
	v->a[198118] = sym__special_character;
	v->a[198119] = actions(8930);
	small_parse_table_9906(v);
}

void	small_parse_table_9906(t_small_parse_table_array *v)
{
	v->a[198120] = 1;
	v->a[198121] = anon_sym_DQUOTE;
	v->a[198122] = actions(8934);
	v->a[198123] = 1;
	v->a[198124] = anon_sym_DOLLAR_LBRACE;
	v->a[198125] = actions(8936);
	v->a[198126] = 1;
	v->a[198127] = anon_sym_BQUOTE;
	v->a[198128] = actions(8938);
	v->a[198129] = 1;
	v->a[198130] = anon_sym_DOLLAR_BQUOTE;
	v->a[198131] = state(2161);
	v->a[198132] = 1;
	v->a[198133] = aux_sym__literal_repeat1;
	v->a[198134] = actions(8924);
	v->a[198135] = 2;
	v->a[198136] = anon_sym_LPAREN_LPAREN;
	v->a[198137] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198138] = actions(8932);
	v->a[198139] = 2;
	small_parse_table_9907(v);
}

void	small_parse_table_9907(t_small_parse_table_array *v)
{
	v->a[198140] = sym_raw_string;
	v->a[198141] = sym_ansi_c_string;
	v->a[198142] = actions(8940);
	v->a[198143] = 2;
	v->a[198144] = anon_sym_LT_LPAREN;
	v->a[198145] = anon_sym_GT_LPAREN;
	v->a[198146] = state(863);
	v->a[198147] = 2;
	v->a[198148] = sym_concatenation;
	v->a[198149] = aux_sym_for_statement_repeat1;
	v->a[198150] = state(2422);
	v->a[198151] = 9;
	v->a[198152] = sym_arithmetic_expansion;
	v->a[198153] = sym_brace_expression;
	v->a[198154] = sym_string;
	v->a[198155] = sym_translated_string;
	v->a[198156] = sym_number;
	v->a[198157] = sym_simple_expansion;
	v->a[198158] = sym_expansion;
	v->a[198159] = sym_command_substitution;
	small_parse_table_9908(v);
}

void	small_parse_table_9908(t_small_parse_table_array *v)
{
	v->a[198160] = sym_process_substitution;
	v->a[198161] = 20;
	v->a[198162] = actions(71);
	v->a[198163] = 1;
	v->a[198164] = sym_comment;
	v->a[198165] = actions(5604);
	v->a[198166] = 1;
	v->a[198167] = sym_word;
	v->a[198168] = actions(5610);
	v->a[198169] = 1;
	v->a[198170] = anon_sym_DOLLAR;
	v->a[198171] = actions(5616);
	v->a[198172] = 1;
	v->a[198173] = aux_sym_number_token1;
	v->a[198174] = actions(5618);
	v->a[198175] = 1;
	v->a[198176] = aux_sym_number_token2;
	v->a[198177] = actions(5622);
	v->a[198178] = 1;
	v->a[198179] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9909(v);
}

void	small_parse_table_9909(t_small_parse_table_array *v)
{
	v->a[198180] = actions(5630);
	v->a[198181] = 1;
	v->a[198182] = sym_test_operator;
	v->a[198183] = actions(5632);
	v->a[198184] = 1;
	v->a[198185] = sym__brace_start;
	v->a[198186] = actions(8944);
	v->a[198187] = 1;
	v->a[198188] = anon_sym_DOLLAR_LBRACK;
	v->a[198189] = actions(8946);
	v->a[198190] = 1;
	v->a[198191] = sym__special_character;
	v->a[198192] = actions(8948);
	v->a[198193] = 1;
	v->a[198194] = anon_sym_DQUOTE;
	v->a[198195] = actions(8952);
	v->a[198196] = 1;
	v->a[198197] = anon_sym_DOLLAR_LBRACE;
	v->a[198198] = actions(8954);
	v->a[198199] = 1;
	small_parse_table_9910(v);
}

/* EOF small_parse_table_1981.c */
