/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_323.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1615(t_small_parse_table_array *v)
{
	v->a[32300] = anon_sym_PIPE;
	v->a[32301] = anon_sym_SEMI_SEMI;
	v->a[32302] = anon_sym_AMP_AMP;
	v->a[32303] = anon_sym_PIPE_PIPE;
	v->a[32304] = anon_sym_LT;
	v->a[32305] = anon_sym_GT;
	v->a[32306] = anon_sym_GT_GT;
	v->a[32307] = anon_sym_AMP_GT;
	v->a[32308] = anon_sym_AMP_GT_GT;
	v->a[32309] = anon_sym_LT_AMP;
	v->a[32310] = anon_sym_GT_AMP;
	v->a[32311] = anon_sym_GT_PIPE;
	v->a[32312] = anon_sym_LT_AMP_DASH;
	v->a[32313] = anon_sym_GT_AMP_DASH;
	v->a[32314] = anon_sym_LT_LT;
	v->a[32315] = anon_sym_LT_LT_DASH;
	v->a[32316] = aux_sym_heredoc_redirect_token1;
	v->a[32317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32318] = anon_sym_AMP;
	v->a[32319] = anon_sym_DOLLAR;
	small_parse_table_1616(v);
}

void	small_parse_table_1616(t_small_parse_table_array *v)
{
	v->a[32320] = anon_sym_DQUOTE;
	v->a[32321] = sym_raw_string;
	v->a[32322] = aux_sym_number_token1;
	v->a[32323] = aux_sym_number_token2;
	v->a[32324] = anon_sym_DOLLAR_LBRACE;
	v->a[32325] = anon_sym_DOLLAR_LPAREN;
	v->a[32326] = anon_sym_BQUOTE;
	v->a[32327] = sym_word;
	v->a[32328] = anon_sym_SEMI;
	v->a[32329] = 3;
	v->a[32330] = actions(3);
	v->a[32331] = 1;
	v->a[32332] = sym_comment;
	v->a[32333] = actions(1241);
	v->a[32334] = 3;
	v->a[32335] = sym_file_descriptor;
	v->a[32336] = sym__concat;
	v->a[32337] = sym__bare_dollar;
	v->a[32338] = actions(1239);
	v->a[32339] = 32;
	small_parse_table_1617(v);
}

void	small_parse_table_1617(t_small_parse_table_array *v)
{
	v->a[32340] = anon_sym_esac;
	v->a[32341] = anon_sym_LPAREN;
	v->a[32342] = anon_sym_PIPE;
	v->a[32343] = anon_sym_SEMI_SEMI;
	v->a[32344] = anon_sym_AMP_AMP;
	v->a[32345] = anon_sym_PIPE_PIPE;
	v->a[32346] = anon_sym_LT;
	v->a[32347] = anon_sym_GT;
	v->a[32348] = anon_sym_GT_GT;
	v->a[32349] = anon_sym_AMP_GT;
	v->a[32350] = anon_sym_AMP_GT_GT;
	v->a[32351] = anon_sym_LT_AMP;
	v->a[32352] = anon_sym_GT_AMP;
	v->a[32353] = anon_sym_GT_PIPE;
	v->a[32354] = anon_sym_LT_AMP_DASH;
	v->a[32355] = anon_sym_GT_AMP_DASH;
	v->a[32356] = anon_sym_LT_LT;
	v->a[32357] = anon_sym_LT_LT_DASH;
	v->a[32358] = aux_sym_heredoc_redirect_token1;
	v->a[32359] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1618(v);
}

void	small_parse_table_1618(t_small_parse_table_array *v)
{
	v->a[32360] = anon_sym_AMP;
	v->a[32361] = aux_sym_concatenation_token1;
	v->a[32362] = anon_sym_DOLLAR;
	v->a[32363] = anon_sym_DQUOTE;
	v->a[32364] = sym_raw_string;
	v->a[32365] = aux_sym_number_token1;
	v->a[32366] = aux_sym_number_token2;
	v->a[32367] = anon_sym_DOLLAR_LBRACE;
	v->a[32368] = anon_sym_DOLLAR_LPAREN;
	v->a[32369] = anon_sym_BQUOTE;
	v->a[32370] = sym_word;
	v->a[32371] = anon_sym_SEMI;
	v->a[32372] = 6;
	v->a[32373] = actions(3);
	v->a[32374] = 1;
	v->a[32375] = sym_comment;
	v->a[32376] = actions(1323);
	v->a[32377] = 1;
	v->a[32378] = aux_sym_concatenation_token1;
	v->a[32379] = actions(1325);
	small_parse_table_1619(v);
}

void	small_parse_table_1619(t_small_parse_table_array *v)
{
	v->a[32380] = 1;
	v->a[32381] = sym__concat;
	v->a[32382] = state(372);
	v->a[32383] = 1;
	v->a[32384] = aux_sym_concatenation_repeat1;
	v->a[32385] = actions(1261);
	v->a[32386] = 2;
	v->a[32387] = sym_file_descriptor;
	v->a[32388] = sym__bare_dollar;
	v->a[32389] = actions(1259);
	v->a[32390] = 30;
	v->a[32391] = anon_sym_esac;
	v->a[32392] = anon_sym_PIPE;
	v->a[32393] = anon_sym_SEMI_SEMI;
	v->a[32394] = anon_sym_AMP_AMP;
	v->a[32395] = anon_sym_PIPE_PIPE;
	v->a[32396] = anon_sym_LT;
	v->a[32397] = anon_sym_GT;
	v->a[32398] = anon_sym_GT_GT;
	v->a[32399] = anon_sym_AMP_GT;
	small_parse_table_1620(v);
}

/* EOF small_parse_table_323.c */
