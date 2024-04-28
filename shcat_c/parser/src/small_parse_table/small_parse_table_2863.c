/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2863.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14315(t_small_parse_table_array *v)
{
	v->a[286300] = anon_sym_GT_AMP_DASH;
	v->a[286301] = anon_sym_LT_LT_DASH;
	v->a[286302] = aux_sym_concatenation_token1;
	v->a[286303] = 17;
	v->a[286304] = actions(3);
	v->a[286305] = 1;
	v->a[286306] = sym_comment;
	v->a[286307] = actions(7793);
	v->a[286308] = 1;
	v->a[286309] = aux_sym_number_token1;
	v->a[286310] = actions(7795);
	v->a[286311] = 1;
	v->a[286312] = aux_sym_number_token2;
	v->a[286313] = actions(12543);
	v->a[286314] = 1;
	v->a[286315] = anon_sym_LPAREN;
	v->a[286316] = actions(12547);
	v->a[286317] = 1;
	v->a[286318] = anon_sym_DOLLAR_LBRACK;
	v->a[286319] = actions(12551);
	small_parse_table_14316(v);
}

void	small_parse_table_14316(t_small_parse_table_array *v)
{
	v->a[286320] = 1;
	v->a[286321] = anon_sym_DOLLAR_LBRACE;
	v->a[286322] = actions(12555);
	v->a[286323] = 1;
	v->a[286324] = anon_sym_DOLLAR_LPAREN;
	v->a[286325] = actions(12557);
	v->a[286326] = 1;
	v->a[286327] = anon_sym_BQUOTE;
	v->a[286328] = actions(12559);
	v->a[286329] = 1;
	v->a[286330] = anon_sym_DOLLAR_BQUOTE;
	v->a[286331] = actions(12854);
	v->a[286332] = 1;
	v->a[286333] = aux_sym_heredoc_redirect_token1;
	v->a[286334] = actions(12856);
	v->a[286335] = 1;
	v->a[286336] = anon_sym_RBRACE3;
	v->a[286337] = actions(12858);
	v->a[286338] = 1;
	v->a[286339] = aux_sym__simple_variable_name_token1;
	small_parse_table_14317(v);
}

void	small_parse_table_14317(t_small_parse_table_array *v)
{
	v->a[286340] = state(6259);
	v->a[286341] = 1;
	v->a[286342] = sym__expansion_max_length_binary_expression;
	v->a[286343] = state(6470);
	v->a[286344] = 1;
	v->a[286345] = sym__expansion_max_length_expression;
	v->a[286346] = actions(12541);
	v->a[286347] = 2;
	v->a[286348] = anon_sym_LPAREN_LPAREN;
	v->a[286349] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[286350] = state(6258);
	v->a[286351] = 2;
	v->a[286352] = sym_number;
	v->a[286353] = sym_expansion;
	v->a[286354] = state(7022);
	v->a[286355] = 3;
	v->a[286356] = sym_parenthesized_expression;
	v->a[286357] = sym_arithmetic_expansion;
	v->a[286358] = sym_command_substitution;
	v->a[286359] = 3;
	small_parse_table_14318(v);
}

void	small_parse_table_14318(t_small_parse_table_array *v)
{
	v->a[286360] = actions(71);
	v->a[286361] = 1;
	v->a[286362] = sym_comment;
	v->a[286363] = actions(1340);
	v->a[286364] = 7;
	v->a[286365] = anon_sym_PIPE;
	v->a[286366] = anon_sym_LT;
	v->a[286367] = anon_sym_GT;
	v->a[286368] = anon_sym_LT_LT;
	v->a[286369] = anon_sym_AMP_GT;
	v->a[286370] = anon_sym_LT_AMP;
	v->a[286371] = anon_sym_GT_AMP;
	v->a[286372] = actions(1342);
	v->a[286373] = 13;
	v->a[286374] = sym_file_descriptor;
	v->a[286375] = sym__concat;
	v->a[286376] = anon_sym_PIPE_PIPE;
	v->a[286377] = anon_sym_AMP_AMP;
	v->a[286378] = anon_sym_GT_GT;
	v->a[286379] = anon_sym_PIPE_AMP;
	small_parse_table_14319(v);
}

void	small_parse_table_14319(t_small_parse_table_array *v)
{
	v->a[286380] = anon_sym_AMP_GT_GT;
	v->a[286381] = anon_sym_GT_PIPE;
	v->a[286382] = anon_sym_LT_AMP_DASH;
	v->a[286383] = anon_sym_GT_AMP_DASH;
	v->a[286384] = anon_sym_LT_LT_DASH;
	v->a[286385] = anon_sym_LT_LT_LT;
	v->a[286386] = aux_sym_concatenation_token1;
	v->a[286387] = 3;
	v->a[286388] = actions(71);
	v->a[286389] = 1;
	v->a[286390] = sym_comment;
	v->a[286391] = actions(1296);
	v->a[286392] = 7;
	v->a[286393] = anon_sym_PIPE;
	v->a[286394] = anon_sym_LT;
	v->a[286395] = anon_sym_GT;
	v->a[286396] = anon_sym_LT_LT;
	v->a[286397] = anon_sym_AMP_GT;
	v->a[286398] = anon_sym_LT_AMP;
	v->a[286399] = anon_sym_GT_AMP;
	small_parse_table_14320(v);
}

/* EOF small_parse_table_2863.c */
