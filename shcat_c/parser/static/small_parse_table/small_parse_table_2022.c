/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2022.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10110(t_small_parse_table_array *v)
{
	v->a[202200] = 1;
	v->a[202201] = sym__brace_start;
	v->a[202202] = actions(9174);
	v->a[202203] = 1;
	v->a[202204] = sym_word;
	v->a[202205] = actions(9178);
	v->a[202206] = 1;
	v->a[202207] = sym_test_operator;
	v->a[202208] = state(1801);
	v->a[202209] = 1;
	v->a[202210] = aux_sym__literal_repeat1;
	v->a[202211] = actions(8470);
	v->a[202212] = 2;
	v->a[202213] = anon_sym_LPAREN_LPAREN;
	v->a[202214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202215] = actions(8496);
	v->a[202216] = 2;
	v->a[202217] = anon_sym_LT_LPAREN;
	v->a[202218] = anon_sym_GT_LPAREN;
	v->a[202219] = actions(9176);
	small_parse_table_10111(v);
}

void	small_parse_table_10111(t_small_parse_table_array *v)
{
	v->a[202220] = 2;
	v->a[202221] = sym_raw_string;
	v->a[202222] = sym_ansi_c_string;
	v->a[202223] = state(642);
	v->a[202224] = 2;
	v->a[202225] = sym_concatenation;
	v->a[202226] = aux_sym_for_statement_repeat1;
	v->a[202227] = state(1399);
	v->a[202228] = 9;
	v->a[202229] = sym_arithmetic_expansion;
	v->a[202230] = sym_brace_expression;
	v->a[202231] = sym_string;
	v->a[202232] = sym_translated_string;
	v->a[202233] = sym_number;
	v->a[202234] = sym_simple_expansion;
	v->a[202235] = sym_expansion;
	v->a[202236] = sym_command_substitution;
	v->a[202237] = sym_process_substitution;
	v->a[202238] = 20;
	v->a[202239] = actions(71);
	small_parse_table_10112(v);
}

void	small_parse_table_10112(t_small_parse_table_array *v)
{
	v->a[202240] = 1;
	v->a[202241] = sym_comment;
	v->a[202242] = actions(8178);
	v->a[202243] = 1;
	v->a[202244] = anon_sym_DOLLAR_LBRACK;
	v->a[202245] = actions(8180);
	v->a[202246] = 1;
	v->a[202247] = anon_sym_DOLLAR;
	v->a[202248] = actions(8182);
	v->a[202249] = 1;
	v->a[202250] = sym__special_character;
	v->a[202251] = actions(8184);
	v->a[202252] = 1;
	v->a[202253] = anon_sym_DQUOTE;
	v->a[202254] = actions(8188);
	v->a[202255] = 1;
	v->a[202256] = aux_sym_number_token1;
	v->a[202257] = actions(8190);
	v->a[202258] = 1;
	v->a[202259] = aux_sym_number_token2;
	small_parse_table_10113(v);
}

void	small_parse_table_10113(t_small_parse_table_array *v)
{
	v->a[202260] = actions(8192);
	v->a[202261] = 1;
	v->a[202262] = anon_sym_DOLLAR_LBRACE;
	v->a[202263] = actions(8194);
	v->a[202264] = 1;
	v->a[202265] = anon_sym_DOLLAR_LPAREN;
	v->a[202266] = actions(8196);
	v->a[202267] = 1;
	v->a[202268] = anon_sym_BQUOTE;
	v->a[202269] = actions(8198);
	v->a[202270] = 1;
	v->a[202271] = anon_sym_DOLLAR_BQUOTE;
	v->a[202272] = actions(8208);
	v->a[202273] = 1;
	v->a[202274] = sym__brace_start;
	v->a[202275] = actions(9230);
	v->a[202276] = 1;
	v->a[202277] = sym_word;
	v->a[202278] = actions(9234);
	v->a[202279] = 1;
	small_parse_table_10114(v);
}

void	small_parse_table_10114(t_small_parse_table_array *v)
{
	v->a[202280] = sym_test_operator;
	v->a[202281] = state(1744);
	v->a[202282] = 1;
	v->a[202283] = aux_sym__literal_repeat1;
	v->a[202284] = actions(8174);
	v->a[202285] = 2;
	v->a[202286] = anon_sym_LPAREN_LPAREN;
	v->a[202287] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202288] = actions(8200);
	v->a[202289] = 2;
	v->a[202290] = anon_sym_LT_LPAREN;
	v->a[202291] = anon_sym_GT_LPAREN;
	v->a[202292] = actions(9232);
	v->a[202293] = 2;
	v->a[202294] = sym_raw_string;
	v->a[202295] = sym_ansi_c_string;
	v->a[202296] = state(806);
	v->a[202297] = 2;
	v->a[202298] = sym_concatenation;
	v->a[202299] = aux_sym_for_statement_repeat1;
	small_parse_table_10115(v);
}

/* EOF small_parse_table_2022.c */
