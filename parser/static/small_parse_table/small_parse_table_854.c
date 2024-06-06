/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_854.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4270(t_small_parse_table_array *v)
{
	v->a[85400] = actions(4586);
	v->a[85401] = 1;
	v->a[85402] = anon_sym_BANG;
	v->a[85403] = actions(4592);
	v->a[85404] = 1;
	v->a[85405] = anon_sym_TILDE;
	v->a[85406] = actions(4594);
	v->a[85407] = 1;
	v->a[85408] = anon_sym_DOLLAR;
	v->a[85409] = actions(4596);
	v->a[85410] = 1;
	v->a[85411] = anon_sym_DQUOTE;
	v->a[85412] = actions(4598);
	v->a[85413] = 1;
	v->a[85414] = aux_sym_number_token1;
	v->a[85415] = actions(4600);
	v->a[85416] = 1;
	v->a[85417] = aux_sym_number_token2;
	v->a[85418] = actions(4602);
	v->a[85419] = 1;
	small_parse_table_4271(v);
}

void	small_parse_table_4271(t_small_parse_table_array *v)
{
	v->a[85420] = anon_sym_DOLLAR_LBRACE;
	v->a[85421] = actions(4604);
	v->a[85422] = 1;
	v->a[85423] = anon_sym_DOLLAR_LPAREN;
	v->a[85424] = actions(4606);
	v->a[85425] = 1;
	v->a[85426] = anon_sym_BQUOTE;
	v->a[85427] = actions(4608);
	v->a[85428] = 1;
	v->a[85429] = anon_sym_DOLLAR_BQUOTE;
	v->a[85430] = actions(4752);
	v->a[85431] = 1;
	v->a[85432] = aux_sym__simple_variable_name_token1;
	v->a[85433] = actions(4754);
	v->a[85434] = 1;
	v->a[85435] = sym_variable_name;
	v->a[85436] = state(1476);
	v->a[85437] = 1;
	v->a[85438] = sym__arithmetic_postfix_expression;
	v->a[85439] = state(1478);
	small_parse_table_4272(v);
}

void	small_parse_table_4272(t_small_parse_table_array *v)
{
	v->a[85440] = 1;
	v->a[85441] = sym__arithmetic_unary_expression;
	v->a[85442] = state(1490);
	v->a[85443] = 1;
	v->a[85444] = sym__arithmetic_ternary_expression;
	v->a[85445] = state(1511);
	v->a[85446] = 1;
	v->a[85447] = sym__arithmetic_binary_expression;
	v->a[85448] = actions(4588);
	v->a[85449] = 2;
	v->a[85450] = anon_sym_PLUS_PLUS;
	v->a[85451] = anon_sym_DASH_DASH;
	v->a[85452] = actions(4590);
	v->a[85453] = 2;
	v->a[85454] = anon_sym_DASH2;
	v->a[85455] = anon_sym_PLUS2;
	v->a[85456] = state(1408);
	v->a[85457] = 8;
	v->a[85458] = sym__arithmetic_expression;
	v->a[85459] = sym__arithmetic_literal;
	small_parse_table_4273(v);
}

void	small_parse_table_4273(t_small_parse_table_array *v)
{
	v->a[85460] = sym__arithmetic_parenthesized_expression;
	v->a[85461] = sym_string;
	v->a[85462] = sym_number;
	v->a[85463] = sym_simple_expansion;
	v->a[85464] = sym_expansion;
	v->a[85465] = sym_command_substitution;
	v->a[85466] = 21;
	v->a[85467] = actions(57);
	v->a[85468] = 1;
	v->a[85469] = sym_comment;
	v->a[85470] = actions(4584);
	v->a[85471] = 1;
	v->a[85472] = anon_sym_LPAREN;
	v->a[85473] = actions(4586);
	v->a[85474] = 1;
	v->a[85475] = anon_sym_BANG;
	v->a[85476] = actions(4592);
	v->a[85477] = 1;
	v->a[85478] = anon_sym_TILDE;
	v->a[85479] = actions(4594);
	small_parse_table_4274(v);
}

void	small_parse_table_4274(t_small_parse_table_array *v)
{
	v->a[85480] = 1;
	v->a[85481] = anon_sym_DOLLAR;
	v->a[85482] = actions(4596);
	v->a[85483] = 1;
	v->a[85484] = anon_sym_DQUOTE;
	v->a[85485] = actions(4598);
	v->a[85486] = 1;
	v->a[85487] = aux_sym_number_token1;
	v->a[85488] = actions(4600);
	v->a[85489] = 1;
	v->a[85490] = aux_sym_number_token2;
	v->a[85491] = actions(4602);
	v->a[85492] = 1;
	v->a[85493] = anon_sym_DOLLAR_LBRACE;
	v->a[85494] = actions(4604);
	v->a[85495] = 1;
	v->a[85496] = anon_sym_DOLLAR_LPAREN;
	v->a[85497] = actions(4606);
	v->a[85498] = 1;
	v->a[85499] = anon_sym_BQUOTE;
	small_parse_table_4275(v);
}

/* EOF small_parse_table_854.c */
