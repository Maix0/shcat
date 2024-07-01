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
	v->a[60800] = anon_sym_LT;
	v->a[60801] = anon_sym_GT;
	v->a[60802] = anon_sym_GT_GT;
	v->a[60803] = anon_sym_LT_AMP;
	v->a[60804] = anon_sym_GT_AMP;
	v->a[60805] = anon_sym_GT_PIPE;
	v->a[60806] = 12;
	v->a[60807] = actions(3);
	v->a[60808] = 1;
	v->a[60809] = sym_comment;
	v->a[60810] = actions(682);
	v->a[60811] = 1;
	v->a[60812] = anon_sym_PIPE;
	v->a[60813] = actions(695);
	v->a[60814] = 1;
	v->a[60815] = anon_sym_BQUOTE;
	v->a[60816] = actions(2009);
	v->a[60817] = 1;
	v->a[60818] = aux_sym_heredoc_redirect_token1;
	v->a[60819] = actions(2041);
	small_parse_table_3041(v);
}

void	small_parse_table_3041(t_small_parse_table_array *v)
{
	v->a[60820] = 1;
	v->a[60821] = sym_file_descriptor;
	v->a[60822] = state(820);
	v->a[60823] = 1;
	v->a[60824] = sym_terminator;
	v->a[60825] = actions(754);
	v->a[60826] = 2;
	v->a[60827] = anon_sym_LT_LT;
	v->a[60828] = anon_sym_LT_LT_DASH;
	v->a[60829] = actions(963);
	v->a[60830] = 2;
	v->a[60831] = anon_sym_AMP_AMP;
	v->a[60832] = anon_sym_PIPE_PIPE;
	v->a[60833] = actions(2039);
	v->a[60834] = 2;
	v->a[60835] = anon_sym_LT_AMP_DASH;
	v->a[60836] = anon_sym_GT_AMP_DASH;
	v->a[60837] = actions(750);
	v->a[60838] = 3;
	v->a[60839] = anon_sym_SEMI_SEMI;
	small_parse_table_3042(v);
}

void	small_parse_table_3042(t_small_parse_table_array *v)
{
	v->a[60840] = anon_sym_AMP;
	v->a[60841] = anon_sym_SEMI;
	v->a[60842] = state(1165);
	v->a[60843] = 3;
	v->a[60844] = sym_file_redirect;
	v->a[60845] = sym_heredoc_redirect;
	v->a[60846] = aux_sym_redirected_statement_repeat1;
	v->a[60847] = actions(2037);
	v->a[60848] = 6;
	v->a[60849] = anon_sym_LT;
	v->a[60850] = anon_sym_GT;
	v->a[60851] = anon_sym_GT_GT;
	v->a[60852] = anon_sym_LT_AMP;
	v->a[60853] = anon_sym_GT_AMP;
	v->a[60854] = anon_sym_GT_PIPE;
	v->a[60855] = 12;
	v->a[60856] = actions(3);
	v->a[60857] = 1;
	v->a[60858] = sym_comment;
	v->a[60859] = actions(682);
	small_parse_table_3043(v);
}

void	small_parse_table_3043(t_small_parse_table_array *v)
{
	v->a[60860] = 1;
	v->a[60861] = anon_sym_PIPE;
	v->a[60862] = actions(695);
	v->a[60863] = 1;
	v->a[60864] = anon_sym_BQUOTE;
	v->a[60865] = actions(2009);
	v->a[60866] = 1;
	v->a[60867] = aux_sym_heredoc_redirect_token1;
	v->a[60868] = actions(2041);
	v->a[60869] = 1;
	v->a[60870] = sym_file_descriptor;
	v->a[60871] = state(821);
	v->a[60872] = 1;
	v->a[60873] = sym_terminator;
	v->a[60874] = actions(754);
	v->a[60875] = 2;
	v->a[60876] = anon_sym_LT_LT;
	v->a[60877] = anon_sym_LT_LT_DASH;
	v->a[60878] = actions(963);
	v->a[60879] = 2;
	small_parse_table_3044(v);
}

void	small_parse_table_3044(t_small_parse_table_array *v)
{
	v->a[60880] = anon_sym_AMP_AMP;
	v->a[60881] = anon_sym_PIPE_PIPE;
	v->a[60882] = actions(2039);
	v->a[60883] = 2;
	v->a[60884] = anon_sym_LT_AMP_DASH;
	v->a[60885] = anon_sym_GT_AMP_DASH;
	v->a[60886] = actions(750);
	v->a[60887] = 3;
	v->a[60888] = anon_sym_SEMI_SEMI;
	v->a[60889] = anon_sym_AMP;
	v->a[60890] = anon_sym_SEMI;
	v->a[60891] = state(1165);
	v->a[60892] = 3;
	v->a[60893] = sym_file_redirect;
	v->a[60894] = sym_heredoc_redirect;
	v->a[60895] = aux_sym_redirected_statement_repeat1;
	v->a[60896] = actions(2037);
	v->a[60897] = 6;
	v->a[60898] = anon_sym_LT;
	v->a[60899] = anon_sym_GT;
	small_parse_table_3045(v);
}

/* EOF small_parse_table_608.c */
