/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2890.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14450(t_small_parse_table_array *v)
{
	v->a[289000] = anon_sym_GT_PIPE;
	v->a[289001] = 9;
	v->a[289002] = actions(3);
	v->a[289003] = 1;
	v->a[289004] = sym_comment;
	v->a[289005] = actions(3727);
	v->a[289006] = 1;
	v->a[289007] = anon_sym_LT_LT_LT;
	v->a[289008] = actions(3751);
	v->a[289009] = 1;
	v->a[289010] = sym_file_descriptor;
	v->a[289011] = actions(12926);
	v->a[289012] = 1;
	v->a[289013] = aux_sym_heredoc_redirect_token1;
	v->a[289014] = state(6853);
	v->a[289015] = 1;
	v->a[289016] = sym__heredoc_expression;
	v->a[289017] = actions(3717);
	v->a[289018] = 2;
	v->a[289019] = anon_sym_PIPE_PIPE;
	small_parse_table_14451(v);
}

void	small_parse_table_14451(t_small_parse_table_array *v)
{
	v->a[289020] = anon_sym_AMP_AMP;
	v->a[289021] = actions(3723);
	v->a[289022] = 2;
	v->a[289023] = anon_sym_LT_AMP_DASH;
	v->a[289024] = anon_sym_GT_AMP_DASH;
	v->a[289025] = state(5609);
	v->a[289026] = 3;
	v->a[289027] = sym_file_redirect;
	v->a[289028] = sym_herestring_redirect;
	v->a[289029] = aux_sym_redirected_statement_repeat2;
	v->a[289030] = actions(3721);
	v->a[289031] = 8;
	v->a[289032] = anon_sym_LT;
	v->a[289033] = anon_sym_GT;
	v->a[289034] = anon_sym_GT_GT;
	v->a[289035] = anon_sym_AMP_GT;
	v->a[289036] = anon_sym_AMP_GT_GT;
	v->a[289037] = anon_sym_LT_AMP;
	v->a[289038] = anon_sym_GT_AMP;
	v->a[289039] = anon_sym_GT_PIPE;
	small_parse_table_14452(v);
}

void	small_parse_table_14452(t_small_parse_table_array *v)
{
	v->a[289040] = 6;
	v->a[289041] = actions(3);
	v->a[289042] = 1;
	v->a[289043] = sym_comment;
	v->a[289044] = actions(12928);
	v->a[289045] = 1;
	v->a[289046] = aux_sym_concatenation_token1;
	v->a[289047] = actions(12930);
	v->a[289048] = 1;
	v->a[289049] = sym__concat;
	v->a[289050] = state(5577);
	v->a[289051] = 1;
	v->a[289052] = aux_sym_concatenation_repeat1;
	v->a[289053] = actions(1263);
	v->a[289054] = 2;
	v->a[289055] = sym_file_descriptor;
	v->a[289056] = aux_sym_heredoc_redirect_token1;
	v->a[289057] = actions(1261);
	v->a[289058] = 14;
	v->a[289059] = anon_sym_PIPE_PIPE;
	small_parse_table_14453(v);
}

void	small_parse_table_14453(t_small_parse_table_array *v)
{
	v->a[289060] = anon_sym_AMP_AMP;
	v->a[289061] = anon_sym_LT;
	v->a[289062] = anon_sym_GT;
	v->a[289063] = anon_sym_GT_GT;
	v->a[289064] = anon_sym_AMP_GT;
	v->a[289065] = anon_sym_AMP_GT_GT;
	v->a[289066] = anon_sym_LT_AMP;
	v->a[289067] = anon_sym_GT_AMP;
	v->a[289068] = anon_sym_GT_PIPE;
	v->a[289069] = anon_sym_LT_AMP_DASH;
	v->a[289070] = anon_sym_GT_AMP_DASH;
	v->a[289071] = anon_sym_LT_LT_LT;
	v->a[289072] = sym__special_character;
	v->a[289073] = 5;
	v->a[289074] = actions(71);
	v->a[289075] = 1;
	v->a[289076] = sym_comment;
	v->a[289077] = actions(12908);
	v->a[289078] = 1;
	v->a[289079] = sym__special_character;
	small_parse_table_14454(v);
}

void	small_parse_table_14454(t_small_parse_table_array *v)
{
	v->a[289080] = state(5520);
	v->a[289081] = 1;
	v->a[289082] = aux_sym__literal_repeat1;
	v->a[289083] = actions(5721);
	v->a[289084] = 7;
	v->a[289085] = anon_sym_PIPE;
	v->a[289086] = anon_sym_LT;
	v->a[289087] = anon_sym_GT;
	v->a[289088] = anon_sym_LT_LT;
	v->a[289089] = anon_sym_AMP_GT;
	v->a[289090] = anon_sym_LT_AMP;
	v->a[289091] = anon_sym_GT_AMP;
	v->a[289092] = actions(5723);
	v->a[289093] = 10;
	v->a[289094] = sym_file_descriptor;
	v->a[289095] = anon_sym_PIPE_PIPE;
	v->a[289096] = anon_sym_AMP_AMP;
	v->a[289097] = anon_sym_GT_GT;
	v->a[289098] = anon_sym_PIPE_AMP;
	v->a[289099] = anon_sym_AMP_GT_GT;
	small_parse_table_14455(v);
}

/* EOF small_parse_table_2890.c */
