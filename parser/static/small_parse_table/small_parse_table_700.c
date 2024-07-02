/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_700.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3500(t_small_parse_table_array *v)
{
	v->a[70000] = actions(1564);
	v->a[70001] = 1;
	v->a[70002] = anon_sym_DOLLAR;
	v->a[70003] = actions(1566);
	v->a[70004] = 1;
	v->a[70005] = anon_sym_DQUOTE;
	v->a[70006] = actions(1568);
	v->a[70007] = 1;
	v->a[70008] = anon_sym_DOLLAR_LBRACE;
	v->a[70009] = actions(1570);
	v->a[70010] = 1;
	v->a[70011] = anon_sym_DOLLAR_LPAREN;
	v->a[70012] = actions(1572);
	v->a[70013] = 1;
	v->a[70014] = anon_sym_BQUOTE;
	v->a[70015] = state(708);
	v->a[70016] = 2;
	v->a[70017] = sym_concatenation;
	v->a[70018] = aux_sym_for_statement_repeat1;
	v->a[70019] = actions(1560);
	small_parse_table_3501(v);
}

void	small_parse_table_3501(t_small_parse_table_array *v)
{
	v->a[70020] = 3;
	v->a[70021] = sym_raw_string;
	v->a[70022] = sym_number;
	v->a[70023] = sym_word;
	v->a[70024] = state(917);
	v->a[70025] = 5;
	v->a[70026] = sym_arithmetic_expansion;
	v->a[70027] = sym_string;
	v->a[70028] = sym_simple_expansion;
	v->a[70029] = sym_expansion;
	v->a[70030] = sym_command_substitution;
	v->a[70031] = 10;
	v->a[70032] = actions(3);
	v->a[70033] = 1;
	v->a[70034] = sym_comment;
	v->a[70035] = actions(2444);
	v->a[70036] = 1;
	v->a[70037] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70038] = actions(2448);
	v->a[70039] = 1;
	small_parse_table_3502(v);
}

void	small_parse_table_3502(t_small_parse_table_array *v)
{
	v->a[70040] = anon_sym_DQUOTE;
	v->a[70041] = actions(2450);
	v->a[70042] = 1;
	v->a[70043] = anon_sym_DOLLAR_LBRACE;
	v->a[70044] = actions(2452);
	v->a[70045] = 1;
	v->a[70046] = anon_sym_DOLLAR_LPAREN;
	v->a[70047] = actions(2454);
	v->a[70048] = 1;
	v->a[70049] = anon_sym_BQUOTE;
	v->a[70050] = actions(2553);
	v->a[70051] = 1;
	v->a[70052] = anon_sym_DOLLAR;
	v->a[70053] = state(229);
	v->a[70054] = 2;
	v->a[70055] = sym_concatenation;
	v->a[70056] = aux_sym_for_statement_repeat1;
	v->a[70057] = actions(2761);
	v->a[70058] = 3;
	v->a[70059] = sym_raw_string;
	small_parse_table_3503(v);
}

void	small_parse_table_3503(t_small_parse_table_array *v)
{
	v->a[70060] = sym_number;
	v->a[70061] = sym_word;
	v->a[70062] = state(481);
	v->a[70063] = 5;
	v->a[70064] = sym_arithmetic_expansion;
	v->a[70065] = sym_string;
	v->a[70066] = sym_simple_expansion;
	v->a[70067] = sym_expansion;
	v->a[70068] = sym_command_substitution;
	v->a[70069] = 10;
	v->a[70070] = actions(3);
	v->a[70071] = 1;
	v->a[70072] = sym_comment;
	v->a[70073] = actions(2474);
	v->a[70074] = 1;
	v->a[70075] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70076] = actions(2478);
	v->a[70077] = 1;
	v->a[70078] = anon_sym_DQUOTE;
	v->a[70079] = actions(2480);
	small_parse_table_3504(v);
}

void	small_parse_table_3504(t_small_parse_table_array *v)
{
	v->a[70080] = 1;
	v->a[70081] = anon_sym_DOLLAR_LBRACE;
	v->a[70082] = actions(2482);
	v->a[70083] = 1;
	v->a[70084] = anon_sym_DOLLAR_LPAREN;
	v->a[70085] = actions(2484);
	v->a[70086] = 1;
	v->a[70087] = anon_sym_BQUOTE;
	v->a[70088] = actions(2644);
	v->a[70089] = 1;
	v->a[70090] = anon_sym_DOLLAR;
	v->a[70091] = state(553);
	v->a[70092] = 2;
	v->a[70093] = sym_concatenation;
	v->a[70094] = aux_sym_for_statement_repeat1;
	v->a[70095] = actions(2745);
	v->a[70096] = 3;
	v->a[70097] = sym_raw_string;
	v->a[70098] = sym_number;
	v->a[70099] = sym_word;
	small_parse_table_3505(v);
}

/* EOF small_parse_table_700.c */
