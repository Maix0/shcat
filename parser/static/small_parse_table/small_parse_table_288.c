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
	v->a[28800] = anon_sym_SEMI_SEMI;
	v->a[28801] = aux_sym_heredoc_redirect_token1;
	v->a[28802] = anon_sym_SEMI;
	v->a[28803] = state(1194);
	v->a[28804] = 3;
	v->a[28805] = sym_file_redirect;
	v->a[28806] = sym_heredoc_redirect;
	v->a[28807] = aux_sym_redirected_statement_repeat1;
	v->a[28808] = actions(780);
	v->a[28809] = 16;
	v->a[28810] = anon_sym_LT;
	v->a[28811] = anon_sym_GT;
	v->a[28812] = anon_sym_GT_GT;
	v->a[28813] = anon_sym_LT_AMP;
	v->a[28814] = anon_sym_GT_AMP;
	v->a[28815] = anon_sym_GT_PIPE;
	v->a[28816] = anon_sym_LT_GT;
	v->a[28817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28818] = anon_sym_DOLLAR;
	v->a[28819] = anon_sym_DQUOTE;
	small_parse_table_1441(v);
}

void	small_parse_table_1441(t_small_parse_table_array *v)
{
	v->a[28820] = sym_raw_string;
	v->a[28821] = sym_number;
	v->a[28822] = anon_sym_DOLLAR_LBRACE;
	v->a[28823] = anon_sym_DOLLAR_LPAREN;
	v->a[28824] = anon_sym_BQUOTE;
	v->a[28825] = sym_word;
	v->a[28826] = 16;
	v->a[28827] = actions(3);
	v->a[28828] = 1;
	v->a[28829] = sym_comment;
	v->a[28830] = actions(321);
	v->a[28831] = 1;
	v->a[28832] = anon_sym_LPAREN;
	v->a[28833] = actions(417);
	v->a[28834] = 1;
	v->a[28835] = sym_file_descriptor;
	v->a[28836] = actions(1037);
	v->a[28837] = 1;
	v->a[28838] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28839] = actions(1039);
	small_parse_table_1442(v);
}

void	small_parse_table_1442(t_small_parse_table_array *v)
{
	v->a[28840] = 1;
	v->a[28841] = anon_sym_DOLLAR;
	v->a[28842] = actions(1041);
	v->a[28843] = 1;
	v->a[28844] = anon_sym_DQUOTE;
	v->a[28845] = actions(1043);
	v->a[28846] = 1;
	v->a[28847] = anon_sym_DOLLAR_LBRACE;
	v->a[28848] = actions(1045);
	v->a[28849] = 1;
	v->a[28850] = anon_sym_DOLLAR_LPAREN;
	v->a[28851] = actions(1047);
	v->a[28852] = 1;
	v->a[28853] = anon_sym_BQUOTE;
	v->a[28854] = actions(1049);
	v->a[28855] = 1;
	v->a[28856] = sym__bare_dollar;
	v->a[28857] = state(388);
	v->a[28858] = 1;
	v->a[28859] = aux_sym_command_repeat2;
	small_parse_table_1443(v);
}

void	small_parse_table_1443(t_small_parse_table_array *v)
{
	v->a[28860] = state(904);
	v->a[28861] = 1;
	v->a[28862] = sym_concatenation;
	v->a[28863] = state(1559);
	v->a[28864] = 1;
	v->a[28865] = sym_subshell;
	v->a[28866] = actions(1035);
	v->a[28867] = 3;
	v->a[28868] = sym_raw_string;
	v->a[28869] = sym_number;
	v->a[28870] = sym_word;
	v->a[28871] = state(811);
	v->a[28872] = 5;
	v->a[28873] = sym_arithmetic_expansion;
	v->a[28874] = sym_string;
	v->a[28875] = sym_simple_expansion;
	v->a[28876] = sym_expansion;
	v->a[28877] = sym_command_substitution;
	v->a[28878] = actions(403);
	v->a[28879] = 12;
	small_parse_table_1444(v);
}

void	small_parse_table_1444(t_small_parse_table_array *v)
{
	v->a[28880] = anon_sym_PIPE;
	v->a[28881] = anon_sym_AMP_AMP;
	v->a[28882] = anon_sym_PIPE_PIPE;
	v->a[28883] = anon_sym_LT;
	v->a[28884] = anon_sym_GT;
	v->a[28885] = anon_sym_GT_GT;
	v->a[28886] = anon_sym_LT_AMP;
	v->a[28887] = anon_sym_GT_AMP;
	v->a[28888] = anon_sym_GT_PIPE;
	v->a[28889] = anon_sym_LT_GT;
	v->a[28890] = anon_sym_LT_LT;
	v->a[28891] = anon_sym_LT_LT_DASH;
	v->a[28892] = 11;
	v->a[28893] = actions(3);
	v->a[28894] = 1;
	v->a[28895] = sym_comment;
	v->a[28896] = actions(782);
	v->a[28897] = 1;
	v->a[28898] = anon_sym_PIPE;
	v->a[28899] = actions(792);
	small_parse_table_1445(v);
}

/* EOF small_parse_table_288.c */
