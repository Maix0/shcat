/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_464.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2320(t_small_parse_table_array *v)
{
	v->a[46400] = anon_sym_DOLLAR_LBRACE;
	v->a[46401] = actions(1489);
	v->a[46402] = 1;
	v->a[46403] = anon_sym_DOLLAR_LPAREN;
	v->a[46404] = actions(1491);
	v->a[46405] = 1;
	v->a[46406] = anon_sym_BQUOTE;
	v->a[46407] = actions(1493);
	v->a[46408] = 1;
	v->a[46409] = sym_variable_name;
	v->a[46410] = actions(1681);
	v->a[46411] = 1;
	v->a[46412] = anon_sym_RPAREN_RPAREN;
	v->a[46413] = actions(1475);
	v->a[46414] = 2;
	v->a[46415] = anon_sym_PLUS_PLUS;
	v->a[46416] = anon_sym_DASH_DASH;
	v->a[46417] = actions(1477);
	v->a[46418] = 2;
	v->a[46419] = anon_sym_DASH2;
	small_parse_table_2321(v);
}

void	small_parse_table_2321(t_small_parse_table_array *v)
{
	v->a[46420] = anon_sym_PLUS2;
	v->a[46421] = actions(1485);
	v->a[46422] = 2;
	v->a[46423] = sym_number;
	v->a[46424] = aux_sym__simple_variable_name_token1;
	v->a[46425] = state(194);
	v->a[46426] = 3;
	v->a[46427] = sym_string;
	v->a[46428] = sym_simple_expansion;
	v->a[46429] = sym_expansion;
	v->a[46430] = state(317);
	v->a[46431] = 8;
	v->a[46432] = sym__arithmetic_expression;
	v->a[46433] = sym_arithmetic_literal;
	v->a[46434] = sym_arithmetic_binary_expression;
	v->a[46435] = sym_arithmetic_ternary_expression;
	v->a[46436] = sym_arithmetic_unary_expression;
	v->a[46437] = sym_arithmetic_postfix_expression;
	v->a[46438] = sym_arithmetic_parenthesized_expression;
	v->a[46439] = sym_command_substitution;
	small_parse_table_2322(v);
}

void	small_parse_table_2322(t_small_parse_table_array *v)
{
	v->a[46440] = 3;
	v->a[46441] = actions(3);
	v->a[46442] = 1;
	v->a[46443] = sym_comment;
	v->a[46444] = actions(1233);
	v->a[46445] = 2;
	v->a[46446] = sym_file_descriptor;
	v->a[46447] = sym_variable_name;
	v->a[46448] = actions(1231);
	v->a[46449] = 25;
	v->a[46450] = anon_sym_for;
	v->a[46451] = anon_sym_while;
	v->a[46452] = anon_sym_until;
	v->a[46453] = anon_sym_if;
	v->a[46454] = anon_sym_fi;
	v->a[46455] = anon_sym_case;
	v->a[46456] = anon_sym_LPAREN;
	v->a[46457] = anon_sym_LBRACE;
	v->a[46458] = anon_sym_BANG;
	v->a[46459] = anon_sym_LT;
	small_parse_table_2323(v);
}

void	small_parse_table_2323(t_small_parse_table_array *v)
{
	v->a[46460] = anon_sym_GT;
	v->a[46461] = anon_sym_GT_GT;
	v->a[46462] = anon_sym_LT_AMP;
	v->a[46463] = anon_sym_GT_AMP;
	v->a[46464] = anon_sym_GT_PIPE;
	v->a[46465] = anon_sym_LT_GT;
	v->a[46466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46467] = anon_sym_DOLLAR;
	v->a[46468] = anon_sym_DQUOTE;
	v->a[46469] = sym_raw_string;
	v->a[46470] = sym_number;
	v->a[46471] = anon_sym_DOLLAR_LBRACE;
	v->a[46472] = anon_sym_DOLLAR_LPAREN;
	v->a[46473] = anon_sym_BQUOTE;
	v->a[46474] = sym_word;
	v->a[46475] = 7;
	v->a[46476] = actions(3);
	v->a[46477] = 1;
	v->a[46478] = sym_comment;
	v->a[46479] = actions(1457);
	small_parse_table_2324(v);
}

void	small_parse_table_2324(t_small_parse_table_array *v)
{
	v->a[46480] = 1;
	v->a[46481] = sym_file_descriptor;
	v->a[46482] = actions(1460);
	v->a[46483] = 1;
	v->a[46484] = sym_variable_name;
	v->a[46485] = actions(1683);
	v->a[46486] = 1;
	v->a[46487] = anon_sym_RPAREN;
	v->a[46488] = actions(1454);
	v->a[46489] = 7;
	v->a[46490] = anon_sym_LT;
	v->a[46491] = anon_sym_GT;
	v->a[46492] = anon_sym_GT_GT;
	v->a[46493] = anon_sym_LT_AMP;
	v->a[46494] = anon_sym_GT_AMP;
	v->a[46495] = anon_sym_GT_PIPE;
	v->a[46496] = anon_sym_LT_GT;
	v->a[46497] = actions(1449);
	v->a[46498] = 8;
	v->a[46499] = anon_sym_PIPE;
	small_parse_table_2325(v);
}

/* EOF small_parse_table_464.c */
