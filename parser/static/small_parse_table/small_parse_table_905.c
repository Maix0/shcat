/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_905.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4525(t_small_parse_table_array *v)
{
	v->a[90500] = sym_comment;
	v->a[90501] = actions(2862);
	v->a[90502] = 7;
	v->a[90503] = anon_sym_PIPE;
	v->a[90504] = anon_sym_LT;
	v->a[90505] = anon_sym_GT;
	v->a[90506] = anon_sym_AMP_GT;
	v->a[90507] = anon_sym_LT_AMP;
	v->a[90508] = anon_sym_GT_AMP;
	v->a[90509] = anon_sym_LT_LT;
	v->a[90510] = actions(2860);
	v->a[90511] = 9;
	v->a[90512] = sym_file_descriptor;
	v->a[90513] = anon_sym_AMP_AMP;
	v->a[90514] = anon_sym_PIPE_PIPE;
	v->a[90515] = anon_sym_GT_GT;
	v->a[90516] = anon_sym_AMP_GT_GT;
	v->a[90517] = anon_sym_GT_PIPE;
	v->a[90518] = anon_sym_LT_AMP_DASH;
	v->a[90519] = anon_sym_GT_AMP_DASH;
	small_parse_table_4526(v);
}

void	small_parse_table_4526(t_small_parse_table_array *v)
{
	v->a[90520] = anon_sym_LT_LT_DASH;
	v->a[90521] = 3;
	v->a[90522] = actions(1094);
	v->a[90523] = 1;
	v->a[90524] = sym_comment;
	v->a[90525] = actions(2681);
	v->a[90526] = 7;
	v->a[90527] = anon_sym_PIPE;
	v->a[90528] = anon_sym_LT;
	v->a[90529] = anon_sym_GT;
	v->a[90530] = anon_sym_AMP_GT;
	v->a[90531] = anon_sym_LT_AMP;
	v->a[90532] = anon_sym_GT_AMP;
	v->a[90533] = anon_sym_LT_LT;
	v->a[90534] = actions(2679);
	v->a[90535] = 9;
	v->a[90536] = sym_file_descriptor;
	v->a[90537] = anon_sym_AMP_AMP;
	v->a[90538] = anon_sym_PIPE_PIPE;
	v->a[90539] = anon_sym_GT_GT;
	small_parse_table_4527(v);
}

void	small_parse_table_4527(t_small_parse_table_array *v)
{
	v->a[90540] = anon_sym_AMP_GT_GT;
	v->a[90541] = anon_sym_GT_PIPE;
	v->a[90542] = anon_sym_LT_AMP_DASH;
	v->a[90543] = anon_sym_GT_AMP_DASH;
	v->a[90544] = anon_sym_LT_LT_DASH;
	v->a[90545] = 3;
	v->a[90546] = actions(3);
	v->a[90547] = 1;
	v->a[90548] = sym_comment;
	v->a[90549] = actions(1141);
	v->a[90550] = 3;
	v->a[90551] = sym_file_descriptor;
	v->a[90552] = sym__concat;
	v->a[90553] = aux_sym_heredoc_redirect_token1;
	v->a[90554] = actions(1139);
	v->a[90555] = 13;
	v->a[90556] = anon_sym_AMP_AMP;
	v->a[90557] = anon_sym_PIPE_PIPE;
	v->a[90558] = anon_sym_LT;
	v->a[90559] = anon_sym_GT;
	small_parse_table_4528(v);
}

void	small_parse_table_4528(t_small_parse_table_array *v)
{
	v->a[90560] = anon_sym_GT_GT;
	v->a[90561] = anon_sym_AMP_GT;
	v->a[90562] = anon_sym_AMP_GT_GT;
	v->a[90563] = anon_sym_LT_AMP;
	v->a[90564] = anon_sym_GT_AMP;
	v->a[90565] = anon_sym_GT_PIPE;
	v->a[90566] = anon_sym_LT_AMP_DASH;
	v->a[90567] = anon_sym_GT_AMP_DASH;
	v->a[90568] = aux_sym_concatenation_token1;
	v->a[90569] = 10;
	v->a[90570] = actions(3);
	v->a[90571] = 1;
	v->a[90572] = sym_comment;
	v->a[90573] = actions(749);
	v->a[90574] = 1;
	v->a[90575] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90576] = actions(751);
	v->a[90577] = 1;
	v->a[90578] = anon_sym_DOLLAR;
	v->a[90579] = actions(753);
	small_parse_table_4529(v);
}

void	small_parse_table_4529(t_small_parse_table_array *v)
{
	v->a[90580] = 1;
	v->a[90581] = anon_sym_DQUOTE;
	v->a[90582] = actions(755);
	v->a[90583] = 1;
	v->a[90584] = anon_sym_DOLLAR_LBRACE;
	v->a[90585] = actions(757);
	v->a[90586] = 1;
	v->a[90587] = anon_sym_DOLLAR_LPAREN;
	v->a[90588] = actions(759);
	v->a[90589] = 1;
	v->a[90590] = anon_sym_BQUOTE;
	v->a[90591] = state(258);
	v->a[90592] = 2;
	v->a[90593] = sym_concatenation;
	v->a[90594] = aux_sym_for_statement_repeat1;
	v->a[90595] = actions(928);
	v->a[90596] = 3;
	v->a[90597] = sym_raw_string;
	v->a[90598] = sym_number;
	v->a[90599] = sym_word;
	small_parse_table_4530(v);
}

/* EOF small_parse_table_905.c */
