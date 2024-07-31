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
	v->a[16100] = actions(349);
	v->a[16101] = 2;
	v->a[16102] = aux_sym__simple_variable_name_token1;
	v->a[16103] = aux_sym__multiline_variable_name_token1;
	v->a[16104] = actions(347);
	v->a[16105] = 8;
	v->a[16106] = anon_sym_BANG;
	v->a[16107] = anon_sym_DASH;
	v->a[16108] = anon_sym_STAR;
	v->a[16109] = anon_sym_QMARK;
	v->a[16110] = anon_sym_DOLLAR;
	v->a[16111] = anon_sym_POUND;
	v->a[16112] = anon_sym_AT;
	v->a[16113] = anon_sym_0;
	v->a[16114] = actions(345);
	v->a[16115] = 23;
	v->a[16116] = anon_sym_PIPE;
	v->a[16117] = anon_sym_SEMI_SEMI;
	v->a[16118] = anon_sym_AMP_AMP;
	v->a[16119] = anon_sym_PIPE_PIPE;
	small_parse_table_806(v);
}

void	small_parse_table_806(t_small_parse_table_array *v)
{
	v->a[16120] = anon_sym_LT;
	v->a[16121] = anon_sym_GT;
	v->a[16122] = anon_sym_GT_GT;
	v->a[16123] = anon_sym_LT_AMP;
	v->a[16124] = anon_sym_GT_AMP;
	v->a[16125] = anon_sym_GT_PIPE;
	v->a[16126] = anon_sym_LT_GT;
	v->a[16127] = anon_sym_LT_LT;
	v->a[16128] = anon_sym_LT_LT_DASH;
	v->a[16129] = aux_sym_heredoc_redirect_token1;
	v->a[16130] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16131] = anon_sym_DQUOTE;
	v->a[16132] = sym_raw_string;
	v->a[16133] = sym_number;
	v->a[16134] = anon_sym_DOLLAR_LBRACE;
	v->a[16135] = anon_sym_DOLLAR_LPAREN;
	v->a[16136] = anon_sym_BQUOTE;
	v->a[16137] = sym_word;
	v->a[16138] = anon_sym_SEMI;
	v->a[16139] = 6;
	small_parse_table_807(v);
}

void	small_parse_table_807(t_small_parse_table_array *v)
{
	v->a[16140] = actions(3);
	v->a[16141] = 1;
	v->a[16142] = sym_comment;
	v->a[16143] = actions(343);
	v->a[16144] = 1;
	v->a[16145] = sym__bare_dollar;
	v->a[16146] = actions(357);
	v->a[16147] = 1;
	v->a[16148] = sym_variable_name;
	v->a[16149] = actions(355);
	v->a[16150] = 2;
	v->a[16151] = aux_sym__simple_variable_name_token1;
	v->a[16152] = aux_sym__multiline_variable_name_token1;
	v->a[16153] = actions(353);
	v->a[16154] = 8;
	v->a[16155] = anon_sym_BANG;
	v->a[16156] = anon_sym_DASH;
	v->a[16157] = anon_sym_STAR;
	v->a[16158] = anon_sym_QMARK;
	v->a[16159] = anon_sym_DOLLAR;
	small_parse_table_808(v);
}

void	small_parse_table_808(t_small_parse_table_array *v)
{
	v->a[16160] = anon_sym_POUND;
	v->a[16161] = anon_sym_AT;
	v->a[16162] = anon_sym_0;
	v->a[16163] = actions(345);
	v->a[16164] = 24;
	v->a[16165] = anon_sym_esac;
	v->a[16166] = anon_sym_PIPE;
	v->a[16167] = anon_sym_SEMI_SEMI;
	v->a[16168] = anon_sym_AMP_AMP;
	v->a[16169] = anon_sym_PIPE_PIPE;
	v->a[16170] = anon_sym_LT;
	v->a[16171] = anon_sym_GT;
	v->a[16172] = anon_sym_GT_GT;
	v->a[16173] = anon_sym_LT_AMP;
	v->a[16174] = anon_sym_GT_AMP;
	v->a[16175] = anon_sym_GT_PIPE;
	v->a[16176] = anon_sym_LT_GT;
	v->a[16177] = anon_sym_LT_LT;
	v->a[16178] = anon_sym_LT_LT_DASH;
	v->a[16179] = aux_sym_heredoc_redirect_token1;
	small_parse_table_809(v);
}

void	small_parse_table_809(t_small_parse_table_array *v)
{
	v->a[16180] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16181] = anon_sym_DQUOTE;
	v->a[16182] = sym_raw_string;
	v->a[16183] = sym_number;
	v->a[16184] = anon_sym_DOLLAR_LBRACE;
	v->a[16185] = anon_sym_DOLLAR_LPAREN;
	v->a[16186] = anon_sym_BQUOTE;
	v->a[16187] = sym_word;
	v->a[16188] = anon_sym_SEMI;
	v->a[16189] = 6;
	v->a[16190] = actions(3);
	v->a[16191] = 1;
	v->a[16192] = sym_comment;
	v->a[16193] = actions(343);
	v->a[16194] = 1;
	v->a[16195] = sym__bare_dollar;
	v->a[16196] = actions(363);
	v->a[16197] = 1;
	v->a[16198] = sym_variable_name;
	v->a[16199] = actions(361);
	small_parse_table_810(v);
}

/* EOF small_parse_table_161.c */
