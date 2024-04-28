/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2625.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13125(t_small_parse_table_array *v)
{
	v->a[262500] = anon_sym_AMP_AMP;
	v->a[262501] = anon_sym_PIPE;
	v->a[262502] = anon_sym_AMP;
	v->a[262503] = anon_sym_LT;
	v->a[262504] = anon_sym_GT;
	v->a[262505] = anon_sym_LT_LT;
	v->a[262506] = anon_sym_GT_GT;
	v->a[262507] = anon_sym_SEMI_SEMI;
	v->a[262508] = anon_sym_PIPE_AMP;
	v->a[262509] = anon_sym_AMP_GT;
	v->a[262510] = anon_sym_AMP_GT_GT;
	v->a[262511] = anon_sym_LT_AMP;
	v->a[262512] = anon_sym_GT_AMP;
	v->a[262513] = anon_sym_GT_PIPE;
	v->a[262514] = anon_sym_LT_AMP_DASH;
	v->a[262515] = anon_sym_GT_AMP_DASH;
	v->a[262516] = anon_sym_LT_LT_DASH;
	v->a[262517] = anon_sym_LT_LT_LT;
	v->a[262518] = 6;
	v->a[262519] = actions(3);
	small_parse_table_13126(v);
}

void	small_parse_table_13126(t_small_parse_table_array *v)
{
	v->a[262520] = 1;
	v->a[262521] = sym_comment;
	v->a[262522] = actions(11512);
	v->a[262523] = 1;
	v->a[262524] = aux_sym_concatenation_token1;
	v->a[262525] = actions(12023);
	v->a[262526] = 1;
	v->a[262527] = sym__concat;
	v->a[262528] = state(4253);
	v->a[262529] = 1;
	v->a[262530] = aux_sym_concatenation_repeat1;
	v->a[262531] = actions(1288);
	v->a[262532] = 2;
	v->a[262533] = sym_file_descriptor;
	v->a[262534] = aux_sym_heredoc_redirect_token1;
	v->a[262535] = actions(1286);
	v->a[262536] = 20;
	v->a[262537] = anon_sym_SEMI;
	v->a[262538] = anon_sym_PIPE_PIPE;
	v->a[262539] = anon_sym_AMP_AMP;
	small_parse_table_13127(v);
}

void	small_parse_table_13127(t_small_parse_table_array *v)
{
	v->a[262540] = anon_sym_PIPE;
	v->a[262541] = anon_sym_AMP;
	v->a[262542] = anon_sym_LT;
	v->a[262543] = anon_sym_GT;
	v->a[262544] = anon_sym_LT_LT;
	v->a[262545] = anon_sym_GT_GT;
	v->a[262546] = anon_sym_SEMI_SEMI;
	v->a[262547] = anon_sym_PIPE_AMP;
	v->a[262548] = anon_sym_AMP_GT;
	v->a[262549] = anon_sym_AMP_GT_GT;
	v->a[262550] = anon_sym_LT_AMP;
	v->a[262551] = anon_sym_GT_AMP;
	v->a[262552] = anon_sym_GT_PIPE;
	v->a[262553] = anon_sym_LT_AMP_DASH;
	v->a[262554] = anon_sym_GT_AMP_DASH;
	v->a[262555] = anon_sym_LT_LT_DASH;
	v->a[262556] = anon_sym_LT_LT_LT;
	v->a[262557] = 11;
	v->a[262558] = actions(3);
	v->a[262559] = 1;
	small_parse_table_13128(v);
}

void	small_parse_table_13128(t_small_parse_table_array *v)
{
	v->a[262560] = sym_comment;
	v->a[262561] = actions(2719);
	v->a[262562] = 1;
	v->a[262563] = anon_sym_RPAREN;
	v->a[262564] = actions(4384);
	v->a[262565] = 1;
	v->a[262566] = aux_sym_heredoc_redirect_token1;
	v->a[262567] = actions(11993);
	v->a[262568] = 1;
	v->a[262569] = sym_file_descriptor;
	v->a[262570] = actions(4253);
	v->a[262571] = 2;
	v->a[262572] = anon_sym_PIPE;
	v->a[262573] = anon_sym_PIPE_AMP;
	v->a[262574] = actions(4692);
	v->a[262575] = 2;
	v->a[262576] = anon_sym_LT_LT;
	v->a[262577] = anon_sym_LT_LT_DASH;
	v->a[262578] = actions(4809);
	v->a[262579] = 2;
	small_parse_table_13129(v);
}

void	small_parse_table_13129(t_small_parse_table_array *v)
{
	v->a[262580] = anon_sym_PIPE_PIPE;
	v->a[262581] = anon_sym_AMP_AMP;
	v->a[262582] = actions(11542);
	v->a[262583] = 2;
	v->a[262584] = anon_sym_LT_AMP_DASH;
	v->a[262585] = anon_sym_GT_AMP_DASH;
	v->a[262586] = actions(4378);
	v->a[262587] = 3;
	v->a[262588] = anon_sym_SEMI;
	v->a[262589] = anon_sym_AMP;
	v->a[262590] = anon_sym_SEMI_SEMI;
	v->a[262591] = state(4746);
	v->a[262592] = 3;
	v->a[262593] = sym_file_redirect;
	v->a[262594] = sym_heredoc_redirect;
	v->a[262595] = aux_sym_redirected_statement_repeat1;
	v->a[262596] = actions(11540);
	v->a[262597] = 8;
	v->a[262598] = anon_sym_LT;
	v->a[262599] = anon_sym_GT;
	small_parse_table_13130(v);
}

/* EOF small_parse_table_2625.c */
