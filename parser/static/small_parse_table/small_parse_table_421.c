/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_421.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2105(t_small_parse_table_array *v)
{
	v->a[42100] = actions(3);
	v->a[42101] = 1;
	v->a[42102] = sym_comment;
	v->a[42103] = actions(1002);
	v->a[42104] = 1;
	v->a[42105] = anon_sym_PIPE;
	v->a[42106] = actions(1006);
	v->a[42107] = 1;
	v->a[42108] = sym_file_descriptor;
	v->a[42109] = actions(1559);
	v->a[42110] = 1;
	v->a[42111] = sym_variable_name;
	v->a[42112] = actions(1590);
	v->a[42113] = 1;
	v->a[42114] = aux_sym_heredoc_redirect_token1;
	v->a[42115] = actions(1062);
	v->a[42116] = 2;
	v->a[42117] = anon_sym_LT_LT;
	v->a[42118] = anon_sym_LT_LT_DASH;
	v->a[42119] = actions(1588);
	small_parse_table_2106(v);
}

void	small_parse_table_2106(t_small_parse_table_array *v)
{
	v->a[42120] = 2;
	v->a[42121] = anon_sym_AMP_AMP;
	v->a[42122] = anon_sym_PIPE_PIPE;
	v->a[42123] = state(1300);
	v->a[42124] = 2;
	v->a[42125] = sym_variable_assignment;
	v->a[42126] = aux_sym_variable_assignments_repeat1;
	v->a[42127] = state(1302);
	v->a[42128] = 3;
	v->a[42129] = sym_file_redirect;
	v->a[42130] = sym_heredoc_redirect;
	v->a[42131] = aux_sym_redirected_statement_repeat1;
	v->a[42132] = actions(1000);
	v->a[42133] = 20;
	v->a[42134] = anon_sym_LT;
	v->a[42135] = anon_sym_GT;
	v->a[42136] = anon_sym_GT_GT;
	v->a[42137] = anon_sym_AMP_GT;
	v->a[42138] = anon_sym_AMP_GT_GT;
	v->a[42139] = anon_sym_LT_AMP;
	small_parse_table_2107(v);
}

void	small_parse_table_2107(t_small_parse_table_array *v)
{
	v->a[42140] = anon_sym_GT_AMP;
	v->a[42141] = anon_sym_GT_PIPE;
	v->a[42142] = anon_sym_LT_AMP_DASH;
	v->a[42143] = anon_sym_GT_AMP_DASH;
	v->a[42144] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42145] = anon_sym_DOLLAR;
	v->a[42146] = anon_sym_DQUOTE;
	v->a[42147] = sym_raw_string;
	v->a[42148] = aux_sym_number_token1;
	v->a[42149] = aux_sym_number_token2;
	v->a[42150] = anon_sym_DOLLAR_LBRACE;
	v->a[42151] = anon_sym_DOLLAR_LPAREN;
	v->a[42152] = anon_sym_BQUOTE;
	v->a[42153] = sym_word;
	v->a[42154] = 10;
	v->a[42155] = actions(3);
	v->a[42156] = 1;
	v->a[42157] = sym_comment;
	v->a[42158] = actions(1002);
	v->a[42159] = 1;
	small_parse_table_2108(v);
}

void	small_parse_table_2108(t_small_parse_table_array *v)
{
	v->a[42160] = anon_sym_PIPE;
	v->a[42161] = actions(1006);
	v->a[42162] = 1;
	v->a[42163] = sym_file_descriptor;
	v->a[42164] = actions(1559);
	v->a[42165] = 1;
	v->a[42166] = sym_variable_name;
	v->a[42167] = actions(1592);
	v->a[42168] = 1;
	v->a[42169] = aux_sym_heredoc_redirect_token1;
	v->a[42170] = actions(1062);
	v->a[42171] = 2;
	v->a[42172] = anon_sym_LT_LT;
	v->a[42173] = anon_sym_LT_LT_DASH;
	v->a[42174] = actions(1588);
	v->a[42175] = 2;
	v->a[42176] = anon_sym_AMP_AMP;
	v->a[42177] = anon_sym_PIPE_PIPE;
	v->a[42178] = state(1300);
	v->a[42179] = 2;
	small_parse_table_2109(v);
}

void	small_parse_table_2109(t_small_parse_table_array *v)
{
	v->a[42180] = sym_variable_assignment;
	v->a[42181] = aux_sym_variable_assignments_repeat1;
	v->a[42182] = state(1302);
	v->a[42183] = 3;
	v->a[42184] = sym_file_redirect;
	v->a[42185] = sym_heredoc_redirect;
	v->a[42186] = aux_sym_redirected_statement_repeat1;
	v->a[42187] = actions(1000);
	v->a[42188] = 20;
	v->a[42189] = anon_sym_LT;
	v->a[42190] = anon_sym_GT;
	v->a[42191] = anon_sym_GT_GT;
	v->a[42192] = anon_sym_AMP_GT;
	v->a[42193] = anon_sym_AMP_GT_GT;
	v->a[42194] = anon_sym_LT_AMP;
	v->a[42195] = anon_sym_GT_AMP;
	v->a[42196] = anon_sym_GT_PIPE;
	v->a[42197] = anon_sym_LT_AMP_DASH;
	v->a[42198] = anon_sym_GT_AMP_DASH;
	v->a[42199] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2110(v);
}

/* EOF small_parse_table_421.c */
