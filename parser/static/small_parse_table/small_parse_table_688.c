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
	v->a[68800] = anon_sym_GT;
	v->a[68801] = anon_sym_GT_GT;
	v->a[68802] = anon_sym_AMP_GT;
	v->a[68803] = anon_sym_AMP_GT_GT;
	v->a[68804] = anon_sym_LT_AMP;
	v->a[68805] = anon_sym_GT_AMP;
	v->a[68806] = anon_sym_GT_PIPE;
	v->a[68807] = anon_sym_LT_AMP_DASH;
	v->a[68808] = anon_sym_GT_AMP_DASH;
	v->a[68809] = anon_sym_LT_LT;
	v->a[68810] = anon_sym_LT_LT_DASH;
	v->a[68811] = anon_sym_AMP;
	v->a[68812] = anon_sym_BQUOTE;
	v->a[68813] = anon_sym_SEMI;
	v->a[68814] = 8;
	v->a[68815] = actions(3);
	v->a[68816] = 1;
	v->a[68817] = sym_comment;
	v->a[68818] = actions(2308);
	v->a[68819] = 1;
	small_parse_table_3441(v);
}

void	small_parse_table_3441(t_small_parse_table_array *v)
{
	v->a[68820] = aux_sym_heredoc_redirect_token1;
	v->a[68821] = actions(2460);
	v->a[68822] = 1;
	v->a[68823] = sym_file_descriptor;
	v->a[68824] = actions(1062);
	v->a[68825] = 2;
	v->a[68826] = anon_sym_LT_LT;
	v->a[68827] = anon_sym_LT_LT_DASH;
	v->a[68828] = actions(2456);
	v->a[68829] = 2;
	v->a[68830] = anon_sym_LT_AMP_DASH;
	v->a[68831] = anon_sym_GT_AMP_DASH;
	v->a[68832] = state(1205);
	v->a[68833] = 3;
	v->a[68834] = sym_file_redirect;
	v->a[68835] = sym_heredoc_redirect;
	v->a[68836] = aux_sym_redirected_statement_repeat1;
	v->a[68837] = actions(2302);
	v->a[68838] = 6;
	v->a[68839] = anon_sym_PIPE;
	small_parse_table_3442(v);
}

void	small_parse_table_3442(t_small_parse_table_array *v)
{
	v->a[68840] = anon_sym_SEMI_SEMI;
	v->a[68841] = anon_sym_AMP_AMP;
	v->a[68842] = anon_sym_PIPE_PIPE;
	v->a[68843] = anon_sym_AMP;
	v->a[68844] = anon_sym_SEMI;
	v->a[68845] = actions(2454);
	v->a[68846] = 8;
	v->a[68847] = anon_sym_LT;
	v->a[68848] = anon_sym_GT;
	v->a[68849] = anon_sym_GT_GT;
	v->a[68850] = anon_sym_AMP_GT;
	v->a[68851] = anon_sym_AMP_GT_GT;
	v->a[68852] = anon_sym_LT_AMP;
	v->a[68853] = anon_sym_GT_AMP;
	v->a[68854] = anon_sym_GT_PIPE;
	v->a[68855] = 7;
	v->a[68856] = actions(3);
	v->a[68857] = 1;
	v->a[68858] = sym_comment;
	v->a[68859] = actions(2480);
	small_parse_table_3443(v);
}

void	small_parse_table_3443(t_small_parse_table_array *v)
{
	v->a[68860] = 1;
	v->a[68861] = aux_sym_heredoc_redirect_token1;
	v->a[68862] = actions(2492);
	v->a[68863] = 1;
	v->a[68864] = sym_file_descriptor;
	v->a[68865] = actions(2306);
	v->a[68866] = 2;
	v->a[68867] = anon_sym_LT_AMP_DASH;
	v->a[68868] = anon_sym_GT_AMP_DASH;
	v->a[68869] = state(1101);
	v->a[68870] = 2;
	v->a[68871] = sym_file_redirect;
	v->a[68872] = aux_sym_redirected_statement_repeat2;
	v->a[68873] = actions(2304);
	v->a[68874] = 8;
	v->a[68875] = anon_sym_LT;
	v->a[68876] = anon_sym_GT;
	v->a[68877] = anon_sym_GT_GT;
	v->a[68878] = anon_sym_AMP_GT;
	v->a[68879] = anon_sym_AMP_GT_GT;
	small_parse_table_3444(v);
}

void	small_parse_table_3444(t_small_parse_table_array *v)
{
	v->a[68880] = anon_sym_LT_AMP;
	v->a[68881] = anon_sym_GT_AMP;
	v->a[68882] = anon_sym_GT_PIPE;
	v->a[68883] = actions(2482);
	v->a[68884] = 9;
	v->a[68885] = anon_sym_esac;
	v->a[68886] = anon_sym_PIPE;
	v->a[68887] = anon_sym_SEMI_SEMI;
	v->a[68888] = anon_sym_AMP_AMP;
	v->a[68889] = anon_sym_PIPE_PIPE;
	v->a[68890] = anon_sym_LT_LT;
	v->a[68891] = anon_sym_LT_LT_DASH;
	v->a[68892] = anon_sym_AMP;
	v->a[68893] = anon_sym_SEMI;
	v->a[68894] = 3;
	v->a[68895] = actions(3);
	v->a[68896] = 1;
	v->a[68897] = sym_comment;
	v->a[68898] = actions(2528);
	v->a[68899] = 3;
	small_parse_table_3445(v);
}

/* EOF small_parse_table_688.c */
