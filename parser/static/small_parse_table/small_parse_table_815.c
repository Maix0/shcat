/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_815.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4075(t_small_parse_table_array *v)
{
	v->a[81500] = sym_arithmetic_expansion;
	v->a[81501] = sym_string;
	v->a[81502] = sym_number;
	v->a[81503] = sym_simple_expansion;
	v->a[81504] = sym_expansion;
	v->a[81505] = sym_command_substitution;
	v->a[81506] = 6;
	v->a[81507] = actions(3);
	v->a[81508] = 1;
	v->a[81509] = sym_comment;
	v->a[81510] = actions(3360);
	v->a[81511] = 1;
	v->a[81512] = aux_sym_concatenation_token1;
	v->a[81513] = actions(3362);
	v->a[81514] = 1;
	v->a[81515] = sym__concat;
	v->a[81516] = state(1497);
	v->a[81517] = 1;
	v->a[81518] = aux_sym_concatenation_repeat1;
	v->a[81519] = actions(1127);
	small_parse_table_4076(v);
}

void	small_parse_table_4076(t_small_parse_table_array *v)
{
	v->a[81520] = 2;
	v->a[81521] = sym_file_descriptor;
	v->a[81522] = aux_sym_heredoc_redirect_token1;
	v->a[81523] = actions(1129);
	v->a[81524] = 12;
	v->a[81525] = anon_sym_AMP_AMP;
	v->a[81526] = anon_sym_PIPE_PIPE;
	v->a[81527] = anon_sym_LT;
	v->a[81528] = anon_sym_GT;
	v->a[81529] = anon_sym_GT_GT;
	v->a[81530] = anon_sym_AMP_GT;
	v->a[81531] = anon_sym_AMP_GT_GT;
	v->a[81532] = anon_sym_LT_AMP;
	v->a[81533] = anon_sym_GT_AMP;
	v->a[81534] = anon_sym_GT_PIPE;
	v->a[81535] = anon_sym_LT_AMP_DASH;
	v->a[81536] = anon_sym_GT_AMP_DASH;
	v->a[81537] = 6;
	v->a[81538] = actions(3);
	v->a[81539] = 1;
	small_parse_table_4077(v);
}

void	small_parse_table_4077(t_small_parse_table_array *v)
{
	v->a[81540] = sym_comment;
	v->a[81541] = actions(3364);
	v->a[81542] = 1;
	v->a[81543] = aux_sym_concatenation_token1;
	v->a[81544] = actions(3367);
	v->a[81545] = 1;
	v->a[81546] = sym__concat;
	v->a[81547] = state(1497);
	v->a[81548] = 1;
	v->a[81549] = aux_sym_concatenation_repeat1;
	v->a[81550] = actions(1112);
	v->a[81551] = 2;
	v->a[81552] = sym_file_descriptor;
	v->a[81553] = aux_sym_heredoc_redirect_token1;
	v->a[81554] = actions(1114);
	v->a[81555] = 12;
	v->a[81556] = anon_sym_AMP_AMP;
	v->a[81557] = anon_sym_PIPE_PIPE;
	v->a[81558] = anon_sym_LT;
	v->a[81559] = anon_sym_GT;
	small_parse_table_4078(v);
}

void	small_parse_table_4078(t_small_parse_table_array *v)
{
	v->a[81560] = anon_sym_GT_GT;
	v->a[81561] = anon_sym_AMP_GT;
	v->a[81562] = anon_sym_AMP_GT_GT;
	v->a[81563] = anon_sym_LT_AMP;
	v->a[81564] = anon_sym_GT_AMP;
	v->a[81565] = anon_sym_GT_PIPE;
	v->a[81566] = anon_sym_LT_AMP_DASH;
	v->a[81567] = anon_sym_GT_AMP_DASH;
	v->a[81568] = 5;
	v->a[81569] = actions(3);
	v->a[81570] = 1;
	v->a[81571] = sym_comment;
	v->a[81572] = actions(3370);
	v->a[81573] = 1;
	v->a[81574] = aux_sym_concatenation_token1;
	v->a[81575] = actions(3373);
	v->a[81576] = 1;
	v->a[81577] = sym__concat;
	v->a[81578] = state(1498);
	v->a[81579] = 1;
	small_parse_table_4079(v);
}

void	small_parse_table_4079(t_small_parse_table_array *v)
{
	v->a[81580] = aux_sym_concatenation_repeat1;
	v->a[81581] = actions(1114);
	v->a[81582] = 14;
	v->a[81583] = anon_sym_SEMI_SEMI;
	v->a[81584] = aux_sym_heredoc_redirect_token1;
	v->a[81585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81586] = anon_sym_AMP;
	v->a[81587] = anon_sym_DOLLAR;
	v->a[81588] = anon_sym_DQUOTE;
	v->a[81589] = sym_raw_string;
	v->a[81590] = aux_sym_number_token1;
	v->a[81591] = aux_sym_number_token2;
	v->a[81592] = anon_sym_DOLLAR_LBRACE;
	v->a[81593] = anon_sym_DOLLAR_LPAREN;
	v->a[81594] = anon_sym_BQUOTE;
	v->a[81595] = sym_word;
	v->a[81596] = anon_sym_SEMI;
	v->a[81597] = 5;
	v->a[81598] = actions(3);
	v->a[81599] = 1;
	small_parse_table_4080(v);
}

/* EOF small_parse_table_815.c */
