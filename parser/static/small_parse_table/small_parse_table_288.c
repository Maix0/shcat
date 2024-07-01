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
	v->a[28800] = anon_sym_GT_PIPE;
	v->a[28801] = anon_sym_LT_GT;
	v->a[28802] = anon_sym_LT_LT;
	v->a[28803] = anon_sym_LT_LT_DASH;
	v->a[28804] = aux_sym_heredoc_redirect_token1;
	v->a[28805] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28806] = anon_sym_AMP;
	v->a[28807] = anon_sym_DOLLAR;
	v->a[28808] = anon_sym_DQUOTE;
	v->a[28809] = sym_raw_string;
	v->a[28810] = sym_number;
	v->a[28811] = anon_sym_DOLLAR_LBRACE;
	v->a[28812] = anon_sym_DOLLAR_LPAREN;
	v->a[28813] = anon_sym_BQUOTE;
	v->a[28814] = sym_word;
	v->a[28815] = anon_sym_SEMI;
	v->a[28816] = 7;
	v->a[28817] = actions(3);
	v->a[28818] = 1;
	v->a[28819] = sym_comment;
	small_parse_table_1441(v);
}

void	small_parse_table_1441(t_small_parse_table_array *v)
{
	v->a[28820] = actions(1051);
	v->a[28821] = 1;
	v->a[28822] = aux_sym_concatenation_token1;
	v->a[28823] = actions(1059);
	v->a[28824] = 1;
	v->a[28825] = anon_sym_LPAREN;
	v->a[28826] = actions(1062);
	v->a[28827] = 1;
	v->a[28828] = sym__concat;
	v->a[28829] = state(345);
	v->a[28830] = 1;
	v->a[28831] = aux_sym_concatenation_repeat1;
	v->a[28832] = actions(1055);
	v->a[28833] = 3;
	v->a[28834] = sym_file_descriptor;
	v->a[28835] = sym__bare_dollar;
	v->a[28836] = ts_builtin_sym_end;
	v->a[28837] = actions(1057);
	v->a[28838] = 25;
	v->a[28839] = anon_sym_PIPE;
	small_parse_table_1442(v);
}

void	small_parse_table_1442(t_small_parse_table_array *v)
{
	v->a[28840] = anon_sym_SEMI_SEMI;
	v->a[28841] = anon_sym_AMP_AMP;
	v->a[28842] = anon_sym_PIPE_PIPE;
	v->a[28843] = anon_sym_LT;
	v->a[28844] = anon_sym_GT;
	v->a[28845] = anon_sym_GT_GT;
	v->a[28846] = anon_sym_LT_AMP;
	v->a[28847] = anon_sym_GT_AMP;
	v->a[28848] = anon_sym_GT_PIPE;
	v->a[28849] = anon_sym_LT_GT;
	v->a[28850] = anon_sym_LT_LT;
	v->a[28851] = anon_sym_LT_LT_DASH;
	v->a[28852] = aux_sym_heredoc_redirect_token1;
	v->a[28853] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28854] = anon_sym_AMP;
	v->a[28855] = anon_sym_DOLLAR;
	v->a[28856] = anon_sym_DQUOTE;
	v->a[28857] = sym_raw_string;
	v->a[28858] = sym_number;
	v->a[28859] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1443(v);
}

void	small_parse_table_1443(t_small_parse_table_array *v)
{
	v->a[28860] = anon_sym_DOLLAR_LPAREN;
	v->a[28861] = anon_sym_BQUOTE;
	v->a[28862] = sym_word;
	v->a[28863] = anon_sym_SEMI;
	v->a[28864] = 19;
	v->a[28865] = actions(3);
	v->a[28866] = 1;
	v->a[28867] = sym_comment;
	v->a[28868] = actions(1066);
	v->a[28869] = 1;
	v->a[28870] = anon_sym_PIPE;
	v->a[28871] = actions(1072);
	v->a[28872] = 1;
	v->a[28873] = aux_sym_heredoc_redirect_token1;
	v->a[28874] = actions(1074);
	v->a[28875] = 1;
	v->a[28876] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28877] = actions(1076);
	v->a[28878] = 1;
	v->a[28879] = anon_sym_DOLLAR;
	small_parse_table_1444(v);
}

void	small_parse_table_1444(t_small_parse_table_array *v)
{
	v->a[28880] = actions(1078);
	v->a[28881] = 1;
	v->a[28882] = anon_sym_DQUOTE;
	v->a[28883] = actions(1080);
	v->a[28884] = 1;
	v->a[28885] = anon_sym_DOLLAR_LBRACE;
	v->a[28886] = actions(1082);
	v->a[28887] = 1;
	v->a[28888] = anon_sym_DOLLAR_LPAREN;
	v->a[28889] = actions(1084);
	v->a[28890] = 1;
	v->a[28891] = anon_sym_BQUOTE;
	v->a[28892] = actions(1086);
	v->a[28893] = 1;
	v->a[28894] = sym_file_descriptor;
	v->a[28895] = state(1287);
	v->a[28896] = 1;
	v->a[28897] = aux_sym__heredoc_command;
	v->a[28898] = state(1721);
	v->a[28899] = 1;
	small_parse_table_1445(v);
}

/* EOF small_parse_table_288.c */
