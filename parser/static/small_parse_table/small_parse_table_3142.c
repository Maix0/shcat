/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3142.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15710(t_small_parse_table_array *v)
{
	v->a[314200] = actions(14708);
	v->a[314201] = 1;
	v->a[314202] = sym_simple_heredoc_body;
	v->a[314203] = actions(14710);
	v->a[314204] = 1;
	v->a[314205] = sym__heredoc_body_beginning;
	v->a[314206] = state(6796);
	v->a[314207] = 1;
	v->a[314208] = sym_heredoc_body;
	v->a[314209] = state(5035);
	v->a[314210] = 2;
	v->a[314211] = sym__heredoc_body;
	v->a[314212] = sym__simple_heredoc_body;
	v->a[314213] = 5;
	v->a[314214] = actions(71);
	v->a[314215] = 1;
	v->a[314216] = sym_comment;
	v->a[314217] = actions(14710);
	v->a[314218] = 1;
	v->a[314219] = sym__heredoc_body_beginning;
	small_parse_table_15711(v);
}

void	small_parse_table_15711(t_small_parse_table_array *v)
{
	v->a[314220] = actions(14757);
	v->a[314221] = 1;
	v->a[314222] = sym_simple_heredoc_body;
	v->a[314223] = state(7011);
	v->a[314224] = 1;
	v->a[314225] = sym_heredoc_body;
	v->a[314226] = state(5581);
	v->a[314227] = 2;
	v->a[314228] = sym__heredoc_body;
	v->a[314229] = sym__simple_heredoc_body;
	v->a[314230] = 5;
	v->a[314231] = actions(71);
	v->a[314232] = 1;
	v->a[314233] = sym_comment;
	v->a[314234] = actions(14710);
	v->a[314235] = 1;
	v->a[314236] = sym__heredoc_body_beginning;
	v->a[314237] = actions(14757);
	v->a[314238] = 1;
	v->a[314239] = sym_simple_heredoc_body;
	small_parse_table_15712(v);
}

void	small_parse_table_15712(t_small_parse_table_array *v)
{
	v->a[314240] = state(7011);
	v->a[314241] = 1;
	v->a[314242] = sym_heredoc_body;
	v->a[314243] = state(5585);
	v->a[314244] = 2;
	v->a[314245] = sym__heredoc_body;
	v->a[314246] = sym__simple_heredoc_body;
	v->a[314247] = 5;
	v->a[314248] = actions(71);
	v->a[314249] = 1;
	v->a[314250] = sym_comment;
	v->a[314251] = actions(14710);
	v->a[314252] = 1;
	v->a[314253] = sym__heredoc_body_beginning;
	v->a[314254] = actions(14722);
	v->a[314255] = 1;
	v->a[314256] = sym_simple_heredoc_body;
	v->a[314257] = state(6845);
	v->a[314258] = 1;
	v->a[314259] = sym_heredoc_body;
	small_parse_table_15713(v);
}

void	small_parse_table_15713(t_small_parse_table_array *v)
{
	v->a[314260] = state(5022);
	v->a[314261] = 2;
	v->a[314262] = sym__heredoc_body;
	v->a[314263] = sym__simple_heredoc_body;
	v->a[314264] = 6;
	v->a[314265] = actions(71);
	v->a[314266] = 1;
	v->a[314267] = sym_comment;
	v->a[314268] = actions(14710);
	v->a[314269] = 1;
	v->a[314270] = sym__heredoc_body_beginning;
	v->a[314271] = actions(14722);
	v->a[314272] = 1;
	v->a[314273] = sym_simple_heredoc_body;
	v->a[314274] = state(4935);
	v->a[314275] = 1;
	v->a[314276] = sym__heredoc_body;
	v->a[314277] = state(4948);
	v->a[314278] = 1;
	v->a[314279] = sym__simple_heredoc_body;
	small_parse_table_15714(v);
}

void	small_parse_table_15714(t_small_parse_table_array *v)
{
	v->a[314280] = state(6845);
	v->a[314281] = 1;
	v->a[314282] = sym_heredoc_body;
	v->a[314283] = 6;
	v->a[314284] = actions(71);
	v->a[314285] = 1;
	v->a[314286] = sym_comment;
	v->a[314287] = actions(14710);
	v->a[314288] = 1;
	v->a[314289] = sym__heredoc_body_beginning;
	v->a[314290] = actions(14722);
	v->a[314291] = 1;
	v->a[314292] = sym_simple_heredoc_body;
	v->a[314293] = state(4900);
	v->a[314294] = 1;
	v->a[314295] = sym__heredoc_body;
	v->a[314296] = state(4920);
	v->a[314297] = 1;
	v->a[314298] = sym__simple_heredoc_body;
	v->a[314299] = state(6845);
	small_parse_table_15715(v);
}

/* EOF small_parse_table_3142.c */
