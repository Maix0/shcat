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
	v->a[31800] = anon_sym_DOLLAR_LBRACE;
	v->a[31801] = anon_sym_DOLLAR_LPAREN;
	v->a[31802] = anon_sym_BQUOTE;
	v->a[31803] = sym_word;
	v->a[31804] = anon_sym_SEMI;
	v->a[31805] = 17;
	v->a[31806] = actions(842);
	v->a[31807] = 1;
	v->a[31808] = anon_sym_PIPE;
	v->a[31809] = actions(844);
	v->a[31810] = 1;
	v->a[31811] = anon_sym_AMP_AMP;
	v->a[31812] = actions(846);
	v->a[31813] = 1;
	v->a[31814] = anon_sym_PIPE_PIPE;
	v->a[31815] = actions(856);
	v->a[31816] = 1;
	v->a[31817] = anon_sym_CARET;
	v->a[31818] = actions(858);
	v->a[31819] = 1;
	small_parse_table_1591(v);
}

void	small_parse_table_1591(t_small_parse_table_array *v)
{
	v->a[31820] = anon_sym_AMP;
	v->a[31821] = actions(870);
	v->a[31822] = 1;
	v->a[31823] = sym_comment;
	v->a[31824] = actions(1021);
	v->a[31825] = 1;
	v->a[31826] = anon_sym_EQ;
	v->a[31827] = actions(1023);
	v->a[31828] = 1;
	v->a[31829] = anon_sym_QMARK;
	v->a[31830] = actions(1187);
	v->a[31831] = 1;
	v->a[31832] = anon_sym_RPAREN_RPAREN;
	v->a[31833] = actions(850);
	v->a[31834] = 2;
	v->a[31835] = anon_sym_LT;
	v->a[31836] = anon_sym_GT;
	v->a[31837] = actions(852);
	v->a[31838] = 2;
	v->a[31839] = anon_sym_GT_GT;
	small_parse_table_1592(v);
}

void	small_parse_table_1592(t_small_parse_table_array *v)
{
	v->a[31840] = anon_sym_LT_LT;
	v->a[31841] = actions(860);
	v->a[31842] = 2;
	v->a[31843] = anon_sym_EQ_EQ;
	v->a[31844] = anon_sym_BANG_EQ;
	v->a[31845] = actions(862);
	v->a[31846] = 2;
	v->a[31847] = anon_sym_LT_EQ;
	v->a[31848] = anon_sym_GT_EQ;
	v->a[31849] = actions(864);
	v->a[31850] = 2;
	v->a[31851] = anon_sym_PLUS;
	v->a[31852] = anon_sym_DASH;
	v->a[31853] = actions(868);
	v->a[31854] = 2;
	v->a[31855] = anon_sym_PLUS_PLUS2;
	v->a[31856] = anon_sym_DASH_DASH2;
	v->a[31857] = actions(866);
	v->a[31858] = 3;
	v->a[31859] = anon_sym_STAR;
	small_parse_table_1593(v);
}

void	small_parse_table_1593(t_small_parse_table_array *v)
{
	v->a[31860] = anon_sym_SLASH;
	v->a[31861] = anon_sym_PERCENT;
	v->a[31862] = actions(1079);
	v->a[31863] = 10;
	v->a[31864] = anon_sym_PLUS_EQ;
	v->a[31865] = anon_sym_DASH_EQ;
	v->a[31866] = anon_sym_STAR_EQ;
	v->a[31867] = anon_sym_SLASH_EQ;
	v->a[31868] = anon_sym_PERCENT_EQ;
	v->a[31869] = anon_sym_LT_LT_EQ;
	v->a[31870] = anon_sym_GT_GT_EQ;
	v->a[31871] = anon_sym_AMP_EQ;
	v->a[31872] = anon_sym_CARET_EQ;
	v->a[31873] = anon_sym_PIPE_EQ;
	v->a[31874] = 6;
	v->a[31875] = actions(3);
	v->a[31876] = 1;
	v->a[31877] = sym_comment;
	v->a[31878] = actions(1191);
	v->a[31879] = 1;
	small_parse_table_1594(v);
}

void	small_parse_table_1594(t_small_parse_table_array *v)
{
	v->a[31880] = aux_sym_concatenation_token1;
	v->a[31881] = actions(1196);
	v->a[31882] = 1;
	v->a[31883] = sym__concat;
	v->a[31884] = state(381);
	v->a[31885] = 1;
	v->a[31886] = aux_sym_concatenation_repeat1;
	v->a[31887] = actions(1194);
	v->a[31888] = 2;
	v->a[31889] = sym_file_descriptor;
	v->a[31890] = sym__bare_dollar;
	v->a[31891] = actions(1189);
	v->a[31892] = 28;
	v->a[31893] = anon_sym_LPAREN;
	v->a[31894] = anon_sym_PIPE;
	v->a[31895] = anon_sym_RPAREN;
	v->a[31896] = anon_sym_SEMI_SEMI;
	v->a[31897] = anon_sym_AMP_AMP;
	v->a[31898] = anon_sym_PIPE_PIPE;
	v->a[31899] = anon_sym_LT;
	small_parse_table_1595(v);
}

/* EOF small_parse_table_318.c */
