/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3010.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15050(t_small_parse_table_array *v)
{
	v->a[301000] = actions(13732);
	v->a[301001] = 1;
	v->a[301002] = sym_string_content;
	v->a[301003] = actions(13736);
	v->a[301004] = 1;
	v->a[301005] = sym_variable_name;
	v->a[301006] = actions(13744);
	v->a[301007] = 1;
	v->a[301008] = anon_sym_DQUOTE;
	v->a[301009] = actions(13734);
	v->a[301010] = 2;
	v->a[301011] = aux_sym__simple_variable_name_token1;
	v->a[301012] = aux_sym__multiline_variable_name_token1;
	v->a[301013] = actions(13730);
	v->a[301014] = 9;
	v->a[301015] = anon_sym_DASH;
	v->a[301016] = anon_sym_STAR;
	v->a[301017] = anon_sym_BANG;
	v->a[301018] = anon_sym_QMARK;
	v->a[301019] = anon_sym_DOLLAR;
	small_parse_table_15051(v);
}

void	small_parse_table_15051(t_small_parse_table_array *v)
{
	v->a[301020] = anon_sym_POUND;
	v->a[301021] = anon_sym_AT2;
	v->a[301022] = anon_sym_0;
	v->a[301023] = anon_sym__;
	v->a[301024] = 6;
	v->a[301025] = actions(3);
	v->a[301026] = 1;
	v->a[301027] = sym_comment;
	v->a[301028] = actions(7673);
	v->a[301029] = 1;
	v->a[301030] = anon_sym_DQUOTE;
	v->a[301031] = actions(7677);
	v->a[301032] = 1;
	v->a[301033] = sym_variable_name;
	v->a[301034] = state(4393);
	v->a[301035] = 1;
	v->a[301036] = sym_string;
	v->a[301037] = actions(7675);
	v->a[301038] = 2;
	v->a[301039] = aux_sym__simple_variable_name_token1;
	small_parse_table_15052(v);
}

void	small_parse_table_15052(t_small_parse_table_array *v)
{
	v->a[301040] = aux_sym__multiline_variable_name_token1;
	v->a[301041] = actions(7671);
	v->a[301042] = 9;
	v->a[301043] = anon_sym_DASH;
	v->a[301044] = anon_sym_STAR;
	v->a[301045] = anon_sym_BANG;
	v->a[301046] = anon_sym_QMARK;
	v->a[301047] = anon_sym_DOLLAR;
	v->a[301048] = anon_sym_POUND;
	v->a[301049] = anon_sym_AT2;
	v->a[301050] = anon_sym_0;
	v->a[301051] = anon_sym__;
	v->a[301052] = 6;
	v->a[301053] = actions(3);
	v->a[301054] = 1;
	v->a[301055] = sym_comment;
	v->a[301056] = actions(4857);
	v->a[301057] = 1;
	v->a[301058] = anon_sym_DQUOTE;
	v->a[301059] = actions(4861);
	small_parse_table_15053(v);
}

void	small_parse_table_15053(t_small_parse_table_array *v)
{
	v->a[301060] = 1;
	v->a[301061] = sym_variable_name;
	v->a[301062] = state(2638);
	v->a[301063] = 1;
	v->a[301064] = sym_string;
	v->a[301065] = actions(4859);
	v->a[301066] = 2;
	v->a[301067] = aux_sym__simple_variable_name_token1;
	v->a[301068] = aux_sym__multiline_variable_name_token1;
	v->a[301069] = actions(4855);
	v->a[301070] = 9;
	v->a[301071] = anon_sym_DASH;
	v->a[301072] = anon_sym_STAR;
	v->a[301073] = anon_sym_BANG;
	v->a[301074] = anon_sym_QMARK;
	v->a[301075] = anon_sym_DOLLAR;
	v->a[301076] = anon_sym_POUND;
	v->a[301077] = anon_sym_AT2;
	v->a[301078] = anon_sym_0;
	v->a[301079] = anon_sym__;
	small_parse_table_15054(v);
}

void	small_parse_table_15054(t_small_parse_table_array *v)
{
	v->a[301080] = 6;
	v->a[301081] = actions(3);
	v->a[301082] = 1;
	v->a[301083] = sym_comment;
	v->a[301084] = actions(13732);
	v->a[301085] = 1;
	v->a[301086] = sym_string_content;
	v->a[301087] = actions(13736);
	v->a[301088] = 1;
	v->a[301089] = sym_variable_name;
	v->a[301090] = actions(13746);
	v->a[301091] = 1;
	v->a[301092] = anon_sym_DQUOTE;
	v->a[301093] = actions(13734);
	v->a[301094] = 2;
	v->a[301095] = aux_sym__simple_variable_name_token1;
	v->a[301096] = aux_sym__multiline_variable_name_token1;
	v->a[301097] = actions(13730);
	v->a[301098] = 9;
	v->a[301099] = anon_sym_DASH;
	small_parse_table_15055(v);
}

/* EOF small_parse_table_3010.c */
