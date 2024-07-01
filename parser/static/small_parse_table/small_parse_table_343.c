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
	v->a[34300] = anon_sym_GT_GT;
	v->a[34301] = anon_sym_LT_AMP;
	v->a[34302] = anon_sym_GT_AMP;
	v->a[34303] = anon_sym_GT_PIPE;
	v->a[34304] = anon_sym_LT_AMP_DASH;
	v->a[34305] = anon_sym_GT_AMP_DASH;
	v->a[34306] = anon_sym_LT_LT;
	v->a[34307] = anon_sym_LT_LT_DASH;
	v->a[34308] = aux_sym_heredoc_redirect_token1;
	v->a[34309] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34310] = anon_sym_AMP;
	v->a[34311] = aux_sym_concatenation_token1;
	v->a[34312] = anon_sym_DOLLAR;
	v->a[34313] = anon_sym_DQUOTE;
	v->a[34314] = sym_raw_string;
	v->a[34315] = sym_number;
	v->a[34316] = anon_sym_DOLLAR_LBRACE;
	v->a[34317] = anon_sym_DOLLAR_LPAREN;
	v->a[34318] = anon_sym_BQUOTE;
	v->a[34319] = sym_word;
	small_parse_table_1716(v);
}

void	small_parse_table_1716(t_small_parse_table_array *v)
{
	v->a[34320] = anon_sym_SEMI;
	v->a[34321] = 14;
	v->a[34322] = actions(3);
	v->a[34323] = 1;
	v->a[34324] = sym_comment;
	v->a[34325] = actions(459);
	v->a[34326] = 1;
	v->a[34327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34328] = actions(461);
	v->a[34329] = 1;
	v->a[34330] = anon_sym_DOLLAR;
	v->a[34331] = actions(463);
	v->a[34332] = 1;
	v->a[34333] = anon_sym_DQUOTE;
	v->a[34334] = actions(465);
	v->a[34335] = 1;
	v->a[34336] = anon_sym_DOLLAR_LBRACE;
	v->a[34337] = actions(467);
	v->a[34338] = 1;
	v->a[34339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1717(v);
}

void	small_parse_table_1717(t_small_parse_table_array *v)
{
	v->a[34340] = actions(469);
	v->a[34341] = 1;
	v->a[34342] = anon_sym_BQUOTE;
	v->a[34343] = actions(473);
	v->a[34344] = 1;
	v->a[34345] = sym__bare_dollar;
	v->a[34346] = actions(571);
	v->a[34347] = 1;
	v->a[34348] = sym_file_descriptor;
	v->a[34349] = state(457);
	v->a[34350] = 1;
	v->a[34351] = aux_sym_command_repeat2;
	v->a[34352] = state(718);
	v->a[34353] = 1;
	v->a[34354] = sym_concatenation;
	v->a[34355] = actions(988);
	v->a[34356] = 3;
	v->a[34357] = sym_raw_string;
	v->a[34358] = sym_number;
	v->a[34359] = sym_word;
	small_parse_table_1718(v);
}

void	small_parse_table_1718(t_small_parse_table_array *v)
{
	v->a[34360] = state(772);
	v->a[34361] = 5;
	v->a[34362] = sym_arithmetic_expansion;
	v->a[34363] = sym_string;
	v->a[34364] = sym_simple_expansion;
	v->a[34365] = sym_expansion;
	v->a[34366] = sym_command_substitution;
	v->a[34367] = actions(569);
	v->a[34368] = 14;
	v->a[34369] = anon_sym_PIPE;
	v->a[34370] = anon_sym_AMP_AMP;
	v->a[34371] = anon_sym_PIPE_PIPE;
	v->a[34372] = anon_sym_LT;
	v->a[34373] = anon_sym_GT;
	v->a[34374] = anon_sym_GT_GT;
	v->a[34375] = anon_sym_LT_AMP;
	v->a[34376] = anon_sym_GT_AMP;
	v->a[34377] = anon_sym_GT_PIPE;
	v->a[34378] = anon_sym_LT_AMP_DASH;
	v->a[34379] = anon_sym_GT_AMP_DASH;
	small_parse_table_1719(v);
}

void	small_parse_table_1719(t_small_parse_table_array *v)
{
	v->a[34380] = anon_sym_LT_LT;
	v->a[34381] = anon_sym_LT_LT_DASH;
	v->a[34382] = aux_sym_heredoc_redirect_token1;
	v->a[34383] = 3;
	v->a[34384] = actions(3);
	v->a[34385] = 1;
	v->a[34386] = sym_comment;
	v->a[34387] = actions(1283);
	v->a[34388] = 4;
	v->a[34389] = sym_file_descriptor;
	v->a[34390] = sym__concat;
	v->a[34391] = sym__bare_dollar;
	v->a[34392] = ts_builtin_sym_end;
	v->a[34393] = actions(1285);
	v->a[34394] = 28;
	v->a[34395] = anon_sym_LPAREN;
	v->a[34396] = anon_sym_PIPE;
	v->a[34397] = anon_sym_SEMI_SEMI;
	v->a[34398] = anon_sym_AMP_AMP;
	v->a[34399] = anon_sym_PIPE_PIPE;
	small_parse_table_1720(v);
}

/* EOF small_parse_table_343.c */
