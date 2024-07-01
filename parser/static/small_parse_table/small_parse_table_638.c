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
	v->a[63800] = anon_sym_GT_PIPE;
	v->a[63801] = anon_sym_LT_GT;
	v->a[63802] = anon_sym_LT_LT;
	v->a[63803] = anon_sym_LT_LT_DASH;
	v->a[63804] = anon_sym_AMP;
	v->a[63805] = anon_sym_SEMI;
	v->a[63806] = 5;
	v->a[63807] = actions(3);
	v->a[63808] = 1;
	v->a[63809] = sym_comment;
	v->a[63810] = actions(2277);
	v->a[63811] = 1;
	v->a[63812] = anon_sym_PIPE;
	v->a[63813] = state(1202);
	v->a[63814] = 1;
	v->a[63815] = aux_sym_pipeline_repeat1;
	v->a[63816] = actions(1974);
	v->a[63817] = 2;
	v->a[63818] = sym_file_descriptor;
	v->a[63819] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3191(v);
}

void	small_parse_table_3191(t_small_parse_table_array *v)
{
	v->a[63820] = actions(1979);
	v->a[63821] = 15;
	v->a[63822] = anon_sym_RPAREN;
	v->a[63823] = anon_sym_SEMI_SEMI;
	v->a[63824] = anon_sym_AMP_AMP;
	v->a[63825] = anon_sym_PIPE_PIPE;
	v->a[63826] = anon_sym_LT;
	v->a[63827] = anon_sym_GT;
	v->a[63828] = anon_sym_GT_GT;
	v->a[63829] = anon_sym_LT_AMP;
	v->a[63830] = anon_sym_GT_AMP;
	v->a[63831] = anon_sym_GT_PIPE;
	v->a[63832] = anon_sym_LT_GT;
	v->a[63833] = anon_sym_LT_LT;
	v->a[63834] = anon_sym_LT_LT_DASH;
	v->a[63835] = anon_sym_AMP;
	v->a[63836] = anon_sym_SEMI;
	v->a[63837] = 6;
	v->a[63838] = actions(3);
	v->a[63839] = 1;
	small_parse_table_3192(v);
}

void	small_parse_table_3192(t_small_parse_table_array *v)
{
	v->a[63840] = sym_comment;
	v->a[63841] = actions(2051);
	v->a[63842] = 1;
	v->a[63843] = aux_sym_heredoc_redirect_token1;
	v->a[63844] = actions(2264);
	v->a[63845] = 1;
	v->a[63846] = sym_file_descriptor;
	v->a[63847] = state(1204);
	v->a[63848] = 2;
	v->a[63849] = sym_file_redirect;
	v->a[63850] = aux_sym_redirected_statement_repeat2;
	v->a[63851] = actions(1887);
	v->a[63852] = 7;
	v->a[63853] = anon_sym_LT;
	v->a[63854] = anon_sym_GT;
	v->a[63855] = anon_sym_GT_GT;
	v->a[63856] = anon_sym_LT_AMP;
	v->a[63857] = anon_sym_GT_AMP;
	v->a[63858] = anon_sym_GT_PIPE;
	v->a[63859] = anon_sym_LT_GT;
	small_parse_table_3193(v);
}

void	small_parse_table_3193(t_small_parse_table_array *v)
{
	v->a[63860] = actions(2053);
	v->a[63861] = 8;
	v->a[63862] = anon_sym_PIPE;
	v->a[63863] = anon_sym_SEMI_SEMI;
	v->a[63864] = anon_sym_AMP_AMP;
	v->a[63865] = anon_sym_PIPE_PIPE;
	v->a[63866] = anon_sym_LT_LT;
	v->a[63867] = anon_sym_LT_LT_DASH;
	v->a[63868] = anon_sym_AMP;
	v->a[63869] = anon_sym_SEMI;
	v->a[63870] = 6;
	v->a[63871] = actions(3);
	v->a[63872] = 1;
	v->a[63873] = sym_comment;
	v->a[63874] = actions(2001);
	v->a[63875] = 1;
	v->a[63876] = aux_sym_heredoc_redirect_token1;
	v->a[63877] = actions(2283);
	v->a[63878] = 1;
	v->a[63879] = sym_file_descriptor;
	small_parse_table_3194(v);
}

void	small_parse_table_3194(t_small_parse_table_array *v)
{
	v->a[63880] = state(1204);
	v->a[63881] = 2;
	v->a[63882] = sym_file_redirect;
	v->a[63883] = aux_sym_redirected_statement_repeat2;
	v->a[63884] = actions(2280);
	v->a[63885] = 7;
	v->a[63886] = anon_sym_LT;
	v->a[63887] = anon_sym_GT;
	v->a[63888] = anon_sym_GT_GT;
	v->a[63889] = anon_sym_LT_AMP;
	v->a[63890] = anon_sym_GT_AMP;
	v->a[63891] = anon_sym_GT_PIPE;
	v->a[63892] = anon_sym_LT_GT;
	v->a[63893] = actions(2003);
	v->a[63894] = 8;
	v->a[63895] = anon_sym_PIPE;
	v->a[63896] = anon_sym_SEMI_SEMI;
	v->a[63897] = anon_sym_AMP_AMP;
	v->a[63898] = anon_sym_PIPE_PIPE;
	v->a[63899] = anon_sym_LT_LT;
	small_parse_table_3195(v);
}

/* EOF small_parse_table_638.c */
