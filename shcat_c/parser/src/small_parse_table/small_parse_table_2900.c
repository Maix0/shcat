/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2900.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14500(t_small_parse_table_array *v)
{
	v->a[290000] = actions(4554);
	v->a[290001] = 11;
	v->a[290002] = sym_file_descriptor;
	v->a[290003] = anon_sym_PIPE_PIPE;
	v->a[290004] = anon_sym_AMP_AMP;
	v->a[290005] = anon_sym_GT_GT;
	v->a[290006] = anon_sym_PIPE_AMP;
	v->a[290007] = anon_sym_RBRACK;
	v->a[290008] = anon_sym_AMP_GT_GT;
	v->a[290009] = anon_sym_GT_PIPE;
	v->a[290010] = anon_sym_LT_AMP_DASH;
	v->a[290011] = anon_sym_GT_AMP_DASH;
	v->a[290012] = anon_sym_LT_LT_DASH;
	v->a[290013] = 9;
	v->a[290014] = actions(71);
	v->a[290015] = 1;
	v->a[290016] = sym_comment;
	v->a[290017] = actions(4692);
	v->a[290018] = 1;
	v->a[290019] = anon_sym_LT_LT;
	small_parse_table_14501(v);
}

void	small_parse_table_14501(t_small_parse_table_array *v)
{
	v->a[290020] = actions(11993);
	v->a[290021] = 1;
	v->a[290022] = sym_file_descriptor;
	v->a[290023] = actions(12954);
	v->a[290024] = 1;
	v->a[290025] = anon_sym_LT_LT_DASH;
	v->a[290026] = actions(12948);
	v->a[290027] = 2;
	v->a[290028] = anon_sym_PIPE_PIPE;
	v->a[290029] = anon_sym_AMP_AMP;
	v->a[290030] = actions(12952);
	v->a[290031] = 2;
	v->a[290032] = anon_sym_LT_AMP_DASH;
	v->a[290033] = anon_sym_GT_AMP_DASH;
	v->a[290034] = actions(12950);
	v->a[290035] = 3;
	v->a[290036] = anon_sym_GT_GT;
	v->a[290037] = anon_sym_AMP_GT_GT;
	v->a[290038] = anon_sym_GT_PIPE;
	v->a[290039] = state(4746);
	small_parse_table_14502(v);
}

void	small_parse_table_14502(t_small_parse_table_array *v)
{
	v->a[290040] = 3;
	v->a[290041] = sym_file_redirect;
	v->a[290042] = sym_heredoc_redirect;
	v->a[290043] = aux_sym_redirected_statement_repeat1;
	v->a[290044] = actions(11540);
	v->a[290045] = 5;
	v->a[290046] = anon_sym_LT;
	v->a[290047] = anon_sym_GT;
	v->a[290048] = anon_sym_AMP_GT;
	v->a[290049] = anon_sym_LT_AMP;
	v->a[290050] = anon_sym_GT_AMP;
	v->a[290051] = 9;
	v->a[290052] = actions(71);
	v->a[290053] = 1;
	v->a[290054] = sym_comment;
	v->a[290055] = actions(12860);
	v->a[290056] = 1;
	v->a[290057] = anon_sym_LT_LT;
	v->a[290058] = actions(12862);
	v->a[290059] = 1;
	small_parse_table_14503(v);
}

void	small_parse_table_14503(t_small_parse_table_array *v)
{
	v->a[290060] = anon_sym_LT_LT_DASH;
	v->a[290061] = actions(12864);
	v->a[290062] = 1;
	v->a[290063] = sym_file_descriptor;
	v->a[290064] = actions(5992);
	v->a[290065] = 2;
	v->a[290066] = anon_sym_PIPE_PIPE;
	v->a[290067] = anon_sym_AMP_AMP;
	v->a[290068] = actions(12836);
	v->a[290069] = 2;
	v->a[290070] = anon_sym_LT_AMP_DASH;
	v->a[290071] = anon_sym_GT_AMP_DASH;
	v->a[290072] = actions(12834);
	v->a[290073] = 3;
	v->a[290074] = anon_sym_GT_GT;
	v->a[290075] = anon_sym_AMP_GT_GT;
	v->a[290076] = anon_sym_GT_PIPE;
	v->a[290077] = state(5436);
	v->a[290078] = 3;
	v->a[290079] = sym_file_redirect;
	small_parse_table_14504(v);
}

void	small_parse_table_14504(t_small_parse_table_array *v)
{
	v->a[290080] = sym_heredoc_redirect;
	v->a[290081] = aux_sym_redirected_statement_repeat1;
	v->a[290082] = actions(12832);
	v->a[290083] = 5;
	v->a[290084] = anon_sym_LT;
	v->a[290085] = anon_sym_GT;
	v->a[290086] = anon_sym_AMP_GT;
	v->a[290087] = anon_sym_LT_AMP;
	v->a[290088] = anon_sym_GT_AMP;
	v->a[290089] = 3;
	v->a[290090] = actions(71);
	v->a[290091] = 1;
	v->a[290092] = sym_comment;
	v->a[290093] = actions(5766);
	v->a[290094] = 7;
	v->a[290095] = anon_sym_PIPE;
	v->a[290096] = anon_sym_LT;
	v->a[290097] = anon_sym_GT;
	v->a[290098] = anon_sym_LT_LT;
	v->a[290099] = anon_sym_AMP_GT;
	small_parse_table_14505(v);
}

/* EOF small_parse_table_2900.c */
