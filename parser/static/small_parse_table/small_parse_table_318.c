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
	v->a[31800] = ts_builtin_sym_end;
	v->a[31801] = actions(1198);
	v->a[31802] = 29;
	v->a[31803] = anon_sym_PIPE;
	v->a[31804] = anon_sym_SEMI_SEMI;
	v->a[31805] = anon_sym_AMP_AMP;
	v->a[31806] = anon_sym_PIPE_PIPE;
	v->a[31807] = anon_sym_LT;
	v->a[31808] = anon_sym_GT;
	v->a[31809] = anon_sym_GT_GT;
	v->a[31810] = anon_sym_AMP_GT;
	v->a[31811] = anon_sym_AMP_GT_GT;
	v->a[31812] = anon_sym_LT_AMP;
	v->a[31813] = anon_sym_GT_AMP;
	v->a[31814] = anon_sym_GT_PIPE;
	v->a[31815] = anon_sym_LT_AMP_DASH;
	v->a[31816] = anon_sym_GT_AMP_DASH;
	v->a[31817] = anon_sym_LT_LT;
	v->a[31818] = anon_sym_LT_LT_DASH;
	v->a[31819] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1591(v);
}

void	small_parse_table_1591(t_small_parse_table_array *v)
{
	v->a[31820] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31821] = anon_sym_AMP;
	v->a[31822] = anon_sym_DOLLAR;
	v->a[31823] = anon_sym_DQUOTE;
	v->a[31824] = sym_raw_string;
	v->a[31825] = aux_sym_number_token1;
	v->a[31826] = aux_sym_number_token2;
	v->a[31827] = anon_sym_DOLLAR_LBRACE;
	v->a[31828] = anon_sym_DOLLAR_LPAREN;
	v->a[31829] = anon_sym_BQUOTE;
	v->a[31830] = sym_word;
	v->a[31831] = anon_sym_SEMI;
	v->a[31832] = 3;
	v->a[31833] = actions(3);
	v->a[31834] = 1;
	v->a[31835] = sym_comment;
	v->a[31836] = actions(1301);
	v->a[31837] = 3;
	v->a[31838] = sym_file_descriptor;
	v->a[31839] = sym__concat;
	small_parse_table_1592(v);
}

void	small_parse_table_1592(t_small_parse_table_array *v)
{
	v->a[31840] = sym__bare_dollar;
	v->a[31841] = actions(1299);
	v->a[31842] = 32;
	v->a[31843] = anon_sym_LPAREN;
	v->a[31844] = anon_sym_PIPE;
	v->a[31845] = anon_sym_RPAREN;
	v->a[31846] = anon_sym_SEMI_SEMI;
	v->a[31847] = anon_sym_AMP_AMP;
	v->a[31848] = anon_sym_PIPE_PIPE;
	v->a[31849] = anon_sym_LT;
	v->a[31850] = anon_sym_GT;
	v->a[31851] = anon_sym_GT_GT;
	v->a[31852] = anon_sym_AMP_GT;
	v->a[31853] = anon_sym_AMP_GT_GT;
	v->a[31854] = anon_sym_LT_AMP;
	v->a[31855] = anon_sym_GT_AMP;
	v->a[31856] = anon_sym_GT_PIPE;
	v->a[31857] = anon_sym_LT_AMP_DASH;
	v->a[31858] = anon_sym_GT_AMP_DASH;
	v->a[31859] = anon_sym_LT_LT;
	small_parse_table_1593(v);
}

void	small_parse_table_1593(t_small_parse_table_array *v)
{
	v->a[31860] = anon_sym_LT_LT_DASH;
	v->a[31861] = aux_sym_heredoc_redirect_token1;
	v->a[31862] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31863] = anon_sym_AMP;
	v->a[31864] = aux_sym_concatenation_token1;
	v->a[31865] = anon_sym_DOLLAR;
	v->a[31866] = anon_sym_DQUOTE;
	v->a[31867] = sym_raw_string;
	v->a[31868] = aux_sym_number_token1;
	v->a[31869] = aux_sym_number_token2;
	v->a[31870] = anon_sym_DOLLAR_LBRACE;
	v->a[31871] = anon_sym_DOLLAR_LPAREN;
	v->a[31872] = anon_sym_BQUOTE;
	v->a[31873] = sym_word;
	v->a[31874] = anon_sym_SEMI;
	v->a[31875] = 6;
	v->a[31876] = actions(3);
	v->a[31877] = 1;
	v->a[31878] = sym_comment;
	v->a[31879] = actions(1208);
	small_parse_table_1594(v);
}

void	small_parse_table_1594(t_small_parse_table_array *v)
{
	v->a[31880] = 1;
	v->a[31881] = aux_sym_concatenation_token1;
	v->a[31882] = actions(1212);
	v->a[31883] = 1;
	v->a[31884] = sym__concat;
	v->a[31885] = state(327);
	v->a[31886] = 1;
	v->a[31887] = aux_sym_concatenation_repeat1;
	v->a[31888] = actions(555);
	v->a[31889] = 2;
	v->a[31890] = sym_file_descriptor;
	v->a[31891] = sym_variable_name;
	v->a[31892] = actions(553);
	v->a[31893] = 30;
	v->a[31894] = anon_sym_PIPE;
	v->a[31895] = anon_sym_RPAREN;
	v->a[31896] = anon_sym_SEMI_SEMI;
	v->a[31897] = anon_sym_AMP_AMP;
	v->a[31898] = anon_sym_PIPE_PIPE;
	v->a[31899] = anon_sym_LT;
	small_parse_table_1595(v);
}

/* EOF small_parse_table_318.c */
