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
	v->a[45300] = actions(1481);
	v->a[45301] = 1;
	v->a[45302] = anon_sym_DOLLAR;
	v->a[45303] = actions(1483);
	v->a[45304] = 1;
	v->a[45305] = anon_sym_DQUOTE;
	v->a[45306] = actions(1487);
	v->a[45307] = 1;
	v->a[45308] = anon_sym_DOLLAR_LBRACE;
	v->a[45309] = actions(1489);
	v->a[45310] = 1;
	v->a[45311] = anon_sym_DOLLAR_LPAREN;
	v->a[45312] = actions(1491);
	v->a[45313] = 1;
	v->a[45314] = anon_sym_BQUOTE;
	v->a[45315] = actions(1493);
	v->a[45316] = 1;
	v->a[45317] = sym_variable_name;
	v->a[45318] = actions(1640);
	v->a[45319] = 1;
	small_parse_table_2266(v);
}

void	small_parse_table_2266(t_small_parse_table_array *v)
{
	v->a[45320] = anon_sym_RPAREN_RPAREN;
	v->a[45321] = actions(1475);
	v->a[45322] = 2;
	v->a[45323] = anon_sym_PLUS_PLUS;
	v->a[45324] = anon_sym_DASH_DASH;
	v->a[45325] = actions(1477);
	v->a[45326] = 2;
	v->a[45327] = anon_sym_DASH2;
	v->a[45328] = anon_sym_PLUS2;
	v->a[45329] = actions(1485);
	v->a[45330] = 2;
	v->a[45331] = sym_number;
	v->a[45332] = aux_sym__simple_variable_name_token1;
	v->a[45333] = state(194);
	v->a[45334] = 3;
	v->a[45335] = sym_string;
	v->a[45336] = sym_simple_expansion;
	v->a[45337] = sym_expansion;
	v->a[45338] = state(272);
	v->a[45339] = 8;
	small_parse_table_2267(v);
}

void	small_parse_table_2267(t_small_parse_table_array *v)
{
	v->a[45340] = sym__arithmetic_expression;
	v->a[45341] = sym_arithmetic_literal;
	v->a[45342] = sym_arithmetic_binary_expression;
	v->a[45343] = sym_arithmetic_ternary_expression;
	v->a[45344] = sym_arithmetic_unary_expression;
	v->a[45345] = sym_arithmetic_postfix_expression;
	v->a[45346] = sym_arithmetic_parenthesized_expression;
	v->a[45347] = sym_command_substitution;
	v->a[45348] = 7;
	v->a[45349] = actions(3);
	v->a[45350] = 1;
	v->a[45351] = sym_comment;
	v->a[45352] = actions(1457);
	v->a[45353] = 1;
	v->a[45354] = sym_file_descriptor;
	v->a[45355] = actions(1460);
	v->a[45356] = 1;
	v->a[45357] = sym_variable_name;
	v->a[45358] = actions(1642);
	v->a[45359] = 1;
	small_parse_table_2268(v);
}

void	small_parse_table_2268(t_small_parse_table_array *v)
{
	v->a[45360] = anon_sym_RPAREN;
	v->a[45361] = actions(1454);
	v->a[45362] = 7;
	v->a[45363] = anon_sym_LT;
	v->a[45364] = anon_sym_GT;
	v->a[45365] = anon_sym_GT_GT;
	v->a[45366] = anon_sym_LT_AMP;
	v->a[45367] = anon_sym_GT_AMP;
	v->a[45368] = anon_sym_GT_PIPE;
	v->a[45369] = anon_sym_LT_GT;
	v->a[45370] = actions(1449);
	v->a[45371] = 8;
	v->a[45372] = anon_sym_PIPE;
	v->a[45373] = anon_sym_SEMI_SEMI;
	v->a[45374] = anon_sym_AMP_AMP;
	v->a[45375] = anon_sym_PIPE_PIPE;
	v->a[45376] = anon_sym_LT_LT;
	v->a[45377] = anon_sym_LT_LT_DASH;
	v->a[45378] = aux_sym_heredoc_redirect_token1;
	v->a[45379] = anon_sym_SEMI;
	small_parse_table_2269(v);
}

void	small_parse_table_2269(t_small_parse_table_array *v)
{
	v->a[45380] = actions(1447);
	v->a[45381] = 9;
	v->a[45382] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45383] = anon_sym_DOLLAR;
	v->a[45384] = anon_sym_DQUOTE;
	v->a[45385] = sym_raw_string;
	v->a[45386] = sym_number;
	v->a[45387] = anon_sym_DOLLAR_LBRACE;
	v->a[45388] = anon_sym_DOLLAR_LPAREN;
	v->a[45389] = anon_sym_BQUOTE;
	v->a[45390] = sym_word;
	v->a[45391] = 7;
	v->a[45392] = actions(3);
	v->a[45393] = 1;
	v->a[45394] = sym_comment;
	v->a[45395] = actions(1457);
	v->a[45396] = 1;
	v->a[45397] = sym_file_descriptor;
	v->a[45398] = actions(1460);
	v->a[45399] = 1;
	small_parse_table_2270(v);
}

/* EOF small_parse_table_453.c */
