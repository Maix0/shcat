/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1884.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9420(t_small_parse_table_array *v)
{
	v->a[188400] = 1;
	v->a[188401] = sym__special_character;
	v->a[188402] = actions(7767);
	v->a[188403] = 1;
	v->a[188404] = sym_test_operator;
	v->a[188405] = actions(7940);
	v->a[188406] = 1;
	v->a[188407] = aux_sym_heredoc_redirect_token1;
	v->a[188408] = state(4975);
	v->a[188409] = 1;
	v->a[188410] = aux_sym__literal_repeat1;
	v->a[188411] = actions(3715);
	v->a[188412] = 2;
	v->a[188413] = anon_sym_LPAREN_LPAREN;
	v->a[188414] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188415] = actions(3749);
	v->a[188416] = 2;
	v->a[188417] = anon_sym_LT_LPAREN;
	v->a[188418] = anon_sym_GT_LPAREN;
	v->a[188419] = state(3478);
	small_parse_table_9421(v);
}

void	small_parse_table_9421(t_small_parse_table_array *v)
{
	v->a[188420] = 2;
	v->a[188421] = sym_concatenation;
	v->a[188422] = aux_sym_for_statement_repeat1;
	v->a[188423] = actions(7759);
	v->a[188424] = 3;
	v->a[188425] = sym_raw_string;
	v->a[188426] = sym_ansi_c_string;
	v->a[188427] = sym_word;
	v->a[188428] = actions(7938);
	v->a[188429] = 3;
	v->a[188430] = anon_sym_SEMI;
	v->a[188431] = anon_sym_AMP;
	v->a[188432] = anon_sym_SEMI_SEMI;
	v->a[188433] = state(4460);
	v->a[188434] = 9;
	v->a[188435] = sym_arithmetic_expansion;
	v->a[188436] = sym_brace_expression;
	v->a[188437] = sym_string;
	v->a[188438] = sym_translated_string;
	v->a[188439] = sym_number;
	small_parse_table_9422(v);
}

void	small_parse_table_9422(t_small_parse_table_array *v)
{
	v->a[188440] = sym_simple_expansion;
	v->a[188441] = sym_expansion;
	v->a[188442] = sym_command_substitution;
	v->a[188443] = sym_process_substitution;
	v->a[188444] = 8;
	v->a[188445] = actions(3);
	v->a[188446] = 1;
	v->a[188447] = sym_comment;
	v->a[188448] = actions(1235);
	v->a[188449] = 1;
	v->a[188450] = sym_file_descriptor;
	v->a[188451] = actions(4084);
	v->a[188452] = 1;
	v->a[188453] = anon_sym_DQUOTE;
	v->a[188454] = actions(7613);
	v->a[188455] = 1;
	v->a[188456] = sym_variable_name;
	v->a[188457] = state(4606);
	v->a[188458] = 1;
	v->a[188459] = sym_string;
	small_parse_table_9423(v);
}

void	small_parse_table_9423(t_small_parse_table_array *v)
{
	v->a[188460] = actions(7611);
	v->a[188461] = 2;
	v->a[188462] = aux_sym__simple_variable_name_token1;
	v->a[188463] = aux_sym__multiline_variable_name_token1;
	v->a[188464] = actions(7609);
	v->a[188465] = 9;
	v->a[188466] = anon_sym_DASH;
	v->a[188467] = anon_sym_STAR;
	v->a[188468] = anon_sym_BANG;
	v->a[188469] = anon_sym_QMARK;
	v->a[188470] = anon_sym_DOLLAR;
	v->a[188471] = anon_sym_POUND;
	v->a[188472] = anon_sym_AT2;
	v->a[188473] = anon_sym_0;
	v->a[188474] = anon_sym__;
	v->a[188475] = actions(1227);
	v->a[188476] = 20;
	v->a[188477] = anon_sym_SEMI;
	v->a[188478] = anon_sym_PIPE_PIPE;
	v->a[188479] = anon_sym_AMP_AMP;
	small_parse_table_9424(v);
}

void	small_parse_table_9424(t_small_parse_table_array *v)
{
	v->a[188480] = anon_sym_PIPE;
	v->a[188481] = anon_sym_AMP;
	v->a[188482] = anon_sym_LT;
	v->a[188483] = anon_sym_GT;
	v->a[188484] = anon_sym_LT_LT;
	v->a[188485] = anon_sym_GT_GT;
	v->a[188486] = anon_sym_SEMI_SEMI;
	v->a[188487] = anon_sym_PIPE_AMP;
	v->a[188488] = anon_sym_AMP_GT;
	v->a[188489] = anon_sym_AMP_GT_GT;
	v->a[188490] = anon_sym_LT_AMP;
	v->a[188491] = anon_sym_GT_AMP;
	v->a[188492] = anon_sym_GT_PIPE;
	v->a[188493] = anon_sym_LT_AMP_DASH;
	v->a[188494] = anon_sym_GT_AMP_DASH;
	v->a[188495] = anon_sym_LT_LT_DASH;
	v->a[188496] = aux_sym_heredoc_redirect_token1;
	v->a[188497] = 25;
	v->a[188498] = actions(71);
	v->a[188499] = 1;
	small_parse_table_9425(v);
}

/* EOF small_parse_table_1884.c */
