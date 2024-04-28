/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2901.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14505(t_small_parse_table_array *v)
{
	v->a[290100] = anon_sym_LT_AMP;
	v->a[290101] = anon_sym_GT_AMP;
	v->a[290102] = actions(5768);
	v->a[290103] = 11;
	v->a[290104] = sym_file_descriptor;
	v->a[290105] = sym_variable_name;
	v->a[290106] = anon_sym_PIPE_PIPE;
	v->a[290107] = anon_sym_AMP_AMP;
	v->a[290108] = anon_sym_GT_GT;
	v->a[290109] = anon_sym_PIPE_AMP;
	v->a[290110] = anon_sym_AMP_GT_GT;
	v->a[290111] = anon_sym_GT_PIPE;
	v->a[290112] = anon_sym_LT_AMP_DASH;
	v->a[290113] = anon_sym_GT_AMP_DASH;
	v->a[290114] = anon_sym_LT_LT_DASH;
	v->a[290115] = 6;
	v->a[290116] = actions(3);
	v->a[290117] = 1;
	v->a[290118] = sym_comment;
	v->a[290119] = actions(12928);
	small_parse_table_14506(v);
}

void	small_parse_table_14506(t_small_parse_table_array *v)
{
	v->a[290120] = 1;
	v->a[290121] = aux_sym_concatenation_token1;
	v->a[290122] = actions(12930);
	v->a[290123] = 1;
	v->a[290124] = sym__concat;
	v->a[290125] = state(5580);
	v->a[290126] = 1;
	v->a[290127] = aux_sym_concatenation_repeat1;
	v->a[290128] = actions(2074);
	v->a[290129] = 2;
	v->a[290130] = sym_file_descriptor;
	v->a[290131] = aux_sym_heredoc_redirect_token1;
	v->a[290132] = actions(2072);
	v->a[290133] = 13;
	v->a[290134] = anon_sym_PIPE_PIPE;
	v->a[290135] = anon_sym_AMP_AMP;
	v->a[290136] = anon_sym_LT;
	v->a[290137] = anon_sym_GT;
	v->a[290138] = anon_sym_GT_GT;
	v->a[290139] = anon_sym_AMP_GT;
	small_parse_table_14507(v);
}

void	small_parse_table_14507(t_small_parse_table_array *v)
{
	v->a[290140] = anon_sym_AMP_GT_GT;
	v->a[290141] = anon_sym_LT_AMP;
	v->a[290142] = anon_sym_GT_AMP;
	v->a[290143] = anon_sym_GT_PIPE;
	v->a[290144] = anon_sym_LT_AMP_DASH;
	v->a[290145] = anon_sym_GT_AMP_DASH;
	v->a[290146] = anon_sym_LT_LT_LT;
	v->a[290147] = 9;
	v->a[290148] = actions(71);
	v->a[290149] = 1;
	v->a[290150] = sym_comment;
	v->a[290151] = actions(4692);
	v->a[290152] = 1;
	v->a[290153] = anon_sym_LT_LT;
	v->a[290154] = actions(12221);
	v->a[290155] = 1;
	v->a[290156] = sym_file_descriptor;
	v->a[290157] = actions(12954);
	v->a[290158] = 1;
	v->a[290159] = anon_sym_LT_LT_DASH;
	small_parse_table_14508(v);
}

void	small_parse_table_14508(t_small_parse_table_array *v)
{
	v->a[290160] = actions(12956);
	v->a[290161] = 2;
	v->a[290162] = anon_sym_PIPE_PIPE;
	v->a[290163] = anon_sym_AMP_AMP;
	v->a[290164] = actions(12960);
	v->a[290165] = 2;
	v->a[290166] = anon_sym_LT_AMP_DASH;
	v->a[290167] = anon_sym_GT_AMP_DASH;
	v->a[290168] = actions(12958);
	v->a[290169] = 3;
	v->a[290170] = anon_sym_GT_GT;
	v->a[290171] = anon_sym_AMP_GT_GT;
	v->a[290172] = anon_sym_GT_PIPE;
	v->a[290173] = state(4986);
	v->a[290174] = 3;
	v->a[290175] = sym_file_redirect;
	v->a[290176] = sym_heredoc_redirect;
	v->a[290177] = aux_sym_redirected_statement_repeat1;
	v->a[290178] = actions(11554);
	v->a[290179] = 5;
	small_parse_table_14509(v);
}

void	small_parse_table_14509(t_small_parse_table_array *v)
{
	v->a[290180] = anon_sym_LT;
	v->a[290181] = anon_sym_GT;
	v->a[290182] = anon_sym_AMP_GT;
	v->a[290183] = anon_sym_LT_AMP;
	v->a[290184] = anon_sym_GT_AMP;
	v->a[290185] = 3;
	v->a[290186] = actions(71);
	v->a[290187] = 1;
	v->a[290188] = sym_comment;
	v->a[290189] = actions(4370);
	v->a[290190] = 7;
	v->a[290191] = anon_sym_PIPE;
	v->a[290192] = anon_sym_LT;
	v->a[290193] = anon_sym_GT;
	v->a[290194] = anon_sym_LT_LT;
	v->a[290195] = anon_sym_AMP_GT;
	v->a[290196] = anon_sym_LT_AMP;
	v->a[290197] = anon_sym_GT_AMP;
	v->a[290198] = actions(4372);
	v->a[290199] = 11;
	small_parse_table_14510(v);
}

/* EOF small_parse_table_2901.c */
