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
	v->a[55102] = actions(1878);
	v->a[55103] = 1;
	v->a[55104] = sym_file_descriptor;
	v->a[55105] = state(605);
	v->a[55106] = 1;
	v->a[55107] = sym_terminator;
	v->a[55108] = actions(784);
	v->a[55109] = 2;
	v->a[55110] = anon_sym_esac;
	v->a[55111] = anon_sym_SEMI_SEMI;
	v->a[55112] = actions(882);
	v->a[55113] = 2;
	v->a[55114] = anon_sym_AMP_AMP;
	v->a[55115] = anon_sym_PIPE_PIPE;
	v->a[55116] = actions(884);
	v->a[55117] = 2;
	v->a[55118] = anon_sym_LT_LT;
	v->a[55119] = anon_sym_LT_LT_DASH;
	small_parse_table_2756(v);
}

void	small_parse_table_2756(t_small_parse_table_array *v)
{
	v->a[55120] = state(1099);
	v->a[55121] = 3;
	v->a[55122] = sym_file_redirect;
	v->a[55123] = sym_heredoc_redirect;
	v->a[55124] = aux_sym_redirected_statement_repeat1;
	v->a[55125] = actions(1874);
	v->a[55126] = 7;
	v->a[55127] = anon_sym_LT;
	v->a[55128] = anon_sym_GT;
	v->a[55129] = anon_sym_GT_GT;
	v->a[55130] = anon_sym_LT_AMP;
	v->a[55131] = anon_sym_GT_AMP;
	v->a[55132] = anon_sym_GT_PIPE;
	v->a[55133] = anon_sym_LT_GT;
	v->a[55134] = 11;
	v->a[55135] = actions(3);
	v->a[55136] = 1;
	v->a[55137] = sym_comment;
	v->a[55138] = actions(782);
	v->a[55139] = 1;
	small_parse_table_2757(v);
}

void	small_parse_table_2757(t_small_parse_table_array *v)
{
	v->a[55140] = anon_sym_PIPE;
	v->a[55141] = actions(886);
	v->a[55142] = 1;
	v->a[55143] = anon_sym_SEMI;
	v->a[55144] = actions(1876);
	v->a[55145] = 1;
	v->a[55146] = aux_sym_heredoc_redirect_token1;
	v->a[55147] = actions(1878);
	v->a[55148] = 1;
	v->a[55149] = sym_file_descriptor;
	v->a[55150] = state(606);
	v->a[55151] = 1;
	v->a[55152] = sym_terminator;
	v->a[55153] = actions(784);
	v->a[55154] = 2;
	v->a[55155] = anon_sym_esac;
	v->a[55156] = anon_sym_SEMI_SEMI;
	v->a[55157] = actions(882);
	v->a[55158] = 2;
	v->a[55159] = anon_sym_AMP_AMP;
	small_parse_table_2758(v);
}

void	small_parse_table_2758(t_small_parse_table_array *v)
{
	v->a[55160] = anon_sym_PIPE_PIPE;
	v->a[55161] = actions(884);
	v->a[55162] = 2;
	v->a[55163] = anon_sym_LT_LT;
	v->a[55164] = anon_sym_LT_LT_DASH;
	v->a[55165] = state(1099);
	v->a[55166] = 3;
	v->a[55167] = sym_file_redirect;
	v->a[55168] = sym_heredoc_redirect;
	v->a[55169] = aux_sym_redirected_statement_repeat1;
	v->a[55170] = actions(1874);
	v->a[55171] = 7;
	v->a[55172] = anon_sym_LT;
	v->a[55173] = anon_sym_GT;
	v->a[55174] = anon_sym_GT_GT;
	v->a[55175] = anon_sym_LT_AMP;
	v->a[55176] = anon_sym_GT_AMP;
	v->a[55177] = anon_sym_GT_PIPE;
	v->a[55178] = anon_sym_LT_GT;
	v->a[55179] = 11;
	small_parse_table_2759(v);
}

void	small_parse_table_2759(t_small_parse_table_array *v)
{
	v->a[55180] = actions(3);
	v->a[55181] = 1;
	v->a[55182] = sym_comment;
	v->a[55183] = actions(782);
	v->a[55184] = 1;
	v->a[55185] = anon_sym_PIPE;
	v->a[55186] = actions(950);
	v->a[55187] = 1;
	v->a[55188] = ts_builtin_sym_end;
	v->a[55189] = actions(1882);
	v->a[55190] = 1;
	v->a[55191] = aux_sym_heredoc_redirect_token1;
	v->a[55192] = actions(1884);
	v->a[55193] = 1;
	v->a[55194] = sym_file_descriptor;
	v->a[55195] = state(759);
	v->a[55196] = 1;
	v->a[55197] = sym_terminator;
	v->a[55198] = actions(790);
	v->a[55199] = 2;
	small_parse_table_2760(v);
}

/* EOF small_parse_table_551.c */
