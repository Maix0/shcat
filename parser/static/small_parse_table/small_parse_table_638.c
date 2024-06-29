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
	v->a[63800] = 2;
	v->a[63801] = anon_sym_esac;
	v->a[63802] = anon_sym_SEMI_SEMI;
	v->a[63803] = actions(768);
	v->a[63804] = 2;
	v->a[63805] = anon_sym_AMP_AMP;
	v->a[63806] = anon_sym_PIPE_PIPE;
	v->a[63807] = actions(770);
	v->a[63808] = 2;
	v->a[63809] = anon_sym_LT_LT;
	v->a[63810] = anon_sym_LT_LT_DASH;
	v->a[63811] = actions(772);
	v->a[63812] = 2;
	v->a[63813] = anon_sym_AMP;
	v->a[63814] = anon_sym_SEMI;
	v->a[63815] = actions(2001);
	v->a[63816] = 2;
	v->a[63817] = anon_sym_LT_AMP_DASH;
	v->a[63818] = anon_sym_GT_AMP_DASH;
	v->a[63819] = state(1123);
	small_parse_table_3191(v);
}

void	small_parse_table_3191(t_small_parse_table_array *v)
{
	v->a[63820] = 3;
	v->a[63821] = sym_file_redirect;
	v->a[63822] = sym_heredoc_redirect;
	v->a[63823] = aux_sym_redirected_statement_repeat1;
	v->a[63824] = actions(1999);
	v->a[63825] = 8;
	v->a[63826] = anon_sym_LT;
	v->a[63827] = anon_sym_GT;
	v->a[63828] = anon_sym_GT_GT;
	v->a[63829] = anon_sym_AMP_GT;
	v->a[63830] = anon_sym_AMP_GT_GT;
	v->a[63831] = anon_sym_LT_AMP;
	v->a[63832] = anon_sym_GT_AMP;
	v->a[63833] = anon_sym_GT_PIPE;
	v->a[63834] = 12;
	v->a[63835] = actions(3);
	v->a[63836] = 1;
	v->a[63837] = sym_comment;
	v->a[63838] = actions(766);
	v->a[63839] = 1;
	small_parse_table_3192(v);
}

void	small_parse_table_3192(t_small_parse_table_array *v)
{
	v->a[63840] = anon_sym_PIPE;
	v->a[63841] = actions(809);
	v->a[63842] = 1;
	v->a[63843] = anon_sym_RPAREN;
	v->a[63844] = actions(2031);
	v->a[63845] = 1;
	v->a[63846] = aux_sym_heredoc_redirect_token1;
	v->a[63847] = actions(2043);
	v->a[63848] = 1;
	v->a[63849] = sym_file_descriptor;
	v->a[63850] = state(728);
	v->a[63851] = 1;
	v->a[63852] = sym_terminator;
	v->a[63853] = actions(802);
	v->a[63854] = 2;
	v->a[63855] = anon_sym_AMP_AMP;
	v->a[63856] = anon_sym_PIPE_PIPE;
	v->a[63857] = actions(804);
	v->a[63858] = 2;
	v->a[63859] = anon_sym_LT_LT;
	small_parse_table_3193(v);
}

void	small_parse_table_3193(t_small_parse_table_array *v)
{
	v->a[63860] = anon_sym_LT_LT_DASH;
	v->a[63861] = actions(2041);
	v->a[63862] = 2;
	v->a[63863] = anon_sym_LT_AMP_DASH;
	v->a[63864] = anon_sym_GT_AMP_DASH;
	v->a[63865] = actions(800);
	v->a[63866] = 3;
	v->a[63867] = anon_sym_SEMI_SEMI;
	v->a[63868] = anon_sym_AMP;
	v->a[63869] = anon_sym_SEMI;
	v->a[63870] = state(1137);
	v->a[63871] = 3;
	v->a[63872] = sym_file_redirect;
	v->a[63873] = sym_heredoc_redirect;
	v->a[63874] = aux_sym_redirected_statement_repeat1;
	v->a[63875] = actions(2039);
	v->a[63876] = 8;
	v->a[63877] = anon_sym_LT;
	v->a[63878] = anon_sym_GT;
	v->a[63879] = anon_sym_GT_GT;
	small_parse_table_3194(v);
}

void	small_parse_table_3194(t_small_parse_table_array *v)
{
	v->a[63880] = anon_sym_AMP_GT;
	v->a[63881] = anon_sym_AMP_GT_GT;
	v->a[63882] = anon_sym_LT_AMP;
	v->a[63883] = anon_sym_GT_AMP;
	v->a[63884] = anon_sym_GT_PIPE;
	v->a[63885] = 12;
	v->a[63886] = actions(3);
	v->a[63887] = 1;
	v->a[63888] = sym_comment;
	v->a[63889] = actions(766);
	v->a[63890] = 1;
	v->a[63891] = anon_sym_PIPE;
	v->a[63892] = actions(2003);
	v->a[63893] = 1;
	v->a[63894] = aux_sym_heredoc_redirect_token1;
	v->a[63895] = actions(2005);
	v->a[63896] = 1;
	v->a[63897] = sym_file_descriptor;
	v->a[63898] = state(753);
	v->a[63899] = 1;
	small_parse_table_3195(v);
}

/* EOF small_parse_table_638.c */
