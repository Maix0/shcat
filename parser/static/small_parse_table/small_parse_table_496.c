/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_496.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2480(t_small_parse_table_array *v)
{
	v->a[49600] = state(922);
	v->a[49601] = 2;
	v->a[49602] = sym_variable_assignment;
	v->a[49603] = aux_sym__variable_assignments_repeat1;
	v->a[49604] = actions(1702);
	v->a[49605] = 14;
	v->a[49606] = anon_sym_PIPE;
	v->a[49607] = anon_sym_SEMI_SEMI;
	v->a[49608] = anon_sym_AMP_AMP;
	v->a[49609] = anon_sym_PIPE_PIPE;
	v->a[49610] = anon_sym_LT;
	v->a[49611] = anon_sym_GT;
	v->a[49612] = anon_sym_GT_GT;
	v->a[49613] = anon_sym_LT_AMP;
	v->a[49614] = anon_sym_GT_AMP;
	v->a[49615] = anon_sym_GT_PIPE;
	v->a[49616] = anon_sym_LT_GT;
	v->a[49617] = anon_sym_LT_LT;
	v->a[49618] = anon_sym_LT_LT_DASH;
	v->a[49619] = anon_sym_SEMI;
	small_parse_table_2481(v);
}

void	small_parse_table_2481(t_small_parse_table_array *v)
{
	v->a[49620] = 4;
	v->a[49621] = actions(3);
	v->a[49622] = 1;
	v->a[49623] = sym_comment;
	v->a[49624] = actions(852);
	v->a[49625] = 1;
	v->a[49626] = sym_variable_name;
	v->a[49627] = state(919);
	v->a[49628] = 2;
	v->a[49629] = sym_variable_assignment;
	v->a[49630] = aux_sym__variable_assignments_repeat1;
	v->a[49631] = actions(742);
	v->a[49632] = 16;
	v->a[49633] = anon_sym_LT;
	v->a[49634] = anon_sym_GT;
	v->a[49635] = anon_sym_GT_GT;
	v->a[49636] = anon_sym_LT_AMP;
	v->a[49637] = anon_sym_GT_AMP;
	v->a[49638] = anon_sym_GT_PIPE;
	v->a[49639] = anon_sym_LT_GT;
	small_parse_table_2482(v);
}

void	small_parse_table_2482(t_small_parse_table_array *v)
{
	v->a[49640] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49641] = anon_sym_DOLLAR;
	v->a[49642] = anon_sym_DQUOTE;
	v->a[49643] = sym_raw_string;
	v->a[49644] = sym_number;
	v->a[49645] = anon_sym_DOLLAR_LBRACE;
	v->a[49646] = anon_sym_DOLLAR_LPAREN;
	v->a[49647] = anon_sym_BQUOTE;
	v->a[49648] = sym_word;
	v->a[49649] = 6;
	v->a[49650] = actions(3);
	v->a[49651] = 1;
	v->a[49652] = sym_comment;
	v->a[49653] = actions(850);
	v->a[49654] = 2;
	v->a[49655] = anon_sym_LT_LT;
	v->a[49656] = anon_sym_LT_LT_DASH;
	v->a[49657] = actions(1690);
	v->a[49658] = 2;
	v->a[49659] = ts_builtin_sym_end;
	small_parse_table_2483(v);
}

void	small_parse_table_2483(t_small_parse_table_array *v)
{
	v->a[49660] = aux_sym_heredoc_redirect_token1;
	v->a[49661] = state(925);
	v->a[49662] = 3;
	v->a[49663] = sym_file_redirect;
	v->a[49664] = sym_heredoc_redirect;
	v->a[49665] = aux_sym_redirected_statement_repeat1;
	v->a[49666] = actions(1688);
	v->a[49667] = 5;
	v->a[49668] = anon_sym_PIPE;
	v->a[49669] = anon_sym_SEMI_SEMI;
	v->a[49670] = anon_sym_AMP_AMP;
	v->a[49671] = anon_sym_PIPE_PIPE;
	v->a[49672] = anon_sym_SEMI;
	v->a[49673] = actions(1603);
	v->a[49674] = 7;
	v->a[49675] = anon_sym_LT;
	v->a[49676] = anon_sym_GT;
	v->a[49677] = anon_sym_GT_GT;
	v->a[49678] = anon_sym_LT_AMP;
	v->a[49679] = anon_sym_GT_AMP;
	small_parse_table_2484(v);
}

void	small_parse_table_2484(t_small_parse_table_array *v)
{
	v->a[49680] = anon_sym_GT_PIPE;
	v->a[49681] = anon_sym_LT_GT;
	v->a[49682] = 6;
	v->a[49683] = actions(3);
	v->a[49684] = 1;
	v->a[49685] = sym_comment;
	v->a[49686] = actions(1683);
	v->a[49687] = 2;
	v->a[49688] = anon_sym_LT_LT;
	v->a[49689] = anon_sym_LT_LT_DASH;
	v->a[49690] = actions(1686);
	v->a[49691] = 2;
	v->a[49692] = ts_builtin_sym_end;
	v->a[49693] = aux_sym_heredoc_redirect_token1;
	v->a[49694] = state(925);
	v->a[49695] = 3;
	v->a[49696] = sym_file_redirect;
	v->a[49697] = sym_heredoc_redirect;
	v->a[49698] = aux_sym_redirected_statement_repeat1;
	v->a[49699] = actions(1678);
	small_parse_table_2485(v);
}

/* EOF small_parse_table_496.c */
