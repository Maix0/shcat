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
	v->a[38000] = aux_sym_concatenation_token1;
	v->a[38001] = anon_sym_DOLLAR;
	v->a[38002] = anon_sym_DQUOTE;
	v->a[38003] = sym_raw_string;
	v->a[38004] = sym_number;
	v->a[38005] = anon_sym_DOLLAR_LBRACE;
	v->a[38006] = anon_sym_DOLLAR_LPAREN;
	v->a[38007] = anon_sym_BQUOTE;
	v->a[38008] = sym_word;
	v->a[38009] = anon_sym_SEMI;
	v->a[38010] = 6;
	v->a[38011] = actions(3);
	v->a[38012] = 1;
	v->a[38013] = sym_comment;
	v->a[38014] = actions(379);
	v->a[38015] = 1;
	v->a[38016] = sym_file_descriptor;
	v->a[38017] = actions(1391);
	v->a[38018] = 1;
	v->a[38019] = sym_variable_name;
	small_parse_table_1901(v);
}

void	small_parse_table_1901(t_small_parse_table_array *v)
{
	v->a[38020] = actions(1389);
	v->a[38021] = 2;
	v->a[38022] = aux_sym__simple_variable_name_token1;
	v->a[38023] = aux_sym__multiline_variable_name_token1;
	v->a[38024] = actions(1387);
	v->a[38025] = 9;
	v->a[38026] = anon_sym_BANG;
	v->a[38027] = anon_sym_DASH;
	v->a[38028] = anon_sym_STAR;
	v->a[38029] = anon_sym_QMARK;
	v->a[38030] = anon_sym_DOLLAR;
	v->a[38031] = anon_sym_POUND;
	v->a[38032] = anon_sym_AT;
	v->a[38033] = anon_sym_0;
	v->a[38034] = anon_sym__;
	v->a[38035] = actions(381);
	v->a[38036] = 18;
	v->a[38037] = anon_sym_esac;
	v->a[38038] = anon_sym_PIPE;
	v->a[38039] = anon_sym_SEMI_SEMI;
	small_parse_table_1902(v);
}

void	small_parse_table_1902(t_small_parse_table_array *v)
{
	v->a[38040] = anon_sym_AMP_AMP;
	v->a[38041] = anon_sym_PIPE_PIPE;
	v->a[38042] = anon_sym_LT;
	v->a[38043] = anon_sym_GT;
	v->a[38044] = anon_sym_GT_GT;
	v->a[38045] = anon_sym_LT_AMP;
	v->a[38046] = anon_sym_GT_AMP;
	v->a[38047] = anon_sym_GT_PIPE;
	v->a[38048] = anon_sym_LT_AMP_DASH;
	v->a[38049] = anon_sym_GT_AMP_DASH;
	v->a[38050] = anon_sym_LT_LT;
	v->a[38051] = anon_sym_LT_LT_DASH;
	v->a[38052] = aux_sym_heredoc_redirect_token1;
	v->a[38053] = anon_sym_AMP;
	v->a[38054] = anon_sym_SEMI;
	v->a[38055] = 6;
	v->a[38056] = actions(3);
	v->a[38057] = 1;
	v->a[38058] = sym_comment;
	v->a[38059] = actions(1393);
	small_parse_table_1903(v);
}

void	small_parse_table_1903(t_small_parse_table_array *v)
{
	v->a[38060] = 1;
	v->a[38061] = aux_sym_concatenation_token1;
	v->a[38062] = actions(1395);
	v->a[38063] = 1;
	v->a[38064] = sym__concat;
	v->a[38065] = state(494);
	v->a[38066] = 1;
	v->a[38067] = aux_sym_concatenation_repeat1;
	v->a[38068] = actions(1085);
	v->a[38069] = 2;
	v->a[38070] = sym_file_descriptor;
	v->a[38071] = ts_builtin_sym_end;
	v->a[38072] = actions(1081);
	v->a[38073] = 26;
	v->a[38074] = anon_sym_PIPE;
	v->a[38075] = anon_sym_SEMI_SEMI;
	v->a[38076] = anon_sym_AMP_AMP;
	v->a[38077] = anon_sym_PIPE_PIPE;
	v->a[38078] = anon_sym_LT;
	v->a[38079] = anon_sym_GT;
	small_parse_table_1904(v);
}

void	small_parse_table_1904(t_small_parse_table_array *v)
{
	v->a[38080] = anon_sym_GT_GT;
	v->a[38081] = anon_sym_LT_AMP;
	v->a[38082] = anon_sym_GT_AMP;
	v->a[38083] = anon_sym_GT_PIPE;
	v->a[38084] = anon_sym_LT_AMP_DASH;
	v->a[38085] = anon_sym_GT_AMP_DASH;
	v->a[38086] = anon_sym_LT_LT;
	v->a[38087] = anon_sym_LT_LT_DASH;
	v->a[38088] = aux_sym_heredoc_redirect_token1;
	v->a[38089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38090] = anon_sym_AMP;
	v->a[38091] = anon_sym_DOLLAR;
	v->a[38092] = anon_sym_DQUOTE;
	v->a[38093] = sym_raw_string;
	v->a[38094] = sym_number;
	v->a[38095] = anon_sym_DOLLAR_LBRACE;
	v->a[38096] = anon_sym_DOLLAR_LPAREN;
	v->a[38097] = anon_sym_BQUOTE;
	v->a[38098] = sym_word;
	v->a[38099] = anon_sym_SEMI;
	small_parse_table_1905(v);
}

/* EOF small_parse_table_380.c */
