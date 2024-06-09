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
	v->a[63800] = aux_sym_variable_assignments_repeat1;
	v->a[63801] = actions(2265);
	v->a[63802] = 19;
	v->a[63803] = anon_sym_PIPE;
	v->a[63804] = anon_sym_RPAREN;
	v->a[63805] = anon_sym_SEMI_SEMI;
	v->a[63806] = anon_sym_AMP_AMP;
	v->a[63807] = anon_sym_PIPE_PIPE;
	v->a[63808] = anon_sym_LT;
	v->a[63809] = anon_sym_GT;
	v->a[63810] = anon_sym_GT_GT;
	v->a[63811] = anon_sym_AMP_GT;
	v->a[63812] = anon_sym_AMP_GT_GT;
	v->a[63813] = anon_sym_LT_AMP;
	v->a[63814] = anon_sym_GT_AMP;
	v->a[63815] = anon_sym_GT_PIPE;
	v->a[63816] = anon_sym_LT_AMP_DASH;
	v->a[63817] = anon_sym_GT_AMP_DASH;
	v->a[63818] = anon_sym_LT_LT;
	v->a[63819] = anon_sym_LT_LT_DASH;
	small_parse_table_3191(v);
}

void	small_parse_table_3191(t_small_parse_table_array *v)
{
	v->a[63820] = anon_sym_AMP;
	v->a[63821] = anon_sym_SEMI;
	v->a[63822] = 11;
	v->a[63823] = actions(3);
	v->a[63824] = 1;
	v->a[63825] = sym_comment;
	v->a[63826] = actions(1002);
	v->a[63827] = 1;
	v->a[63828] = anon_sym_PIPE;
	v->a[63829] = actions(1073);
	v->a[63830] = 1;
	v->a[63831] = anon_sym_RPAREN;
	v->a[63832] = actions(2288);
	v->a[63833] = 1;
	v->a[63834] = aux_sym_heredoc_redirect_token1;
	v->a[63835] = actions(2290);
	v->a[63836] = 1;
	v->a[63837] = sym_file_descriptor;
	v->a[63838] = actions(1062);
	v->a[63839] = 2;
	small_parse_table_3192(v);
}

void	small_parse_table_3192(t_small_parse_table_array *v)
{
	v->a[63840] = anon_sym_LT_LT;
	v->a[63841] = anon_sym_LT_LT_DASH;
	v->a[63842] = actions(1079);
	v->a[63843] = 2;
	v->a[63844] = anon_sym_AMP_AMP;
	v->a[63845] = anon_sym_PIPE_PIPE;
	v->a[63846] = actions(2286);
	v->a[63847] = 2;
	v->a[63848] = anon_sym_LT_AMP_DASH;
	v->a[63849] = anon_sym_GT_AMP_DASH;
	v->a[63850] = actions(1089);
	v->a[63851] = 3;
	v->a[63852] = anon_sym_SEMI_SEMI;
	v->a[63853] = anon_sym_AMP;
	v->a[63854] = anon_sym_SEMI;
	v->a[63855] = state(1050);
	v->a[63856] = 3;
	v->a[63857] = sym_file_redirect;
	v->a[63858] = sym_heredoc_redirect;
	v->a[63859] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3193(v);
}

void	small_parse_table_3193(t_small_parse_table_array *v)
{
	v->a[63860] = actions(2284);
	v->a[63861] = 8;
	v->a[63862] = anon_sym_LT;
	v->a[63863] = anon_sym_GT;
	v->a[63864] = anon_sym_GT_GT;
	v->a[63865] = anon_sym_AMP_GT;
	v->a[63866] = anon_sym_AMP_GT_GT;
	v->a[63867] = anon_sym_LT_AMP;
	v->a[63868] = anon_sym_GT_AMP;
	v->a[63869] = anon_sym_GT_PIPE;
	v->a[63870] = 6;
	v->a[63871] = actions(3);
	v->a[63872] = 1;
	v->a[63873] = sym_comment;
	v->a[63874] = actions(2292);
	v->a[63875] = 1;
	v->a[63876] = aux_sym_concatenation_token1;
	v->a[63877] = actions(2295);
	v->a[63878] = 1;
	v->a[63879] = sym__concat;
	small_parse_table_3194(v);
}

void	small_parse_table_3194(t_small_parse_table_array *v)
{
	v->a[63880] = state(1032);
	v->a[63881] = 1;
	v->a[63882] = aux_sym_concatenation_repeat1;
	v->a[63883] = actions(1112);
	v->a[63884] = 2;
	v->a[63885] = sym_file_descriptor;
	v->a[63886] = aux_sym_heredoc_redirect_token1;
	v->a[63887] = actions(1114);
	v->a[63888] = 19;
	v->a[63889] = anon_sym_esac;
	v->a[63890] = anon_sym_PIPE;
	v->a[63891] = anon_sym_SEMI_SEMI;
	v->a[63892] = anon_sym_AMP_AMP;
	v->a[63893] = anon_sym_PIPE_PIPE;
	v->a[63894] = anon_sym_LT;
	v->a[63895] = anon_sym_GT;
	v->a[63896] = anon_sym_GT_GT;
	v->a[63897] = anon_sym_AMP_GT;
	v->a[63898] = anon_sym_AMP_GT_GT;
	v->a[63899] = anon_sym_LT_AMP;
	small_parse_table_3195(v);
}

/* EOF small_parse_table_638.c */
