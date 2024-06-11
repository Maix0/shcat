/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_688.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3440(t_small_parse_table_array *v)
{
	v->a[68800] = 1;
	v->a[68801] = anon_sym_BQUOTE;
	v->a[68802] = actions(2162);
	v->a[68803] = 1;
	v->a[68804] = aux_sym_heredoc_redirect_token1;
	v->a[68805] = actions(2164);
	v->a[68806] = 1;
	v->a[68807] = sym_file_descriptor;
	v->a[68808] = actions(861);
	v->a[68809] = 2;
	v->a[68810] = anon_sym_LT_LT;
	v->a[68811] = anon_sym_LT_LT_DASH;
	v->a[68812] = actions(1032);
	v->a[68813] = 2;
	v->a[68814] = anon_sym_AMP_AMP;
	v->a[68815] = anon_sym_PIPE_PIPE;
	v->a[68816] = actions(2160);
	v->a[68817] = 2;
	v->a[68818] = anon_sym_LT_AMP_DASH;
	v->a[68819] = anon_sym_GT_AMP_DASH;
	small_parse_table_3441(v);
}

void	small_parse_table_3441(t_small_parse_table_array *v)
{
	v->a[68820] = actions(1030);
	v->a[68821] = 3;
	v->a[68822] = anon_sym_SEMI_SEMI;
	v->a[68823] = anon_sym_AMP;
	v->a[68824] = anon_sym_SEMI;
	v->a[68825] = state(1297);
	v->a[68826] = 3;
	v->a[68827] = sym_file_redirect;
	v->a[68828] = sym_heredoc_redirect;
	v->a[68829] = aux_sym_redirected_statement_repeat1;
	v->a[68830] = actions(2158);
	v->a[68831] = 8;
	v->a[68832] = anon_sym_LT;
	v->a[68833] = anon_sym_GT;
	v->a[68834] = anon_sym_GT_GT;
	v->a[68835] = anon_sym_AMP_GT;
	v->a[68836] = anon_sym_AMP_GT_GT;
	v->a[68837] = anon_sym_LT_AMP;
	v->a[68838] = anon_sym_GT_AMP;
	v->a[68839] = anon_sym_GT_PIPE;
	small_parse_table_3442(v);
}

void	small_parse_table_3442(t_small_parse_table_array *v)
{
	v->a[68840] = 13;
	v->a[68841] = actions(3);
	v->a[68842] = 1;
	v->a[68843] = sym_comment;
	v->a[68844] = actions(807);
	v->a[68845] = 1;
	v->a[68846] = anon_sym_PIPE;
	v->a[68847] = actions(840);
	v->a[68848] = 1;
	v->a[68849] = anon_sym_RPAREN;
	v->a[68850] = actions(2083);
	v->a[68851] = 1;
	v->a[68852] = sym_file_descriptor;
	v->a[68853] = actions(2166);
	v->a[68854] = 1;
	v->a[68855] = anon_sym_SEMI_SEMI;
	v->a[68856] = actions(2168);
	v->a[68857] = 1;
	v->a[68858] = aux_sym_heredoc_redirect_token1;
	v->a[68859] = actions(2170);
	small_parse_table_3443(v);
}

void	small_parse_table_3443(t_small_parse_table_array *v)
{
	v->a[68860] = 1;
	v->a[68861] = anon_sym_AMP;
	v->a[68862] = actions(2172);
	v->a[68863] = 1;
	v->a[68864] = anon_sym_SEMI;
	v->a[68865] = actions(859);
	v->a[68866] = 2;
	v->a[68867] = anon_sym_AMP_AMP;
	v->a[68868] = anon_sym_PIPE_PIPE;
	v->a[68869] = actions(861);
	v->a[68870] = 2;
	v->a[68871] = anon_sym_LT_LT;
	v->a[68872] = anon_sym_LT_LT_DASH;
	v->a[68873] = actions(2079);
	v->a[68874] = 2;
	v->a[68875] = anon_sym_LT_AMP_DASH;
	v->a[68876] = anon_sym_GT_AMP_DASH;
	v->a[68877] = state(1283);
	v->a[68878] = 3;
	v->a[68879] = sym_file_redirect;
	small_parse_table_3444(v);
}

void	small_parse_table_3444(t_small_parse_table_array *v)
{
	v->a[68880] = sym_heredoc_redirect;
	v->a[68881] = aux_sym_redirected_statement_repeat1;
	v->a[68882] = actions(2077);
	v->a[68883] = 8;
	v->a[68884] = anon_sym_LT;
	v->a[68885] = anon_sym_GT;
	v->a[68886] = anon_sym_GT_GT;
	v->a[68887] = anon_sym_AMP_GT;
	v->a[68888] = anon_sym_AMP_GT_GT;
	v->a[68889] = anon_sym_LT_AMP;
	v->a[68890] = anon_sym_GT_AMP;
	v->a[68891] = anon_sym_GT_PIPE;
	v->a[68892] = 6;
	v->a[68893] = actions(3);
	v->a[68894] = 1;
	v->a[68895] = sym_comment;
	v->a[68896] = actions(2085);
	v->a[68897] = 1;
	v->a[68898] = aux_sym_concatenation_token1;
	v->a[68899] = actions(2174);
	small_parse_table_3445(v);
}

/* EOF small_parse_table_688.c */
