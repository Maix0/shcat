/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_840.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4200(t_small_parse_table_array *v)
{
	v->a[84000] = sym_comment;
	v->a[84001] = actions(4154);
	v->a[84002] = 1;
	v->a[84003] = anon_sym_fi;
	v->a[84004] = 2;
	v->a[84005] = actions(680);
	v->a[84006] = 1;
	v->a[84007] = sym_comment;
	v->a[84008] = actions(4156);
	v->a[84009] = 1;
	v->a[84010] = anon_sym_esac;
	v->a[84011] = 2;
	v->a[84012] = actions(680);
	v->a[84013] = 1;
	v->a[84014] = sym_comment;
	v->a[84015] = actions(4158);
	v->a[84016] = 1;
	v->a[84017] = anon_sym_fi;
}

/* EOF small_parse_table_840.c */
