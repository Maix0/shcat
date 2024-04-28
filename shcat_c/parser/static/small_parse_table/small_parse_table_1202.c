/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1202.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6010(t_small_parse_table_array *v)
{
	v->a[120200] = sym_file_descriptor;
	v->a[120201] = sym_variable_name;
	v->a[120202] = sym_test_operator;
	v->a[120203] = sym__brace_start;
	v->a[120204] = aux_sym_heredoc_redirect_token1;
	v->a[120205] = actions(1286);
	v->a[120206] = 34;
	v->a[120207] = anon_sym_LPAREN_LPAREN;
	v->a[120208] = anon_sym_PIPE_PIPE;
	v->a[120209] = anon_sym_AMP_AMP;
	v->a[120210] = anon_sym_PIPE;
	v->a[120211] = anon_sym_LT;
	v->a[120212] = anon_sym_GT;
	v->a[120213] = anon_sym_LT_LT;
	v->a[120214] = anon_sym_GT_GT;
	v->a[120215] = anon_sym_PIPE_AMP;
	v->a[120216] = anon_sym_AMP_GT;
	v->a[120217] = anon_sym_AMP_GT_GT;
	v->a[120218] = anon_sym_LT_AMP;
	v->a[120219] = anon_sym_GT_AMP;
	small_parse_table_6011(v);
}

void	small_parse_table_6011(t_small_parse_table_array *v)
{
	v->a[120220] = anon_sym_GT_PIPE;
	v->a[120221] = anon_sym_LT_AMP_DASH;
	v->a[120222] = anon_sym_GT_AMP_DASH;
	v->a[120223] = anon_sym_LT_LT_DASH;
	v->a[120224] = anon_sym_LT_LT_LT;
	v->a[120225] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120226] = anon_sym_DOLLAR_LBRACK;
	v->a[120227] = anon_sym_DOLLAR;
	v->a[120228] = sym__special_character;
	v->a[120229] = anon_sym_DQUOTE;
	v->a[120230] = sym_raw_string;
	v->a[120231] = sym_ansi_c_string;
	v->a[120232] = aux_sym_number_token1;
	v->a[120233] = aux_sym_number_token2;
	v->a[120234] = anon_sym_DOLLAR_LBRACE;
	v->a[120235] = anon_sym_DOLLAR_LPAREN;
	v->a[120236] = anon_sym_BQUOTE;
	v->a[120237] = anon_sym_DOLLAR_BQUOTE;
	v->a[120238] = anon_sym_LT_LPAREN;
	v->a[120239] = anon_sym_GT_LPAREN;
	small_parse_table_6012(v);
}

void	small_parse_table_6012(t_small_parse_table_array *v)
{
	v->a[120240] = sym_word;
	v->a[120241] = 5;
	v->a[120242] = actions(71);
	v->a[120243] = 1;
	v->a[120244] = sym_comment;
	v->a[120245] = state(2285);
	v->a[120246] = 1;
	v->a[120247] = aux_sym_concatenation_repeat1;
	v->a[120248] = actions(6441);
	v->a[120249] = 2;
	v->a[120250] = sym__concat;
	v->a[120251] = aux_sym_concatenation_token1;
	v->a[120252] = actions(1261);
	v->a[120253] = 14;
	v->a[120254] = anon_sym_PIPE;
	v->a[120255] = anon_sym_LT;
	v->a[120256] = anon_sym_GT;
	v->a[120257] = anon_sym_LT_LT;
	v->a[120258] = anon_sym_AMP_GT;
	v->a[120259] = anon_sym_LT_AMP;
	small_parse_table_6013(v);
}

void	small_parse_table_6013(t_small_parse_table_array *v)
{
	v->a[120260] = anon_sym_GT_AMP;
	v->a[120261] = anon_sym_DOLLAR;
	v->a[120262] = sym__special_character;
	v->a[120263] = aux_sym_number_token1;
	v->a[120264] = aux_sym_number_token2;
	v->a[120265] = anon_sym_DOLLAR_LPAREN;
	v->a[120266] = anon_sym_BQUOTE;
	v->a[120267] = sym_word;
	v->a[120268] = actions(1263);
	v->a[120269] = 25;
	v->a[120270] = sym_file_descriptor;
	v->a[120271] = sym_variable_name;
	v->a[120272] = sym_test_operator;
	v->a[120273] = sym__brace_start;
	v->a[120274] = anon_sym_LPAREN_LPAREN;
	v->a[120275] = anon_sym_PIPE_PIPE;
	v->a[120276] = anon_sym_AMP_AMP;
	v->a[120277] = anon_sym_GT_GT;
	v->a[120278] = anon_sym_PIPE_AMP;
	v->a[120279] = anon_sym_RBRACK;
	small_parse_table_6014(v);
}

void	small_parse_table_6014(t_small_parse_table_array *v)
{
	v->a[120280] = anon_sym_AMP_GT_GT;
	v->a[120281] = anon_sym_GT_PIPE;
	v->a[120282] = anon_sym_LT_AMP_DASH;
	v->a[120283] = anon_sym_GT_AMP_DASH;
	v->a[120284] = anon_sym_LT_LT_DASH;
	v->a[120285] = anon_sym_LT_LT_LT;
	v->a[120286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120287] = anon_sym_DOLLAR_LBRACK;
	v->a[120288] = anon_sym_DQUOTE;
	v->a[120289] = sym_raw_string;
	v->a[120290] = sym_ansi_c_string;
	v->a[120291] = anon_sym_DOLLAR_LBRACE;
	v->a[120292] = anon_sym_DOLLAR_BQUOTE;
	v->a[120293] = anon_sym_LT_LPAREN;
	v->a[120294] = anon_sym_GT_LPAREN;
	v->a[120295] = 3;
	v->a[120296] = actions(71);
	v->a[120297] = 1;
	v->a[120298] = sym_comment;
	v->a[120299] = actions(1308);
	small_parse_table_6015(v);
}

/* EOF small_parse_table_1202.c */
