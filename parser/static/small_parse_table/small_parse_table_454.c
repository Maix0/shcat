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
	v->a[45400] = state(318);
	v->a[45401] = 8;
	v->a[45402] = sym__arithmetic_expression;
	v->a[45403] = sym_arithmetic_literal;
	v->a[45404] = sym_arithmetic_binary_expression;
	v->a[45405] = sym_arithmetic_ternary_expression;
	v->a[45406] = sym_arithmetic_unary_expression;
	v->a[45407] = sym_arithmetic_postfix_expression;
	v->a[45408] = sym_arithmetic_parenthesized_expression;
	v->a[45409] = sym_command_substitution;
	v->a[45410] = 18;
	v->a[45411] = actions(3);
	v->a[45412] = 1;
	v->a[45413] = sym_comment;
	v->a[45414] = actions(1634);
	v->a[45415] = 1;
	v->a[45416] = anon_sym_LPAREN;
	v->a[45417] = actions(1638);
	v->a[45418] = 1;
	v->a[45419] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2271(v);
}

void	small_parse_table_2271(t_small_parse_table_array *v)
{
	v->a[45420] = actions(1640);
	v->a[45421] = 1;
	v->a[45422] = anon_sym_DOLLAR;
	v->a[45423] = actions(1642);
	v->a[45424] = 1;
	v->a[45425] = anon_sym_DQUOTE;
	v->a[45426] = actions(1644);
	v->a[45427] = 1;
	v->a[45428] = anon_sym_DOLLAR_LBRACE;
	v->a[45429] = actions(1646);
	v->a[45430] = 1;
	v->a[45431] = anon_sym_DOLLAR_LPAREN;
	v->a[45432] = actions(1648);
	v->a[45433] = 1;
	v->a[45434] = anon_sym_BQUOTE;
	v->a[45435] = actions(1650);
	v->a[45436] = 1;
	v->a[45437] = sym_extglob_pattern;
	v->a[45438] = actions(1662);
	v->a[45439] = 1;
	small_parse_table_2272(v);
}

void	small_parse_table_2272(t_small_parse_table_array *v)
{
	v->a[45440] = anon_sym_esac;
	v->a[45441] = state(928);
	v->a[45442] = 1;
	v->a[45443] = sym_terminator;
	v->a[45444] = state(1092);
	v->a[45445] = 1;
	v->a[45446] = aux_sym_case_statement_repeat1;
	v->a[45447] = state(1713);
	v->a[45448] = 1;
	v->a[45449] = sym_case_item;
	v->a[45450] = state(2077);
	v->a[45451] = 1;
	v->a[45452] = sym__case_item_last;
	v->a[45453] = state(1871);
	v->a[45454] = 2;
	v->a[45455] = sym_concatenation;
	v->a[45456] = sym__extglob_blob;
	v->a[45457] = actions(1630);
	v->a[45458] = 3;
	v->a[45459] = sym_raw_string;
	small_parse_table_2273(v);
}

void	small_parse_table_2273(t_small_parse_table_array *v)
{
	v->a[45460] = sym_number;
	v->a[45461] = sym_word;
	v->a[45462] = actions(1636);
	v->a[45463] = 4;
	v->a[45464] = anon_sym_SEMI_SEMI;
	v->a[45465] = aux_sym_heredoc_redirect_token1;
	v->a[45466] = anon_sym_AMP;
	v->a[45467] = anon_sym_SEMI;
	v->a[45468] = state(1804);
	v->a[45469] = 5;
	v->a[45470] = sym_arithmetic_expansion;
	v->a[45471] = sym_string;
	v->a[45472] = sym_simple_expansion;
	v->a[45473] = sym_expansion;
	v->a[45474] = sym_command_substitution;
	v->a[45475] = 16;
	v->a[45476] = actions(664);
	v->a[45477] = 1;
	v->a[45478] = sym_comment;
	v->a[45479] = actions(1560);
	small_parse_table_2274(v);
}

void	small_parse_table_2274(t_small_parse_table_array *v)
{
	v->a[45480] = 1;
	v->a[45481] = anon_sym_LPAREN;
	v->a[45482] = actions(1562);
	v->a[45483] = 1;
	v->a[45484] = anon_sym_BANG;
	v->a[45485] = actions(1570);
	v->a[45486] = 1;
	v->a[45487] = anon_sym_TILDE;
	v->a[45488] = actions(1572);
	v->a[45489] = 1;
	v->a[45490] = anon_sym_DOLLAR;
	v->a[45491] = actions(1574);
	v->a[45492] = 1;
	v->a[45493] = anon_sym_DQUOTE;
	v->a[45494] = actions(1578);
	v->a[45495] = 1;
	v->a[45496] = anon_sym_DOLLAR_LBRACE;
	v->a[45497] = actions(1580);
	v->a[45498] = 1;
	v->a[45499] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2275(v);
}

/* EOF small_parse_table_454.c */
