/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1871.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9355(t_small_parse_table_array *v)
{
	v->a[187100] = aux_sym_number_token2;
	v->a[187101] = anon_sym_DOLLAR_LPAREN;
	v->a[187102] = anon_sym_BQUOTE;
	v->a[187103] = sym_word;
	v->a[187104] = actions(1288);
	v->a[187105] = 21;
	v->a[187106] = sym_file_descriptor;
	v->a[187107] = sym_variable_name;
	v->a[187108] = sym_test_operator;
	v->a[187109] = sym__brace_start;
	v->a[187110] = anon_sym_LPAREN_LPAREN;
	v->a[187111] = anon_sym_GT_GT;
	v->a[187112] = anon_sym_AMP_GT_GT;
	v->a[187113] = anon_sym_GT_PIPE;
	v->a[187114] = anon_sym_LT_AMP_DASH;
	v->a[187115] = anon_sym_GT_AMP_DASH;
	v->a[187116] = anon_sym_LT_LT_LT;
	v->a[187117] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[187118] = anon_sym_DOLLAR_LBRACK;
	v->a[187119] = sym__special_character;
	small_parse_table_9356(v);
}

void	small_parse_table_9356(t_small_parse_table_array *v)
{
	v->a[187120] = anon_sym_DQUOTE;
	v->a[187121] = sym_raw_string;
	v->a[187122] = sym_ansi_c_string;
	v->a[187123] = anon_sym_DOLLAR_LBRACE;
	v->a[187124] = anon_sym_DOLLAR_BQUOTE;
	v->a[187125] = anon_sym_LT_LPAREN;
	v->a[187126] = anon_sym_GT_LPAREN;
	v->a[187127] = 25;
	v->a[187128] = actions(71);
	v->a[187129] = 1;
	v->a[187130] = sym_comment;
	v->a[187131] = actions(7777);
	v->a[187132] = 1;
	v->a[187133] = sym_word;
	v->a[187134] = actions(7781);
	v->a[187135] = 1;
	v->a[187136] = anon_sym_LPAREN;
	v->a[187137] = actions(7783);
	v->a[187138] = 1;
	v->a[187139] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_9357(v);
}

void	small_parse_table_9357(t_small_parse_table_array *v)
{
	v->a[187140] = actions(7785);
	v->a[187141] = 1;
	v->a[187142] = anon_sym_DOLLAR;
	v->a[187143] = actions(7787);
	v->a[187144] = 1;
	v->a[187145] = sym__special_character;
	v->a[187146] = actions(7789);
	v->a[187147] = 1;
	v->a[187148] = anon_sym_DQUOTE;
	v->a[187149] = actions(7793);
	v->a[187150] = 1;
	v->a[187151] = aux_sym_number_token1;
	v->a[187152] = actions(7795);
	v->a[187153] = 1;
	v->a[187154] = aux_sym_number_token2;
	v->a[187155] = actions(7797);
	v->a[187156] = 1;
	v->a[187157] = anon_sym_DOLLAR_LBRACE;
	v->a[187158] = actions(7799);
	v->a[187159] = 1;
	small_parse_table_9358(v);
}

void	small_parse_table_9358(t_small_parse_table_array *v)
{
	v->a[187160] = anon_sym_RBRACE3;
	v->a[187161] = actions(7801);
	v->a[187162] = 1;
	v->a[187163] = anon_sym_DOLLAR_LPAREN;
	v->a[187164] = actions(7803);
	v->a[187165] = 1;
	v->a[187166] = anon_sym_BQUOTE;
	v->a[187167] = actions(7805);
	v->a[187168] = 1;
	v->a[187169] = anon_sym_DOLLAR_BQUOTE;
	v->a[187170] = actions(7809);
	v->a[187171] = 1;
	v->a[187172] = sym_variable_name;
	v->a[187173] = actions(7811);
	v->a[187174] = 1;
	v->a[187175] = sym_test_operator;
	v->a[187176] = actions(7813);
	v->a[187177] = 1;
	v->a[187178] = sym__expansion_word;
	v->a[187179] = actions(7815);
	small_parse_table_9359(v);
}

void	small_parse_table_9359(t_small_parse_table_array *v)
{
	v->a[187180] = 1;
	v->a[187181] = sym__brace_start;
	v->a[187182] = state(6346);
	v->a[187183] = 1;
	v->a[187184] = sym_command_substitution;
	v->a[187185] = state(6482);
	v->a[187186] = 1;
	v->a[187187] = aux_sym__literal_repeat1;
	v->a[187188] = actions(7779);
	v->a[187189] = 2;
	v->a[187190] = anon_sym_LPAREN_LPAREN;
	v->a[187191] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[187192] = actions(7791);
	v->a[187193] = 2;
	v->a[187194] = sym_raw_string;
	v->a[187195] = sym_ansi_c_string;
	v->a[187196] = actions(7807);
	v->a[187197] = 2;
	v->a[187198] = anon_sym_LT_LPAREN;
	v->a[187199] = anon_sym_GT_LPAREN;
	small_parse_table_9360(v);
}

/* EOF small_parse_table_1871.c */
