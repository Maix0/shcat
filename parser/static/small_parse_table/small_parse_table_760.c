/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_760.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3800(t_small_parse_table_array *v)
{
	v->a[76000] = sym_expansion;
	v->a[76001] = sym_command_substitution;
	v->a[76002] = 10;
	v->a[76003] = actions(3);
	v->a[76004] = 1;
	v->a[76005] = sym_comment;
	v->a[76006] = actions(3058);
	v->a[76007] = 1;
	v->a[76008] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76009] = actions(3064);
	v->a[76010] = 1;
	v->a[76011] = sym_string_content;
	v->a[76012] = actions(3066);
	v->a[76013] = 1;
	v->a[76014] = anon_sym_DOLLAR_LBRACE;
	v->a[76015] = actions(3068);
	v->a[76016] = 1;
	v->a[76017] = anon_sym_DOLLAR_LPAREN;
	v->a[76018] = actions(3070);
	v->a[76019] = 1;
	small_parse_table_3801(v);
}

void	small_parse_table_3801(t_small_parse_table_array *v)
{
	v->a[76020] = anon_sym_BQUOTE;
	v->a[76021] = actions(3214);
	v->a[76022] = 1;
	v->a[76023] = anon_sym_DOLLAR;
	v->a[76024] = actions(3216);
	v->a[76025] = 1;
	v->a[76026] = anon_sym_DQUOTE;
	v->a[76027] = state(1641);
	v->a[76028] = 1;
	v->a[76029] = aux_sym_string_repeat1;
	v->a[76030] = state(1748);
	v->a[76031] = 4;
	v->a[76032] = sym_arithmetic_expansion;
	v->a[76033] = sym_simple_expansion;
	v->a[76034] = sym_expansion;
	v->a[76035] = sym_command_substitution;
	v->a[76036] = 10;
	v->a[76037] = actions(3);
	v->a[76038] = 1;
	v->a[76039] = sym_comment;
	small_parse_table_3802(v);
}

void	small_parse_table_3802(t_small_parse_table_array *v)
{
	v->a[76040] = actions(3058);
	v->a[76041] = 1;
	v->a[76042] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76043] = actions(3064);
	v->a[76044] = 1;
	v->a[76045] = sym_string_content;
	v->a[76046] = actions(3066);
	v->a[76047] = 1;
	v->a[76048] = anon_sym_DOLLAR_LBRACE;
	v->a[76049] = actions(3068);
	v->a[76050] = 1;
	v->a[76051] = anon_sym_DOLLAR_LPAREN;
	v->a[76052] = actions(3070);
	v->a[76053] = 1;
	v->a[76054] = anon_sym_BQUOTE;
	v->a[76055] = actions(3218);
	v->a[76056] = 1;
	v->a[76057] = anon_sym_DOLLAR;
	v->a[76058] = actions(3220);
	v->a[76059] = 1;
	small_parse_table_3803(v);
}

void	small_parse_table_3803(t_small_parse_table_array *v)
{
	v->a[76060] = anon_sym_DQUOTE;
	v->a[76061] = state(1629);
	v->a[76062] = 1;
	v->a[76063] = aux_sym_string_repeat1;
	v->a[76064] = state(1748);
	v->a[76065] = 4;
	v->a[76066] = sym_arithmetic_expansion;
	v->a[76067] = sym_simple_expansion;
	v->a[76068] = sym_expansion;
	v->a[76069] = sym_command_substitution;
	v->a[76070] = 8;
	v->a[76071] = actions(3);
	v->a[76072] = 1;
	v->a[76073] = sym_comment;
	v->a[76074] = actions(3040);
	v->a[76075] = 1;
	v->a[76076] = anon_sym_POUND;
	v->a[76077] = actions(3042);
	v->a[76078] = 1;
	v->a[76079] = aux_sym__simple_variable_name_token1;
	small_parse_table_3804(v);
}

void	small_parse_table_3804(t_small_parse_table_array *v)
{
	v->a[76080] = actions(3044);
	v->a[76081] = 1;
	v->a[76082] = anon_sym_0;
	v->a[76083] = actions(3046);
	v->a[76084] = 1;
	v->a[76085] = sym_variable_name;
	v->a[76086] = actions(3222);
	v->a[76087] = 1;
	v->a[76088] = anon_sym_RBRACE;
	v->a[76089] = state(1954);
	v->a[76090] = 1;
	v->a[76091] = sym__expansion_body;
	v->a[76092] = actions(3038);
	v->a[76093] = 6;
	v->a[76094] = anon_sym_BANG;
	v->a[76095] = anon_sym_DASH;
	v->a[76096] = anon_sym_STAR;
	v->a[76097] = anon_sym_QMARK;
	v->a[76098] = anon_sym_DOLLAR;
	v->a[76099] = anon_sym_AT;
	small_parse_table_3805(v);
}

/* EOF small_parse_table_760.c */
