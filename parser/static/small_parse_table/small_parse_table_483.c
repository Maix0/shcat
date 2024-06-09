/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_483.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2415(t_small_parse_table_array *v)
{
	v->a[48300] = anon_sym_AMP;
	v->a[48301] = anon_sym_SEMI;
	v->a[48302] = actions(1696);
	v->a[48303] = 10;
	v->a[48304] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48305] = anon_sym_DOLLAR;
	v->a[48306] = anon_sym_DQUOTE;
	v->a[48307] = sym_raw_string;
	v->a[48308] = aux_sym_number_token1;
	v->a[48309] = aux_sym_number_token2;
	v->a[48310] = anon_sym_DOLLAR_LBRACE;
	v->a[48311] = anon_sym_DOLLAR_LPAREN;
	v->a[48312] = anon_sym_BQUOTE;
	v->a[48313] = sym_word;
	v->a[48314] = actions(1703);
	v->a[48315] = 10;
	v->a[48316] = anon_sym_LT;
	v->a[48317] = anon_sym_GT;
	v->a[48318] = anon_sym_GT_GT;
	v->a[48319] = anon_sym_AMP_GT;
	small_parse_table_2416(v);
}

void	small_parse_table_2416(t_small_parse_table_array *v)
{
	v->a[48320] = anon_sym_AMP_GT_GT;
	v->a[48321] = anon_sym_LT_AMP;
	v->a[48322] = anon_sym_GT_AMP;
	v->a[48323] = anon_sym_GT_PIPE;
	v->a[48324] = anon_sym_LT_AMP_DASH;
	v->a[48325] = anon_sym_GT_AMP_DASH;
	v->a[48326] = 7;
	v->a[48327] = actions(3);
	v->a[48328] = 1;
	v->a[48329] = sym_comment;
	v->a[48330] = actions(1706);
	v->a[48331] = 1;
	v->a[48332] = sym_file_descriptor;
	v->a[48333] = actions(1709);
	v->a[48334] = 1;
	v->a[48335] = sym_variable_name;
	v->a[48336] = actions(1711);
	v->a[48337] = 1;
	v->a[48338] = anon_sym_RPAREN;
	v->a[48339] = actions(1698);
	small_parse_table_2417(v);
}

void	small_parse_table_2417(t_small_parse_table_array *v)
{
	v->a[48340] = 9;
	v->a[48341] = anon_sym_PIPE;
	v->a[48342] = anon_sym_SEMI_SEMI;
	v->a[48343] = anon_sym_AMP_AMP;
	v->a[48344] = anon_sym_PIPE_PIPE;
	v->a[48345] = anon_sym_LT_LT;
	v->a[48346] = anon_sym_LT_LT_DASH;
	v->a[48347] = aux_sym_heredoc_redirect_token1;
	v->a[48348] = anon_sym_AMP;
	v->a[48349] = anon_sym_SEMI;
	v->a[48350] = actions(1696);
	v->a[48351] = 10;
	v->a[48352] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48353] = anon_sym_DOLLAR;
	v->a[48354] = anon_sym_DQUOTE;
	v->a[48355] = sym_raw_string;
	v->a[48356] = aux_sym_number_token1;
	v->a[48357] = aux_sym_number_token2;
	v->a[48358] = anon_sym_DOLLAR_LBRACE;
	v->a[48359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2418(v);
}

void	small_parse_table_2418(t_small_parse_table_array *v)
{
	v->a[48360] = anon_sym_BQUOTE;
	v->a[48361] = sym_word;
	v->a[48362] = actions(1703);
	v->a[48363] = 10;
	v->a[48364] = anon_sym_LT;
	v->a[48365] = anon_sym_GT;
	v->a[48366] = anon_sym_GT_GT;
	v->a[48367] = anon_sym_AMP_GT;
	v->a[48368] = anon_sym_AMP_GT_GT;
	v->a[48369] = anon_sym_LT_AMP;
	v->a[48370] = anon_sym_GT_AMP;
	v->a[48371] = anon_sym_GT_PIPE;
	v->a[48372] = anon_sym_LT_AMP_DASH;
	v->a[48373] = anon_sym_GT_AMP_DASH;
	v->a[48374] = 5;
	v->a[48375] = actions(3);
	v->a[48376] = 1;
	v->a[48377] = sym_comment;
	v->a[48378] = actions(1716);
	v->a[48379] = 1;
	small_parse_table_2419(v);
}

void	small_parse_table_2419(t_small_parse_table_array *v)
{
	v->a[48380] = anon_sym_LF;
	v->a[48381] = state(689);
	v->a[48382] = 1;
	v->a[48383] = aux_sym__case_item_last_repeat2;
	v->a[48384] = actions(1719);
	v->a[48385] = 2;
	v->a[48386] = sym_file_descriptor;
	v->a[48387] = sym_variable_name;
	v->a[48388] = actions(1714);
	v->a[48389] = 28;
	v->a[48390] = anon_sym_for;
	v->a[48391] = anon_sym_while;
	v->a[48392] = anon_sym_until;
	v->a[48393] = anon_sym_if;
	v->a[48394] = anon_sym_case;
	v->a[48395] = anon_sym_LPAREN;
	v->a[48396] = anon_sym_LBRACE;
	v->a[48397] = anon_sym_BANG;
	v->a[48398] = anon_sym_LT;
	v->a[48399] = anon_sym_GT;
	small_parse_table_2420(v);
}

/* EOF small_parse_table_483.c */
