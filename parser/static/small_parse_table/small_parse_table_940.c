/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_940.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4700(t_small_parse_table_array *v)
{
	v->a[94000] = 3;
	v->a[94001] = actions(1404);
	v->a[94002] = 1;
	v->a[94003] = sym_comment;
	v->a[94004] = actions(4460);
	v->a[94005] = 1;
	v->a[94006] = anon_sym_esac;
	v->a[94007] = actions(4464);
	v->a[94008] = 1;
	v->a[94009] = anon_sym_SEMI_SEMI;
	v->a[94010] = 3;
	v->a[94011] = actions(1404);
	v->a[94012] = 1;
	v->a[94013] = sym_comment;
	v->a[94014] = actions(4466);
	v->a[94015] = 1;
	v->a[94016] = anon_sym_esac;
	v->a[94017] = actions(4468);
	v->a[94018] = 1;
	v->a[94019] = anon_sym_SEMI_SEMI;
	small_parse_table_4701(v);
}

void	small_parse_table_4701(t_small_parse_table_array *v)
{
	v->a[94020] = 3;
	v->a[94021] = actions(1404);
	v->a[94022] = 1;
	v->a[94023] = sym_comment;
	v->a[94024] = actions(4470);
	v->a[94025] = 1;
	v->a[94026] = anon_sym_do;
	v->a[94027] = state(1267);
	v->a[94028] = 1;
	v->a[94029] = sym_do_group;
	v->a[94030] = 3;
	v->a[94031] = actions(1404);
	v->a[94032] = 1;
	v->a[94033] = sym_comment;
	v->a[94034] = actions(4472);
	v->a[94035] = 1;
	v->a[94036] = anon_sym_PIPE;
	v->a[94037] = state(1284);
	v->a[94038] = 1;
	v->a[94039] = aux_sym_pipeline_repeat1;
	small_parse_table_4702(v);
}

void	small_parse_table_4702(t_small_parse_table_array *v)
{
	v->a[94040] = 2;
	v->a[94041] = actions(1404);
	v->a[94042] = 1;
	v->a[94043] = sym_comment;
	v->a[94044] = actions(4360);
	v->a[94045] = 2;
	v->a[94046] = anon_sym_PIPE;
	v->a[94047] = anon_sym_RPAREN;
	v->a[94048] = 3;
	v->a[94049] = actions(1404);
	v->a[94050] = 1;
	v->a[94051] = sym_comment;
	v->a[94052] = actions(4474);
	v->a[94053] = 1;
	v->a[94054] = anon_sym_PIPE;
	v->a[94055] = state(1229);
	v->a[94056] = 1;
	v->a[94057] = aux_sym_pipeline_repeat1;
	v->a[94058] = 3;
	v->a[94059] = actions(1404);
	small_parse_table_4703(v);
}

void	small_parse_table_4703(t_small_parse_table_array *v)
{
	v->a[94060] = 1;
	v->a[94061] = sym_comment;
	v->a[94062] = actions(4448);
	v->a[94063] = 1;
	v->a[94064] = anon_sym_esac;
	v->a[94065] = actions(4476);
	v->a[94066] = 1;
	v->a[94067] = anon_sym_SEMI_SEMI;
	v->a[94068] = 3;
	v->a[94069] = actions(1404);
	v->a[94070] = 1;
	v->a[94071] = sym_comment;
	v->a[94072] = actions(4478);
	v->a[94073] = 1;
	v->a[94074] = anon_sym_do;
	v->a[94075] = state(1540);
	v->a[94076] = 1;
	v->a[94077] = sym_do_group;
	v->a[94078] = 3;
	v->a[94079] = actions(1404);
	small_parse_table_4704(v);
}

void	small_parse_table_4704(t_small_parse_table_array *v)
{
	v->a[94080] = 1;
	v->a[94081] = sym_comment;
	v->a[94082] = actions(4480);
	v->a[94083] = 1;
	v->a[94084] = anon_sym_PIPE;
	v->a[94085] = state(1227);
	v->a[94086] = 1;
	v->a[94087] = aux_sym_pipeline_repeat1;
	v->a[94088] = 3;
	v->a[94089] = actions(1404);
	v->a[94090] = 1;
	v->a[94091] = sym_comment;
	v->a[94092] = actions(4482);
	v->a[94093] = 1;
	v->a[94094] = anon_sym_PIPE;
	v->a[94095] = state(1228);
	v->a[94096] = 1;
	v->a[94097] = aux_sym_pipeline_repeat1;
	v->a[94098] = 3;
	v->a[94099] = actions(1404);
	small_parse_table_4705(v);
}

/* EOF small_parse_table_940.c */
