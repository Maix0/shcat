/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1530.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7650(t_small_parse_table_array *v)
{
	v->a[153000] = 1;
	v->a[153001] = anon_sym_EQ_TILDE;
	v->a[153002] = actions(6915);
	v->a[153003] = 1;
	v->a[153004] = anon_sym_QMARK;
	v->a[153005] = actions(6885);
	v->a[153006] = 2;
	v->a[153007] = anon_sym_PLUS_PLUS;
	v->a[153008] = anon_sym_DASH_DASH;
	v->a[153009] = actions(6899);
	v->a[153010] = 2;
	v->a[153011] = anon_sym_EQ_EQ;
	v->a[153012] = anon_sym_BANG_EQ;
	v->a[153013] = actions(6901);
	v->a[153014] = 2;
	v->a[153015] = anon_sym_LT;
	v->a[153016] = anon_sym_GT;
	v->a[153017] = actions(6903);
	v->a[153018] = 2;
	v->a[153019] = anon_sym_LT_EQ;
	small_parse_table_7651(v);
}

void	small_parse_table_7651(t_small_parse_table_array *v)
{
	v->a[153020] = anon_sym_GT_EQ;
	v->a[153021] = actions(6905);
	v->a[153022] = 2;
	v->a[153023] = anon_sym_LT_LT;
	v->a[153024] = anon_sym_GT_GT;
	v->a[153025] = actions(6907);
	v->a[153026] = 2;
	v->a[153027] = anon_sym_PLUS;
	v->a[153028] = anon_sym_DASH;
	v->a[153029] = actions(6909);
	v->a[153030] = 3;
	v->a[153031] = anon_sym_STAR;
	v->a[153032] = anon_sym_SLASH;
	v->a[153033] = anon_sym_PERCENT;
	v->a[153034] = actions(7137);
	v->a[153035] = 14;
	v->a[153036] = anon_sym_RPAREN_RPAREN;
	v->a[153037] = anon_sym_COMMA;
	v->a[153038] = anon_sym_PLUS_EQ;
	v->a[153039] = anon_sym_DASH_EQ;
	small_parse_table_7652(v);
}

void	small_parse_table_7652(t_small_parse_table_array *v)
{
	v->a[153040] = anon_sym_STAR_EQ;
	v->a[153041] = anon_sym_SLASH_EQ;
	v->a[153042] = anon_sym_PERCENT_EQ;
	v->a[153043] = anon_sym_STAR_STAR_EQ;
	v->a[153044] = anon_sym_LT_LT_EQ;
	v->a[153045] = anon_sym_GT_GT_EQ;
	v->a[153046] = anon_sym_AMP_EQ;
	v->a[153047] = anon_sym_CARET_EQ;
	v->a[153048] = anon_sym_PIPE_EQ;
	v->a[153049] = anon_sym_COLON;
	v->a[153050] = 8;
	v->a[153051] = actions(3);
	v->a[153052] = 1;
	v->a[153053] = sym_comment;
	v->a[153054] = actions(1235);
	v->a[153055] = 1;
	v->a[153056] = sym_file_descriptor;
	v->a[153057] = actions(7143);
	v->a[153058] = 1;
	v->a[153059] = anon_sym_DQUOTE;
	small_parse_table_7653(v);
}

void	small_parse_table_7653(t_small_parse_table_array *v)
{
	v->a[153060] = actions(7147);
	v->a[153061] = 1;
	v->a[153062] = sym_variable_name;
	v->a[153063] = state(4322);
	v->a[153064] = 1;
	v->a[153065] = sym_string;
	v->a[153066] = actions(7145);
	v->a[153067] = 2;
	v->a[153068] = aux_sym__simple_variable_name_token1;
	v->a[153069] = aux_sym__multiline_variable_name_token1;
	v->a[153070] = actions(7141);
	v->a[153071] = 9;
	v->a[153072] = anon_sym_DASH;
	v->a[153073] = anon_sym_STAR;
	v->a[153074] = anon_sym_BANG;
	v->a[153075] = anon_sym_QMARK;
	v->a[153076] = anon_sym_DOLLAR;
	v->a[153077] = anon_sym_POUND;
	v->a[153078] = anon_sym_AT2;
	v->a[153079] = anon_sym_0;
	small_parse_table_7654(v);
}

void	small_parse_table_7654(t_small_parse_table_array *v)
{
	v->a[153080] = anon_sym__;
	v->a[153081] = actions(1227);
	v->a[153082] = 23;
	v->a[153083] = anon_sym_SEMI;
	v->a[153084] = anon_sym_PIPE_PIPE;
	v->a[153085] = anon_sym_AMP_AMP;
	v->a[153086] = anon_sym_PIPE;
	v->a[153087] = anon_sym_AMP;
	v->a[153088] = anon_sym_LT;
	v->a[153089] = anon_sym_GT;
	v->a[153090] = anon_sym_LT_LT;
	v->a[153091] = anon_sym_GT_GT;
	v->a[153092] = anon_sym_esac;
	v->a[153093] = anon_sym_SEMI_SEMI;
	v->a[153094] = anon_sym_SEMI_AMP;
	v->a[153095] = anon_sym_SEMI_SEMI_AMP;
	v->a[153096] = anon_sym_PIPE_AMP;
	v->a[153097] = anon_sym_AMP_GT;
	v->a[153098] = anon_sym_AMP_GT_GT;
	v->a[153099] = anon_sym_LT_AMP;
	small_parse_table_7655(v);
}

/* EOF small_parse_table_1530.c */
