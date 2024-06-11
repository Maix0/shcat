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
	v->a[33100] = 1;
	v->a[33101] = anon_sym_DQUOTE;
	v->a[33102] = actions(67);
	v->a[33103] = 1;
	v->a[33104] = anon_sym_DOLLAR_LBRACE;
	v->a[33105] = actions(69);
	v->a[33106] = 1;
	v->a[33107] = anon_sym_DOLLAR_LPAREN;
	v->a[33108] = actions(71);
	v->a[33109] = 1;
	v->a[33110] = anon_sym_BQUOTE;
	v->a[33111] = actions(75);
	v->a[33112] = 1;
	v->a[33113] = sym_variable_name;
	v->a[33114] = actions(1201);
	v->a[33115] = 1;
	v->a[33116] = sym_file_descriptor;
	v->a[33117] = state(189);
	v->a[33118] = 1;
	v->a[33119] = sym_command_name;
	small_parse_table_1656(v);
}

void	small_parse_table_1656(t_small_parse_table_array *v)
{
	v->a[33120] = state(647);
	v->a[33121] = 1;
	v->a[33122] = sym_concatenation;
	v->a[33123] = state(746);
	v->a[33124] = 1;
	v->a[33125] = aux_sym_command_repeat1;
	v->a[33126] = state(906);
	v->a[33127] = 1;
	v->a[33128] = sym_variable_assignment;
	v->a[33129] = state(1328);
	v->a[33130] = 1;
	v->a[33131] = sym_command;
	v->a[33132] = state(1329);
	v->a[33133] = 1;
	v->a[33134] = sym_subshell;
	v->a[33135] = state(1477);
	v->a[33136] = 1;
	v->a[33137] = sym_file_redirect;
	v->a[33138] = actions(1199);
	v->a[33139] = 2;
	small_parse_table_1657(v);
}

void	small_parse_table_1657(t_small_parse_table_array *v)
{
	v->a[33140] = anon_sym_LT_AMP_DASH;
	v->a[33141] = anon_sym_GT_AMP_DASH;
	v->a[33142] = actions(65);
	v->a[33143] = 3;
	v->a[33144] = sym_raw_string;
	v->a[33145] = sym_number;
	v->a[33146] = sym_word;
	v->a[33147] = state(394);
	v->a[33148] = 5;
	v->a[33149] = sym_arithmetic_expansion;
	v->a[33150] = sym_string;
	v->a[33151] = sym_simple_expansion;
	v->a[33152] = sym_expansion;
	v->a[33153] = sym_command_substitution;
	v->a[33154] = actions(1197);
	v->a[33155] = 8;
	v->a[33156] = anon_sym_LT;
	v->a[33157] = anon_sym_GT;
	v->a[33158] = anon_sym_GT_GT;
	v->a[33159] = anon_sym_AMP_GT;
	small_parse_table_1658(v);
}

void	small_parse_table_1658(t_small_parse_table_array *v)
{
	v->a[33160] = anon_sym_AMP_GT_GT;
	v->a[33161] = anon_sym_LT_AMP;
	v->a[33162] = anon_sym_GT_AMP;
	v->a[33163] = anon_sym_GT_PIPE;
	v->a[33164] = 3;
	v->a[33165] = actions(3);
	v->a[33166] = 1;
	v->a[33167] = sym_comment;
	v->a[33168] = actions(1141);
	v->a[33169] = 3;
	v->a[33170] = sym_file_descriptor;
	v->a[33171] = sym__concat;
	v->a[33172] = sym__bare_dollar;
	v->a[33173] = actions(1139);
	v->a[33174] = 31;
	v->a[33175] = anon_sym_esac;
	v->a[33176] = anon_sym_LPAREN;
	v->a[33177] = anon_sym_PIPE;
	v->a[33178] = anon_sym_SEMI_SEMI;
	v->a[33179] = anon_sym_AMP_AMP;
	small_parse_table_1659(v);
}

void	small_parse_table_1659(t_small_parse_table_array *v)
{
	v->a[33180] = anon_sym_PIPE_PIPE;
	v->a[33181] = anon_sym_LT;
	v->a[33182] = anon_sym_GT;
	v->a[33183] = anon_sym_GT_GT;
	v->a[33184] = anon_sym_AMP_GT;
	v->a[33185] = anon_sym_AMP_GT_GT;
	v->a[33186] = anon_sym_LT_AMP;
	v->a[33187] = anon_sym_GT_AMP;
	v->a[33188] = anon_sym_GT_PIPE;
	v->a[33189] = anon_sym_LT_AMP_DASH;
	v->a[33190] = anon_sym_GT_AMP_DASH;
	v->a[33191] = anon_sym_LT_LT;
	v->a[33192] = anon_sym_LT_LT_DASH;
	v->a[33193] = aux_sym_heredoc_redirect_token1;
	v->a[33194] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33195] = anon_sym_AMP;
	v->a[33196] = aux_sym_concatenation_token1;
	v->a[33197] = anon_sym_DOLLAR;
	v->a[33198] = anon_sym_DQUOTE;
	v->a[33199] = sym_raw_string;
	small_parse_table_1660(v);
}

/* EOF small_parse_table_331.c */
