/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_473.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2365(t_small_parse_table_array *v)
{
	v->a[47300] = state(789);
	v->a[47301] = 1;
	v->a[47302] = aux_sym_concatenation_repeat1;
	v->a[47303] = actions(1210);
	v->a[47304] = 22;
	v->a[47305] = anon_sym_PIPE;
	v->a[47306] = anon_sym_AMP_AMP;
	v->a[47307] = anon_sym_PIPE_PIPE;
	v->a[47308] = anon_sym_LT;
	v->a[47309] = anon_sym_GT;
	v->a[47310] = anon_sym_GT_GT;
	v->a[47311] = anon_sym_LT_AMP;
	v->a[47312] = anon_sym_GT_AMP;
	v->a[47313] = anon_sym_GT_PIPE;
	v->a[47314] = anon_sym_LT_GT;
	v->a[47315] = anon_sym_LT_LT;
	v->a[47316] = anon_sym_LT_LT_DASH;
	v->a[47317] = aux_sym_heredoc_redirect_token1;
	v->a[47318] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47319] = anon_sym_DOLLAR;
	small_parse_table_2366(v);
}

void	small_parse_table_2366(t_small_parse_table_array *v)
{
	v->a[47320] = anon_sym_DQUOTE;
	v->a[47321] = sym_raw_string;
	v->a[47322] = sym_number;
	v->a[47323] = anon_sym_DOLLAR_LBRACE;
	v->a[47324] = anon_sym_DOLLAR_LPAREN;
	v->a[47325] = anon_sym_BQUOTE;
	v->a[47326] = sym_word;
	v->a[47327] = 15;
	v->a[47328] = actions(501);
	v->a[47329] = 1;
	v->a[47330] = sym_comment;
	v->a[47331] = actions(1469);
	v->a[47332] = 1;
	v->a[47333] = anon_sym_LPAREN;
	v->a[47334] = actions(1471);
	v->a[47335] = 1;
	v->a[47336] = anon_sym_BANG;
	v->a[47337] = actions(1479);
	v->a[47338] = 1;
	v->a[47339] = anon_sym_TILDE;
	small_parse_table_2367(v);
}

void	small_parse_table_2367(t_small_parse_table_array *v)
{
	v->a[47340] = actions(1481);
	v->a[47341] = 1;
	v->a[47342] = anon_sym_DOLLAR;
	v->a[47343] = actions(1483);
	v->a[47344] = 1;
	v->a[47345] = anon_sym_DQUOTE;
	v->a[47346] = actions(1487);
	v->a[47347] = 1;
	v->a[47348] = anon_sym_DOLLAR_LBRACE;
	v->a[47349] = actions(1489);
	v->a[47350] = 1;
	v->a[47351] = anon_sym_DOLLAR_LPAREN;
	v->a[47352] = actions(1491);
	v->a[47353] = 1;
	v->a[47354] = anon_sym_BQUOTE;
	v->a[47355] = actions(1493);
	v->a[47356] = 1;
	v->a[47357] = sym_variable_name;
	v->a[47358] = actions(1475);
	v->a[47359] = 2;
	small_parse_table_2368(v);
}

void	small_parse_table_2368(t_small_parse_table_array *v)
{
	v->a[47360] = anon_sym_PLUS_PLUS;
	v->a[47361] = anon_sym_DASH_DASH;
	v->a[47362] = actions(1477);
	v->a[47363] = 2;
	v->a[47364] = anon_sym_DASH2;
	v->a[47365] = anon_sym_PLUS2;
	v->a[47366] = actions(1485);
	v->a[47367] = 2;
	v->a[47368] = sym_number;
	v->a[47369] = aux_sym__simple_variable_name_token1;
	v->a[47370] = state(194);
	v->a[47371] = 3;
	v->a[47372] = sym_string;
	v->a[47373] = sym_simple_expansion;
	v->a[47374] = sym_expansion;
	v->a[47375] = state(223);
	v->a[47376] = 8;
	v->a[47377] = sym__arithmetic_expression;
	v->a[47378] = sym_arithmetic_literal;
	v->a[47379] = sym_arithmetic_binary_expression;
	small_parse_table_2369(v);
}

void	small_parse_table_2369(t_small_parse_table_array *v)
{
	v->a[47380] = sym_arithmetic_ternary_expression;
	v->a[47381] = sym_arithmetic_unary_expression;
	v->a[47382] = sym_arithmetic_postfix_expression;
	v->a[47383] = sym_arithmetic_parenthesized_expression;
	v->a[47384] = sym_command_substitution;
	v->a[47385] = 15;
	v->a[47386] = actions(501);
	v->a[47387] = 1;
	v->a[47388] = sym_comment;
	v->a[47389] = actions(1692);
	v->a[47390] = 1;
	v->a[47391] = anon_sym_LPAREN;
	v->a[47392] = actions(1694);
	v->a[47393] = 1;
	v->a[47394] = anon_sym_BANG;
	v->a[47395] = actions(1700);
	v->a[47396] = 1;
	v->a[47397] = anon_sym_TILDE;
	v->a[47398] = actions(1702);
	v->a[47399] = 1;
	small_parse_table_2370(v);
}

/* EOF small_parse_table_473.c */
