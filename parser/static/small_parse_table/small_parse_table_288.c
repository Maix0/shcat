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
	v->a[28816] = 19;
	v->a[28817] = actions(3);
	v->a[28818] = 1;
	v->a[28819] = sym_comment;
	small_parse_table_1441(v);
}

void	small_parse_table_1441(t_small_parse_table_array *v)
{
	v->a[28820] = actions(1059);
	v->a[28821] = 1;
	v->a[28822] = anon_sym_PIPE;
	v->a[28823] = actions(1065);
	v->a[28824] = 1;
	v->a[28825] = aux_sym_heredoc_redirect_token1;
	v->a[28826] = actions(1067);
	v->a[28827] = 1;
	v->a[28828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28829] = actions(1069);
	v->a[28830] = 1;
	v->a[28831] = anon_sym_DOLLAR;
	v->a[28832] = actions(1071);
	v->a[28833] = 1;
	v->a[28834] = anon_sym_DQUOTE;
	v->a[28835] = actions(1073);
	v->a[28836] = 1;
	v->a[28837] = anon_sym_DOLLAR_LBRACE;
	v->a[28838] = actions(1075);
	v->a[28839] = 1;
	small_parse_table_1442(v);
}

void	small_parse_table_1442(t_small_parse_table_array *v)
{
	v->a[28840] = anon_sym_DOLLAR_LPAREN;
	v->a[28841] = actions(1077);
	v->a[28842] = 1;
	v->a[28843] = anon_sym_BQUOTE;
	v->a[28844] = actions(1079);
	v->a[28845] = 1;
	v->a[28846] = sym_file_descriptor;
	v->a[28847] = state(1283);
	v->a[28848] = 1;
	v->a[28849] = aux_sym__heredoc_command;
	v->a[28850] = state(1725);
	v->a[28851] = 1;
	v->a[28852] = sym_concatenation;
	v->a[28853] = state(2098);
	v->a[28854] = 1;
	v->a[28855] = sym__heredoc_expression;
	v->a[28856] = state(2108);
	v->a[28857] = 1;
	v->a[28858] = sym__heredoc_pipeline;
	v->a[28859] = actions(1061);
	small_parse_table_1443(v);
}

void	small_parse_table_1443(t_small_parse_table_array *v)
{
	v->a[28860] = 2;
	v->a[28861] = anon_sym_AMP_AMP;
	v->a[28862] = anon_sym_PIPE_PIPE;
	v->a[28863] = state(1517);
	v->a[28864] = 2;
	v->a[28865] = sym_file_redirect;
	v->a[28866] = aux_sym_redirected_statement_repeat2;
	v->a[28867] = actions(1057);
	v->a[28868] = 3;
	v->a[28869] = sym_raw_string;
	v->a[28870] = sym_number;
	v->a[28871] = sym_word;
	v->a[28872] = state(1589);
	v->a[28873] = 5;
	v->a[28874] = sym_arithmetic_expansion;
	v->a[28875] = sym_string;
	v->a[28876] = sym_simple_expansion;
	v->a[28877] = sym_expansion;
	v->a[28878] = sym_command_substitution;
	v->a[28879] = actions(1063);
	small_parse_table_1444(v);
}

void	small_parse_table_1444(t_small_parse_table_array *v)
{
	v->a[28880] = 7;
	v->a[28881] = anon_sym_LT;
	v->a[28882] = anon_sym_GT;
	v->a[28883] = anon_sym_GT_GT;
	v->a[28884] = anon_sym_LT_AMP;
	v->a[28885] = anon_sym_GT_AMP;
	v->a[28886] = anon_sym_GT_PIPE;
	v->a[28887] = anon_sym_LT_GT;
	v->a[28888] = 6;
	v->a[28889] = actions(3);
	v->a[28890] = 1;
	v->a[28891] = sym_comment;
	v->a[28892] = actions(1081);
	v->a[28893] = 1;
	v->a[28894] = aux_sym_concatenation_token1;
	v->a[28895] = actions(1083);
	v->a[28896] = 1;
	v->a[28897] = sym__concat;
	v->a[28898] = state(366);
	v->a[28899] = 1;
	small_parse_table_1445(v);
}

/* EOF small_parse_table_288.c */
