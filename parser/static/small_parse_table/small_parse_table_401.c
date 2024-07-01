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
	v->a[40100] = anon_sym_DASH;
	v->a[40101] = anon_sym_STAR;
	v->a[40102] = anon_sym_QMARK;
	v->a[40103] = anon_sym_DOLLAR;
	v->a[40104] = anon_sym_POUND;
	v->a[40105] = anon_sym_AT;
	v->a[40106] = anon_sym_0;
	v->a[40107] = anon_sym__;
	v->a[40108] = actions(381);
	v->a[40109] = 18;
	v->a[40110] = anon_sym_PIPE;
	v->a[40111] = anon_sym_RPAREN;
	v->a[40112] = anon_sym_SEMI_SEMI;
	v->a[40113] = anon_sym_AMP_AMP;
	v->a[40114] = anon_sym_PIPE_PIPE;
	v->a[40115] = anon_sym_LT;
	v->a[40116] = anon_sym_GT;
	v->a[40117] = anon_sym_GT_GT;
	v->a[40118] = anon_sym_LT_AMP;
	v->a[40119] = anon_sym_GT_AMP;
	small_parse_table_2006(v);
}

void	small_parse_table_2006(t_small_parse_table_array *v)
{
	v->a[40120] = anon_sym_GT_PIPE;
	v->a[40121] = anon_sym_LT_AMP_DASH;
	v->a[40122] = anon_sym_GT_AMP_DASH;
	v->a[40123] = anon_sym_LT_LT;
	v->a[40124] = anon_sym_LT_LT_DASH;
	v->a[40125] = aux_sym_heredoc_redirect_token1;
	v->a[40126] = anon_sym_AMP;
	v->a[40127] = anon_sym_SEMI;
	v->a[40128] = 3;
	v->a[40129] = actions(3);
	v->a[40130] = 1;
	v->a[40131] = sym_comment;
	v->a[40132] = actions(939);
	v->a[40133] = 3;
	v->a[40134] = sym_file_descriptor;
	v->a[40135] = sym__concat;
	v->a[40136] = sym_variable_name;
	v->a[40137] = actions(937);
	v->a[40138] = 28;
	v->a[40139] = anon_sym_PIPE;
	small_parse_table_2007(v);
}

void	small_parse_table_2007(t_small_parse_table_array *v)
{
	v->a[40140] = anon_sym_RPAREN;
	v->a[40141] = anon_sym_SEMI_SEMI;
	v->a[40142] = anon_sym_AMP_AMP;
	v->a[40143] = anon_sym_PIPE_PIPE;
	v->a[40144] = anon_sym_LT;
	v->a[40145] = anon_sym_GT;
	v->a[40146] = anon_sym_GT_GT;
	v->a[40147] = anon_sym_LT_AMP;
	v->a[40148] = anon_sym_GT_AMP;
	v->a[40149] = anon_sym_GT_PIPE;
	v->a[40150] = anon_sym_LT_AMP_DASH;
	v->a[40151] = anon_sym_GT_AMP_DASH;
	v->a[40152] = anon_sym_LT_LT;
	v->a[40153] = anon_sym_LT_LT_DASH;
	v->a[40154] = aux_sym_heredoc_redirect_token1;
	v->a[40155] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40156] = anon_sym_AMP;
	v->a[40157] = aux_sym_concatenation_token1;
	v->a[40158] = anon_sym_DOLLAR;
	v->a[40159] = anon_sym_DQUOTE;
	small_parse_table_2008(v);
}

void	small_parse_table_2008(t_small_parse_table_array *v)
{
	v->a[40160] = sym_raw_string;
	v->a[40161] = sym_number;
	v->a[40162] = anon_sym_DOLLAR_LBRACE;
	v->a[40163] = anon_sym_DOLLAR_LPAREN;
	v->a[40164] = anon_sym_BQUOTE;
	v->a[40165] = sym_word;
	v->a[40166] = anon_sym_SEMI;
	v->a[40167] = 3;
	v->a[40168] = actions(3);
	v->a[40169] = 1;
	v->a[40170] = sym_comment;
	v->a[40171] = actions(970);
	v->a[40172] = 3;
	v->a[40173] = sym_file_descriptor;
	v->a[40174] = sym__concat;
	v->a[40175] = sym_variable_name;
	v->a[40176] = actions(968);
	v->a[40177] = 28;
	v->a[40178] = anon_sym_PIPE;
	v->a[40179] = anon_sym_RPAREN;
	small_parse_table_2009(v);
}

void	small_parse_table_2009(t_small_parse_table_array *v)
{
	v->a[40180] = anon_sym_SEMI_SEMI;
	v->a[40181] = anon_sym_AMP_AMP;
	v->a[40182] = anon_sym_PIPE_PIPE;
	v->a[40183] = anon_sym_LT;
	v->a[40184] = anon_sym_GT;
	v->a[40185] = anon_sym_GT_GT;
	v->a[40186] = anon_sym_LT_AMP;
	v->a[40187] = anon_sym_GT_AMP;
	v->a[40188] = anon_sym_GT_PIPE;
	v->a[40189] = anon_sym_LT_AMP_DASH;
	v->a[40190] = anon_sym_GT_AMP_DASH;
	v->a[40191] = anon_sym_LT_LT;
	v->a[40192] = anon_sym_LT_LT_DASH;
	v->a[40193] = aux_sym_heredoc_redirect_token1;
	v->a[40194] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40195] = anon_sym_AMP;
	v->a[40196] = aux_sym_concatenation_token1;
	v->a[40197] = anon_sym_DOLLAR;
	v->a[40198] = anon_sym_DQUOTE;
	v->a[40199] = sym_raw_string;
	small_parse_table_2010(v);
}

/* EOF small_parse_table_401.c */
