/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_343.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1715(t_small_parse_table_array *v)
{
	v->a[34300] = sym__arithmetic_expression;
	v->a[34301] = sym_arithmetic_literal;
	v->a[34302] = sym_arithmetic_binary_expression;
	v->a[34303] = sym_arithmetic_ternary_expression;
	v->a[34304] = sym_arithmetic_unary_expression;
	v->a[34305] = sym_arithmetic_postfix_expression;
	v->a[34306] = sym_arithmetic_parenthesized_expression;
	v->a[34307] = 10;
	v->a[34308] = actions(1436);
	v->a[34309] = 1;
	v->a[34310] = sym_comment;
	v->a[34311] = actions(1440);
	v->a[34312] = 1;
	v->a[34313] = anon_sym_LPAREN;
	v->a[34314] = actions(1444);
	v->a[34315] = 1;
	v->a[34316] = anon_sym_DOLLAR;
	v->a[34317] = actions(1446);
	v->a[34318] = 1;
	v->a[34319] = anon_sym_DQUOTE;
	small_parse_table_1716(v);
}

void	small_parse_table_1716(t_small_parse_table_array *v)
{
	v->a[34320] = actions(1450);
	v->a[34321] = 1;
	v->a[34322] = anon_sym_DOLLAR_LBRACE;
	v->a[34323] = actions(1452);
	v->a[34324] = 1;
	v->a[34325] = sym_variable_name;
	v->a[34326] = actions(1442);
	v->a[34327] = 2;
	v->a[34328] = anon_sym_DASH2;
	v->a[34329] = anon_sym_PLUS2;
	v->a[34330] = actions(1448);
	v->a[34331] = 2;
	v->a[34332] = sym_number;
	v->a[34333] = aux_sym__simple_variable_name_token1;
	v->a[34334] = state(1340);
	v->a[34335] = 3;
	v->a[34336] = sym_string;
	v->a[34337] = sym_simple_expansion;
	v->a[34338] = sym_expansion;
	v->a[34339] = state(1361);
	small_parse_table_1717(v);
}

void	small_parse_table_1717(t_small_parse_table_array *v)
{
	v->a[34340] = 7;
	v->a[34341] = sym__arithmetic_expression;
	v->a[34342] = sym_arithmetic_literal;
	v->a[34343] = sym_arithmetic_binary_expression;
	v->a[34344] = sym_arithmetic_ternary_expression;
	v->a[34345] = sym_arithmetic_unary_expression;
	v->a[34346] = sym_arithmetic_postfix_expression;
	v->a[34347] = sym_arithmetic_parenthesized_expression;
	v->a[34348] = 5;
	v->a[34349] = actions(3);
	v->a[34350] = 1;
	v->a[34351] = sym_comment;
	v->a[34352] = actions(1456);
	v->a[34353] = 1;
	v->a[34354] = aux_sym_concatenation_token1;
	v->a[34355] = actions(1459);
	v->a[34356] = 1;
	v->a[34357] = sym__concat;
	v->a[34358] = state(630);
	v->a[34359] = 1;
	small_parse_table_1718(v);
}

void	small_parse_table_1718(t_small_parse_table_array *v)
{
	v->a[34360] = aux_sym_concatenation_repeat1;
	v->a[34361] = actions(973);
	v->a[34362] = 16;
	v->a[34363] = anon_sym_PIPE;
	v->a[34364] = anon_sym_AMP_AMP;
	v->a[34365] = anon_sym_PIPE_PIPE;
	v->a[34366] = anon_sym_LT;
	v->a[34367] = anon_sym_GT;
	v->a[34368] = anon_sym_GT_GT;
	v->a[34369] = anon_sym_LT_LT;
	v->a[34370] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34371] = anon_sym_DOLLAR;
	v->a[34372] = anon_sym_DQUOTE;
	v->a[34373] = sym_raw_string;
	v->a[34374] = sym_number;
	v->a[34375] = anon_sym_DOLLAR_LBRACE;
	v->a[34376] = anon_sym_DOLLAR_LPAREN;
	v->a[34377] = anon_sym_BQUOTE;
	v->a[34378] = sym_word;
	v->a[34379] = 3;
	small_parse_table_1719(v);
}

void	small_parse_table_1719(t_small_parse_table_array *v)
{
	v->a[34380] = actions(3);
	v->a[34381] = 1;
	v->a[34382] = sym_comment;
	v->a[34383] = actions(1046);
	v->a[34384] = 2;
	v->a[34385] = sym__concat;
	v->a[34386] = sym__bare_dollar;
	v->a[34387] = actions(1048);
	v->a[34388] = 17;
	v->a[34389] = anon_sym_PIPE;
	v->a[34390] = anon_sym_AMP_AMP;
	v->a[34391] = anon_sym_PIPE_PIPE;
	v->a[34392] = anon_sym_LT;
	v->a[34393] = anon_sym_GT;
	v->a[34394] = anon_sym_GT_GT;
	v->a[34395] = anon_sym_LT_LT;
	v->a[34396] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34397] = aux_sym_concatenation_token1;
	v->a[34398] = anon_sym_DOLLAR;
	v->a[34399] = anon_sym_DQUOTE;
	small_parse_table_1720(v);
}

/* EOF small_parse_table_343.c */
