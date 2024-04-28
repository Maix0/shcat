/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1882.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9410(t_small_parse_table_array *v)
{
	v->a[188200] = sym__brace_start;
	v->a[188201] = anon_sym_LPAREN_LPAREN;
	v->a[188202] = anon_sym_GT_GT;
	v->a[188203] = anon_sym_AMP_GT_GT;
	v->a[188204] = anon_sym_GT_PIPE;
	v->a[188205] = anon_sym_LT_AMP_DASH;
	v->a[188206] = anon_sym_GT_AMP_DASH;
	v->a[188207] = anon_sym_LT_LT_LT;
	v->a[188208] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188209] = anon_sym_DOLLAR_LBRACK;
	v->a[188210] = sym__special_character;
	v->a[188211] = anon_sym_DQUOTE;
	v->a[188212] = sym_raw_string;
	v->a[188213] = sym_ansi_c_string;
	v->a[188214] = anon_sym_DOLLAR_LBRACE;
	v->a[188215] = anon_sym_DOLLAR_BQUOTE;
	v->a[188216] = anon_sym_LT_LPAREN;
	v->a[188217] = anon_sym_GT_LPAREN;
	v->a[188218] = 5;
	v->a[188219] = actions(71);
	small_parse_table_9411(v);
}

void	small_parse_table_9411(t_small_parse_table_array *v)
{
	v->a[188220] = 1;
	v->a[188221] = sym_comment;
	v->a[188222] = state(3461);
	v->a[188223] = 1;
	v->a[188224] = aux_sym_concatenation_repeat1;
	v->a[188225] = actions(7751);
	v->a[188226] = 2;
	v->a[188227] = sym__concat;
	v->a[188228] = aux_sym_concatenation_token1;
	v->a[188229] = actions(2072);
	v->a[188230] = 11;
	v->a[188231] = anon_sym_LT;
	v->a[188232] = anon_sym_GT;
	v->a[188233] = anon_sym_AMP_GT;
	v->a[188234] = anon_sym_LT_AMP;
	v->a[188235] = anon_sym_GT_AMP;
	v->a[188236] = anon_sym_DOLLAR;
	v->a[188237] = aux_sym_number_token1;
	v->a[188238] = aux_sym_number_token2;
	v->a[188239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9412(v);
}

void	small_parse_table_9412(t_small_parse_table_array *v)
{
	v->a[188240] = anon_sym_BQUOTE;
	v->a[188241] = sym_word;
	v->a[188242] = actions(2074);
	v->a[188243] = 21;
	v->a[188244] = sym_file_descriptor;
	v->a[188245] = sym_variable_name;
	v->a[188246] = sym_test_operator;
	v->a[188247] = sym__brace_start;
	v->a[188248] = anon_sym_LPAREN_LPAREN;
	v->a[188249] = anon_sym_GT_GT;
	v->a[188250] = anon_sym_AMP_GT_GT;
	v->a[188251] = anon_sym_GT_PIPE;
	v->a[188252] = anon_sym_LT_AMP_DASH;
	v->a[188253] = anon_sym_GT_AMP_DASH;
	v->a[188254] = anon_sym_LT_LT_LT;
	v->a[188255] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188256] = anon_sym_DOLLAR_LBRACK;
	v->a[188257] = sym__special_character;
	v->a[188258] = anon_sym_DQUOTE;
	v->a[188259] = sym_raw_string;
	small_parse_table_9413(v);
}

void	small_parse_table_9413(t_small_parse_table_array *v)
{
	v->a[188260] = sym_ansi_c_string;
	v->a[188261] = anon_sym_DOLLAR_LBRACE;
	v->a[188262] = anon_sym_DOLLAR_BQUOTE;
	v->a[188263] = anon_sym_LT_LPAREN;
	v->a[188264] = anon_sym_GT_LPAREN;
	v->a[188265] = 8;
	v->a[188266] = actions(3);
	v->a[188267] = 1;
	v->a[188268] = sym_comment;
	v->a[188269] = actions(1241);
	v->a[188270] = 1;
	v->a[188271] = sym_file_descriptor;
	v->a[188272] = actions(4084);
	v->a[188273] = 1;
	v->a[188274] = anon_sym_DQUOTE;
	v->a[188275] = actions(7613);
	v->a[188276] = 1;
	v->a[188277] = sym_variable_name;
	v->a[188278] = state(4606);
	v->a[188279] = 1;
	small_parse_table_9414(v);
}

void	small_parse_table_9414(t_small_parse_table_array *v)
{
	v->a[188280] = sym_string;
	v->a[188281] = actions(7611);
	v->a[188282] = 2;
	v->a[188283] = aux_sym__simple_variable_name_token1;
	v->a[188284] = aux_sym__multiline_variable_name_token1;
	v->a[188285] = actions(7609);
	v->a[188286] = 9;
	v->a[188287] = anon_sym_DASH;
	v->a[188288] = anon_sym_STAR;
	v->a[188289] = anon_sym_BANG;
	v->a[188290] = anon_sym_QMARK;
	v->a[188291] = anon_sym_DOLLAR;
	v->a[188292] = anon_sym_POUND;
	v->a[188293] = anon_sym_AT2;
	v->a[188294] = anon_sym_0;
	v->a[188295] = anon_sym__;
	v->a[188296] = actions(1239);
	v->a[188297] = 20;
	v->a[188298] = anon_sym_SEMI;
	v->a[188299] = anon_sym_PIPE_PIPE;
	small_parse_table_9415(v);
}

/* EOF small_parse_table_1882.c */
