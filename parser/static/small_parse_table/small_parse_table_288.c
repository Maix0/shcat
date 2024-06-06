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
	v->a[28800] = anon_sym_BQUOTE;
	v->a[28801] = anon_sym_DOLLAR_BQUOTE;
	v->a[28802] = aux_sym__simple_variable_name_token1;
	v->a[28803] = sym_word;
	v->a[28804] = anon_sym_SEMI;
	v->a[28805] = 6;
	v->a[28806] = actions(3);
	v->a[28807] = 1;
	v->a[28808] = sym_comment;
	v->a[28809] = actions(3332);
	v->a[28810] = 1;
	v->a[28811] = aux_sym_concatenation_token1;
	v->a[28812] = actions(3335);
	v->a[28813] = 1;
	v->a[28814] = sym__concat;
	v->a[28815] = state(681);
	v->a[28816] = 1;
	v->a[28817] = aux_sym_concatenation_repeat1;
	v->a[28818] = actions(2654);
	v->a[28819] = 5;
	small_parse_table_1441(v);
}

void	small_parse_table_1441(t_small_parse_table_array *v)
{
	v->a[28820] = sym_file_descriptor;
	v->a[28821] = sym_test_operator;
	v->a[28822] = sym__bare_dollar;
	v->a[28823] = sym__brace_start;
	v->a[28824] = aux_sym_heredoc_redirect_token1;
	v->a[28825] = actions(2652);
	v->a[28826] = 33;
	v->a[28827] = anon_sym_PIPE;
	v->a[28828] = anon_sym_SEMI_SEMI;
	v->a[28829] = anon_sym_SEMI_AMP;
	v->a[28830] = anon_sym_SEMI_SEMI_AMP;
	v->a[28831] = anon_sym_PIPE_AMP;
	v->a[28832] = anon_sym_AMP_AMP;
	v->a[28833] = anon_sym_PIPE_PIPE;
	v->a[28834] = anon_sym_LT;
	v->a[28835] = anon_sym_GT;
	v->a[28836] = anon_sym_GT_GT;
	v->a[28837] = anon_sym_AMP_GT;
	v->a[28838] = anon_sym_AMP_GT_GT;
	v->a[28839] = anon_sym_LT_AMP;
	small_parse_table_1442(v);
}

void	small_parse_table_1442(t_small_parse_table_array *v)
{
	v->a[28840] = anon_sym_GT_AMP;
	v->a[28841] = anon_sym_GT_PIPE;
	v->a[28842] = anon_sym_LT_AMP_DASH;
	v->a[28843] = anon_sym_GT_AMP_DASH;
	v->a[28844] = anon_sym_LT_LT;
	v->a[28845] = anon_sym_LT_LT_DASH;
	v->a[28846] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28847] = anon_sym_AMP;
	v->a[28848] = anon_sym_DOLLAR;
	v->a[28849] = sym__special_character;
	v->a[28850] = anon_sym_DQUOTE;
	v->a[28851] = sym_raw_string;
	v->a[28852] = aux_sym_number_token1;
	v->a[28853] = aux_sym_number_token2;
	v->a[28854] = anon_sym_DOLLAR_LBRACE;
	v->a[28855] = anon_sym_DOLLAR_LPAREN;
	v->a[28856] = anon_sym_BQUOTE;
	v->a[28857] = anon_sym_DOLLAR_BQUOTE;
	v->a[28858] = sym_word;
	v->a[28859] = anon_sym_SEMI;
	small_parse_table_1443(v);
}

void	small_parse_table_1443(t_small_parse_table_array *v)
{
	v->a[28860] = 6;
	v->a[28861] = actions(3);
	v->a[28862] = 1;
	v->a[28863] = sym_comment;
	v->a[28864] = actions(3167);
	v->a[28865] = 1;
	v->a[28866] = aux_sym_concatenation_token1;
	v->a[28867] = actions(3338);
	v->a[28868] = 1;
	v->a[28869] = sym__concat;
	v->a[28870] = state(715);
	v->a[28871] = 1;
	v->a[28872] = aux_sym_concatenation_repeat1;
	v->a[28873] = actions(2696);
	v->a[28874] = 5;
	v->a[28875] = sym_file_descriptor;
	v->a[28876] = sym_variable_name;
	v->a[28877] = sym_test_operator;
	v->a[28878] = sym__brace_start;
	v->a[28879] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1444(v);
}

void	small_parse_table_1444(t_small_parse_table_array *v)
{
	v->a[28880] = actions(2694);
	v->a[28881] = 33;
	v->a[28882] = anon_sym_PIPE;
	v->a[28883] = anon_sym_RPAREN;
	v->a[28884] = anon_sym_SEMI_SEMI;
	v->a[28885] = anon_sym_PIPE_AMP;
	v->a[28886] = anon_sym_AMP_AMP;
	v->a[28887] = anon_sym_PIPE_PIPE;
	v->a[28888] = anon_sym_LT;
	v->a[28889] = anon_sym_GT;
	v->a[28890] = anon_sym_GT_GT;
	v->a[28891] = anon_sym_AMP_GT;
	v->a[28892] = anon_sym_AMP_GT_GT;
	v->a[28893] = anon_sym_LT_AMP;
	v->a[28894] = anon_sym_GT_AMP;
	v->a[28895] = anon_sym_GT_PIPE;
	v->a[28896] = anon_sym_LT_AMP_DASH;
	v->a[28897] = anon_sym_GT_AMP_DASH;
	v->a[28898] = anon_sym_LT_LT;
	v->a[28899] = anon_sym_LT_LT_DASH;
	small_parse_table_1445(v);
}

/* EOF small_parse_table_288.c */
