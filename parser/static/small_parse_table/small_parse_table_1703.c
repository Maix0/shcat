/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1703.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8515(t_small_parse_table_array *v)
{
	v->a[170300] = 1;
	v->a[170301] = anon_sym_PIPE_PIPE;
	v->a[170302] = actions(7575);
	v->a[170303] = 1;
	v->a[170304] = anon_sym_AMP_AMP;
	v->a[170305] = actions(7577);
	v->a[170306] = 1;
	v->a[170307] = anon_sym_PIPE;
	v->a[170308] = actions(7579);
	v->a[170309] = 1;
	v->a[170310] = anon_sym_CARET;
	v->a[170311] = actions(7581);
	v->a[170312] = 1;
	v->a[170313] = anon_sym_AMP;
	v->a[170314] = actions(7595);
	v->a[170315] = 1;
	v->a[170316] = anon_sym_STAR_STAR;
	v->a[170317] = actions(7597);
	v->a[170318] = 1;
	v->a[170319] = anon_sym_EQ_TILDE;
	small_parse_table_8516(v);
}

void	small_parse_table_8516(t_small_parse_table_array *v)
{
	v->a[170320] = actions(7599);
	v->a[170321] = 1;
	v->a[170322] = anon_sym_QMARK;
	v->a[170323] = actions(7569);
	v->a[170324] = 2;
	v->a[170325] = anon_sym_PLUS_PLUS;
	v->a[170326] = anon_sym_DASH_DASH;
	v->a[170327] = actions(7583);
	v->a[170328] = 2;
	v->a[170329] = anon_sym_EQ_EQ;
	v->a[170330] = anon_sym_BANG_EQ;
	v->a[170331] = actions(7585);
	v->a[170332] = 2;
	v->a[170333] = anon_sym_LT;
	v->a[170334] = anon_sym_GT;
	v->a[170335] = actions(7587);
	v->a[170336] = 2;
	v->a[170337] = anon_sym_LT_EQ;
	v->a[170338] = anon_sym_GT_EQ;
	v->a[170339] = actions(7589);
	small_parse_table_8517(v);
}

void	small_parse_table_8517(t_small_parse_table_array *v)
{
	v->a[170340] = 2;
	v->a[170341] = anon_sym_LT_LT;
	v->a[170342] = anon_sym_GT_GT;
	v->a[170343] = actions(7591);
	v->a[170344] = 2;
	v->a[170345] = anon_sym_PLUS;
	v->a[170346] = anon_sym_DASH;
	v->a[170347] = actions(7593);
	v->a[170348] = 3;
	v->a[170349] = anon_sym_STAR;
	v->a[170350] = anon_sym_SLASH;
	v->a[170351] = anon_sym_PERCENT;
	v->a[170352] = actions(7571);
	v->a[170353] = 11;
	v->a[170354] = anon_sym_PLUS_EQ;
	v->a[170355] = anon_sym_DASH_EQ;
	v->a[170356] = anon_sym_STAR_EQ;
	v->a[170357] = anon_sym_SLASH_EQ;
	v->a[170358] = anon_sym_PERCENT_EQ;
	v->a[170359] = anon_sym_STAR_STAR_EQ;
	small_parse_table_8518(v);
}

void	small_parse_table_8518(t_small_parse_table_array *v)
{
	v->a[170360] = anon_sym_LT_LT_EQ;
	v->a[170361] = anon_sym_GT_GT_EQ;
	v->a[170362] = anon_sym_AMP_EQ;
	v->a[170363] = anon_sym_CARET_EQ;
	v->a[170364] = anon_sym_PIPE_EQ;
	v->a[170365] = 8;
	v->a[170366] = actions(3);
	v->a[170367] = 1;
	v->a[170368] = sym_comment;
	v->a[170369] = actions(1241);
	v->a[170370] = 1;
	v->a[170371] = sym_file_descriptor;
	v->a[170372] = actions(4084);
	v->a[170373] = 1;
	v->a[170374] = anon_sym_DQUOTE;
	v->a[170375] = actions(7613);
	v->a[170376] = 1;
	v->a[170377] = sym_variable_name;
	v->a[170378] = state(4606);
	v->a[170379] = 1;
	small_parse_table_8519(v);
}

void	small_parse_table_8519(t_small_parse_table_array *v)
{
	v->a[170380] = sym_string;
	v->a[170381] = actions(7611);
	v->a[170382] = 2;
	v->a[170383] = aux_sym__simple_variable_name_token1;
	v->a[170384] = aux_sym__multiline_variable_name_token1;
	v->a[170385] = actions(7609);
	v->a[170386] = 9;
	v->a[170387] = anon_sym_DASH;
	v->a[170388] = anon_sym_STAR;
	v->a[170389] = anon_sym_BANG;
	v->a[170390] = anon_sym_QMARK;
	v->a[170391] = anon_sym_DOLLAR;
	v->a[170392] = anon_sym_POUND;
	v->a[170393] = anon_sym_AT2;
	v->a[170394] = anon_sym_0;
	v->a[170395] = anon_sym__;
	v->a[170396] = actions(1239);
	v->a[170397] = 21;
	v->a[170398] = anon_sym_SEMI;
	v->a[170399] = anon_sym_PIPE_PIPE;
	small_parse_table_8520(v);
}

/* EOF small_parse_table_1703.c */
