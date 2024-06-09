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
	v->a[75500] = anon_sym_LT_LT_DASH;
	v->a[75501] = 6;
	v->a[75502] = actions(1404);
	v->a[75503] = 1;
	v->a[75504] = sym_comment;
	v->a[75505] = actions(2901);
	v->a[75506] = 1;
	v->a[75507] = aux_sym_concatenation_token1;
	v->a[75508] = actions(3038);
	v->a[75509] = 1;
	v->a[75510] = sym__concat;
	v->a[75511] = state(1361);
	v->a[75512] = 1;
	v->a[75513] = aux_sym_concatenation_repeat1;
	v->a[75514] = actions(1129);
	v->a[75515] = 7;
	v->a[75516] = anon_sym_PIPE;
	v->a[75517] = anon_sym_LT;
	v->a[75518] = anon_sym_GT;
	v->a[75519] = anon_sym_AMP_GT;
	small_parse_table_3776(v);
}

void	small_parse_table_3776(t_small_parse_table_array *v)
{
	v->a[75520] = anon_sym_LT_AMP;
	v->a[75521] = anon_sym_GT_AMP;
	v->a[75522] = anon_sym_LT_LT;
	v->a[75523] = actions(1127);
	v->a[75524] = 9;
	v->a[75525] = sym_file_descriptor;
	v->a[75526] = anon_sym_AMP_AMP;
	v->a[75527] = anon_sym_PIPE_PIPE;
	v->a[75528] = anon_sym_GT_GT;
	v->a[75529] = anon_sym_AMP_GT_GT;
	v->a[75530] = anon_sym_GT_PIPE;
	v->a[75531] = anon_sym_LT_AMP_DASH;
	v->a[75532] = anon_sym_GT_AMP_DASH;
	v->a[75533] = anon_sym_LT_LT_DASH;
	v->a[75534] = 10;
	v->a[75535] = actions(1404);
	v->a[75536] = 1;
	v->a[75537] = sym_comment;
	v->a[75538] = actions(2302);
	v->a[75539] = 1;
	small_parse_table_3777(v);
}

void	small_parse_table_3777(t_small_parse_table_array *v)
{
	v->a[75540] = anon_sym_PIPE;
	v->a[75541] = actions(3046);
	v->a[75542] = 1;
	v->a[75543] = anon_sym_LT_LT;
	v->a[75544] = actions(3048);
	v->a[75545] = 1;
	v->a[75546] = anon_sym_LT_LT_DASH;
	v->a[75547] = actions(3050);
	v->a[75548] = 1;
	v->a[75549] = sym_file_descriptor;
	v->a[75550] = actions(2308);
	v->a[75551] = 2;
	v->a[75552] = anon_sym_AMP_AMP;
	v->a[75553] = anon_sym_PIPE_PIPE;
	v->a[75554] = actions(3044);
	v->a[75555] = 2;
	v->a[75556] = anon_sym_LT_AMP_DASH;
	v->a[75557] = anon_sym_GT_AMP_DASH;
	v->a[75558] = actions(3042);
	v->a[75559] = 3;
	small_parse_table_3778(v);
}

void	small_parse_table_3778(t_small_parse_table_array *v)
{
	v->a[75560] = anon_sym_GT_GT;
	v->a[75561] = anon_sym_AMP_GT_GT;
	v->a[75562] = anon_sym_GT_PIPE;
	v->a[75563] = state(1344);
	v->a[75564] = 3;
	v->a[75565] = sym_file_redirect;
	v->a[75566] = sym_heredoc_redirect;
	v->a[75567] = aux_sym_redirected_statement_repeat1;
	v->a[75568] = actions(3040);
	v->a[75569] = 5;
	v->a[75570] = anon_sym_LT;
	v->a[75571] = anon_sym_GT;
	v->a[75572] = anon_sym_AMP_GT;
	v->a[75573] = anon_sym_LT_AMP;
	v->a[75574] = anon_sym_GT_AMP;
	v->a[75575] = 13;
	v->a[75576] = actions(3);
	v->a[75577] = 1;
	v->a[75578] = sym_comment;
	v->a[75579] = actions(2119);
	small_parse_table_3779(v);
}

void	small_parse_table_3779(t_small_parse_table_array *v)
{
	v->a[75580] = 1;
	v->a[75581] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75582] = actions(2121);
	v->a[75583] = 1;
	v->a[75584] = anon_sym_DOLLAR;
	v->a[75585] = actions(2123);
	v->a[75586] = 1;
	v->a[75587] = anon_sym_DQUOTE;
	v->a[75588] = actions(2125);
	v->a[75589] = 1;
	v->a[75590] = aux_sym_number_token1;
	v->a[75591] = actions(2127);
	v->a[75592] = 1;
	v->a[75593] = aux_sym_number_token2;
	v->a[75594] = actions(2129);
	v->a[75595] = 1;
	v->a[75596] = anon_sym_DOLLAR_LBRACE;
	v->a[75597] = actions(2131);
	v->a[75598] = 1;
	v->a[75599] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3780(v);
}

/* EOF small_parse_table_755.c */
