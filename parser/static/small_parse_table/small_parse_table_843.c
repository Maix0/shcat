/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_843.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4215(t_small_parse_table_array *v)
{
	v->a[84300] = state(1476);
	v->a[84301] = 1;
	v->a[84302] = sym__arithmetic_postfix_expression;
	v->a[84303] = state(1478);
	v->a[84304] = 1;
	v->a[84305] = sym__arithmetic_unary_expression;
	v->a[84306] = state(1490);
	v->a[84307] = 1;
	v->a[84308] = sym__arithmetic_ternary_expression;
	v->a[84309] = state(1511);
	v->a[84310] = 1;
	v->a[84311] = sym__arithmetic_binary_expression;
	v->a[84312] = actions(4588);
	v->a[84313] = 2;
	v->a[84314] = anon_sym_PLUS_PLUS;
	v->a[84315] = anon_sym_DASH_DASH;
	v->a[84316] = actions(4590);
	v->a[84317] = 2;
	v->a[84318] = anon_sym_DASH2;
	v->a[84319] = anon_sym_PLUS2;
	small_parse_table_4216(v);
}

void	small_parse_table_4216(t_small_parse_table_array *v)
{
	v->a[84320] = state(1371);
	v->a[84321] = 8;
	v->a[84322] = sym__arithmetic_expression;
	v->a[84323] = sym__arithmetic_literal;
	v->a[84324] = sym__arithmetic_parenthesized_expression;
	v->a[84325] = sym_string;
	v->a[84326] = sym_number;
	v->a[84327] = sym_simple_expansion;
	v->a[84328] = sym_expansion;
	v->a[84329] = sym_command_substitution;
	v->a[84330] = 21;
	v->a[84331] = actions(57);
	v->a[84332] = 1;
	v->a[84333] = sym_comment;
	v->a[84334] = actions(4584);
	v->a[84335] = 1;
	v->a[84336] = anon_sym_LPAREN;
	v->a[84337] = actions(4586);
	v->a[84338] = 1;
	v->a[84339] = anon_sym_BANG;
	small_parse_table_4217(v);
}

void	small_parse_table_4217(t_small_parse_table_array *v)
{
	v->a[84340] = actions(4592);
	v->a[84341] = 1;
	v->a[84342] = anon_sym_TILDE;
	v->a[84343] = actions(4594);
	v->a[84344] = 1;
	v->a[84345] = anon_sym_DOLLAR;
	v->a[84346] = actions(4596);
	v->a[84347] = 1;
	v->a[84348] = anon_sym_DQUOTE;
	v->a[84349] = actions(4598);
	v->a[84350] = 1;
	v->a[84351] = aux_sym_number_token1;
	v->a[84352] = actions(4600);
	v->a[84353] = 1;
	v->a[84354] = aux_sym_number_token2;
	v->a[84355] = actions(4602);
	v->a[84356] = 1;
	v->a[84357] = anon_sym_DOLLAR_LBRACE;
	v->a[84358] = actions(4604);
	v->a[84359] = 1;
	small_parse_table_4218(v);
}

void	small_parse_table_4218(t_small_parse_table_array *v)
{
	v->a[84360] = anon_sym_DOLLAR_LPAREN;
	v->a[84361] = actions(4606);
	v->a[84362] = 1;
	v->a[84363] = anon_sym_BQUOTE;
	v->a[84364] = actions(4608);
	v->a[84365] = 1;
	v->a[84366] = anon_sym_DOLLAR_BQUOTE;
	v->a[84367] = actions(4705);
	v->a[84368] = 1;
	v->a[84369] = aux_sym__simple_variable_name_token1;
	v->a[84370] = actions(4707);
	v->a[84371] = 1;
	v->a[84372] = sym_variable_name;
	v->a[84373] = state(1476);
	v->a[84374] = 1;
	v->a[84375] = sym__arithmetic_postfix_expression;
	v->a[84376] = state(1478);
	v->a[84377] = 1;
	v->a[84378] = sym__arithmetic_unary_expression;
	v->a[84379] = state(1490);
	small_parse_table_4219(v);
}

void	small_parse_table_4219(t_small_parse_table_array *v)
{
	v->a[84380] = 1;
	v->a[84381] = sym__arithmetic_ternary_expression;
	v->a[84382] = state(1511);
	v->a[84383] = 1;
	v->a[84384] = sym__arithmetic_binary_expression;
	v->a[84385] = actions(4588);
	v->a[84386] = 2;
	v->a[84387] = anon_sym_PLUS_PLUS;
	v->a[84388] = anon_sym_DASH_DASH;
	v->a[84389] = actions(4590);
	v->a[84390] = 2;
	v->a[84391] = anon_sym_DASH2;
	v->a[84392] = anon_sym_PLUS2;
	v->a[84393] = state(1378);
	v->a[84394] = 8;
	v->a[84395] = sym__arithmetic_expression;
	v->a[84396] = sym__arithmetic_literal;
	v->a[84397] = sym__arithmetic_parenthesized_expression;
	v->a[84398] = sym_string;
	v->a[84399] = sym_number;
	small_parse_table_4220(v);
}

/* EOF small_parse_table_843.c */
