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
	v->a[33100] = sym_comment;
	v->a[33101] = actions(559);
	v->a[33102] = 1;
	v->a[33103] = sym_file_descriptor;
	v->a[33104] = actions(1015);
	v->a[33105] = 1;
	v->a[33106] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33107] = actions(1017);
	v->a[33108] = 1;
	v->a[33109] = anon_sym_DOLLAR;
	v->a[33110] = actions(1019);
	v->a[33111] = 1;
	v->a[33112] = anon_sym_DQUOTE;
	v->a[33113] = actions(1021);
	v->a[33114] = 1;
	v->a[33115] = aux_sym_number_token1;
	v->a[33116] = actions(1023);
	v->a[33117] = 1;
	v->a[33118] = aux_sym_number_token2;
	v->a[33119] = actions(1025);
	small_parse_table_1656(v);
}

void	small_parse_table_1656(t_small_parse_table_array *v)
{
	v->a[33120] = 1;
	v->a[33121] = anon_sym_DOLLAR_LBRACE;
	v->a[33122] = actions(1027);
	v->a[33123] = 1;
	v->a[33124] = anon_sym_DOLLAR_LPAREN;
	v->a[33125] = actions(1029);
	v->a[33126] = 1;
	v->a[33127] = anon_sym_BQUOTE;
	v->a[33128] = actions(1031);
	v->a[33129] = 1;
	v->a[33130] = sym__bare_dollar;
	v->a[33131] = state(342);
	v->a[33132] = 1;
	v->a[33133] = aux_sym_command_repeat2;
	v->a[33134] = state(932);
	v->a[33135] = 1;
	v->a[33136] = sym_concatenation;
	v->a[33137] = actions(1013);
	v->a[33138] = 2;
	v->a[33139] = sym_raw_string;
	small_parse_table_1657(v);
}

void	small_parse_table_1657(t_small_parse_table_array *v)
{
	v->a[33140] = sym_word;
	v->a[33141] = state(800);
	v->a[33142] = 6;
	v->a[33143] = sym_arithmetic_expansion;
	v->a[33144] = sym_string;
	v->a[33145] = sym_number;
	v->a[33146] = sym_simple_expansion;
	v->a[33147] = sym_expansion;
	v->a[33148] = sym_command_substitution;
	v->a[33149] = actions(557);
	v->a[33150] = 15;
	v->a[33151] = anon_sym_PIPE;
	v->a[33152] = anon_sym_AMP_AMP;
	v->a[33153] = anon_sym_PIPE_PIPE;
	v->a[33154] = anon_sym_LT;
	v->a[33155] = anon_sym_GT;
	v->a[33156] = anon_sym_GT_GT;
	v->a[33157] = anon_sym_AMP_GT;
	v->a[33158] = anon_sym_AMP_GT_GT;
	v->a[33159] = anon_sym_LT_AMP;
	small_parse_table_1658(v);
}

void	small_parse_table_1658(t_small_parse_table_array *v)
{
	v->a[33160] = anon_sym_GT_AMP;
	v->a[33161] = anon_sym_GT_PIPE;
	v->a[33162] = anon_sym_LT_AMP_DASH;
	v->a[33163] = anon_sym_GT_AMP_DASH;
	v->a[33164] = anon_sym_LT_LT;
	v->a[33165] = anon_sym_LT_LT_DASH;
	v->a[33166] = 3;
	v->a[33167] = actions(3);
	v->a[33168] = 1;
	v->a[33169] = sym_comment;
	v->a[33170] = actions(1247);
	v->a[33171] = 3;
	v->a[33172] = sym_file_descriptor;
	v->a[33173] = sym__concat;
	v->a[33174] = sym__bare_dollar;
	v->a[33175] = actions(1249);
	v->a[33176] = 32;
	v->a[33177] = anon_sym_esac;
	v->a[33178] = anon_sym_LPAREN;
	v->a[33179] = anon_sym_PIPE;
	small_parse_table_1659(v);
}

void	small_parse_table_1659(t_small_parse_table_array *v)
{
	v->a[33180] = anon_sym_SEMI_SEMI;
	v->a[33181] = anon_sym_AMP_AMP;
	v->a[33182] = anon_sym_PIPE_PIPE;
	v->a[33183] = anon_sym_LT;
	v->a[33184] = anon_sym_GT;
	v->a[33185] = anon_sym_GT_GT;
	v->a[33186] = anon_sym_AMP_GT;
	v->a[33187] = anon_sym_AMP_GT_GT;
	v->a[33188] = anon_sym_LT_AMP;
	v->a[33189] = anon_sym_GT_AMP;
	v->a[33190] = anon_sym_GT_PIPE;
	v->a[33191] = anon_sym_LT_AMP_DASH;
	v->a[33192] = anon_sym_GT_AMP_DASH;
	v->a[33193] = anon_sym_LT_LT;
	v->a[33194] = anon_sym_LT_LT_DASH;
	v->a[33195] = aux_sym_heredoc_redirect_token1;
	v->a[33196] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33197] = anon_sym_AMP;
	v->a[33198] = aux_sym_concatenation_token1;
	v->a[33199] = anon_sym_DOLLAR;
	small_parse_table_1660(v);
}

/* EOF small_parse_table_331.c */
