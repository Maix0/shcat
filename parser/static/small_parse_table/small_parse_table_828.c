/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_828.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4140(t_small_parse_table_array *v)
{
	v->a[82800] = 8;
	v->a[82801] = actions(3);
	v->a[82802] = 1;
	v->a[82803] = sym_comment;
	v->a[82804] = actions(2964);
	v->a[82805] = 1;
	v->a[82806] = sym_file_descriptor;
	v->a[82807] = actions(3002);
	v->a[82808] = 1;
	v->a[82809] = aux_sym_heredoc_redirect_token1;
	v->a[82810] = actions(861);
	v->a[82811] = 2;
	v->a[82812] = anon_sym_LT_LT;
	v->a[82813] = anon_sym_LT_LT_DASH;
	v->a[82814] = actions(1500);
	v->a[82815] = 2;
	v->a[82816] = anon_sym_AMP_AMP;
	v->a[82817] = anon_sym_PIPE_PIPE;
	v->a[82818] = actions(2962);
	v->a[82819] = 2;
	small_parse_table_4141(v);
}

void	small_parse_table_4141(t_small_parse_table_array *v)
{
	v->a[82820] = anon_sym_LT_AMP_DASH;
	v->a[82821] = anon_sym_GT_AMP_DASH;
	v->a[82822] = state(1546);
	v->a[82823] = 3;
	v->a[82824] = sym_file_redirect;
	v->a[82825] = sym_heredoc_redirect;
	v->a[82826] = aux_sym_redirected_statement_repeat1;
	v->a[82827] = actions(2960);
	v->a[82828] = 8;
	v->a[82829] = anon_sym_LT;
	v->a[82830] = anon_sym_GT;
	v->a[82831] = anon_sym_GT_GT;
	v->a[82832] = anon_sym_AMP_GT;
	v->a[82833] = anon_sym_AMP_GT_GT;
	v->a[82834] = anon_sym_LT_AMP;
	v->a[82835] = anon_sym_GT_AMP;
	v->a[82836] = anon_sym_GT_PIPE;
	v->a[82837] = 3;
	v->a[82838] = actions(1094);
	v->a[82839] = 1;
	small_parse_table_4142(v);
}

void	small_parse_table_4142(t_small_parse_table_array *v)
{
	v->a[82840] = sym_comment;
	v->a[82841] = actions(1203);
	v->a[82842] = 7;
	v->a[82843] = anon_sym_PIPE;
	v->a[82844] = anon_sym_LT;
	v->a[82845] = anon_sym_GT;
	v->a[82846] = anon_sym_AMP_GT;
	v->a[82847] = anon_sym_LT_AMP;
	v->a[82848] = anon_sym_GT_AMP;
	v->a[82849] = anon_sym_LT_LT;
	v->a[82850] = actions(1205);
	v->a[82851] = 11;
	v->a[82852] = sym_file_descriptor;
	v->a[82853] = sym__concat;
	v->a[82854] = anon_sym_AMP_AMP;
	v->a[82855] = anon_sym_PIPE_PIPE;
	v->a[82856] = anon_sym_GT_GT;
	v->a[82857] = anon_sym_AMP_GT_GT;
	v->a[82858] = anon_sym_GT_PIPE;
	v->a[82859] = anon_sym_LT_AMP_DASH;
	small_parse_table_4143(v);
}

void	small_parse_table_4143(t_small_parse_table_array *v)
{
	v->a[82860] = anon_sym_GT_AMP_DASH;
	v->a[82861] = anon_sym_LT_LT_DASH;
	v->a[82862] = aux_sym_concatenation_token1;
	v->a[82863] = 3;
	v->a[82864] = actions(1094);
	v->a[82865] = 1;
	v->a[82866] = sym_comment;
	v->a[82867] = actions(1074);
	v->a[82868] = 7;
	v->a[82869] = anon_sym_PIPE;
	v->a[82870] = anon_sym_LT;
	v->a[82871] = anon_sym_GT;
	v->a[82872] = anon_sym_AMP_GT;
	v->a[82873] = anon_sym_LT_AMP;
	v->a[82874] = anon_sym_GT_AMP;
	v->a[82875] = anon_sym_LT_LT;
	v->a[82876] = actions(1076);
	v->a[82877] = 11;
	v->a[82878] = sym_file_descriptor;
	v->a[82879] = sym__concat;
	small_parse_table_4144(v);
}

void	small_parse_table_4144(t_small_parse_table_array *v)
{
	v->a[82880] = anon_sym_AMP_AMP;
	v->a[82881] = anon_sym_PIPE_PIPE;
	v->a[82882] = anon_sym_GT_GT;
	v->a[82883] = anon_sym_AMP_GT_GT;
	v->a[82884] = anon_sym_GT_PIPE;
	v->a[82885] = anon_sym_LT_AMP_DASH;
	v->a[82886] = anon_sym_GT_AMP_DASH;
	v->a[82887] = anon_sym_LT_LT_DASH;
	v->a[82888] = aux_sym_concatenation_token1;
	v->a[82889] = 8;
	v->a[82890] = actions(1094);
	v->a[82891] = 1;
	v->a[82892] = sym_comment;
	v->a[82893] = actions(3066);
	v->a[82894] = 1;
	v->a[82895] = sym_file_descriptor;
	v->a[82896] = actions(2683);
	v->a[82897] = 2;
	v->a[82898] = anon_sym_PIPE;
	v->a[82899] = anon_sym_LT_LT;
	small_parse_table_4145(v);
}

/* EOF small_parse_table_828.c */
