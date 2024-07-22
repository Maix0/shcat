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
	v->a[70000] = 1;
	v->a[70001] = anon_sym_BQUOTE;
	v->a[70002] = state(866);
	v->a[70003] = 2;
	v->a[70004] = sym_concatenation;
	v->a[70005] = aux_sym_for_statement_repeat1;
	v->a[70006] = actions(2785);
	v->a[70007] = 3;
	v->a[70008] = sym_raw_string;
	v->a[70009] = sym_number;
	v->a[70010] = sym_word;
	v->a[70011] = state(959);
	v->a[70012] = 5;
	v->a[70013] = sym_arithmetic_expansion;
	v->a[70014] = sym_string;
	v->a[70015] = sym_simple_expansion;
	v->a[70016] = sym_expansion;
	v->a[70017] = sym_command_substitution;
	v->a[70018] = 3;
	v->a[70019] = actions(501);
	small_parse_table_3501(v);
}

void	small_parse_table_3501(t_small_parse_table_array *v)
{
	v->a[70020] = 1;
	v->a[70021] = sym_comment;
	v->a[70022] = actions(525);
	v->a[70023] = 4;
	v->a[70024] = anon_sym_PIPE;
	v->a[70025] = anon_sym_LT;
	v->a[70026] = anon_sym_GT;
	v->a[70027] = anon_sym_LT_LT;
	v->a[70028] = actions(527);
	v->a[70029] = 12;
	v->a[70030] = sym_file_descriptor;
	v->a[70031] = sym__concat;
	v->a[70032] = sym_variable_name;
	v->a[70033] = anon_sym_AMP_AMP;
	v->a[70034] = anon_sym_PIPE_PIPE;
	v->a[70035] = anon_sym_GT_GT;
	v->a[70036] = anon_sym_LT_AMP;
	v->a[70037] = anon_sym_GT_AMP;
	v->a[70038] = anon_sym_GT_PIPE;
	v->a[70039] = anon_sym_LT_GT;
	small_parse_table_3502(v);
}

void	small_parse_table_3502(t_small_parse_table_array *v)
{
	v->a[70040] = anon_sym_LT_LT_DASH;
	v->a[70041] = aux_sym_concatenation_token1;
	v->a[70042] = 3;
	v->a[70043] = actions(501);
	v->a[70044] = 1;
	v->a[70045] = sym_comment;
	v->a[70046] = actions(521);
	v->a[70047] = 4;
	v->a[70048] = anon_sym_PIPE;
	v->a[70049] = anon_sym_LT;
	v->a[70050] = anon_sym_GT;
	v->a[70051] = anon_sym_LT_LT;
	v->a[70052] = actions(523);
	v->a[70053] = 12;
	v->a[70054] = sym_file_descriptor;
	v->a[70055] = sym__concat;
	v->a[70056] = sym_variable_name;
	v->a[70057] = anon_sym_AMP_AMP;
	v->a[70058] = anon_sym_PIPE_PIPE;
	v->a[70059] = anon_sym_GT_GT;
	small_parse_table_3503(v);
}

void	small_parse_table_3503(t_small_parse_table_array *v)
{
	v->a[70060] = anon_sym_LT_AMP;
	v->a[70061] = anon_sym_GT_AMP;
	v->a[70062] = anon_sym_GT_PIPE;
	v->a[70063] = anon_sym_LT_GT;
	v->a[70064] = anon_sym_LT_LT_DASH;
	v->a[70065] = aux_sym_concatenation_token1;
	v->a[70066] = 10;
	v->a[70067] = actions(3);
	v->a[70068] = 1;
	v->a[70069] = sym_comment;
	v->a[70070] = actions(2399);
	v->a[70071] = 1;
	v->a[70072] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70073] = actions(2401);
	v->a[70074] = 1;
	v->a[70075] = anon_sym_DOLLAR;
	v->a[70076] = actions(2403);
	v->a[70077] = 1;
	v->a[70078] = anon_sym_DQUOTE;
	v->a[70079] = actions(2405);
	small_parse_table_3504(v);
}

void	small_parse_table_3504(t_small_parse_table_array *v)
{
	v->a[70080] = 1;
	v->a[70081] = anon_sym_DOLLAR_LBRACE;
	v->a[70082] = actions(2407);
	v->a[70083] = 1;
	v->a[70084] = anon_sym_DOLLAR_LPAREN;
	v->a[70085] = actions(2409);
	v->a[70086] = 1;
	v->a[70087] = anon_sym_BQUOTE;
	v->a[70088] = state(434);
	v->a[70089] = 2;
	v->a[70090] = sym_concatenation;
	v->a[70091] = aux_sym_for_statement_repeat1;
	v->a[70092] = actions(2783);
	v->a[70093] = 3;
	v->a[70094] = sym_raw_string;
	v->a[70095] = sym_number;
	v->a[70096] = sym_word;
	v->a[70097] = state(806);
	v->a[70098] = 5;
	v->a[70099] = sym_arithmetic_expansion;
	small_parse_table_3505(v);
}

/* EOF small_parse_table_700.c */
