/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_443.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2215(t_small_parse_table_array *v)
{
	v->a[44300] = 1;
	v->a[44301] = anon_sym_DQUOTE;
	v->a[44302] = actions(1487);
	v->a[44303] = 1;
	v->a[44304] = anon_sym_DOLLAR_LBRACE;
	v->a[44305] = actions(1489);
	v->a[44306] = 1;
	v->a[44307] = anon_sym_DOLLAR_LPAREN;
	v->a[44308] = actions(1491);
	v->a[44309] = 1;
	v->a[44310] = anon_sym_BQUOTE;
	v->a[44311] = actions(1493);
	v->a[44312] = 1;
	v->a[44313] = sym_variable_name;
	v->a[44314] = actions(1591);
	v->a[44315] = 1;
	v->a[44316] = anon_sym_RPAREN_RPAREN;
	v->a[44317] = actions(1475);
	v->a[44318] = 2;
	v->a[44319] = anon_sym_PLUS_PLUS;
	small_parse_table_2216(v);
}

void	small_parse_table_2216(t_small_parse_table_array *v)
{
	v->a[44320] = anon_sym_DASH_DASH;
	v->a[44321] = actions(1477);
	v->a[44322] = 2;
	v->a[44323] = anon_sym_DASH2;
	v->a[44324] = anon_sym_PLUS2;
	v->a[44325] = actions(1485);
	v->a[44326] = 2;
	v->a[44327] = sym_number;
	v->a[44328] = aux_sym__simple_variable_name_token1;
	v->a[44329] = state(194);
	v->a[44330] = 3;
	v->a[44331] = sym_string;
	v->a[44332] = sym_simple_expansion;
	v->a[44333] = sym_expansion;
	v->a[44334] = state(264);
	v->a[44335] = 8;
	v->a[44336] = sym__arithmetic_expression;
	v->a[44337] = sym_arithmetic_literal;
	v->a[44338] = sym_arithmetic_binary_expression;
	v->a[44339] = sym_arithmetic_ternary_expression;
	small_parse_table_2217(v);
}

void	small_parse_table_2217(t_small_parse_table_array *v)
{
	v->a[44340] = sym_arithmetic_unary_expression;
	v->a[44341] = sym_arithmetic_postfix_expression;
	v->a[44342] = sym_arithmetic_parenthesized_expression;
	v->a[44343] = sym_command_substitution;
	v->a[44344] = 12;
	v->a[44345] = actions(3);
	v->a[44346] = 1;
	v->a[44347] = sym_comment;
	v->a[44348] = actions(678);
	v->a[44349] = 1;
	v->a[44350] = sym_file_descriptor;
	v->a[44351] = actions(1504);
	v->a[44352] = 1;
	v->a[44353] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44354] = actions(1506);
	v->a[44355] = 1;
	v->a[44356] = anon_sym_DOLLAR;
	v->a[44357] = actions(1508);
	v->a[44358] = 1;
	v->a[44359] = anon_sym_DQUOTE;
	small_parse_table_2218(v);
}

void	small_parse_table_2218(t_small_parse_table_array *v)
{
	v->a[44360] = actions(1510);
	v->a[44361] = 1;
	v->a[44362] = anon_sym_DOLLAR_LBRACE;
	v->a[44363] = actions(1512);
	v->a[44364] = 1;
	v->a[44365] = anon_sym_DOLLAR_LPAREN;
	v->a[44366] = actions(1514);
	v->a[44367] = 1;
	v->a[44368] = anon_sym_BQUOTE;
	v->a[44369] = state(717);
	v->a[44370] = 2;
	v->a[44371] = sym_concatenation;
	v->a[44372] = aux_sym_for_statement_repeat1;
	v->a[44373] = actions(1502);
	v->a[44374] = 3;
	v->a[44375] = sym_raw_string;
	v->a[44376] = sym_number;
	v->a[44377] = sym_word;
	v->a[44378] = state(902);
	v->a[44379] = 5;
	small_parse_table_2219(v);
}

void	small_parse_table_2219(t_small_parse_table_array *v)
{
	v->a[44380] = sym_arithmetic_expansion;
	v->a[44381] = sym_string;
	v->a[44382] = sym_simple_expansion;
	v->a[44383] = sym_expansion;
	v->a[44384] = sym_command_substitution;
	v->a[44385] = actions(676);
	v->a[44386] = 10;
	v->a[44387] = anon_sym_AMP_AMP;
	v->a[44388] = anon_sym_PIPE_PIPE;
	v->a[44389] = anon_sym_LT;
	v->a[44390] = anon_sym_GT;
	v->a[44391] = anon_sym_GT_GT;
	v->a[44392] = anon_sym_LT_AMP;
	v->a[44393] = anon_sym_GT_AMP;
	v->a[44394] = anon_sym_GT_PIPE;
	v->a[44395] = anon_sym_LT_GT;
	v->a[44396] = aux_sym_heredoc_redirect_token1;
	v->a[44397] = 12;
	v->a[44398] = actions(3);
	v->a[44399] = 1;
	small_parse_table_2220(v);
}

/* EOF small_parse_table_443.c */
