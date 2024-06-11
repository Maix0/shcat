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
	v->a[60800] = anon_sym_PIPE;
	v->a[60801] = anon_sym_AMP_AMP;
	v->a[60802] = anon_sym_PIPE_PIPE;
	v->a[60803] = anon_sym_LT;
	v->a[60804] = anon_sym_GT;
	v->a[60805] = anon_sym_GT_GT;
	v->a[60806] = anon_sym_AMP_GT;
	v->a[60807] = anon_sym_AMP_GT_GT;
	v->a[60808] = anon_sym_LT_AMP;
	v->a[60809] = anon_sym_GT_AMP;
	v->a[60810] = anon_sym_GT_PIPE;
	v->a[60811] = anon_sym_LT_AMP_DASH;
	v->a[60812] = anon_sym_GT_AMP_DASH;
	v->a[60813] = anon_sym_LT_LT;
	v->a[60814] = anon_sym_LT_LT_DASH;
	v->a[60815] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60816] = aux_sym_concatenation_token1;
	v->a[60817] = anon_sym_DOLLAR;
	v->a[60818] = anon_sym_DQUOTE;
	v->a[60819] = sym_raw_string;
	small_parse_table_3041(v);
}

void	small_parse_table_3041(t_small_parse_table_array *v)
{
	v->a[60820] = sym_number;
	v->a[60821] = anon_sym_DOLLAR_LBRACE;
	v->a[60822] = anon_sym_DOLLAR_LPAREN;
	v->a[60823] = anon_sym_BQUOTE;
	v->a[60824] = sym_word;
	v->a[60825] = 6;
	v->a[60826] = actions(3);
	v->a[60827] = 1;
	v->a[60828] = sym_comment;
	v->a[60829] = actions(1863);
	v->a[60830] = 1;
	v->a[60831] = aux_sym_concatenation_token1;
	v->a[60832] = actions(1866);
	v->a[60833] = 1;
	v->a[60834] = sym__concat;
	v->a[60835] = state(1036);
	v->a[60836] = 1;
	v->a[60837] = aux_sym_concatenation_repeat1;
	v->a[60838] = actions(1004);
	v->a[60839] = 4;
	small_parse_table_3042(v);
}

void	small_parse_table_3042(t_small_parse_table_array *v)
{
	v->a[60840] = sym_file_descriptor;
	v->a[60841] = sym_variable_name;
	v->a[60842] = ts_builtin_sym_end;
	v->a[60843] = aux_sym_heredoc_redirect_token1;
	v->a[60844] = actions(999);
	v->a[60845] = 20;
	v->a[60846] = anon_sym_PIPE;
	v->a[60847] = anon_sym_RPAREN;
	v->a[60848] = anon_sym_SEMI_SEMI;
	v->a[60849] = anon_sym_AMP_AMP;
	v->a[60850] = anon_sym_PIPE_PIPE;
	v->a[60851] = anon_sym_LT;
	v->a[60852] = anon_sym_GT;
	v->a[60853] = anon_sym_GT_GT;
	v->a[60854] = anon_sym_AMP_GT;
	v->a[60855] = anon_sym_AMP_GT_GT;
	v->a[60856] = anon_sym_LT_AMP;
	v->a[60857] = anon_sym_GT_AMP;
	v->a[60858] = anon_sym_GT_PIPE;
	v->a[60859] = anon_sym_LT_AMP_DASH;
	small_parse_table_3043(v);
}

void	small_parse_table_3043(t_small_parse_table_array *v)
{
	v->a[60860] = anon_sym_GT_AMP_DASH;
	v->a[60861] = anon_sym_LT_LT;
	v->a[60862] = anon_sym_LT_LT_DASH;
	v->a[60863] = anon_sym_AMP;
	v->a[60864] = anon_sym_BQUOTE;
	v->a[60865] = anon_sym_SEMI;
	v->a[60866] = 16;
	v->a[60867] = actions(1094);
	v->a[60868] = 1;
	v->a[60869] = sym_comment;
	v->a[60870] = actions(1869);
	v->a[60871] = 1;
	v->a[60872] = anon_sym_LPAREN;
	v->a[60873] = actions(1871);
	v->a[60874] = 1;
	v->a[60875] = anon_sym_BANG;
	v->a[60876] = actions(1873);
	v->a[60877] = 1;
	v->a[60878] = anon_sym_RPAREN_RPAREN;
	v->a[60879] = actions(1879);
	small_parse_table_3044(v);
}

void	small_parse_table_3044(t_small_parse_table_array *v)
{
	v->a[60880] = 1;
	v->a[60881] = anon_sym_TILDE;
	v->a[60882] = actions(1881);
	v->a[60883] = 1;
	v->a[60884] = anon_sym_DOLLAR;
	v->a[60885] = actions(1883);
	v->a[60886] = 1;
	v->a[60887] = anon_sym_DQUOTE;
	v->a[60888] = actions(1887);
	v->a[60889] = 1;
	v->a[60890] = anon_sym_DOLLAR_LBRACE;
	v->a[60891] = actions(1889);
	v->a[60892] = 1;
	v->a[60893] = anon_sym_DOLLAR_LPAREN;
	v->a[60894] = actions(1891);
	v->a[60895] = 1;
	v->a[60896] = anon_sym_BQUOTE;
	v->a[60897] = actions(1893);
	v->a[60898] = 1;
	v->a[60899] = sym_variable_name;
	small_parse_table_3045(v);
}

/* EOF small_parse_table_608.c */
