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
	v->a[71000] = actions(2653);
	v->a[71001] = 1;
	v->a[71002] = anon_sym_DOLLAR;
	v->a[71003] = actions(2655);
	v->a[71004] = 1;
	v->a[71005] = anon_sym_DQUOTE;
	v->a[71006] = actions(2657);
	v->a[71007] = 1;
	v->a[71008] = anon_sym_DOLLAR_LBRACE;
	v->a[71009] = actions(2659);
	v->a[71010] = 1;
	v->a[71011] = anon_sym_DOLLAR_LPAREN;
	v->a[71012] = actions(2661);
	v->a[71013] = 1;
	v->a[71014] = anon_sym_BQUOTE;
	v->a[71015] = state(1816);
	v->a[71016] = 1;
	v->a[71017] = sym_concatenation;
	v->a[71018] = actions(2839);
	v->a[71019] = 3;
	small_parse_table_3551(v);
}

void	small_parse_table_3551(t_small_parse_table_array *v)
{
	v->a[71020] = sym_raw_string;
	v->a[71021] = sym_number;
	v->a[71022] = sym_word;
	v->a[71023] = state(1745);
	v->a[71024] = 5;
	v->a[71025] = sym_arithmetic_expansion;
	v->a[71026] = sym_string;
	v->a[71027] = sym_simple_expansion;
	v->a[71028] = sym_expansion;
	v->a[71029] = sym_command_substitution;
	v->a[71030] = 8;
	v->a[71031] = actions(501);
	v->a[71032] = 1;
	v->a[71033] = sym_comment;
	v->a[71034] = actions(790);
	v->a[71035] = 1;
	v->a[71036] = anon_sym_LT_LT;
	v->a[71037] = actions(1890);
	v->a[71038] = 1;
	v->a[71039] = sym_file_descriptor;
	small_parse_table_3552(v);
}

void	small_parse_table_3552(t_small_parse_table_array *v)
{
	v->a[71040] = actions(2831);
	v->a[71041] = 1;
	v->a[71042] = anon_sym_LT_LT_DASH;
	v->a[71043] = actions(1886);
	v->a[71044] = 2;
	v->a[71045] = anon_sym_LT;
	v->a[71046] = anon_sym_GT;
	v->a[71047] = actions(2841);
	v->a[71048] = 2;
	v->a[71049] = anon_sym_AMP_AMP;
	v->a[71050] = anon_sym_PIPE_PIPE;
	v->a[71051] = state(1062);
	v->a[71052] = 3;
	v->a[71053] = sym_file_redirect;
	v->a[71054] = sym_heredoc_redirect;
	v->a[71055] = aux_sym_redirected_statement_repeat1;
	v->a[71056] = actions(2843);
	v->a[71057] = 5;
	v->a[71058] = anon_sym_GT_GT;
	v->a[71059] = anon_sym_LT_AMP;
	small_parse_table_3553(v);
}

void	small_parse_table_3553(t_small_parse_table_array *v)
{
	v->a[71060] = anon_sym_GT_AMP;
	v->a[71061] = anon_sym_GT_PIPE;
	v->a[71062] = anon_sym_LT_GT;
	v->a[71063] = 7;
	v->a[71064] = actions(501);
	v->a[71065] = 1;
	v->a[71066] = sym_comment;
	v->a[71067] = actions(2851);
	v->a[71068] = 1;
	v->a[71069] = sym_file_descriptor;
	v->a[71070] = actions(2159);
	v->a[71071] = 2;
	v->a[71072] = anon_sym_PIPE;
	v->a[71073] = anon_sym_LT_LT;
	v->a[71074] = actions(2845);
	v->a[71075] = 2;
	v->a[71076] = anon_sym_LT;
	v->a[71077] = anon_sym_GT;
	v->a[71078] = state(1436);
	v->a[71079] = 2;
	small_parse_table_3554(v);
}

void	small_parse_table_3554(t_small_parse_table_array *v)
{
	v->a[71080] = sym_file_redirect;
	v->a[71081] = aux_sym_redirected_statement_repeat2;
	v->a[71082] = actions(2157);
	v->a[71083] = 3;
	v->a[71084] = anon_sym_AMP_AMP;
	v->a[71085] = anon_sym_PIPE_PIPE;
	v->a[71086] = anon_sym_LT_LT_DASH;
	v->a[71087] = actions(2848);
	v->a[71088] = 5;
	v->a[71089] = anon_sym_GT_GT;
	v->a[71090] = anon_sym_LT_AMP;
	v->a[71091] = anon_sym_GT_AMP;
	v->a[71092] = anon_sym_GT_PIPE;
	v->a[71093] = anon_sym_LT_GT;
	v->a[71094] = 5;
	v->a[71095] = actions(3);
	v->a[71096] = 1;
	v->a[71097] = sym_comment;
	v->a[71098] = actions(2858);
	v->a[71099] = 1;
	small_parse_table_3555(v);
}

/* EOF small_parse_table_710.c */
