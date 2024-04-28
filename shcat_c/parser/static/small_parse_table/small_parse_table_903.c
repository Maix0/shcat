/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_903.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4515(t_small_parse_table_array *v)
{
	v->a[90300] = sym_test_operator;
	v->a[90301] = actions(6072);
	v->a[90302] = 1;
	v->a[90303] = sym__brace_start;
	v->a[90304] = state(3543);
	v->a[90305] = 1;
	v->a[90306] = aux_sym__literal_repeat1;
	v->a[90307] = actions(6030);
	v->a[90308] = 2;
	v->a[90309] = anon_sym_LPAREN_LPAREN;
	v->a[90310] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90311] = actions(6045);
	v->a[90312] = 2;
	v->a[90313] = sym_raw_string;
	v->a[90314] = sym_ansi_c_string;
	v->a[90315] = actions(6066);
	v->a[90316] = 2;
	v->a[90317] = anon_sym_LT_LPAREN;
	v->a[90318] = anon_sym_GT_LPAREN;
	v->a[90319] = state(1868);
	small_parse_table_4516(v);
}

void	small_parse_table_4516(t_small_parse_table_array *v)
{
	v->a[90320] = 2;
	v->a[90321] = sym_concatenation;
	v->a[90322] = aux_sym_for_statement_repeat1;
	v->a[90323] = actions(2214);
	v->a[90324] = 5;
	v->a[90325] = anon_sym_LT;
	v->a[90326] = anon_sym_GT;
	v->a[90327] = anon_sym_AMP_GT;
	v->a[90328] = anon_sym_LT_AMP;
	v->a[90329] = anon_sym_GT_AMP;
	v->a[90330] = actions(2216);
	v->a[90331] = 8;
	v->a[90332] = sym_file_descriptor;
	v->a[90333] = sym_variable_name;
	v->a[90334] = anon_sym_GT_GT;
	v->a[90335] = anon_sym_AMP_GT_GT;
	v->a[90336] = anon_sym_GT_PIPE;
	v->a[90337] = anon_sym_LT_AMP_DASH;
	v->a[90338] = anon_sym_GT_AMP_DASH;
	v->a[90339] = anon_sym_LT_LT_LT;
	small_parse_table_4517(v);
}

void	small_parse_table_4517(t_small_parse_table_array *v)
{
	v->a[90340] = state(3480);
	v->a[90341] = 9;
	v->a[90342] = sym_arithmetic_expansion;
	v->a[90343] = sym_brace_expression;
	v->a[90344] = sym_string;
	v->a[90345] = sym_translated_string;
	v->a[90346] = sym_number;
	v->a[90347] = sym_simple_expansion;
	v->a[90348] = sym_expansion;
	v->a[90349] = sym_command_substitution;
	v->a[90350] = sym_process_substitution;
	v->a[90351] = 27;
	v->a[90352] = actions(71);
	v->a[90353] = 1;
	v->a[90354] = sym_comment;
	v->a[90355] = actions(1131);
	v->a[90356] = 1;
	v->a[90357] = anon_sym_LPAREN;
	v->a[90358] = actions(1141);
	v->a[90359] = 1;
	small_parse_table_4518(v);
}

void	small_parse_table_4518(t_small_parse_table_array *v)
{
	v->a[90360] = anon_sym_DOLLAR_LBRACK;
	v->a[90361] = actions(1145);
	v->a[90362] = 1;
	v->a[90363] = anon_sym_DOLLAR;
	v->a[90364] = actions(1149);
	v->a[90365] = 1;
	v->a[90366] = anon_sym_DQUOTE;
	v->a[90367] = actions(1153);
	v->a[90368] = 1;
	v->a[90369] = aux_sym_number_token1;
	v->a[90370] = actions(1155);
	v->a[90371] = 1;
	v->a[90372] = aux_sym_number_token2;
	v->a[90373] = actions(1157);
	v->a[90374] = 1;
	v->a[90375] = anon_sym_DOLLAR_LBRACE;
	v->a[90376] = actions(1159);
	v->a[90377] = 1;
	v->a[90378] = anon_sym_DOLLAR_LPAREN;
	v->a[90379] = actions(1163);
	small_parse_table_4519(v);
}

void	small_parse_table_4519(t_small_parse_table_array *v)
{
	v->a[90380] = 1;
	v->a[90381] = anon_sym_DOLLAR_BQUOTE;
	v->a[90382] = actions(1169);
	v->a[90383] = 1;
	v->a[90384] = sym__brace_start;
	v->a[90385] = actions(1187);
	v->a[90386] = 1;
	v->a[90387] = sym_word;
	v->a[90388] = actions(1189);
	v->a[90389] = 1;
	v->a[90390] = anon_sym_BANG;
	v->a[90391] = actions(1195);
	v->a[90392] = 1;
	v->a[90393] = anon_sym_TILDE;
	v->a[90394] = actions(1201);
	v->a[90395] = 1;
	v->a[90396] = sym_test_operator;
	v->a[90397] = actions(3060);
	v->a[90398] = 1;
	v->a[90399] = anon_sym_BQUOTE;
	small_parse_table_4520(v);
}

/* EOF small_parse_table_903.c */
