/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1342.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6710(t_small_parse_table_array *v)
{
	v->a[134200] = actions(7732);
	v->a[134201] = 1;
	v->a[134202] = sym_variable_name;
	v->a[134203] = actions(810);
	v->a[134204] = 2;
	v->a[134205] = anon_sym_PIPE;
	v->a[134206] = anon_sym_RPAREN;
	v->a[134207] = actions(7730);
	v->a[134208] = 2;
	v->a[134209] = aux_sym__simple_variable_name_token1;
	v->a[134210] = aux_sym__multiline_variable_name_token1;
	v->a[134211] = actions(7728);
	v->a[134212] = 9;
	v->a[134213] = anon_sym_BANG;
	v->a[134214] = anon_sym_DASH;
	v->a[134215] = anon_sym_STAR;
	v->a[134216] = anon_sym_QMARK;
	v->a[134217] = anon_sym_DOLLAR;
	v->a[134218] = anon_sym_POUND;
	v->a[134219] = anon_sym_AT;
	small_parse_table_6711(v);
}

void	small_parse_table_6711(t_small_parse_table_array *v)
{
	v->a[134220] = anon_sym_0;
	v->a[134221] = anon_sym__;
	v->a[134222] = 6;
	v->a[134223] = actions(3);
	v->a[134224] = 1;
	v->a[134225] = sym_comment;
	v->a[134226] = actions(7534);
	v->a[134227] = 1;
	v->a[134228] = sym_string_content;
	v->a[134229] = actions(7538);
	v->a[134230] = 1;
	v->a[134231] = sym_variable_name;
	v->a[134232] = actions(7736);
	v->a[134233] = 1;
	v->a[134234] = anon_sym_DQUOTE;
	v->a[134235] = actions(7536);
	v->a[134236] = 2;
	v->a[134237] = aux_sym__simple_variable_name_token1;
	v->a[134238] = aux_sym__multiline_variable_name_token1;
	v->a[134239] = actions(7530);
	small_parse_table_6712(v);
}

void	small_parse_table_6712(t_small_parse_table_array *v)
{
	v->a[134240] = 9;
	v->a[134241] = anon_sym_BANG;
	v->a[134242] = anon_sym_DASH;
	v->a[134243] = anon_sym_STAR;
	v->a[134244] = anon_sym_QMARK;
	v->a[134245] = anon_sym_DOLLAR;
	v->a[134246] = anon_sym_POUND;
	v->a[134247] = anon_sym_AT;
	v->a[134248] = anon_sym_0;
	v->a[134249] = anon_sym__;
	v->a[134250] = 6;
	v->a[134251] = actions(3);
	v->a[134252] = 1;
	v->a[134253] = sym_comment;
	v->a[134254] = actions(7534);
	v->a[134255] = 1;
	v->a[134256] = sym_string_content;
	v->a[134257] = actions(7538);
	v->a[134258] = 1;
	v->a[134259] = sym_variable_name;
	small_parse_table_6713(v);
}

void	small_parse_table_6713(t_small_parse_table_array *v)
{
	v->a[134260] = actions(7738);
	v->a[134261] = 1;
	v->a[134262] = anon_sym_DQUOTE;
	v->a[134263] = actions(7536);
	v->a[134264] = 2;
	v->a[134265] = aux_sym__simple_variable_name_token1;
	v->a[134266] = aux_sym__multiline_variable_name_token1;
	v->a[134267] = actions(7530);
	v->a[134268] = 9;
	v->a[134269] = anon_sym_BANG;
	v->a[134270] = anon_sym_DASH;
	v->a[134271] = anon_sym_STAR;
	v->a[134272] = anon_sym_QMARK;
	v->a[134273] = anon_sym_DOLLAR;
	v->a[134274] = anon_sym_POUND;
	v->a[134275] = anon_sym_AT;
	v->a[134276] = anon_sym_0;
	v->a[134277] = anon_sym__;
	v->a[134278] = 3;
	v->a[134279] = actions(3);
	small_parse_table_6714(v);
}

void	small_parse_table_6714(t_small_parse_table_array *v)
{
	v->a[134280] = 1;
	v->a[134281] = sym_comment;
	v->a[134282] = actions(1390);
	v->a[134283] = 2;
	v->a[134284] = sym_file_descriptor;
	v->a[134285] = aux_sym_heredoc_redirect_token1;
	v->a[134286] = actions(1388);
	v->a[134287] = 12;
	v->a[134288] = anon_sym_AMP_AMP;
	v->a[134289] = anon_sym_PIPE_PIPE;
	v->a[134290] = anon_sym_LT;
	v->a[134291] = anon_sym_GT;
	v->a[134292] = anon_sym_GT_GT;
	v->a[134293] = anon_sym_AMP_GT;
	v->a[134294] = anon_sym_AMP_GT_GT;
	v->a[134295] = anon_sym_LT_AMP;
	v->a[134296] = anon_sym_GT_AMP;
	v->a[134297] = anon_sym_GT_PIPE;
	v->a[134298] = anon_sym_LT_AMP_DASH;
	v->a[134299] = anon_sym_GT_AMP_DASH;
	small_parse_table_6715(v);
}

/* EOF small_parse_table_1342.c */
