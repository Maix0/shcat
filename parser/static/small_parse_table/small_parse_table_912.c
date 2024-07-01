/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_912.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4560(t_small_parse_table_array *v)
{
	v->a[91200] = actions(4018);
	v->a[91201] = 1;
	v->a[91202] = sym__heredoc_body_beginning;
	v->a[91203] = actions(4020);
	v->a[91204] = 1;
	v->a[91205] = sym_simple_heredoc_body;
	v->a[91206] = state(2221);
	v->a[91207] = 1;
	v->a[91208] = sym_heredoc_body;
	v->a[91209] = state(1702);
	v->a[91210] = 2;
	v->a[91211] = sym__heredoc_body;
	v->a[91212] = sym__simple_heredoc_body;
	v->a[91213] = 5;
	v->a[91214] = actions(870);
	v->a[91215] = 1;
	v->a[91216] = sym_comment;
	v->a[91217] = actions(4016);
	v->a[91218] = 1;
	v->a[91219] = sym_simple_heredoc_body;
	small_parse_table_4561(v);
}

void	small_parse_table_4561(t_small_parse_table_array *v)
{
	v->a[91220] = actions(4018);
	v->a[91221] = 1;
	v->a[91222] = sym__heredoc_body_beginning;
	v->a[91223] = state(2220);
	v->a[91224] = 1;
	v->a[91225] = sym_heredoc_body;
	v->a[91226] = state(1373);
	v->a[91227] = 2;
	v->a[91228] = sym__heredoc_body;
	v->a[91229] = sym__simple_heredoc_body;
	v->a[91230] = 6;
	v->a[91231] = actions(870);
	v->a[91232] = 1;
	v->a[91233] = sym_comment;
	v->a[91234] = actions(4018);
	v->a[91235] = 1;
	v->a[91236] = sym__heredoc_body_beginning;
	v->a[91237] = actions(4020);
	v->a[91238] = 1;
	v->a[91239] = sym_simple_heredoc_body;
	small_parse_table_4562(v);
}

void	small_parse_table_4562(t_small_parse_table_array *v)
{
	v->a[91240] = state(1745);
	v->a[91241] = 1;
	v->a[91242] = sym__heredoc_body;
	v->a[91243] = state(1746);
	v->a[91244] = 1;
	v->a[91245] = sym__simple_heredoc_body;
	v->a[91246] = state(2221);
	v->a[91247] = 1;
	v->a[91248] = sym_heredoc_body;
	v->a[91249] = 6;
	v->a[91250] = actions(870);
	v->a[91251] = 1;
	v->a[91252] = sym_comment;
	v->a[91253] = actions(4018);
	v->a[91254] = 1;
	v->a[91255] = sym__heredoc_body_beginning;
	v->a[91256] = actions(4020);
	v->a[91257] = 1;
	v->a[91258] = sym_simple_heredoc_body;
	v->a[91259] = state(1739);
	small_parse_table_4563(v);
}

void	small_parse_table_4563(t_small_parse_table_array *v)
{
	v->a[91260] = 1;
	v->a[91261] = sym__heredoc_body;
	v->a[91262] = state(1740);
	v->a[91263] = 1;
	v->a[91264] = sym__simple_heredoc_body;
	v->a[91265] = state(2221);
	v->a[91266] = 1;
	v->a[91267] = sym_heredoc_body;
	v->a[91268] = 6;
	v->a[91269] = actions(870);
	v->a[91270] = 1;
	v->a[91271] = sym_comment;
	v->a[91272] = actions(4018);
	v->a[91273] = 1;
	v->a[91274] = sym__heredoc_body_beginning;
	v->a[91275] = actions(4020);
	v->a[91276] = 1;
	v->a[91277] = sym_simple_heredoc_body;
	v->a[91278] = state(1707);
	v->a[91279] = 1;
	small_parse_table_4564(v);
}

void	small_parse_table_4564(t_small_parse_table_array *v)
{
	v->a[91280] = sym__heredoc_body;
	v->a[91281] = state(1711);
	v->a[91282] = 1;
	v->a[91283] = sym__simple_heredoc_body;
	v->a[91284] = state(2221);
	v->a[91285] = 1;
	v->a[91286] = sym_heredoc_body;
	v->a[91287] = 2;
	v->a[91288] = actions(870);
	v->a[91289] = 1;
	v->a[91290] = sym_comment;
	v->a[91291] = actions(939);
	v->a[91292] = 5;
	v->a[91293] = sym__concat;
	v->a[91294] = anon_sym_PIPE;
	v->a[91295] = anon_sym_RPAREN;
	v->a[91296] = anon_sym_RBRACE;
	v->a[91297] = aux_sym_concatenation_token1;
	v->a[91298] = 6;
	v->a[91299] = actions(870);
	small_parse_table_4565(v);
}

/* EOF small_parse_table_912.c */
