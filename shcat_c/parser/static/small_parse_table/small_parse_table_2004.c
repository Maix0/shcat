/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2004.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10020(t_small_parse_table_array *v)
{
	v->a[200400] = actions(9138);
	v->a[200401] = 1;
	v->a[200402] = anon_sym_DOLLAR_BQUOTE;
	v->a[200403] = actions(9142);
	v->a[200404] = 1;
	v->a[200405] = sym_test_operator;
	v->a[200406] = actions(9144);
	v->a[200407] = 1;
	v->a[200408] = sym__brace_start;
	v->a[200409] = state(2457);
	v->a[200410] = 1;
	v->a[200411] = aux_sym__literal_repeat1;
	v->a[200412] = actions(9116);
	v->a[200413] = 2;
	v->a[200414] = anon_sym_LPAREN_LPAREN;
	v->a[200415] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200416] = actions(9126);
	v->a[200417] = 2;
	v->a[200418] = sym_raw_string;
	v->a[200419] = sym_ansi_c_string;
	small_parse_table_10021(v);
}

void	small_parse_table_10021(t_small_parse_table_array *v)
{
	v->a[200420] = actions(9140);
	v->a[200421] = 2;
	v->a[200422] = anon_sym_LT_LPAREN;
	v->a[200423] = anon_sym_GT_LPAREN;
	v->a[200424] = state(821);
	v->a[200425] = 2;
	v->a[200426] = sym_concatenation;
	v->a[200427] = aux_sym_for_statement_repeat1;
	v->a[200428] = state(2271);
	v->a[200429] = 9;
	v->a[200430] = sym_arithmetic_expansion;
	v->a[200431] = sym_brace_expression;
	v->a[200432] = sym_string;
	v->a[200433] = sym_translated_string;
	v->a[200434] = sym_number;
	v->a[200435] = sym_simple_expansion;
	v->a[200436] = sym_expansion;
	v->a[200437] = sym_command_substitution;
	v->a[200438] = sym_process_substitution;
	v->a[200439] = 8;
	small_parse_table_10022(v);
}

void	small_parse_table_10022(t_small_parse_table_array *v)
{
	v->a[200440] = actions(3);
	v->a[200441] = 1;
	v->a[200442] = sym_comment;
	v->a[200443] = actions(1235);
	v->a[200444] = 1;
	v->a[200445] = sym_file_descriptor;
	v->a[200446] = actions(9150);
	v->a[200447] = 1;
	v->a[200448] = anon_sym_DQUOTE;
	v->a[200449] = actions(9154);
	v->a[200450] = 1;
	v->a[200451] = sym_variable_name;
	v->a[200452] = state(5537);
	v->a[200453] = 1;
	v->a[200454] = sym_string;
	v->a[200455] = actions(9152);
	v->a[200456] = 2;
	v->a[200457] = aux_sym__simple_variable_name_token1;
	v->a[200458] = aux_sym__multiline_variable_name_token1;
	v->a[200459] = actions(9148);
	small_parse_table_10023(v);
}

void	small_parse_table_10023(t_small_parse_table_array *v)
{
	v->a[200460] = 9;
	v->a[200461] = anon_sym_DASH;
	v->a[200462] = anon_sym_STAR;
	v->a[200463] = anon_sym_BANG;
	v->a[200464] = anon_sym_QMARK;
	v->a[200465] = anon_sym_DOLLAR;
	v->a[200466] = anon_sym_POUND;
	v->a[200467] = anon_sym_AT2;
	v->a[200468] = anon_sym_0;
	v->a[200469] = anon_sym__;
	v->a[200470] = actions(1227);
	v->a[200471] = 16;
	v->a[200472] = anon_sym_PIPE_PIPE;
	v->a[200473] = anon_sym_AMP_AMP;
	v->a[200474] = anon_sym_PIPE;
	v->a[200475] = anon_sym_LT;
	v->a[200476] = anon_sym_GT;
	v->a[200477] = anon_sym_LT_LT;
	v->a[200478] = anon_sym_GT_GT;
	v->a[200479] = anon_sym_PIPE_AMP;
	small_parse_table_10024(v);
}

void	small_parse_table_10024(t_small_parse_table_array *v)
{
	v->a[200480] = anon_sym_AMP_GT;
	v->a[200481] = anon_sym_AMP_GT_GT;
	v->a[200482] = anon_sym_LT_AMP;
	v->a[200483] = anon_sym_GT_AMP;
	v->a[200484] = anon_sym_GT_PIPE;
	v->a[200485] = anon_sym_LT_AMP_DASH;
	v->a[200486] = anon_sym_GT_AMP_DASH;
	v->a[200487] = anon_sym_LT_LT_DASH;
	v->a[200488] = 20;
	v->a[200489] = actions(71);
	v->a[200490] = 1;
	v->a[200491] = sym_comment;
	v->a[200492] = actions(4498);
	v->a[200493] = 1;
	v->a[200494] = sym_word;
	v->a[200495] = actions(4502);
	v->a[200496] = 1;
	v->a[200497] = anon_sym_DOLLAR_LBRACK;
	v->a[200498] = actions(4504);
	v->a[200499] = 1;
	small_parse_table_10025(v);
}

/* EOF small_parse_table_2004.c */
