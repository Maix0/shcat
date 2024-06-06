/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1161.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5805(t_small_parse_table_array *v)
{
	v->a[116100] = 1;
	v->a[116101] = aux_sym_number_token1;
	v->a[116102] = actions(1747);
	v->a[116103] = 1;
	v->a[116104] = aux_sym_number_token2;
	v->a[116105] = actions(1751);
	v->a[116106] = 1;
	v->a[116107] = anon_sym_DOLLAR_LPAREN;
	v->a[116108] = actions(1761);
	v->a[116109] = 1;
	v->a[116110] = sym__brace_start;
	v->a[116111] = actions(6789);
	v->a[116112] = 1;
	v->a[116113] = sym_word;
	v->a[116114] = actions(6791);
	v->a[116115] = 1;
	v->a[116116] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116117] = actions(6795);
	v->a[116118] = 1;
	v->a[116119] = sym__special_character;
	small_parse_table_5806(v);
}

void	small_parse_table_5806(t_small_parse_table_array *v)
{
	v->a[116120] = actions(6797);
	v->a[116121] = 1;
	v->a[116122] = anon_sym_DQUOTE;
	v->a[116123] = actions(6801);
	v->a[116124] = 1;
	v->a[116125] = anon_sym_DOLLAR_LBRACE;
	v->a[116126] = actions(6803);
	v->a[116127] = 1;
	v->a[116128] = anon_sym_BQUOTE;
	v->a[116129] = actions(6805);
	v->a[116130] = 1;
	v->a[116131] = anon_sym_DOLLAR_BQUOTE;
	v->a[116132] = actions(6807);
	v->a[116133] = 1;
	v->a[116134] = sym__comment_word;
	v->a[116135] = actions(6829);
	v->a[116136] = 1;
	v->a[116137] = anon_sym_DOLLAR;
	v->a[116138] = actions(6799);
	v->a[116139] = 3;
	small_parse_table_5807(v);
}

void	small_parse_table_5807(t_small_parse_table_array *v)
{
	v->a[116140] = sym_test_operator;
	v->a[116141] = sym__bare_dollar;
	v->a[116142] = sym_raw_string;
	v->a[116143] = state(1108);
	v->a[116144] = 7;
	v->a[116145] = sym_arithmetic_expansion;
	v->a[116146] = sym_brace_expression;
	v->a[116147] = sym_string;
	v->a[116148] = sym_number;
	v->a[116149] = sym_simple_expansion;
	v->a[116150] = sym_expansion;
	v->a[116151] = sym_command_substitution;
	v->a[116152] = 16;
	v->a[116153] = actions(3);
	v->a[116154] = 1;
	v->a[116155] = sym_comment;
	v->a[116156] = actions(3078);
	v->a[116157] = 1;
	v->a[116158] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116159] = actions(3084);
	small_parse_table_5808(v);
}

void	small_parse_table_5808(t_small_parse_table_array *v)
{
	v->a[116160] = 1;
	v->a[116161] = anon_sym_DQUOTE;
	v->a[116162] = actions(3088);
	v->a[116163] = 1;
	v->a[116164] = aux_sym_number_token1;
	v->a[116165] = actions(3090);
	v->a[116166] = 1;
	v->a[116167] = aux_sym_number_token2;
	v->a[116168] = actions(3092);
	v->a[116169] = 1;
	v->a[116170] = anon_sym_DOLLAR_LBRACE;
	v->a[116171] = actions(3094);
	v->a[116172] = 1;
	v->a[116173] = anon_sym_DOLLAR_LPAREN;
	v->a[116174] = actions(3096);
	v->a[116175] = 1;
	v->a[116176] = anon_sym_BQUOTE;
	v->a[116177] = actions(3098);
	v->a[116178] = 1;
	v->a[116179] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5809(v);
}

void	small_parse_table_5809(t_small_parse_table_array *v)
{
	v->a[116180] = actions(3102);
	v->a[116181] = 1;
	v->a[116182] = sym__brace_start;
	v->a[116183] = actions(6597);
	v->a[116184] = 1;
	v->a[116185] = sym_word;
	v->a[116186] = actions(6599);
	v->a[116187] = 1;
	v->a[116188] = sym__special_character;
	v->a[116189] = actions(6603);
	v->a[116190] = 1;
	v->a[116191] = sym__comment_word;
	v->a[116192] = actions(6831);
	v->a[116193] = 1;
	v->a[116194] = anon_sym_DOLLAR;
	v->a[116195] = actions(6601);
	v->a[116196] = 3;
	v->a[116197] = sym_test_operator;
	v->a[116198] = sym__bare_dollar;
	v->a[116199] = sym_raw_string;
	small_parse_table_5810(v);
}

/* EOF small_parse_table_1161.c */
