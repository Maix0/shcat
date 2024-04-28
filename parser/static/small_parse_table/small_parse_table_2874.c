/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2874.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14370(t_small_parse_table_array *v)
{
	v->a[287400] = actions(71);
	v->a[287401] = 1;
	v->a[287402] = sym_comment;
	v->a[287403] = actions(1352);
	v->a[287404] = 7;
	v->a[287405] = anon_sym_PIPE;
	v->a[287406] = anon_sym_LT;
	v->a[287407] = anon_sym_GT;
	v->a[287408] = anon_sym_LT_LT;
	v->a[287409] = anon_sym_AMP_GT;
	v->a[287410] = anon_sym_LT_AMP;
	v->a[287411] = anon_sym_GT_AMP;
	v->a[287412] = actions(1354);
	v->a[287413] = 13;
	v->a[287414] = sym_file_descriptor;
	v->a[287415] = sym__concat;
	v->a[287416] = anon_sym_PIPE_PIPE;
	v->a[287417] = anon_sym_AMP_AMP;
	v->a[287418] = anon_sym_GT_GT;
	v->a[287419] = anon_sym_PIPE_AMP;
	small_parse_table_14371(v);
}

void	small_parse_table_14371(t_small_parse_table_array *v)
{
	v->a[287420] = anon_sym_RBRACK;
	v->a[287421] = anon_sym_AMP_GT_GT;
	v->a[287422] = anon_sym_GT_PIPE;
	v->a[287423] = anon_sym_LT_AMP_DASH;
	v->a[287424] = anon_sym_GT_AMP_DASH;
	v->a[287425] = anon_sym_LT_LT_DASH;
	v->a[287426] = aux_sym_concatenation_token1;
	v->a[287427] = 10;
	v->a[287428] = actions(71);
	v->a[287429] = 1;
	v->a[287430] = sym_comment;
	v->a[287431] = actions(11420);
	v->a[287432] = 1;
	v->a[287433] = anon_sym_PIPE;
	v->a[287434] = actions(12883);
	v->a[287435] = 1;
	v->a[287436] = anon_sym_LT_LT;
	v->a[287437] = actions(12892);
	v->a[287438] = 1;
	v->a[287439] = anon_sym_LT_LT_DASH;
	small_parse_table_14372(v);
}

void	small_parse_table_14372(t_small_parse_table_array *v)
{
	v->a[287440] = actions(12895);
	v->a[287441] = 1;
	v->a[287442] = sym_file_descriptor;
	v->a[287443] = actions(12889);
	v->a[287444] = 2;
	v->a[287445] = anon_sym_LT_AMP_DASH;
	v->a[287446] = anon_sym_GT_AMP_DASH;
	v->a[287447] = actions(11431);
	v->a[287448] = 3;
	v->a[287449] = anon_sym_PIPE_PIPE;
	v->a[287450] = anon_sym_AMP_AMP;
	v->a[287451] = anon_sym_PIPE_AMP;
	v->a[287452] = actions(12886);
	v->a[287453] = 3;
	v->a[287454] = anon_sym_GT_GT;
	v->a[287455] = anon_sym_AMP_GT_GT;
	v->a[287456] = anon_sym_GT_PIPE;
	v->a[287457] = state(5465);
	v->a[287458] = 3;
	v->a[287459] = sym_file_redirect;
	small_parse_table_14373(v);
}

void	small_parse_table_14373(t_small_parse_table_array *v)
{
	v->a[287460] = sym_heredoc_redirect;
	v->a[287461] = aux_sym_redirected_statement_repeat1;
	v->a[287462] = actions(12880);
	v->a[287463] = 5;
	v->a[287464] = anon_sym_LT;
	v->a[287465] = anon_sym_GT;
	v->a[287466] = anon_sym_AMP_GT;
	v->a[287467] = anon_sym_LT_AMP;
	v->a[287468] = anon_sym_GT_AMP;
	v->a[287469] = 5;
	v->a[287470] = actions(71);
	v->a[287471] = 1;
	v->a[287472] = sym_comment;
	v->a[287473] = actions(12866);
	v->a[287474] = 1;
	v->a[287475] = sym__special_character;
	v->a[287476] = state(5469);
	v->a[287477] = 1;
	v->a[287478] = aux_sym__literal_repeat1;
	v->a[287479] = actions(4564);
	small_parse_table_14374(v);
}

void	small_parse_table_14374(t_small_parse_table_array *v)
{
	v->a[287480] = 7;
	v->a[287481] = anon_sym_PIPE;
	v->a[287482] = anon_sym_LT;
	v->a[287483] = anon_sym_GT;
	v->a[287484] = anon_sym_LT_LT;
	v->a[287485] = anon_sym_AMP_GT;
	v->a[287486] = anon_sym_LT_AMP;
	v->a[287487] = anon_sym_GT_AMP;
	v->a[287488] = actions(4566);
	v->a[287489] = 11;
	v->a[287490] = sym_file_descriptor;
	v->a[287491] = anon_sym_PIPE_PIPE;
	v->a[287492] = anon_sym_AMP_AMP;
	v->a[287493] = anon_sym_GT_GT;
	v->a[287494] = anon_sym_PIPE_AMP;
	v->a[287495] = anon_sym_AMP_GT_GT;
	v->a[287496] = anon_sym_GT_PIPE;
	v->a[287497] = anon_sym_LT_AMP_DASH;
	v->a[287498] = anon_sym_GT_AMP_DASH;
	v->a[287499] = anon_sym_LT_LT_DASH;
	small_parse_table_14375(v);
}

/* EOF small_parse_table_2874.c */
