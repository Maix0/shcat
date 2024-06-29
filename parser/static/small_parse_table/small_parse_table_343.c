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
	v->a[34300] = anon_sym_PIPE;
	v->a[34301] = anon_sym_SEMI_SEMI;
	v->a[34302] = anon_sym_AMP_AMP;
	v->a[34303] = anon_sym_PIPE_PIPE;
	v->a[34304] = anon_sym_LT;
	v->a[34305] = anon_sym_GT;
	v->a[34306] = anon_sym_GT_GT;
	v->a[34307] = anon_sym_AMP_GT;
	v->a[34308] = anon_sym_AMP_GT_GT;
	v->a[34309] = anon_sym_LT_AMP;
	v->a[34310] = anon_sym_GT_AMP;
	v->a[34311] = anon_sym_GT_PIPE;
	v->a[34312] = anon_sym_LT_AMP_DASH;
	v->a[34313] = anon_sym_GT_AMP_DASH;
	v->a[34314] = anon_sym_LT_LT;
	v->a[34315] = anon_sym_LT_LT_DASH;
	v->a[34316] = aux_sym_heredoc_redirect_token1;
	v->a[34317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34318] = anon_sym_AMP;
	v->a[34319] = aux_sym_concatenation_token1;
	small_parse_table_1716(v);
}

void	small_parse_table_1716(t_small_parse_table_array *v)
{
	v->a[34320] = anon_sym_DOLLAR;
	v->a[34321] = anon_sym_DQUOTE;
	v->a[34322] = sym_raw_string;
	v->a[34323] = sym_number;
	v->a[34324] = anon_sym_DOLLAR_LBRACE;
	v->a[34325] = anon_sym_DOLLAR_LPAREN;
	v->a[34326] = anon_sym_BQUOTE;
	v->a[34327] = sym_word;
	v->a[34328] = anon_sym_SEMI;
	v->a[34329] = 6;
	v->a[34330] = actions(3);
	v->a[34331] = 1;
	v->a[34332] = sym_comment;
	v->a[34333] = actions(385);
	v->a[34334] = 1;
	v->a[34335] = sym_file_descriptor;
	v->a[34336] = actions(1262);
	v->a[34337] = 1;
	v->a[34338] = sym_variable_name;
	v->a[34339] = actions(1260);
	small_parse_table_1717(v);
}

void	small_parse_table_1717(t_small_parse_table_array *v)
{
	v->a[34340] = 2;
	v->a[34341] = aux_sym__simple_variable_name_token1;
	v->a[34342] = aux_sym__multiline_variable_name_token1;
	v->a[34343] = actions(1258);
	v->a[34344] = 9;
	v->a[34345] = anon_sym_BANG;
	v->a[34346] = anon_sym_DASH;
	v->a[34347] = anon_sym_STAR;
	v->a[34348] = anon_sym_QMARK;
	v->a[34349] = anon_sym_DOLLAR;
	v->a[34350] = anon_sym_POUND;
	v->a[34351] = anon_sym_AT;
	v->a[34352] = anon_sym_0;
	v->a[34353] = anon_sym__;
	v->a[34354] = actions(379);
	v->a[34355] = 20;
	v->a[34356] = anon_sym_PIPE;
	v->a[34357] = anon_sym_RPAREN;
	v->a[34358] = anon_sym_SEMI_SEMI;
	v->a[34359] = anon_sym_AMP_AMP;
	small_parse_table_1718(v);
}

void	small_parse_table_1718(t_small_parse_table_array *v)
{
	v->a[34360] = anon_sym_PIPE_PIPE;
	v->a[34361] = anon_sym_LT;
	v->a[34362] = anon_sym_GT;
	v->a[34363] = anon_sym_GT_GT;
	v->a[34364] = anon_sym_AMP_GT;
	v->a[34365] = anon_sym_AMP_GT_GT;
	v->a[34366] = anon_sym_LT_AMP;
	v->a[34367] = anon_sym_GT_AMP;
	v->a[34368] = anon_sym_GT_PIPE;
	v->a[34369] = anon_sym_LT_AMP_DASH;
	v->a[34370] = anon_sym_GT_AMP_DASH;
	v->a[34371] = anon_sym_LT_LT;
	v->a[34372] = anon_sym_LT_LT_DASH;
	v->a[34373] = aux_sym_heredoc_redirect_token1;
	v->a[34374] = anon_sym_AMP;
	v->a[34375] = anon_sym_SEMI;
	v->a[34376] = 6;
	v->a[34377] = actions(3);
	v->a[34378] = 1;
	v->a[34379] = sym_comment;
	small_parse_table_1719(v);
}

void	small_parse_table_1719(t_small_parse_table_array *v)
{
	v->a[34380] = actions(988);
	v->a[34381] = 1;
	v->a[34382] = sym_file_descriptor;
	v->a[34383] = actions(1264);
	v->a[34384] = 1;
	v->a[34385] = aux_sym_concatenation_token1;
	v->a[34386] = actions(1267);
	v->a[34387] = 1;
	v->a[34388] = sym__concat;
	v->a[34389] = state(432);
	v->a[34390] = 1;
	v->a[34391] = aux_sym_concatenation_repeat1;
	v->a[34392] = actions(983);
	v->a[34393] = 29;
	v->a[34394] = anon_sym_esac;
	v->a[34395] = anon_sym_PIPE;
	v->a[34396] = anon_sym_SEMI_SEMI;
	v->a[34397] = anon_sym_AMP_AMP;
	v->a[34398] = anon_sym_PIPE_PIPE;
	v->a[34399] = anon_sym_LT;
	small_parse_table_1720(v);
}

/* EOF small_parse_table_343.c */
