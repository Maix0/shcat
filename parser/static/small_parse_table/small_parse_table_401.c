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
	v->a[40100] = 9;
	v->a[40101] = anon_sym_BANG;
	v->a[40102] = anon_sym_DASH;
	v->a[40103] = anon_sym_STAR;
	v->a[40104] = anon_sym_QMARK;
	v->a[40105] = anon_sym_DOLLAR;
	v->a[40106] = anon_sym_POUND;
	v->a[40107] = anon_sym_AT;
	v->a[40108] = anon_sym_0;
	v->a[40109] = anon_sym__;
	v->a[40110] = actions(379);
	v->a[40111] = 20;
	v->a[40112] = anon_sym_esac;
	v->a[40113] = anon_sym_PIPE;
	v->a[40114] = anon_sym_SEMI_SEMI;
	v->a[40115] = anon_sym_AMP_AMP;
	v->a[40116] = anon_sym_PIPE_PIPE;
	v->a[40117] = anon_sym_LT;
	v->a[40118] = anon_sym_GT;
	v->a[40119] = anon_sym_GT_GT;
	small_parse_table_2006(v);
}

void	small_parse_table_2006(t_small_parse_table_array *v)
{
	v->a[40120] = anon_sym_AMP_GT;
	v->a[40121] = anon_sym_AMP_GT_GT;
	v->a[40122] = anon_sym_LT_AMP;
	v->a[40123] = anon_sym_GT_AMP;
	v->a[40124] = anon_sym_GT_PIPE;
	v->a[40125] = anon_sym_LT_AMP_DASH;
	v->a[40126] = anon_sym_GT_AMP_DASH;
	v->a[40127] = anon_sym_LT_LT;
	v->a[40128] = anon_sym_LT_LT_DASH;
	v->a[40129] = aux_sym_heredoc_redirect_token1;
	v->a[40130] = anon_sym_AMP;
	v->a[40131] = anon_sym_SEMI;
	v->a[40132] = 3;
	v->a[40133] = actions(3);
	v->a[40134] = 1;
	v->a[40135] = sym_comment;
	v->a[40136] = actions(1195);
	v->a[40137] = 3;
	v->a[40138] = sym_file_descriptor;
	v->a[40139] = sym__concat;
	small_parse_table_2007(v);
}

void	small_parse_table_2007(t_small_parse_table_array *v)
{
	v->a[40140] = sym_variable_name;
	v->a[40141] = actions(1193);
	v->a[40142] = 30;
	v->a[40143] = anon_sym_PIPE;
	v->a[40144] = anon_sym_RPAREN;
	v->a[40145] = anon_sym_SEMI_SEMI;
	v->a[40146] = anon_sym_AMP_AMP;
	v->a[40147] = anon_sym_PIPE_PIPE;
	v->a[40148] = anon_sym_LT;
	v->a[40149] = anon_sym_GT;
	v->a[40150] = anon_sym_GT_GT;
	v->a[40151] = anon_sym_AMP_GT;
	v->a[40152] = anon_sym_AMP_GT_GT;
	v->a[40153] = anon_sym_LT_AMP;
	v->a[40154] = anon_sym_GT_AMP;
	v->a[40155] = anon_sym_GT_PIPE;
	v->a[40156] = anon_sym_LT_AMP_DASH;
	v->a[40157] = anon_sym_GT_AMP_DASH;
	v->a[40158] = anon_sym_LT_LT;
	v->a[40159] = anon_sym_LT_LT_DASH;
	small_parse_table_2008(v);
}

void	small_parse_table_2008(t_small_parse_table_array *v)
{
	v->a[40160] = aux_sym_heredoc_redirect_token1;
	v->a[40161] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40162] = anon_sym_AMP;
	v->a[40163] = aux_sym_concatenation_token1;
	v->a[40164] = anon_sym_DOLLAR;
	v->a[40165] = anon_sym_DQUOTE;
	v->a[40166] = sym_raw_string;
	v->a[40167] = sym_number;
	v->a[40168] = anon_sym_DOLLAR_LBRACE;
	v->a[40169] = anon_sym_DOLLAR_LPAREN;
	v->a[40170] = anon_sym_BQUOTE;
	v->a[40171] = sym_word;
	v->a[40172] = anon_sym_SEMI;
	v->a[40173] = 3;
	v->a[40174] = actions(3);
	v->a[40175] = 1;
	v->a[40176] = sym_comment;
	v->a[40177] = actions(1100);
	v->a[40178] = 3;
	v->a[40179] = sym_file_descriptor;
	small_parse_table_2009(v);
}

void	small_parse_table_2009(t_small_parse_table_array *v)
{
	v->a[40180] = sym__concat;
	v->a[40181] = sym_variable_name;
	v->a[40182] = actions(1098);
	v->a[40183] = 30;
	v->a[40184] = anon_sym_PIPE;
	v->a[40185] = anon_sym_RPAREN;
	v->a[40186] = anon_sym_SEMI_SEMI;
	v->a[40187] = anon_sym_AMP_AMP;
	v->a[40188] = anon_sym_PIPE_PIPE;
	v->a[40189] = anon_sym_LT;
	v->a[40190] = anon_sym_GT;
	v->a[40191] = anon_sym_GT_GT;
	v->a[40192] = anon_sym_AMP_GT;
	v->a[40193] = anon_sym_AMP_GT_GT;
	v->a[40194] = anon_sym_LT_AMP;
	v->a[40195] = anon_sym_GT_AMP;
	v->a[40196] = anon_sym_GT_PIPE;
	v->a[40197] = anon_sym_LT_AMP_DASH;
	v->a[40198] = anon_sym_GT_AMP_DASH;
	v->a[40199] = anon_sym_LT_LT;
	small_parse_table_2010(v);
}

/* EOF small_parse_table_401.c */
