/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_320.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1600(t_small_parse_table_array *v)
{
	v->a[32000] = actions(852);
	v->a[32001] = 2;
	v->a[32002] = anon_sym_GT_GT;
	v->a[32003] = anon_sym_LT_LT;
	v->a[32004] = actions(860);
	v->a[32005] = 2;
	v->a[32006] = anon_sym_EQ_EQ;
	v->a[32007] = anon_sym_BANG_EQ;
	v->a[32008] = actions(862);
	v->a[32009] = 2;
	v->a[32010] = anon_sym_LT_EQ;
	v->a[32011] = anon_sym_GT_EQ;
	v->a[32012] = actions(864);
	v->a[32013] = 2;
	v->a[32014] = anon_sym_PLUS;
	v->a[32015] = anon_sym_DASH;
	v->a[32016] = actions(868);
	v->a[32017] = 2;
	v->a[32018] = anon_sym_PLUS_PLUS2;
	v->a[32019] = anon_sym_DASH_DASH2;
	small_parse_table_1601(v);
}

void	small_parse_table_1601(t_small_parse_table_array *v)
{
	v->a[32020] = actions(866);
	v->a[32021] = 3;
	v->a[32022] = anon_sym_STAR;
	v->a[32023] = anon_sym_SLASH;
	v->a[32024] = anon_sym_PERCENT;
	v->a[32025] = actions(1079);
	v->a[32026] = 10;
	v->a[32027] = anon_sym_PLUS_EQ;
	v->a[32028] = anon_sym_DASH_EQ;
	v->a[32029] = anon_sym_STAR_EQ;
	v->a[32030] = anon_sym_SLASH_EQ;
	v->a[32031] = anon_sym_PERCENT_EQ;
	v->a[32032] = anon_sym_LT_LT_EQ;
	v->a[32033] = anon_sym_GT_GT_EQ;
	v->a[32034] = anon_sym_AMP_EQ;
	v->a[32035] = anon_sym_CARET_EQ;
	v->a[32036] = anon_sym_PIPE_EQ;
	v->a[32037] = 3;
	v->a[32038] = actions(870);
	v->a[32039] = 1;
	small_parse_table_1602(v);
}

void	small_parse_table_1602(t_small_parse_table_array *v)
{
	v->a[32040] = sym_comment;
	v->a[32041] = actions(1013);
	v->a[32042] = 13;
	v->a[32043] = anon_sym_PIPE;
	v->a[32044] = anon_sym_EQ;
	v->a[32045] = anon_sym_LT;
	v->a[32046] = anon_sym_GT;
	v->a[32047] = anon_sym_GT_GT;
	v->a[32048] = anon_sym_LT_LT;
	v->a[32049] = anon_sym_CARET;
	v->a[32050] = anon_sym_AMP;
	v->a[32051] = anon_sym_PLUS;
	v->a[32052] = anon_sym_DASH;
	v->a[32053] = anon_sym_STAR;
	v->a[32054] = anon_sym_SLASH;
	v->a[32055] = anon_sym_PERCENT;
	v->a[32056] = actions(1015);
	v->a[32057] = 20;
	v->a[32058] = anon_sym_RPAREN;
	v->a[32059] = anon_sym_AMP_AMP;
	small_parse_table_1603(v);
}

void	small_parse_table_1603(t_small_parse_table_array *v)
{
	v->a[32060] = anon_sym_PIPE_PIPE;
	v->a[32061] = anon_sym_PLUS_EQ;
	v->a[32062] = anon_sym_DASH_EQ;
	v->a[32063] = anon_sym_STAR_EQ;
	v->a[32064] = anon_sym_SLASH_EQ;
	v->a[32065] = anon_sym_PERCENT_EQ;
	v->a[32066] = anon_sym_LT_LT_EQ;
	v->a[32067] = anon_sym_GT_GT_EQ;
	v->a[32068] = anon_sym_AMP_EQ;
	v->a[32069] = anon_sym_CARET_EQ;
	v->a[32070] = anon_sym_PIPE_EQ;
	v->a[32071] = anon_sym_EQ_EQ;
	v->a[32072] = anon_sym_BANG_EQ;
	v->a[32073] = anon_sym_LT_EQ;
	v->a[32074] = anon_sym_GT_EQ;
	v->a[32075] = anon_sym_QMARK;
	v->a[32076] = anon_sym_PLUS_PLUS2;
	v->a[32077] = anon_sym_DASH_DASH2;
	v->a[32078] = 6;
	v->a[32079] = actions(3);
	small_parse_table_1604(v);
}

void	small_parse_table_1604(t_small_parse_table_array *v)
{
	v->a[32080] = 1;
	v->a[32081] = sym_comment;
	v->a[32082] = actions(1170);
	v->a[32083] = 1;
	v->a[32084] = aux_sym_concatenation_token1;
	v->a[32085] = actions(1201);
	v->a[32086] = 1;
	v->a[32087] = sym__concat;
	v->a[32088] = state(368);
	v->a[32089] = 1;
	v->a[32090] = aux_sym_concatenation_repeat1;
	v->a[32091] = actions(1095);
	v->a[32092] = 2;
	v->a[32093] = sym_file_descriptor;
	v->a[32094] = sym__bare_dollar;
	v->a[32095] = actions(1097);
	v->a[32096] = 28;
	v->a[32097] = anon_sym_esac;
	v->a[32098] = anon_sym_LPAREN;
	v->a[32099] = anon_sym_PIPE;
	small_parse_table_1605(v);
}

/* EOF small_parse_table_320.c */
