/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_883.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4415(t_small_parse_table_array *v)
{
	v->a[88300] = anon_sym_STAR;
	v->a[88301] = anon_sym_QMARK;
	v->a[88302] = anon_sym_DOLLAR;
	v->a[88303] = anon_sym_POUND;
	v->a[88304] = anon_sym_AT;
	v->a[88305] = anon_sym_0;
	v->a[88306] = anon_sym__;
	v->a[88307] = actions(826);
	v->a[88308] = 15;
	v->a[88309] = anon_sym_SEMI_SEMI;
	v->a[88310] = aux_sym_heredoc_redirect_token1;
	v->a[88311] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88312] = anon_sym_AMP;
	v->a[88313] = sym__special_character;
	v->a[88314] = anon_sym_DQUOTE;
	v->a[88315] = sym_raw_string;
	v->a[88316] = aux_sym_number_token1;
	v->a[88317] = aux_sym_number_token2;
	v->a[88318] = anon_sym_DOLLAR_LBRACE;
	v->a[88319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4416(v);
}

void	small_parse_table_4416(t_small_parse_table_array *v)
{
	v->a[88320] = anon_sym_BQUOTE;
	v->a[88321] = anon_sym_DOLLAR_BQUOTE;
	v->a[88322] = sym_word;
	v->a[88323] = anon_sym_SEMI;
	v->a[88324] = 21;
	v->a[88325] = actions(57);
	v->a[88326] = 1;
	v->a[88327] = sym_comment;
	v->a[88328] = actions(4584);
	v->a[88329] = 1;
	v->a[88330] = anon_sym_LPAREN;
	v->a[88331] = actions(4586);
	v->a[88332] = 1;
	v->a[88333] = anon_sym_BANG;
	v->a[88334] = actions(4592);
	v->a[88335] = 1;
	v->a[88336] = anon_sym_TILDE;
	v->a[88337] = actions(4594);
	v->a[88338] = 1;
	v->a[88339] = anon_sym_DOLLAR;
	small_parse_table_4417(v);
}

void	small_parse_table_4417(t_small_parse_table_array *v)
{
	v->a[88340] = actions(4596);
	v->a[88341] = 1;
	v->a[88342] = anon_sym_DQUOTE;
	v->a[88343] = actions(4598);
	v->a[88344] = 1;
	v->a[88345] = aux_sym_number_token1;
	v->a[88346] = actions(4600);
	v->a[88347] = 1;
	v->a[88348] = aux_sym_number_token2;
	v->a[88349] = actions(4602);
	v->a[88350] = 1;
	v->a[88351] = anon_sym_DOLLAR_LBRACE;
	v->a[88352] = actions(4604);
	v->a[88353] = 1;
	v->a[88354] = anon_sym_DOLLAR_LPAREN;
	v->a[88355] = actions(4606);
	v->a[88356] = 1;
	v->a[88357] = anon_sym_BQUOTE;
	v->a[88358] = actions(4608);
	v->a[88359] = 1;
	small_parse_table_4418(v);
}

void	small_parse_table_4418(t_small_parse_table_array *v)
{
	v->a[88360] = anon_sym_DOLLAR_BQUOTE;
	v->a[88361] = actions(4887);
	v->a[88362] = 1;
	v->a[88363] = aux_sym__simple_variable_name_token1;
	v->a[88364] = actions(4889);
	v->a[88365] = 1;
	v->a[88366] = sym_variable_name;
	v->a[88367] = state(1476);
	v->a[88368] = 1;
	v->a[88369] = sym__arithmetic_postfix_expression;
	v->a[88370] = state(1478);
	v->a[88371] = 1;
	v->a[88372] = sym__arithmetic_unary_expression;
	v->a[88373] = state(1490);
	v->a[88374] = 1;
	v->a[88375] = sym__arithmetic_ternary_expression;
	v->a[88376] = state(1511);
	v->a[88377] = 1;
	v->a[88378] = sym__arithmetic_binary_expression;
	v->a[88379] = actions(4588);
	small_parse_table_4419(v);
}

void	small_parse_table_4419(t_small_parse_table_array *v)
{
	v->a[88380] = 2;
	v->a[88381] = anon_sym_PLUS_PLUS;
	v->a[88382] = anon_sym_DASH_DASH;
	v->a[88383] = actions(4590);
	v->a[88384] = 2;
	v->a[88385] = anon_sym_DASH2;
	v->a[88386] = anon_sym_PLUS2;
	v->a[88387] = state(1382);
	v->a[88388] = 8;
	v->a[88389] = sym__arithmetic_expression;
	v->a[88390] = sym__arithmetic_literal;
	v->a[88391] = sym__arithmetic_parenthesized_expression;
	v->a[88392] = sym_string;
	v->a[88393] = sym_number;
	v->a[88394] = sym_simple_expansion;
	v->a[88395] = sym_expansion;
	v->a[88396] = sym_command_substitution;
	v->a[88397] = 21;
	v->a[88398] = actions(57);
	v->a[88399] = 1;
	small_parse_table_4420(v);
}

/* EOF small_parse_table_883.c */
