/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_822.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4110(t_small_parse_table_array *v)
{
	v->a[82200] = actions(3723);
	v->a[82201] = 1;
	v->a[82202] = anon_sym_PIPE;
	v->a[82203] = state(1447);
	v->a[82204] = 1;
	v->a[82205] = aux_sym_pipeline_repeat1;
	v->a[82206] = 3;
	v->a[82207] = actions(664);
	v->a[82208] = 1;
	v->a[82209] = sym_comment;
	v->a[82210] = actions(3725);
	v->a[82211] = 1;
	v->a[82212] = anon_sym_do;
	v->a[82213] = state(1243);
	v->a[82214] = 1;
	v->a[82215] = sym_do_group;
	v->a[82216] = 2;
	v->a[82217] = actions(664);
	v->a[82218] = 1;
	v->a[82219] = sym_comment;
	small_parse_table_4111(v);
}

void	small_parse_table_4111(t_small_parse_table_array *v)
{
	v->a[82220] = actions(1289);
	v->a[82221] = 2;
	v->a[82222] = anon_sym_in;
	v->a[82223] = anon_sym_do;
	v->a[82224] = 3;
	v->a[82225] = actions(664);
	v->a[82226] = 1;
	v->a[82227] = sym_comment;
	v->a[82228] = actions(3727);
	v->a[82229] = 1;
	v->a[82230] = anon_sym_PIPE;
	v->a[82231] = state(1200);
	v->a[82232] = 1;
	v->a[82233] = aux_sym_pipeline_repeat1;
	v->a[82234] = 3;
	v->a[82235] = actions(664);
	v->a[82236] = 1;
	v->a[82237] = sym_comment;
	v->a[82238] = actions(3725);
	v->a[82239] = 1;
	small_parse_table_4112(v);
}

void	small_parse_table_4112(t_small_parse_table_array *v)
{
	v->a[82240] = anon_sym_do;
	v->a[82241] = state(1219);
	v->a[82242] = 1;
	v->a[82243] = sym_do_group;
	v->a[82244] = 3;
	v->a[82245] = actions(664);
	v->a[82246] = 1;
	v->a[82247] = sym_comment;
	v->a[82248] = actions(3721);
	v->a[82249] = 1;
	v->a[82250] = anon_sym_do;
	v->a[82251] = state(1099);
	v->a[82252] = 1;
	v->a[82253] = sym_do_group;
	v->a[82254] = 2;
	v->a[82255] = actions(664);
	v->a[82256] = 1;
	v->a[82257] = sym_comment;
	v->a[82258] = actions(3729);
	v->a[82259] = 1;
	small_parse_table_4113(v);
}

void	small_parse_table_4113(t_small_parse_table_array *v)
{
	v->a[82260] = anon_sym_EQ;
	v->a[82261] = 2;
	v->a[82262] = actions(664);
	v->a[82263] = 1;
	v->a[82264] = sym_comment;
	v->a[82265] = actions(3731);
	v->a[82266] = 1;
	v->a[82267] = aux_sym__simple_variable_name_token1;
	v->a[82268] = 2;
	v->a[82269] = actions(664);
	v->a[82270] = 1;
	v->a[82271] = sym_comment;
	v->a[82272] = actions(3733);
	v->a[82273] = 1;
	v->a[82274] = anon_sym_esac;
	v->a[82275] = 2;
	v->a[82276] = actions(664);
	v->a[82277] = 1;
	v->a[82278] = sym_comment;
	v->a[82279] = actions(3735);
	small_parse_table_4114(v);
}

void	small_parse_table_4114(t_small_parse_table_array *v)
{
	v->a[82280] = 1;
	v->a[82281] = anon_sym_esac;
	v->a[82282] = 2;
	v->a[82283] = actions(664);
	v->a[82284] = 1;
	v->a[82285] = sym_comment;
	v->a[82286] = actions(3737);
	v->a[82287] = 1;
	v->a[82288] = anon_sym_fi;
	v->a[82289] = 2;
	v->a[82290] = actions(3);
	v->a[82291] = 1;
	v->a[82292] = sym_comment;
	v->a[82293] = actions(3739);
	v->a[82294] = 1;
	v->a[82295] = aux_sym_heredoc_redirect_token1;
	v->a[82296] = 2;
	v->a[82297] = actions(3);
	v->a[82298] = 1;
	v->a[82299] = sym_comment;
	small_parse_table_4115(v);
}

/* EOF small_parse_table_822.c */
