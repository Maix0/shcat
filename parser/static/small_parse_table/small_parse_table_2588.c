/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2588.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12940(t_small_parse_table_array *v)
{
	v->a[258800] = actions(8050);
	v->a[258801] = 3;
	v->a[258802] = sym__external_expansion_sym_hash;
	v->a[258803] = sym__external_expansion_sym_bang;
	v->a[258804] = sym__external_expansion_sym_equal;
	v->a[258805] = actions(11754);
	v->a[258806] = 4;
	v->a[258807] = anon_sym_DASH;
	v->a[258808] = anon_sym_STAR;
	v->a[258809] = anon_sym_QMARK;
	v->a[258810] = anon_sym_AT2;
	v->a[258811] = actions(11756);
	v->a[258812] = 5;
	v->a[258813] = anon_sym_BANG;
	v->a[258814] = anon_sym_DOLLAR;
	v->a[258815] = anon_sym_POUND;
	v->a[258816] = anon_sym_0;
	v->a[258817] = anon_sym__;
	v->a[258818] = 8;
	v->a[258819] = actions(3);
	small_parse_table_12941(v);
}

void	small_parse_table_12941(t_small_parse_table_array *v)
{
	v->a[258820] = 1;
	v->a[258821] = sym_comment;
	v->a[258822] = actions(11455);
	v->a[258823] = 1;
	v->a[258824] = aux_sym_heredoc_redirect_token1;
	v->a[258825] = actions(11856);
	v->a[258826] = 1;
	v->a[258827] = sym_file_descriptor;
	v->a[258828] = actions(4692);
	v->a[258829] = 2;
	v->a[258830] = anon_sym_LT_LT;
	v->a[258831] = anon_sym_LT_LT_DASH;
	v->a[258832] = actions(11487);
	v->a[258833] = 2;
	v->a[258834] = anon_sym_LT_AMP_DASH;
	v->a[258835] = anon_sym_GT_AMP_DASH;
	v->a[258836] = state(4725);
	v->a[258837] = 3;
	v->a[258838] = sym_file_redirect;
	v->a[258839] = sym_heredoc_redirect;
	small_parse_table_12942(v);
}

void	small_parse_table_12942(t_small_parse_table_array *v)
{
	v->a[258840] = aux_sym_redirected_statement_repeat1;
	v->a[258841] = actions(11453);
	v->a[258842] = 8;
	v->a[258843] = anon_sym_SEMI;
	v->a[258844] = anon_sym_PIPE_PIPE;
	v->a[258845] = anon_sym_AMP_AMP;
	v->a[258846] = anon_sym_PIPE;
	v->a[258847] = anon_sym_AMP;
	v->a[258848] = anon_sym_SEMI_SEMI;
	v->a[258849] = anon_sym_PIPE_AMP;
	v->a[258850] = anon_sym_BQUOTE;
	v->a[258851] = actions(11485);
	v->a[258852] = 8;
	v->a[258853] = anon_sym_LT;
	v->a[258854] = anon_sym_GT;
	v->a[258855] = anon_sym_GT_GT;
	v->a[258856] = anon_sym_AMP_GT;
	v->a[258857] = anon_sym_AMP_GT_GT;
	v->a[258858] = anon_sym_LT_AMP;
	v->a[258859] = anon_sym_GT_AMP;
	small_parse_table_12943(v);
}

void	small_parse_table_12943(t_small_parse_table_array *v)
{
	v->a[258860] = anon_sym_GT_PIPE;
	v->a[258861] = 6;
	v->a[258862] = actions(3);
	v->a[258863] = 1;
	v->a[258864] = sym_comment;
	v->a[258865] = actions(11651);
	v->a[258866] = 1;
	v->a[258867] = aux_sym_concatenation_token1;
	v->a[258868] = actions(11653);
	v->a[258869] = 1;
	v->a[258870] = sym__concat;
	v->a[258871] = state(4634);
	v->a[258872] = 1;
	v->a[258873] = aux_sym_concatenation_repeat1;
	v->a[258874] = actions(4566);
	v->a[258875] = 2;
	v->a[258876] = sym_file_descriptor;
	v->a[258877] = aux_sym_heredoc_redirect_token1;
	v->a[258878] = actions(4564);
	v->a[258879] = 20;
	small_parse_table_12944(v);
}

void	small_parse_table_12944(t_small_parse_table_array *v)
{
	v->a[258880] = anon_sym_SEMI;
	v->a[258881] = anon_sym_PIPE_PIPE;
	v->a[258882] = anon_sym_AMP_AMP;
	v->a[258883] = anon_sym_PIPE;
	v->a[258884] = anon_sym_AMP;
	v->a[258885] = anon_sym_LT;
	v->a[258886] = anon_sym_GT;
	v->a[258887] = anon_sym_LT_LT;
	v->a[258888] = anon_sym_GT_GT;
	v->a[258889] = anon_sym_RPAREN;
	v->a[258890] = anon_sym_SEMI_SEMI;
	v->a[258891] = anon_sym_PIPE_AMP;
	v->a[258892] = anon_sym_AMP_GT;
	v->a[258893] = anon_sym_AMP_GT_GT;
	v->a[258894] = anon_sym_LT_AMP;
	v->a[258895] = anon_sym_GT_AMP;
	v->a[258896] = anon_sym_GT_PIPE;
	v->a[258897] = anon_sym_LT_AMP_DASH;
	v->a[258898] = anon_sym_GT_AMP_DASH;
	v->a[258899] = anon_sym_LT_LT_DASH;
	small_parse_table_12945(v);
}

/* EOF small_parse_table_2588.c */
