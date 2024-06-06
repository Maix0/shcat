/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_893.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4465(t_small_parse_table_array *v)
{
	v->a[89300] = 1;
	v->a[89301] = anon_sym_LPAREN;
	v->a[89302] = actions(4586);
	v->a[89303] = 1;
	v->a[89304] = anon_sym_BANG;
	v->a[89305] = actions(4592);
	v->a[89306] = 1;
	v->a[89307] = anon_sym_TILDE;
	v->a[89308] = actions(4594);
	v->a[89309] = 1;
	v->a[89310] = anon_sym_DOLLAR;
	v->a[89311] = actions(4596);
	v->a[89312] = 1;
	v->a[89313] = anon_sym_DQUOTE;
	v->a[89314] = actions(4598);
	v->a[89315] = 1;
	v->a[89316] = aux_sym_number_token1;
	v->a[89317] = actions(4600);
	v->a[89318] = 1;
	v->a[89319] = aux_sym_number_token2;
	small_parse_table_4466(v);
}

void	small_parse_table_4466(t_small_parse_table_array *v)
{
	v->a[89320] = actions(4602);
	v->a[89321] = 1;
	v->a[89322] = anon_sym_DOLLAR_LBRACE;
	v->a[89323] = actions(4604);
	v->a[89324] = 1;
	v->a[89325] = anon_sym_DOLLAR_LPAREN;
	v->a[89326] = actions(4606);
	v->a[89327] = 1;
	v->a[89328] = anon_sym_BQUOTE;
	v->a[89329] = actions(4608);
	v->a[89330] = 1;
	v->a[89331] = anon_sym_DOLLAR_BQUOTE;
	v->a[89332] = actions(4929);
	v->a[89333] = 1;
	v->a[89334] = aux_sym__simple_variable_name_token1;
	v->a[89335] = actions(4931);
	v->a[89336] = 1;
	v->a[89337] = sym_variable_name;
	v->a[89338] = state(1476);
	v->a[89339] = 1;
	small_parse_table_4467(v);
}

void	small_parse_table_4467(t_small_parse_table_array *v)
{
	v->a[89340] = sym__arithmetic_postfix_expression;
	v->a[89341] = state(1478);
	v->a[89342] = 1;
	v->a[89343] = sym__arithmetic_unary_expression;
	v->a[89344] = state(1490);
	v->a[89345] = 1;
	v->a[89346] = sym__arithmetic_ternary_expression;
	v->a[89347] = state(1511);
	v->a[89348] = 1;
	v->a[89349] = sym__arithmetic_binary_expression;
	v->a[89350] = actions(4588);
	v->a[89351] = 2;
	v->a[89352] = anon_sym_PLUS_PLUS;
	v->a[89353] = anon_sym_DASH_DASH;
	v->a[89354] = actions(4590);
	v->a[89355] = 2;
	v->a[89356] = anon_sym_DASH2;
	v->a[89357] = anon_sym_PLUS2;
	v->a[89358] = state(1403);
	v->a[89359] = 8;
	small_parse_table_4468(v);
}

void	small_parse_table_4468(t_small_parse_table_array *v)
{
	v->a[89360] = sym__arithmetic_expression;
	v->a[89361] = sym__arithmetic_literal;
	v->a[89362] = sym__arithmetic_parenthesized_expression;
	v->a[89363] = sym_string;
	v->a[89364] = sym_number;
	v->a[89365] = sym_simple_expansion;
	v->a[89366] = sym_expansion;
	v->a[89367] = sym_command_substitution;
	v->a[89368] = 21;
	v->a[89369] = actions(57);
	v->a[89370] = 1;
	v->a[89371] = sym_comment;
	v->a[89372] = actions(4584);
	v->a[89373] = 1;
	v->a[89374] = anon_sym_LPAREN;
	v->a[89375] = actions(4586);
	v->a[89376] = 1;
	v->a[89377] = anon_sym_BANG;
	v->a[89378] = actions(4592);
	v->a[89379] = 1;
	small_parse_table_4469(v);
}

void	small_parse_table_4469(t_small_parse_table_array *v)
{
	v->a[89380] = anon_sym_TILDE;
	v->a[89381] = actions(4594);
	v->a[89382] = 1;
	v->a[89383] = anon_sym_DOLLAR;
	v->a[89384] = actions(4596);
	v->a[89385] = 1;
	v->a[89386] = anon_sym_DQUOTE;
	v->a[89387] = actions(4598);
	v->a[89388] = 1;
	v->a[89389] = aux_sym_number_token1;
	v->a[89390] = actions(4600);
	v->a[89391] = 1;
	v->a[89392] = aux_sym_number_token2;
	v->a[89393] = actions(4602);
	v->a[89394] = 1;
	v->a[89395] = anon_sym_DOLLAR_LBRACE;
	v->a[89396] = actions(4604);
	v->a[89397] = 1;
	v->a[89398] = anon_sym_DOLLAR_LPAREN;
	v->a[89399] = actions(4606);
	small_parse_table_4470(v);
}

/* EOF small_parse_table_893.c */
