/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_903.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4515(t_small_parse_table_array *v)
{
	v->a[90300] = anon_sym_DOLLAR;
	v->a[90301] = actions(4596);
	v->a[90302] = 1;
	v->a[90303] = anon_sym_DQUOTE;
	v->a[90304] = actions(4598);
	v->a[90305] = 1;
	v->a[90306] = aux_sym_number_token1;
	v->a[90307] = actions(4600);
	v->a[90308] = 1;
	v->a[90309] = aux_sym_number_token2;
	v->a[90310] = actions(4602);
	v->a[90311] = 1;
	v->a[90312] = anon_sym_DOLLAR_LBRACE;
	v->a[90313] = actions(4604);
	v->a[90314] = 1;
	v->a[90315] = anon_sym_DOLLAR_LPAREN;
	v->a[90316] = actions(4606);
	v->a[90317] = 1;
	v->a[90318] = anon_sym_BQUOTE;
	v->a[90319] = actions(4608);
	small_parse_table_4516(v);
}

void	small_parse_table_4516(t_small_parse_table_array *v)
{
	v->a[90320] = 1;
	v->a[90321] = anon_sym_DOLLAR_BQUOTE;
	v->a[90322] = actions(4981);
	v->a[90323] = 1;
	v->a[90324] = aux_sym__simple_variable_name_token1;
	v->a[90325] = actions(4983);
	v->a[90326] = 1;
	v->a[90327] = sym_variable_name;
	v->a[90328] = state(1476);
	v->a[90329] = 1;
	v->a[90330] = sym__arithmetic_postfix_expression;
	v->a[90331] = state(1478);
	v->a[90332] = 1;
	v->a[90333] = sym__arithmetic_unary_expression;
	v->a[90334] = state(1490);
	v->a[90335] = 1;
	v->a[90336] = sym__arithmetic_ternary_expression;
	v->a[90337] = state(1511);
	v->a[90338] = 1;
	v->a[90339] = sym__arithmetic_binary_expression;
	small_parse_table_4517(v);
}

void	small_parse_table_4517(t_small_parse_table_array *v)
{
	v->a[90340] = actions(4588);
	v->a[90341] = 2;
	v->a[90342] = anon_sym_PLUS_PLUS;
	v->a[90343] = anon_sym_DASH_DASH;
	v->a[90344] = actions(4590);
	v->a[90345] = 2;
	v->a[90346] = anon_sym_DASH2;
	v->a[90347] = anon_sym_PLUS2;
	v->a[90348] = state(1379);
	v->a[90349] = 8;
	v->a[90350] = sym__arithmetic_expression;
	v->a[90351] = sym__arithmetic_literal;
	v->a[90352] = sym__arithmetic_parenthesized_expression;
	v->a[90353] = sym_string;
	v->a[90354] = sym_number;
	v->a[90355] = sym_simple_expansion;
	v->a[90356] = sym_expansion;
	v->a[90357] = sym_command_substitution;
	v->a[90358] = 21;
	v->a[90359] = actions(57);
	small_parse_table_4518(v);
}

void	small_parse_table_4518(t_small_parse_table_array *v)
{
	v->a[90360] = 1;
	v->a[90361] = sym_comment;
	v->a[90362] = actions(4584);
	v->a[90363] = 1;
	v->a[90364] = anon_sym_LPAREN;
	v->a[90365] = actions(4586);
	v->a[90366] = 1;
	v->a[90367] = anon_sym_BANG;
	v->a[90368] = actions(4592);
	v->a[90369] = 1;
	v->a[90370] = anon_sym_TILDE;
	v->a[90371] = actions(4594);
	v->a[90372] = 1;
	v->a[90373] = anon_sym_DOLLAR;
	v->a[90374] = actions(4596);
	v->a[90375] = 1;
	v->a[90376] = anon_sym_DQUOTE;
	v->a[90377] = actions(4598);
	v->a[90378] = 1;
	v->a[90379] = aux_sym_number_token1;
	small_parse_table_4519(v);
}

void	small_parse_table_4519(t_small_parse_table_array *v)
{
	v->a[90380] = actions(4600);
	v->a[90381] = 1;
	v->a[90382] = aux_sym_number_token2;
	v->a[90383] = actions(4602);
	v->a[90384] = 1;
	v->a[90385] = anon_sym_DOLLAR_LBRACE;
	v->a[90386] = actions(4604);
	v->a[90387] = 1;
	v->a[90388] = anon_sym_DOLLAR_LPAREN;
	v->a[90389] = actions(4606);
	v->a[90390] = 1;
	v->a[90391] = anon_sym_BQUOTE;
	v->a[90392] = actions(4608);
	v->a[90393] = 1;
	v->a[90394] = anon_sym_DOLLAR_BQUOTE;
	v->a[90395] = actions(4985);
	v->a[90396] = 1;
	v->a[90397] = aux_sym__simple_variable_name_token1;
	v->a[90398] = actions(4987);
	v->a[90399] = 1;
	small_parse_table_4520(v);
}

/* EOF small_parse_table_903.c */
