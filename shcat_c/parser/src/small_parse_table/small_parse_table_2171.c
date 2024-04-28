/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2171.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10855(t_small_parse_table_array *v)
{
	v->a[217100] = 1;
	v->a[217101] = anon_sym_DOLLAR_BQUOTE;
	v->a[217102] = actions(10330);
	v->a[217103] = 1;
	v->a[217104] = sym_word;
	v->a[217105] = actions(10338);
	v->a[217106] = 1;
	v->a[217107] = sym__comment_word;
	v->a[217108] = actions(10346);
	v->a[217109] = 1;
	v->a[217110] = anon_sym_DOLLAR;
	v->a[217111] = actions(9800);
	v->a[217112] = 2;
	v->a[217113] = anon_sym_LPAREN_LPAREN;
	v->a[217114] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217115] = actions(9816);
	v->a[217116] = 2;
	v->a[217117] = anon_sym_LT_LPAREN;
	v->a[217118] = anon_sym_GT_LPAREN;
	v->a[217119] = actions(10334);
	small_parse_table_10856(v);
}

void	small_parse_table_10856(t_small_parse_table_array *v)
{
	v->a[217120] = 2;
	v->a[217121] = sym_test_operator;
	v->a[217122] = sym__special_character;
	v->a[217123] = actions(10336);
	v->a[217124] = 3;
	v->a[217125] = sym__bare_dollar;
	v->a[217126] = sym_raw_string;
	v->a[217127] = sym_ansi_c_string;
	v->a[217128] = state(4532);
	v->a[217129] = 9;
	v->a[217130] = sym_arithmetic_expansion;
	v->a[217131] = sym_brace_expression;
	v->a[217132] = sym_string;
	v->a[217133] = sym_translated_string;
	v->a[217134] = sym_number;
	v->a[217135] = sym_simple_expansion;
	v->a[217136] = sym_expansion;
	v->a[217137] = sym_command_substitution;
	v->a[217138] = sym_process_substitution;
	v->a[217139] = 20;
	small_parse_table_10857(v);
}

void	small_parse_table_10857(t_small_parse_table_array *v)
{
	v->a[217140] = actions(71);
	v->a[217141] = 1;
	v->a[217142] = sym_comment;
	v->a[217143] = actions(9118);
	v->a[217144] = 1;
	v->a[217145] = anon_sym_DOLLAR_LBRACK;
	v->a[217146] = actions(9120);
	v->a[217147] = 1;
	v->a[217148] = anon_sym_DOLLAR;
	v->a[217149] = actions(9122);
	v->a[217150] = 1;
	v->a[217151] = sym__special_character;
	v->a[217152] = actions(9124);
	v->a[217153] = 1;
	v->a[217154] = anon_sym_DQUOTE;
	v->a[217155] = actions(9128);
	v->a[217156] = 1;
	v->a[217157] = aux_sym_number_token1;
	v->a[217158] = actions(9130);
	v->a[217159] = 1;
	small_parse_table_10858(v);
}

void	small_parse_table_10858(t_small_parse_table_array *v)
{
	v->a[217160] = aux_sym_number_token2;
	v->a[217161] = actions(9132);
	v->a[217162] = 1;
	v->a[217163] = anon_sym_DOLLAR_LBRACE;
	v->a[217164] = actions(9134);
	v->a[217165] = 1;
	v->a[217166] = anon_sym_DOLLAR_LPAREN;
	v->a[217167] = actions(9136);
	v->a[217168] = 1;
	v->a[217169] = anon_sym_BQUOTE;
	v->a[217170] = actions(9138);
	v->a[217171] = 1;
	v->a[217172] = anon_sym_DOLLAR_BQUOTE;
	v->a[217173] = actions(9144);
	v->a[217174] = 1;
	v->a[217175] = sym__brace_start;
	v->a[217176] = actions(10348);
	v->a[217177] = 1;
	v->a[217178] = sym_word;
	v->a[217179] = actions(10352);
	small_parse_table_10859(v);
}

void	small_parse_table_10859(t_small_parse_table_array *v)
{
	v->a[217180] = 1;
	v->a[217181] = sym_test_operator;
	v->a[217182] = state(2532);
	v->a[217183] = 1;
	v->a[217184] = aux_sym__literal_repeat1;
	v->a[217185] = state(2635);
	v->a[217186] = 1;
	v->a[217187] = sym_concatenation;
	v->a[217188] = actions(9116);
	v->a[217189] = 2;
	v->a[217190] = anon_sym_LPAREN_LPAREN;
	v->a[217191] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217192] = actions(9140);
	v->a[217193] = 2;
	v->a[217194] = anon_sym_LT_LPAREN;
	v->a[217195] = anon_sym_GT_LPAREN;
	v->a[217196] = actions(10350);
	v->a[217197] = 2;
	v->a[217198] = sym_raw_string;
	v->a[217199] = sym_ansi_c_string;
	small_parse_table_10860(v);
}

/* EOF small_parse_table_2171.c */
