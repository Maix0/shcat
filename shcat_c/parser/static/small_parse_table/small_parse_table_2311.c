/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2311.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11555(t_small_parse_table_array *v)
{
	v->a[231100] = sym_string;
	v->a[231101] = sym_translated_string;
	v->a[231102] = sym_number;
	v->a[231103] = sym_simple_expansion;
	v->a[231104] = sym_expansion;
	v->a[231105] = sym_command_substitution;
	v->a[231106] = sym_process_substitution;
	v->a[231107] = 18;
	v->a[231108] = actions(3);
	v->a[231109] = 1;
	v->a[231110] = sym_comment;
	v->a[231111] = actions(2792);
	v->a[231112] = 1;
	v->a[231113] = aux_sym_number_token1;
	v->a[231114] = actions(2794);
	v->a[231115] = 1;
	v->a[231116] = aux_sym_number_token2;
	v->a[231117] = actions(2798);
	v->a[231118] = 1;
	v->a[231119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11556(v);
}

void	small_parse_table_11556(t_small_parse_table_array *v)
{
	v->a[231120] = actions(2810);
	v->a[231121] = 1;
	v->a[231122] = sym__brace_start;
	v->a[231123] = actions(10500);
	v->a[231124] = 1;
	v->a[231125] = sym_word;
	v->a[231126] = actions(10504);
	v->a[231127] = 1;
	v->a[231128] = anon_sym_DOLLAR_LBRACK;
	v->a[231129] = actions(10508);
	v->a[231130] = 1;
	v->a[231131] = anon_sym_DQUOTE;
	v->a[231132] = actions(10512);
	v->a[231133] = 1;
	v->a[231134] = anon_sym_DOLLAR_LBRACE;
	v->a[231135] = actions(10514);
	v->a[231136] = 1;
	v->a[231137] = anon_sym_BQUOTE;
	v->a[231138] = actions(10516);
	v->a[231139] = 1;
	small_parse_table_11557(v);
}

void	small_parse_table_11557(t_small_parse_table_array *v)
{
	v->a[231140] = anon_sym_DOLLAR_BQUOTE;
	v->a[231141] = actions(10520);
	v->a[231142] = 1;
	v->a[231143] = sym__comment_word;
	v->a[231144] = actions(10920);
	v->a[231145] = 1;
	v->a[231146] = anon_sym_DOLLAR;
	v->a[231147] = actions(10502);
	v->a[231148] = 2;
	v->a[231149] = anon_sym_LPAREN_LPAREN;
	v->a[231150] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[231151] = actions(10506);
	v->a[231152] = 2;
	v->a[231153] = sym_test_operator;
	v->a[231154] = sym__special_character;
	v->a[231155] = actions(10518);
	v->a[231156] = 2;
	v->a[231157] = anon_sym_LT_LPAREN;
	v->a[231158] = anon_sym_GT_LPAREN;
	v->a[231159] = actions(10510);
	small_parse_table_11558(v);
}

void	small_parse_table_11558(t_small_parse_table_array *v)
{
	v->a[231160] = 3;
	v->a[231161] = sym__bare_dollar;
	v->a[231162] = sym_raw_string;
	v->a[231163] = sym_ansi_c_string;
	v->a[231164] = state(1569);
	v->a[231165] = 9;
	v->a[231166] = sym_arithmetic_expansion;
	v->a[231167] = sym_brace_expression;
	v->a[231168] = sym_string;
	v->a[231169] = sym_translated_string;
	v->a[231170] = sym_number;
	v->a[231171] = sym_simple_expansion;
	v->a[231172] = sym_expansion;
	v->a[231173] = sym_command_substitution;
	v->a[231174] = sym_process_substitution;
	v->a[231175] = 21;
	v->a[231176] = actions(71);
	v->a[231177] = 1;
	v->a[231178] = sym_comment;
	v->a[231179] = actions(9364);
	small_parse_table_11559(v);
}

void	small_parse_table_11559(t_small_parse_table_array *v)
{
	v->a[231180] = 1;
	v->a[231181] = anon_sym_LPAREN;
	v->a[231182] = actions(9366);
	v->a[231183] = 1;
	v->a[231184] = anon_sym_BANG;
	v->a[231185] = actions(9372);
	v->a[231186] = 1;
	v->a[231187] = anon_sym_TILDE;
	v->a[231188] = actions(9374);
	v->a[231189] = 1;
	v->a[231190] = anon_sym_DOLLAR;
	v->a[231191] = actions(9376);
	v->a[231192] = 1;
	v->a[231193] = anon_sym_DQUOTE;
	v->a[231194] = actions(9378);
	v->a[231195] = 1;
	v->a[231196] = aux_sym_number_token1;
	v->a[231197] = actions(9380);
	v->a[231198] = 1;
	v->a[231199] = aux_sym_number_token2;
	small_parse_table_11560(v);
}

/* EOF small_parse_table_2311.c */
