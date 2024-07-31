/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_610.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3050(t_small_parse_table_array *v)
{
	v->a[61000] = aux_sym__simple_variable_name_token1;
	v->a[61001] = aux_sym__multiline_variable_name_token1;
	v->a[61002] = actions(2427);
	v->a[61003] = 8;
	v->a[61004] = anon_sym_BANG;
	v->a[61005] = anon_sym_DASH;
	v->a[61006] = anon_sym_STAR;
	v->a[61007] = anon_sym_QMARK;
	v->a[61008] = anon_sym_DOLLAR;
	v->a[61009] = anon_sym_POUND;
	v->a[61010] = anon_sym_AT;
	v->a[61011] = anon_sym_0;
	v->a[61012] = 6;
	v->a[61013] = actions(3);
	v->a[61014] = 1;
	v->a[61015] = sym_comment;
	v->a[61016] = actions(2431);
	v->a[61017] = 1;
	v->a[61018] = sym_string_content;
	v->a[61019] = actions(2435);
	small_parse_table_3051(v);
}

void	small_parse_table_3051(t_small_parse_table_array *v)
{
	v->a[61020] = 1;
	v->a[61021] = sym_variable_name;
	v->a[61022] = actions(2527);
	v->a[61023] = 1;
	v->a[61024] = anon_sym_DQUOTE;
	v->a[61025] = actions(2433);
	v->a[61026] = 2;
	v->a[61027] = aux_sym__simple_variable_name_token1;
	v->a[61028] = aux_sym__multiline_variable_name_token1;
	v->a[61029] = actions(2427);
	v->a[61030] = 8;
	v->a[61031] = anon_sym_BANG;
	v->a[61032] = anon_sym_DASH;
	v->a[61033] = anon_sym_STAR;
	v->a[61034] = anon_sym_QMARK;
	v->a[61035] = anon_sym_DOLLAR;
	v->a[61036] = anon_sym_POUND;
	v->a[61037] = anon_sym_AT;
	v->a[61038] = anon_sym_0;
	v->a[61039] = 6;
	small_parse_table_3052(v);
}

void	small_parse_table_3052(t_small_parse_table_array *v)
{
	v->a[61040] = actions(3);
	v->a[61041] = 1;
	v->a[61042] = sym_comment;
	v->a[61043] = actions(2431);
	v->a[61044] = 1;
	v->a[61045] = sym_string_content;
	v->a[61046] = actions(2435);
	v->a[61047] = 1;
	v->a[61048] = sym_variable_name;
	v->a[61049] = actions(2529);
	v->a[61050] = 1;
	v->a[61051] = anon_sym_DQUOTE;
	v->a[61052] = actions(2433);
	v->a[61053] = 2;
	v->a[61054] = aux_sym__simple_variable_name_token1;
	v->a[61055] = aux_sym__multiline_variable_name_token1;
	v->a[61056] = actions(2427);
	v->a[61057] = 8;
	v->a[61058] = anon_sym_BANG;
	v->a[61059] = anon_sym_DASH;
	small_parse_table_3053(v);
}

void	small_parse_table_3053(t_small_parse_table_array *v)
{
	v->a[61060] = anon_sym_STAR;
	v->a[61061] = anon_sym_QMARK;
	v->a[61062] = anon_sym_DOLLAR;
	v->a[61063] = anon_sym_POUND;
	v->a[61064] = anon_sym_AT;
	v->a[61065] = anon_sym_0;
	v->a[61066] = 5;
	v->a[61067] = actions(407);
	v->a[61068] = 1;
	v->a[61069] = sym_comment;
	v->a[61070] = actions(2531);
	v->a[61071] = 1;
	v->a[61072] = anon_sym_PIPE;
	v->a[61073] = state(1294);
	v->a[61074] = 1;
	v->a[61075] = aux_sym_pipeline_repeat1;
	v->a[61076] = actions(1717);
	v->a[61077] = 3;
	v->a[61078] = anon_sym_LT;
	v->a[61079] = anon_sym_GT;
	small_parse_table_3054(v);
}

void	small_parse_table_3054(t_small_parse_table_array *v)
{
	v->a[61080] = anon_sym_LT_LT;
	v->a[61081] = actions(1712);
	v->a[61082] = 8;
	v->a[61083] = anon_sym_AMP_AMP;
	v->a[61084] = anon_sym_PIPE_PIPE;
	v->a[61085] = anon_sym_GT_GT;
	v->a[61086] = anon_sym_LT_AMP;
	v->a[61087] = anon_sym_GT_AMP;
	v->a[61088] = anon_sym_GT_PIPE;
	v->a[61089] = anon_sym_LT_GT;
	v->a[61090] = anon_sym_LT_LT_DASH;
	v->a[61091] = 6;
	v->a[61092] = actions(3);
	v->a[61093] = 1;
	v->a[61094] = sym_comment;
	v->a[61095] = actions(2431);
	v->a[61096] = 1;
	v->a[61097] = sym_string_content;
	v->a[61098] = actions(2435);
	v->a[61099] = 1;
	small_parse_table_3055(v);
}

/* EOF small_parse_table_610.c */
