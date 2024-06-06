/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1430.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7150(t_small_parse_table_array *v)
{
	v->a[143000] = 5;
	v->a[143001] = actions(57);
	v->a[143002] = 1;
	v->a[143003] = sym_comment;
	v->a[143004] = actions(141);
	v->a[143005] = 1;
	v->a[143006] = anon_sym_LPAREN;
	v->a[143007] = actions(149);
	v->a[143008] = 1;
	v->a[143009] = anon_sym_LBRACE;
	v->a[143010] = actions(8517);
	v->a[143011] = 1;
	v->a[143012] = anon_sym_if;
	v->a[143013] = state(2078);
	v->a[143014] = 3;
	v->a[143015] = sym_if_statement;
	v->a[143016] = sym_compound_statement;
	v->a[143017] = sym_subshell;
	v->a[143018] = 6;
	v->a[143019] = actions(57);
	small_parse_table_7151(v);
}

void	small_parse_table_7151(t_small_parse_table_array *v)
{
	v->a[143020] = 1;
	v->a[143021] = sym_comment;
	v->a[143022] = actions(5771);
	v->a[143023] = 1;
	v->a[143024] = anon_sym_DOLLAR_LBRACE;
	v->a[143025] = actions(5773);
	v->a[143026] = 1;
	v->a[143027] = anon_sym_BQUOTE;
	v->a[143028] = actions(5775);
	v->a[143029] = 1;
	v->a[143030] = anon_sym_DOLLAR_BQUOTE;
	v->a[143031] = actions(8563);
	v->a[143032] = 1;
	v->a[143033] = anon_sym_DOLLAR_LPAREN;
	v->a[143034] = state(861);
	v->a[143035] = 2;
	v->a[143036] = sym_expansion;
	v->a[143037] = sym_command_substitution;
	v->a[143038] = 5;
	v->a[143039] = actions(17);
	small_parse_table_7152(v);
}

void	small_parse_table_7152(t_small_parse_table_array *v)
{
	v->a[143040] = 1;
	v->a[143041] = anon_sym_LPAREN;
	v->a[143042] = actions(21);
	v->a[143043] = 1;
	v->a[143044] = anon_sym_LBRACE;
	v->a[143045] = actions(57);
	v->a[143046] = 1;
	v->a[143047] = sym_comment;
	v->a[143048] = actions(8521);
	v->a[143049] = 1;
	v->a[143050] = anon_sym_if;
	v->a[143051] = state(2365);
	v->a[143052] = 3;
	v->a[143053] = sym_if_statement;
	v->a[143054] = sym_compound_statement;
	v->a[143055] = sym_subshell;
	v->a[143056] = 5;
	v->a[143057] = actions(21);
	v->a[143058] = 1;
	v->a[143059] = anon_sym_LBRACE;
	small_parse_table_7153(v);
}

void	small_parse_table_7153(t_small_parse_table_array *v)
{
	v->a[143060] = actions(57);
	v->a[143061] = 1;
	v->a[143062] = sym_comment;
	v->a[143063] = actions(8521);
	v->a[143064] = 1;
	v->a[143065] = anon_sym_if;
	v->a[143066] = actions(8565);
	v->a[143067] = 1;
	v->a[143068] = anon_sym_LPAREN;
	v->a[143069] = state(2590);
	v->a[143070] = 3;
	v->a[143071] = sym_if_statement;
	v->a[143072] = sym_compound_statement;
	v->a[143073] = sym_subshell;
	v->a[143074] = 6;
	v->a[143075] = actions(57);
	v->a[143076] = 1;
	v->a[143077] = sym_comment;
	v->a[143078] = actions(8545);
	v->a[143079] = 1;
	small_parse_table_7154(v);
}

void	small_parse_table_7154(t_small_parse_table_array *v)
{
	v->a[143080] = anon_sym_PIPE;
	v->a[143081] = actions(8567);
	v->a[143082] = 1;
	v->a[143083] = anon_sym_RPAREN;
	v->a[143084] = state(3382);
	v->a[143085] = 1;
	v->a[143086] = aux_sym_concatenation_repeat1;
	v->a[143087] = state(3544);
	v->a[143088] = 1;
	v->a[143089] = aux_sym_case_item_repeat1;
	v->a[143090] = actions(8549);
	v->a[143091] = 2;
	v->a[143092] = sym__concat;
	v->a[143093] = aux_sym_concatenation_token1;
	v->a[143094] = 6;
	v->a[143095] = actions(57);
	v->a[143096] = 1;
	v->a[143097] = sym_comment;
	v->a[143098] = actions(8545);
	v->a[143099] = 1;
	small_parse_table_7155(v);
}

/* EOF small_parse_table_1430.c */
