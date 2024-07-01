/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_810.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4050(t_small_parse_table_array *v)
{
	v->a[81000] = actions(3611);
	v->a[81001] = 1;
	v->a[81002] = sym_simple_heredoc_body;
	v->a[81003] = actions(3613);
	v->a[81004] = 1;
	v->a[81005] = sym__heredoc_body_beginning;
	v->a[81006] = state(1256);
	v->a[81007] = 1;
	v->a[81008] = sym__heredoc_body;
	v->a[81009] = state(1257);
	v->a[81010] = 1;
	v->a[81011] = sym__simple_heredoc_body;
	v->a[81012] = state(1927);
	v->a[81013] = 1;
	v->a[81014] = sym_heredoc_body;
	v->a[81015] = 6;
	v->a[81016] = actions(664);
	v->a[81017] = 1;
	v->a[81018] = sym_comment;
	v->a[81019] = actions(3611);
	small_parse_table_4051(v);
}

void	small_parse_table_4051(t_small_parse_table_array *v)
{
	v->a[81020] = 1;
	v->a[81021] = sym_simple_heredoc_body;
	v->a[81022] = actions(3613);
	v->a[81023] = 1;
	v->a[81024] = sym__heredoc_body_beginning;
	v->a[81025] = state(1258);
	v->a[81026] = 1;
	v->a[81027] = sym__heredoc_body;
	v->a[81028] = state(1265);
	v->a[81029] = 1;
	v->a[81030] = sym__simple_heredoc_body;
	v->a[81031] = state(1927);
	v->a[81032] = 1;
	v->a[81033] = sym_heredoc_body;
	v->a[81034] = 2;
	v->a[81035] = actions(664);
	v->a[81036] = 1;
	v->a[81037] = sym_comment;
	v->a[81038] = actions(846);
	v->a[81039] = 5;
	small_parse_table_4052(v);
}

void	small_parse_table_4052(t_small_parse_table_array *v)
{
	v->a[81040] = sym__concat;
	v->a[81041] = anon_sym_PIPE;
	v->a[81042] = anon_sym_RPAREN;
	v->a[81043] = anon_sym_RBRACE;
	v->a[81044] = aux_sym_concatenation_token1;
	v->a[81045] = 5;
	v->a[81046] = actions(664);
	v->a[81047] = 1;
	v->a[81048] = sym_comment;
	v->a[81049] = actions(3613);
	v->a[81050] = 1;
	v->a[81051] = sym__heredoc_body_beginning;
	v->a[81052] = actions(3618);
	v->a[81053] = 1;
	v->a[81054] = sym_simple_heredoc_body;
	v->a[81055] = state(2071);
	v->a[81056] = 1;
	v->a[81057] = sym_heredoc_body;
	v->a[81058] = state(1161);
	v->a[81059] = 2;
	small_parse_table_4053(v);
}

void	small_parse_table_4053(t_small_parse_table_array *v)
{
	v->a[81060] = sym__heredoc_body;
	v->a[81061] = sym__simple_heredoc_body;
	v->a[81062] = 5;
	v->a[81063] = actions(664);
	v->a[81064] = 1;
	v->a[81065] = sym_comment;
	v->a[81066] = actions(3613);
	v->a[81067] = 1;
	v->a[81068] = sym__heredoc_body_beginning;
	v->a[81069] = actions(3618);
	v->a[81070] = 1;
	v->a[81071] = sym_simple_heredoc_body;
	v->a[81072] = state(2071);
	v->a[81073] = 1;
	v->a[81074] = sym_heredoc_body;
	v->a[81075] = state(1101);
	v->a[81076] = 2;
	v->a[81077] = sym__heredoc_body;
	v->a[81078] = sym__simple_heredoc_body;
	v->a[81079] = 6;
	small_parse_table_4054(v);
}

void	small_parse_table_4054(t_small_parse_table_array *v)
{
	v->a[81080] = actions(664);
	v->a[81081] = 1;
	v->a[81082] = sym_comment;
	v->a[81083] = actions(3613);
	v->a[81084] = 1;
	v->a[81085] = sym__heredoc_body_beginning;
	v->a[81086] = actions(3618);
	v->a[81087] = 1;
	v->a[81088] = sym_simple_heredoc_body;
	v->a[81089] = state(1105);
	v->a[81090] = 1;
	v->a[81091] = sym__heredoc_body;
	v->a[81092] = state(1106);
	v->a[81093] = 1;
	v->a[81094] = sym__simple_heredoc_body;
	v->a[81095] = state(2071);
	v->a[81096] = 1;
	v->a[81097] = sym_heredoc_body;
	v->a[81098] = 6;
	v->a[81099] = actions(664);
	small_parse_table_4055(v);
}

/* EOF small_parse_table_810.c */
