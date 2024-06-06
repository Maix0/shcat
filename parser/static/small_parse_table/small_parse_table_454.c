/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_454.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2270(t_small_parse_table_array *v)
{
	v->a[45400] = 1;
	v->a[45401] = anon_sym_DOLLAR;
	v->a[45402] = actions(93);
	v->a[45403] = 1;
	v->a[45404] = anon_sym_DQUOTE;
	v->a[45405] = actions(97);
	v->a[45406] = 1;
	v->a[45407] = aux_sym_number_token1;
	v->a[45408] = actions(99);
	v->a[45409] = 1;
	v->a[45410] = aux_sym_number_token2;
	v->a[45411] = actions(101);
	v->a[45412] = 1;
	v->a[45413] = anon_sym_DOLLAR_LBRACE;
	v->a[45414] = actions(103);
	v->a[45415] = 1;
	v->a[45416] = anon_sym_DOLLAR_LPAREN;
	v->a[45417] = actions(105);
	v->a[45418] = 1;
	v->a[45419] = anon_sym_BQUOTE;
	small_parse_table_2271(v);
}

void	small_parse_table_2271(t_small_parse_table_array *v)
{
	v->a[45420] = actions(107);
	v->a[45421] = 1;
	v->a[45422] = anon_sym_DOLLAR_BQUOTE;
	v->a[45423] = actions(113);
	v->a[45424] = 1;
	v->a[45425] = sym__brace_start;
	v->a[45426] = actions(2900);
	v->a[45427] = 1;
	v->a[45428] = sym_file_descriptor;
	v->a[45429] = actions(2935);
	v->a[45430] = 1;
	v->a[45431] = sym_word;
	v->a[45432] = actions(2937);
	v->a[45433] = 1;
	v->a[45434] = sym__special_character;
	v->a[45435] = actions(3621);
	v->a[45436] = 1;
	v->a[45437] = sym_variable_name;
	v->a[45438] = state(333);
	v->a[45439] = 1;
	small_parse_table_2272(v);
}

void	small_parse_table_2272(t_small_parse_table_array *v)
{
	v->a[45440] = sym_command_name;
	v->a[45441] = state(1048);
	v->a[45442] = 1;
	v->a[45443] = aux_sym__literal_repeat1;
	v->a[45444] = state(1192);
	v->a[45445] = 1;
	v->a[45446] = sym_concatenation;
	v->a[45447] = state(1995);
	v->a[45448] = 1;
	v->a[45449] = sym_file_redirect;
	v->a[45450] = actions(95);
	v->a[45451] = 2;
	v->a[45452] = sym_test_operator;
	v->a[45453] = sym_raw_string;
	v->a[45454] = actions(2896);
	v->a[45455] = 2;
	v->a[45456] = anon_sym_LT_AMP_DASH;
	v->a[45457] = anon_sym_GT_AMP_DASH;
	v->a[45458] = state(1776);
	v->a[45459] = 2;
	small_parse_table_2273(v);
}

void	small_parse_table_2273(t_small_parse_table_array *v)
{
	v->a[45460] = sym_variable_assignment;
	v->a[45461] = aux_sym_command_repeat1;
	v->a[45462] = actions(2894);
	v->a[45463] = 3;
	v->a[45464] = anon_sym_GT_GT;
	v->a[45465] = anon_sym_AMP_GT_GT;
	v->a[45466] = anon_sym_GT_PIPE;
	v->a[45467] = actions(2892);
	v->a[45468] = 5;
	v->a[45469] = anon_sym_LT;
	v->a[45470] = anon_sym_GT;
	v->a[45471] = anon_sym_AMP_GT;
	v->a[45472] = anon_sym_LT_AMP;
	v->a[45473] = anon_sym_GT_AMP;
	v->a[45474] = state(834);
	v->a[45475] = 7;
	v->a[45476] = sym_arithmetic_expansion;
	v->a[45477] = sym_brace_expression;
	v->a[45478] = sym_string;
	v->a[45479] = sym_number;
	small_parse_table_2274(v);
}

void	small_parse_table_2274(t_small_parse_table_array *v)
{
	v->a[45480] = sym_simple_expansion;
	v->a[45481] = sym_expansion;
	v->a[45482] = sym_command_substitution;
	v->a[45483] = 3;
	v->a[45484] = actions(3);
	v->a[45485] = 1;
	v->a[45486] = sym_comment;
	v->a[45487] = actions(2778);
	v->a[45488] = 6;
	v->a[45489] = sym_file_descriptor;
	v->a[45490] = sym__concat;
	v->a[45491] = sym_variable_name;
	v->a[45492] = sym_test_operator;
	v->a[45493] = sym__brace_start;
	v->a[45494] = aux_sym_heredoc_redirect_token1;
	v->a[45495] = actions(2776);
	v->a[45496] = 33;
	v->a[45497] = anon_sym_PIPE;
	v->a[45498] = anon_sym_RPAREN;
	v->a[45499] = anon_sym_SEMI_SEMI;
	small_parse_table_2275(v);
}

/* EOF small_parse_table_454.c */
