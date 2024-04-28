/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_314.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1570(t_small_parse_table_array *v)
{
	v->a[31400] = anon_sym_LT_LPAREN;
	v->a[31401] = anon_sym_GT_LPAREN;
	v->a[31402] = sym_word;
	v->a[31403] = 6;
	v->a[31404] = actions(71);
	v->a[31405] = 1;
	v->a[31406] = sym_comment;
	v->a[31407] = state(2541);
	v->a[31408] = 1;
	v->a[31409] = aux_sym__literal_repeat1;
	v->a[31410] = state(2622);
	v->a[31411] = 1;
	v->a[31412] = sym_concatenation;
	v->a[31413] = state(2300);
	v->a[31414] = 9;
	v->a[31415] = sym_arithmetic_expansion;
	v->a[31416] = sym_brace_expression;
	v->a[31417] = sym_string;
	v->a[31418] = sym_translated_string;
	v->a[31419] = sym_number;
	small_parse_table_1571(v);
}

void	small_parse_table_1571(t_small_parse_table_array *v)
{
	v->a[31420] = sym_simple_expansion;
	v->a[31421] = sym_expansion;
	v->a[31422] = sym_command_substitution;
	v->a[31423] = sym_process_substitution;
	v->a[31424] = actions(2498);
	v->a[31425] = 13;
	v->a[31426] = anon_sym_PIPE;
	v->a[31427] = anon_sym_LT;
	v->a[31428] = anon_sym_GT;
	v->a[31429] = anon_sym_LT_LT;
	v->a[31430] = anon_sym_AMP_GT;
	v->a[31431] = anon_sym_LT_AMP;
	v->a[31432] = anon_sym_GT_AMP;
	v->a[31433] = anon_sym_DOLLAR;
	v->a[31434] = sym__special_character;
	v->a[31435] = aux_sym_number_token1;
	v->a[31436] = aux_sym_number_token2;
	v->a[31437] = anon_sym_DOLLAR_LPAREN;
	v->a[31438] = sym_word;
	v->a[31439] = actions(2500);
	small_parse_table_1572(v);
}

void	small_parse_table_1572(t_small_parse_table_array *v)
{
	v->a[31440] = 26;
	v->a[31441] = sym_file_descriptor;
	v->a[31442] = sym_variable_name;
	v->a[31443] = sym_test_operator;
	v->a[31444] = sym__brace_start;
	v->a[31445] = anon_sym_LPAREN_LPAREN;
	v->a[31446] = anon_sym_PIPE_PIPE;
	v->a[31447] = anon_sym_AMP_AMP;
	v->a[31448] = anon_sym_GT_GT;
	v->a[31449] = anon_sym_PIPE_AMP;
	v->a[31450] = anon_sym_RBRACK;
	v->a[31451] = anon_sym_AMP_GT_GT;
	v->a[31452] = anon_sym_GT_PIPE;
	v->a[31453] = anon_sym_LT_AMP_DASH;
	v->a[31454] = anon_sym_GT_AMP_DASH;
	v->a[31455] = anon_sym_LT_LT_DASH;
	v->a[31456] = anon_sym_LT_LT_LT;
	v->a[31457] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31458] = anon_sym_DOLLAR_LBRACK;
	v->a[31459] = anon_sym_DQUOTE;
	small_parse_table_1573(v);
}

void	small_parse_table_1573(t_small_parse_table_array *v)
{
	v->a[31460] = sym_raw_string;
	v->a[31461] = sym_ansi_c_string;
	v->a[31462] = anon_sym_DOLLAR_LBRACE;
	v->a[31463] = anon_sym_BQUOTE;
	v->a[31464] = anon_sym_DOLLAR_BQUOTE;
	v->a[31465] = anon_sym_LT_LPAREN;
	v->a[31466] = anon_sym_GT_LPAREN;
	v->a[31467] = 8;
	v->a[31468] = actions(3);
	v->a[31469] = 1;
	v->a[31470] = sym_comment;
	v->a[31471] = actions(4558);
	v->a[31472] = 1;
	v->a[31473] = anon_sym_DQUOTE;
	v->a[31474] = actions(4562);
	v->a[31475] = 1;
	v->a[31476] = sym_variable_name;
	v->a[31477] = state(2447);
	v->a[31478] = 1;
	v->a[31479] = sym_string;
	small_parse_table_1574(v);
}

void	small_parse_table_1574(t_small_parse_table_array *v)
{
	v->a[31480] = actions(4560);
	v->a[31481] = 2;
	v->a[31482] = aux_sym__simple_variable_name_token1;
	v->a[31483] = aux_sym__multiline_variable_name_token1;
	v->a[31484] = actions(1235);
	v->a[31485] = 3;
	v->a[31486] = sym_file_descriptor;
	v->a[31487] = sym_test_operator;
	v->a[31488] = sym__brace_start;
	v->a[31489] = actions(4556);
	v->a[31490] = 9;
	v->a[31491] = anon_sym_DASH;
	v->a[31492] = anon_sym_STAR;
	v->a[31493] = anon_sym_BANG;
	v->a[31494] = anon_sym_QMARK;
	v->a[31495] = anon_sym_DOLLAR;
	v->a[31496] = anon_sym_POUND;
	v->a[31497] = anon_sym_AT2;
	v->a[31498] = anon_sym_0;
	v->a[31499] = anon_sym__;
	small_parse_table_1575(v);
}

/* EOF small_parse_table_314.c */
