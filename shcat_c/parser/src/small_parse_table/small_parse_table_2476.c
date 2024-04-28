/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2476.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12380(t_small_parse_table_array *v)
{
	v->a[247600] = anon_sym_LT_LT;
	v->a[247601] = anon_sym_LT_LT_DASH;
	v->a[247602] = actions(5099);
	v->a[247603] = 2;
	v->a[247604] = anon_sym_PIPE_PIPE;
	v->a[247605] = anon_sym_AMP_AMP;
	v->a[247606] = actions(11556);
	v->a[247607] = 2;
	v->a[247608] = anon_sym_LT_AMP_DASH;
	v->a[247609] = anon_sym_GT_AMP_DASH;
	v->a[247610] = actions(5140);
	v->a[247611] = 3;
	v->a[247612] = anon_sym_SEMI;
	v->a[247613] = anon_sym_AMP;
	v->a[247614] = anon_sym_SEMI_SEMI;
	v->a[247615] = state(4986);
	v->a[247616] = 3;
	v->a[247617] = sym_file_redirect;
	v->a[247618] = sym_heredoc_redirect;
	v->a[247619] = aux_sym_redirected_statement_repeat1;
	small_parse_table_12381(v);
}

void	small_parse_table_12381(t_small_parse_table_array *v)
{
	v->a[247620] = actions(11554);
	v->a[247621] = 8;
	v->a[247622] = anon_sym_LT;
	v->a[247623] = anon_sym_GT;
	v->a[247624] = anon_sym_GT_GT;
	v->a[247625] = anon_sym_AMP_GT;
	v->a[247626] = anon_sym_AMP_GT_GT;
	v->a[247627] = anon_sym_LT_AMP;
	v->a[247628] = anon_sym_GT_AMP;
	v->a[247629] = anon_sym_GT_PIPE;
	v->a[247630] = 11;
	v->a[247631] = actions(3);
	v->a[247632] = 1;
	v->a[247633] = sym_comment;
	v->a[247634] = actions(4411);
	v->a[247635] = 1;
	v->a[247636] = aux_sym_heredoc_redirect_token1;
	v->a[247637] = actions(11562);
	v->a[247638] = 1;
	v->a[247639] = sym_file_descriptor;
	small_parse_table_12382(v);
}

void	small_parse_table_12382(t_small_parse_table_array *v)
{
	v->a[247640] = actions(4253);
	v->a[247641] = 2;
	v->a[247642] = anon_sym_PIPE;
	v->a[247643] = anon_sym_PIPE_AMP;
	v->a[247644] = actions(4380);
	v->a[247645] = 2;
	v->a[247646] = anon_sym_PIPE_PIPE;
	v->a[247647] = anon_sym_AMP_AMP;
	v->a[247648] = actions(4382);
	v->a[247649] = 2;
	v->a[247650] = anon_sym_LT_LT;
	v->a[247651] = anon_sym_LT_LT_DASH;
	v->a[247652] = actions(4409);
	v->a[247653] = 2;
	v->a[247654] = anon_sym_SEMI;
	v->a[247655] = anon_sym_AMP;
	v->a[247656] = actions(11335);
	v->a[247657] = 2;
	v->a[247658] = anon_sym_LT_AMP_DASH;
	v->a[247659] = anon_sym_GT_AMP_DASH;
	small_parse_table_12383(v);
}

void	small_parse_table_12383(t_small_parse_table_array *v)
{
	v->a[247660] = actions(4257);
	v->a[247661] = 3;
	v->a[247662] = anon_sym_SEMI_SEMI;
	v->a[247663] = anon_sym_SEMI_AMP;
	v->a[247664] = anon_sym_SEMI_SEMI_AMP;
	v->a[247665] = state(4455);
	v->a[247666] = 3;
	v->a[247667] = sym_file_redirect;
	v->a[247668] = sym_heredoc_redirect;
	v->a[247669] = aux_sym_redirected_statement_repeat1;
	v->a[247670] = actions(11333);
	v->a[247671] = 8;
	v->a[247672] = anon_sym_LT;
	v->a[247673] = anon_sym_GT;
	v->a[247674] = anon_sym_GT_GT;
	v->a[247675] = anon_sym_AMP_GT;
	v->a[247676] = anon_sym_AMP_GT_GT;
	v->a[247677] = anon_sym_LT_AMP;
	v->a[247678] = anon_sym_GT_AMP;
	v->a[247679] = anon_sym_GT_PIPE;
	small_parse_table_12384(v);
}

void	small_parse_table_12384(t_small_parse_table_array *v)
{
	v->a[247680] = 3;
	v->a[247681] = actions(3);
	v->a[247682] = 1;
	v->a[247683] = sym_comment;
	v->a[247684] = actions(1302);
	v->a[247685] = 3;
	v->a[247686] = sym_file_descriptor;
	v->a[247687] = sym__concat;
	v->a[247688] = aux_sym_heredoc_redirect_token1;
	v->a[247689] = actions(1300);
	v->a[247690] = 23;
	v->a[247691] = anon_sym_SEMI;
	v->a[247692] = anon_sym_PIPE_PIPE;
	v->a[247693] = anon_sym_AMP_AMP;
	v->a[247694] = anon_sym_PIPE;
	v->a[247695] = anon_sym_AMP;
	v->a[247696] = anon_sym_LT;
	v->a[247697] = anon_sym_GT;
	v->a[247698] = anon_sym_LT_LT;
	v->a[247699] = anon_sym_GT_GT;
	small_parse_table_12385(v);
}

/* EOF small_parse_table_2476.c */
