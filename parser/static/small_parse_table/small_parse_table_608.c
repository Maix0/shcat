/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_608.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3040(t_small_parse_table_array *v)
{
	v->a[60800] = anon_sym_AMP_AMP;
	v->a[60801] = anon_sym_PIPE_PIPE;
	v->a[60802] = anon_sym_LT_LT;
	v->a[60803] = anon_sym_LT_LT_DASH;
	v->a[60804] = anon_sym_AMP;
	v->a[60805] = anon_sym_BQUOTE;
	v->a[60806] = anon_sym_SEMI;
	v->a[60807] = 3;
	v->a[60808] = actions(3);
	v->a[60809] = 1;
	v->a[60810] = sym_comment;
	v->a[60811] = actions(2060);
	v->a[60812] = 3;
	v->a[60813] = sym_file_descriptor;
	v->a[60814] = ts_builtin_sym_end;
	v->a[60815] = aux_sym_heredoc_redirect_token1;
	v->a[60816] = actions(2062);
	v->a[60817] = 17;
	v->a[60818] = anon_sym_PIPE;
	v->a[60819] = anon_sym_RPAREN;
	small_parse_table_3041(v);
}

void	small_parse_table_3041(t_small_parse_table_array *v)
{
	v->a[60820] = anon_sym_SEMI_SEMI;
	v->a[60821] = anon_sym_AMP_AMP;
	v->a[60822] = anon_sym_PIPE_PIPE;
	v->a[60823] = anon_sym_LT;
	v->a[60824] = anon_sym_GT;
	v->a[60825] = anon_sym_GT_GT;
	v->a[60826] = anon_sym_LT_AMP;
	v->a[60827] = anon_sym_GT_AMP;
	v->a[60828] = anon_sym_GT_PIPE;
	v->a[60829] = anon_sym_LT_GT;
	v->a[60830] = anon_sym_LT_LT;
	v->a[60831] = anon_sym_LT_LT_DASH;
	v->a[60832] = anon_sym_AMP;
	v->a[60833] = anon_sym_BQUOTE;
	v->a[60834] = anon_sym_SEMI;
	v->a[60835] = 6;
	v->a[60836] = actions(3);
	v->a[60837] = 1;
	v->a[60838] = sym_comment;
	v->a[60839] = actions(2064);
	small_parse_table_3042(v);
}

void	small_parse_table_3042(t_small_parse_table_array *v)
{
	v->a[60840] = 1;
	v->a[60841] = sym_file_descriptor;
	v->a[60842] = actions(2038);
	v->a[60843] = 2;
	v->a[60844] = ts_builtin_sym_end;
	v->a[60845] = aux_sym_heredoc_redirect_token1;
	v->a[60846] = state(1142);
	v->a[60847] = 2;
	v->a[60848] = sym_file_redirect;
	v->a[60849] = aux_sym_redirected_statement_repeat2;
	v->a[60850] = actions(1861);
	v->a[60851] = 7;
	v->a[60852] = anon_sym_LT;
	v->a[60853] = anon_sym_GT;
	v->a[60854] = anon_sym_GT_GT;
	v->a[60855] = anon_sym_LT_AMP;
	v->a[60856] = anon_sym_GT_AMP;
	v->a[60857] = anon_sym_GT_PIPE;
	v->a[60858] = anon_sym_LT_GT;
	v->a[60859] = actions(2036);
	small_parse_table_3043(v);
}

void	small_parse_table_3043(t_small_parse_table_array *v)
{
	v->a[60860] = 8;
	v->a[60861] = anon_sym_PIPE;
	v->a[60862] = anon_sym_SEMI_SEMI;
	v->a[60863] = anon_sym_AMP_AMP;
	v->a[60864] = anon_sym_PIPE_PIPE;
	v->a[60865] = anon_sym_LT_LT;
	v->a[60866] = anon_sym_LT_LT_DASH;
	v->a[60867] = anon_sym_AMP;
	v->a[60868] = anon_sym_SEMI;
	v->a[60869] = 9;
	v->a[60870] = actions(3);
	v->a[60871] = 1;
	v->a[60872] = sym_comment;
	v->a[60873] = actions(1944);
	v->a[60874] = 1;
	v->a[60875] = aux_sym_heredoc_redirect_token1;
	v->a[60876] = actions(1946);
	v->a[60877] = 1;
	v->a[60878] = sym_file_descriptor;
	v->a[60879] = state(715);
	small_parse_table_3044(v);
}

void	small_parse_table_3044(t_small_parse_table_array *v)
{
	v->a[60880] = 1;
	v->a[60881] = sym_terminator;
	v->a[60882] = actions(700);
	v->a[60883] = 2;
	v->a[60884] = anon_sym_LT_LT;
	v->a[60885] = anon_sym_LT_LT_DASH;
	v->a[60886] = actions(914);
	v->a[60887] = 2;
	v->a[60888] = anon_sym_AMP_AMP;
	v->a[60889] = anon_sym_PIPE_PIPE;
	v->a[60890] = actions(1033);
	v->a[60891] = 3;
	v->a[60892] = anon_sym_SEMI_SEMI;
	v->a[60893] = anon_sym_AMP;
	v->a[60894] = anon_sym_SEMI;
	v->a[60895] = state(1134);
	v->a[60896] = 3;
	v->a[60897] = sym_file_redirect;
	v->a[60898] = sym_heredoc_redirect;
	v->a[60899] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3045(v);
}

/* EOF small_parse_table_608.c */
