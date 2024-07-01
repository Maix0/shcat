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
	v->a[42100] = aux_sym_heredoc_redirect_token1;
	v->a[42101] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42102] = anon_sym_AMP;
	v->a[42103] = aux_sym_concatenation_token1;
	v->a[42104] = anon_sym_DOLLAR;
	v->a[42105] = anon_sym_DQUOTE;
	v->a[42106] = sym_raw_string;
	v->a[42107] = sym_number;
	v->a[42108] = anon_sym_DOLLAR_LBRACE;
	v->a[42109] = anon_sym_DOLLAR_LPAREN;
	v->a[42110] = anon_sym_BQUOTE;
	v->a[42111] = sym_word;
	v->a[42112] = anon_sym_SEMI;
	v->a[42113] = 7;
	v->a[42114] = actions(3);
	v->a[42115] = 1;
	v->a[42116] = sym_comment;
	v->a[42117] = actions(976);
	v->a[42118] = 1;
	v->a[42119] = sym_file_descriptor;
	small_parse_table_2106(v);
}

void	small_parse_table_2106(t_small_parse_table_array *v)
{
	v->a[42120] = actions(1466);
	v->a[42121] = 1;
	v->a[42122] = sym_variable_name;
	v->a[42123] = state(1407);
	v->a[42124] = 2;
	v->a[42125] = sym_variable_assignment;
	v->a[42126] = aux_sym__variable_assignments_repeat1;
	v->a[42127] = state(1408);
	v->a[42128] = 3;
	v->a[42129] = sym_file_redirect;
	v->a[42130] = sym_heredoc_redirect;
	v->a[42131] = aux_sym_redirected_statement_repeat1;
	v->a[42132] = actions(678);
	v->a[42133] = 9;
	v->a[42134] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42135] = anon_sym_DOLLAR;
	v->a[42136] = anon_sym_DQUOTE;
	v->a[42137] = sym_raw_string;
	v->a[42138] = sym_number;
	v->a[42139] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2107(v);
}

void	small_parse_table_2107(t_small_parse_table_array *v)
{
	v->a[42140] = anon_sym_DOLLAR_LPAREN;
	v->a[42141] = anon_sym_BQUOTE;
	v->a[42142] = sym_word;
	v->a[42143] = actions(682);
	v->a[42144] = 14;
	v->a[42145] = anon_sym_PIPE;
	v->a[42146] = anon_sym_AMP_AMP;
	v->a[42147] = anon_sym_PIPE_PIPE;
	v->a[42148] = anon_sym_LT;
	v->a[42149] = anon_sym_GT;
	v->a[42150] = anon_sym_GT_GT;
	v->a[42151] = anon_sym_LT_AMP;
	v->a[42152] = anon_sym_GT_AMP;
	v->a[42153] = anon_sym_GT_PIPE;
	v->a[42154] = anon_sym_LT_AMP_DASH;
	v->a[42155] = anon_sym_GT_AMP_DASH;
	v->a[42156] = anon_sym_LT_LT;
	v->a[42157] = anon_sym_LT_LT_DASH;
	v->a[42158] = aux_sym_heredoc_redirect_token1;
	v->a[42159] = 3;
	small_parse_table_2108(v);
}

void	small_parse_table_2108(t_small_parse_table_array *v)
{
	v->a[42160] = actions(3);
	v->a[42161] = 1;
	v->a[42162] = sym_comment;
	v->a[42163] = actions(1033);
	v->a[42164] = 2;
	v->a[42165] = sym_file_descriptor;
	v->a[42166] = sym__concat;
	v->a[42167] = actions(1031);
	v->a[42168] = 28;
	v->a[42169] = anon_sym_PIPE;
	v->a[42170] = anon_sym_RPAREN;
	v->a[42171] = anon_sym_SEMI_SEMI;
	v->a[42172] = anon_sym_AMP_AMP;
	v->a[42173] = anon_sym_PIPE_PIPE;
	v->a[42174] = anon_sym_LT;
	v->a[42175] = anon_sym_GT;
	v->a[42176] = anon_sym_GT_GT;
	v->a[42177] = anon_sym_LT_AMP;
	v->a[42178] = anon_sym_GT_AMP;
	v->a[42179] = anon_sym_GT_PIPE;
	small_parse_table_2109(v);
}

void	small_parse_table_2109(t_small_parse_table_array *v)
{
	v->a[42180] = anon_sym_LT_AMP_DASH;
	v->a[42181] = anon_sym_GT_AMP_DASH;
	v->a[42182] = anon_sym_LT_LT;
	v->a[42183] = anon_sym_LT_LT_DASH;
	v->a[42184] = aux_sym_heredoc_redirect_token1;
	v->a[42185] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42186] = anon_sym_AMP;
	v->a[42187] = aux_sym_concatenation_token1;
	v->a[42188] = anon_sym_DOLLAR;
	v->a[42189] = anon_sym_DQUOTE;
	v->a[42190] = sym_raw_string;
	v->a[42191] = sym_number;
	v->a[42192] = anon_sym_DOLLAR_LBRACE;
	v->a[42193] = anon_sym_DOLLAR_LPAREN;
	v->a[42194] = anon_sym_BQUOTE;
	v->a[42195] = sym_word;
	v->a[42196] = anon_sym_SEMI;
	v->a[42197] = 3;
	v->a[42198] = actions(3);
	v->a[42199] = 1;
	small_parse_table_2110(v);
}

/* EOF small_parse_table_421.c */
