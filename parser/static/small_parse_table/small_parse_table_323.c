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
	v->a[32300] = sym_word;
	v->a[32301] = state(348);
	v->a[32302] = 5;
	v->a[32303] = sym_arithmetic_expansion;
	v->a[32304] = sym_string;
	v->a[32305] = sym_simple_expansion;
	v->a[32306] = sym_expansion;
	v->a[32307] = sym_command_substitution;
	v->a[32308] = actions(1162);
	v->a[32309] = 7;
	v->a[32310] = anon_sym_LT;
	v->a[32311] = anon_sym_GT;
	v->a[32312] = anon_sym_GT_GT;
	v->a[32313] = anon_sym_LT_AMP;
	v->a[32314] = anon_sym_GT_AMP;
	v->a[32315] = anon_sym_GT_PIPE;
	v->a[32316] = anon_sym_LT_GT;
	v->a[32317] = 6;
	v->a[32318] = actions(3);
	v->a[32319] = 1;
	small_parse_table_1616(v);
}

void	small_parse_table_1616(t_small_parse_table_array *v)
{
	v->a[32320] = sym_comment;
	v->a[32321] = actions(1221);
	v->a[32322] = 1;
	v->a[32323] = aux_sym_concatenation_token1;
	v->a[32324] = actions(1224);
	v->a[32325] = 1;
	v->a[32326] = sym__concat;
	v->a[32327] = state(419);
	v->a[32328] = 1;
	v->a[32329] = aux_sym_concatenation_repeat1;
	v->a[32330] = actions(1092);
	v->a[32331] = 2;
	v->a[32332] = sym_file_descriptor;
	v->a[32333] = sym_variable_name;
	v->a[32334] = actions(1094);
	v->a[32335] = 26;
	v->a[32336] = anon_sym_PIPE;
	v->a[32337] = anon_sym_RPAREN;
	v->a[32338] = anon_sym_SEMI_SEMI;
	v->a[32339] = anon_sym_AMP_AMP;
	small_parse_table_1617(v);
}

void	small_parse_table_1617(t_small_parse_table_array *v)
{
	v->a[32340] = anon_sym_PIPE_PIPE;
	v->a[32341] = anon_sym_LT;
	v->a[32342] = anon_sym_GT;
	v->a[32343] = anon_sym_GT_GT;
	v->a[32344] = anon_sym_LT_AMP;
	v->a[32345] = anon_sym_GT_AMP;
	v->a[32346] = anon_sym_GT_PIPE;
	v->a[32347] = anon_sym_LT_GT;
	v->a[32348] = anon_sym_LT_LT;
	v->a[32349] = anon_sym_LT_LT_DASH;
	v->a[32350] = aux_sym_heredoc_redirect_token1;
	v->a[32351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32352] = anon_sym_AMP;
	v->a[32353] = anon_sym_DOLLAR;
	v->a[32354] = anon_sym_DQUOTE;
	v->a[32355] = sym_raw_string;
	v->a[32356] = sym_number;
	v->a[32357] = anon_sym_DOLLAR_LBRACE;
	v->a[32358] = anon_sym_DOLLAR_LPAREN;
	v->a[32359] = anon_sym_BQUOTE;
	small_parse_table_1618(v);
}

void	small_parse_table_1618(t_small_parse_table_array *v)
{
	v->a[32360] = sym_word;
	v->a[32361] = anon_sym_SEMI;
	v->a[32362] = 6;
	v->a[32363] = actions(3);
	v->a[32364] = 1;
	v->a[32365] = sym_comment;
	v->a[32366] = actions(1150);
	v->a[32367] = 1;
	v->a[32368] = aux_sym_concatenation_token1;
	v->a[32369] = actions(1231);
	v->a[32370] = 1;
	v->a[32371] = sym__concat;
	v->a[32372] = state(372);
	v->a[32373] = 1;
	v->a[32374] = aux_sym_concatenation_repeat1;
	v->a[32375] = actions(1229);
	v->a[32376] = 2;
	v->a[32377] = sym_file_descriptor;
	v->a[32378] = sym__bare_dollar;
	v->a[32379] = actions(1227);
	small_parse_table_1619(v);
}

void	small_parse_table_1619(t_small_parse_table_array *v)
{
	v->a[32380] = 26;
	v->a[32381] = anon_sym_esac;
	v->a[32382] = anon_sym_PIPE;
	v->a[32383] = anon_sym_SEMI_SEMI;
	v->a[32384] = anon_sym_AMP_AMP;
	v->a[32385] = anon_sym_PIPE_PIPE;
	v->a[32386] = anon_sym_LT;
	v->a[32387] = anon_sym_GT;
	v->a[32388] = anon_sym_GT_GT;
	v->a[32389] = anon_sym_LT_AMP;
	v->a[32390] = anon_sym_GT_AMP;
	v->a[32391] = anon_sym_GT_PIPE;
	v->a[32392] = anon_sym_LT_GT;
	v->a[32393] = anon_sym_LT_LT;
	v->a[32394] = anon_sym_LT_LT_DASH;
	v->a[32395] = aux_sym_heredoc_redirect_token1;
	v->a[32396] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32397] = anon_sym_AMP;
	v->a[32398] = anon_sym_DOLLAR;
	v->a[32399] = anon_sym_DQUOTE;
	small_parse_table_1620(v);
}

/* EOF small_parse_table_323.c */
