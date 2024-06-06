/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_884.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4420(t_small_parse_table_array *v)
{
	v->a[88400] = sym_comment;
	v->a[88401] = actions(4584);
	v->a[88402] = 1;
	v->a[88403] = anon_sym_LPAREN;
	v->a[88404] = actions(4586);
	v->a[88405] = 1;
	v->a[88406] = anon_sym_BANG;
	v->a[88407] = actions(4592);
	v->a[88408] = 1;
	v->a[88409] = anon_sym_TILDE;
	v->a[88410] = actions(4594);
	v->a[88411] = 1;
	v->a[88412] = anon_sym_DOLLAR;
	v->a[88413] = actions(4596);
	v->a[88414] = 1;
	v->a[88415] = anon_sym_DQUOTE;
	v->a[88416] = actions(4598);
	v->a[88417] = 1;
	v->a[88418] = aux_sym_number_token1;
	v->a[88419] = actions(4600);
	small_parse_table_4421(v);
}

void	small_parse_table_4421(t_small_parse_table_array *v)
{
	v->a[88420] = 1;
	v->a[88421] = aux_sym_number_token2;
	v->a[88422] = actions(4602);
	v->a[88423] = 1;
	v->a[88424] = anon_sym_DOLLAR_LBRACE;
	v->a[88425] = actions(4604);
	v->a[88426] = 1;
	v->a[88427] = anon_sym_DOLLAR_LPAREN;
	v->a[88428] = actions(4606);
	v->a[88429] = 1;
	v->a[88430] = anon_sym_BQUOTE;
	v->a[88431] = actions(4608);
	v->a[88432] = 1;
	v->a[88433] = anon_sym_DOLLAR_BQUOTE;
	v->a[88434] = actions(4891);
	v->a[88435] = 1;
	v->a[88436] = aux_sym__simple_variable_name_token1;
	v->a[88437] = actions(4893);
	v->a[88438] = 1;
	v->a[88439] = sym_variable_name;
	small_parse_table_4422(v);
}

void	small_parse_table_4422(t_small_parse_table_array *v)
{
	v->a[88440] = state(1476);
	v->a[88441] = 1;
	v->a[88442] = sym__arithmetic_postfix_expression;
	v->a[88443] = state(1478);
	v->a[88444] = 1;
	v->a[88445] = sym__arithmetic_unary_expression;
	v->a[88446] = state(1490);
	v->a[88447] = 1;
	v->a[88448] = sym__arithmetic_ternary_expression;
	v->a[88449] = state(1511);
	v->a[88450] = 1;
	v->a[88451] = sym__arithmetic_binary_expression;
	v->a[88452] = actions(4588);
	v->a[88453] = 2;
	v->a[88454] = anon_sym_PLUS_PLUS;
	v->a[88455] = anon_sym_DASH_DASH;
	v->a[88456] = actions(4590);
	v->a[88457] = 2;
	v->a[88458] = anon_sym_DASH2;
	v->a[88459] = anon_sym_PLUS2;
	small_parse_table_4423(v);
}

void	small_parse_table_4423(t_small_parse_table_array *v)
{
	v->a[88460] = state(1420);
	v->a[88461] = 8;
	v->a[88462] = sym__arithmetic_expression;
	v->a[88463] = sym__arithmetic_literal;
	v->a[88464] = sym__arithmetic_parenthesized_expression;
	v->a[88465] = sym_string;
	v->a[88466] = sym_number;
	v->a[88467] = sym_simple_expansion;
	v->a[88468] = sym_expansion;
	v->a[88469] = sym_command_substitution;
	v->a[88470] = 21;
	v->a[88471] = actions(57);
	v->a[88472] = 1;
	v->a[88473] = sym_comment;
	v->a[88474] = actions(4328);
	v->a[88475] = 1;
	v->a[88476] = sym_word;
	v->a[88477] = actions(4340);
	v->a[88478] = 1;
	v->a[88479] = anon_sym_DOLLAR;
	small_parse_table_4424(v);
}

void	small_parse_table_4424(t_small_parse_table_array *v)
{
	v->a[88480] = actions(4346);
	v->a[88481] = 1;
	v->a[88482] = aux_sym_number_token1;
	v->a[88483] = actions(4348);
	v->a[88484] = 1;
	v->a[88485] = aux_sym_number_token2;
	v->a[88486] = actions(4352);
	v->a[88487] = 1;
	v->a[88488] = anon_sym_DOLLAR_LPAREN;
	v->a[88489] = actions(4360);
	v->a[88490] = 1;
	v->a[88491] = sym_extglob_pattern;
	v->a[88492] = actions(4362);
	v->a[88493] = 1;
	v->a[88494] = sym__brace_start;
	v->a[88495] = actions(4548);
	v->a[88496] = 1;
	v->a[88497] = anon_sym_LPAREN;
	v->a[88498] = actions(4550);
	v->a[88499] = 1;
	small_parse_table_4425(v);
}

/* EOF small_parse_table_884.c */
