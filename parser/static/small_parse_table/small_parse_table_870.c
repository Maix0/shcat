/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_870.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4350(t_small_parse_table_array *v)
{
	v->a[87000] = actions(3414);
	v->a[87001] = 1;
	v->a[87002] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87003] = actions(3420);
	v->a[87004] = 1;
	v->a[87005] = sym_string_content;
	v->a[87006] = actions(3422);
	v->a[87007] = 1;
	v->a[87008] = anon_sym_DOLLAR_LBRACE;
	v->a[87009] = actions(3424);
	v->a[87010] = 1;
	v->a[87011] = anon_sym_DOLLAR_LPAREN;
	v->a[87012] = actions(3426);
	v->a[87013] = 1;
	v->a[87014] = anon_sym_BQUOTE;
	v->a[87015] = actions(3528);
	v->a[87016] = 1;
	v->a[87017] = anon_sym_DOLLAR;
	v->a[87018] = actions(3530);
	v->a[87019] = 1;
	small_parse_table_4351(v);
}

void	small_parse_table_4351(t_small_parse_table_array *v)
{
	v->a[87020] = anon_sym_DQUOTE;
	v->a[87021] = state(1906);
	v->a[87022] = 1;
	v->a[87023] = aux_sym_string_repeat1;
	v->a[87024] = state(1959);
	v->a[87025] = 4;
	v->a[87026] = sym_arithmetic_expansion;
	v->a[87027] = sym_simple_expansion;
	v->a[87028] = sym_expansion;
	v->a[87029] = sym_command_substitution;
	v->a[87030] = 4;
	v->a[87031] = actions(3);
	v->a[87032] = 1;
	v->a[87033] = sym_comment;
	v->a[87034] = actions(453);
	v->a[87035] = 1;
	v->a[87036] = sym_variable_name;
	v->a[87037] = actions(451);
	v->a[87038] = 2;
	v->a[87039] = aux_sym__simple_variable_name_token1;
	small_parse_table_4352(v);
}

void	small_parse_table_4352(t_small_parse_table_array *v)
{
	v->a[87040] = aux_sym__multiline_variable_name_token1;
	v->a[87041] = actions(449);
	v->a[87042] = 9;
	v->a[87043] = anon_sym_BANG;
	v->a[87044] = anon_sym_DASH;
	v->a[87045] = anon_sym_STAR;
	v->a[87046] = anon_sym_QMARK;
	v->a[87047] = anon_sym_DOLLAR;
	v->a[87048] = anon_sym_POUND;
	v->a[87049] = anon_sym_AT;
	v->a[87050] = anon_sym_0;
	v->a[87051] = anon_sym__;
	v->a[87052] = 10;
	v->a[87053] = actions(3);
	v->a[87054] = 1;
	v->a[87055] = sym_comment;
	v->a[87056] = actions(3414);
	v->a[87057] = 1;
	v->a[87058] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87059] = actions(3420);
	small_parse_table_4353(v);
}

void	small_parse_table_4353(t_small_parse_table_array *v)
{
	v->a[87060] = 1;
	v->a[87061] = sym_string_content;
	v->a[87062] = actions(3422);
	v->a[87063] = 1;
	v->a[87064] = anon_sym_DOLLAR_LBRACE;
	v->a[87065] = actions(3424);
	v->a[87066] = 1;
	v->a[87067] = anon_sym_DOLLAR_LPAREN;
	v->a[87068] = actions(3426);
	v->a[87069] = 1;
	v->a[87070] = anon_sym_BQUOTE;
	v->a[87071] = actions(3532);
	v->a[87072] = 1;
	v->a[87073] = anon_sym_DOLLAR;
	v->a[87074] = actions(3534);
	v->a[87075] = 1;
	v->a[87076] = anon_sym_DQUOTE;
	v->a[87077] = state(1906);
	v->a[87078] = 1;
	v->a[87079] = aux_sym_string_repeat1;
	small_parse_table_4354(v);
}

void	small_parse_table_4354(t_small_parse_table_array *v)
{
	v->a[87080] = state(1959);
	v->a[87081] = 4;
	v->a[87082] = sym_arithmetic_expansion;
	v->a[87083] = sym_simple_expansion;
	v->a[87084] = sym_expansion;
	v->a[87085] = sym_command_substitution;
	v->a[87086] = 10;
	v->a[87087] = actions(3);
	v->a[87088] = 1;
	v->a[87089] = sym_comment;
	v->a[87090] = actions(3414);
	v->a[87091] = 1;
	v->a[87092] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87093] = actions(3420);
	v->a[87094] = 1;
	v->a[87095] = sym_string_content;
	v->a[87096] = actions(3422);
	v->a[87097] = 1;
	v->a[87098] = anon_sym_DOLLAR_LBRACE;
	v->a[87099] = actions(3424);
	small_parse_table_4355(v);
}

/* EOF small_parse_table_870.c */
