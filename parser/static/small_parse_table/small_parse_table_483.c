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
	v->a[48300] = actions(2015);
	v->a[48301] = 2;
	v->a[48302] = aux_sym__simple_variable_name_token1;
	v->a[48303] = aux_sym__multiline_variable_name_token1;
	v->a[48304] = actions(2009);
	v->a[48305] = 8;
	v->a[48306] = anon_sym_BANG;
	v->a[48307] = anon_sym_DASH;
	v->a[48308] = anon_sym_STAR;
	v->a[48309] = anon_sym_QMARK;
	v->a[48310] = anon_sym_DOLLAR;
	v->a[48311] = anon_sym_POUND;
	v->a[48312] = anon_sym_AT;
	v->a[48313] = anon_sym_0;
	v->a[48314] = 6;
	v->a[48315] = actions(3);
	v->a[48316] = 1;
	v->a[48317] = sym_comment;
	v->a[48318] = actions(2013);
	v->a[48319] = 1;
	small_parse_table_2416(v);
}

void	small_parse_table_2416(t_small_parse_table_array *v)
{
	v->a[48320] = sym_string_content;
	v->a[48321] = actions(2017);
	v->a[48322] = 1;
	v->a[48323] = sym_variable_name;
	v->a[48324] = actions(2249);
	v->a[48325] = 1;
	v->a[48326] = anon_sym_DQUOTE;
	v->a[48327] = actions(2015);
	v->a[48328] = 2;
	v->a[48329] = aux_sym__simple_variable_name_token1;
	v->a[48330] = aux_sym__multiline_variable_name_token1;
	v->a[48331] = actions(2009);
	v->a[48332] = 8;
	v->a[48333] = anon_sym_BANG;
	v->a[48334] = anon_sym_DASH;
	v->a[48335] = anon_sym_STAR;
	v->a[48336] = anon_sym_QMARK;
	v->a[48337] = anon_sym_DOLLAR;
	v->a[48338] = anon_sym_POUND;
	v->a[48339] = anon_sym_AT;
	small_parse_table_2417(v);
}

void	small_parse_table_2417(t_small_parse_table_array *v)
{
	v->a[48340] = anon_sym_0;
	v->a[48341] = 3;
	v->a[48342] = actions(3);
	v->a[48343] = 1;
	v->a[48344] = sym_comment;
	v->a[48345] = actions(2251);
	v->a[48346] = 2;
	v->a[48347] = ts_builtin_sym_end;
	v->a[48348] = aux_sym_heredoc_redirect_token1;
	v->a[48349] = actions(2253);
	v->a[48350] = 11;
	v->a[48351] = anon_sym_PIPE;
	v->a[48352] = anon_sym_RPAREN;
	v->a[48353] = anon_sym_SEMI_SEMI;
	v->a[48354] = anon_sym_AMP_AMP;
	v->a[48355] = anon_sym_PIPE_PIPE;
	v->a[48356] = anon_sym_LT;
	v->a[48357] = anon_sym_GT;
	v->a[48358] = anon_sym_GT_GT;
	v->a[48359] = anon_sym_LT_LT;
	small_parse_table_2418(v);
}

void	small_parse_table_2418(t_small_parse_table_array *v)
{
	v->a[48360] = anon_sym_BQUOTE;
	v->a[48361] = anon_sym_SEMI;
	v->a[48362] = 6;
	v->a[48363] = actions(3);
	v->a[48364] = 1;
	v->a[48365] = sym_comment;
	v->a[48366] = actions(2013);
	v->a[48367] = 1;
	v->a[48368] = sym_string_content;
	v->a[48369] = actions(2017);
	v->a[48370] = 1;
	v->a[48371] = sym_variable_name;
	v->a[48372] = actions(2255);
	v->a[48373] = 1;
	v->a[48374] = anon_sym_DQUOTE;
	v->a[48375] = actions(2015);
	v->a[48376] = 2;
	v->a[48377] = aux_sym__simple_variable_name_token1;
	v->a[48378] = aux_sym__multiline_variable_name_token1;
	v->a[48379] = actions(2009);
	small_parse_table_2419(v);
}

void	small_parse_table_2419(t_small_parse_table_array *v)
{
	v->a[48380] = 8;
	v->a[48381] = anon_sym_BANG;
	v->a[48382] = anon_sym_DASH;
	v->a[48383] = anon_sym_STAR;
	v->a[48384] = anon_sym_QMARK;
	v->a[48385] = anon_sym_DOLLAR;
	v->a[48386] = anon_sym_POUND;
	v->a[48387] = anon_sym_AT;
	v->a[48388] = anon_sym_0;
	v->a[48389] = 6;
	v->a[48390] = actions(3);
	v->a[48391] = 1;
	v->a[48392] = sym_comment;
	v->a[48393] = actions(2013);
	v->a[48394] = 1;
	v->a[48395] = sym_string_content;
	v->a[48396] = actions(2017);
	v->a[48397] = 1;
	v->a[48398] = sym_variable_name;
	v->a[48399] = actions(2257);
	small_parse_table_2420(v);
}

/* EOF small_parse_table_483.c */
