/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_331.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1655(t_small_parse_table_array *v)
{
	v->a[33100] = anon_sym_DOLLAR;
	v->a[33101] = anon_sym_DQUOTE;
	v->a[33102] = sym_raw_string;
	v->a[33103] = sym_number;
	v->a[33104] = anon_sym_DOLLAR_LBRACE;
	v->a[33105] = anon_sym_DOLLAR_LPAREN;
	v->a[33106] = anon_sym_BQUOTE;
	v->a[33107] = sym_word;
	v->a[33108] = anon_sym_SEMI;
	v->a[33109] = 6;
	v->a[33110] = actions(3);
	v->a[33111] = 1;
	v->a[33112] = sym_comment;
	v->a[33113] = actions(1248);
	v->a[33114] = 1;
	v->a[33115] = aux_sym_concatenation_token1;
	v->a[33116] = actions(1251);
	v->a[33117] = 1;
	v->a[33118] = sym__concat;
	v->a[33119] = state(437);
	small_parse_table_1656(v);
}

void	small_parse_table_1656(t_small_parse_table_array *v)
{
	v->a[33120] = 1;
	v->a[33121] = aux_sym_concatenation_repeat1;
	v->a[33122] = actions(1092);
	v->a[33123] = 2;
	v->a[33124] = sym_file_descriptor;
	v->a[33125] = sym__bare_dollar;
	v->a[33126] = actions(1094);
	v->a[33127] = 26;
	v->a[33128] = anon_sym_esac;
	v->a[33129] = anon_sym_PIPE;
	v->a[33130] = anon_sym_SEMI_SEMI;
	v->a[33131] = anon_sym_AMP_AMP;
	v->a[33132] = anon_sym_PIPE_PIPE;
	v->a[33133] = anon_sym_LT;
	v->a[33134] = anon_sym_GT;
	v->a[33135] = anon_sym_GT_GT;
	v->a[33136] = anon_sym_LT_AMP;
	v->a[33137] = anon_sym_GT_AMP;
	v->a[33138] = anon_sym_GT_PIPE;
	v->a[33139] = anon_sym_LT_GT;
	small_parse_table_1657(v);
}

void	small_parse_table_1657(t_small_parse_table_array *v)
{
	v->a[33140] = anon_sym_LT_LT;
	v->a[33141] = anon_sym_LT_LT_DASH;
	v->a[33142] = aux_sym_heredoc_redirect_token1;
	v->a[33143] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33144] = anon_sym_AMP;
	v->a[33145] = anon_sym_DOLLAR;
	v->a[33146] = anon_sym_DQUOTE;
	v->a[33147] = sym_raw_string;
	v->a[33148] = sym_number;
	v->a[33149] = anon_sym_DOLLAR_LBRACE;
	v->a[33150] = anon_sym_DOLLAR_LPAREN;
	v->a[33151] = anon_sym_BQUOTE;
	v->a[33152] = sym_word;
	v->a[33153] = anon_sym_SEMI;
	v->a[33154] = 14;
	v->a[33155] = actions(3);
	v->a[33156] = 1;
	v->a[33157] = sym_comment;
	v->a[33158] = actions(463);
	v->a[33159] = 1;
	small_parse_table_1658(v);
}

void	small_parse_table_1658(t_small_parse_table_array *v)
{
	v->a[33160] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33161] = actions(465);
	v->a[33162] = 1;
	v->a[33163] = anon_sym_DOLLAR;
	v->a[33164] = actions(467);
	v->a[33165] = 1;
	v->a[33166] = anon_sym_DQUOTE;
	v->a[33167] = actions(469);
	v->a[33168] = 1;
	v->a[33169] = anon_sym_DOLLAR_LBRACE;
	v->a[33170] = actions(471);
	v->a[33171] = 1;
	v->a[33172] = anon_sym_DOLLAR_LPAREN;
	v->a[33173] = actions(473);
	v->a[33174] = 1;
	v->a[33175] = anon_sym_BQUOTE;
	v->a[33176] = actions(475);
	v->a[33177] = 1;
	v->a[33178] = sym__bare_dollar;
	v->a[33179] = actions(503);
	small_parse_table_1659(v);
}

void	small_parse_table_1659(t_small_parse_table_array *v)
{
	v->a[33180] = 1;
	v->a[33181] = sym_file_descriptor;
	v->a[33182] = state(432);
	v->a[33183] = 1;
	v->a[33184] = aux_sym_command_repeat2;
	v->a[33185] = state(662);
	v->a[33186] = 1;
	v->a[33187] = sym_concatenation;
	v->a[33188] = actions(963);
	v->a[33189] = 3;
	v->a[33190] = sym_raw_string;
	v->a[33191] = sym_number;
	v->a[33192] = sym_word;
	v->a[33193] = state(713);
	v->a[33194] = 5;
	v->a[33195] = sym_arithmetic_expansion;
	v->a[33196] = sym_string;
	v->a[33197] = sym_simple_expansion;
	v->a[33198] = sym_expansion;
	v->a[33199] = sym_command_substitution;
	small_parse_table_1660(v);
}

/* EOF small_parse_table_331.c */
