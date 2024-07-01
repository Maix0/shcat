/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_680.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3400(t_small_parse_table_array *v)
{
	v->a[68000] = actions(2322);
	v->a[68001] = 5;
	v->a[68002] = aux_sym_concatenation_token1;
	v->a[68003] = sym_raw_string;
	v->a[68004] = sym_number;
	v->a[68005] = sym__comment_word;
	v->a[68006] = sym_word;
	v->a[68007] = state(909);
	v->a[68008] = 5;
	v->a[68009] = sym_arithmetic_expansion;
	v->a[68010] = sym_string;
	v->a[68011] = sym_simple_expansion;
	v->a[68012] = sym_expansion;
	v->a[68013] = sym_command_substitution;
	v->a[68014] = 10;
	v->a[68015] = actions(3);
	v->a[68016] = 1;
	v->a[68017] = sym_comment;
	v->a[68018] = actions(871);
	v->a[68019] = 1;
	small_parse_table_3401(v);
}

void	small_parse_table_3401(t_small_parse_table_array *v)
{
	v->a[68020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68021] = actions(875);
	v->a[68022] = 1;
	v->a[68023] = anon_sym_DQUOTE;
	v->a[68024] = actions(877);
	v->a[68025] = 1;
	v->a[68026] = anon_sym_DOLLAR_LBRACE;
	v->a[68027] = actions(879);
	v->a[68028] = 1;
	v->a[68029] = anon_sym_DOLLAR_LPAREN;
	v->a[68030] = actions(881);
	v->a[68031] = 1;
	v->a[68032] = anon_sym_BQUOTE;
	v->a[68033] = actions(2366);
	v->a[68034] = 1;
	v->a[68035] = sym__bare_dollar;
	v->a[68036] = actions(2632);
	v->a[68037] = 1;
	v->a[68038] = anon_sym_DOLLAR;
	v->a[68039] = actions(2362);
	small_parse_table_3402(v);
}

void	small_parse_table_3402(t_small_parse_table_array *v)
{
	v->a[68040] = 5;
	v->a[68041] = aux_sym_concatenation_token1;
	v->a[68042] = sym_raw_string;
	v->a[68043] = sym_number;
	v->a[68044] = sym__comment_word;
	v->a[68045] = sym_word;
	v->a[68046] = state(589);
	v->a[68047] = 5;
	v->a[68048] = sym_arithmetic_expansion;
	v->a[68049] = sym_string;
	v->a[68050] = sym_simple_expansion;
	v->a[68051] = sym_expansion;
	v->a[68052] = sym_command_substitution;
	v->a[68053] = 12;
	v->a[68054] = actions(3);
	v->a[68055] = 1;
	v->a[68056] = sym_comment;
	v->a[68057] = actions(2324);
	v->a[68058] = 1;
	v->a[68059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3403(v);
}

void	small_parse_table_3403(t_small_parse_table_array *v)
{
	v->a[68060] = actions(2328);
	v->a[68061] = 1;
	v->a[68062] = anon_sym_DQUOTE;
	v->a[68063] = actions(2330);
	v->a[68064] = 1;
	v->a[68065] = anon_sym_DOLLAR_LBRACE;
	v->a[68066] = actions(2332);
	v->a[68067] = 1;
	v->a[68068] = anon_sym_DOLLAR_LPAREN;
	v->a[68069] = actions(2334);
	v->a[68070] = 1;
	v->a[68071] = anon_sym_BQUOTE;
	v->a[68072] = actions(2360);
	v->a[68073] = 1;
	v->a[68074] = anon_sym_DOLLAR;
	v->a[68075] = actions(2480);
	v->a[68076] = 1;
	v->a[68077] = sym__comment_word;
	v->a[68078] = actions(2482);
	v->a[68079] = 1;
	small_parse_table_3404(v);
}

void	small_parse_table_3404(t_small_parse_table_array *v)
{
	v->a[68080] = sym__empty_value;
	v->a[68081] = state(1078);
	v->a[68082] = 1;
	v->a[68083] = sym_concatenation;
	v->a[68084] = actions(2634);
	v->a[68085] = 3;
	v->a[68086] = sym_raw_string;
	v->a[68087] = sym_number;
	v->a[68088] = sym_word;
	v->a[68089] = state(1239);
	v->a[68090] = 5;
	v->a[68091] = sym_arithmetic_expansion;
	v->a[68092] = sym_string;
	v->a[68093] = sym_simple_expansion;
	v->a[68094] = sym_expansion;
	v->a[68095] = sym_command_substitution;
	v->a[68096] = 10;
	v->a[68097] = actions(3);
	v->a[68098] = 1;
	v->a[68099] = sym_comment;
	small_parse_table_3405(v);
}

/* EOF small_parse_table_680.c */
