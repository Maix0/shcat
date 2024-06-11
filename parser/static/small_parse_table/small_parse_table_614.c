/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_614.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3070(t_small_parse_table_array *v)
{
	v->a[61400] = 1;
	v->a[61401] = sym_comment;
	v->a[61402] = actions(1869);
	v->a[61403] = 1;
	v->a[61404] = anon_sym_LPAREN;
	v->a[61405] = actions(1871);
	v->a[61406] = 1;
	v->a[61407] = anon_sym_BANG;
	v->a[61408] = actions(1879);
	v->a[61409] = 1;
	v->a[61410] = anon_sym_TILDE;
	v->a[61411] = actions(1881);
	v->a[61412] = 1;
	v->a[61413] = anon_sym_DOLLAR;
	v->a[61414] = actions(1883);
	v->a[61415] = 1;
	v->a[61416] = anon_sym_DQUOTE;
	v->a[61417] = actions(1887);
	v->a[61418] = 1;
	v->a[61419] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3071(v);
}

void	small_parse_table_3071(t_small_parse_table_array *v)
{
	v->a[61420] = actions(1889);
	v->a[61421] = 1;
	v->a[61422] = anon_sym_DOLLAR_LPAREN;
	v->a[61423] = actions(1891);
	v->a[61424] = 1;
	v->a[61425] = anon_sym_BQUOTE;
	v->a[61426] = actions(1893);
	v->a[61427] = 1;
	v->a[61428] = sym_variable_name;
	v->a[61429] = actions(1907);
	v->a[61430] = 1;
	v->a[61431] = anon_sym_RPAREN_RPAREN;
	v->a[61432] = actions(1875);
	v->a[61433] = 2;
	v->a[61434] = anon_sym_PLUS_PLUS;
	v->a[61435] = anon_sym_DASH_DASH;
	v->a[61436] = actions(1877);
	v->a[61437] = 2;
	v->a[61438] = anon_sym_DASH2;
	v->a[61439] = anon_sym_PLUS2;
	small_parse_table_3072(v);
}

void	small_parse_table_3072(t_small_parse_table_array *v)
{
	v->a[61440] = actions(1885);
	v->a[61441] = 2;
	v->a[61442] = sym_number;
	v->a[61443] = aux_sym__simple_variable_name_token1;
	v->a[61444] = state(365);
	v->a[61445] = 3;
	v->a[61446] = sym_string;
	v->a[61447] = sym_simple_expansion;
	v->a[61448] = sym_expansion;
	v->a[61449] = state(448);
	v->a[61450] = 8;
	v->a[61451] = sym__arithmetic_expression;
	v->a[61452] = sym_arithmetic_literal;
	v->a[61453] = sym_arithmetic_binary_expression;
	v->a[61454] = sym_arithmetic_ternary_expression;
	v->a[61455] = sym_arithmetic_unary_expression;
	v->a[61456] = sym_arithmetic_postfix_expression;
	v->a[61457] = sym_arithmetic_parenthesized_expression;
	v->a[61458] = sym_command_substitution;
	v->a[61459] = 16;
	small_parse_table_3073(v);
}

void	small_parse_table_3073(t_small_parse_table_array *v)
{
	v->a[61460] = actions(1094);
	v->a[61461] = 1;
	v->a[61462] = sym_comment;
	v->a[61463] = actions(1869);
	v->a[61464] = 1;
	v->a[61465] = anon_sym_LPAREN;
	v->a[61466] = actions(1871);
	v->a[61467] = 1;
	v->a[61468] = anon_sym_BANG;
	v->a[61469] = actions(1879);
	v->a[61470] = 1;
	v->a[61471] = anon_sym_TILDE;
	v->a[61472] = actions(1881);
	v->a[61473] = 1;
	v->a[61474] = anon_sym_DOLLAR;
	v->a[61475] = actions(1883);
	v->a[61476] = 1;
	v->a[61477] = anon_sym_DQUOTE;
	v->a[61478] = actions(1887);
	v->a[61479] = 1;
	small_parse_table_3074(v);
}

void	small_parse_table_3074(t_small_parse_table_array *v)
{
	v->a[61480] = anon_sym_DOLLAR_LBRACE;
	v->a[61481] = actions(1889);
	v->a[61482] = 1;
	v->a[61483] = anon_sym_DOLLAR_LPAREN;
	v->a[61484] = actions(1891);
	v->a[61485] = 1;
	v->a[61486] = anon_sym_BQUOTE;
	v->a[61487] = actions(1893);
	v->a[61488] = 1;
	v->a[61489] = sym_variable_name;
	v->a[61490] = actions(1909);
	v->a[61491] = 1;
	v->a[61492] = anon_sym_RPAREN_RPAREN;
	v->a[61493] = actions(1875);
	v->a[61494] = 2;
	v->a[61495] = anon_sym_PLUS_PLUS;
	v->a[61496] = anon_sym_DASH_DASH;
	v->a[61497] = actions(1877);
	v->a[61498] = 2;
	v->a[61499] = anon_sym_DASH2;
	small_parse_table_3075(v);
}

/* EOF small_parse_table_614.c */
