/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2591.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12955(t_small_parse_table_array *v)
{
	v->a[259100] = aux_sym__expansion_body_repeat1;
	v->a[259101] = state(6472);
	v->a[259102] = 1;
	v->a[259103] = sym_command_substitution;
	v->a[259104] = state(7296);
	v->a[259105] = 1;
	v->a[259106] = sym__expansion_body;
	v->a[259107] = actions(11762);
	v->a[259108] = 2;
	v->a[259109] = anon_sym_POUND2;
	v->a[259110] = anon_sym_EQ2;
	v->a[259111] = actions(8050);
	v->a[259112] = 3;
	v->a[259113] = sym__external_expansion_sym_hash;
	v->a[259114] = sym__external_expansion_sym_bang;
	v->a[259115] = sym__external_expansion_sym_equal;
	v->a[259116] = actions(11754);
	v->a[259117] = 4;
	v->a[259118] = anon_sym_DASH;
	v->a[259119] = anon_sym_STAR;
	small_parse_table_12956(v);
}

void	small_parse_table_12956(t_small_parse_table_array *v)
{
	v->a[259120] = anon_sym_QMARK;
	v->a[259121] = anon_sym_AT2;
	v->a[259122] = actions(11756);
	v->a[259123] = 5;
	v->a[259124] = anon_sym_BANG;
	v->a[259125] = anon_sym_DOLLAR;
	v->a[259126] = anon_sym_POUND;
	v->a[259127] = anon_sym_0;
	v->a[259128] = anon_sym__;
	v->a[259129] = 5;
	v->a[259130] = actions(3);
	v->a[259131] = 1;
	v->a[259132] = sym_comment;
	v->a[259133] = actions(11802);
	v->a[259134] = 1;
	v->a[259135] = sym__special_character;
	v->a[259136] = state(4855);
	v->a[259137] = 1;
	v->a[259138] = aux_sym__literal_repeat1;
	v->a[259139] = actions(4469);
	small_parse_table_12957(v);
}

void	small_parse_table_12957(t_small_parse_table_array *v)
{
	v->a[259140] = 2;
	v->a[259141] = sym_file_descriptor;
	v->a[259142] = aux_sym_heredoc_redirect_token1;
	v->a[259143] = actions(4467);
	v->a[259144] = 21;
	v->a[259145] = anon_sym_SEMI;
	v->a[259146] = anon_sym_PIPE_PIPE;
	v->a[259147] = anon_sym_AMP_AMP;
	v->a[259148] = anon_sym_PIPE;
	v->a[259149] = anon_sym_AMP;
	v->a[259150] = anon_sym_LT;
	v->a[259151] = anon_sym_GT;
	v->a[259152] = anon_sym_LT_LT;
	v->a[259153] = anon_sym_GT_GT;
	v->a[259154] = anon_sym_SEMI_SEMI;
	v->a[259155] = anon_sym_SEMI_AMP;
	v->a[259156] = anon_sym_SEMI_SEMI_AMP;
	v->a[259157] = anon_sym_PIPE_AMP;
	v->a[259158] = anon_sym_AMP_GT;
	v->a[259159] = anon_sym_AMP_GT_GT;
	small_parse_table_12958(v);
}

void	small_parse_table_12958(t_small_parse_table_array *v)
{
	v->a[259160] = anon_sym_LT_AMP;
	v->a[259161] = anon_sym_GT_AMP;
	v->a[259162] = anon_sym_GT_PIPE;
	v->a[259163] = anon_sym_LT_AMP_DASH;
	v->a[259164] = anon_sym_GT_AMP_DASH;
	v->a[259165] = anon_sym_LT_LT_DASH;
	v->a[259166] = 6;
	v->a[259167] = actions(3);
	v->a[259168] = 1;
	v->a[259169] = sym_comment;
	v->a[259170] = actions(11651);
	v->a[259171] = 1;
	v->a[259172] = aux_sym_concatenation_token1;
	v->a[259173] = actions(11653);
	v->a[259174] = 1;
	v->a[259175] = sym__concat;
	v->a[259176] = state(4611);
	v->a[259177] = 1;
	v->a[259178] = aux_sym_concatenation_repeat1;
	v->a[259179] = actions(2096);
	small_parse_table_12959(v);
}

void	small_parse_table_12959(t_small_parse_table_array *v)
{
	v->a[259180] = 3;
	v->a[259181] = sym_file_descriptor;
	v->a[259182] = ts_builtin_sym_end;
	v->a[259183] = aux_sym_heredoc_redirect_token1;
	v->a[259184] = actions(2094);
	v->a[259185] = 19;
	v->a[259186] = anon_sym_SEMI;
	v->a[259187] = anon_sym_PIPE_PIPE;
	v->a[259188] = anon_sym_AMP_AMP;
	v->a[259189] = anon_sym_PIPE;
	v->a[259190] = anon_sym_AMP;
	v->a[259191] = anon_sym_LT;
	v->a[259192] = anon_sym_GT;
	v->a[259193] = anon_sym_LT_LT;
	v->a[259194] = anon_sym_GT_GT;
	v->a[259195] = anon_sym_SEMI_SEMI;
	v->a[259196] = anon_sym_PIPE_AMP;
	v->a[259197] = anon_sym_AMP_GT;
	v->a[259198] = anon_sym_AMP_GT_GT;
	v->a[259199] = anon_sym_LT_AMP;
	small_parse_table_12960(v);
}

/* EOF small_parse_table_2591.c */
