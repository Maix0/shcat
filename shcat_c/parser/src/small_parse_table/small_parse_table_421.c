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
	v->a[42100] = actions(4465);
	v->a[42101] = 6;
	v->a[42102] = sym_file_descriptor;
	v->a[42103] = sym_test_operator;
	v->a[42104] = sym__bare_dollar;
	v->a[42105] = sym__brace_start;
	v->a[42106] = ts_builtin_sym_end;
	v->a[42107] = aux_sym_heredoc_redirect_token1;
	v->a[42108] = actions(4463);
	v->a[42109] = 39;
	v->a[42110] = anon_sym_LPAREN_LPAREN;
	v->a[42111] = anon_sym_SEMI;
	v->a[42112] = anon_sym_PIPE_PIPE;
	v->a[42113] = anon_sym_AMP_AMP;
	v->a[42114] = anon_sym_PIPE;
	v->a[42115] = anon_sym_AMP;
	v->a[42116] = anon_sym_EQ_EQ;
	v->a[42117] = anon_sym_LT;
	v->a[42118] = anon_sym_GT;
	v->a[42119] = anon_sym_LT_LT;
	small_parse_table_2106(v);
}

void	small_parse_table_2106(t_small_parse_table_array *v)
{
	v->a[42120] = anon_sym_GT_GT;
	v->a[42121] = anon_sym_SEMI_SEMI;
	v->a[42122] = anon_sym_PIPE_AMP;
	v->a[42123] = anon_sym_EQ_TILDE;
	v->a[42124] = anon_sym_AMP_GT;
	v->a[42125] = anon_sym_AMP_GT_GT;
	v->a[42126] = anon_sym_LT_AMP;
	v->a[42127] = anon_sym_GT_AMP;
	v->a[42128] = anon_sym_GT_PIPE;
	v->a[42129] = anon_sym_LT_AMP_DASH;
	v->a[42130] = anon_sym_GT_AMP_DASH;
	v->a[42131] = anon_sym_LT_LT_DASH;
	v->a[42132] = anon_sym_LT_LT_LT;
	v->a[42133] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42134] = anon_sym_DOLLAR_LBRACK;
	v->a[42135] = anon_sym_DOLLAR;
	v->a[42136] = sym__special_character;
	v->a[42137] = anon_sym_DQUOTE;
	v->a[42138] = sym_raw_string;
	v->a[42139] = sym_ansi_c_string;
	small_parse_table_2107(v);
}

void	small_parse_table_2107(t_small_parse_table_array *v)
{
	v->a[42140] = aux_sym_number_token1;
	v->a[42141] = aux_sym_number_token2;
	v->a[42142] = anon_sym_DOLLAR_LBRACE;
	v->a[42143] = anon_sym_DOLLAR_LPAREN;
	v->a[42144] = anon_sym_BQUOTE;
	v->a[42145] = anon_sym_DOLLAR_BQUOTE;
	v->a[42146] = anon_sym_LT_LPAREN;
	v->a[42147] = anon_sym_GT_LPAREN;
	v->a[42148] = sym_word;
	v->a[42149] = 6;
	v->a[42150] = actions(3);
	v->a[42151] = 1;
	v->a[42152] = sym_comment;
	v->a[42153] = actions(5080);
	v->a[42154] = 1;
	v->a[42155] = aux_sym_concatenation_token1;
	v->a[42156] = actions(5148);
	v->a[42157] = 1;
	v->a[42158] = sym__concat;
	v->a[42159] = state(1065);
	small_parse_table_2108(v);
}

void	small_parse_table_2108(t_small_parse_table_array *v)
{
	v->a[42160] = 1;
	v->a[42161] = aux_sym_concatenation_repeat1;
	v->a[42162] = actions(1288);
	v->a[42163] = 5;
	v->a[42164] = sym_file_descriptor;
	v->a[42165] = sym_test_operator;
	v->a[42166] = sym__bare_dollar;
	v->a[42167] = sym__brace_start;
	v->a[42168] = aux_sym_heredoc_redirect_token1;
	v->a[42169] = actions(1286);
	v->a[42170] = 40;
	v->a[42171] = anon_sym_LPAREN_LPAREN;
	v->a[42172] = anon_sym_SEMI;
	v->a[42173] = anon_sym_PIPE_PIPE;
	v->a[42174] = anon_sym_AMP_AMP;
	v->a[42175] = anon_sym_PIPE;
	v->a[42176] = anon_sym_AMP;
	v->a[42177] = anon_sym_EQ_EQ;
	v->a[42178] = anon_sym_LT;
	v->a[42179] = anon_sym_GT;
	small_parse_table_2109(v);
}

void	small_parse_table_2109(t_small_parse_table_array *v)
{
	v->a[42180] = anon_sym_LT_LT;
	v->a[42181] = anon_sym_GT_GT;
	v->a[42182] = anon_sym_RPAREN;
	v->a[42183] = anon_sym_SEMI_SEMI;
	v->a[42184] = anon_sym_PIPE_AMP;
	v->a[42185] = anon_sym_EQ_TILDE;
	v->a[42186] = anon_sym_AMP_GT;
	v->a[42187] = anon_sym_AMP_GT_GT;
	v->a[42188] = anon_sym_LT_AMP;
	v->a[42189] = anon_sym_GT_AMP;
	v->a[42190] = anon_sym_GT_PIPE;
	v->a[42191] = anon_sym_LT_AMP_DASH;
	v->a[42192] = anon_sym_GT_AMP_DASH;
	v->a[42193] = anon_sym_LT_LT_DASH;
	v->a[42194] = anon_sym_LT_LT_LT;
	v->a[42195] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42196] = anon_sym_DOLLAR_LBRACK;
	v->a[42197] = anon_sym_DOLLAR;
	v->a[42198] = sym__special_character;
	v->a[42199] = anon_sym_DQUOTE;
	small_parse_table_2110(v);
}

/* EOF small_parse_table_421.c */
