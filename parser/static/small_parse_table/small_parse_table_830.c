/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_830.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4150(t_small_parse_table_array *v)
{
	v->a[83000] = anon_sym_GT_GT;
	v->a[83001] = anon_sym_GT_PIPE;
	v->a[83002] = anon_sym_LT_AMP_DASH;
	v->a[83003] = anon_sym_GT_AMP_DASH;
	v->a[83004] = anon_sym_LT_LT_DASH;
	v->a[83005] = 6;
	v->a[83006] = actions(3);
	v->a[83007] = 1;
	v->a[83008] = sym_comment;
	v->a[83009] = actions(3191);
	v->a[83010] = 1;
	v->a[83011] = sym_string_content;
	v->a[83012] = actions(3195);
	v->a[83013] = 1;
	v->a[83014] = sym_variable_name;
	v->a[83015] = actions(3252);
	v->a[83016] = 1;
	v->a[83017] = anon_sym_DQUOTE;
	v->a[83018] = actions(3193);
	v->a[83019] = 2;
	small_parse_table_4151(v);
}

void	small_parse_table_4151(t_small_parse_table_array *v)
{
	v->a[83020] = aux_sym__simple_variable_name_token1;
	v->a[83021] = aux_sym__multiline_variable_name_token1;
	v->a[83022] = actions(3187);
	v->a[83023] = 9;
	v->a[83024] = anon_sym_BANG;
	v->a[83025] = anon_sym_DASH;
	v->a[83026] = anon_sym_STAR;
	v->a[83027] = anon_sym_QMARK;
	v->a[83028] = anon_sym_DOLLAR;
	v->a[83029] = anon_sym_POUND;
	v->a[83030] = anon_sym_AT;
	v->a[83031] = anon_sym_0;
	v->a[83032] = anon_sym__;
	v->a[83033] = 6;
	v->a[83034] = actions(3);
	v->a[83035] = 1;
	v->a[83036] = sym_comment;
	v->a[83037] = actions(3191);
	v->a[83038] = 1;
	v->a[83039] = sym_string_content;
	small_parse_table_4152(v);
}

void	small_parse_table_4152(t_small_parse_table_array *v)
{
	v->a[83040] = actions(3195);
	v->a[83041] = 1;
	v->a[83042] = sym_variable_name;
	v->a[83043] = actions(3254);
	v->a[83044] = 1;
	v->a[83045] = anon_sym_DQUOTE;
	v->a[83046] = actions(3193);
	v->a[83047] = 2;
	v->a[83048] = aux_sym__simple_variable_name_token1;
	v->a[83049] = aux_sym__multiline_variable_name_token1;
	v->a[83050] = actions(3187);
	v->a[83051] = 9;
	v->a[83052] = anon_sym_BANG;
	v->a[83053] = anon_sym_DASH;
	v->a[83054] = anon_sym_STAR;
	v->a[83055] = anon_sym_QMARK;
	v->a[83056] = anon_sym_DOLLAR;
	v->a[83057] = anon_sym_POUND;
	v->a[83058] = anon_sym_AT;
	v->a[83059] = anon_sym_0;
	small_parse_table_4153(v);
}

void	small_parse_table_4153(t_small_parse_table_array *v)
{
	v->a[83060] = anon_sym__;
	v->a[83061] = 3;
	v->a[83062] = actions(870);
	v->a[83063] = 1;
	v->a[83064] = sym_comment;
	v->a[83065] = actions(2290);
	v->a[83066] = 6;
	v->a[83067] = anon_sym_PIPE;
	v->a[83068] = anon_sym_LT;
	v->a[83069] = anon_sym_GT;
	v->a[83070] = anon_sym_LT_AMP;
	v->a[83071] = anon_sym_GT_AMP;
	v->a[83072] = anon_sym_LT_LT;
	v->a[83073] = actions(2288);
	v->a[83074] = 8;
	v->a[83075] = sym_file_descriptor;
	v->a[83076] = anon_sym_AMP_AMP;
	v->a[83077] = anon_sym_PIPE_PIPE;
	v->a[83078] = anon_sym_GT_GT;
	v->a[83079] = anon_sym_GT_PIPE;
	small_parse_table_4154(v);
}

void	small_parse_table_4154(t_small_parse_table_array *v)
{
	v->a[83080] = anon_sym_LT_AMP_DASH;
	v->a[83081] = anon_sym_GT_AMP_DASH;
	v->a[83082] = anon_sym_LT_LT_DASH;
	v->a[83083] = 3;
	v->a[83084] = actions(870);
	v->a[83085] = 1;
	v->a[83086] = sym_comment;
	v->a[83087] = actions(2401);
	v->a[83088] = 6;
	v->a[83089] = anon_sym_PIPE;
	v->a[83090] = anon_sym_LT;
	v->a[83091] = anon_sym_GT;
	v->a[83092] = anon_sym_LT_AMP;
	v->a[83093] = anon_sym_GT_AMP;
	v->a[83094] = anon_sym_LT_LT;
	v->a[83095] = actions(2399);
	v->a[83096] = 8;
	v->a[83097] = sym_file_descriptor;
	v->a[83098] = anon_sym_AMP_AMP;
	v->a[83099] = anon_sym_PIPE_PIPE;
	small_parse_table_4155(v);
}

/* EOF small_parse_table_830.c */
