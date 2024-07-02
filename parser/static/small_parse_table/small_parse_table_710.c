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
	v->a[71000] = anon_sym_DOLLAR_LBRACE;
	v->a[71001] = anon_sym_DOLLAR_LPAREN;
	v->a[71002] = anon_sym_BQUOTE;
	v->a[71003] = sym_word;
	v->a[71004] = anon_sym_SEMI;
	v->a[71005] = 10;
	v->a[71006] = actions(3);
	v->a[71007] = 1;
	v->a[71008] = sym_comment;
	v->a[71009] = actions(2358);
	v->a[71010] = 1;
	v->a[71011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71012] = actions(2360);
	v->a[71013] = 1;
	v->a[71014] = anon_sym_DOLLAR;
	v->a[71015] = actions(2362);
	v->a[71016] = 1;
	v->a[71017] = anon_sym_DQUOTE;
	v->a[71018] = actions(2364);
	v->a[71019] = 1;
	small_parse_table_3551(v);
}

void	small_parse_table_3551(t_small_parse_table_array *v)
{
	v->a[71020] = anon_sym_DOLLAR_LBRACE;
	v->a[71021] = actions(2366);
	v->a[71022] = 1;
	v->a[71023] = anon_sym_DOLLAR_LPAREN;
	v->a[71024] = actions(2368);
	v->a[71025] = 1;
	v->a[71026] = anon_sym_BQUOTE;
	v->a[71027] = state(859);
	v->a[71028] = 2;
	v->a[71029] = sym_concatenation;
	v->a[71030] = aux_sym_for_statement_repeat1;
	v->a[71031] = actions(2799);
	v->a[71032] = 3;
	v->a[71033] = sym_raw_string;
	v->a[71034] = sym_number;
	v->a[71035] = sym_word;
	v->a[71036] = state(1079);
	v->a[71037] = 5;
	v->a[71038] = sym_arithmetic_expansion;
	v->a[71039] = sym_string;
	small_parse_table_3552(v);
}

void	small_parse_table_3552(t_small_parse_table_array *v)
{
	v->a[71040] = sym_simple_expansion;
	v->a[71041] = sym_expansion;
	v->a[71042] = sym_command_substitution;
	v->a[71043] = 5;
	v->a[71044] = actions(3);
	v->a[71045] = 1;
	v->a[71046] = sym_comment;
	v->a[71047] = actions(2801);
	v->a[71048] = 1;
	v->a[71049] = aux_sym_concatenation_token1;
	v->a[71050] = actions(2804);
	v->a[71051] = 1;
	v->a[71052] = sym__concat;
	v->a[71053] = state(1414);
	v->a[71054] = 1;
	v->a[71055] = aux_sym_concatenation_repeat1;
	v->a[71056] = actions(1094);
	v->a[71057] = 13;
	v->a[71058] = anon_sym_SEMI_SEMI;
	v->a[71059] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3553(v);
}

void	small_parse_table_3553(t_small_parse_table_array *v)
{
	v->a[71060] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71061] = anon_sym_AMP;
	v->a[71062] = anon_sym_DOLLAR;
	v->a[71063] = anon_sym_DQUOTE;
	v->a[71064] = sym_raw_string;
	v->a[71065] = sym_number;
	v->a[71066] = anon_sym_DOLLAR_LBRACE;
	v->a[71067] = anon_sym_DOLLAR_LPAREN;
	v->a[71068] = anon_sym_BQUOTE;
	v->a[71069] = sym_word;
	v->a[71070] = anon_sym_SEMI;
	v->a[71071] = 9;
	v->a[71072] = actions(680);
	v->a[71073] = 1;
	v->a[71074] = sym_comment;
	v->a[71075] = actions(1974);
	v->a[71076] = 1;
	v->a[71077] = anon_sym_PIPE;
	v->a[71078] = actions(2811);
	v->a[71079] = 1;
	small_parse_table_3554(v);
}

void	small_parse_table_3554(t_small_parse_table_array *v)
{
	v->a[71080] = anon_sym_LT_LT;
	v->a[71081] = actions(2813);
	v->a[71082] = 1;
	v->a[71083] = anon_sym_LT_LT_DASH;
	v->a[71084] = actions(2815);
	v->a[71085] = 1;
	v->a[71086] = sym_file_descriptor;
	v->a[71087] = actions(1976);
	v->a[71088] = 2;
	v->a[71089] = anon_sym_AMP_AMP;
	v->a[71090] = anon_sym_PIPE_PIPE;
	v->a[71091] = actions(2807);
	v->a[71092] = 2;
	v->a[71093] = anon_sym_LT;
	v->a[71094] = anon_sym_GT;
	v->a[71095] = state(1396);
	v->a[71096] = 3;
	v->a[71097] = sym_file_redirect;
	v->a[71098] = sym_heredoc_redirect;
	v->a[71099] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3555(v);
}

/* EOF small_parse_table_710.c */
