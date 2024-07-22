/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_720.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3600(t_small_parse_table_array *v)
{
	v->a[72000] = 1;
	v->a[72001] = anon_sym_DQUOTE;
	v->a[72002] = actions(2904);
	v->a[72003] = 1;
	v->a[72004] = sym_string_content;
	v->a[72005] = actions(2908);
	v->a[72006] = 1;
	v->a[72007] = sym_variable_name;
	v->a[72008] = actions(2906);
	v->a[72009] = 2;
	v->a[72010] = aux_sym__simple_variable_name_token1;
	v->a[72011] = aux_sym__multiline_variable_name_token1;
	v->a[72012] = actions(2900);
	v->a[72013] = 8;
	v->a[72014] = anon_sym_BANG;
	v->a[72015] = anon_sym_DASH;
	v->a[72016] = anon_sym_STAR;
	v->a[72017] = anon_sym_QMARK;
	v->a[72018] = anon_sym_DOLLAR;
	v->a[72019] = anon_sym_POUND;
	small_parse_table_3601(v);
}

void	small_parse_table_3601(t_small_parse_table_array *v)
{
	v->a[72020] = anon_sym_AT;
	v->a[72021] = anon_sym_0;
	v->a[72022] = 6;
	v->a[72023] = actions(3);
	v->a[72024] = 1;
	v->a[72025] = sym_comment;
	v->a[72026] = actions(2904);
	v->a[72027] = 1;
	v->a[72028] = sym_string_content;
	v->a[72029] = actions(2908);
	v->a[72030] = 1;
	v->a[72031] = sym_variable_name;
	v->a[72032] = actions(2910);
	v->a[72033] = 1;
	v->a[72034] = anon_sym_DQUOTE;
	v->a[72035] = actions(2906);
	v->a[72036] = 2;
	v->a[72037] = aux_sym__simple_variable_name_token1;
	v->a[72038] = aux_sym__multiline_variable_name_token1;
	v->a[72039] = actions(2900);
	small_parse_table_3602(v);
}

void	small_parse_table_3602(t_small_parse_table_array *v)
{
	v->a[72040] = 8;
	v->a[72041] = anon_sym_BANG;
	v->a[72042] = anon_sym_DASH;
	v->a[72043] = anon_sym_STAR;
	v->a[72044] = anon_sym_QMARK;
	v->a[72045] = anon_sym_DOLLAR;
	v->a[72046] = anon_sym_POUND;
	v->a[72047] = anon_sym_AT;
	v->a[72048] = anon_sym_0;
	v->a[72049] = 3;
	v->a[72050] = actions(501);
	v->a[72051] = 1;
	v->a[72052] = sym_comment;
	v->a[72053] = actions(2126);
	v->a[72054] = 4;
	v->a[72055] = anon_sym_PIPE;
	v->a[72056] = anon_sym_LT;
	v->a[72057] = anon_sym_GT;
	v->a[72058] = anon_sym_LT_LT;
	v->a[72059] = actions(2124);
	small_parse_table_3603(v);
}

void	small_parse_table_3603(t_small_parse_table_array *v)
{
	v->a[72060] = 9;
	v->a[72061] = sym_file_descriptor;
	v->a[72062] = anon_sym_AMP_AMP;
	v->a[72063] = anon_sym_PIPE_PIPE;
	v->a[72064] = anon_sym_GT_GT;
	v->a[72065] = anon_sym_LT_AMP;
	v->a[72066] = anon_sym_GT_AMP;
	v->a[72067] = anon_sym_GT_PIPE;
	v->a[72068] = anon_sym_LT_GT;
	v->a[72069] = anon_sym_LT_LT_DASH;
	v->a[72070] = 3;
	v->a[72071] = actions(501);
	v->a[72072] = 1;
	v->a[72073] = sym_comment;
	v->a[72074] = actions(2067);
	v->a[72075] = 4;
	v->a[72076] = anon_sym_PIPE;
	v->a[72077] = anon_sym_LT;
	v->a[72078] = anon_sym_GT;
	v->a[72079] = anon_sym_LT_LT;
	small_parse_table_3604(v);
}

void	small_parse_table_3604(t_small_parse_table_array *v)
{
	v->a[72080] = actions(2065);
	v->a[72081] = 9;
	v->a[72082] = sym_file_descriptor;
	v->a[72083] = anon_sym_AMP_AMP;
	v->a[72084] = anon_sym_PIPE_PIPE;
	v->a[72085] = anon_sym_GT_GT;
	v->a[72086] = anon_sym_LT_AMP;
	v->a[72087] = anon_sym_GT_AMP;
	v->a[72088] = anon_sym_GT_PIPE;
	v->a[72089] = anon_sym_LT_GT;
	v->a[72090] = anon_sym_LT_LT_DASH;
	v->a[72091] = 3;
	v->a[72092] = actions(501);
	v->a[72093] = 1;
	v->a[72094] = sym_comment;
	v->a[72095] = actions(2097);
	v->a[72096] = 4;
	v->a[72097] = anon_sym_PIPE;
	v->a[72098] = anon_sym_LT;
	v->a[72099] = anon_sym_GT;
	small_parse_table_3605(v);
}

/* EOF small_parse_table_720.c */
