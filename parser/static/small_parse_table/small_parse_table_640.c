/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_640.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3200(t_small_parse_table_array *v)
{
	v->a[64000] = 1;
	v->a[64001] = anon_sym_DQUOTE;
	v->a[64002] = state(1404);
	v->a[64003] = 1;
	v->a[64004] = aux_sym_string_repeat1;
	v->a[64005] = state(1477);
	v->a[64006] = 4;
	v->a[64007] = sym_arithmetic_expansion;
	v->a[64008] = sym_simple_expansion;
	v->a[64009] = sym_expansion;
	v->a[64010] = sym_command_substitution;
	v->a[64011] = 8;
	v->a[64012] = actions(3);
	v->a[64013] = 1;
	v->a[64014] = sym_comment;
	v->a[64015] = actions(2566);
	v->a[64016] = 1;
	v->a[64017] = anon_sym_POUND;
	v->a[64018] = actions(2568);
	v->a[64019] = 1;
	small_parse_table_3201(v);
}

void	small_parse_table_3201(t_small_parse_table_array *v)
{
	v->a[64020] = aux_sym__simple_variable_name_token1;
	v->a[64021] = actions(2570);
	v->a[64022] = 1;
	v->a[64023] = anon_sym_0;
	v->a[64024] = actions(2572);
	v->a[64025] = 1;
	v->a[64026] = sym_variable_name;
	v->a[64027] = actions(2823);
	v->a[64028] = 1;
	v->a[64029] = anon_sym_RBRACE;
	v->a[64030] = state(1689);
	v->a[64031] = 1;
	v->a[64032] = sym__expansion_body;
	v->a[64033] = actions(2564);
	v->a[64034] = 6;
	v->a[64035] = anon_sym_BANG;
	v->a[64036] = anon_sym_DASH;
	v->a[64037] = anon_sym_STAR;
	v->a[64038] = anon_sym_QMARK;
	v->a[64039] = anon_sym_DOLLAR;
	small_parse_table_3202(v);
}

void	small_parse_table_3202(t_small_parse_table_array *v)
{
	v->a[64040] = anon_sym_AT;
	v->a[64041] = 3;
	v->a[64042] = actions(407);
	v->a[64043] = 1;
	v->a[64044] = sym_comment;
	v->a[64045] = actions(1856);
	v->a[64046] = 4;
	v->a[64047] = anon_sym_PIPE;
	v->a[64048] = anon_sym_LT;
	v->a[64049] = anon_sym_GT;
	v->a[64050] = anon_sym_LT_LT;
	v->a[64051] = actions(1854);
	v->a[64052] = 8;
	v->a[64053] = anon_sym_AMP_AMP;
	v->a[64054] = anon_sym_PIPE_PIPE;
	v->a[64055] = anon_sym_GT_GT;
	v->a[64056] = anon_sym_LT_AMP;
	v->a[64057] = anon_sym_GT_AMP;
	v->a[64058] = anon_sym_GT_PIPE;
	v->a[64059] = anon_sym_LT_GT;
	small_parse_table_3203(v);
}

void	small_parse_table_3203(t_small_parse_table_array *v)
{
	v->a[64060] = anon_sym_LT_LT_DASH;
	v->a[64061] = 10;
	v->a[64062] = actions(3);
	v->a[64063] = 1;
	v->a[64064] = sym_comment;
	v->a[64065] = actions(2548);
	v->a[64066] = 1;
	v->a[64067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64068] = actions(2554);
	v->a[64069] = 1;
	v->a[64070] = sym_string_content;
	v->a[64071] = actions(2556);
	v->a[64072] = 1;
	v->a[64073] = anon_sym_DOLLAR_LBRACE;
	v->a[64074] = actions(2558);
	v->a[64075] = 1;
	v->a[64076] = anon_sym_DOLLAR_LPAREN;
	v->a[64077] = actions(2560);
	v->a[64078] = 1;
	v->a[64079] = anon_sym_BQUOTE;
	small_parse_table_3204(v);
}

void	small_parse_table_3204(t_small_parse_table_array *v)
{
	v->a[64080] = actions(2825);
	v->a[64081] = 1;
	v->a[64082] = anon_sym_DOLLAR;
	v->a[64083] = actions(2827);
	v->a[64084] = 1;
	v->a[64085] = anon_sym_DQUOTE;
	v->a[64086] = state(1370);
	v->a[64087] = 1;
	v->a[64088] = aux_sym_string_repeat1;
	v->a[64089] = state(1477);
	v->a[64090] = 4;
	v->a[64091] = sym_arithmetic_expansion;
	v->a[64092] = sym_simple_expansion;
	v->a[64093] = sym_expansion;
	v->a[64094] = sym_command_substitution;
	v->a[64095] = 10;
	v->a[64096] = actions(3);
	v->a[64097] = 1;
	v->a[64098] = sym_comment;
	v->a[64099] = actions(2548);
	small_parse_table_3205(v);
}

/* EOF small_parse_table_640.c */
