/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_413.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2065(t_small_parse_table_array *v)
{
	v->a[41300] = 1;
	v->a[41301] = aux_sym_concatenation_token1;
	v->a[41302] = actions(1561);
	v->a[41303] = 1;
	v->a[41304] = sym__concat;
	v->a[41305] = state(722);
	v->a[41306] = 1;
	v->a[41307] = aux_sym_concatenation_repeat1;
	v->a[41308] = actions(1011);
	v->a[41309] = 3;
	v->a[41310] = sym_variable_name;
	v->a[41311] = ts_builtin_sym_end;
	v->a[41312] = aux_sym_heredoc_redirect_token1;
	v->a[41313] = actions(1003);
	v->a[41314] = 16;
	v->a[41315] = anon_sym_PIPE;
	v->a[41316] = anon_sym_RPAREN;
	v->a[41317] = anon_sym_SEMI_SEMI;
	v->a[41318] = anon_sym_AMP_AMP;
	v->a[41319] = anon_sym_PIPE_PIPE;
	small_parse_table_2066(v);
}

void	small_parse_table_2066(t_small_parse_table_array *v)
{
	v->a[41320] = anon_sym_LT;
	v->a[41321] = anon_sym_GT;
	v->a[41322] = anon_sym_GT_GT;
	v->a[41323] = anon_sym_LT_AMP;
	v->a[41324] = anon_sym_GT_AMP;
	v->a[41325] = anon_sym_GT_PIPE;
	v->a[41326] = anon_sym_LT_GT;
	v->a[41327] = anon_sym_LT_LT;
	v->a[41328] = anon_sym_LT_LT_DASH;
	v->a[41329] = anon_sym_BQUOTE;
	v->a[41330] = anon_sym_SEMI;
	v->a[41331] = 12;
	v->a[41332] = actions(407);
	v->a[41333] = 1;
	v->a[41334] = sym_comment;
	v->a[41335] = actions(1522);
	v->a[41336] = 1;
	v->a[41337] = anon_sym_LPAREN;
	v->a[41338] = actions(1524);
	v->a[41339] = 1;
	small_parse_table_2067(v);
}

void	small_parse_table_2067(t_small_parse_table_array *v)
{
	v->a[41340] = anon_sym_BANG;
	v->a[41341] = actions(1530);
	v->a[41342] = 1;
	v->a[41343] = anon_sym_DOLLAR;
	v->a[41344] = actions(1532);
	v->a[41345] = 1;
	v->a[41346] = anon_sym_DQUOTE;
	v->a[41347] = actions(1536);
	v->a[41348] = 1;
	v->a[41349] = anon_sym_DOLLAR_LBRACE;
	v->a[41350] = actions(1538);
	v->a[41351] = 1;
	v->a[41352] = sym_variable_name;
	v->a[41353] = actions(1526);
	v->a[41354] = 2;
	v->a[41355] = anon_sym_PLUS_PLUS;
	v->a[41356] = anon_sym_DASH_DASH;
	v->a[41357] = actions(1528);
	v->a[41358] = 2;
	v->a[41359] = anon_sym_DASH2;
	small_parse_table_2068(v);
}

void	small_parse_table_2068(t_small_parse_table_array *v)
{
	v->a[41360] = anon_sym_PLUS2;
	v->a[41361] = actions(1534);
	v->a[41362] = 2;
	v->a[41363] = sym_number;
	v->a[41364] = aux_sym__simple_variable_name_token1;
	v->a[41365] = state(206);
	v->a[41366] = 3;
	v->a[41367] = sym_string;
	v->a[41368] = sym_simple_expansion;
	v->a[41369] = sym_expansion;
	v->a[41370] = state(194);
	v->a[41371] = 7;
	v->a[41372] = sym__arithmetic_expression;
	v->a[41373] = sym_arithmetic_literal;
	v->a[41374] = sym_arithmetic_binary_expression;
	v->a[41375] = sym_arithmetic_ternary_expression;
	v->a[41376] = sym_arithmetic_unary_expression;
	v->a[41377] = sym_arithmetic_postfix_expression;
	v->a[41378] = sym_arithmetic_parenthesized_expression;
	v->a[41379] = 13;
	small_parse_table_2069(v);
}

void	small_parse_table_2069(t_small_parse_table_array *v)
{
	v->a[41380] = actions(3);
	v->a[41381] = 1;
	v->a[41382] = sym_comment;
	v->a[41383] = actions(1510);
	v->a[41384] = 1;
	v->a[41385] = sym__immediate_double_hash;
	v->a[41386] = actions(1564);
	v->a[41387] = 1;
	v->a[41388] = anon_sym_RPAREN;
	v->a[41389] = actions(1566);
	v->a[41390] = 1;
	v->a[41391] = anon_sym_RBRACE;
	v->a[41392] = actions(1569);
	v->a[41393] = 1;
	v->a[41394] = anon_sym_DQUOTE;
	v->a[41395] = actions(1571);
	v->a[41396] = 1;
	v->a[41397] = sym_raw_string;
	v->a[41398] = actions(1573);
	v->a[41399] = 1;
	small_parse_table_2070(v);
}

/* EOF small_parse_table_413.c */
