/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_660.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3300(t_small_parse_table_array *v)
{
	v->a[66000] = 1;
	v->a[66001] = sym__comment_word;
	v->a[66002] = actions(2396);
	v->a[66003] = 1;
	v->a[66004] = sym__empty_value;
	v->a[66005] = state(911);
	v->a[66006] = 1;
	v->a[66007] = sym_concatenation;
	v->a[66008] = actions(2390);
	v->a[66009] = 3;
	v->a[66010] = sym_raw_string;
	v->a[66011] = sym_number;
	v->a[66012] = sym_word;
	v->a[66013] = state(849);
	v->a[66014] = 5;
	v->a[66015] = sym_arithmetic_expansion;
	v->a[66016] = sym_string;
	v->a[66017] = sym_simple_expansion;
	v->a[66018] = sym_expansion;
	v->a[66019] = sym_command_substitution;
	small_parse_table_3301(v);
}

void	small_parse_table_3301(t_small_parse_table_array *v)
{
	v->a[66020] = 10;
	v->a[66021] = actions(3);
	v->a[66022] = 1;
	v->a[66023] = sym_comment;
	v->a[66024] = actions(2400);
	v->a[66025] = 1;
	v->a[66026] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66027] = actions(2402);
	v->a[66028] = 1;
	v->a[66029] = anon_sym_DOLLAR;
	v->a[66030] = actions(2404);
	v->a[66031] = 1;
	v->a[66032] = anon_sym_DQUOTE;
	v->a[66033] = actions(2406);
	v->a[66034] = 1;
	v->a[66035] = anon_sym_DOLLAR_LBRACE;
	v->a[66036] = actions(2408);
	v->a[66037] = 1;
	v->a[66038] = anon_sym_DOLLAR_LPAREN;
	v->a[66039] = actions(2410);
	small_parse_table_3302(v);
}

void	small_parse_table_3302(t_small_parse_table_array *v)
{
	v->a[66040] = 1;
	v->a[66041] = anon_sym_BQUOTE;
	v->a[66042] = actions(2412);
	v->a[66043] = 1;
	v->a[66044] = sym__bare_dollar;
	v->a[66045] = actions(2398);
	v->a[66046] = 5;
	v->a[66047] = aux_sym_concatenation_token1;
	v->a[66048] = sym_raw_string;
	v->a[66049] = sym_number;
	v->a[66050] = sym__comment_word;
	v->a[66051] = sym_word;
	v->a[66052] = state(454);
	v->a[66053] = 5;
	v->a[66054] = sym_arithmetic_expansion;
	v->a[66055] = sym_string;
	v->a[66056] = sym_simple_expansion;
	v->a[66057] = sym_expansion;
	v->a[66058] = sym_command_substitution;
	v->a[66059] = 10;
	small_parse_table_3303(v);
}

void	small_parse_table_3303(t_small_parse_table_array *v)
{
	v->a[66060] = actions(3);
	v->a[66061] = 1;
	v->a[66062] = sym_comment;
	v->a[66063] = actions(2416);
	v->a[66064] = 1;
	v->a[66065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66066] = actions(2418);
	v->a[66067] = 1;
	v->a[66068] = anon_sym_DOLLAR;
	v->a[66069] = actions(2420);
	v->a[66070] = 1;
	v->a[66071] = anon_sym_DQUOTE;
	v->a[66072] = actions(2422);
	v->a[66073] = 1;
	v->a[66074] = anon_sym_DOLLAR_LBRACE;
	v->a[66075] = actions(2424);
	v->a[66076] = 1;
	v->a[66077] = anon_sym_DOLLAR_LPAREN;
	v->a[66078] = actions(2426);
	v->a[66079] = 1;
	small_parse_table_3304(v);
}

void	small_parse_table_3304(t_small_parse_table_array *v)
{
	v->a[66080] = anon_sym_BQUOTE;
	v->a[66081] = actions(2428);
	v->a[66082] = 1;
	v->a[66083] = sym__bare_dollar;
	v->a[66084] = actions(2414);
	v->a[66085] = 5;
	v->a[66086] = aux_sym_concatenation_token1;
	v->a[66087] = sym_raw_string;
	v->a[66088] = sym_number;
	v->a[66089] = sym__comment_word;
	v->a[66090] = sym_word;
	v->a[66091] = state(1041);
	v->a[66092] = 5;
	v->a[66093] = sym_arithmetic_expansion;
	v->a[66094] = sym_string;
	v->a[66095] = sym_simple_expansion;
	v->a[66096] = sym_expansion;
	v->a[66097] = sym_command_substitution;
	v->a[66098] = 10;
	v->a[66099] = actions(3);
	small_parse_table_3305(v);
}

/* EOF small_parse_table_660.c */
