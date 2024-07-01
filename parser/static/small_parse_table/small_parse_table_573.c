/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_573.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2865(t_small_parse_table_array *v)
{
	v->a[57300] = anon_sym_PLUS_PLUS;
	v->a[57301] = anon_sym_DASH_DASH;
	v->a[57302] = actions(1752);
	v->a[57303] = 2;
	v->a[57304] = anon_sym_DASH2;
	v->a[57305] = anon_sym_PLUS2;
	v->a[57306] = actions(1760);
	v->a[57307] = 2;
	v->a[57308] = sym_number;
	v->a[57309] = aux_sym__simple_variable_name_token1;
	v->a[57310] = state(271);
	v->a[57311] = 3;
	v->a[57312] = sym_string;
	v->a[57313] = sym_simple_expansion;
	v->a[57314] = sym_expansion;
	v->a[57315] = state(306);
	v->a[57316] = 8;
	v->a[57317] = sym__arithmetic_expression;
	v->a[57318] = sym_arithmetic_literal;
	v->a[57319] = sym_arithmetic_binary_expression;
	small_parse_table_2866(v);
}

void	small_parse_table_2866(t_small_parse_table_array *v)
{
	v->a[57320] = sym_arithmetic_ternary_expression;
	v->a[57321] = sym_arithmetic_unary_expression;
	v->a[57322] = sym_arithmetic_postfix_expression;
	v->a[57323] = sym_arithmetic_parenthesized_expression;
	v->a[57324] = sym_command_substitution;
	v->a[57325] = 15;
	v->a[57326] = actions(870);
	v->a[57327] = 1;
	v->a[57328] = sym_comment;
	v->a[57329] = actions(1744);
	v->a[57330] = 1;
	v->a[57331] = anon_sym_LPAREN;
	v->a[57332] = actions(1746);
	v->a[57333] = 1;
	v->a[57334] = anon_sym_BANG;
	v->a[57335] = actions(1754);
	v->a[57336] = 1;
	v->a[57337] = anon_sym_TILDE;
	v->a[57338] = actions(1756);
	v->a[57339] = 1;
	small_parse_table_2867(v);
}

void	small_parse_table_2867(t_small_parse_table_array *v)
{
	v->a[57340] = anon_sym_DOLLAR;
	v->a[57341] = actions(1758);
	v->a[57342] = 1;
	v->a[57343] = anon_sym_DQUOTE;
	v->a[57344] = actions(1762);
	v->a[57345] = 1;
	v->a[57346] = anon_sym_DOLLAR_LBRACE;
	v->a[57347] = actions(1764);
	v->a[57348] = 1;
	v->a[57349] = anon_sym_DOLLAR_LPAREN;
	v->a[57350] = actions(1766);
	v->a[57351] = 1;
	v->a[57352] = anon_sym_BQUOTE;
	v->a[57353] = actions(1768);
	v->a[57354] = 1;
	v->a[57355] = sym_variable_name;
	v->a[57356] = actions(1750);
	v->a[57357] = 2;
	v->a[57358] = anon_sym_PLUS_PLUS;
	v->a[57359] = anon_sym_DASH_DASH;
	small_parse_table_2868(v);
}

void	small_parse_table_2868(t_small_parse_table_array *v)
{
	v->a[57360] = actions(1752);
	v->a[57361] = 2;
	v->a[57362] = anon_sym_DASH2;
	v->a[57363] = anon_sym_PLUS2;
	v->a[57364] = actions(1760);
	v->a[57365] = 2;
	v->a[57366] = sym_number;
	v->a[57367] = aux_sym__simple_variable_name_token1;
	v->a[57368] = state(271);
	v->a[57369] = 3;
	v->a[57370] = sym_string;
	v->a[57371] = sym_simple_expansion;
	v->a[57372] = sym_expansion;
	v->a[57373] = state(310);
	v->a[57374] = 8;
	v->a[57375] = sym__arithmetic_expression;
	v->a[57376] = sym_arithmetic_literal;
	v->a[57377] = sym_arithmetic_binary_expression;
	v->a[57378] = sym_arithmetic_ternary_expression;
	v->a[57379] = sym_arithmetic_unary_expression;
	small_parse_table_2869(v);
}

void	small_parse_table_2869(t_small_parse_table_array *v)
{
	v->a[57380] = sym_arithmetic_postfix_expression;
	v->a[57381] = sym_arithmetic_parenthesized_expression;
	v->a[57382] = sym_command_substitution;
	v->a[57383] = 15;
	v->a[57384] = actions(870);
	v->a[57385] = 1;
	v->a[57386] = sym_comment;
	v->a[57387] = actions(1744);
	v->a[57388] = 1;
	v->a[57389] = anon_sym_LPAREN;
	v->a[57390] = actions(1746);
	v->a[57391] = 1;
	v->a[57392] = anon_sym_BANG;
	v->a[57393] = actions(1754);
	v->a[57394] = 1;
	v->a[57395] = anon_sym_TILDE;
	v->a[57396] = actions(1756);
	v->a[57397] = 1;
	v->a[57398] = anon_sym_DOLLAR;
	v->a[57399] = actions(1758);
	small_parse_table_2870(v);
}

/* EOF small_parse_table_573.c */
