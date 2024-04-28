/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1300.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6500(t_small_parse_table_array *v)
{
	v->a[130000] = anon_sym_PLUS_EQ;
	v->a[130001] = anon_sym_DASH_EQ;
	v->a[130002] = anon_sym_STAR_EQ;
	v->a[130003] = anon_sym_SLASH_EQ;
	v->a[130004] = anon_sym_PERCENT_EQ;
	v->a[130005] = anon_sym_STAR_STAR_EQ;
	v->a[130006] = anon_sym_LT_LT_EQ;
	v->a[130007] = anon_sym_GT_GT_EQ;
	v->a[130008] = anon_sym_AMP_EQ;
	v->a[130009] = anon_sym_CARET_EQ;
	v->a[130010] = anon_sym_PIPE_EQ;
	v->a[130011] = anon_sym_PIPE_PIPE;
	v->a[130012] = anon_sym_AMP_AMP;
	v->a[130013] = anon_sym_EQ_EQ;
	v->a[130014] = anon_sym_BANG_EQ;
	v->a[130015] = anon_sym_LT_EQ;
	v->a[130016] = anon_sym_GT_EQ;
	v->a[130017] = anon_sym_RBRACK;
	v->a[130018] = anon_sym_EQ_TILDE;
	v->a[130019] = anon_sym_QMARK;
	small_parse_table_6501(v);
}

void	small_parse_table_6501(t_small_parse_table_array *v)
{
	v->a[130020] = 6;
	v->a[130021] = actions(71);
	v->a[130022] = 1;
	v->a[130023] = sym_comment;
	v->a[130024] = actions(1143);
	v->a[130025] = 1;
	v->a[130026] = aux_sym_concatenation_token1;
	v->a[130027] = actions(6685);
	v->a[130028] = 1;
	v->a[130029] = sym__concat;
	v->a[130030] = state(2312);
	v->a[130031] = 1;
	v->a[130032] = aux_sym_concatenation_repeat1;
	v->a[130033] = actions(1286);
	v->a[130034] = 14;
	v->a[130035] = anon_sym_EQ;
	v->a[130036] = anon_sym_PIPE;
	v->a[130037] = anon_sym_CARET;
	v->a[130038] = anon_sym_AMP;
	v->a[130039] = anon_sym_LT;
	small_parse_table_6502(v);
}

void	small_parse_table_6502(t_small_parse_table_array *v)
{
	v->a[130040] = anon_sym_GT;
	v->a[130041] = anon_sym_LT_LT;
	v->a[130042] = anon_sym_GT_GT;
	v->a[130043] = anon_sym_PLUS;
	v->a[130044] = anon_sym_DASH;
	v->a[130045] = anon_sym_STAR;
	v->a[130046] = anon_sym_SLASH;
	v->a[130047] = anon_sym_PERCENT;
	v->a[130048] = anon_sym_STAR_STAR;
	v->a[130049] = actions(1288);
	v->a[130050] = 23;
	v->a[130051] = sym_test_operator;
	v->a[130052] = anon_sym_PLUS_PLUS;
	v->a[130053] = anon_sym_DASH_DASH;
	v->a[130054] = anon_sym_PLUS_EQ;
	v->a[130055] = anon_sym_DASH_EQ;
	v->a[130056] = anon_sym_STAR_EQ;
	v->a[130057] = anon_sym_SLASH_EQ;
	v->a[130058] = anon_sym_PERCENT_EQ;
	v->a[130059] = anon_sym_STAR_STAR_EQ;
	small_parse_table_6503(v);
}

void	small_parse_table_6503(t_small_parse_table_array *v)
{
	v->a[130060] = anon_sym_LT_LT_EQ;
	v->a[130061] = anon_sym_GT_GT_EQ;
	v->a[130062] = anon_sym_AMP_EQ;
	v->a[130063] = anon_sym_CARET_EQ;
	v->a[130064] = anon_sym_PIPE_EQ;
	v->a[130065] = anon_sym_PIPE_PIPE;
	v->a[130066] = anon_sym_AMP_AMP;
	v->a[130067] = anon_sym_EQ_EQ;
	v->a[130068] = anon_sym_BANG_EQ;
	v->a[130069] = anon_sym_LT_EQ;
	v->a[130070] = anon_sym_GT_EQ;
	v->a[130071] = anon_sym_RBRACK_RBRACK;
	v->a[130072] = anon_sym_EQ_TILDE;
	v->a[130073] = anon_sym_QMARK;
	v->a[130074] = 5;
	v->a[130075] = actions(71);
	v->a[130076] = 1;
	v->a[130077] = sym_comment;
	v->a[130078] = actions(6687);
	v->a[130079] = 1;
	small_parse_table_6504(v);
}

void	small_parse_table_6504(t_small_parse_table_array *v)
{
	v->a[130080] = sym__special_character;
	v->a[130081] = state(2474);
	v->a[130082] = 1;
	v->a[130083] = aux_sym__literal_repeat1;
	v->a[130084] = actions(1362);
	v->a[130085] = 14;
	v->a[130086] = anon_sym_EQ;
	v->a[130087] = anon_sym_PIPE;
	v->a[130088] = anon_sym_CARET;
	v->a[130089] = anon_sym_AMP;
	v->a[130090] = anon_sym_LT;
	v->a[130091] = anon_sym_GT;
	v->a[130092] = anon_sym_LT_LT;
	v->a[130093] = anon_sym_GT_GT;
	v->a[130094] = anon_sym_PLUS;
	v->a[130095] = anon_sym_DASH;
	v->a[130096] = anon_sym_STAR;
	v->a[130097] = anon_sym_SLASH;
	v->a[130098] = anon_sym_PERCENT;
	v->a[130099] = anon_sym_STAR_STAR;
	small_parse_table_6505(v);
}

/* EOF small_parse_table_1300.c */
