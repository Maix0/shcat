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
	v->a[57300] = state(530);
	v->a[57301] = 4;
	v->a[57302] = sym_string;
	v->a[57303] = sym_number;
	v->a[57304] = sym_simple_expansion;
	v->a[57305] = sym_expansion;
	v->a[57306] = state(463);
	v->a[57307] = 8;
	v->a[57308] = sym__arithmetic_expression;
	v->a[57309] = sym_arithmetic_literal;
	v->a[57310] = sym_arithmetic_binary_expression;
	v->a[57311] = sym_arithmetic_ternary_expression;
	v->a[57312] = sym_arithmetic_unary_expression;
	v->a[57313] = sym_arithmetic_postfix_expression;
	v->a[57314] = sym_arithmetic_parenthesized_expression;
	v->a[57315] = sym_command_substitution;
	v->a[57316] = 17;
	v->a[57317] = actions(1404);
	v->a[57318] = 1;
	v->a[57319] = sym_comment;
	small_parse_table_2866(v);
}

void	small_parse_table_2866(t_small_parse_table_array *v)
{
	v->a[57320] = actions(1979);
	v->a[57321] = 1;
	v->a[57322] = anon_sym_LPAREN;
	v->a[57323] = actions(1981);
	v->a[57324] = 1;
	v->a[57325] = anon_sym_BANG;
	v->a[57326] = actions(1989);
	v->a[57327] = 1;
	v->a[57328] = anon_sym_TILDE;
	v->a[57329] = actions(1991);
	v->a[57330] = 1;
	v->a[57331] = anon_sym_DOLLAR;
	v->a[57332] = actions(1993);
	v->a[57333] = 1;
	v->a[57334] = anon_sym_DQUOTE;
	v->a[57335] = actions(1995);
	v->a[57336] = 1;
	v->a[57337] = aux_sym_number_token1;
	v->a[57338] = actions(1997);
	v->a[57339] = 1;
	small_parse_table_2867(v);
}

void	small_parse_table_2867(t_small_parse_table_array *v)
{
	v->a[57340] = aux_sym_number_token2;
	v->a[57341] = actions(1999);
	v->a[57342] = 1;
	v->a[57343] = anon_sym_DOLLAR_LBRACE;
	v->a[57344] = actions(2001);
	v->a[57345] = 1;
	v->a[57346] = anon_sym_DOLLAR_LPAREN;
	v->a[57347] = actions(2003);
	v->a[57348] = 1;
	v->a[57349] = anon_sym_BQUOTE;
	v->a[57350] = actions(2005);
	v->a[57351] = 1;
	v->a[57352] = aux_sym__simple_variable_name_token1;
	v->a[57353] = actions(2007);
	v->a[57354] = 1;
	v->a[57355] = sym_variable_name;
	v->a[57356] = actions(1985);
	v->a[57357] = 2;
	v->a[57358] = anon_sym_PLUS_PLUS;
	v->a[57359] = anon_sym_DASH_DASH;
	small_parse_table_2868(v);
}

void	small_parse_table_2868(t_small_parse_table_array *v)
{
	v->a[57360] = actions(1987);
	v->a[57361] = 2;
	v->a[57362] = anon_sym_DASH2;
	v->a[57363] = anon_sym_PLUS2;
	v->a[57364] = state(530);
	v->a[57365] = 4;
	v->a[57366] = sym_string;
	v->a[57367] = sym_number;
	v->a[57368] = sym_simple_expansion;
	v->a[57369] = sym_expansion;
	v->a[57370] = state(461);
	v->a[57371] = 8;
	v->a[57372] = sym__arithmetic_expression;
	v->a[57373] = sym_arithmetic_literal;
	v->a[57374] = sym_arithmetic_binary_expression;
	v->a[57375] = sym_arithmetic_ternary_expression;
	v->a[57376] = sym_arithmetic_unary_expression;
	v->a[57377] = sym_arithmetic_postfix_expression;
	v->a[57378] = sym_arithmetic_parenthesized_expression;
	v->a[57379] = sym_command_substitution;
	small_parse_table_2869(v);
}

void	small_parse_table_2869(t_small_parse_table_array *v)
{
	v->a[57380] = 19;
	v->a[57381] = actions(3);
	v->a[57382] = 1;
	v->a[57383] = sym_comment;
	v->a[57384] = actions(2113);
	v->a[57385] = 1;
	v->a[57386] = anon_sym_esac;
	v->a[57387] = actions(2115);
	v->a[57388] = 1;
	v->a[57389] = anon_sym_LPAREN;
	v->a[57390] = actions(2119);
	v->a[57391] = 1;
	v->a[57392] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57393] = actions(2121);
	v->a[57394] = 1;
	v->a[57395] = anon_sym_DOLLAR;
	v->a[57396] = actions(2123);
	v->a[57397] = 1;
	v->a[57398] = anon_sym_DQUOTE;
	v->a[57399] = actions(2125);
	small_parse_table_2870(v);
}

/* EOF small_parse_table_573.c */
