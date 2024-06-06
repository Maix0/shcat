/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_955.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4775(t_small_parse_table_array *v)
{
	v->a[95500] = anon_sym_SEMI_SEMI_AMP;
	v->a[95501] = anon_sym_PIPE_AMP;
	v->a[95502] = anon_sym_AMP_AMP;
	v->a[95503] = anon_sym_PIPE_PIPE;
	v->a[95504] = anon_sym_LT;
	v->a[95505] = anon_sym_GT;
	v->a[95506] = anon_sym_GT_GT;
	v->a[95507] = anon_sym_AMP_GT;
	v->a[95508] = anon_sym_AMP_GT_GT;
	v->a[95509] = anon_sym_LT_AMP;
	v->a[95510] = anon_sym_GT_AMP;
	v->a[95511] = anon_sym_GT_PIPE;
	v->a[95512] = anon_sym_LT_AMP_DASH;
	v->a[95513] = anon_sym_GT_AMP_DASH;
	v->a[95514] = anon_sym_LT_LT;
	v->a[95515] = anon_sym_LT_LT_DASH;
	v->a[95516] = anon_sym_AMP;
	v->a[95517] = anon_sym_SEMI;
	v->a[95518] = 6;
	v->a[95519] = actions(3);
	small_parse_table_4776(v);
}

void	small_parse_table_4776(t_small_parse_table_array *v)
{
	v->a[95520] = 1;
	v->a[95521] = sym_comment;
	v->a[95522] = actions(816);
	v->a[95523] = 1;
	v->a[95524] = sym_file_descriptor;
	v->a[95525] = actions(5252);
	v->a[95526] = 1;
	v->a[95527] = sym_variable_name;
	v->a[95528] = actions(5250);
	v->a[95529] = 2;
	v->a[95530] = aux_sym__simple_variable_name_token1;
	v->a[95531] = aux_sym__multiline_variable_name_token1;
	v->a[95532] = actions(5248);
	v->a[95533] = 9;
	v->a[95534] = anon_sym_BANG;
	v->a[95535] = anon_sym_DASH;
	v->a[95536] = anon_sym_STAR;
	v->a[95537] = anon_sym_QMARK;
	v->a[95538] = anon_sym_DOLLAR;
	v->a[95539] = anon_sym_POUND;
	small_parse_table_4777(v);
}

void	small_parse_table_4777(t_small_parse_table_array *v)
{
	v->a[95540] = anon_sym_AT;
	v->a[95541] = anon_sym_0;
	v->a[95542] = anon_sym__;
	v->a[95543] = actions(810);
	v->a[95544] = 13;
	v->a[95545] = anon_sym_AMP_AMP;
	v->a[95546] = anon_sym_PIPE_PIPE;
	v->a[95547] = anon_sym_LT;
	v->a[95548] = anon_sym_GT;
	v->a[95549] = anon_sym_GT_GT;
	v->a[95550] = anon_sym_AMP_GT;
	v->a[95551] = anon_sym_AMP_GT_GT;
	v->a[95552] = anon_sym_LT_AMP;
	v->a[95553] = anon_sym_GT_AMP;
	v->a[95554] = anon_sym_GT_PIPE;
	v->a[95555] = anon_sym_LT_AMP_DASH;
	v->a[95556] = anon_sym_GT_AMP_DASH;
	v->a[95557] = aux_sym_heredoc_redirect_token1;
	v->a[95558] = 6;
	v->a[95559] = actions(3);
	small_parse_table_4778(v);
}

void	small_parse_table_4778(t_small_parse_table_array *v)
{
	v->a[95560] = 1;
	v->a[95561] = sym_comment;
	v->a[95562] = actions(5191);
	v->a[95563] = 1;
	v->a[95564] = aux_sym_concatenation_token1;
	v->a[95565] = actions(5193);
	v->a[95566] = 1;
	v->a[95567] = sym__concat;
	v->a[95568] = state(2006);
	v->a[95569] = 1;
	v->a[95570] = aux_sym_concatenation_repeat1;
	v->a[95571] = actions(1182);
	v->a[95572] = 2;
	v->a[95573] = sym_file_descriptor;
	v->a[95574] = aux_sym_heredoc_redirect_token1;
	v->a[95575] = actions(1180);
	v->a[95576] = 21;
	v->a[95577] = anon_sym_PIPE;
	v->a[95578] = anon_sym_SEMI_SEMI;
	v->a[95579] = anon_sym_SEMI_AMP;
	small_parse_table_4779(v);
}

void	small_parse_table_4779(t_small_parse_table_array *v)
{
	v->a[95580] = anon_sym_SEMI_SEMI_AMP;
	v->a[95581] = anon_sym_PIPE_AMP;
	v->a[95582] = anon_sym_AMP_AMP;
	v->a[95583] = anon_sym_PIPE_PIPE;
	v->a[95584] = anon_sym_LT;
	v->a[95585] = anon_sym_GT;
	v->a[95586] = anon_sym_GT_GT;
	v->a[95587] = anon_sym_AMP_GT;
	v->a[95588] = anon_sym_AMP_GT_GT;
	v->a[95589] = anon_sym_LT_AMP;
	v->a[95590] = anon_sym_GT_AMP;
	v->a[95591] = anon_sym_GT_PIPE;
	v->a[95592] = anon_sym_LT_AMP_DASH;
	v->a[95593] = anon_sym_GT_AMP_DASH;
	v->a[95594] = anon_sym_LT_LT;
	v->a[95595] = anon_sym_LT_LT_DASH;
	v->a[95596] = anon_sym_AMP;
	v->a[95597] = anon_sym_SEMI;
	v->a[95598] = 6;
	v->a[95599] = actions(3);
	small_parse_table_4780(v);
}

/* EOF small_parse_table_955.c */
