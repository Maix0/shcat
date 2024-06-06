/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_844.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4220(t_small_parse_table_array *v)
{
	v->a[84400] = sym_simple_expansion;
	v->a[84401] = sym_expansion;
	v->a[84402] = sym_command_substitution;
	v->a[84403] = 21;
	v->a[84404] = actions(57);
	v->a[84405] = 1;
	v->a[84406] = sym_comment;
	v->a[84407] = actions(4584);
	v->a[84408] = 1;
	v->a[84409] = anon_sym_LPAREN;
	v->a[84410] = actions(4586);
	v->a[84411] = 1;
	v->a[84412] = anon_sym_BANG;
	v->a[84413] = actions(4592);
	v->a[84414] = 1;
	v->a[84415] = anon_sym_TILDE;
	v->a[84416] = actions(4594);
	v->a[84417] = 1;
	v->a[84418] = anon_sym_DOLLAR;
	v->a[84419] = actions(4596);
	small_parse_table_4221(v);
}

void	small_parse_table_4221(t_small_parse_table_array *v)
{
	v->a[84420] = 1;
	v->a[84421] = anon_sym_DQUOTE;
	v->a[84422] = actions(4598);
	v->a[84423] = 1;
	v->a[84424] = aux_sym_number_token1;
	v->a[84425] = actions(4600);
	v->a[84426] = 1;
	v->a[84427] = aux_sym_number_token2;
	v->a[84428] = actions(4602);
	v->a[84429] = 1;
	v->a[84430] = anon_sym_DOLLAR_LBRACE;
	v->a[84431] = actions(4604);
	v->a[84432] = 1;
	v->a[84433] = anon_sym_DOLLAR_LPAREN;
	v->a[84434] = actions(4606);
	v->a[84435] = 1;
	v->a[84436] = anon_sym_BQUOTE;
	v->a[84437] = actions(4608);
	v->a[84438] = 1;
	v->a[84439] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4222(v);
}

void	small_parse_table_4222(t_small_parse_table_array *v)
{
	v->a[84440] = actions(4709);
	v->a[84441] = 1;
	v->a[84442] = aux_sym__simple_variable_name_token1;
	v->a[84443] = actions(4711);
	v->a[84444] = 1;
	v->a[84445] = sym_variable_name;
	v->a[84446] = state(1476);
	v->a[84447] = 1;
	v->a[84448] = sym__arithmetic_postfix_expression;
	v->a[84449] = state(1478);
	v->a[84450] = 1;
	v->a[84451] = sym__arithmetic_unary_expression;
	v->a[84452] = state(1490);
	v->a[84453] = 1;
	v->a[84454] = sym__arithmetic_ternary_expression;
	v->a[84455] = state(1511);
	v->a[84456] = 1;
	v->a[84457] = sym__arithmetic_binary_expression;
	v->a[84458] = actions(4588);
	v->a[84459] = 2;
	small_parse_table_4223(v);
}

void	small_parse_table_4223(t_small_parse_table_array *v)
{
	v->a[84460] = anon_sym_PLUS_PLUS;
	v->a[84461] = anon_sym_DASH_DASH;
	v->a[84462] = actions(4590);
	v->a[84463] = 2;
	v->a[84464] = anon_sym_DASH2;
	v->a[84465] = anon_sym_PLUS2;
	v->a[84466] = state(1504);
	v->a[84467] = 8;
	v->a[84468] = sym__arithmetic_expression;
	v->a[84469] = sym__arithmetic_literal;
	v->a[84470] = sym__arithmetic_parenthesized_expression;
	v->a[84471] = sym_string;
	v->a[84472] = sym_number;
	v->a[84473] = sym_simple_expansion;
	v->a[84474] = sym_expansion;
	v->a[84475] = sym_command_substitution;
	v->a[84476] = 21;
	v->a[84477] = actions(57);
	v->a[84478] = 1;
	v->a[84479] = sym_comment;
	small_parse_table_4224(v);
}

void	small_parse_table_4224(t_small_parse_table_array *v)
{
	v->a[84480] = actions(4328);
	v->a[84481] = 1;
	v->a[84482] = sym_word;
	v->a[84483] = actions(4340);
	v->a[84484] = 1;
	v->a[84485] = anon_sym_DOLLAR;
	v->a[84486] = actions(4346);
	v->a[84487] = 1;
	v->a[84488] = aux_sym_number_token1;
	v->a[84489] = actions(4348);
	v->a[84490] = 1;
	v->a[84491] = aux_sym_number_token2;
	v->a[84492] = actions(4352);
	v->a[84493] = 1;
	v->a[84494] = anon_sym_DOLLAR_LPAREN;
	v->a[84495] = actions(4360);
	v->a[84496] = 1;
	v->a[84497] = sym_extglob_pattern;
	v->a[84498] = actions(4362);
	v->a[84499] = 1;
	small_parse_table_4225(v);
}

/* EOF small_parse_table_844.c */
