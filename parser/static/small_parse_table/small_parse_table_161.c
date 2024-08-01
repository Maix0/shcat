/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_161.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_805(t_small_parse_table_array *v)
{
	v->a[16100] = 1;
	v->a[16101] = sym_comment;
	v->a[16102] = actions(349);
	v->a[16103] = 1;
	v->a[16104] = sym_variable_name;
	v->a[16105] = actions(351);
	v->a[16106] = 1;
	v->a[16107] = sym__bare_dollar;
	v->a[16108] = actions(347);
	v->a[16109] = 2;
	v->a[16110] = aux_sym__simple_variable_name_token1;
	v->a[16111] = aux_sym__multiline_variable_name_token1;
	v->a[16112] = actions(345);
	v->a[16113] = 8;
	v->a[16114] = anon_sym_BANG;
	v->a[16115] = anon_sym_DASH;
	v->a[16116] = anon_sym_STAR;
	v->a[16117] = anon_sym_QMARK;
	v->a[16118] = anon_sym_DOLLAR;
	v->a[16119] = anon_sym_POUND;
	small_parse_table_806(v);
}

void	small_parse_table_806(t_small_parse_table_array *v)
{
	v->a[16120] = anon_sym_AT;
	v->a[16121] = anon_sym_0;
	v->a[16122] = actions(343);
	v->a[16123] = 16;
	v->a[16124] = anon_sym_PIPE;
	v->a[16125] = anon_sym_AMP_AMP;
	v->a[16126] = anon_sym_PIPE_PIPE;
	v->a[16127] = anon_sym_LT;
	v->a[16128] = anon_sym_GT;
	v->a[16129] = anon_sym_GT_GT;
	v->a[16130] = anon_sym_LT_LT;
	v->a[16131] = aux_sym_heredoc_redirect_token1;
	v->a[16132] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16133] = anon_sym_DQUOTE;
	v->a[16134] = sym_raw_string;
	v->a[16135] = sym_number;
	v->a[16136] = anon_sym_DOLLAR_LBRACE;
	v->a[16137] = anon_sym_DOLLAR_LPAREN;
	v->a[16138] = anon_sym_BQUOTE;
	v->a[16139] = sym_word;
	small_parse_table_807(v);
}

void	small_parse_table_807(t_small_parse_table_array *v)
{
	v->a[16140] = 14;
	v->a[16141] = actions(3);
	v->a[16142] = 1;
	v->a[16143] = sym_comment;
	v->a[16144] = actions(25);
	v->a[16145] = 1;
	v->a[16146] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16147] = actions(27);
	v->a[16148] = 1;
	v->a[16149] = anon_sym_DOLLAR;
	v->a[16150] = actions(29);
	v->a[16151] = 1;
	v->a[16152] = anon_sym_DQUOTE;
	v->a[16153] = actions(33);
	v->a[16154] = 1;
	v->a[16155] = anon_sym_DOLLAR_LBRACE;
	v->a[16156] = actions(35);
	v->a[16157] = 1;
	v->a[16158] = anon_sym_DOLLAR_LPAREN;
	v->a[16159] = actions(37);
	small_parse_table_808(v);
}

void	small_parse_table_808(t_small_parse_table_array *v)
{
	v->a[16160] = 1;
	v->a[16161] = anon_sym_BQUOTE;
	v->a[16162] = actions(407);
	v->a[16163] = 1;
	v->a[16164] = ts_builtin_sym_end;
	v->a[16165] = actions(413);
	v->a[16166] = 1;
	v->a[16167] = sym__bare_dollar;
	v->a[16168] = state(167);
	v->a[16169] = 1;
	v->a[16170] = aux_sym_command_repeat2;
	v->a[16171] = state(564);
	v->a[16172] = 1;
	v->a[16173] = sym_concatenation;
	v->a[16174] = actions(409);
	v->a[16175] = 3;
	v->a[16176] = sym_raw_string;
	v->a[16177] = sym_number;
	v->a[16178] = sym_word;
	v->a[16179] = state(273);
	small_parse_table_809(v);
}

void	small_parse_table_809(t_small_parse_table_array *v)
{
	v->a[16180] = 5;
	v->a[16181] = sym_arithmetic_expansion;
	v->a[16182] = sym_string;
	v->a[16183] = sym_simple_expansion;
	v->a[16184] = sym_expansion;
	v->a[16185] = sym_command_substitution;
	v->a[16186] = actions(411);
	v->a[16187] = 10;
	v->a[16188] = anon_sym_PIPE;
	v->a[16189] = anon_sym_SEMI_SEMI;
	v->a[16190] = anon_sym_AMP_AMP;
	v->a[16191] = anon_sym_PIPE_PIPE;
	v->a[16192] = anon_sym_LT;
	v->a[16193] = anon_sym_GT;
	v->a[16194] = anon_sym_GT_GT;
	v->a[16195] = anon_sym_LT_LT;
	v->a[16196] = aux_sym_heredoc_redirect_token1;
	v->a[16197] = anon_sym_SEMI;
	v->a[16198] = 13;
	v->a[16199] = actions(3);
	small_parse_table_810(v);
}

/* EOF small_parse_table_161.c */
