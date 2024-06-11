/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_740.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3700(t_small_parse_table_array *v)
{
	v->a[74000] = 3;
	v->a[74001] = sym_file_redirect;
	v->a[74002] = sym_heredoc_redirect;
	v->a[74003] = aux_sym_redirected_statement_repeat1;
	v->a[74004] = actions(809);
	v->a[74005] = 17;
	v->a[74006] = anon_sym_SEMI_SEMI;
	v->a[74007] = anon_sym_AMP_AMP;
	v->a[74008] = anon_sym_PIPE_PIPE;
	v->a[74009] = anon_sym_LT;
	v->a[74010] = anon_sym_GT;
	v->a[74011] = anon_sym_GT_GT;
	v->a[74012] = anon_sym_AMP_GT;
	v->a[74013] = anon_sym_AMP_GT_GT;
	v->a[74014] = anon_sym_LT_AMP;
	v->a[74015] = anon_sym_GT_AMP;
	v->a[74016] = anon_sym_GT_PIPE;
	v->a[74017] = anon_sym_LT_AMP_DASH;
	v->a[74018] = anon_sym_GT_AMP_DASH;
	v->a[74019] = anon_sym_LT_LT;
	small_parse_table_3701(v);
}

void	small_parse_table_3701(t_small_parse_table_array *v)
{
	v->a[74020] = anon_sym_LT_LT_DASH;
	v->a[74021] = anon_sym_AMP;
	v->a[74022] = anon_sym_SEMI;
	v->a[74023] = 7;
	v->a[74024] = actions(3);
	v->a[74025] = 1;
	v->a[74026] = sym_comment;
	v->a[74027] = actions(2626);
	v->a[74028] = 1;
	v->a[74029] = aux_sym_heredoc_redirect_token1;
	v->a[74030] = actions(2699);
	v->a[74031] = 1;
	v->a[74032] = sym_file_descriptor;
	v->a[74033] = actions(2180);
	v->a[74034] = 2;
	v->a[74035] = anon_sym_LT_AMP_DASH;
	v->a[74036] = anon_sym_GT_AMP_DASH;
	v->a[74037] = state(1409);
	v->a[74038] = 2;
	v->a[74039] = sym_file_redirect;
	small_parse_table_3702(v);
}

void	small_parse_table_3702(t_small_parse_table_array *v)
{
	v->a[74040] = aux_sym_redirected_statement_repeat2;
	v->a[74041] = actions(2178);
	v->a[74042] = 8;
	v->a[74043] = anon_sym_LT;
	v->a[74044] = anon_sym_GT;
	v->a[74045] = anon_sym_GT_GT;
	v->a[74046] = anon_sym_AMP_GT;
	v->a[74047] = anon_sym_AMP_GT_GT;
	v->a[74048] = anon_sym_LT_AMP;
	v->a[74049] = anon_sym_GT_AMP;
	v->a[74050] = anon_sym_GT_PIPE;
	v->a[74051] = actions(2624);
	v->a[74052] = 9;
	v->a[74053] = anon_sym_esac;
	v->a[74054] = anon_sym_PIPE;
	v->a[74055] = anon_sym_SEMI_SEMI;
	v->a[74056] = anon_sym_AMP_AMP;
	v->a[74057] = anon_sym_PIPE_PIPE;
	v->a[74058] = anon_sym_LT_LT;
	v->a[74059] = anon_sym_LT_LT_DASH;
	small_parse_table_3703(v);
}

void	small_parse_table_3703(t_small_parse_table_array *v)
{
	v->a[74060] = anon_sym_AMP;
	v->a[74061] = anon_sym_SEMI;
	v->a[74062] = 6;
	v->a[74063] = actions(3);
	v->a[74064] = 1;
	v->a[74065] = sym_comment;
	v->a[74066] = actions(2085);
	v->a[74067] = 1;
	v->a[74068] = aux_sym_concatenation_token1;
	v->a[74069] = actions(2174);
	v->a[74070] = 1;
	v->a[74071] = sym__concat;
	v->a[74072] = state(1402);
	v->a[74073] = 1;
	v->a[74074] = aux_sym_concatenation_repeat1;
	v->a[74075] = actions(543);
	v->a[74076] = 2;
	v->a[74077] = sym_file_descriptor;
	v->a[74078] = aux_sym_heredoc_redirect_token1;
	v->a[74079] = actions(541);
	small_parse_table_3704(v);
}

void	small_parse_table_3704(t_small_parse_table_array *v)
{
	v->a[74080] = 18;
	v->a[74081] = anon_sym_PIPE;
	v->a[74082] = anon_sym_SEMI_SEMI;
	v->a[74083] = anon_sym_AMP_AMP;
	v->a[74084] = anon_sym_PIPE_PIPE;
	v->a[74085] = anon_sym_LT;
	v->a[74086] = anon_sym_GT;
	v->a[74087] = anon_sym_GT_GT;
	v->a[74088] = anon_sym_AMP_GT;
	v->a[74089] = anon_sym_AMP_GT_GT;
	v->a[74090] = anon_sym_LT_AMP;
	v->a[74091] = anon_sym_GT_AMP;
	v->a[74092] = anon_sym_GT_PIPE;
	v->a[74093] = anon_sym_LT_AMP_DASH;
	v->a[74094] = anon_sym_GT_AMP_DASH;
	v->a[74095] = anon_sym_LT_LT;
	v->a[74096] = anon_sym_LT_LT_DASH;
	v->a[74097] = anon_sym_AMP;
	v->a[74098] = anon_sym_SEMI;
	v->a[74099] = 5;
	small_parse_table_3705(v);
}

/* EOF small_parse_table_740.c */
