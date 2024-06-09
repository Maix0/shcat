/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_818.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4090(t_small_parse_table_array *v)
{
	v->a[81800] = 5;
	v->a[81801] = actions(1404);
	v->a[81802] = 1;
	v->a[81803] = sym_comment;
	v->a[81804] = actions(3393);
	v->a[81805] = 1;
	v->a[81806] = anon_sym_PIPE;
	v->a[81807] = state(1505);
	v->a[81808] = 1;
	v->a[81809] = aux_sym_pipeline_repeat1;
	v->a[81810] = actions(2655);
	v->a[81811] = 6;
	v->a[81812] = anon_sym_LT;
	v->a[81813] = anon_sym_GT;
	v->a[81814] = anon_sym_AMP_GT;
	v->a[81815] = anon_sym_LT_AMP;
	v->a[81816] = anon_sym_GT_AMP;
	v->a[81817] = anon_sym_LT_LT;
	v->a[81818] = actions(2659);
	v->a[81819] = 9;
	small_parse_table_4091(v);
}

void	small_parse_table_4091(t_small_parse_table_array *v)
{
	v->a[81820] = sym_file_descriptor;
	v->a[81821] = anon_sym_AMP_AMP;
	v->a[81822] = anon_sym_PIPE_PIPE;
	v->a[81823] = anon_sym_GT_GT;
	v->a[81824] = anon_sym_AMP_GT_GT;
	v->a[81825] = anon_sym_GT_PIPE;
	v->a[81826] = anon_sym_LT_AMP_DASH;
	v->a[81827] = anon_sym_GT_AMP_DASH;
	v->a[81828] = anon_sym_LT_LT_DASH;
	v->a[81829] = 8;
	v->a[81830] = actions(3);
	v->a[81831] = 1;
	v->a[81832] = sym_comment;
	v->a[81833] = actions(949);
	v->a[81834] = 1;
	v->a[81835] = sym_file_descriptor;
	v->a[81836] = actions(3395);
	v->a[81837] = 1;
	v->a[81838] = aux_sym_heredoc_redirect_token1;
	v->a[81839] = state(2085);
	small_parse_table_4092(v);
}

void	small_parse_table_4092(t_small_parse_table_array *v)
{
	v->a[81840] = 1;
	v->a[81841] = sym__heredoc_expression;
	v->a[81842] = actions(925);
	v->a[81843] = 2;
	v->a[81844] = anon_sym_AMP_AMP;
	v->a[81845] = anon_sym_PIPE_PIPE;
	v->a[81846] = actions(929);
	v->a[81847] = 2;
	v->a[81848] = anon_sym_LT_AMP_DASH;
	v->a[81849] = anon_sym_GT_AMP_DASH;
	v->a[81850] = state(1523);
	v->a[81851] = 2;
	v->a[81852] = sym_file_redirect;
	v->a[81853] = aux_sym_redirected_statement_repeat2;
	v->a[81854] = actions(927);
	v->a[81855] = 8;
	v->a[81856] = anon_sym_LT;
	v->a[81857] = anon_sym_GT;
	v->a[81858] = anon_sym_GT_GT;
	v->a[81859] = anon_sym_AMP_GT;
	small_parse_table_4093(v);
}

void	small_parse_table_4093(t_small_parse_table_array *v)
{
	v->a[81860] = anon_sym_AMP_GT_GT;
	v->a[81861] = anon_sym_LT_AMP;
	v->a[81862] = anon_sym_GT_AMP;
	v->a[81863] = anon_sym_GT_PIPE;
	v->a[81864] = 8;
	v->a[81865] = actions(3);
	v->a[81866] = 1;
	v->a[81867] = sym_comment;
	v->a[81868] = actions(949);
	v->a[81869] = 1;
	v->a[81870] = sym_file_descriptor;
	v->a[81871] = actions(3397);
	v->a[81872] = 1;
	v->a[81873] = aux_sym_heredoc_redirect_token1;
	v->a[81874] = state(2059);
	v->a[81875] = 1;
	v->a[81876] = sym__heredoc_expression;
	v->a[81877] = actions(925);
	v->a[81878] = 2;
	v->a[81879] = anon_sym_AMP_AMP;
	small_parse_table_4094(v);
}

void	small_parse_table_4094(t_small_parse_table_array *v)
{
	v->a[81880] = anon_sym_PIPE_PIPE;
	v->a[81881] = actions(929);
	v->a[81882] = 2;
	v->a[81883] = anon_sym_LT_AMP_DASH;
	v->a[81884] = anon_sym_GT_AMP_DASH;
	v->a[81885] = state(1523);
	v->a[81886] = 2;
	v->a[81887] = sym_file_redirect;
	v->a[81888] = aux_sym_redirected_statement_repeat2;
	v->a[81889] = actions(927);
	v->a[81890] = 8;
	v->a[81891] = anon_sym_LT;
	v->a[81892] = anon_sym_GT;
	v->a[81893] = anon_sym_GT_GT;
	v->a[81894] = anon_sym_AMP_GT;
	v->a[81895] = anon_sym_AMP_GT_GT;
	v->a[81896] = anon_sym_LT_AMP;
	v->a[81897] = anon_sym_GT_AMP;
	v->a[81898] = anon_sym_GT_PIPE;
	v->a[81899] = 8;
	small_parse_table_4095(v);
}

/* EOF small_parse_table_818.c */
