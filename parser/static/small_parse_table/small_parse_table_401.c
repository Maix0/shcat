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
	v->a[40100] = actions(3);
	v->a[40101] = 1;
	v->a[40102] = sym_comment;
	v->a[40103] = actions(3568);
	v->a[40104] = 1;
	v->a[40105] = sym__special_character;
	v->a[40106] = state(969);
	v->a[40107] = 1;
	v->a[40108] = aux_sym__literal_repeat1;
	v->a[40109] = actions(3566);
	v->a[40110] = 5;
	v->a[40111] = sym_file_descriptor;
	v->a[40112] = sym_test_operator;
	v->a[40113] = sym__bare_dollar;
	v->a[40114] = sym__brace_start;
	v->a[40115] = aux_sym_heredoc_redirect_token1;
	v->a[40116] = actions(3564);
	v->a[40117] = 33;
	v->a[40118] = anon_sym_esac;
	v->a[40119] = anon_sym_PIPE;
	small_parse_table_2006(v);
}

void	small_parse_table_2006(t_small_parse_table_array *v)
{
	v->a[40120] = anon_sym_SEMI_SEMI;
	v->a[40121] = anon_sym_SEMI_AMP;
	v->a[40122] = anon_sym_SEMI_SEMI_AMP;
	v->a[40123] = anon_sym_PIPE_AMP;
	v->a[40124] = anon_sym_AMP_AMP;
	v->a[40125] = anon_sym_PIPE_PIPE;
	v->a[40126] = anon_sym_LT;
	v->a[40127] = anon_sym_GT;
	v->a[40128] = anon_sym_GT_GT;
	v->a[40129] = anon_sym_AMP_GT;
	v->a[40130] = anon_sym_AMP_GT_GT;
	v->a[40131] = anon_sym_LT_AMP;
	v->a[40132] = anon_sym_GT_AMP;
	v->a[40133] = anon_sym_GT_PIPE;
	v->a[40134] = anon_sym_LT_AMP_DASH;
	v->a[40135] = anon_sym_GT_AMP_DASH;
	v->a[40136] = anon_sym_LT_LT;
	v->a[40137] = anon_sym_LT_LT_DASH;
	v->a[40138] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40139] = anon_sym_AMP;
	small_parse_table_2007(v);
}

void	small_parse_table_2007(t_small_parse_table_array *v)
{
	v->a[40140] = anon_sym_DOLLAR;
	v->a[40141] = anon_sym_DQUOTE;
	v->a[40142] = sym_raw_string;
	v->a[40143] = aux_sym_number_token1;
	v->a[40144] = aux_sym_number_token2;
	v->a[40145] = anon_sym_DOLLAR_LBRACE;
	v->a[40146] = anon_sym_DOLLAR_LPAREN;
	v->a[40147] = anon_sym_BQUOTE;
	v->a[40148] = anon_sym_DOLLAR_BQUOTE;
	v->a[40149] = sym_word;
	v->a[40150] = anon_sym_SEMI;
	v->a[40151] = 3;
	v->a[40152] = actions(3);
	v->a[40153] = 1;
	v->a[40154] = sym_comment;
	v->a[40155] = actions(3066);
	v->a[40156] = 7;
	v->a[40157] = sym_file_descriptor;
	v->a[40158] = sym__concat;
	v->a[40159] = sym_test_operator;
	small_parse_table_2008(v);
}

void	small_parse_table_2008(t_small_parse_table_array *v)
{
	v->a[40160] = sym__bare_dollar;
	v->a[40161] = sym__brace_start;
	v->a[40162] = ts_builtin_sym_end;
	v->a[40163] = aux_sym_heredoc_redirect_token1;
	v->a[40164] = actions(3064);
	v->a[40165] = 33;
	v->a[40166] = anon_sym_LPAREN;
	v->a[40167] = anon_sym_PIPE;
	v->a[40168] = anon_sym_SEMI_SEMI;
	v->a[40169] = anon_sym_PIPE_AMP;
	v->a[40170] = anon_sym_AMP_AMP;
	v->a[40171] = anon_sym_PIPE_PIPE;
	v->a[40172] = anon_sym_LT;
	v->a[40173] = anon_sym_GT;
	v->a[40174] = anon_sym_GT_GT;
	v->a[40175] = anon_sym_AMP_GT;
	v->a[40176] = anon_sym_AMP_GT_GT;
	v->a[40177] = anon_sym_LT_AMP;
	v->a[40178] = anon_sym_GT_AMP;
	v->a[40179] = anon_sym_GT_PIPE;
	small_parse_table_2009(v);
}

void	small_parse_table_2009(t_small_parse_table_array *v)
{
	v->a[40180] = anon_sym_LT_AMP_DASH;
	v->a[40181] = anon_sym_GT_AMP_DASH;
	v->a[40182] = anon_sym_LT_LT;
	v->a[40183] = anon_sym_LT_LT_DASH;
	v->a[40184] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40185] = anon_sym_AMP;
	v->a[40186] = aux_sym_concatenation_token1;
	v->a[40187] = anon_sym_DOLLAR;
	v->a[40188] = sym__special_character;
	v->a[40189] = anon_sym_DQUOTE;
	v->a[40190] = sym_raw_string;
	v->a[40191] = aux_sym_number_token1;
	v->a[40192] = aux_sym_number_token2;
	v->a[40193] = anon_sym_DOLLAR_LBRACE;
	v->a[40194] = anon_sym_DOLLAR_LPAREN;
	v->a[40195] = anon_sym_BQUOTE;
	v->a[40196] = anon_sym_DOLLAR_BQUOTE;
	v->a[40197] = sym_word;
	v->a[40198] = anon_sym_SEMI;
	v->a[40199] = 6;
	small_parse_table_2010(v);
}

/* EOF small_parse_table_401.c */
