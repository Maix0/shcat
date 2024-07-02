/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_790.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3950(t_small_parse_table_array *v)
{
	v->a[79000] = 1;
	v->a[79001] = aux_sym_string_repeat1;
	v->a[79002] = state(1748);
	v->a[79003] = 4;
	v->a[79004] = sym_arithmetic_expansion;
	v->a[79005] = sym_simple_expansion;
	v->a[79006] = sym_expansion;
	v->a[79007] = sym_command_substitution;
	v->a[79008] = 4;
	v->a[79009] = actions(3);
	v->a[79010] = 1;
	v->a[79011] = sym_comment;
	v->a[79012] = actions(3410);
	v->a[79013] = 1;
	v->a[79014] = sym_variable_name;
	v->a[79015] = actions(3408);
	v->a[79016] = 2;
	v->a[79017] = aux_sym__simple_variable_name_token1;
	v->a[79018] = aux_sym__multiline_variable_name_token1;
	v->a[79019] = actions(3406);
	small_parse_table_3951(v);
}

void	small_parse_table_3951(t_small_parse_table_array *v)
{
	v->a[79020] = 9;
	v->a[79021] = anon_sym_BANG;
	v->a[79022] = anon_sym_DASH;
	v->a[79023] = anon_sym_STAR;
	v->a[79024] = anon_sym_QMARK;
	v->a[79025] = anon_sym_DOLLAR;
	v->a[79026] = anon_sym_POUND;
	v->a[79027] = anon_sym_AT;
	v->a[79028] = anon_sym_0;
	v->a[79029] = anon_sym__;
	v->a[79030] = 4;
	v->a[79031] = actions(3);
	v->a[79032] = 1;
	v->a[79033] = sym_comment;
	v->a[79034] = actions(417);
	v->a[79035] = 1;
	v->a[79036] = sym_variable_name;
	v->a[79037] = actions(415);
	v->a[79038] = 2;
	v->a[79039] = aux_sym__simple_variable_name_token1;
	small_parse_table_3952(v);
}

void	small_parse_table_3952(t_small_parse_table_array *v)
{
	v->a[79040] = aux_sym__multiline_variable_name_token1;
	v->a[79041] = actions(413);
	v->a[79042] = 9;
	v->a[79043] = anon_sym_BANG;
	v->a[79044] = anon_sym_DASH;
	v->a[79045] = anon_sym_STAR;
	v->a[79046] = anon_sym_QMARK;
	v->a[79047] = anon_sym_DOLLAR;
	v->a[79048] = anon_sym_POUND;
	v->a[79049] = anon_sym_AT;
	v->a[79050] = anon_sym_0;
	v->a[79051] = anon_sym__;
	v->a[79052] = 4;
	v->a[79053] = actions(3);
	v->a[79054] = 1;
	v->a[79055] = sym_comment;
	v->a[79056] = actions(3146);
	v->a[79057] = 1;
	v->a[79058] = anon_sym_esac;
	v->a[79059] = actions(3148);
	small_parse_table_3953(v);
}

void	small_parse_table_3953(t_small_parse_table_array *v)
{
	v->a[79060] = 1;
	v->a[79061] = sym_extglob_pattern;
	v->a[79062] = actions(3144);
	v->a[79063] = 10;
	v->a[79064] = anon_sym_LPAREN;
	v->a[79065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79066] = anon_sym_DOLLAR;
	v->a[79067] = anon_sym_DQUOTE;
	v->a[79068] = sym_raw_string;
	v->a[79069] = sym_number;
	v->a[79070] = anon_sym_DOLLAR_LBRACE;
	v->a[79071] = anon_sym_DOLLAR_LPAREN;
	v->a[79072] = anon_sym_BQUOTE;
	v->a[79073] = sym_word;
	v->a[79074] = 10;
	v->a[79075] = actions(3);
	v->a[79076] = 1;
	v->a[79077] = sym_comment;
	v->a[79078] = actions(3104);
	v->a[79079] = 1;
	small_parse_table_3954(v);
}

void	small_parse_table_3954(t_small_parse_table_array *v)
{
	v->a[79080] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79081] = actions(3110);
	v->a[79082] = 1;
	v->a[79083] = sym_string_content;
	v->a[79084] = actions(3112);
	v->a[79085] = 1;
	v->a[79086] = anon_sym_DOLLAR_LBRACE;
	v->a[79087] = actions(3114);
	v->a[79088] = 1;
	v->a[79089] = anon_sym_DOLLAR_LPAREN;
	v->a[79090] = actions(3116);
	v->a[79091] = 1;
	v->a[79092] = anon_sym_BQUOTE;
	v->a[79093] = actions(3412);
	v->a[79094] = 1;
	v->a[79095] = anon_sym_DOLLAR;
	v->a[79096] = actions(3414);
	v->a[79097] = 1;
	v->a[79098] = anon_sym_DQUOTE;
	v->a[79099] = state(1661);
	small_parse_table_3955(v);
}

/* EOF small_parse_table_790.c */
