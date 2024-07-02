/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_755.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3775(t_small_parse_table_array *v)
{
	v->a[75500] = aux_sym_redirected_statement_repeat2;
	v->a[75501] = actions(3048);
	v->a[75502] = 7;
	v->a[75503] = anon_sym_LT;
	v->a[75504] = anon_sym_GT;
	v->a[75505] = anon_sym_GT_GT;
	v->a[75506] = anon_sym_LT_AMP;
	v->a[75507] = anon_sym_GT_AMP;
	v->a[75508] = anon_sym_GT_PIPE;
	v->a[75509] = anon_sym_LT_GT;
	v->a[75510] = 3;
	v->a[75511] = actions(680);
	v->a[75512] = 1;
	v->a[75513] = sym_comment;
	v->a[75514] = actions(2143);
	v->a[75515] = 4;
	v->a[75516] = anon_sym_PIPE;
	v->a[75517] = anon_sym_LT;
	v->a[75518] = anon_sym_GT;
	v->a[75519] = anon_sym_LT_LT;
	small_parse_table_3776(v);
}

void	small_parse_table_3776(t_small_parse_table_array *v)
{
	v->a[75520] = actions(2141);
	v->a[75521] = 9;
	v->a[75522] = sym_file_descriptor;
	v->a[75523] = anon_sym_AMP_AMP;
	v->a[75524] = anon_sym_PIPE_PIPE;
	v->a[75525] = anon_sym_GT_GT;
	v->a[75526] = anon_sym_LT_AMP;
	v->a[75527] = anon_sym_GT_AMP;
	v->a[75528] = anon_sym_GT_PIPE;
	v->a[75529] = anon_sym_LT_GT;
	v->a[75530] = anon_sym_LT_LT_DASH;
	v->a[75531] = 8;
	v->a[75532] = actions(3);
	v->a[75533] = 1;
	v->a[75534] = sym_comment;
	v->a[75535] = actions(3030);
	v->a[75536] = 1;
	v->a[75537] = anon_sym_POUND;
	v->a[75538] = actions(3032);
	v->a[75539] = 1;
	small_parse_table_3777(v);
}

void	small_parse_table_3777(t_small_parse_table_array *v)
{
	v->a[75540] = aux_sym__simple_variable_name_token1;
	v->a[75541] = actions(3036);
	v->a[75542] = 1;
	v->a[75543] = sym_variable_name;
	v->a[75544] = actions(3054);
	v->a[75545] = 1;
	v->a[75546] = anon_sym_RBRACE;
	v->a[75547] = state(2088);
	v->a[75548] = 1;
	v->a[75549] = sym__expansion_body;
	v->a[75550] = actions(3034);
	v->a[75551] = 2;
	v->a[75552] = anon_sym_0;
	v->a[75553] = anon_sym__;
	v->a[75554] = actions(3028);
	v->a[75555] = 6;
	v->a[75556] = anon_sym_BANG;
	v->a[75557] = anon_sym_DASH;
	v->a[75558] = anon_sym_STAR;
	v->a[75559] = anon_sym_QMARK;
	small_parse_table_3778(v);
}

void	small_parse_table_3778(t_small_parse_table_array *v)
{
	v->a[75560] = anon_sym_DOLLAR;
	v->a[75561] = anon_sym_AT;
	v->a[75562] = 3;
	v->a[75563] = actions(680);
	v->a[75564] = 1;
	v->a[75565] = sym_comment;
	v->a[75566] = actions(1459);
	v->a[75567] = 4;
	v->a[75568] = anon_sym_PIPE;
	v->a[75569] = anon_sym_LT;
	v->a[75570] = anon_sym_GT;
	v->a[75571] = anon_sym_LT_LT;
	v->a[75572] = actions(1457);
	v->a[75573] = 9;
	v->a[75574] = sym_file_descriptor;
	v->a[75575] = anon_sym_AMP_AMP;
	v->a[75576] = anon_sym_PIPE_PIPE;
	v->a[75577] = anon_sym_GT_GT;
	v->a[75578] = anon_sym_LT_AMP;
	v->a[75579] = anon_sym_GT_AMP;
	small_parse_table_3779(v);
}

void	small_parse_table_3779(t_small_parse_table_array *v)
{
	v->a[75580] = anon_sym_GT_PIPE;
	v->a[75581] = anon_sym_LT_GT;
	v->a[75582] = anon_sym_LT_LT_DASH;
	v->a[75583] = 3;
	v->a[75584] = actions(680);
	v->a[75585] = 1;
	v->a[75586] = sym_comment;
	v->a[75587] = actions(1459);
	v->a[75588] = 4;
	v->a[75589] = anon_sym_PIPE;
	v->a[75590] = anon_sym_LT;
	v->a[75591] = anon_sym_GT;
	v->a[75592] = anon_sym_LT_LT;
	v->a[75593] = actions(1457);
	v->a[75594] = 9;
	v->a[75595] = sym_file_descriptor;
	v->a[75596] = anon_sym_AMP_AMP;
	v->a[75597] = anon_sym_PIPE_PIPE;
	v->a[75598] = anon_sym_GT_GT;
	v->a[75599] = anon_sym_LT_AMP;
	small_parse_table_3780(v);
}

/* EOF small_parse_table_755.c */
