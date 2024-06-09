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
	v->a[28800] = actions(1143);
	v->a[28801] = 2;
	v->a[28802] = anon_sym_AMP_AMP;
	v->a[28803] = anon_sym_PIPE_PIPE;
	v->a[28804] = state(1011);
	v->a[28805] = 2;
	v->a[28806] = sym_variable_assignment;
	v->a[28807] = aux_sym_variable_assignments_repeat1;
	v->a[28808] = state(1095);
	v->a[28809] = 3;
	v->a[28810] = sym_file_redirect;
	v->a[28811] = sym_heredoc_redirect;
	v->a[28812] = aux_sym_redirected_statement_repeat1;
	v->a[28813] = actions(1141);
	v->a[28814] = 4;
	v->a[28815] = anon_sym_SEMI_SEMI;
	v->a[28816] = aux_sym_heredoc_redirect_token1;
	v->a[28817] = anon_sym_AMP;
	v->a[28818] = anon_sym_SEMI;
	v->a[28819] = actions(1000);
	small_parse_table_1441(v);
}

void	small_parse_table_1441(t_small_parse_table_array *v)
{
	v->a[28820] = 19;
	v->a[28821] = anon_sym_LT;
	v->a[28822] = anon_sym_GT;
	v->a[28823] = anon_sym_GT_GT;
	v->a[28824] = anon_sym_AMP_GT;
	v->a[28825] = anon_sym_AMP_GT_GT;
	v->a[28826] = anon_sym_LT_AMP;
	v->a[28827] = anon_sym_GT_AMP;
	v->a[28828] = anon_sym_GT_PIPE;
	v->a[28829] = anon_sym_LT_AMP_DASH;
	v->a[28830] = anon_sym_GT_AMP_DASH;
	v->a[28831] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28832] = anon_sym_DOLLAR;
	v->a[28833] = anon_sym_DQUOTE;
	v->a[28834] = sym_raw_string;
	v->a[28835] = aux_sym_number_token1;
	v->a[28836] = aux_sym_number_token2;
	v->a[28837] = anon_sym_DOLLAR_LBRACE;
	v->a[28838] = anon_sym_DOLLAR_LPAREN;
	v->a[28839] = sym_word;
	small_parse_table_1442(v);
}

void	small_parse_table_1442(t_small_parse_table_array *v)
{
	v->a[28840] = 6;
	v->a[28841] = actions(3);
	v->a[28842] = 1;
	v->a[28843] = sym_comment;
	v->a[28844] = actions(1145);
	v->a[28845] = 1;
	v->a[28846] = aux_sym_concatenation_token1;
	v->a[28847] = actions(1148);
	v->a[28848] = 1;
	v->a[28849] = sym__concat;
	v->a[28850] = state(291);
	v->a[28851] = 1;
	v->a[28852] = aux_sym_concatenation_repeat1;
	v->a[28853] = actions(1112);
	v->a[28854] = 2;
	v->a[28855] = sym_file_descriptor;
	v->a[28856] = sym__bare_dollar;
	v->a[28857] = actions(1114);
	v->a[28858] = 31;
	v->a[28859] = anon_sym_LPAREN;
	small_parse_table_1443(v);
}

void	small_parse_table_1443(t_small_parse_table_array *v)
{
	v->a[28860] = anon_sym_PIPE;
	v->a[28861] = anon_sym_RPAREN;
	v->a[28862] = anon_sym_SEMI_SEMI;
	v->a[28863] = anon_sym_AMP_AMP;
	v->a[28864] = anon_sym_PIPE_PIPE;
	v->a[28865] = anon_sym_LT;
	v->a[28866] = anon_sym_GT;
	v->a[28867] = anon_sym_GT_GT;
	v->a[28868] = anon_sym_AMP_GT;
	v->a[28869] = anon_sym_AMP_GT_GT;
	v->a[28870] = anon_sym_LT_AMP;
	v->a[28871] = anon_sym_GT_AMP;
	v->a[28872] = anon_sym_GT_PIPE;
	v->a[28873] = anon_sym_LT_AMP_DASH;
	v->a[28874] = anon_sym_GT_AMP_DASH;
	v->a[28875] = anon_sym_LT_LT;
	v->a[28876] = anon_sym_LT_LT_DASH;
	v->a[28877] = aux_sym_heredoc_redirect_token1;
	v->a[28878] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28879] = anon_sym_AMP;
	small_parse_table_1444(v);
}

void	small_parse_table_1444(t_small_parse_table_array *v)
{
	v->a[28880] = anon_sym_DOLLAR;
	v->a[28881] = anon_sym_DQUOTE;
	v->a[28882] = sym_raw_string;
	v->a[28883] = aux_sym_number_token1;
	v->a[28884] = aux_sym_number_token2;
	v->a[28885] = anon_sym_DOLLAR_LBRACE;
	v->a[28886] = anon_sym_DOLLAR_LPAREN;
	v->a[28887] = anon_sym_BQUOTE;
	v->a[28888] = sym_word;
	v->a[28889] = anon_sym_SEMI;
	v->a[28890] = 6;
	v->a[28891] = actions(3);
	v->a[28892] = 1;
	v->a[28893] = sym_comment;
	v->a[28894] = actions(1106);
	v->a[28895] = 1;
	v->a[28896] = aux_sym_concatenation_token1;
	v->a[28897] = actions(1151);
	v->a[28898] = 1;
	v->a[28899] = sym__concat;
	small_parse_table_1445(v);
}

/* EOF small_parse_table_288.c */
