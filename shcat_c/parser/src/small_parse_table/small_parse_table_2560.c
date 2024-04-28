/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2560.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12800(t_small_parse_table_array *v)
{
	v->a[256000] = actions(3);
	v->a[256001] = 1;
	v->a[256002] = sym_comment;
	v->a[256003] = actions(1358);
	v->a[256004] = 3;
	v->a[256005] = sym_file_descriptor;
	v->a[256006] = sym__concat;
	v->a[256007] = aux_sym_heredoc_redirect_token1;
	v->a[256008] = actions(1356);
	v->a[256009] = 22;
	v->a[256010] = anon_sym_SEMI;
	v->a[256011] = anon_sym_PIPE_PIPE;
	v->a[256012] = anon_sym_AMP_AMP;
	v->a[256013] = anon_sym_PIPE;
	v->a[256014] = anon_sym_AMP;
	v->a[256015] = anon_sym_LT;
	v->a[256016] = anon_sym_GT;
	v->a[256017] = anon_sym_LT_LT;
	v->a[256018] = anon_sym_GT_GT;
	v->a[256019] = anon_sym_SEMI_SEMI;
	small_parse_table_12801(v);
}

void	small_parse_table_12801(t_small_parse_table_array *v)
{
	v->a[256020] = anon_sym_SEMI_AMP;
	v->a[256021] = anon_sym_SEMI_SEMI_AMP;
	v->a[256022] = anon_sym_PIPE_AMP;
	v->a[256023] = anon_sym_AMP_GT;
	v->a[256024] = anon_sym_AMP_GT_GT;
	v->a[256025] = anon_sym_LT_AMP;
	v->a[256026] = anon_sym_GT_AMP;
	v->a[256027] = anon_sym_GT_PIPE;
	v->a[256028] = anon_sym_LT_AMP_DASH;
	v->a[256029] = anon_sym_GT_AMP_DASH;
	v->a[256030] = anon_sym_LT_LT_DASH;
	v->a[256031] = aux_sym_concatenation_token1;
	v->a[256032] = 3;
	v->a[256033] = actions(3);
	v->a[256034] = 1;
	v->a[256035] = sym_comment;
	v->a[256036] = actions(5375);
	v->a[256037] = 3;
	v->a[256038] = sym_file_descriptor;
	v->a[256039] = sym_variable_name;
	small_parse_table_12802(v);
}

void	small_parse_table_12802(t_small_parse_table_array *v)
{
	v->a[256040] = aux_sym_heredoc_redirect_token1;
	v->a[256041] = actions(5373);
	v->a[256042] = 22;
	v->a[256043] = anon_sym_SEMI;
	v->a[256044] = anon_sym_PIPE_PIPE;
	v->a[256045] = anon_sym_AMP_AMP;
	v->a[256046] = anon_sym_PIPE;
	v->a[256047] = anon_sym_AMP;
	v->a[256048] = anon_sym_LT;
	v->a[256049] = anon_sym_GT;
	v->a[256050] = anon_sym_LT_LT;
	v->a[256051] = anon_sym_GT_GT;
	v->a[256052] = anon_sym_esac;
	v->a[256053] = anon_sym_SEMI_SEMI;
	v->a[256054] = anon_sym_SEMI_AMP;
	v->a[256055] = anon_sym_SEMI_SEMI_AMP;
	v->a[256056] = anon_sym_PIPE_AMP;
	v->a[256057] = anon_sym_AMP_GT;
	v->a[256058] = anon_sym_AMP_GT_GT;
	v->a[256059] = anon_sym_LT_AMP;
	small_parse_table_12803(v);
}

void	small_parse_table_12803(t_small_parse_table_array *v)
{
	v->a[256060] = anon_sym_GT_AMP;
	v->a[256061] = anon_sym_GT_PIPE;
	v->a[256062] = anon_sym_LT_AMP_DASH;
	v->a[256063] = anon_sym_GT_AMP_DASH;
	v->a[256064] = anon_sym_LT_LT_DASH;
	v->a[256065] = 6;
	v->a[256066] = actions(3);
	v->a[256067] = 1;
	v->a[256068] = sym_comment;
	v->a[256069] = actions(11651);
	v->a[256070] = 1;
	v->a[256071] = aux_sym_concatenation_token1;
	v->a[256072] = actions(11653);
	v->a[256073] = 1;
	v->a[256074] = sym__concat;
	v->a[256075] = state(4669);
	v->a[256076] = 1;
	v->a[256077] = aux_sym_concatenation_repeat1;
	v->a[256078] = actions(2074);
	v->a[256079] = 2;
	small_parse_table_12804(v);
}

void	small_parse_table_12804(t_small_parse_table_array *v)
{
	v->a[256080] = sym_file_descriptor;
	v->a[256081] = aux_sym_heredoc_redirect_token1;
	v->a[256082] = actions(2072);
	v->a[256083] = 20;
	v->a[256084] = anon_sym_SEMI;
	v->a[256085] = anon_sym_PIPE_PIPE;
	v->a[256086] = anon_sym_AMP_AMP;
	v->a[256087] = anon_sym_PIPE;
	v->a[256088] = anon_sym_AMP;
	v->a[256089] = anon_sym_LT;
	v->a[256090] = anon_sym_GT;
	v->a[256091] = anon_sym_LT_LT;
	v->a[256092] = anon_sym_GT_GT;
	v->a[256093] = anon_sym_SEMI_SEMI;
	v->a[256094] = anon_sym_PIPE_AMP;
	v->a[256095] = anon_sym_AMP_GT;
	v->a[256096] = anon_sym_AMP_GT_GT;
	v->a[256097] = anon_sym_LT_AMP;
	v->a[256098] = anon_sym_GT_AMP;
	v->a[256099] = anon_sym_GT_PIPE;
	small_parse_table_12805(v);
}

/* EOF small_parse_table_2560.c */
