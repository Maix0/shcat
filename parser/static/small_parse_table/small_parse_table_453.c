/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_453.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2265(t_small_parse_table_array *v)
{
	v->a[45300] = 1;
	v->a[45301] = anon_sym_BQUOTE;
	v->a[45302] = actions(1598);
	v->a[45303] = 1;
	v->a[45304] = sym_variable_name;
	v->a[45305] = actions(1631);
	v->a[45306] = 1;
	v->a[45307] = anon_sym_RPAREN_RPAREN;
	v->a[45308] = actions(1580);
	v->a[45309] = 2;
	v->a[45310] = anon_sym_PLUS_PLUS;
	v->a[45311] = anon_sym_DASH_DASH;
	v->a[45312] = actions(1582);
	v->a[45313] = 2;
	v->a[45314] = anon_sym_DASH2;
	v->a[45315] = anon_sym_PLUS2;
	v->a[45316] = actions(1590);
	v->a[45317] = 2;
	v->a[45318] = sym_number;
	v->a[45319] = aux_sym__simple_variable_name_token1;
	small_parse_table_2266(v);
}

void	small_parse_table_2266(t_small_parse_table_array *v)
{
	v->a[45320] = state(238);
	v->a[45321] = 3;
	v->a[45322] = sym_string;
	v->a[45323] = sym_simple_expansion;
	v->a[45324] = sym_expansion;
	v->a[45325] = state(333);
	v->a[45326] = 8;
	v->a[45327] = sym__arithmetic_expression;
	v->a[45328] = sym_arithmetic_literal;
	v->a[45329] = sym_arithmetic_binary_expression;
	v->a[45330] = sym_arithmetic_ternary_expression;
	v->a[45331] = sym_arithmetic_unary_expression;
	v->a[45332] = sym_arithmetic_postfix_expression;
	v->a[45333] = sym_arithmetic_parenthesized_expression;
	v->a[45334] = sym_command_substitution;
	v->a[45335] = 18;
	v->a[45336] = actions(3);
	v->a[45337] = 1;
	v->a[45338] = sym_comment;
	v->a[45339] = actions(1635);
	small_parse_table_2267(v);
}

void	small_parse_table_2267(t_small_parse_table_array *v)
{
	v->a[45340] = 1;
	v->a[45341] = anon_sym_esac;
	v->a[45342] = actions(1637);
	v->a[45343] = 1;
	v->a[45344] = anon_sym_LPAREN;
	v->a[45345] = actions(1641);
	v->a[45346] = 1;
	v->a[45347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45348] = actions(1643);
	v->a[45349] = 1;
	v->a[45350] = anon_sym_DOLLAR;
	v->a[45351] = actions(1645);
	v->a[45352] = 1;
	v->a[45353] = anon_sym_DQUOTE;
	v->a[45354] = actions(1647);
	v->a[45355] = 1;
	v->a[45356] = anon_sym_DOLLAR_LBRACE;
	v->a[45357] = actions(1649);
	v->a[45358] = 1;
	v->a[45359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2268(v);
}

void	small_parse_table_2268(t_small_parse_table_array *v)
{
	v->a[45360] = actions(1651);
	v->a[45361] = 1;
	v->a[45362] = anon_sym_BQUOTE;
	v->a[45363] = actions(1653);
	v->a[45364] = 1;
	v->a[45365] = sym_extglob_pattern;
	v->a[45366] = state(951);
	v->a[45367] = 1;
	v->a[45368] = sym_terminator;
	v->a[45369] = state(1082);
	v->a[45370] = 1;
	v->a[45371] = aux_sym_case_statement_repeat1;
	v->a[45372] = state(1713);
	v->a[45373] = 1;
	v->a[45374] = sym_case_item;
	v->a[45375] = state(2020);
	v->a[45376] = 1;
	v->a[45377] = sym__case_item_last;
	v->a[45378] = state(1873);
	v->a[45379] = 2;
	small_parse_table_2269(v);
}

void	small_parse_table_2269(t_small_parse_table_array *v)
{
	v->a[45380] = sym_concatenation;
	v->a[45381] = sym__extglob_blob;
	v->a[45382] = actions(1633);
	v->a[45383] = 3;
	v->a[45384] = sym_raw_string;
	v->a[45385] = sym_number;
	v->a[45386] = sym_word;
	v->a[45387] = actions(1639);
	v->a[45388] = 4;
	v->a[45389] = anon_sym_SEMI_SEMI;
	v->a[45390] = aux_sym_heredoc_redirect_token1;
	v->a[45391] = anon_sym_AMP;
	v->a[45392] = anon_sym_SEMI;
	v->a[45393] = state(1806);
	v->a[45394] = 5;
	v->a[45395] = sym_arithmetic_expansion;
	v->a[45396] = sym_string;
	v->a[45397] = sym_simple_expansion;
	v->a[45398] = sym_expansion;
	v->a[45399] = sym_command_substitution;
	small_parse_table_2270(v);
}

/* EOF small_parse_table_453.c */
