/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_401.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2005(t_small_parse_table_array *v)
{
	v->a[40100] = actions(4247);
	v->a[40101] = 28;
	v->a[40102] = anon_sym_LPAREN_LPAREN;
	v->a[40103] = anon_sym_LT;
	v->a[40104] = anon_sym_GT;
	v->a[40105] = anon_sym_GT_GT;
	v->a[40106] = anon_sym_AMP_GT;
	v->a[40107] = anon_sym_AMP_GT_GT;
	v->a[40108] = anon_sym_LT_AMP;
	v->a[40109] = anon_sym_GT_AMP;
	v->a[40110] = anon_sym_GT_PIPE;
	v->a[40111] = anon_sym_LT_AMP_DASH;
	v->a[40112] = anon_sym_GT_AMP_DASH;
	v->a[40113] = anon_sym_LT_LT_LT;
	v->a[40114] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40115] = anon_sym_DOLLAR_LBRACK;
	v->a[40116] = anon_sym_DOLLAR;
	v->a[40117] = sym__special_character;
	v->a[40118] = anon_sym_DQUOTE;
	v->a[40119] = sym_raw_string;
	small_parse_table_2006(v);
}

void	small_parse_table_2006(t_small_parse_table_array *v)
{
	v->a[40120] = sym_ansi_c_string;
	v->a[40121] = aux_sym_number_token1;
	v->a[40122] = aux_sym_number_token2;
	v->a[40123] = anon_sym_DOLLAR_LBRACE;
	v->a[40124] = anon_sym_DOLLAR_LPAREN;
	v->a[40125] = anon_sym_BQUOTE;
	v->a[40126] = anon_sym_DOLLAR_BQUOTE;
	v->a[40127] = anon_sym_LT_LPAREN;
	v->a[40128] = anon_sym_GT_LPAREN;
	v->a[40129] = sym_word;
	v->a[40130] = 6;
	v->a[40131] = actions(3);
	v->a[40132] = 1;
	v->a[40133] = sym_comment;
	v->a[40134] = actions(4672);
	v->a[40135] = 1;
	v->a[40136] = aux_sym_concatenation_token1;
	v->a[40137] = actions(4674);
	v->a[40138] = 1;
	v->a[40139] = sym__concat;
	small_parse_table_2007(v);
}

void	small_parse_table_2007(t_small_parse_table_array *v)
{
	v->a[40140] = state(959);
	v->a[40141] = 1;
	v->a[40142] = aux_sym_concatenation_repeat1;
	v->a[40143] = actions(278);
	v->a[40144] = 6;
	v->a[40145] = sym_file_descriptor;
	v->a[40146] = sym_test_operator;
	v->a[40147] = sym__bare_dollar;
	v->a[40148] = sym__brace_start;
	v->a[40149] = ts_builtin_sym_end;
	v->a[40150] = aux_sym_heredoc_redirect_token1;
	v->a[40151] = actions(241);
	v->a[40152] = 40;
	v->a[40153] = anon_sym_LPAREN_LPAREN;
	v->a[40154] = anon_sym_SEMI;
	v->a[40155] = anon_sym_PIPE_PIPE;
	v->a[40156] = anon_sym_AMP_AMP;
	v->a[40157] = anon_sym_PIPE;
	v->a[40158] = anon_sym_AMP;
	v->a[40159] = anon_sym_EQ_EQ;
	small_parse_table_2008(v);
}

void	small_parse_table_2008(t_small_parse_table_array *v)
{
	v->a[40160] = anon_sym_LT;
	v->a[40161] = anon_sym_GT;
	v->a[40162] = anon_sym_LT_LT;
	v->a[40163] = anon_sym_GT_GT;
	v->a[40164] = anon_sym_LPAREN;
	v->a[40165] = anon_sym_SEMI_SEMI;
	v->a[40166] = anon_sym_PIPE_AMP;
	v->a[40167] = anon_sym_EQ_TILDE;
	v->a[40168] = anon_sym_AMP_GT;
	v->a[40169] = anon_sym_AMP_GT_GT;
	v->a[40170] = anon_sym_LT_AMP;
	v->a[40171] = anon_sym_GT_AMP;
	v->a[40172] = anon_sym_GT_PIPE;
	v->a[40173] = anon_sym_LT_AMP_DASH;
	v->a[40174] = anon_sym_GT_AMP_DASH;
	v->a[40175] = anon_sym_LT_LT_DASH;
	v->a[40176] = anon_sym_LT_LT_LT;
	v->a[40177] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40178] = anon_sym_DOLLAR_LBRACK;
	v->a[40179] = anon_sym_DOLLAR;
	small_parse_table_2009(v);
}

void	small_parse_table_2009(t_small_parse_table_array *v)
{
	v->a[40180] = sym__special_character;
	v->a[40181] = anon_sym_DQUOTE;
	v->a[40182] = sym_raw_string;
	v->a[40183] = sym_ansi_c_string;
	v->a[40184] = aux_sym_number_token1;
	v->a[40185] = aux_sym_number_token2;
	v->a[40186] = anon_sym_DOLLAR_LBRACE;
	v->a[40187] = anon_sym_DOLLAR_LPAREN;
	v->a[40188] = anon_sym_BQUOTE;
	v->a[40189] = anon_sym_DOLLAR_BQUOTE;
	v->a[40190] = anon_sym_LT_LPAREN;
	v->a[40191] = anon_sym_GT_LPAREN;
	v->a[40192] = sym_word;
	v->a[40193] = 3;
	v->a[40194] = actions(3);
	v->a[40195] = 1;
	v->a[40196] = sym_comment;
	v->a[40197] = actions(1334);
	v->a[40198] = 6;
	v->a[40199] = sym_file_descriptor;
	small_parse_table_2010(v);
}

/* EOF small_parse_table_401.c */
