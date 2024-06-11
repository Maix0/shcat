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
	v->a[38000] = 30;
	v->a[38001] = anon_sym_PIPE;
	v->a[38002] = anon_sym_RPAREN;
	v->a[38003] = anon_sym_SEMI_SEMI;
	v->a[38004] = anon_sym_AMP_AMP;
	v->a[38005] = anon_sym_PIPE_PIPE;
	v->a[38006] = anon_sym_LT;
	v->a[38007] = anon_sym_GT;
	v->a[38008] = anon_sym_GT_GT;
	v->a[38009] = anon_sym_AMP_GT;
	v->a[38010] = anon_sym_AMP_GT_GT;
	v->a[38011] = anon_sym_LT_AMP;
	v->a[38012] = anon_sym_GT_AMP;
	v->a[38013] = anon_sym_GT_PIPE;
	v->a[38014] = anon_sym_LT_AMP_DASH;
	v->a[38015] = anon_sym_GT_AMP_DASH;
	v->a[38016] = anon_sym_LT_LT;
	v->a[38017] = anon_sym_LT_LT_DASH;
	v->a[38018] = aux_sym_heredoc_redirect_token1;
	v->a[38019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1901(v);
}

void	small_parse_table_1901(t_small_parse_table_array *v)
{
	v->a[38020] = anon_sym_AMP;
	v->a[38021] = aux_sym_concatenation_token1;
	v->a[38022] = anon_sym_DOLLAR;
	v->a[38023] = anon_sym_DQUOTE;
	v->a[38024] = sym_raw_string;
	v->a[38025] = sym_number;
	v->a[38026] = anon_sym_DOLLAR_LBRACE;
	v->a[38027] = anon_sym_DOLLAR_LPAREN;
	v->a[38028] = anon_sym_BQUOTE;
	v->a[38029] = sym_word;
	v->a[38030] = anon_sym_SEMI;
	v->a[38031] = 17;
	v->a[38032] = actions(1094);
	v->a[38033] = 1;
	v->a[38034] = sym_comment;
	v->a[38035] = actions(1108);
	v->a[38036] = 1;
	v->a[38037] = anon_sym_PIPE;
	v->a[38038] = actions(1110);
	v->a[38039] = 1;
	small_parse_table_1902(v);
}

void	small_parse_table_1902(t_small_parse_table_array *v)
{
	v->a[38040] = anon_sym_AMP_AMP;
	v->a[38041] = actions(1112);
	v->a[38042] = 1;
	v->a[38043] = anon_sym_CARET;
	v->a[38044] = actions(1114);
	v->a[38045] = 1;
	v->a[38046] = anon_sym_AMP;
	v->a[38047] = actions(1126);
	v->a[38048] = 1;
	v->a[38049] = anon_sym_PIPE_PIPE;
	v->a[38050] = actions(1128);
	v->a[38051] = 1;
	v->a[38052] = anon_sym_QMARK;
	v->a[38053] = actions(1155);
	v->a[38054] = 1;
	v->a[38055] = anon_sym_EQ;
	v->a[38056] = actions(1433);
	v->a[38057] = 1;
	v->a[38058] = anon_sym_RPAREN_RPAREN;
	v->a[38059] = actions(1082);
	small_parse_table_1903(v);
}

void	small_parse_table_1903(t_small_parse_table_array *v)
{
	v->a[38060] = 2;
	v->a[38061] = anon_sym_LT;
	v->a[38062] = anon_sym_GT;
	v->a[38063] = actions(1084);
	v->a[38064] = 2;
	v->a[38065] = anon_sym_GT_GT;
	v->a[38066] = anon_sym_LT_LT;
	v->a[38067] = actions(1086);
	v->a[38068] = 2;
	v->a[38069] = anon_sym_LT_EQ;
	v->a[38070] = anon_sym_GT_EQ;
	v->a[38071] = actions(1088);
	v->a[38072] = 2;
	v->a[38073] = anon_sym_PLUS;
	v->a[38074] = anon_sym_DASH;
	v->a[38075] = actions(1092);
	v->a[38076] = 2;
	v->a[38077] = anon_sym_PLUS_PLUS2;
	v->a[38078] = anon_sym_DASH_DASH2;
	v->a[38079] = actions(1116);
	small_parse_table_1904(v);
}

void	small_parse_table_1904(t_small_parse_table_array *v)
{
	v->a[38080] = 2;
	v->a[38081] = anon_sym_EQ_EQ;
	v->a[38082] = anon_sym_BANG_EQ;
	v->a[38083] = actions(1090);
	v->a[38084] = 3;
	v->a[38085] = anon_sym_STAR;
	v->a[38086] = anon_sym_SLASH;
	v->a[38087] = anon_sym_PERCENT;
	v->a[38088] = actions(1288);
	v->a[38089] = 10;
	v->a[38090] = anon_sym_PLUS_EQ;
	v->a[38091] = anon_sym_DASH_EQ;
	v->a[38092] = anon_sym_STAR_EQ;
	v->a[38093] = anon_sym_SLASH_EQ;
	v->a[38094] = anon_sym_PERCENT_EQ;
	v->a[38095] = anon_sym_LT_LT_EQ;
	v->a[38096] = anon_sym_GT_GT_EQ;
	v->a[38097] = anon_sym_AMP_EQ;
	v->a[38098] = anon_sym_CARET_EQ;
	v->a[38099] = anon_sym_PIPE_EQ;
	small_parse_table_1905(v);
}

/* EOF small_parse_table_380.c */
