/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1028.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5140(t_small_parse_table_array *v)
{
	v->a[102800] = 1;
	v->a[102801] = sym_comment;
	v->a[102802] = actions(5157);
	v->a[102803] = 1;
	v->a[102804] = aux_sym_heredoc_redirect_token1;
	v->a[102805] = actions(5403);
	v->a[102806] = 1;
	v->a[102807] = sym_file_descriptor;
	v->a[102808] = actions(2945);
	v->a[102809] = 2;
	v->a[102810] = anon_sym_LT_LT;
	v->a[102811] = anon_sym_LT_LT_DASH;
	v->a[102812] = actions(5401);
	v->a[102813] = 2;
	v->a[102814] = anon_sym_LT_AMP_DASH;
	v->a[102815] = anon_sym_GT_AMP_DASH;
	v->a[102816] = state(2064);
	v->a[102817] = 3;
	v->a[102818] = sym_file_redirect;
	v->a[102819] = sym_heredoc_redirect;
	small_parse_table_5141(v);
}

void	small_parse_table_5141(t_small_parse_table_array *v)
{
	v->a[102820] = aux_sym_redirected_statement_repeat1;
	v->a[102821] = actions(5151);
	v->a[102822] = 8;
	v->a[102823] = anon_sym_PIPE;
	v->a[102824] = anon_sym_SEMI_SEMI;
	v->a[102825] = anon_sym_PIPE_AMP;
	v->a[102826] = anon_sym_AMP_AMP;
	v->a[102827] = anon_sym_PIPE_PIPE;
	v->a[102828] = anon_sym_AMP;
	v->a[102829] = anon_sym_BQUOTE;
	v->a[102830] = anon_sym_SEMI;
	v->a[102831] = actions(5399);
	v->a[102832] = 8;
	v->a[102833] = anon_sym_LT;
	v->a[102834] = anon_sym_GT;
	v->a[102835] = anon_sym_GT_GT;
	v->a[102836] = anon_sym_AMP_GT;
	v->a[102837] = anon_sym_AMP_GT_GT;
	v->a[102838] = anon_sym_LT_AMP;
	v->a[102839] = anon_sym_GT_AMP;
	small_parse_table_5142(v);
}

void	small_parse_table_5142(t_small_parse_table_array *v)
{
	v->a[102840] = anon_sym_GT_PIPE;
	v->a[102841] = 3;
	v->a[102842] = actions(3);
	v->a[102843] = 1;
	v->a[102844] = sym_comment;
	v->a[102845] = actions(2719);
	v->a[102846] = 4;
	v->a[102847] = sym_file_descriptor;
	v->a[102848] = sym_variable_name;
	v->a[102849] = ts_builtin_sym_end;
	v->a[102850] = aux_sym_heredoc_redirect_token1;
	v->a[102851] = actions(2717);
	v->a[102852] = 21;
	v->a[102853] = anon_sym_PIPE;
	v->a[102854] = anon_sym_RPAREN;
	v->a[102855] = anon_sym_SEMI_SEMI;
	v->a[102856] = anon_sym_PIPE_AMP;
	v->a[102857] = anon_sym_AMP_AMP;
	v->a[102858] = anon_sym_PIPE_PIPE;
	v->a[102859] = anon_sym_LT;
	small_parse_table_5143(v);
}

void	small_parse_table_5143(t_small_parse_table_array *v)
{
	v->a[102860] = anon_sym_GT;
	v->a[102861] = anon_sym_GT_GT;
	v->a[102862] = anon_sym_AMP_GT;
	v->a[102863] = anon_sym_AMP_GT_GT;
	v->a[102864] = anon_sym_LT_AMP;
	v->a[102865] = anon_sym_GT_AMP;
	v->a[102866] = anon_sym_GT_PIPE;
	v->a[102867] = anon_sym_LT_AMP_DASH;
	v->a[102868] = anon_sym_GT_AMP_DASH;
	v->a[102869] = anon_sym_LT_LT;
	v->a[102870] = anon_sym_LT_LT_DASH;
	v->a[102871] = anon_sym_AMP;
	v->a[102872] = anon_sym_BQUOTE;
	v->a[102873] = anon_sym_SEMI;
	v->a[102874] = 3;
	v->a[102875] = actions(3);
	v->a[102876] = 1;
	v->a[102877] = sym_comment;
	v->a[102878] = actions(3020);
	v->a[102879] = 3;
	small_parse_table_5144(v);
}

void	small_parse_table_5144(t_small_parse_table_array *v)
{
	v->a[102880] = sym_file_descriptor;
	v->a[102881] = sym__concat;
	v->a[102882] = aux_sym_heredoc_redirect_token1;
	v->a[102883] = actions(3018);
	v->a[102884] = 22;
	v->a[102885] = anon_sym_PIPE;
	v->a[102886] = anon_sym_SEMI_SEMI;
	v->a[102887] = anon_sym_SEMI_AMP;
	v->a[102888] = anon_sym_SEMI_SEMI_AMP;
	v->a[102889] = anon_sym_PIPE_AMP;
	v->a[102890] = anon_sym_AMP_AMP;
	v->a[102891] = anon_sym_PIPE_PIPE;
	v->a[102892] = anon_sym_LT;
	v->a[102893] = anon_sym_GT;
	v->a[102894] = anon_sym_GT_GT;
	v->a[102895] = anon_sym_AMP_GT;
	v->a[102896] = anon_sym_AMP_GT_GT;
	v->a[102897] = anon_sym_LT_AMP;
	v->a[102898] = anon_sym_GT_AMP;
	v->a[102899] = anon_sym_GT_PIPE;
	small_parse_table_5145(v);
}

/* EOF small_parse_table_1028.c */
