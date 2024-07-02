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
	v->a[68000] = sym_comment;
	v->a[68001] = actions(1641);
	v->a[68002] = 1;
	v->a[68003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68004] = actions(1643);
	v->a[68005] = 1;
	v->a[68006] = anon_sym_DOLLAR;
	v->a[68007] = actions(1645);
	v->a[68008] = 1;
	v->a[68009] = anon_sym_DQUOTE;
	v->a[68010] = actions(1647);
	v->a[68011] = 1;
	v->a[68012] = anon_sym_DOLLAR_LBRACE;
	v->a[68013] = actions(1649);
	v->a[68014] = 1;
	v->a[68015] = anon_sym_DOLLAR_LPAREN;
	v->a[68016] = actions(1651);
	v->a[68017] = 1;
	v->a[68018] = anon_sym_BQUOTE;
	v->a[68019] = actions(1653);
	small_parse_table_3401(v);
}

void	small_parse_table_3401(t_small_parse_table_array *v)
{
	v->a[68020] = 1;
	v->a[68021] = sym_extglob_pattern;
	v->a[68022] = state(1881);
	v->a[68023] = 2;
	v->a[68024] = sym_concatenation;
	v->a[68025] = sym__extglob_blob;
	v->a[68026] = actions(2646);
	v->a[68027] = 3;
	v->a[68028] = sym_raw_string;
	v->a[68029] = sym_number;
	v->a[68030] = sym_word;
	v->a[68031] = state(1805);
	v->a[68032] = 5;
	v->a[68033] = sym_arithmetic_expansion;
	v->a[68034] = sym_string;
	v->a[68035] = sym_simple_expansion;
	v->a[68036] = sym_expansion;
	v->a[68037] = sym_command_substitution;
	v->a[68038] = 12;
	v->a[68039] = actions(3);
	small_parse_table_3402(v);
}

void	small_parse_table_3402(t_small_parse_table_array *v)
{
	v->a[68040] = 1;
	v->a[68041] = sym_comment;
	v->a[68042] = actions(2358);
	v->a[68043] = 1;
	v->a[68044] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68045] = actions(2360);
	v->a[68046] = 1;
	v->a[68047] = anon_sym_DOLLAR;
	v->a[68048] = actions(2362);
	v->a[68049] = 1;
	v->a[68050] = anon_sym_DQUOTE;
	v->a[68051] = actions(2364);
	v->a[68052] = 1;
	v->a[68053] = anon_sym_DOLLAR_LBRACE;
	v->a[68054] = actions(2366);
	v->a[68055] = 1;
	v->a[68056] = anon_sym_DOLLAR_LPAREN;
	v->a[68057] = actions(2368);
	v->a[68058] = 1;
	v->a[68059] = anon_sym_BQUOTE;
	small_parse_table_3403(v);
}

void	small_parse_table_3403(t_small_parse_table_array *v)
{
	v->a[68060] = actions(2650);
	v->a[68061] = 1;
	v->a[68062] = sym__comment_word;
	v->a[68063] = actions(2652);
	v->a[68064] = 1;
	v->a[68065] = sym__empty_value;
	v->a[68066] = state(1216);
	v->a[68067] = 1;
	v->a[68068] = sym_concatenation;
	v->a[68069] = actions(2648);
	v->a[68070] = 3;
	v->a[68071] = sym_raw_string;
	v->a[68072] = sym_number;
	v->a[68073] = sym_word;
	v->a[68074] = state(1011);
	v->a[68075] = 5;
	v->a[68076] = sym_arithmetic_expansion;
	v->a[68077] = sym_string;
	v->a[68078] = sym_simple_expansion;
	v->a[68079] = sym_expansion;
	small_parse_table_3404(v);
}

void	small_parse_table_3404(t_small_parse_table_array *v)
{
	v->a[68080] = sym_command_substitution;
	v->a[68081] = 12;
	v->a[68082] = actions(3);
	v->a[68083] = 1;
	v->a[68084] = sym_comment;
	v->a[68085] = actions(2657);
	v->a[68086] = 1;
	v->a[68087] = aux_sym_heredoc_redirect_token1;
	v->a[68088] = actions(2659);
	v->a[68089] = 1;
	v->a[68090] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68091] = actions(2662);
	v->a[68092] = 1;
	v->a[68093] = anon_sym_DOLLAR;
	v->a[68094] = actions(2665);
	v->a[68095] = 1;
	v->a[68096] = anon_sym_DQUOTE;
	v->a[68097] = actions(2668);
	v->a[68098] = 1;
	v->a[68099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3405(v);
}

/* EOF small_parse_table_680.c */
