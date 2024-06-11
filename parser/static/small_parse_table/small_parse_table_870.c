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
	v->a[87000] = 1;
	v->a[87001] = anon_sym_BQUOTE;
	v->a[87002] = actions(3509);
	v->a[87003] = 1;
	v->a[87004] = sym__bare_dollar;
	v->a[87005] = actions(3521);
	v->a[87006] = 1;
	v->a[87007] = anon_sym_DOLLAR;
	v->a[87008] = actions(3507);
	v->a[87009] = 5;
	v->a[87010] = aux_sym_concatenation_token1;
	v->a[87011] = sym_raw_string;
	v->a[87012] = sym_number;
	v->a[87013] = sym__comment_word;
	v->a[87014] = sym_word;
	v->a[87015] = state(498);
	v->a[87016] = 5;
	v->a[87017] = sym_arithmetic_expansion;
	v->a[87018] = sym_string;
	v->a[87019] = sym_simple_expansion;
	small_parse_table_4351(v);
}

void	small_parse_table_4351(t_small_parse_table_array *v)
{
	v->a[87020] = sym_expansion;
	v->a[87021] = sym_command_substitution;
	v->a[87022] = 12;
	v->a[87023] = actions(3);
	v->a[87024] = 1;
	v->a[87025] = sym_comment;
	v->a[87026] = actions(3397);
	v->a[87027] = 1;
	v->a[87028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87029] = actions(3399);
	v->a[87030] = 1;
	v->a[87031] = anon_sym_DOLLAR;
	v->a[87032] = actions(3401);
	v->a[87033] = 1;
	v->a[87034] = anon_sym_DQUOTE;
	v->a[87035] = actions(3403);
	v->a[87036] = 1;
	v->a[87037] = anon_sym_DOLLAR_LBRACE;
	v->a[87038] = actions(3405);
	v->a[87039] = 1;
	small_parse_table_4352(v);
}

void	small_parse_table_4352(t_small_parse_table_array *v)
{
	v->a[87040] = anon_sym_DOLLAR_LPAREN;
	v->a[87041] = actions(3407);
	v->a[87042] = 1;
	v->a[87043] = anon_sym_BQUOTE;
	v->a[87044] = actions(3525);
	v->a[87045] = 1;
	v->a[87046] = sym__comment_word;
	v->a[87047] = actions(3527);
	v->a[87048] = 1;
	v->a[87049] = sym__empty_value;
	v->a[87050] = state(1494);
	v->a[87051] = 1;
	v->a[87052] = sym_concatenation;
	v->a[87053] = actions(3523);
	v->a[87054] = 3;
	v->a[87055] = sym_raw_string;
	v->a[87056] = sym_number;
	v->a[87057] = sym_word;
	v->a[87058] = state(1225);
	v->a[87059] = 5;
	small_parse_table_4353(v);
}

void	small_parse_table_4353(t_small_parse_table_array *v)
{
	v->a[87060] = sym_arithmetic_expansion;
	v->a[87061] = sym_string;
	v->a[87062] = sym_simple_expansion;
	v->a[87063] = sym_expansion;
	v->a[87064] = sym_command_substitution;
	v->a[87065] = 10;
	v->a[87066] = actions(3);
	v->a[87067] = 1;
	v->a[87068] = sym_comment;
	v->a[87069] = actions(3156);
	v->a[87070] = 1;
	v->a[87071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87072] = actions(3160);
	v->a[87073] = 1;
	v->a[87074] = anon_sym_DQUOTE;
	v->a[87075] = actions(3162);
	v->a[87076] = 1;
	v->a[87077] = anon_sym_DOLLAR_LBRACE;
	v->a[87078] = actions(3164);
	v->a[87079] = 1;
	small_parse_table_4354(v);
}

void	small_parse_table_4354(t_small_parse_table_array *v)
{
	v->a[87080] = anon_sym_DOLLAR_LPAREN;
	v->a[87081] = actions(3166);
	v->a[87082] = 1;
	v->a[87083] = anon_sym_BQUOTE;
	v->a[87084] = actions(3168);
	v->a[87085] = 1;
	v->a[87086] = sym__bare_dollar;
	v->a[87087] = actions(3529);
	v->a[87088] = 1;
	v->a[87089] = anon_sym_DOLLAR;
	v->a[87090] = actions(3154);
	v->a[87091] = 5;
	v->a[87092] = aux_sym_concatenation_token1;
	v->a[87093] = sym_raw_string;
	v->a[87094] = sym_number;
	v->a[87095] = sym__comment_word;
	v->a[87096] = sym_word;
	v->a[87097] = state(1113);
	v->a[87098] = 5;
	v->a[87099] = sym_arithmetic_expansion;
	small_parse_table_4355(v);
}

/* EOF small_parse_table_870.c */
