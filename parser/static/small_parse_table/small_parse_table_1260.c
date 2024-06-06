/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1260.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6300(t_small_parse_table_array *v)
{
	v->a[126000] = sym_comment;
	v->a[126001] = actions(3123);
	v->a[126002] = 7;
	v->a[126003] = anon_sym_PIPE;
	v->a[126004] = anon_sym_LT;
	v->a[126005] = anon_sym_GT;
	v->a[126006] = anon_sym_AMP_GT;
	v->a[126007] = anon_sym_LT_AMP;
	v->a[126008] = anon_sym_GT_AMP;
	v->a[126009] = anon_sym_LT_LT;
	v->a[126010] = actions(3125);
	v->a[126011] = 12;
	v->a[126012] = sym_file_descriptor;
	v->a[126013] = sym__concat;
	v->a[126014] = anon_sym_PIPE_AMP;
	v->a[126015] = anon_sym_AMP_AMP;
	v->a[126016] = anon_sym_PIPE_PIPE;
	v->a[126017] = anon_sym_GT_GT;
	v->a[126018] = anon_sym_AMP_GT_GT;
	v->a[126019] = anon_sym_GT_PIPE;
	small_parse_table_6301(v);
}

void	small_parse_table_6301(t_small_parse_table_array *v)
{
	v->a[126020] = anon_sym_LT_AMP_DASH;
	v->a[126021] = anon_sym_GT_AMP_DASH;
	v->a[126022] = anon_sym_LT_LT_DASH;
	v->a[126023] = aux_sym_concatenation_token1;
	v->a[126024] = 3;
	v->a[126025] = actions(57);
	v->a[126026] = 1;
	v->a[126027] = sym_comment;
	v->a[126028] = actions(2662);
	v->a[126029] = 7;
	v->a[126030] = anon_sym_PIPE;
	v->a[126031] = anon_sym_LT;
	v->a[126032] = anon_sym_GT;
	v->a[126033] = anon_sym_AMP_GT;
	v->a[126034] = anon_sym_LT_AMP;
	v->a[126035] = anon_sym_GT_AMP;
	v->a[126036] = anon_sym_LT_LT;
	v->a[126037] = actions(2664);
	v->a[126038] = 12;
	v->a[126039] = sym_file_descriptor;
	small_parse_table_6302(v);
}

void	small_parse_table_6302(t_small_parse_table_array *v)
{
	v->a[126040] = sym_variable_name;
	v->a[126041] = anon_sym_PIPE_AMP;
	v->a[126042] = anon_sym_AMP_AMP;
	v->a[126043] = anon_sym_PIPE_PIPE;
	v->a[126044] = anon_sym_GT_GT;
	v->a[126045] = anon_sym_AMP_GT_GT;
	v->a[126046] = anon_sym_GT_PIPE;
	v->a[126047] = anon_sym_LT_AMP_DASH;
	v->a[126048] = anon_sym_GT_AMP_DASH;
	v->a[126049] = anon_sym_LT_LT_DASH;
	v->a[126050] = sym__special_character;
	v->a[126051] = 3;
	v->a[126052] = actions(57);
	v->a[126053] = 1;
	v->a[126054] = sym_comment;
	v->a[126055] = actions(3157);
	v->a[126056] = 7;
	v->a[126057] = anon_sym_PIPE;
	v->a[126058] = anon_sym_LT;
	v->a[126059] = anon_sym_GT;
	small_parse_table_6303(v);
}

void	small_parse_table_6303(t_small_parse_table_array *v)
{
	v->a[126060] = anon_sym_AMP_GT;
	v->a[126061] = anon_sym_LT_AMP;
	v->a[126062] = anon_sym_GT_AMP;
	v->a[126063] = anon_sym_LT_LT;
	v->a[126064] = actions(3159);
	v->a[126065] = 12;
	v->a[126066] = sym_file_descriptor;
	v->a[126067] = sym__concat;
	v->a[126068] = anon_sym_PIPE_AMP;
	v->a[126069] = anon_sym_AMP_AMP;
	v->a[126070] = anon_sym_PIPE_PIPE;
	v->a[126071] = anon_sym_GT_GT;
	v->a[126072] = anon_sym_AMP_GT_GT;
	v->a[126073] = anon_sym_GT_PIPE;
	v->a[126074] = anon_sym_LT_AMP_DASH;
	v->a[126075] = anon_sym_GT_AMP_DASH;
	v->a[126076] = anon_sym_LT_LT_DASH;
	v->a[126077] = aux_sym_concatenation_token1;
	v->a[126078] = 7;
	v->a[126079] = actions(3);
	small_parse_table_6304(v);
}

void	small_parse_table_6304(t_small_parse_table_array *v)
{
	v->a[126080] = 1;
	v->a[126081] = sym_comment;
	v->a[126082] = actions(5443);
	v->a[126083] = 1;
	v->a[126084] = aux_sym_heredoc_redirect_token1;
	v->a[126085] = actions(7181);
	v->a[126086] = 1;
	v->a[126087] = sym_file_descriptor;
	v->a[126088] = state(2311);
	v->a[126089] = 1;
	v->a[126090] = sym_file_redirect;
	v->a[126091] = actions(7132);
	v->a[126092] = 2;
	v->a[126093] = anon_sym_LT_AMP_DASH;
	v->a[126094] = anon_sym_GT_AMP_DASH;
	v->a[126095] = actions(5441);
	v->a[126096] = 6;
	v->a[126097] = anon_sym_PIPE;
	v->a[126098] = anon_sym_PIPE_AMP;
	v->a[126099] = anon_sym_AMP_AMP;
	small_parse_table_6305(v);
}

/* EOF small_parse_table_1260.c */
