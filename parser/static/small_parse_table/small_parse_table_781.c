/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_781.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3905(t_small_parse_table_array *v)
{
	v->a[78100] = 1;
	v->a[78101] = anon_sym_DOLLAR;
	v->a[78102] = actions(765);
	v->a[78103] = 1;
	v->a[78104] = anon_sym_DQUOTE;
	v->a[78105] = actions(767);
	v->a[78106] = 1;
	v->a[78107] = aux_sym_number_token1;
	v->a[78108] = actions(769);
	v->a[78109] = 1;
	v->a[78110] = aux_sym_number_token2;
	v->a[78111] = actions(771);
	v->a[78112] = 1;
	v->a[78113] = anon_sym_DOLLAR_LBRACE;
	v->a[78114] = actions(773);
	v->a[78115] = 1;
	v->a[78116] = anon_sym_DOLLAR_LPAREN;
	v->a[78117] = actions(775);
	v->a[78118] = 1;
	v->a[78119] = anon_sym_BQUOTE;
	small_parse_table_3906(v);
}

void	small_parse_table_3906(t_small_parse_table_array *v)
{
	v->a[78120] = actions(759);
	v->a[78121] = 2;
	v->a[78122] = sym_raw_string;
	v->a[78123] = sym_word;
	v->a[78124] = state(216);
	v->a[78125] = 2;
	v->a[78126] = sym_concatenation;
	v->a[78127] = aux_sym_for_statement_repeat1;
	v->a[78128] = state(541);
	v->a[78129] = 6;
	v->a[78130] = sym_arithmetic_expansion;
	v->a[78131] = sym_string;
	v->a[78132] = sym_number;
	v->a[78133] = sym_simple_expansion;
	v->a[78134] = sym_expansion;
	v->a[78135] = sym_command_substitution;
	v->a[78136] = 12;
	v->a[78137] = actions(3);
	v->a[78138] = 1;
	v->a[78139] = sym_comment;
	small_parse_table_3907(v);
}

void	small_parse_table_3907(t_small_parse_table_array *v)
{
	v->a[78140] = actions(2873);
	v->a[78141] = 1;
	v->a[78142] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78143] = actions(2877);
	v->a[78144] = 1;
	v->a[78145] = anon_sym_DQUOTE;
	v->a[78146] = actions(2879);
	v->a[78147] = 1;
	v->a[78148] = aux_sym_number_token1;
	v->a[78149] = actions(2881);
	v->a[78150] = 1;
	v->a[78151] = aux_sym_number_token2;
	v->a[78152] = actions(2883);
	v->a[78153] = 1;
	v->a[78154] = anon_sym_DOLLAR_LBRACE;
	v->a[78155] = actions(2885);
	v->a[78156] = 1;
	v->a[78157] = anon_sym_DOLLAR_LPAREN;
	v->a[78158] = actions(2887);
	v->a[78159] = 1;
	small_parse_table_3908(v);
}

void	small_parse_table_3908(t_small_parse_table_array *v)
{
	v->a[78160] = anon_sym_BQUOTE;
	v->a[78161] = actions(3073);
	v->a[78162] = 1;
	v->a[78163] = sym__bare_dollar;
	v->a[78164] = actions(3176);
	v->a[78165] = 1;
	v->a[78166] = anon_sym_DOLLAR;
	v->a[78167] = actions(3071);
	v->a[78168] = 3;
	v->a[78169] = sym_raw_string;
	v->a[78170] = sym__comment_word;
	v->a[78171] = sym_word;
	v->a[78172] = state(956);
	v->a[78173] = 6;
	v->a[78174] = sym_arithmetic_expansion;
	v->a[78175] = sym_string;
	v->a[78176] = sym_number;
	v->a[78177] = sym_simple_expansion;
	v->a[78178] = sym_expansion;
	v->a[78179] = sym_command_substitution;
	small_parse_table_3909(v);
}

void	small_parse_table_3909(t_small_parse_table_array *v)
{
	v->a[78180] = 12;
	v->a[78181] = actions(3);
	v->a[78182] = 1;
	v->a[78183] = sym_comment;
	v->a[78184] = actions(761);
	v->a[78185] = 1;
	v->a[78186] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78187] = actions(763);
	v->a[78188] = 1;
	v->a[78189] = anon_sym_DOLLAR;
	v->a[78190] = actions(765);
	v->a[78191] = 1;
	v->a[78192] = anon_sym_DQUOTE;
	v->a[78193] = actions(767);
	v->a[78194] = 1;
	v->a[78195] = aux_sym_number_token1;
	v->a[78196] = actions(769);
	v->a[78197] = 1;
	v->a[78198] = aux_sym_number_token2;
	v->a[78199] = actions(771);
	small_parse_table_3910(v);
}

/* EOF small_parse_table_781.c */
