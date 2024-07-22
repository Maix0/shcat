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
	v->a[68000] = 10;
	v->a[68001] = actions(3);
	v->a[68002] = 1;
	v->a[68003] = sym_comment;
	v->a[68004] = actions(962);
	v->a[68005] = 1;
	v->a[68006] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68007] = actions(966);
	v->a[68008] = 1;
	v->a[68009] = anon_sym_DQUOTE;
	v->a[68010] = actions(968);
	v->a[68011] = 1;
	v->a[68012] = anon_sym_DOLLAR_LBRACE;
	v->a[68013] = actions(970);
	v->a[68014] = 1;
	v->a[68015] = anon_sym_DOLLAR_LPAREN;
	v->a[68016] = actions(972);
	v->a[68017] = 1;
	v->a[68018] = anon_sym_BQUOTE;
	v->a[68019] = actions(2488);
	small_parse_table_3401(v);
}

void	small_parse_table_3401(t_small_parse_table_array *v)
{
	v->a[68020] = 1;
	v->a[68021] = sym__bare_dollar;
	v->a[68022] = actions(2713);
	v->a[68023] = 1;
	v->a[68024] = anon_sym_DOLLAR;
	v->a[68025] = actions(2486);
	v->a[68026] = 5;
	v->a[68027] = aux_sym_concatenation_token1;
	v->a[68028] = sym_raw_string;
	v->a[68029] = sym_number;
	v->a[68030] = sym__comment_word;
	v->a[68031] = sym_word;
	v->a[68032] = state(611);
	v->a[68033] = 5;
	v->a[68034] = sym_arithmetic_expansion;
	v->a[68035] = sym_string;
	v->a[68036] = sym_simple_expansion;
	v->a[68037] = sym_expansion;
	v->a[68038] = sym_command_substitution;
	v->a[68039] = 10;
	small_parse_table_3402(v);
}

void	small_parse_table_3402(t_small_parse_table_array *v)
{
	v->a[68040] = actions(3);
	v->a[68041] = 1;
	v->a[68042] = sym_comment;
	v->a[68043] = actions(2371);
	v->a[68044] = 1;
	v->a[68045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68046] = actions(2375);
	v->a[68047] = 1;
	v->a[68048] = anon_sym_DQUOTE;
	v->a[68049] = actions(2377);
	v->a[68050] = 1;
	v->a[68051] = anon_sym_DOLLAR_LBRACE;
	v->a[68052] = actions(2379);
	v->a[68053] = 1;
	v->a[68054] = anon_sym_DOLLAR_LPAREN;
	v->a[68055] = actions(2381);
	v->a[68056] = 1;
	v->a[68057] = anon_sym_BQUOTE;
	v->a[68058] = actions(2454);
	v->a[68059] = 1;
	small_parse_table_3403(v);
}

void	small_parse_table_3403(t_small_parse_table_array *v)
{
	v->a[68060] = sym__bare_dollar;
	v->a[68061] = actions(2715);
	v->a[68062] = 1;
	v->a[68063] = anon_sym_DOLLAR;
	v->a[68064] = actions(2452);
	v->a[68065] = 5;
	v->a[68066] = aux_sym_concatenation_token1;
	v->a[68067] = sym_raw_string;
	v->a[68068] = sym_number;
	v->a[68069] = sym__comment_word;
	v->a[68070] = sym_word;
	v->a[68071] = state(934);
	v->a[68072] = 5;
	v->a[68073] = sym_arithmetic_expansion;
	v->a[68074] = sym_string;
	v->a[68075] = sym_simple_expansion;
	v->a[68076] = sym_expansion;
	v->a[68077] = sym_command_substitution;
	v->a[68078] = 10;
	v->a[68079] = actions(3);
	small_parse_table_3404(v);
}

void	small_parse_table_3404(t_small_parse_table_array *v)
{
	v->a[68080] = 1;
	v->a[68081] = sym_comment;
	v->a[68082] = actions(25);
	v->a[68083] = 1;
	v->a[68084] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68085] = actions(29);
	v->a[68086] = 1;
	v->a[68087] = anon_sym_DQUOTE;
	v->a[68088] = actions(33);
	v->a[68089] = 1;
	v->a[68090] = anon_sym_DOLLAR_LBRACE;
	v->a[68091] = actions(35);
	v->a[68092] = 1;
	v->a[68093] = anon_sym_DOLLAR_LPAREN;
	v->a[68094] = actions(37);
	v->a[68095] = 1;
	v->a[68096] = anon_sym_BQUOTE;
	v->a[68097] = actions(2695);
	v->a[68098] = 1;
	v->a[68099] = sym__bare_dollar;
	small_parse_table_3405(v);
}

/* EOF small_parse_table_680.c */
