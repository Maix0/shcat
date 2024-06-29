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
	v->a[48300] = sym_number;
	v->a[48301] = anon_sym_DOLLAR_LBRACE;
	v->a[48302] = anon_sym_DOLLAR_LPAREN;
	v->a[48303] = anon_sym_BQUOTE;
	v->a[48304] = sym_word;
	v->a[48305] = 7;
	v->a[48306] = actions(3);
	v->a[48307] = 1;
	v->a[48308] = sym_comment;
	v->a[48309] = actions(1536);
	v->a[48310] = 1;
	v->a[48311] = sym_file_descriptor;
	v->a[48312] = actions(1539);
	v->a[48313] = 1;
	v->a[48314] = sym_variable_name;
	v->a[48315] = actions(1650);
	v->a[48316] = 1;
	v->a[48317] = anon_sym_RPAREN;
	v->a[48318] = actions(1526);
	v->a[48319] = 9;
	small_parse_table_2416(v);
}

void	small_parse_table_2416(t_small_parse_table_array *v)
{
	v->a[48320] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48321] = anon_sym_DOLLAR;
	v->a[48322] = anon_sym_DQUOTE;
	v->a[48323] = sym_raw_string;
	v->a[48324] = sym_number;
	v->a[48325] = anon_sym_DOLLAR_LBRACE;
	v->a[48326] = anon_sym_DOLLAR_LPAREN;
	v->a[48327] = anon_sym_BQUOTE;
	v->a[48328] = sym_word;
	v->a[48329] = actions(1528);
	v->a[48330] = 9;
	v->a[48331] = anon_sym_PIPE;
	v->a[48332] = anon_sym_SEMI_SEMI;
	v->a[48333] = anon_sym_AMP_AMP;
	v->a[48334] = anon_sym_PIPE_PIPE;
	v->a[48335] = anon_sym_LT_LT;
	v->a[48336] = anon_sym_LT_LT_DASH;
	v->a[48337] = aux_sym_heredoc_redirect_token1;
	v->a[48338] = anon_sym_AMP;
	v->a[48339] = anon_sym_SEMI;
	small_parse_table_2417(v);
}

void	small_parse_table_2417(t_small_parse_table_array *v)
{
	v->a[48340] = actions(1533);
	v->a[48341] = 10;
	v->a[48342] = anon_sym_LT;
	v->a[48343] = anon_sym_GT;
	v->a[48344] = anon_sym_GT_GT;
	v->a[48345] = anon_sym_AMP_GT;
	v->a[48346] = anon_sym_AMP_GT_GT;
	v->a[48347] = anon_sym_LT_AMP;
	v->a[48348] = anon_sym_GT_AMP;
	v->a[48349] = anon_sym_GT_PIPE;
	v->a[48350] = anon_sym_LT_AMP_DASH;
	v->a[48351] = anon_sym_GT_AMP_DASH;
	v->a[48352] = 7;
	v->a[48353] = actions(3);
	v->a[48354] = 1;
	v->a[48355] = sym_comment;
	v->a[48356] = actions(1536);
	v->a[48357] = 1;
	v->a[48358] = sym_file_descriptor;
	v->a[48359] = actions(1539);
	small_parse_table_2418(v);
}

void	small_parse_table_2418(t_small_parse_table_array *v)
{
	v->a[48360] = 1;
	v->a[48361] = sym_variable_name;
	v->a[48362] = actions(1653);
	v->a[48363] = 1;
	v->a[48364] = anon_sym_RPAREN;
	v->a[48365] = actions(1526);
	v->a[48366] = 9;
	v->a[48367] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48368] = anon_sym_DOLLAR;
	v->a[48369] = anon_sym_DQUOTE;
	v->a[48370] = sym_raw_string;
	v->a[48371] = sym_number;
	v->a[48372] = anon_sym_DOLLAR_LBRACE;
	v->a[48373] = anon_sym_DOLLAR_LPAREN;
	v->a[48374] = anon_sym_BQUOTE;
	v->a[48375] = sym_word;
	v->a[48376] = actions(1528);
	v->a[48377] = 9;
	v->a[48378] = anon_sym_PIPE;
	v->a[48379] = anon_sym_SEMI_SEMI;
	small_parse_table_2419(v);
}

void	small_parse_table_2419(t_small_parse_table_array *v)
{
	v->a[48380] = anon_sym_AMP_AMP;
	v->a[48381] = anon_sym_PIPE_PIPE;
	v->a[48382] = anon_sym_LT_LT;
	v->a[48383] = anon_sym_LT_LT_DASH;
	v->a[48384] = aux_sym_heredoc_redirect_token1;
	v->a[48385] = anon_sym_AMP;
	v->a[48386] = anon_sym_SEMI;
	v->a[48387] = actions(1533);
	v->a[48388] = 10;
	v->a[48389] = anon_sym_LT;
	v->a[48390] = anon_sym_GT;
	v->a[48391] = anon_sym_GT_GT;
	v->a[48392] = anon_sym_AMP_GT;
	v->a[48393] = anon_sym_AMP_GT_GT;
	v->a[48394] = anon_sym_LT_AMP;
	v->a[48395] = anon_sym_GT_AMP;
	v->a[48396] = anon_sym_GT_PIPE;
	v->a[48397] = anon_sym_LT_AMP_DASH;
	v->a[48398] = anon_sym_GT_AMP_DASH;
	v->a[48399] = 4;
	small_parse_table_2420(v);
}

/* EOF small_parse_table_483.c */
