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
	v->a[38000] = anon_sym_GT_GT;
	v->a[38001] = anon_sym_LT_AMP;
	v->a[38002] = anon_sym_GT_AMP;
	v->a[38003] = anon_sym_GT_PIPE;
	v->a[38004] = anon_sym_LT_GT;
	v->a[38005] = anon_sym_LT_LT;
	v->a[38006] = anon_sym_LT_LT_DASH;
	v->a[38007] = aux_sym_heredoc_redirect_token1;
	v->a[38008] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38009] = anon_sym_DOLLAR;
	v->a[38010] = anon_sym_DQUOTE;
	v->a[38011] = sym_raw_string;
	v->a[38012] = sym_number;
	v->a[38013] = anon_sym_DOLLAR_LBRACE;
	v->a[38014] = anon_sym_DOLLAR_LPAREN;
	v->a[38015] = anon_sym_BQUOTE;
	v->a[38016] = sym_word;
	v->a[38017] = anon_sym_SEMI;
	v->a[38018] = 5;
	v->a[38019] = actions(3);
	small_parse_table_1901(v);
}

void	small_parse_table_1901(t_small_parse_table_array *v)
{
	v->a[38020] = 1;
	v->a[38021] = sym_comment;
	v->a[38022] = actions(1255);
	v->a[38023] = 1;
	v->a[38024] = sym_variable_name;
	v->a[38025] = actions(1253);
	v->a[38026] = 2;
	v->a[38027] = aux_sym__simple_variable_name_token1;
	v->a[38028] = aux_sym__multiline_variable_name_token1;
	v->a[38029] = actions(1251);
	v->a[38030] = 8;
	v->a[38031] = anon_sym_BANG;
	v->a[38032] = anon_sym_DASH;
	v->a[38033] = anon_sym_STAR;
	v->a[38034] = anon_sym_QMARK;
	v->a[38035] = anon_sym_DOLLAR;
	v->a[38036] = anon_sym_POUND;
	v->a[38037] = anon_sym_AT;
	v->a[38038] = anon_sym_0;
	v->a[38039] = actions(345);
	small_parse_table_1902(v);
}

void	small_parse_table_1902(t_small_parse_table_array *v)
{
	v->a[38040] = 15;
	v->a[38041] = anon_sym_PIPE;
	v->a[38042] = anon_sym_SEMI_SEMI;
	v->a[38043] = anon_sym_AMP_AMP;
	v->a[38044] = anon_sym_PIPE_PIPE;
	v->a[38045] = anon_sym_LT;
	v->a[38046] = anon_sym_GT;
	v->a[38047] = anon_sym_GT_GT;
	v->a[38048] = anon_sym_LT_AMP;
	v->a[38049] = anon_sym_GT_AMP;
	v->a[38050] = anon_sym_GT_PIPE;
	v->a[38051] = anon_sym_LT_GT;
	v->a[38052] = anon_sym_LT_LT;
	v->a[38053] = anon_sym_LT_LT_DASH;
	v->a[38054] = aux_sym_heredoc_redirect_token1;
	v->a[38055] = anon_sym_SEMI;
	v->a[38056] = 4;
	v->a[38057] = actions(3);
	v->a[38058] = 1;
	v->a[38059] = sym_comment;
	small_parse_table_1903(v);
}

void	small_parse_table_1903(t_small_parse_table_array *v)
{
	v->a[38060] = actions(1249);
	v->a[38061] = 1;
	v->a[38062] = sym_variable_name;
	v->a[38063] = actions(1268);
	v->a[38064] = 1;
	v->a[38065] = anon_sym_BQUOTE;
	v->a[38066] = actions(1245);
	v->a[38067] = 23;
	v->a[38068] = anon_sym_for;
	v->a[38069] = anon_sym_while;
	v->a[38070] = anon_sym_until;
	v->a[38071] = anon_sym_if;
	v->a[38072] = anon_sym_case;
	v->a[38073] = anon_sym_LPAREN;
	v->a[38074] = anon_sym_LBRACE;
	v->a[38075] = anon_sym_BANG;
	v->a[38076] = anon_sym_LT;
	v->a[38077] = anon_sym_GT;
	v->a[38078] = anon_sym_GT_GT;
	v->a[38079] = anon_sym_LT_AMP;
	small_parse_table_1904(v);
}

void	small_parse_table_1904(t_small_parse_table_array *v)
{
	v->a[38080] = anon_sym_GT_AMP;
	v->a[38081] = anon_sym_GT_PIPE;
	v->a[38082] = anon_sym_LT_GT;
	v->a[38083] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38084] = anon_sym_DOLLAR;
	v->a[38085] = anon_sym_DQUOTE;
	v->a[38086] = sym_raw_string;
	v->a[38087] = sym_number;
	v->a[38088] = anon_sym_DOLLAR_LBRACE;
	v->a[38089] = anon_sym_DOLLAR_LPAREN;
	v->a[38090] = sym_word;
	v->a[38091] = 4;
	v->a[38092] = actions(3);
	v->a[38093] = 1;
	v->a[38094] = sym_comment;
	v->a[38095] = actions(1249);
	v->a[38096] = 1;
	v->a[38097] = sym_variable_name;
	v->a[38098] = actions(1268);
	v->a[38099] = 1;
	small_parse_table_1905(v);
}

/* EOF small_parse_table_380.c */
