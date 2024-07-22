/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_591.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2955(t_small_parse_table_array *v)
{
	v->a[59100] = state(578);
	v->a[59101] = 1;
	v->a[59102] = sym_terminator;
	v->a[59103] = actions(790);
	v->a[59104] = 2;
	v->a[59105] = anon_sym_LT_LT;
	v->a[59106] = anon_sym_LT_LT_DASH;
	v->a[59107] = actions(1028);
	v->a[59108] = 2;
	v->a[59109] = anon_sym_AMP_AMP;
	v->a[59110] = anon_sym_PIPE_PIPE;
	v->a[59111] = state(1194);
	v->a[59112] = 3;
	v->a[59113] = sym_file_redirect;
	v->a[59114] = sym_heredoc_redirect;
	v->a[59115] = aux_sym_redirected_statement_repeat1;
	v->a[59116] = actions(1941);
	v->a[59117] = 7;
	v->a[59118] = anon_sym_LT;
	v->a[59119] = anon_sym_GT;
	small_parse_table_2956(v);
}

void	small_parse_table_2956(t_small_parse_table_array *v)
{
	v->a[59120] = anon_sym_GT_GT;
	v->a[59121] = anon_sym_LT_AMP;
	v->a[59122] = anon_sym_GT_AMP;
	v->a[59123] = anon_sym_GT_PIPE;
	v->a[59124] = anon_sym_LT_GT;
	v->a[59125] = 7;
	v->a[59126] = actions(3);
	v->a[59127] = 1;
	v->a[59128] = sym_comment;
	v->a[59129] = actions(1968);
	v->a[59130] = 1;
	v->a[59131] = aux_sym_heredoc_redirect_token1;
	v->a[59132] = actions(2016);
	v->a[59133] = 1;
	v->a[59134] = sym_file_descriptor;
	v->a[59135] = actions(2013);
	v->a[59136] = 2;
	v->a[59137] = anon_sym_LT_LT;
	v->a[59138] = anon_sym_LT_LT_DASH;
	v->a[59139] = state(1072);
	small_parse_table_2957(v);
}

void	small_parse_table_2957(t_small_parse_table_array *v)
{
	v->a[59140] = 3;
	v->a[59141] = sym_file_redirect;
	v->a[59142] = sym_heredoc_redirect;
	v->a[59143] = aux_sym_redirected_statement_repeat1;
	v->a[59144] = actions(1960);
	v->a[59145] = 6;
	v->a[59146] = anon_sym_esac;
	v->a[59147] = anon_sym_PIPE;
	v->a[59148] = anon_sym_SEMI_SEMI;
	v->a[59149] = anon_sym_AMP_AMP;
	v->a[59150] = anon_sym_PIPE_PIPE;
	v->a[59151] = anon_sym_SEMI;
	v->a[59152] = actions(2010);
	v->a[59153] = 7;
	v->a[59154] = anon_sym_LT;
	v->a[59155] = anon_sym_GT;
	v->a[59156] = anon_sym_GT_GT;
	v->a[59157] = anon_sym_LT_AMP;
	v->a[59158] = anon_sym_GT_AMP;
	v->a[59159] = anon_sym_GT_PIPE;
	small_parse_table_2958(v);
}

void	small_parse_table_2958(t_small_parse_table_array *v)
{
	v->a[59160] = anon_sym_LT_GT;
	v->a[59161] = 6;
	v->a[59162] = actions(3);
	v->a[59163] = 1;
	v->a[59164] = sym_comment;
	v->a[59165] = actions(1902);
	v->a[59166] = 1;
	v->a[59167] = aux_sym_concatenation_token1;
	v->a[59168] = actions(2019);
	v->a[59169] = 1;
	v->a[59170] = sym__concat;
	v->a[59171] = state(908);
	v->a[59172] = 1;
	v->a[59173] = aux_sym_concatenation_repeat1;
	v->a[59174] = actions(1097);
	v->a[59175] = 3;
	v->a[59176] = sym_file_descriptor;
	v->a[59177] = sym_variable_name;
	v->a[59178] = aux_sym_heredoc_redirect_token1;
	v->a[59179] = actions(1099);
	small_parse_table_2959(v);
}

void	small_parse_table_2959(t_small_parse_table_array *v)
{
	v->a[59180] = 14;
	v->a[59181] = anon_sym_PIPE;
	v->a[59182] = anon_sym_SEMI_SEMI;
	v->a[59183] = anon_sym_AMP_AMP;
	v->a[59184] = anon_sym_PIPE_PIPE;
	v->a[59185] = anon_sym_LT;
	v->a[59186] = anon_sym_GT;
	v->a[59187] = anon_sym_GT_GT;
	v->a[59188] = anon_sym_LT_AMP;
	v->a[59189] = anon_sym_GT_AMP;
	v->a[59190] = anon_sym_GT_PIPE;
	v->a[59191] = anon_sym_LT_GT;
	v->a[59192] = anon_sym_LT_LT;
	v->a[59193] = anon_sym_LT_LT_DASH;
	v->a[59194] = anon_sym_SEMI;
	v->a[59195] = 10;
	v->a[59196] = actions(3);
	v->a[59197] = 1;
	v->a[59198] = sym_comment;
	v->a[59199] = actions(886);
	small_parse_table_2960(v);
}

/* EOF small_parse_table_591.c */
