/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_318.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1590(t_small_parse_table_array *v)
{
	v->a[31800] = state(380);
	v->a[31801] = 1;
	v->a[31802] = aux_sym_concatenation_repeat1;
	v->a[31803] = actions(1004);
	v->a[31804] = 3;
	v->a[31805] = sym_file_descriptor;
	v->a[31806] = sym_variable_name;
	v->a[31807] = ts_builtin_sym_end;
	v->a[31808] = actions(999);
	v->a[31809] = 28;
	v->a[31810] = anon_sym_PIPE;
	v->a[31811] = anon_sym_SEMI_SEMI;
	v->a[31812] = anon_sym_AMP_AMP;
	v->a[31813] = anon_sym_PIPE_PIPE;
	v->a[31814] = anon_sym_LT;
	v->a[31815] = anon_sym_GT;
	v->a[31816] = anon_sym_GT_GT;
	v->a[31817] = anon_sym_AMP_GT;
	v->a[31818] = anon_sym_AMP_GT_GT;
	v->a[31819] = anon_sym_LT_AMP;
	small_parse_table_1591(v);
}

void	small_parse_table_1591(t_small_parse_table_array *v)
{
	v->a[31820] = anon_sym_GT_AMP;
	v->a[31821] = anon_sym_GT_PIPE;
	v->a[31822] = anon_sym_LT_AMP_DASH;
	v->a[31823] = anon_sym_GT_AMP_DASH;
	v->a[31824] = anon_sym_LT_LT;
	v->a[31825] = anon_sym_LT_LT_DASH;
	v->a[31826] = aux_sym_heredoc_redirect_token1;
	v->a[31827] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31828] = anon_sym_AMP;
	v->a[31829] = anon_sym_DOLLAR;
	v->a[31830] = anon_sym_DQUOTE;
	v->a[31831] = sym_raw_string;
	v->a[31832] = sym_number;
	v->a[31833] = anon_sym_DOLLAR_LBRACE;
	v->a[31834] = anon_sym_DOLLAR_LPAREN;
	v->a[31835] = anon_sym_BQUOTE;
	v->a[31836] = sym_word;
	v->a[31837] = anon_sym_SEMI;
	v->a[31838] = 3;
	v->a[31839] = actions(3);
	small_parse_table_1592(v);
}

void	small_parse_table_1592(t_small_parse_table_array *v)
{
	v->a[31840] = 1;
	v->a[31841] = sym_comment;
	v->a[31842] = actions(1177);
	v->a[31843] = 3;
	v->a[31844] = sym_file_descriptor;
	v->a[31845] = sym__concat;
	v->a[31846] = sym__bare_dollar;
	v->a[31847] = actions(1179);
	v->a[31848] = 31;
	v->a[31849] = anon_sym_esac;
	v->a[31850] = anon_sym_LPAREN;
	v->a[31851] = anon_sym_PIPE;
	v->a[31852] = anon_sym_SEMI_SEMI;
	v->a[31853] = anon_sym_AMP_AMP;
	v->a[31854] = anon_sym_PIPE_PIPE;
	v->a[31855] = anon_sym_LT;
	v->a[31856] = anon_sym_GT;
	v->a[31857] = anon_sym_GT_GT;
	v->a[31858] = anon_sym_AMP_GT;
	v->a[31859] = anon_sym_AMP_GT_GT;
	small_parse_table_1593(v);
}

void	small_parse_table_1593(t_small_parse_table_array *v)
{
	v->a[31860] = anon_sym_LT_AMP;
	v->a[31861] = anon_sym_GT_AMP;
	v->a[31862] = anon_sym_GT_PIPE;
	v->a[31863] = anon_sym_LT_AMP_DASH;
	v->a[31864] = anon_sym_GT_AMP_DASH;
	v->a[31865] = anon_sym_LT_LT;
	v->a[31866] = anon_sym_LT_LT_DASH;
	v->a[31867] = aux_sym_heredoc_redirect_token1;
	v->a[31868] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31869] = anon_sym_AMP;
	v->a[31870] = aux_sym_concatenation_token1;
	v->a[31871] = anon_sym_DOLLAR;
	v->a[31872] = anon_sym_DQUOTE;
	v->a[31873] = sym_raw_string;
	v->a[31874] = sym_number;
	v->a[31875] = anon_sym_DOLLAR_LBRACE;
	v->a[31876] = anon_sym_DOLLAR_LPAREN;
	v->a[31877] = anon_sym_BQUOTE;
	v->a[31878] = sym_word;
	v->a[31879] = anon_sym_SEMI;
	small_parse_table_1594(v);
}

void	small_parse_table_1594(t_small_parse_table_array *v)
{
	v->a[31880] = 6;
	v->a[31881] = actions(3);
	v->a[31882] = 1;
	v->a[31883] = sym_comment;
	v->a[31884] = actions(1239);
	v->a[31885] = 1;
	v->a[31886] = aux_sym_concatenation_token1;
	v->a[31887] = actions(1242);
	v->a[31888] = 1;
	v->a[31889] = sym__concat;
	v->a[31890] = state(382);
	v->a[31891] = 1;
	v->a[31892] = aux_sym_concatenation_repeat1;
	v->a[31893] = actions(1004);
	v->a[31894] = 3;
	v->a[31895] = sym_file_descriptor;
	v->a[31896] = sym__bare_dollar;
	v->a[31897] = ts_builtin_sym_end;
	v->a[31898] = actions(999);
	v->a[31899] = 28;
	small_parse_table_1595(v);
}

/* EOF small_parse_table_318.c */
