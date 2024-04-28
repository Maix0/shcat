/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1372.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6860(t_small_parse_table_array *v)
{
	v->a[137200] = sym_raw_string;
	v->a[137201] = sym_ansi_c_string;
	v->a[137202] = anon_sym_DOLLAR_LBRACE;
	v->a[137203] = anon_sym_DOLLAR_BQUOTE;
	v->a[137204] = anon_sym_LT_LPAREN;
	v->a[137205] = anon_sym_GT_LPAREN;
	v->a[137206] = 3;
	v->a[137207] = actions(71);
	v->a[137208] = 1;
	v->a[137209] = sym_comment;
	v->a[137210] = actions(1308);
	v->a[137211] = 14;
	v->a[137212] = anon_sym_PIPE;
	v->a[137213] = anon_sym_LT;
	v->a[137214] = anon_sym_GT;
	v->a[137215] = anon_sym_LT_LT;
	v->a[137216] = anon_sym_AMP_GT;
	v->a[137217] = anon_sym_LT_AMP;
	v->a[137218] = anon_sym_GT_AMP;
	v->a[137219] = anon_sym_DOLLAR;
	small_parse_table_6861(v);
}

void	small_parse_table_6861(t_small_parse_table_array *v)
{
	v->a[137220] = sym__special_character;
	v->a[137221] = aux_sym_number_token1;
	v->a[137222] = aux_sym_number_token2;
	v->a[137223] = anon_sym_DOLLAR_LPAREN;
	v->a[137224] = anon_sym_BQUOTE;
	v->a[137225] = sym_word;
	v->a[137226] = actions(1310);
	v->a[137227] = 25;
	v->a[137228] = sym_file_descriptor;
	v->a[137229] = sym__concat;
	v->a[137230] = sym_test_operator;
	v->a[137231] = sym__brace_start;
	v->a[137232] = anon_sym_LPAREN_LPAREN;
	v->a[137233] = anon_sym_PIPE_PIPE;
	v->a[137234] = anon_sym_AMP_AMP;
	v->a[137235] = anon_sym_GT_GT;
	v->a[137236] = anon_sym_PIPE_AMP;
	v->a[137237] = anon_sym_RBRACK;
	v->a[137238] = anon_sym_AMP_GT_GT;
	v->a[137239] = anon_sym_GT_PIPE;
	small_parse_table_6862(v);
}

void	small_parse_table_6862(t_small_parse_table_array *v)
{
	v->a[137240] = anon_sym_LT_AMP_DASH;
	v->a[137241] = anon_sym_GT_AMP_DASH;
	v->a[137242] = anon_sym_LT_LT_DASH;
	v->a[137243] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137244] = anon_sym_DOLLAR_LBRACK;
	v->a[137245] = aux_sym_concatenation_token1;
	v->a[137246] = anon_sym_DQUOTE;
	v->a[137247] = sym_raw_string;
	v->a[137248] = sym_ansi_c_string;
	v->a[137249] = anon_sym_DOLLAR_LBRACE;
	v->a[137250] = anon_sym_DOLLAR_BQUOTE;
	v->a[137251] = anon_sym_LT_LPAREN;
	v->a[137252] = anon_sym_GT_LPAREN;
	v->a[137253] = 6;
	v->a[137254] = actions(71);
	v->a[137255] = 1;
	v->a[137256] = sym_comment;
	v->a[137257] = actions(6780);
	v->a[137258] = 1;
	v->a[137259] = aux_sym_concatenation_token1;
	small_parse_table_6863(v);
}

void	small_parse_table_6863(t_small_parse_table_array *v)
{
	v->a[137260] = actions(6782);
	v->a[137261] = 1;
	v->a[137262] = sym__concat;
	v->a[137263] = state(2620);
	v->a[137264] = 1;
	v->a[137265] = aux_sym_concatenation_repeat1;
	v->a[137266] = actions(1265);
	v->a[137267] = 13;
	v->a[137268] = anon_sym_PIPE;
	v->a[137269] = anon_sym_LT;
	v->a[137270] = anon_sym_GT;
	v->a[137271] = anon_sym_LT_LT;
	v->a[137272] = anon_sym_AMP_GT;
	v->a[137273] = anon_sym_LT_AMP;
	v->a[137274] = anon_sym_GT_AMP;
	v->a[137275] = anon_sym_DOLLAR;
	v->a[137276] = aux_sym_number_token1;
	v->a[137277] = aux_sym_number_token2;
	v->a[137278] = anon_sym_DOLLAR_LPAREN;
	v->a[137279] = anon_sym_BQUOTE;
	small_parse_table_6864(v);
}

void	small_parse_table_6864(t_small_parse_table_array *v)
{
	v->a[137280] = sym_word;
	v->a[137281] = actions(1267);
	v->a[137282] = 23;
	v->a[137283] = sym_file_descriptor;
	v->a[137284] = sym_test_operator;
	v->a[137285] = sym__brace_start;
	v->a[137286] = anon_sym_LPAREN_LPAREN;
	v->a[137287] = anon_sym_PIPE_PIPE;
	v->a[137288] = anon_sym_AMP_AMP;
	v->a[137289] = anon_sym_GT_GT;
	v->a[137290] = anon_sym_PIPE_AMP;
	v->a[137291] = anon_sym_AMP_GT_GT;
	v->a[137292] = anon_sym_GT_PIPE;
	v->a[137293] = anon_sym_LT_AMP_DASH;
	v->a[137294] = anon_sym_GT_AMP_DASH;
	v->a[137295] = anon_sym_LT_LT_DASH;
	v->a[137296] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137297] = anon_sym_DOLLAR_LBRACK;
	v->a[137298] = sym__special_character;
	v->a[137299] = anon_sym_DQUOTE;
	small_parse_table_6865(v);
}

/* EOF small_parse_table_1372.c */
