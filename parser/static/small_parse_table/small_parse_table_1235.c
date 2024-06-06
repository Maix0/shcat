/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1235.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6175(t_small_parse_table_array *v)
{
	v->a[123500] = 1;
	v->a[123501] = sym_comment;
	v->a[123502] = state(2606);
	v->a[123503] = 1;
	v->a[123504] = aux_sym_concatenation_repeat1;
	v->a[123505] = actions(7084);
	v->a[123506] = 2;
	v->a[123507] = sym__concat;
	v->a[123508] = aux_sym_concatenation_token1;
	v->a[123509] = actions(2717);
	v->a[123510] = 7;
	v->a[123511] = anon_sym_PIPE;
	v->a[123512] = anon_sym_LT;
	v->a[123513] = anon_sym_GT;
	v->a[123514] = anon_sym_AMP_GT;
	v->a[123515] = anon_sym_LT_AMP;
	v->a[123516] = anon_sym_GT_AMP;
	v->a[123517] = anon_sym_LT_LT;
	v->a[123518] = actions(2719);
	v->a[123519] = 11;
	small_parse_table_6176(v);
}

void	small_parse_table_6176(t_small_parse_table_array *v)
{
	v->a[123520] = sym_file_descriptor;
	v->a[123521] = sym_variable_name;
	v->a[123522] = anon_sym_PIPE_AMP;
	v->a[123523] = anon_sym_AMP_AMP;
	v->a[123524] = anon_sym_PIPE_PIPE;
	v->a[123525] = anon_sym_GT_GT;
	v->a[123526] = anon_sym_AMP_GT_GT;
	v->a[123527] = anon_sym_GT_PIPE;
	v->a[123528] = anon_sym_LT_AMP_DASH;
	v->a[123529] = anon_sym_GT_AMP_DASH;
	v->a[123530] = anon_sym_LT_LT_DASH;
	v->a[123531] = 6;
	v->a[123532] = actions(3);
	v->a[123533] = 1;
	v->a[123534] = sym_comment;
	v->a[123535] = actions(7092);
	v->a[123536] = 1;
	v->a[123537] = aux_sym_concatenation_token1;
	v->a[123538] = actions(7096);
	v->a[123539] = 1;
	small_parse_table_6177(v);
}

void	small_parse_table_6177(t_small_parse_table_array *v)
{
	v->a[123540] = sym__concat;
	v->a[123541] = state(2607);
	v->a[123542] = 1;
	v->a[123543] = aux_sym_concatenation_repeat1;
	v->a[123544] = actions(2690);
	v->a[123545] = 3;
	v->a[123546] = sym_test_operator;
	v->a[123547] = sym__brace_start;
	v->a[123548] = aux_sym_heredoc_redirect_token1;
	v->a[123549] = actions(2688);
	v->a[123550] = 15;
	v->a[123551] = anon_sym_SEMI_SEMI;
	v->a[123552] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123553] = anon_sym_AMP;
	v->a[123554] = anon_sym_DOLLAR;
	v->a[123555] = sym__special_character;
	v->a[123556] = anon_sym_DQUOTE;
	v->a[123557] = sym_raw_string;
	v->a[123558] = aux_sym_number_token1;
	v->a[123559] = aux_sym_number_token2;
	small_parse_table_6178(v);
}

void	small_parse_table_6178(t_small_parse_table_array *v)
{
	v->a[123560] = anon_sym_DOLLAR_LBRACE;
	v->a[123561] = anon_sym_DOLLAR_LPAREN;
	v->a[123562] = anon_sym_BQUOTE;
	v->a[123563] = anon_sym_DOLLAR_BQUOTE;
	v->a[123564] = sym_word;
	v->a[123565] = anon_sym_SEMI;
	v->a[123566] = 5;
	v->a[123567] = actions(3);
	v->a[123568] = 1;
	v->a[123569] = sym_comment;
	v->a[123570] = actions(7098);
	v->a[123571] = 1;
	v->a[123572] = sym_variable_name;
	v->a[123573] = actions(5183);
	v->a[123574] = 2;
	v->a[123575] = sym_file_descriptor;
	v->a[123576] = aux_sym_heredoc_redirect_token1;
	v->a[123577] = state(2600);
	v->a[123578] = 2;
	v->a[123579] = sym_variable_assignment;
	small_parse_table_6179(v);
}

void	small_parse_table_6179(t_small_parse_table_array *v)
{
	v->a[123580] = aux_sym_variable_assignments_repeat1;
	v->a[123581] = actions(5181);
	v->a[123582] = 16;
	v->a[123583] = anon_sym_PIPE;
	v->a[123584] = anon_sym_PIPE_AMP;
	v->a[123585] = anon_sym_AMP_AMP;
	v->a[123586] = anon_sym_PIPE_PIPE;
	v->a[123587] = anon_sym_LT;
	v->a[123588] = anon_sym_GT;
	v->a[123589] = anon_sym_GT_GT;
	v->a[123590] = anon_sym_AMP_GT;
	v->a[123591] = anon_sym_AMP_GT_GT;
	v->a[123592] = anon_sym_LT_AMP;
	v->a[123593] = anon_sym_GT_AMP;
	v->a[123594] = anon_sym_GT_PIPE;
	v->a[123595] = anon_sym_LT_AMP_DASH;
	v->a[123596] = anon_sym_GT_AMP_DASH;
	v->a[123597] = anon_sym_LT_LT;
	v->a[123598] = anon_sym_LT_LT_DASH;
	v->a[123599] = 5;
	small_parse_table_6180(v);
}

/* EOF small_parse_table_1235.c */
