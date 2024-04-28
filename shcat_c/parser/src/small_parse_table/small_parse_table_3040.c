/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3040.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15200(t_small_parse_table_array *v)
{
	v->a[304000] = 1;
	v->a[304001] = sym_variable_name;
	v->a[304002] = state(4389);
	v->a[304003] = 1;
	v->a[304004] = sym_string;
	v->a[304005] = actions(7442);
	v->a[304006] = 2;
	v->a[304007] = aux_sym__simple_variable_name_token1;
	v->a[304008] = aux_sym__multiline_variable_name_token1;
	v->a[304009] = actions(7440);
	v->a[304010] = 9;
	v->a[304011] = anon_sym_DASH;
	v->a[304012] = anon_sym_STAR;
	v->a[304013] = anon_sym_BANG;
	v->a[304014] = anon_sym_QMARK;
	v->a[304015] = anon_sym_DOLLAR;
	v->a[304016] = anon_sym_POUND;
	v->a[304017] = anon_sym_AT2;
	v->a[304018] = anon_sym_0;
	v->a[304019] = anon_sym__;
	small_parse_table_15201(v);
}

void	small_parse_table_15201(t_small_parse_table_array *v)
{
	v->a[304020] = 6;
	v->a[304021] = actions(3);
	v->a[304022] = 1;
	v->a[304023] = sym_comment;
	v->a[304024] = actions(13660);
	v->a[304025] = 1;
	v->a[304026] = anon_sym_DQUOTE;
	v->a[304027] = actions(13732);
	v->a[304028] = 1;
	v->a[304029] = sym_string_content;
	v->a[304030] = actions(13736);
	v->a[304031] = 1;
	v->a[304032] = sym_variable_name;
	v->a[304033] = actions(13734);
	v->a[304034] = 2;
	v->a[304035] = aux_sym__simple_variable_name_token1;
	v->a[304036] = aux_sym__multiline_variable_name_token1;
	v->a[304037] = actions(13730);
	v->a[304038] = 9;
	v->a[304039] = anon_sym_DASH;
	small_parse_table_15202(v);
}

void	small_parse_table_15202(t_small_parse_table_array *v)
{
	v->a[304040] = anon_sym_STAR;
	v->a[304041] = anon_sym_BANG;
	v->a[304042] = anon_sym_QMARK;
	v->a[304043] = anon_sym_DOLLAR;
	v->a[304044] = anon_sym_POUND;
	v->a[304045] = anon_sym_AT2;
	v->a[304046] = anon_sym_0;
	v->a[304047] = anon_sym__;
	v->a[304048] = 6;
	v->a[304049] = actions(3);
	v->a[304050] = 1;
	v->a[304051] = sym_comment;
	v->a[304052] = actions(13732);
	v->a[304053] = 1;
	v->a[304054] = sym_string_content;
	v->a[304055] = actions(13736);
	v->a[304056] = 1;
	v->a[304057] = sym_variable_name;
	v->a[304058] = actions(13824);
	v->a[304059] = 1;
	small_parse_table_15203(v);
}

void	small_parse_table_15203(t_small_parse_table_array *v)
{
	v->a[304060] = anon_sym_DQUOTE;
	v->a[304061] = actions(13734);
	v->a[304062] = 2;
	v->a[304063] = aux_sym__simple_variable_name_token1;
	v->a[304064] = aux_sym__multiline_variable_name_token1;
	v->a[304065] = actions(13730);
	v->a[304066] = 9;
	v->a[304067] = anon_sym_DASH;
	v->a[304068] = anon_sym_STAR;
	v->a[304069] = anon_sym_BANG;
	v->a[304070] = anon_sym_QMARK;
	v->a[304071] = anon_sym_DOLLAR;
	v->a[304072] = anon_sym_POUND;
	v->a[304073] = anon_sym_AT2;
	v->a[304074] = anon_sym_0;
	v->a[304075] = anon_sym__;
	v->a[304076] = 6;
	v->a[304077] = actions(3);
	v->a[304078] = 1;
	v->a[304079] = sym_comment;
	small_parse_table_15204(v);
}

void	small_parse_table_15204(t_small_parse_table_array *v)
{
	v->a[304080] = actions(13306);
	v->a[304081] = 1;
	v->a[304082] = anon_sym_DQUOTE;
	v->a[304083] = actions(13732);
	v->a[304084] = 1;
	v->a[304085] = sym_string_content;
	v->a[304086] = actions(13736);
	v->a[304087] = 1;
	v->a[304088] = sym_variable_name;
	v->a[304089] = actions(13734);
	v->a[304090] = 2;
	v->a[304091] = aux_sym__simple_variable_name_token1;
	v->a[304092] = aux_sym__multiline_variable_name_token1;
	v->a[304093] = actions(13730);
	v->a[304094] = 9;
	v->a[304095] = anon_sym_DASH;
	v->a[304096] = anon_sym_STAR;
	v->a[304097] = anon_sym_BANG;
	v->a[304098] = anon_sym_QMARK;
	v->a[304099] = anon_sym_DOLLAR;
	small_parse_table_15205(v);
}

/* EOF small_parse_table_3040.c */
