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
	v->a[31800] = sym_number;
	v->a[31801] = anon_sym_DOLLAR_LBRACE;
	v->a[31802] = anon_sym_DOLLAR_LPAREN;
	v->a[31803] = anon_sym_BQUOTE;
	v->a[31804] = sym_word;
	v->a[31805] = anon_sym_SEMI;
	v->a[31806] = 6;
	v->a[31807] = actions(3);
	v->a[31808] = 1;
	v->a[31809] = sym_comment;
	v->a[31810] = actions(343);
	v->a[31811] = 1;
	v->a[31812] = ts_builtin_sym_end;
	v->a[31813] = actions(1255);
	v->a[31814] = 1;
	v->a[31815] = sym_variable_name;
	v->a[31816] = actions(1253);
	v->a[31817] = 2;
	v->a[31818] = aux_sym__simple_variable_name_token1;
	v->a[31819] = aux_sym__multiline_variable_name_token1;
	small_parse_table_1591(v);
}

void	small_parse_table_1591(t_small_parse_table_array *v)
{
	v->a[31820] = actions(1251);
	v->a[31821] = 8;
	v->a[31822] = anon_sym_BANG;
	v->a[31823] = anon_sym_DASH;
	v->a[31824] = anon_sym_STAR;
	v->a[31825] = anon_sym_QMARK;
	v->a[31826] = anon_sym_DOLLAR;
	v->a[31827] = anon_sym_POUND;
	v->a[31828] = anon_sym_AT;
	v->a[31829] = anon_sym_0;
	v->a[31830] = actions(345);
	v->a[31831] = 15;
	v->a[31832] = anon_sym_PIPE;
	v->a[31833] = anon_sym_SEMI_SEMI;
	v->a[31834] = anon_sym_AMP_AMP;
	v->a[31835] = anon_sym_PIPE_PIPE;
	v->a[31836] = anon_sym_LT;
	v->a[31837] = anon_sym_GT;
	v->a[31838] = anon_sym_GT_GT;
	v->a[31839] = anon_sym_LT_AMP;
	small_parse_table_1592(v);
}

void	small_parse_table_1592(t_small_parse_table_array *v)
{
	v->a[31840] = anon_sym_GT_AMP;
	v->a[31841] = anon_sym_GT_PIPE;
	v->a[31842] = anon_sym_LT_GT;
	v->a[31843] = anon_sym_LT_LT;
	v->a[31844] = anon_sym_LT_LT_DASH;
	v->a[31845] = aux_sym_heredoc_redirect_token1;
	v->a[31846] = anon_sym_SEMI;
	v->a[31847] = 7;
	v->a[31848] = actions(3);
	v->a[31849] = 1;
	v->a[31850] = sym_comment;
	v->a[31851] = actions(975);
	v->a[31852] = 1;
	v->a[31853] = sym__bare_dollar;
	v->a[31854] = actions(987);
	v->a[31855] = 1;
	v->a[31856] = aux_sym_concatenation_token1;
	v->a[31857] = actions(989);
	v->a[31858] = 1;
	v->a[31859] = sym__concat;
	small_parse_table_1593(v);
}

void	small_parse_table_1593(t_small_parse_table_array *v)
{
	v->a[31860] = actions(1257);
	v->a[31861] = 1;
	v->a[31862] = anon_sym_LPAREN;
	v->a[31863] = state(572);
	v->a[31864] = 1;
	v->a[31865] = aux_sym_concatenation_repeat1;
	v->a[31866] = actions(967);
	v->a[31867] = 22;
	v->a[31868] = anon_sym_PIPE;
	v->a[31869] = anon_sym_AMP_AMP;
	v->a[31870] = anon_sym_PIPE_PIPE;
	v->a[31871] = anon_sym_LT;
	v->a[31872] = anon_sym_GT;
	v->a[31873] = anon_sym_GT_GT;
	v->a[31874] = anon_sym_LT_AMP;
	v->a[31875] = anon_sym_GT_AMP;
	v->a[31876] = anon_sym_GT_PIPE;
	v->a[31877] = anon_sym_LT_GT;
	v->a[31878] = anon_sym_LT_LT;
	v->a[31879] = anon_sym_LT_LT_DASH;
	small_parse_table_1594(v);
}

void	small_parse_table_1594(t_small_parse_table_array *v)
{
	v->a[31880] = aux_sym_heredoc_redirect_token1;
	v->a[31881] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31882] = anon_sym_DOLLAR;
	v->a[31883] = anon_sym_DQUOTE;
	v->a[31884] = sym_raw_string;
	v->a[31885] = sym_number;
	v->a[31886] = anon_sym_DOLLAR_LBRACE;
	v->a[31887] = anon_sym_DOLLAR_LPAREN;
	v->a[31888] = anon_sym_BQUOTE;
	v->a[31889] = sym_word;
	v->a[31890] = 3;
	v->a[31891] = actions(3);
	v->a[31892] = 1;
	v->a[31893] = sym_comment;
	v->a[31894] = actions(457);
	v->a[31895] = 1;
	v->a[31896] = sym__concat;
	v->a[31897] = actions(455);
	v->a[31898] = 26;
	v->a[31899] = anon_sym_PIPE;
	small_parse_table_1595(v);
}

/* EOF small_parse_table_318.c */
