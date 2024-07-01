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
	v->a[28800] = anon_sym_DOLLAR;
	v->a[28801] = anon_sym_DQUOTE;
	v->a[28802] = sym_raw_string;
	v->a[28803] = sym_number;
	v->a[28804] = anon_sym_DOLLAR_LBRACE;
	v->a[28805] = anon_sym_DOLLAR_LPAREN;
	v->a[28806] = anon_sym_BQUOTE;
	v->a[28807] = sym_word;
	v->a[28808] = anon_sym_SEMI;
	v->a[28809] = 17;
	v->a[28810] = actions(842);
	v->a[28811] = 1;
	v->a[28812] = anon_sym_PIPE;
	v->a[28813] = actions(844);
	v->a[28814] = 1;
	v->a[28815] = anon_sym_AMP_AMP;
	v->a[28816] = actions(846);
	v->a[28817] = 1;
	v->a[28818] = anon_sym_PIPE_PIPE;
	v->a[28819] = actions(856);
	small_parse_table_1441(v);
}

void	small_parse_table_1441(t_small_parse_table_array *v)
{
	v->a[28820] = 1;
	v->a[28821] = anon_sym_CARET;
	v->a[28822] = actions(858);
	v->a[28823] = 1;
	v->a[28824] = anon_sym_AMP;
	v->a[28825] = actions(870);
	v->a[28826] = 1;
	v->a[28827] = sym_comment;
	v->a[28828] = actions(1021);
	v->a[28829] = 1;
	v->a[28830] = anon_sym_EQ;
	v->a[28831] = actions(1023);
	v->a[28832] = 1;
	v->a[28833] = anon_sym_QMARK;
	v->a[28834] = actions(1108);
	v->a[28835] = 1;
	v->a[28836] = anon_sym_RPAREN_RPAREN;
	v->a[28837] = actions(850);
	v->a[28838] = 2;
	v->a[28839] = anon_sym_LT;
	small_parse_table_1442(v);
}

void	small_parse_table_1442(t_small_parse_table_array *v)
{
	v->a[28840] = anon_sym_GT;
	v->a[28841] = actions(852);
	v->a[28842] = 2;
	v->a[28843] = anon_sym_GT_GT;
	v->a[28844] = anon_sym_LT_LT;
	v->a[28845] = actions(860);
	v->a[28846] = 2;
	v->a[28847] = anon_sym_EQ_EQ;
	v->a[28848] = anon_sym_BANG_EQ;
	v->a[28849] = actions(862);
	v->a[28850] = 2;
	v->a[28851] = anon_sym_LT_EQ;
	v->a[28852] = anon_sym_GT_EQ;
	v->a[28853] = actions(864);
	v->a[28854] = 2;
	v->a[28855] = anon_sym_PLUS;
	v->a[28856] = anon_sym_DASH;
	v->a[28857] = actions(868);
	v->a[28858] = 2;
	v->a[28859] = anon_sym_PLUS_PLUS2;
	small_parse_table_1443(v);
}

void	small_parse_table_1443(t_small_parse_table_array *v)
{
	v->a[28860] = anon_sym_DASH_DASH2;
	v->a[28861] = actions(866);
	v->a[28862] = 3;
	v->a[28863] = anon_sym_STAR;
	v->a[28864] = anon_sym_SLASH;
	v->a[28865] = anon_sym_PERCENT;
	v->a[28866] = actions(1079);
	v->a[28867] = 10;
	v->a[28868] = anon_sym_PLUS_EQ;
	v->a[28869] = anon_sym_DASH_EQ;
	v->a[28870] = anon_sym_STAR_EQ;
	v->a[28871] = anon_sym_SLASH_EQ;
	v->a[28872] = anon_sym_PERCENT_EQ;
	v->a[28873] = anon_sym_LT_LT_EQ;
	v->a[28874] = anon_sym_GT_GT_EQ;
	v->a[28875] = anon_sym_AMP_EQ;
	v->a[28876] = anon_sym_CARET_EQ;
	v->a[28877] = anon_sym_PIPE_EQ;
	v->a[28878] = 17;
	v->a[28879] = actions(842);
	small_parse_table_1444(v);
}

void	small_parse_table_1444(t_small_parse_table_array *v)
{
	v->a[28880] = 1;
	v->a[28881] = anon_sym_PIPE;
	v->a[28882] = actions(844);
	v->a[28883] = 1;
	v->a[28884] = anon_sym_AMP_AMP;
	v->a[28885] = actions(846);
	v->a[28886] = 1;
	v->a[28887] = anon_sym_PIPE_PIPE;
	v->a[28888] = actions(856);
	v->a[28889] = 1;
	v->a[28890] = anon_sym_CARET;
	v->a[28891] = actions(858);
	v->a[28892] = 1;
	v->a[28893] = anon_sym_AMP;
	v->a[28894] = actions(870);
	v->a[28895] = 1;
	v->a[28896] = sym_comment;
	v->a[28897] = actions(1021);
	v->a[28898] = 1;
	v->a[28899] = anon_sym_EQ;
	small_parse_table_1445(v);
}

/* EOF small_parse_table_288.c */
