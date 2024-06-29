/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_380.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1900(t_small_parse_table_array *v)
{
	v->a[38000] = actions(1138);
	v->a[38001] = 1;
	v->a[38002] = anon_sym_AMP_AMP;
	v->a[38003] = actions(1140);
	v->a[38004] = 1;
	v->a[38005] = anon_sym_PIPE_PIPE;
	v->a[38006] = actions(1150);
	v->a[38007] = 1;
	v->a[38008] = anon_sym_CARET;
	v->a[38009] = actions(1152);
	v->a[38010] = 1;
	v->a[38011] = anon_sym_AMP;
	v->a[38012] = actions(1239);
	v->a[38013] = 1;
	v->a[38014] = anon_sym_EQ;
	v->a[38015] = actions(1241);
	v->a[38016] = 1;
	v->a[38017] = anon_sym_QMARK;
	v->a[38018] = actions(1390);
	v->a[38019] = 1;
	small_parse_table_1901(v);
}

void	small_parse_table_1901(t_small_parse_table_array *v)
{
	v->a[38020] = anon_sym_RPAREN_RPAREN;
	v->a[38021] = actions(1144);
	v->a[38022] = 2;
	v->a[38023] = anon_sym_LT;
	v->a[38024] = anon_sym_GT;
	v->a[38025] = actions(1146);
	v->a[38026] = 2;
	v->a[38027] = anon_sym_GT_GT;
	v->a[38028] = anon_sym_LT_LT;
	v->a[38029] = actions(1154);
	v->a[38030] = 2;
	v->a[38031] = anon_sym_EQ_EQ;
	v->a[38032] = anon_sym_BANG_EQ;
	v->a[38033] = actions(1156);
	v->a[38034] = 2;
	v->a[38035] = anon_sym_LT_EQ;
	v->a[38036] = anon_sym_GT_EQ;
	v->a[38037] = actions(1158);
	v->a[38038] = 2;
	v->a[38039] = anon_sym_PLUS;
	small_parse_table_1902(v);
}

void	small_parse_table_1902(t_small_parse_table_array *v)
{
	v->a[38040] = anon_sym_DASH;
	v->a[38041] = actions(1162);
	v->a[38042] = 2;
	v->a[38043] = anon_sym_PLUS_PLUS2;
	v->a[38044] = anon_sym_DASH_DASH2;
	v->a[38045] = actions(1160);
	v->a[38046] = 3;
	v->a[38047] = anon_sym_STAR;
	v->a[38048] = anon_sym_SLASH;
	v->a[38049] = anon_sym_PERCENT;
	v->a[38050] = actions(1252);
	v->a[38051] = 10;
	v->a[38052] = anon_sym_PLUS_EQ;
	v->a[38053] = anon_sym_DASH_EQ;
	v->a[38054] = anon_sym_STAR_EQ;
	v->a[38055] = anon_sym_SLASH_EQ;
	v->a[38056] = anon_sym_PERCENT_EQ;
	v->a[38057] = anon_sym_LT_LT_EQ;
	v->a[38058] = anon_sym_GT_GT_EQ;
	v->a[38059] = anon_sym_AMP_EQ;
	small_parse_table_1903(v);
}

void	small_parse_table_1903(t_small_parse_table_array *v)
{
	v->a[38060] = anon_sym_CARET_EQ;
	v->a[38061] = anon_sym_PIPE_EQ;
	v->a[38062] = 6;
	v->a[38063] = actions(3);
	v->a[38064] = 1;
	v->a[38065] = sym_comment;
	v->a[38066] = actions(1092);
	v->a[38067] = 1;
	v->a[38068] = aux_sym_concatenation_token1;
	v->a[38069] = actions(1096);
	v->a[38070] = 1;
	v->a[38071] = sym__concat;
	v->a[38072] = state(500);
	v->a[38073] = 1;
	v->a[38074] = aux_sym_concatenation_repeat1;
	v->a[38075] = actions(1094);
	v->a[38076] = 2;
	v->a[38077] = sym_file_descriptor;
	v->a[38078] = sym_variable_name;
	v->a[38079] = actions(1090);
	small_parse_table_1904(v);
}

void	small_parse_table_1904(t_small_parse_table_array *v)
{
	v->a[38080] = 28;
	v->a[38081] = anon_sym_PIPE;
	v->a[38082] = anon_sym_SEMI_SEMI;
	v->a[38083] = anon_sym_AMP_AMP;
	v->a[38084] = anon_sym_PIPE_PIPE;
	v->a[38085] = anon_sym_LT;
	v->a[38086] = anon_sym_GT;
	v->a[38087] = anon_sym_GT_GT;
	v->a[38088] = anon_sym_AMP_GT;
	v->a[38089] = anon_sym_AMP_GT_GT;
	v->a[38090] = anon_sym_LT_AMP;
	v->a[38091] = anon_sym_GT_AMP;
	v->a[38092] = anon_sym_GT_PIPE;
	v->a[38093] = anon_sym_LT_AMP_DASH;
	v->a[38094] = anon_sym_GT_AMP_DASH;
	v->a[38095] = anon_sym_LT_LT;
	v->a[38096] = anon_sym_LT_LT_DASH;
	v->a[38097] = aux_sym_heredoc_redirect_token1;
	v->a[38098] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38099] = anon_sym_AMP;
	small_parse_table_1905(v);
}

/* EOF small_parse_table_380.c */
