/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_638.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3190(t_small_parse_table_array *v)
{
	v->a[63800] = anon_sym_PIPE_PIPE;
	v->a[63801] = anon_sym_LT;
	v->a[63802] = anon_sym_GT;
	v->a[63803] = anon_sym_GT_GT;
	v->a[63804] = anon_sym_LT_AMP;
	v->a[63805] = anon_sym_GT_AMP;
	v->a[63806] = anon_sym_GT_PIPE;
	v->a[63807] = anon_sym_LT_GT;
	v->a[63808] = anon_sym_LT_LT;
	v->a[63809] = anon_sym_LT_LT_DASH;
	v->a[63810] = anon_sym_AMP;
	v->a[63811] = anon_sym_SEMI;
	v->a[63812] = 6;
	v->a[63813] = actions(3);
	v->a[63814] = 1;
	v->a[63815] = sym_comment;
	v->a[63816] = actions(2038);
	v->a[63817] = 1;
	v->a[63818] = aux_sym_heredoc_redirect_token1;
	v->a[63819] = actions(2301);
	small_parse_table_3191(v);
}

void	small_parse_table_3191(t_small_parse_table_array *v)
{
	v->a[63820] = 1;
	v->a[63821] = sym_file_descriptor;
	v->a[63822] = state(1204);
	v->a[63823] = 2;
	v->a[63824] = sym_file_redirect;
	v->a[63825] = aux_sym_redirected_statement_repeat2;
	v->a[63826] = actions(1942);
	v->a[63827] = 7;
	v->a[63828] = anon_sym_LT;
	v->a[63829] = anon_sym_GT;
	v->a[63830] = anon_sym_GT_GT;
	v->a[63831] = anon_sym_LT_AMP;
	v->a[63832] = anon_sym_GT_AMP;
	v->a[63833] = anon_sym_GT_PIPE;
	v->a[63834] = anon_sym_LT_GT;
	v->a[63835] = actions(2036);
	v->a[63836] = 8;
	v->a[63837] = anon_sym_PIPE;
	v->a[63838] = anon_sym_SEMI_SEMI;
	v->a[63839] = anon_sym_AMP_AMP;
	small_parse_table_3192(v);
}

void	small_parse_table_3192(t_small_parse_table_array *v)
{
	v->a[63840] = anon_sym_PIPE_PIPE;
	v->a[63841] = anon_sym_LT_LT;
	v->a[63842] = anon_sym_LT_LT_DASH;
	v->a[63843] = anon_sym_AMP;
	v->a[63844] = anon_sym_SEMI;
	v->a[63845] = 5;
	v->a[63846] = actions(3);
	v->a[63847] = 1;
	v->a[63848] = sym_comment;
	v->a[63849] = actions(2303);
	v->a[63850] = 1;
	v->a[63851] = anon_sym_PIPE;
	v->a[63852] = state(1198);
	v->a[63853] = 1;
	v->a[63854] = aux_sym_pipeline_repeat1;
	v->a[63855] = actions(2307);
	v->a[63856] = 2;
	v->a[63857] = sym_file_descriptor;
	v->a[63858] = aux_sym_heredoc_redirect_token1;
	v->a[63859] = actions(2305);
	small_parse_table_3193(v);
}

void	small_parse_table_3193(t_small_parse_table_array *v)
{
	v->a[63860] = 15;
	v->a[63861] = anon_sym_SEMI_SEMI;
	v->a[63862] = anon_sym_AMP_AMP;
	v->a[63863] = anon_sym_PIPE_PIPE;
	v->a[63864] = anon_sym_LT;
	v->a[63865] = anon_sym_GT;
	v->a[63866] = anon_sym_GT_GT;
	v->a[63867] = anon_sym_LT_AMP;
	v->a[63868] = anon_sym_GT_AMP;
	v->a[63869] = anon_sym_GT_PIPE;
	v->a[63870] = anon_sym_LT_GT;
	v->a[63871] = anon_sym_LT_LT;
	v->a[63872] = anon_sym_LT_LT_DASH;
	v->a[63873] = anon_sym_AMP;
	v->a[63874] = anon_sym_BQUOTE;
	v->a[63875] = anon_sym_SEMI;
	v->a[63876] = 5;
	v->a[63877] = actions(3);
	v->a[63878] = 1;
	v->a[63879] = sym_comment;
	small_parse_table_3194(v);
}

void	small_parse_table_3194(t_small_parse_table_array *v)
{
	v->a[63880] = actions(2309);
	v->a[63881] = 1;
	v->a[63882] = anon_sym_PIPE;
	v->a[63883] = state(1206);
	v->a[63884] = 1;
	v->a[63885] = aux_sym_pipeline_repeat1;
	v->a[63886] = actions(2307);
	v->a[63887] = 3;
	v->a[63888] = sym_file_descriptor;
	v->a[63889] = ts_builtin_sym_end;
	v->a[63890] = aux_sym_heredoc_redirect_token1;
	v->a[63891] = actions(2305);
	v->a[63892] = 14;
	v->a[63893] = anon_sym_SEMI_SEMI;
	v->a[63894] = anon_sym_AMP_AMP;
	v->a[63895] = anon_sym_PIPE_PIPE;
	v->a[63896] = anon_sym_LT;
	v->a[63897] = anon_sym_GT;
	v->a[63898] = anon_sym_GT_GT;
	v->a[63899] = anon_sym_LT_AMP;
	small_parse_table_3195(v);
}

/* EOF small_parse_table_638.c */
