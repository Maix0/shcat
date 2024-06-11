/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_288.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1440(t_small_parse_table_array *v)
{
	v->a[28800] = actions(1094);
	v->a[28801] = 1;
	v->a[28802] = sym_comment;
	v->a[28803] = actions(1108);
	v->a[28804] = 1;
	v->a[28805] = anon_sym_PIPE;
	v->a[28806] = actions(1110);
	v->a[28807] = 1;
	v->a[28808] = anon_sym_AMP_AMP;
	v->a[28809] = actions(1112);
	v->a[28810] = 1;
	v->a[28811] = anon_sym_CARET;
	v->a[28812] = actions(1114);
	v->a[28813] = 1;
	v->a[28814] = anon_sym_AMP;
	v->a[28815] = actions(1126);
	v->a[28816] = 1;
	v->a[28817] = anon_sym_PIPE_PIPE;
	v->a[28818] = actions(1128);
	v->a[28819] = 1;
	small_parse_table_1441(v);
}

void	small_parse_table_1441(t_small_parse_table_array *v)
{
	v->a[28820] = anon_sym_QMARK;
	v->a[28821] = actions(1082);
	v->a[28822] = 2;
	v->a[28823] = anon_sym_LT;
	v->a[28824] = anon_sym_GT;
	v->a[28825] = actions(1084);
	v->a[28826] = 2;
	v->a[28827] = anon_sym_GT_GT;
	v->a[28828] = anon_sym_LT_LT;
	v->a[28829] = actions(1086);
	v->a[28830] = 2;
	v->a[28831] = anon_sym_LT_EQ;
	v->a[28832] = anon_sym_GT_EQ;
	v->a[28833] = actions(1088);
	v->a[28834] = 2;
	v->a[28835] = anon_sym_PLUS;
	v->a[28836] = anon_sym_DASH;
	v->a[28837] = actions(1092);
	v->a[28838] = 2;
	v->a[28839] = anon_sym_PLUS_PLUS2;
	small_parse_table_1442(v);
}

void	small_parse_table_1442(t_small_parse_table_array *v)
{
	v->a[28840] = anon_sym_DASH_DASH2;
	v->a[28841] = actions(1116);
	v->a[28842] = 2;
	v->a[28843] = anon_sym_EQ_EQ;
	v->a[28844] = anon_sym_BANG_EQ;
	v->a[28845] = actions(1090);
	v->a[28846] = 3;
	v->a[28847] = anon_sym_STAR;
	v->a[28848] = anon_sym_SLASH;
	v->a[28849] = anon_sym_PERCENT;
	v->a[28850] = actions(1080);
	v->a[28851] = 12;
	v->a[28852] = anon_sym_RPAREN_RPAREN;
	v->a[28853] = anon_sym_PLUS_EQ;
	v->a[28854] = anon_sym_DASH_EQ;
	v->a[28855] = anon_sym_STAR_EQ;
	v->a[28856] = anon_sym_SLASH_EQ;
	v->a[28857] = anon_sym_PERCENT_EQ;
	v->a[28858] = anon_sym_LT_LT_EQ;
	v->a[28859] = anon_sym_GT_GT_EQ;
	small_parse_table_1443(v);
}

void	small_parse_table_1443(t_small_parse_table_array *v)
{
	v->a[28860] = anon_sym_AMP_EQ;
	v->a[28861] = anon_sym_CARET_EQ;
	v->a[28862] = anon_sym_PIPE_EQ;
	v->a[28863] = anon_sym_COLON;
	v->a[28864] = 7;
	v->a[28865] = actions(3);
	v->a[28866] = 1;
	v->a[28867] = sym_comment;
	v->a[28868] = actions(989);
	v->a[28869] = 1;
	v->a[28870] = aux_sym_concatenation_token1;
	v->a[28871] = actions(993);
	v->a[28872] = 1;
	v->a[28873] = sym__concat;
	v->a[28874] = actions(1130);
	v->a[28875] = 1;
	v->a[28876] = anon_sym_LPAREN;
	v->a[28877] = state(370);
	v->a[28878] = 1;
	v->a[28879] = aux_sym_concatenation_repeat1;
	small_parse_table_1444(v);
}

void	small_parse_table_1444(t_small_parse_table_array *v)
{
	v->a[28880] = actions(991);
	v->a[28881] = 2;
	v->a[28882] = sym_file_descriptor;
	v->a[28883] = sym__bare_dollar;
	v->a[28884] = actions(984);
	v->a[28885] = 28;
	v->a[28886] = anon_sym_PIPE;
	v->a[28887] = anon_sym_SEMI_SEMI;
	v->a[28888] = anon_sym_AMP_AMP;
	v->a[28889] = anon_sym_PIPE_PIPE;
	v->a[28890] = anon_sym_LT;
	v->a[28891] = anon_sym_GT;
	v->a[28892] = anon_sym_GT_GT;
	v->a[28893] = anon_sym_AMP_GT;
	v->a[28894] = anon_sym_AMP_GT_GT;
	v->a[28895] = anon_sym_LT_AMP;
	v->a[28896] = anon_sym_GT_AMP;
	v->a[28897] = anon_sym_GT_PIPE;
	v->a[28898] = anon_sym_LT_AMP_DASH;
	v->a[28899] = anon_sym_GT_AMP_DASH;
	small_parse_table_1445(v);
}

/* EOF small_parse_table_288.c */
