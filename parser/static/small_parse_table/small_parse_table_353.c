/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_353.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1765(t_small_parse_table_array *v)
{
	v->a[35300] = 17;
	v->a[35301] = anon_sym_PIPE;
	v->a[35302] = anon_sym_AMP_AMP;
	v->a[35303] = anon_sym_PIPE_PIPE;
	v->a[35304] = anon_sym_LT;
	v->a[35305] = anon_sym_GT;
	v->a[35306] = anon_sym_GT_GT;
	v->a[35307] = anon_sym_LT_LT;
	v->a[35308] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35309] = aux_sym_concatenation_token1;
	v->a[35310] = anon_sym_DOLLAR;
	v->a[35311] = anon_sym_DQUOTE;
	v->a[35312] = sym_raw_string;
	v->a[35313] = sym_number;
	v->a[35314] = anon_sym_DOLLAR_LBRACE;
	v->a[35315] = anon_sym_DOLLAR_LPAREN;
	v->a[35316] = anon_sym_BQUOTE;
	v->a[35317] = sym_word;
	v->a[35318] = 3;
	v->a[35319] = actions(3);
	small_parse_table_1766(v);
}

void	small_parse_table_1766(t_small_parse_table_array *v)
{
	v->a[35320] = 1;
	v->a[35321] = sym_comment;
	v->a[35322] = actions(1126);
	v->a[35323] = 1;
	v->a[35324] = sym__concat;
	v->a[35325] = actions(1124);
	v->a[35326] = 18;
	v->a[35327] = anon_sym_SEMI_SEMI;
	v->a[35328] = anon_sym_AMP_AMP;
	v->a[35329] = anon_sym_PIPE_PIPE;
	v->a[35330] = anon_sym_LT;
	v->a[35331] = anon_sym_GT;
	v->a[35332] = anon_sym_GT_GT;
	v->a[35333] = aux_sym_heredoc_redirect_token1;
	v->a[35334] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35335] = aux_sym_concatenation_token1;
	v->a[35336] = anon_sym_DOLLAR;
	v->a[35337] = anon_sym_DQUOTE;
	v->a[35338] = sym_raw_string;
	v->a[35339] = sym_number;
	small_parse_table_1767(v);
}

void	small_parse_table_1767(t_small_parse_table_array *v)
{
	v->a[35340] = anon_sym_DOLLAR_LBRACE;
	v->a[35341] = anon_sym_DOLLAR_LPAREN;
	v->a[35342] = anon_sym_BQUOTE;
	v->a[35343] = sym_word;
	v->a[35344] = anon_sym_SEMI;
	v->a[35345] = 10;
	v->a[35346] = actions(1436);
	v->a[35347] = 1;
	v->a[35348] = sym_comment;
	v->a[35349] = actions(1440);
	v->a[35350] = 1;
	v->a[35351] = anon_sym_LPAREN;
	v->a[35352] = actions(1444);
	v->a[35353] = 1;
	v->a[35354] = anon_sym_DOLLAR;
	v->a[35355] = actions(1446);
	v->a[35356] = 1;
	v->a[35357] = anon_sym_DQUOTE;
	v->a[35358] = actions(1450);
	v->a[35359] = 1;
	small_parse_table_1768(v);
}

void	small_parse_table_1768(t_small_parse_table_array *v)
{
	v->a[35360] = anon_sym_DOLLAR_LBRACE;
	v->a[35361] = actions(1452);
	v->a[35362] = 1;
	v->a[35363] = sym_variable_name;
	v->a[35364] = actions(1442);
	v->a[35365] = 2;
	v->a[35366] = anon_sym_DASH2;
	v->a[35367] = anon_sym_PLUS2;
	v->a[35368] = actions(1448);
	v->a[35369] = 2;
	v->a[35370] = sym_number;
	v->a[35371] = aux_sym__simple_variable_name_token1;
	v->a[35372] = state(1340);
	v->a[35373] = 3;
	v->a[35374] = sym_string;
	v->a[35375] = sym_simple_expansion;
	v->a[35376] = sym_expansion;
	v->a[35377] = state(1373);
	v->a[35378] = 7;
	v->a[35379] = sym__arithmetic_expression;
	small_parse_table_1769(v);
}

void	small_parse_table_1769(t_small_parse_table_array *v)
{
	v->a[35380] = sym_arithmetic_literal;
	v->a[35381] = sym_arithmetic_binary_expression;
	v->a[35382] = sym_arithmetic_ternary_expression;
	v->a[35383] = sym_arithmetic_unary_expression;
	v->a[35384] = sym_arithmetic_postfix_expression;
	v->a[35385] = sym_arithmetic_parenthesized_expression;
	v->a[35386] = 3;
	v->a[35387] = actions(3);
	v->a[35388] = 1;
	v->a[35389] = sym_comment;
	v->a[35390] = actions(1126);
	v->a[35391] = 2;
	v->a[35392] = sym__concat;
	v->a[35393] = sym_variable_name;
	v->a[35394] = actions(1124);
	v->a[35395] = 17;
	v->a[35396] = anon_sym_PIPE;
	v->a[35397] = anon_sym_AMP_AMP;
	v->a[35398] = anon_sym_PIPE_PIPE;
	v->a[35399] = anon_sym_LT;
	small_parse_table_1770(v);
}

/* EOF small_parse_table_353.c */
