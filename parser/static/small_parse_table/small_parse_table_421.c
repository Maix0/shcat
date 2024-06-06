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
	v->a[42100] = 5;
	v->a[42101] = sym_file_descriptor;
	v->a[42102] = sym_test_operator;
	v->a[42103] = sym__bare_dollar;
	v->a[42104] = sym__brace_start;
	v->a[42105] = aux_sym_heredoc_redirect_token1;
	v->a[42106] = actions(2749);
	v->a[42107] = 31;
	v->a[42108] = anon_sym_PIPE;
	v->a[42109] = anon_sym_SEMI_SEMI;
	v->a[42110] = anon_sym_PIPE_AMP;
	v->a[42111] = anon_sym_AMP_AMP;
	v->a[42112] = anon_sym_PIPE_PIPE;
	v->a[42113] = anon_sym_LT;
	v->a[42114] = anon_sym_GT;
	v->a[42115] = anon_sym_GT_GT;
	v->a[42116] = anon_sym_AMP_GT;
	v->a[42117] = anon_sym_AMP_GT_GT;
	v->a[42118] = anon_sym_LT_AMP;
	v->a[42119] = anon_sym_GT_AMP;
	small_parse_table_2106(v);
}

void	small_parse_table_2106(t_small_parse_table_array *v)
{
	v->a[42120] = anon_sym_GT_PIPE;
	v->a[42121] = anon_sym_LT_AMP_DASH;
	v->a[42122] = anon_sym_GT_AMP_DASH;
	v->a[42123] = anon_sym_LT_LT;
	v->a[42124] = anon_sym_LT_LT_DASH;
	v->a[42125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42126] = anon_sym_AMP;
	v->a[42127] = anon_sym_DOLLAR;
	v->a[42128] = sym__special_character;
	v->a[42129] = anon_sym_DQUOTE;
	v->a[42130] = sym_raw_string;
	v->a[42131] = aux_sym_number_token1;
	v->a[42132] = aux_sym_number_token2;
	v->a[42133] = anon_sym_DOLLAR_LBRACE;
	v->a[42134] = anon_sym_DOLLAR_LPAREN;
	v->a[42135] = anon_sym_BQUOTE;
	v->a[42136] = anon_sym_DOLLAR_BQUOTE;
	v->a[42137] = sym_word;
	v->a[42138] = anon_sym_SEMI;
	v->a[42139] = 3;
	small_parse_table_2107(v);
}

void	small_parse_table_2107(t_small_parse_table_array *v)
{
	v->a[42140] = actions(3);
	v->a[42141] = 1;
	v->a[42142] = sym_comment;
	v->a[42143] = actions(2888);
	v->a[42144] = 6;
	v->a[42145] = sym_file_descriptor;
	v->a[42146] = sym__concat;
	v->a[42147] = sym_test_operator;
	v->a[42148] = sym__bare_dollar;
	v->a[42149] = sym__brace_start;
	v->a[42150] = aux_sym_heredoc_redirect_token1;
	v->a[42151] = actions(2886);
	v->a[42152] = 34;
	v->a[42153] = anon_sym_PIPE;
	v->a[42154] = anon_sym_SEMI_SEMI;
	v->a[42155] = anon_sym_SEMI_AMP;
	v->a[42156] = anon_sym_SEMI_SEMI_AMP;
	v->a[42157] = anon_sym_PIPE_AMP;
	v->a[42158] = anon_sym_AMP_AMP;
	v->a[42159] = anon_sym_PIPE_PIPE;
	small_parse_table_2108(v);
}

void	small_parse_table_2108(t_small_parse_table_array *v)
{
	v->a[42160] = anon_sym_LT;
	v->a[42161] = anon_sym_GT;
	v->a[42162] = anon_sym_GT_GT;
	v->a[42163] = anon_sym_AMP_GT;
	v->a[42164] = anon_sym_AMP_GT_GT;
	v->a[42165] = anon_sym_LT_AMP;
	v->a[42166] = anon_sym_GT_AMP;
	v->a[42167] = anon_sym_GT_PIPE;
	v->a[42168] = anon_sym_LT_AMP_DASH;
	v->a[42169] = anon_sym_GT_AMP_DASH;
	v->a[42170] = anon_sym_LT_LT;
	v->a[42171] = anon_sym_LT_LT_DASH;
	v->a[42172] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42173] = anon_sym_AMP;
	v->a[42174] = aux_sym_concatenation_token1;
	v->a[42175] = anon_sym_DOLLAR;
	v->a[42176] = sym__special_character;
	v->a[42177] = anon_sym_DQUOTE;
	v->a[42178] = sym_raw_string;
	v->a[42179] = aux_sym_number_token1;
	small_parse_table_2109(v);
}

void	small_parse_table_2109(t_small_parse_table_array *v)
{
	v->a[42180] = aux_sym_number_token2;
	v->a[42181] = anon_sym_DOLLAR_LBRACE;
	v->a[42182] = anon_sym_DOLLAR_LPAREN;
	v->a[42183] = anon_sym_BQUOTE;
	v->a[42184] = anon_sym_DOLLAR_BQUOTE;
	v->a[42185] = sym_word;
	v->a[42186] = anon_sym_SEMI;
	v->a[42187] = 3;
	v->a[42188] = actions(3);
	v->a[42189] = 1;
	v->a[42190] = sym_comment;
	v->a[42191] = actions(2828);
	v->a[42192] = 6;
	v->a[42193] = sym_file_descriptor;
	v->a[42194] = sym__concat;
	v->a[42195] = sym_test_operator;
	v->a[42196] = sym__bare_dollar;
	v->a[42197] = sym__brace_start;
	v->a[42198] = aux_sym_heredoc_redirect_token1;
	v->a[42199] = actions(2826);
	small_parse_table_2110(v);
}

/* EOF small_parse_table_421.c */
