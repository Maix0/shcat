/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_921.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4605(t_small_parse_table_array *v)
{
	v->a[92100] = state(2069);
	v->a[92101] = 1;
	v->a[92102] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[92103] = actions(4038);
	v->a[92104] = 2;
	v->a[92105] = sym__concat;
	v->a[92106] = aux_sym_concatenation_token1;
	v->a[92107] = 4;
	v->a[92108] = actions(870);
	v->a[92109] = 1;
	v->a[92110] = sym_comment;
	v->a[92111] = actions(3984);
	v->a[92112] = 1;
	v->a[92113] = anon_sym_PIPE;
	v->a[92114] = actions(4002);
	v->a[92115] = 1;
	v->a[92116] = anon_sym_RPAREN;
	v->a[92117] = state(2082);
	v->a[92118] = 1;
	v->a[92119] = aux_sym__case_item_last_repeat1;
	small_parse_table_4606(v);
}

void	small_parse_table_4606(t_small_parse_table_array *v)
{
	v->a[92120] = 4;
	v->a[92121] = actions(870);
	v->a[92122] = 1;
	v->a[92123] = sym_comment;
	v->a[92124] = actions(3984);
	v->a[92125] = 1;
	v->a[92126] = anon_sym_PIPE;
	v->a[92127] = actions(4008);
	v->a[92128] = 1;
	v->a[92129] = anon_sym_RPAREN;
	v->a[92130] = state(2094);
	v->a[92131] = 1;
	v->a[92132] = aux_sym__case_item_last_repeat1;
	v->a[92133] = 2;
	v->a[92134] = actions(870);
	v->a[92135] = 1;
	v->a[92136] = sym_comment;
	v->a[92137] = actions(1033);
	v->a[92138] = 3;
	v->a[92139] = sym_extglob_pattern;
	small_parse_table_4607(v);
}

void	small_parse_table_4607(t_small_parse_table_array *v)
{
	v->a[92140] = anon_sym_PIPE;
	v->a[92141] = anon_sym_RPAREN;
	v->a[92142] = 2;
	v->a[92143] = actions(870);
	v->a[92144] = 1;
	v->a[92145] = sym_comment;
	v->a[92146] = actions(4040);
	v->a[92147] = 3;
	v->a[92148] = sym__concat;
	v->a[92149] = anon_sym_RBRACE;
	v->a[92150] = aux_sym_concatenation_token1;
	v->a[92151] = 3;
	v->a[92152] = actions(870);
	v->a[92153] = 1;
	v->a[92154] = sym_comment;
	v->a[92155] = actions(4072);
	v->a[92156] = 1;
	v->a[92157] = anon_sym_do;
	v->a[92158] = state(1271);
	v->a[92159] = 1;
	small_parse_table_4608(v);
}

void	small_parse_table_4608(t_small_parse_table_array *v)
{
	v->a[92160] = sym_do_group;
	v->a[92161] = 3;
	v->a[92162] = actions(870);
	v->a[92163] = 1;
	v->a[92164] = sym_comment;
	v->a[92165] = actions(4074);
	v->a[92166] = 1;
	v->a[92167] = anon_sym_esac;
	v->a[92168] = actions(4076);
	v->a[92169] = 1;
	v->a[92170] = anon_sym_SEMI_SEMI;
	v->a[92171] = 3;
	v->a[92172] = actions(870);
	v->a[92173] = 1;
	v->a[92174] = sym_comment;
	v->a[92175] = actions(4078);
	v->a[92176] = 1;
	v->a[92177] = anon_sym_do;
	v->a[92178] = state(1688);
	v->a[92179] = 1;
	small_parse_table_4609(v);
}

void	small_parse_table_4609(t_small_parse_table_array *v)
{
	v->a[92180] = sym_do_group;
	v->a[92181] = 3;
	v->a[92182] = actions(870);
	v->a[92183] = 1;
	v->a[92184] = sym_comment;
	v->a[92185] = actions(4080);
	v->a[92186] = 1;
	v->a[92187] = anon_sym_PIPE;
	v->a[92188] = state(1343);
	v->a[92189] = 1;
	v->a[92190] = aux_sym_pipeline_repeat1;
	v->a[92191] = 2;
	v->a[92192] = actions(870);
	v->a[92193] = 1;
	v->a[92194] = sym_comment;
	v->a[92195] = actions(4082);
	v->a[92196] = 2;
	v->a[92197] = anon_sym_PIPE;
	v->a[92198] = anon_sym_RPAREN;
	v->a[92199] = 3;
	small_parse_table_4610(v);
}

/* EOF small_parse_table_921.c */
