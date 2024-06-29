/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_942.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4710(t_small_parse_table_array *v)
{
	v->a[94200] = state(2239);
	v->a[94201] = 1;
	v->a[94202] = sym_heredoc_body;
	v->a[94203] = 6;
	v->a[94204] = actions(1074);
	v->a[94205] = 1;
	v->a[94206] = sym_comment;
	v->a[94207] = actions(4016);
	v->a[94208] = 1;
	v->a[94209] = sym_simple_heredoc_body;
	v->a[94210] = actions(4018);
	v->a[94211] = 1;
	v->a[94212] = sym__heredoc_body_beginning;
	v->a[94213] = state(1230);
	v->a[94214] = 1;
	v->a[94215] = sym__heredoc_body;
	v->a[94216] = state(1231);
	v->a[94217] = 1;
	v->a[94218] = sym__simple_heredoc_body;
	v->a[94219] = state(2239);
	small_parse_table_4711(v);
}

void	small_parse_table_4711(t_small_parse_table_array *v)
{
	v->a[94220] = 1;
	v->a[94221] = sym_heredoc_body;
	v->a[94222] = 6;
	v->a[94223] = actions(1074);
	v->a[94224] = 1;
	v->a[94225] = sym_comment;
	v->a[94226] = actions(4018);
	v->a[94227] = 1;
	v->a[94228] = sym__heredoc_body_beginning;
	v->a[94229] = actions(4022);
	v->a[94230] = 1;
	v->a[94231] = sym_simple_heredoc_body;
	v->a[94232] = state(1657);
	v->a[94233] = 1;
	v->a[94234] = sym__heredoc_body;
	v->a[94235] = state(1658);
	v->a[94236] = 1;
	v->a[94237] = sym__simple_heredoc_body;
	v->a[94238] = state(2167);
	v->a[94239] = 1;
	small_parse_table_4712(v);
}

void	small_parse_table_4712(t_small_parse_table_array *v)
{
	v->a[94240] = sym_heredoc_body;
	v->a[94241] = 6;
	v->a[94242] = actions(1074);
	v->a[94243] = 1;
	v->a[94244] = sym_comment;
	v->a[94245] = actions(4018);
	v->a[94246] = 1;
	v->a[94247] = sym__heredoc_body_beginning;
	v->a[94248] = actions(4022);
	v->a[94249] = 1;
	v->a[94250] = sym_simple_heredoc_body;
	v->a[94251] = state(1656);
	v->a[94252] = 1;
	v->a[94253] = sym__simple_heredoc_body;
	v->a[94254] = state(1667);
	v->a[94255] = 1;
	v->a[94256] = sym__heredoc_body;
	v->a[94257] = state(2167);
	v->a[94258] = 1;
	v->a[94259] = sym_heredoc_body;
	small_parse_table_4713(v);
}

void	small_parse_table_4713(t_small_parse_table_array *v)
{
	v->a[94260] = 5;
	v->a[94261] = actions(1074);
	v->a[94262] = 1;
	v->a[94263] = sym_comment;
	v->a[94264] = actions(4018);
	v->a[94265] = 1;
	v->a[94266] = sym__heredoc_body_beginning;
	v->a[94267] = actions(4022);
	v->a[94268] = 1;
	v->a[94269] = sym_simple_heredoc_body;
	v->a[94270] = state(2167);
	v->a[94271] = 1;
	v->a[94272] = sym_heredoc_body;
	v->a[94273] = state(1654);
	v->a[94274] = 2;
	v->a[94275] = sym__heredoc_body;
	v->a[94276] = sym__simple_heredoc_body;
	v->a[94277] = 5;
	v->a[94278] = actions(1074);
	v->a[94279] = 1;
	small_parse_table_4714(v);
}

void	small_parse_table_4714(t_small_parse_table_array *v)
{
	v->a[94280] = sym_comment;
	v->a[94281] = actions(4016);
	v->a[94282] = 1;
	v->a[94283] = sym_simple_heredoc_body;
	v->a[94284] = actions(4018);
	v->a[94285] = 1;
	v->a[94286] = sym__heredoc_body_beginning;
	v->a[94287] = state(2239);
	v->a[94288] = 1;
	v->a[94289] = sym_heredoc_body;
	v->a[94290] = state(1275);
	v->a[94291] = 2;
	v->a[94292] = sym__heredoc_body;
	v->a[94293] = sym__simple_heredoc_body;
	v->a[94294] = 2;
	v->a[94295] = actions(1074);
	v->a[94296] = 1;
	v->a[94297] = sym_comment;
	v->a[94298] = actions(1088);
	v->a[94299] = 5;
	small_parse_table_4715(v);
}

/* EOF small_parse_table_942.c */
