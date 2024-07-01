/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_710.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3550(t_small_parse_table_array *v)
{
	v->a[71000] = actions(2468);
	v->a[71001] = 1;
	v->a[71002] = anon_sym_DOLLAR_LBRACE;
	v->a[71003] = actions(2470);
	v->a[71004] = 1;
	v->a[71005] = anon_sym_DOLLAR_LPAREN;
	v->a[71006] = actions(2472);
	v->a[71007] = 1;
	v->a[71008] = anon_sym_BQUOTE;
	v->a[71009] = actions(2526);
	v->a[71010] = 1;
	v->a[71011] = anon_sym_DOLLAR;
	v->a[71012] = state(202);
	v->a[71013] = 2;
	v->a[71014] = sym_concatenation;
	v->a[71015] = aux_sym_for_statement_repeat1;
	v->a[71016] = actions(2770);
	v->a[71017] = 3;
	v->a[71018] = sym_raw_string;
	v->a[71019] = sym_number;
	small_parse_table_3551(v);
}

void	small_parse_table_3551(t_small_parse_table_array *v)
{
	v->a[71020] = sym_word;
	v->a[71021] = state(407);
	v->a[71022] = 5;
	v->a[71023] = sym_arithmetic_expansion;
	v->a[71024] = sym_string;
	v->a[71025] = sym_simple_expansion;
	v->a[71026] = sym_expansion;
	v->a[71027] = sym_command_substitution;
	v->a[71028] = 10;
	v->a[71029] = actions(3);
	v->a[71030] = 1;
	v->a[71031] = sym_comment;
	v->a[71032] = actions(2340);
	v->a[71033] = 1;
	v->a[71034] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71035] = actions(2344);
	v->a[71036] = 1;
	v->a[71037] = anon_sym_DQUOTE;
	v->a[71038] = actions(2346);
	v->a[71039] = 1;
	small_parse_table_3552(v);
}

void	small_parse_table_3552(t_small_parse_table_array *v)
{
	v->a[71040] = anon_sym_DOLLAR_LBRACE;
	v->a[71041] = actions(2348);
	v->a[71042] = 1;
	v->a[71043] = anon_sym_DOLLAR_LPAREN;
	v->a[71044] = actions(2350);
	v->a[71045] = 1;
	v->a[71046] = anon_sym_BQUOTE;
	v->a[71047] = actions(2392);
	v->a[71048] = 1;
	v->a[71049] = anon_sym_DOLLAR;
	v->a[71050] = state(557);
	v->a[71051] = 2;
	v->a[71052] = sym_concatenation;
	v->a[71053] = aux_sym_for_statement_repeat1;
	v->a[71054] = actions(2774);
	v->a[71055] = 3;
	v->a[71056] = sym_raw_string;
	v->a[71057] = sym_number;
	v->a[71058] = sym_word;
	v->a[71059] = state(782);
	small_parse_table_3553(v);
}

void	small_parse_table_3553(t_small_parse_table_array *v)
{
	v->a[71060] = 5;
	v->a[71061] = sym_arithmetic_expansion;
	v->a[71062] = sym_string;
	v->a[71063] = sym_simple_expansion;
	v->a[71064] = sym_expansion;
	v->a[71065] = sym_command_substitution;
	v->a[71066] = 10;
	v->a[71067] = actions(3);
	v->a[71068] = 1;
	v->a[71069] = sym_comment;
	v->a[71070] = actions(2400);
	v->a[71071] = 1;
	v->a[71072] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71073] = actions(2404);
	v->a[71074] = 1;
	v->a[71075] = anon_sym_DQUOTE;
	v->a[71076] = actions(2406);
	v->a[71077] = 1;
	v->a[71078] = anon_sym_DOLLAR_LBRACE;
	v->a[71079] = actions(2408);
	small_parse_table_3554(v);
}

void	small_parse_table_3554(t_small_parse_table_array *v)
{
	v->a[71080] = 1;
	v->a[71081] = anon_sym_DOLLAR_LPAREN;
	v->a[71082] = actions(2410);
	v->a[71083] = 1;
	v->a[71084] = anon_sym_BQUOTE;
	v->a[71085] = actions(2532);
	v->a[71086] = 1;
	v->a[71087] = anon_sym_DOLLAR;
	v->a[71088] = state(223);
	v->a[71089] = 2;
	v->a[71090] = sym_concatenation;
	v->a[71091] = aux_sym_for_statement_repeat1;
	v->a[71092] = actions(2772);
	v->a[71093] = 3;
	v->a[71094] = sym_raw_string;
	v->a[71095] = sym_number;
	v->a[71096] = sym_word;
	v->a[71097] = state(459);
	v->a[71098] = 5;
	v->a[71099] = sym_arithmetic_expansion;
	small_parse_table_3555(v);
}

/* EOF small_parse_table_710.c */
