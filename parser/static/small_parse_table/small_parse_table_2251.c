/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2251.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11255(t_small_parse_table_array *v)
{
	v->a[225100] = actions(3);
	v->a[225101] = 1;
	v->a[225102] = sym_comment;
	v->a[225103] = actions(363);
	v->a[225104] = 1;
	v->a[225105] = anon_sym_DOLLAR_LBRACK;
	v->a[225106] = actions(367);
	v->a[225107] = 1;
	v->a[225108] = anon_sym_DOLLAR;
	v->a[225109] = actions(371);
	v->a[225110] = 1;
	v->a[225111] = anon_sym_DQUOTE;
	v->a[225112] = actions(375);
	v->a[225113] = 1;
	v->a[225114] = aux_sym_number_token1;
	v->a[225115] = actions(377);
	v->a[225116] = 1;
	v->a[225117] = aux_sym_number_token2;
	v->a[225118] = actions(379);
	v->a[225119] = 1;
	small_parse_table_11256(v);
}

void	small_parse_table_11256(t_small_parse_table_array *v)
{
	v->a[225120] = anon_sym_DOLLAR_LBRACE;
	v->a[225121] = actions(381);
	v->a[225122] = 1;
	v->a[225123] = anon_sym_DOLLAR_LPAREN;
	v->a[225124] = actions(385);
	v->a[225125] = 1;
	v->a[225126] = anon_sym_DOLLAR_BQUOTE;
	v->a[225127] = actions(391);
	v->a[225128] = 1;
	v->a[225129] = sym__brace_start;
	v->a[225130] = actions(5809);
	v->a[225131] = 1;
	v->a[225132] = anon_sym_BQUOTE;
	v->a[225133] = actions(8836);
	v->a[225134] = 1;
	v->a[225135] = sym_word;
	v->a[225136] = actions(8840);
	v->a[225137] = 1;
	v->a[225138] = sym__comment_word;
	v->a[225139] = actions(352);
	small_parse_table_11257(v);
}

void	small_parse_table_11257(t_small_parse_table_array *v)
{
	v->a[225140] = 2;
	v->a[225141] = anon_sym_LPAREN_LPAREN;
	v->a[225142] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225143] = actions(387);
	v->a[225144] = 2;
	v->a[225145] = anon_sym_LT_LPAREN;
	v->a[225146] = anon_sym_GT_LPAREN;
	v->a[225147] = actions(8844);
	v->a[225148] = 2;
	v->a[225149] = sym_test_operator;
	v->a[225150] = sym__special_character;
	v->a[225151] = actions(8842);
	v->a[225152] = 3;
	v->a[225153] = sym__bare_dollar;
	v->a[225154] = sym_raw_string;
	v->a[225155] = sym_ansi_c_string;
	v->a[225156] = state(2730);
	v->a[225157] = 9;
	v->a[225158] = sym_arithmetic_expansion;
	v->a[225159] = sym_brace_expression;
	small_parse_table_11258(v);
}

void	small_parse_table_11258(t_small_parse_table_array *v)
{
	v->a[225160] = sym_string;
	v->a[225161] = sym_translated_string;
	v->a[225162] = sym_number;
	v->a[225163] = sym_simple_expansion;
	v->a[225164] = sym_expansion;
	v->a[225165] = sym_command_substitution;
	v->a[225166] = sym_process_substitution;
	v->a[225167] = 18;
	v->a[225168] = actions(3);
	v->a[225169] = 1;
	v->a[225170] = sym_comment;
	v->a[225171] = actions(8372);
	v->a[225172] = 1;
	v->a[225173] = anon_sym_DOLLAR_LBRACK;
	v->a[225174] = actions(8378);
	v->a[225175] = 1;
	v->a[225176] = anon_sym_DQUOTE;
	v->a[225177] = actions(8382);
	v->a[225178] = 1;
	v->a[225179] = aux_sym_number_token1;
	small_parse_table_11259(v);
}

void	small_parse_table_11259(t_small_parse_table_array *v)
{
	v->a[225180] = actions(8384);
	v->a[225181] = 1;
	v->a[225182] = aux_sym_number_token2;
	v->a[225183] = actions(8386);
	v->a[225184] = 1;
	v->a[225185] = anon_sym_DOLLAR_LBRACE;
	v->a[225186] = actions(8388);
	v->a[225187] = 1;
	v->a[225188] = anon_sym_DOLLAR_LPAREN;
	v->a[225189] = actions(8390);
	v->a[225190] = 1;
	v->a[225191] = anon_sym_BQUOTE;
	v->a[225192] = actions(8392);
	v->a[225193] = 1;
	v->a[225194] = anon_sym_DOLLAR_BQUOTE;
	v->a[225195] = actions(8402);
	v->a[225196] = 1;
	v->a[225197] = sym__brace_start;
	v->a[225198] = actions(10472);
	v->a[225199] = 1;
	small_parse_table_11260(v);
}

/* EOF small_parse_table_2251.c */
