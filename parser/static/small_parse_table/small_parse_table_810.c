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
	v->a[81000] = state(1128);
	v->a[81001] = 2;
	v->a[81002] = sym__heredoc_body;
	v->a[81003] = sym__simple_heredoc_body;
	v->a[81004] = 4;
	v->a[81005] = actions(501);
	v->a[81006] = 1;
	v->a[81007] = sym_comment;
	v->a[81008] = actions(3654);
	v->a[81009] = 1;
	v->a[81010] = anon_sym_RBRACE;
	v->a[81011] = state(1864);
	v->a[81012] = 1;
	v->a[81013] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[81014] = actions(3656);
	v->a[81015] = 2;
	v->a[81016] = sym__concat;
	v->a[81017] = aux_sym_concatenation_token1;
	v->a[81018] = 4;
	v->a[81019] = actions(501);
	small_parse_table_4051(v);
}

void	small_parse_table_4051(t_small_parse_table_array *v)
{
	v->a[81020] = 1;
	v->a[81021] = sym_comment;
	v->a[81022] = actions(3658);
	v->a[81023] = 1;
	v->a[81024] = anon_sym_RBRACE;
	v->a[81025] = state(1864);
	v->a[81026] = 1;
	v->a[81027] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[81028] = actions(3660);
	v->a[81029] = 2;
	v->a[81030] = sym__concat;
	v->a[81031] = aux_sym_concatenation_token1;
	v->a[81032] = 2;
	v->a[81033] = actions(501);
	v->a[81034] = 1;
	v->a[81035] = sym_comment;
	v->a[81036] = actions(1110);
	v->a[81037] = 4;
	v->a[81038] = sym__concat;
	v->a[81039] = anon_sym_PIPE;
	small_parse_table_4052(v);
}

void	small_parse_table_4052(t_small_parse_table_array *v)
{
	v->a[81040] = anon_sym_RPAREN;
	v->a[81041] = aux_sym_concatenation_token1;
	v->a[81042] = 2;
	v->a[81043] = actions(501);
	v->a[81044] = 1;
	v->a[81045] = sym_comment;
	v->a[81046] = actions(1229);
	v->a[81047] = 4;
	v->a[81048] = sym__concat;
	v->a[81049] = anon_sym_PIPE;
	v->a[81050] = anon_sym_RPAREN;
	v->a[81051] = aux_sym_concatenation_token1;
	v->a[81052] = 4;
	v->a[81053] = actions(501);
	v->a[81054] = 1;
	v->a[81055] = sym_comment;
	v->a[81056] = actions(3663);
	v->a[81057] = 1;
	v->a[81058] = anon_sym_RBRACE;
	v->a[81059] = state(1864);
	small_parse_table_4053(v);
}

void	small_parse_table_4053(t_small_parse_table_array *v)
{
	v->a[81060] = 1;
	v->a[81061] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[81062] = actions(3656);
	v->a[81063] = 2;
	v->a[81064] = sym__concat;
	v->a[81065] = aux_sym_concatenation_token1;
	v->a[81066] = 2;
	v->a[81067] = actions(501);
	v->a[81068] = 1;
	v->a[81069] = sym_comment;
	v->a[81070] = actions(1162);
	v->a[81071] = 4;
	v->a[81072] = sym__concat;
	v->a[81073] = anon_sym_PIPE;
	v->a[81074] = anon_sym_RPAREN;
	v->a[81075] = aux_sym_concatenation_token1;
	v->a[81076] = 4;
	v->a[81077] = actions(501);
	v->a[81078] = 1;
	v->a[81079] = sym_comment;
	small_parse_table_4054(v);
}

void	small_parse_table_4054(t_small_parse_table_array *v)
{
	v->a[81080] = actions(3665);
	v->a[81081] = 1;
	v->a[81082] = anon_sym_RBRACE;
	v->a[81083] = state(1863);
	v->a[81084] = 1;
	v->a[81085] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[81086] = actions(3656);
	v->a[81087] = 2;
	v->a[81088] = sym__concat;
	v->a[81089] = aux_sym_concatenation_token1;
	v->a[81090] = 4;
	v->a[81091] = actions(501);
	v->a[81092] = 1;
	v->a[81093] = sym_comment;
	v->a[81094] = actions(3665);
	v->a[81095] = 1;
	v->a[81096] = anon_sym_RBRACE;
	v->a[81097] = state(1867);
	v->a[81098] = 1;
	v->a[81099] = aux_sym__concatenation_in_expansion_repeat1;
	small_parse_table_4055(v);
}

/* EOF small_parse_table_810.c */
