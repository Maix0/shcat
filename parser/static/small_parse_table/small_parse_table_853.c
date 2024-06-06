/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_853.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4265(t_small_parse_table_array *v)
{
	v->a[85300] = 1;
	v->a[85301] = sym__arithmetic_binary_expression;
	v->a[85302] = actions(4588);
	v->a[85303] = 2;
	v->a[85304] = anon_sym_PLUS_PLUS;
	v->a[85305] = anon_sym_DASH_DASH;
	v->a[85306] = actions(4590);
	v->a[85307] = 2;
	v->a[85308] = anon_sym_DASH2;
	v->a[85309] = anon_sym_PLUS2;
	v->a[85310] = state(1485);
	v->a[85311] = 8;
	v->a[85312] = sym__arithmetic_expression;
	v->a[85313] = sym__arithmetic_literal;
	v->a[85314] = sym__arithmetic_parenthesized_expression;
	v->a[85315] = sym_string;
	v->a[85316] = sym_number;
	v->a[85317] = sym_simple_expansion;
	v->a[85318] = sym_expansion;
	v->a[85319] = sym_command_substitution;
	small_parse_table_4266(v);
}

void	small_parse_table_4266(t_small_parse_table_array *v)
{
	v->a[85320] = 21;
	v->a[85321] = actions(57);
	v->a[85322] = 1;
	v->a[85323] = sym_comment;
	v->a[85324] = actions(4584);
	v->a[85325] = 1;
	v->a[85326] = anon_sym_LPAREN;
	v->a[85327] = actions(4586);
	v->a[85328] = 1;
	v->a[85329] = anon_sym_BANG;
	v->a[85330] = actions(4592);
	v->a[85331] = 1;
	v->a[85332] = anon_sym_TILDE;
	v->a[85333] = actions(4594);
	v->a[85334] = 1;
	v->a[85335] = anon_sym_DOLLAR;
	v->a[85336] = actions(4596);
	v->a[85337] = 1;
	v->a[85338] = anon_sym_DQUOTE;
	v->a[85339] = actions(4598);
	small_parse_table_4267(v);
}

void	small_parse_table_4267(t_small_parse_table_array *v)
{
	v->a[85340] = 1;
	v->a[85341] = aux_sym_number_token1;
	v->a[85342] = actions(4600);
	v->a[85343] = 1;
	v->a[85344] = aux_sym_number_token2;
	v->a[85345] = actions(4602);
	v->a[85346] = 1;
	v->a[85347] = anon_sym_DOLLAR_LBRACE;
	v->a[85348] = actions(4604);
	v->a[85349] = 1;
	v->a[85350] = anon_sym_DOLLAR_LPAREN;
	v->a[85351] = actions(4606);
	v->a[85352] = 1;
	v->a[85353] = anon_sym_BQUOTE;
	v->a[85354] = actions(4608);
	v->a[85355] = 1;
	v->a[85356] = anon_sym_DOLLAR_BQUOTE;
	v->a[85357] = actions(4748);
	v->a[85358] = 1;
	v->a[85359] = aux_sym__simple_variable_name_token1;
	small_parse_table_4268(v);
}

void	small_parse_table_4268(t_small_parse_table_array *v)
{
	v->a[85360] = actions(4750);
	v->a[85361] = 1;
	v->a[85362] = sym_variable_name;
	v->a[85363] = state(1476);
	v->a[85364] = 1;
	v->a[85365] = sym__arithmetic_postfix_expression;
	v->a[85366] = state(1478);
	v->a[85367] = 1;
	v->a[85368] = sym__arithmetic_unary_expression;
	v->a[85369] = state(1490);
	v->a[85370] = 1;
	v->a[85371] = sym__arithmetic_ternary_expression;
	v->a[85372] = state(1511);
	v->a[85373] = 1;
	v->a[85374] = sym__arithmetic_binary_expression;
	v->a[85375] = actions(4588);
	v->a[85376] = 2;
	v->a[85377] = anon_sym_PLUS_PLUS;
	v->a[85378] = anon_sym_DASH_DASH;
	v->a[85379] = actions(4590);
	small_parse_table_4269(v);
}

void	small_parse_table_4269(t_small_parse_table_array *v)
{
	v->a[85380] = 2;
	v->a[85381] = anon_sym_DASH2;
	v->a[85382] = anon_sym_PLUS2;
	v->a[85383] = state(1467);
	v->a[85384] = 8;
	v->a[85385] = sym__arithmetic_expression;
	v->a[85386] = sym__arithmetic_literal;
	v->a[85387] = sym__arithmetic_parenthesized_expression;
	v->a[85388] = sym_string;
	v->a[85389] = sym_number;
	v->a[85390] = sym_simple_expansion;
	v->a[85391] = sym_expansion;
	v->a[85392] = sym_command_substitution;
	v->a[85393] = 21;
	v->a[85394] = actions(57);
	v->a[85395] = 1;
	v->a[85396] = sym_comment;
	v->a[85397] = actions(4584);
	v->a[85398] = 1;
	v->a[85399] = anon_sym_LPAREN;
	small_parse_table_4270(v);
}

/* EOF small_parse_table_853.c */
