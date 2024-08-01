/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_551.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2755(t_small_parse_table_array *v)
{
	v->a[55100] = 1;
	v->a[55101] = aux_sym_heredoc_redirect_token1;
	v->a[55102] = state(1584);
	v->a[55103] = 1;
	v->a[55104] = sym__heredoc_expression;
	v->a[55105] = actions(649);
	v->a[55106] = 2;
	v->a[55107] = anon_sym_AMP_AMP;
	v->a[55108] = anon_sym_PIPE_PIPE;
	v->a[55109] = state(1376);
	v->a[55110] = 2;
	v->a[55111] = sym_file_redirect;
	v->a[55112] = aux_sym_redirected_statement_repeat2;
	v->a[55113] = actions(651);
	v->a[55114] = 3;
	v->a[55115] = anon_sym_LT;
	v->a[55116] = anon_sym_GT;
	v->a[55117] = anon_sym_GT_GT;
	v->a[55118] = 5;
	v->a[55119] = actions(1436);
	small_parse_table_2756(v);
}

void	small_parse_table_2756(t_small_parse_table_array *v)
{
	v->a[55120] = 1;
	v->a[55121] = sym_comment;
	v->a[55122] = actions(2700);
	v->a[55123] = 2;
	v->a[55124] = anon_sym_RPAREN;
	v->a[55125] = anon_sym_QMARK;
	v->a[55126] = actions(2768);
	v->a[55127] = 2;
	v->a[55128] = anon_sym_PLUS;
	v->a[55129] = anon_sym_DASH;
	v->a[55130] = actions(2774);
	v->a[55131] = 2;
	v->a[55132] = anon_sym_PLUS_PLUS;
	v->a[55133] = anon_sym_DASH_DASH;
	v->a[55134] = actions(2770);
	v->a[55135] = 3;
	v->a[55136] = anon_sym_STAR;
	v->a[55137] = anon_sym_SLASH;
	v->a[55138] = anon_sym_PERCENT;
	v->a[55139] = 6;
	small_parse_table_2757(v);
}

void	small_parse_table_2757(t_small_parse_table_array *v)
{
	v->a[55140] = actions(1436);
	v->a[55141] = 1;
	v->a[55142] = sym_comment;
	v->a[55143] = actions(2754);
	v->a[55144] = 1;
	v->a[55145] = anon_sym_QMARK;
	v->a[55146] = actions(2847);
	v->a[55147] = 1;
	v->a[55148] = anon_sym_RPAREN_RPAREN;
	v->a[55149] = actions(2702);
	v->a[55150] = 2;
	v->a[55151] = anon_sym_PLUS;
	v->a[55152] = anon_sym_DASH;
	v->a[55153] = actions(2706);
	v->a[55154] = 2;
	v->a[55155] = anon_sym_PLUS_PLUS;
	v->a[55156] = anon_sym_DASH_DASH;
	v->a[55157] = actions(2704);
	v->a[55158] = 3;
	v->a[55159] = anon_sym_STAR;
	small_parse_table_2758(v);
}

void	small_parse_table_2758(t_small_parse_table_array *v)
{
	v->a[55160] = anon_sym_SLASH;
	v->a[55161] = anon_sym_PERCENT;
	v->a[55162] = 3;
	v->a[55163] = actions(1436);
	v->a[55164] = 1;
	v->a[55165] = sym_comment;
	v->a[55166] = actions(1091);
	v->a[55167] = 2;
	v->a[55168] = anon_sym_PLUS;
	v->a[55169] = anon_sym_DASH;
	v->a[55170] = actions(1093);
	v->a[55171] = 7;
	v->a[55172] = anon_sym_RPAREN;
	v->a[55173] = anon_sym_STAR;
	v->a[55174] = anon_sym_SLASH;
	v->a[55175] = anon_sym_PERCENT;
	v->a[55176] = anon_sym_QMARK;
	v->a[55177] = anon_sym_PLUS_PLUS;
	v->a[55178] = anon_sym_DASH_DASH;
	v->a[55179] = 6;
	small_parse_table_2759(v);
}

void	small_parse_table_2759(t_small_parse_table_array *v)
{
	v->a[55180] = actions(1436);
	v->a[55181] = 1;
	v->a[55182] = sym_comment;
	v->a[55183] = actions(2760);
	v->a[55184] = 1;
	v->a[55185] = anon_sym_LT_LT;
	v->a[55186] = actions(2851);
	v->a[55187] = 1;
	v->a[55188] = anon_sym_GT_GT;
	v->a[55189] = actions(1924);
	v->a[55190] = 2;
	v->a[55191] = anon_sym_LT;
	v->a[55192] = anon_sym_GT;
	v->a[55193] = actions(2849);
	v->a[55194] = 2;
	v->a[55195] = anon_sym_AMP_AMP;
	v->a[55196] = anon_sym_PIPE_PIPE;
	v->a[55197] = state(1040);
	v->a[55198] = 3;
	v->a[55199] = sym_file_redirect;
	small_parse_table_2760(v);
}

/* EOF small_parse_table_551.c */
