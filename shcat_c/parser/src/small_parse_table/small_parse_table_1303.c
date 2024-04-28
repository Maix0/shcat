/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1303.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6515(t_small_parse_table_array *v)
{
	v->a[130300] = actions(1302);
	v->a[130301] = 26;
	v->a[130302] = sym_file_descriptor;
	v->a[130303] = sym__concat;
	v->a[130304] = sym_test_operator;
	v->a[130305] = sym__brace_start;
	v->a[130306] = anon_sym_LPAREN_LPAREN;
	v->a[130307] = anon_sym_PIPE_PIPE;
	v->a[130308] = anon_sym_AMP_AMP;
	v->a[130309] = anon_sym_GT_GT;
	v->a[130310] = anon_sym_PIPE_AMP;
	v->a[130311] = anon_sym_RBRACK;
	v->a[130312] = anon_sym_AMP_GT_GT;
	v->a[130313] = anon_sym_GT_PIPE;
	v->a[130314] = anon_sym_LT_AMP_DASH;
	v->a[130315] = anon_sym_GT_AMP_DASH;
	v->a[130316] = anon_sym_LT_LT_DASH;
	v->a[130317] = anon_sym_LT_LT_LT;
	v->a[130318] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[130319] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_6516(v);
}

void	small_parse_table_6516(t_small_parse_table_array *v)
{
	v->a[130320] = aux_sym_concatenation_token1;
	v->a[130321] = anon_sym_DQUOTE;
	v->a[130322] = sym_raw_string;
	v->a[130323] = sym_ansi_c_string;
	v->a[130324] = anon_sym_DOLLAR_LBRACE;
	v->a[130325] = anon_sym_DOLLAR_BQUOTE;
	v->a[130326] = anon_sym_LT_LPAREN;
	v->a[130327] = anon_sym_GT_LPAREN;
	v->a[130328] = 3;
	v->a[130329] = actions(71);
	v->a[130330] = 1;
	v->a[130331] = sym_comment;
	v->a[130332] = actions(1292);
	v->a[130333] = 13;
	v->a[130334] = anon_sym_PIPE;
	v->a[130335] = anon_sym_LT;
	v->a[130336] = anon_sym_GT;
	v->a[130337] = anon_sym_LT_LT;
	v->a[130338] = anon_sym_AMP_GT;
	v->a[130339] = anon_sym_LT_AMP;
	small_parse_table_6517(v);
}

void	small_parse_table_6517(t_small_parse_table_array *v)
{
	v->a[130340] = anon_sym_GT_AMP;
	v->a[130341] = anon_sym_DOLLAR;
	v->a[130342] = aux_sym_number_token1;
	v->a[130343] = aux_sym_number_token2;
	v->a[130344] = anon_sym_DOLLAR_LPAREN;
	v->a[130345] = anon_sym_BQUOTE;
	v->a[130346] = sym_word;
	v->a[130347] = actions(1294);
	v->a[130348] = 27;
	v->a[130349] = sym_file_descriptor;
	v->a[130350] = sym__concat;
	v->a[130351] = sym_variable_name;
	v->a[130352] = sym_test_operator;
	v->a[130353] = sym__brace_start;
	v->a[130354] = anon_sym_LPAREN_LPAREN;
	v->a[130355] = anon_sym_PIPE_PIPE;
	v->a[130356] = anon_sym_AMP_AMP;
	v->a[130357] = anon_sym_GT_GT;
	v->a[130358] = anon_sym_PIPE_AMP;
	v->a[130359] = anon_sym_AMP_GT_GT;
	small_parse_table_6518(v);
}

void	small_parse_table_6518(t_small_parse_table_array *v)
{
	v->a[130360] = anon_sym_GT_PIPE;
	v->a[130361] = anon_sym_LT_AMP_DASH;
	v->a[130362] = anon_sym_GT_AMP_DASH;
	v->a[130363] = anon_sym_LT_LT_DASH;
	v->a[130364] = anon_sym_LT_LT_LT;
	v->a[130365] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[130366] = anon_sym_DOLLAR_LBRACK;
	v->a[130367] = aux_sym_concatenation_token1;
	v->a[130368] = sym__special_character;
	v->a[130369] = anon_sym_DQUOTE;
	v->a[130370] = sym_raw_string;
	v->a[130371] = sym_ansi_c_string;
	v->a[130372] = anon_sym_DOLLAR_LBRACE;
	v->a[130373] = anon_sym_DOLLAR_BQUOTE;
	v->a[130374] = anon_sym_LT_LPAREN;
	v->a[130375] = anon_sym_GT_LPAREN;
	v->a[130376] = 6;
	v->a[130377] = actions(3);
	v->a[130378] = 1;
	v->a[130379] = sym_comment;
	small_parse_table_6519(v);
}

void	small_parse_table_6519(t_small_parse_table_array *v)
{
	v->a[130380] = actions(6013);
	v->a[130381] = 1;
	v->a[130382] = aux_sym_concatenation_token1;
	v->a[130383] = actions(6015);
	v->a[130384] = 1;
	v->a[130385] = sym__concat;
	v->a[130386] = state(2470);
	v->a[130387] = 1;
	v->a[130388] = aux_sym_concatenation_repeat1;
	v->a[130389] = actions(1263);
	v->a[130390] = 4;
	v->a[130391] = sym_file_descriptor;
	v->a[130392] = sym_test_operator;
	v->a[130393] = sym__brace_start;
	v->a[130394] = aux_sym_heredoc_redirect_token1;
	v->a[130395] = actions(1261);
	v->a[130396] = 33;
	v->a[130397] = anon_sym_LPAREN_LPAREN;
	v->a[130398] = anon_sym_PIPE_PIPE;
	v->a[130399] = anon_sym_AMP_AMP;
	small_parse_table_6520(v);
}

/* EOF small_parse_table_1303.c */
