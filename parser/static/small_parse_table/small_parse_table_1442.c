/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1442.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7210(t_small_parse_table_array *v)
{
	v->a[144200] = 6;
	v->a[144201] = actions(57);
	v->a[144202] = 1;
	v->a[144203] = sym_comment;
	v->a[144204] = actions(8637);
	v->a[144205] = 1;
	v->a[144206] = sym__heredoc_body_beginning;
	v->a[144207] = actions(8653);
	v->a[144208] = 1;
	v->a[144209] = sym_simple_heredoc_body;
	v->a[144210] = state(2770);
	v->a[144211] = 1;
	v->a[144212] = sym__simple_heredoc_body;
	v->a[144213] = state(2777);
	v->a[144214] = 1;
	v->a[144215] = sym__heredoc_body;
	v->a[144216] = state(3836);
	v->a[144217] = 1;
	v->a[144218] = sym_heredoc_body;
	v->a[144219] = 4;
	small_parse_table_7211(v);
}

void	small_parse_table_7211(t_small_parse_table_array *v)
{
	v->a[144220] = actions(3);
	v->a[144221] = 1;
	v->a[144222] = sym_comment;
	v->a[144223] = actions(8389);
	v->a[144224] = 1;
	v->a[144225] = anon_sym_in;
	v->a[144226] = actions(8393);
	v->a[144227] = 1;
	v->a[144228] = aux_sym_heredoc_redirect_token1;
	v->a[144229] = actions(8391);
	v->a[144230] = 3;
	v->a[144231] = anon_sym_SEMI_SEMI;
	v->a[144232] = anon_sym_AMP;
	v->a[144233] = anon_sym_SEMI;
	v->a[144234] = 5;
	v->a[144235] = actions(57);
	v->a[144236] = 1;
	v->a[144237] = sym_comment;
	v->a[144238] = actions(8635);
	v->a[144239] = 1;
	small_parse_table_7212(v);
}

void	small_parse_table_7212(t_small_parse_table_array *v)
{
	v->a[144240] = sym_simple_heredoc_body;
	v->a[144241] = actions(8637);
	v->a[144242] = 1;
	v->a[144243] = sym__heredoc_body_beginning;
	v->a[144244] = state(3949);
	v->a[144245] = 1;
	v->a[144246] = sym_heredoc_body;
	v->a[144247] = state(2387);
	v->a[144248] = 2;
	v->a[144249] = sym__heredoc_body;
	v->a[144250] = sym__simple_heredoc_body;
	v->a[144251] = 6;
	v->a[144252] = actions(57);
	v->a[144253] = 1;
	v->a[144254] = sym_comment;
	v->a[144255] = actions(8637);
	v->a[144256] = 1;
	v->a[144257] = sym__heredoc_body_beginning;
	v->a[144258] = actions(8639);
	v->a[144259] = 1;
	small_parse_table_7213(v);
}

void	small_parse_table_7213(t_small_parse_table_array *v)
{
	v->a[144260] = sym_simple_heredoc_body;
	v->a[144261] = state(2240);
	v->a[144262] = 1;
	v->a[144263] = sym__simple_heredoc_body;
	v->a[144264] = state(2241);
	v->a[144265] = 1;
	v->a[144266] = sym__heredoc_body;
	v->a[144267] = state(3852);
	v->a[144268] = 1;
	v->a[144269] = sym_heredoc_body;
	v->a[144270] = 6;
	v->a[144271] = actions(57);
	v->a[144272] = 1;
	v->a[144273] = sym_comment;
	v->a[144274] = actions(8635);
	v->a[144275] = 1;
	v->a[144276] = sym_simple_heredoc_body;
	v->a[144277] = actions(8637);
	v->a[144278] = 1;
	v->a[144279] = sym__heredoc_body_beginning;
	small_parse_table_7214(v);
}

void	small_parse_table_7214(t_small_parse_table_array *v)
{
	v->a[144280] = state(2391);
	v->a[144281] = 1;
	v->a[144282] = sym__heredoc_body;
	v->a[144283] = state(2396);
	v->a[144284] = 1;
	v->a[144285] = sym__simple_heredoc_body;
	v->a[144286] = state(3949);
	v->a[144287] = 1;
	v->a[144288] = sym_heredoc_body;
	v->a[144289] = 6;
	v->a[144290] = actions(57);
	v->a[144291] = 1;
	v->a[144292] = sym_comment;
	v->a[144293] = actions(8635);
	v->a[144294] = 1;
	v->a[144295] = sym_simple_heredoc_body;
	v->a[144296] = actions(8637);
	v->a[144297] = 1;
	v->a[144298] = sym__heredoc_body_beginning;
	v->a[144299] = state(2397);
	small_parse_table_7215(v);
}

/* EOF small_parse_table_1442.c */
