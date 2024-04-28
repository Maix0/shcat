/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1951.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9755(t_small_parse_table_array *v)
{
	v->a[195100] = actions(8581);
	v->a[195101] = 1;
	v->a[195102] = aux_sym_number_token1;
	v->a[195103] = actions(8583);
	v->a[195104] = 1;
	v->a[195105] = aux_sym_number_token2;
	v->a[195106] = actions(8585);
	v->a[195107] = 1;
	v->a[195108] = anon_sym_DOLLAR_LBRACE;
	v->a[195109] = actions(8587);
	v->a[195110] = 1;
	v->a[195111] = anon_sym_DOLLAR_LPAREN;
	v->a[195112] = actions(8589);
	v->a[195113] = 1;
	v->a[195114] = anon_sym_BQUOTE;
	v->a[195115] = actions(8591);
	v->a[195116] = 1;
	v->a[195117] = anon_sym_DOLLAR_BQUOTE;
	v->a[195118] = actions(8595);
	v->a[195119] = 1;
	small_parse_table_9756(v);
}

void	small_parse_table_9756(t_small_parse_table_array *v)
{
	v->a[195120] = sym_test_operator;
	v->a[195121] = actions(8597);
	v->a[195122] = 1;
	v->a[195123] = sym__brace_start;
	v->a[195124] = actions(8732);
	v->a[195125] = 1;
	v->a[195126] = anon_sym_RPAREN;
	v->a[195127] = state(5365);
	v->a[195128] = 1;
	v->a[195129] = aux_sym__literal_repeat1;
	v->a[195130] = actions(8567);
	v->a[195131] = 2;
	v->a[195132] = anon_sym_LPAREN_LPAREN;
	v->a[195133] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195134] = actions(8579);
	v->a[195135] = 2;
	v->a[195136] = sym_raw_string;
	v->a[195137] = sym_ansi_c_string;
	v->a[195138] = actions(8593);
	v->a[195139] = 2;
	small_parse_table_9757(v);
}

void	small_parse_table_9757(t_small_parse_table_array *v)
{
	v->a[195140] = anon_sym_LT_LPAREN;
	v->a[195141] = anon_sym_GT_LPAREN;
	v->a[195142] = state(3604);
	v->a[195143] = 2;
	v->a[195144] = sym_concatenation;
	v->a[195145] = aux_sym_for_statement_repeat1;
	v->a[195146] = state(5045);
	v->a[195147] = 9;
	v->a[195148] = sym_arithmetic_expansion;
	v->a[195149] = sym_brace_expression;
	v->a[195150] = sym_string;
	v->a[195151] = sym_translated_string;
	v->a[195152] = sym_number;
	v->a[195153] = sym_simple_expansion;
	v->a[195154] = sym_expansion;
	v->a[195155] = sym_command_substitution;
	v->a[195156] = sym_process_substitution;
	v->a[195157] = 21;
	v->a[195158] = actions(3);
	v->a[195159] = 1;
	small_parse_table_9758(v);
}

void	small_parse_table_9758(t_small_parse_table_array *v)
{
	v->a[195160] = sym_comment;
	v->a[195161] = actions(3729);
	v->a[195162] = 1;
	v->a[195163] = anon_sym_DOLLAR_LBRACK;
	v->a[195164] = actions(3731);
	v->a[195165] = 1;
	v->a[195166] = anon_sym_DOLLAR;
	v->a[195167] = actions(3733);
	v->a[195168] = 1;
	v->a[195169] = sym__special_character;
	v->a[195170] = actions(3735);
	v->a[195171] = 1;
	v->a[195172] = anon_sym_DQUOTE;
	v->a[195173] = actions(3737);
	v->a[195174] = 1;
	v->a[195175] = aux_sym_number_token1;
	v->a[195176] = actions(3739);
	v->a[195177] = 1;
	v->a[195178] = aux_sym_number_token2;
	v->a[195179] = actions(3741);
	small_parse_table_9759(v);
}

void	small_parse_table_9759(t_small_parse_table_array *v)
{
	v->a[195180] = 1;
	v->a[195181] = anon_sym_DOLLAR_LBRACE;
	v->a[195182] = actions(3743);
	v->a[195183] = 1;
	v->a[195184] = anon_sym_DOLLAR_LPAREN;
	v->a[195185] = actions(3745);
	v->a[195186] = 1;
	v->a[195187] = anon_sym_BQUOTE;
	v->a[195188] = actions(3747);
	v->a[195189] = 1;
	v->a[195190] = anon_sym_DOLLAR_BQUOTE;
	v->a[195191] = actions(3753);
	v->a[195192] = 1;
	v->a[195193] = sym_test_operator;
	v->a[195194] = actions(3755);
	v->a[195195] = 1;
	v->a[195196] = sym__brace_start;
	v->a[195197] = actions(8734);
	v->a[195198] = 1;
	v->a[195199] = aux_sym_heredoc_redirect_token1;
	small_parse_table_9760(v);
}

/* EOF small_parse_table_1951.c */
