/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_822.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4110(t_small_parse_table_array *v)
{
	v->a[82200] = anon_sym_LT_AMP;
	v->a[82201] = anon_sym_GT_AMP;
	v->a[82202] = anon_sym_GT_PIPE;
	v->a[82203] = anon_sym_LT_AMP_DASH;
	v->a[82204] = anon_sym_GT_AMP_DASH;
	v->a[82205] = anon_sym_LT_LT_DASH;
	v->a[82206] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82207] = anon_sym_DOLLAR_LBRACK;
	v->a[82208] = anon_sym_DOLLAR;
	v->a[82209] = sym__special_character;
	v->a[82210] = anon_sym_DQUOTE;
	v->a[82211] = sym_raw_string;
	v->a[82212] = sym_ansi_c_string;
	v->a[82213] = aux_sym_number_token1;
	v->a[82214] = aux_sym_number_token2;
	v->a[82215] = anon_sym_DOLLAR_LBRACE;
	v->a[82216] = anon_sym_DOLLAR_LPAREN;
	v->a[82217] = anon_sym_BQUOTE;
	v->a[82218] = anon_sym_DOLLAR_BQUOTE;
	v->a[82219] = anon_sym_LT_LPAREN;
	small_parse_table_4111(v);
}

void	small_parse_table_4111(t_small_parse_table_array *v)
{
	v->a[82220] = anon_sym_GT_LPAREN;
	v->a[82221] = aux_sym__simple_variable_name_token1;
	v->a[82222] = sym_word;
	v->a[82223] = 3;
	v->a[82224] = actions(3);
	v->a[82225] = 1;
	v->a[82226] = sym_comment;
	v->a[82227] = actions(1302);
	v->a[82228] = 5;
	v->a[82229] = sym_file_descriptor;
	v->a[82230] = sym__concat;
	v->a[82231] = sym_test_operator;
	v->a[82232] = sym__brace_start;
	v->a[82233] = aux_sym_heredoc_redirect_token1;
	v->a[82234] = actions(1300);
	v->a[82235] = 39;
	v->a[82236] = anon_sym_LPAREN_LPAREN;
	v->a[82237] = anon_sym_SEMI;
	v->a[82238] = anon_sym_PIPE_PIPE;
	v->a[82239] = anon_sym_AMP_AMP;
	small_parse_table_4112(v);
}

void	small_parse_table_4112(t_small_parse_table_array *v)
{
	v->a[82240] = anon_sym_PIPE;
	v->a[82241] = anon_sym_AMP;
	v->a[82242] = anon_sym_LT;
	v->a[82243] = anon_sym_GT;
	v->a[82244] = anon_sym_LT_LT;
	v->a[82245] = anon_sym_GT_GT;
	v->a[82246] = anon_sym_RPAREN;
	v->a[82247] = anon_sym_SEMI_SEMI;
	v->a[82248] = anon_sym_PIPE_AMP;
	v->a[82249] = anon_sym_AMP_GT;
	v->a[82250] = anon_sym_AMP_GT_GT;
	v->a[82251] = anon_sym_LT_AMP;
	v->a[82252] = anon_sym_GT_AMP;
	v->a[82253] = anon_sym_GT_PIPE;
	v->a[82254] = anon_sym_LT_AMP_DASH;
	v->a[82255] = anon_sym_GT_AMP_DASH;
	v->a[82256] = anon_sym_LT_LT_DASH;
	v->a[82257] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82258] = anon_sym_DOLLAR_LBRACK;
	v->a[82259] = aux_sym_concatenation_token1;
	small_parse_table_4113(v);
}

void	small_parse_table_4113(t_small_parse_table_array *v)
{
	v->a[82260] = anon_sym_DOLLAR;
	v->a[82261] = sym__special_character;
	v->a[82262] = anon_sym_DQUOTE;
	v->a[82263] = sym_raw_string;
	v->a[82264] = sym_ansi_c_string;
	v->a[82265] = aux_sym_number_token1;
	v->a[82266] = aux_sym_number_token2;
	v->a[82267] = anon_sym_DOLLAR_LBRACE;
	v->a[82268] = anon_sym_DOLLAR_LPAREN;
	v->a[82269] = anon_sym_BQUOTE;
	v->a[82270] = anon_sym_DOLLAR_BQUOTE;
	v->a[82271] = anon_sym_LT_LPAREN;
	v->a[82272] = anon_sym_GT_LPAREN;
	v->a[82273] = aux_sym__simple_variable_name_token1;
	v->a[82274] = sym_word;
	v->a[82275] = 3;
	v->a[82276] = actions(3);
	v->a[82277] = 1;
	v->a[82278] = sym_comment;
	v->a[82279] = actions(5768);
	small_parse_table_4114(v);
}

void	small_parse_table_4114(t_small_parse_table_array *v)
{
	v->a[82280] = 5;
	v->a[82281] = sym_file_descriptor;
	v->a[82282] = sym_variable_name;
	v->a[82283] = sym_test_operator;
	v->a[82284] = sym__brace_start;
	v->a[82285] = aux_sym_heredoc_redirect_token1;
	v->a[82286] = actions(5766);
	v->a[82287] = 39;
	v->a[82288] = anon_sym_LPAREN_LPAREN;
	v->a[82289] = anon_sym_SEMI;
	v->a[82290] = anon_sym_PIPE_PIPE;
	v->a[82291] = anon_sym_AMP_AMP;
	v->a[82292] = anon_sym_PIPE;
	v->a[82293] = anon_sym_AMP;
	v->a[82294] = anon_sym_LT;
	v->a[82295] = anon_sym_GT;
	v->a[82296] = anon_sym_LT_LT;
	v->a[82297] = anon_sym_GT_GT;
	v->a[82298] = anon_sym_SEMI_SEMI;
	v->a[82299] = anon_sym_SEMI_AMP;
	small_parse_table_4115(v);
}

/* EOF small_parse_table_822.c */
