/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2520.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12600(t_small_parse_table_array *v)
{
	v->a[252000] = aux_sym_heredoc_redirect_token1;
	v->a[252001] = actions(1251);
	v->a[252002] = 23;
	v->a[252003] = anon_sym_SEMI;
	v->a[252004] = anon_sym_PIPE_PIPE;
	v->a[252005] = anon_sym_AMP_AMP;
	v->a[252006] = anon_sym_PIPE;
	v->a[252007] = anon_sym_AMP;
	v->a[252008] = anon_sym_LT;
	v->a[252009] = anon_sym_GT;
	v->a[252010] = anon_sym_LT_LT;
	v->a[252011] = anon_sym_GT_GT;
	v->a[252012] = anon_sym_esac;
	v->a[252013] = anon_sym_SEMI_SEMI;
	v->a[252014] = anon_sym_SEMI_AMP;
	v->a[252015] = anon_sym_SEMI_SEMI_AMP;
	v->a[252016] = anon_sym_PIPE_AMP;
	v->a[252017] = anon_sym_AMP_GT;
	v->a[252018] = anon_sym_AMP_GT_GT;
	v->a[252019] = anon_sym_LT_AMP;
	small_parse_table_12601(v);
}

void	small_parse_table_12601(t_small_parse_table_array *v)
{
	v->a[252020] = anon_sym_GT_AMP;
	v->a[252021] = anon_sym_GT_PIPE;
	v->a[252022] = anon_sym_LT_AMP_DASH;
	v->a[252023] = anon_sym_GT_AMP_DASH;
	v->a[252024] = anon_sym_LT_LT_DASH;
	v->a[252025] = aux_sym_concatenation_token1;
	v->a[252026] = 5;
	v->a[252027] = actions(3);
	v->a[252028] = 1;
	v->a[252029] = sym_comment;
	v->a[252030] = actions(11667);
	v->a[252031] = 1;
	v->a[252032] = sym__special_character;
	v->a[252033] = state(4533);
	v->a[252034] = 1;
	v->a[252035] = aux_sym__literal_repeat1;
	v->a[252036] = actions(1364);
	v->a[252037] = 3;
	v->a[252038] = sym_file_descriptor;
	v->a[252039] = sym_variable_name;
	small_parse_table_12602(v);
}

void	small_parse_table_12602(t_small_parse_table_array *v)
{
	v->a[252040] = aux_sym_heredoc_redirect_token1;
	v->a[252041] = actions(1362);
	v->a[252042] = 21;
	v->a[252043] = anon_sym_SEMI;
	v->a[252044] = anon_sym_PIPE_PIPE;
	v->a[252045] = anon_sym_AMP_AMP;
	v->a[252046] = anon_sym_PIPE;
	v->a[252047] = anon_sym_AMP;
	v->a[252048] = anon_sym_LT;
	v->a[252049] = anon_sym_GT;
	v->a[252050] = anon_sym_LT_LT;
	v->a[252051] = anon_sym_GT_GT;
	v->a[252052] = anon_sym_SEMI_SEMI;
	v->a[252053] = anon_sym_SEMI_AMP;
	v->a[252054] = anon_sym_SEMI_SEMI_AMP;
	v->a[252055] = anon_sym_PIPE_AMP;
	v->a[252056] = anon_sym_AMP_GT;
	v->a[252057] = anon_sym_AMP_GT_GT;
	v->a[252058] = anon_sym_LT_AMP;
	v->a[252059] = anon_sym_GT_AMP;
	small_parse_table_12603(v);
}

void	small_parse_table_12603(t_small_parse_table_array *v)
{
	v->a[252060] = anon_sym_GT_PIPE;
	v->a[252061] = anon_sym_LT_AMP_DASH;
	v->a[252062] = anon_sym_GT_AMP_DASH;
	v->a[252063] = anon_sym_LT_LT_DASH;
	v->a[252064] = 6;
	v->a[252065] = actions(3);
	v->a[252066] = 1;
	v->a[252067] = sym_comment;
	v->a[252068] = actions(11670);
	v->a[252069] = 1;
	v->a[252070] = sym_variable_name;
	v->a[252071] = state(6786);
	v->a[252072] = 1;
	v->a[252073] = sym_subscript;
	v->a[252074] = actions(11329);
	v->a[252075] = 2;
	v->a[252076] = sym_file_descriptor;
	v->a[252077] = aux_sym_heredoc_redirect_token1;
	v->a[252078] = state(4439);
	v->a[252079] = 2;
	small_parse_table_12604(v);
}

void	small_parse_table_12604(t_small_parse_table_array *v)
{
	v->a[252080] = sym_variable_assignment;
	v->a[252081] = aux_sym_variable_assignments_repeat1;
	v->a[252082] = actions(11327);
	v->a[252083] = 20;
	v->a[252084] = anon_sym_SEMI;
	v->a[252085] = anon_sym_PIPE_PIPE;
	v->a[252086] = anon_sym_AMP_AMP;
	v->a[252087] = anon_sym_PIPE;
	v->a[252088] = anon_sym_AMP;
	v->a[252089] = anon_sym_LT;
	v->a[252090] = anon_sym_GT;
	v->a[252091] = anon_sym_LT_LT;
	v->a[252092] = anon_sym_GT_GT;
	v->a[252093] = anon_sym_RPAREN;
	v->a[252094] = anon_sym_SEMI_SEMI;
	v->a[252095] = anon_sym_PIPE_AMP;
	v->a[252096] = anon_sym_AMP_GT;
	v->a[252097] = anon_sym_AMP_GT_GT;
	v->a[252098] = anon_sym_LT_AMP;
	v->a[252099] = anon_sym_GT_AMP;
	small_parse_table_12605(v);
}

/* EOF small_parse_table_2520.c */
