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
	v->a[45400] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45401] = anon_sym_AMP;
	v->a[45402] = aux_sym_concatenation_token1;
	v->a[45403] = anon_sym_DOLLAR;
	v->a[45404] = anon_sym_DQUOTE;
	v->a[45405] = sym_raw_string;
	v->a[45406] = sym_number;
	v->a[45407] = anon_sym_DOLLAR_LBRACE;
	v->a[45408] = anon_sym_DOLLAR_LPAREN;
	v->a[45409] = anon_sym_BQUOTE;
	v->a[45410] = sym_word;
	v->a[45411] = anon_sym_SEMI;
	v->a[45412] = 17;
	v->a[45413] = actions(3);
	v->a[45414] = 1;
	v->a[45415] = sym_comment;
	v->a[45416] = actions(345);
	v->a[45417] = 1;
	v->a[45418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45419] = actions(347);
	small_parse_table_2271(v);
}

void	small_parse_table_2271(t_small_parse_table_array *v)
{
	v->a[45420] = 1;
	v->a[45421] = anon_sym_DOLLAR;
	v->a[45422] = actions(349);
	v->a[45423] = 1;
	v->a[45424] = anon_sym_DQUOTE;
	v->a[45425] = actions(353);
	v->a[45426] = 1;
	v->a[45427] = anon_sym_DOLLAR_LBRACE;
	v->a[45428] = actions(355);
	v->a[45429] = 1;
	v->a[45430] = anon_sym_DOLLAR_LPAREN;
	v->a[45431] = actions(357);
	v->a[45432] = 1;
	v->a[45433] = anon_sym_BQUOTE;
	v->a[45434] = actions(377);
	v->a[45435] = 1;
	v->a[45436] = sym_variable_name;
	v->a[45437] = actions(1201);
	v->a[45438] = 1;
	v->a[45439] = sym_file_descriptor;
	small_parse_table_2272(v);
}

void	small_parse_table_2272(t_small_parse_table_array *v)
{
	v->a[45440] = state(284);
	v->a[45441] = 1;
	v->a[45442] = sym_command_name;
	v->a[45443] = state(1070);
	v->a[45444] = 1;
	v->a[45445] = sym_concatenation;
	v->a[45446] = state(1477);
	v->a[45447] = 1;
	v->a[45448] = sym_file_redirect;
	v->a[45449] = actions(1199);
	v->a[45450] = 2;
	v->a[45451] = anon_sym_LT_AMP_DASH;
	v->a[45452] = anon_sym_GT_AMP_DASH;
	v->a[45453] = state(1241);
	v->a[45454] = 2;
	v->a[45455] = sym_variable_assignment;
	v->a[45456] = aux_sym_command_repeat1;
	v->a[45457] = actions(351);
	v->a[45458] = 3;
	v->a[45459] = sym_raw_string;
	small_parse_table_2273(v);
}

void	small_parse_table_2273(t_small_parse_table_array *v)
{
	v->a[45460] = sym_number;
	v->a[45461] = sym_word;
	v->a[45462] = state(903);
	v->a[45463] = 5;
	v->a[45464] = sym_arithmetic_expansion;
	v->a[45465] = sym_string;
	v->a[45466] = sym_simple_expansion;
	v->a[45467] = sym_expansion;
	v->a[45468] = sym_command_substitution;
	v->a[45469] = actions(1197);
	v->a[45470] = 8;
	v->a[45471] = anon_sym_LT;
	v->a[45472] = anon_sym_GT;
	v->a[45473] = anon_sym_GT_GT;
	v->a[45474] = anon_sym_AMP_GT;
	v->a[45475] = anon_sym_AMP_GT_GT;
	v->a[45476] = anon_sym_LT_AMP;
	v->a[45477] = anon_sym_GT_AMP;
	v->a[45478] = anon_sym_GT_PIPE;
	v->a[45479] = 4;
	small_parse_table_2274(v);
}

void	small_parse_table_2274(t_small_parse_table_array *v)
{
	v->a[45480] = actions(3);
	v->a[45481] = 1;
	v->a[45482] = sym_comment;
	v->a[45483] = actions(1554);
	v->a[45484] = 2;
	v->a[45485] = anon_sym_RPAREN;
	v->a[45486] = anon_sym_SEMI_SEMI;
	v->a[45487] = actions(1556);
	v->a[45488] = 2;
	v->a[45489] = sym_file_descriptor;
	v->a[45490] = sym_variable_name;
	v->a[45491] = actions(1552);
	v->a[45492] = 27;
	v->a[45493] = anon_sym_for;
	v->a[45494] = anon_sym_while;
	v->a[45495] = anon_sym_until;
	v->a[45496] = anon_sym_if;
	v->a[45497] = anon_sym_case;
	v->a[45498] = anon_sym_LPAREN;
	v->a[45499] = anon_sym_LBRACE;
	small_parse_table_2275(v);
}

/* EOF small_parse_table_454.c */
