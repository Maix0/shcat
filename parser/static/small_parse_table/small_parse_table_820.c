/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_820.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4100(t_small_parse_table_array *v)
{
	v->a[82000] = sym_arithmetic_expansion;
	v->a[82001] = sym_string;
	v->a[82002] = sym_simple_expansion;
	v->a[82003] = sym_expansion;
	v->a[82004] = sym_command_substitution;
	v->a[82005] = 10;
	v->a[82006] = actions(3);
	v->a[82007] = 1;
	v->a[82008] = sym_comment;
	v->a[82009] = actions(3060);
	v->a[82010] = 1;
	v->a[82011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82012] = actions(3064);
	v->a[82013] = 1;
	v->a[82014] = anon_sym_DQUOTE;
	v->a[82015] = actions(3066);
	v->a[82016] = 1;
	v->a[82017] = anon_sym_DOLLAR_LBRACE;
	v->a[82018] = actions(3068);
	v->a[82019] = 1;
	small_parse_table_4101(v);
}

void	small_parse_table_4101(t_small_parse_table_array *v)
{
	v->a[82020] = anon_sym_DOLLAR_LPAREN;
	v->a[82021] = actions(3070);
	v->a[82022] = 1;
	v->a[82023] = anon_sym_BQUOTE;
	v->a[82024] = actions(3072);
	v->a[82025] = 1;
	v->a[82026] = sym__bare_dollar;
	v->a[82027] = actions(3104);
	v->a[82028] = 1;
	v->a[82029] = anon_sym_DOLLAR;
	v->a[82030] = actions(3058);
	v->a[82031] = 5;
	v->a[82032] = aux_sym_concatenation_token1;
	v->a[82033] = sym_raw_string;
	v->a[82034] = sym_number;
	v->a[82035] = sym__comment_word;
	v->a[82036] = sym_word;
	v->a[82037] = state(1982);
	v->a[82038] = 5;
	v->a[82039] = sym_arithmetic_expansion;
	small_parse_table_4102(v);
}

void	small_parse_table_4102(t_small_parse_table_array *v)
{
	v->a[82040] = sym_string;
	v->a[82041] = sym_simple_expansion;
	v->a[82042] = sym_expansion;
	v->a[82043] = sym_command_substitution;
	v->a[82044] = 12;
	v->a[82045] = actions(3);
	v->a[82046] = 1;
	v->a[82047] = sym_comment;
	v->a[82048] = actions(2719);
	v->a[82049] = 1;
	v->a[82050] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82051] = actions(2721);
	v->a[82052] = 1;
	v->a[82053] = anon_sym_DOLLAR;
	v->a[82054] = actions(2723);
	v->a[82055] = 1;
	v->a[82056] = anon_sym_DQUOTE;
	v->a[82057] = actions(2725);
	v->a[82058] = 1;
	v->a[82059] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4103(v);
}

void	small_parse_table_4103(t_small_parse_table_array *v)
{
	v->a[82060] = actions(2727);
	v->a[82061] = 1;
	v->a[82062] = anon_sym_DOLLAR_LPAREN;
	v->a[82063] = actions(2729);
	v->a[82064] = 1;
	v->a[82065] = anon_sym_BQUOTE;
	v->a[82066] = actions(2731);
	v->a[82067] = 1;
	v->a[82068] = sym__comment_word;
	v->a[82069] = actions(2733);
	v->a[82070] = 1;
	v->a[82071] = sym__empty_value;
	v->a[82072] = state(697);
	v->a[82073] = 1;
	v->a[82074] = sym_concatenation;
	v->a[82075] = actions(3106);
	v->a[82076] = 3;
	v->a[82077] = sym_raw_string;
	v->a[82078] = sym_number;
	v->a[82079] = sym_word;
	small_parse_table_4104(v);
}

void	small_parse_table_4104(t_small_parse_table_array *v)
{
	v->a[82080] = state(322);
	v->a[82081] = 5;
	v->a[82082] = sym_arithmetic_expansion;
	v->a[82083] = sym_string;
	v->a[82084] = sym_simple_expansion;
	v->a[82085] = sym_expansion;
	v->a[82086] = sym_command_substitution;
	v->a[82087] = 10;
	v->a[82088] = actions(3);
	v->a[82089] = 1;
	v->a[82090] = sym_comment;
	v->a[82091] = actions(2809);
	v->a[82092] = 1;
	v->a[82093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82094] = actions(2813);
	v->a[82095] = 1;
	v->a[82096] = anon_sym_DQUOTE;
	v->a[82097] = actions(2815);
	v->a[82098] = 1;
	v->a[82099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4105(v);
}

/* EOF small_parse_table_820.c */
