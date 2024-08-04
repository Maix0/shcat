/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_246.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1230(t_parse_table_array *v)
{
	v->a[969][sym_file_redirect] = state(925);
	v->a[969][sym_heredoc_redirect] = state(925);
	v->a[969][sym_terminator] = state(559);
	v->a[969][aux_sym_redirected_statement_repeat1] = state(925);
	v->a[969][anon_sym_SEMI_SEMI] = actions(593);
	v->a[969][anon_sym_AMP_AMP] = actions(762);
	v->a[969][anon_sym_PIPE_PIPE] = actions(762);
	v->a[969][anon_sym_LT] = actions(1880);
	v->a[969][anon_sym_GT] = actions(1880);
	v->a[969][anon_sym_GT_GT] = actions(1880);
	v->a[969][anon_sym_LT_LT] = actions(597);
	v->a[969][aux_sym_heredoc_redirect_token1] = actions(1870);
	v->a[969][anon_sym_BQUOTE] = actions(578);
	v->a[969][sym_comment] = actions(3);
	v->a[969][anon_sym_SEMI] = actions(593);
	v->a[970][sym_variable_assignment] = state(934);
	v->a[970][aux_sym__variable_assignments_repeat1] = state(934);
	v->a[970][anon_sym_esac] = actions(1954);
	v->a[970][anon_sym_PIPE] = actions(1954);
	v->a[970][anon_sym_SEMI_SEMI] = actions(1954);
	return (parse_table_1231(v));
}

void	parse_table_1231(t_parse_table_array *v)
{
	v->a[970][anon_sym_AMP_AMP] = actions(1954);
	v->a[970][anon_sym_PIPE_PIPE] = actions(1954);
	v->a[970][anon_sym_LT] = actions(1954);
	v->a[970][anon_sym_GT] = actions(1954);
	v->a[970][anon_sym_GT_GT] = actions(1954);
	v->a[970][anon_sym_LT_LT] = actions(1954);
	v->a[970][aux_sym_heredoc_redirect_token1] = actions(1952);
	v->a[970][sym_comment] = actions(3);
	v->a[970][anon_sym_SEMI] = actions(1954);
	v->a[970][sym_variable_name] = actions(2001);
	v->a[971][sym_file_redirect] = state(935);
	v->a[971][sym_heredoc_redirect] = state(935);
	v->a[971][aux_sym_redirected_statement_repeat1] = state(935);
	v->a[971][anon_sym_esac] = actions(1936);
	v->a[971][anon_sym_PIPE] = actions(1936);
	v->a[971][anon_sym_SEMI_SEMI] = actions(1936);
	v->a[971][anon_sym_AMP_AMP] = actions(1936);
	v->a[971][anon_sym_PIPE_PIPE] = actions(1936);
	v->a[971][anon_sym_LT] = actions(1876);
	v->a[971][anon_sym_GT] = actions(1876);
	return (parse_table_1232(v));
}

void	parse_table_1232(t_parse_table_array *v)
{
	v->a[971][anon_sym_GT_GT] = actions(1876);
	v->a[971][anon_sym_LT_LT] = actions(584);
	v->a[971][aux_sym_heredoc_redirect_token1] = actions(1938);
	v->a[971][sym_comment] = actions(3);
	v->a[971][anon_sym_SEMI] = actions(1936);
	v->a[972][sym_file_redirect] = state(1040);
	v->a[972][sym_heredoc_redirect] = state(1040);
	v->a[972][sym_terminator] = state(428);
	v->a[972][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[972][anon_sym_PIPE] = actions(580);
	v->a[972][anon_sym_SEMI_SEMI] = actions(578);
	v->a[972][anon_sym_AMP_AMP] = actions(769);
	v->a[972][anon_sym_PIPE_PIPE] = actions(769);
	v->a[972][anon_sym_LT] = actions(1924);
	v->a[972][anon_sym_GT] = actions(1924);
	v->a[972][anon_sym_GT_GT] = actions(1924);
	v->a[972][anon_sym_LT_LT] = actions(597);
	v->a[972][aux_sym_heredoc_redirect_token1] = actions(1870);
	v->a[972][sym_comment] = actions(3);
	v->a[972][anon_sym_SEMI] = actions(593);
	return (parse_table_1233(v));
}

void	parse_table_1233(t_parse_table_array *v)
{
	v->a[973][anon_sym_PIPE] = actions(343);
	v->a[973][anon_sym_RPAREN] = actions(343);
	v->a[973][anon_sym_BANG] = actions(2003);
	v->a[973][anon_sym_DASH] = actions(2003);
	v->a[973][anon_sym_STAR] = actions(2003);
	v->a[973][anon_sym_QMARK] = actions(2003);
	v->a[973][anon_sym_DOLLAR] = actions(2003);
	v->a[973][anon_sym_POUND] = actions(2003);
	v->a[973][sym_comment] = actions(3);
	v->a[973][aux_sym__simple_variable_name_token1] = actions(2005);
	v->a[973][aux_sym__multiline_variable_name_token1] = actions(2005);
	v->a[973][anon_sym_AT] = actions(2003);
	v->a[973][anon_sym_0] = actions(2003);
	v->a[973][sym_variable_name] = actions(2007);
	v->a[974][sym_file_redirect] = state(1040);
	v->a[974][sym_heredoc_redirect] = state(1040);
	v->a[974][sym_terminator] = state(438);
	v->a[974][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[974][anon_sym_SEMI_SEMI] = actions(767);
	v->a[974][anon_sym_AMP_AMP] = actions(769);
	return (parse_table_1234(v));
}

void	parse_table_1234(t_parse_table_array *v)
{
	v->a[974][anon_sym_PIPE_PIPE] = actions(769);
	v->a[974][anon_sym_LT] = actions(1924);
	v->a[974][anon_sym_GT] = actions(1924);
	v->a[974][anon_sym_GT_GT] = actions(1924);
	v->a[974][anon_sym_LT_LT] = actions(597);
	v->a[974][aux_sym_heredoc_redirect_token1] = actions(1981);
	v->a[974][sym_comment] = actions(3);
	v->a[974][anon_sym_SEMI] = actions(767);
	v->a[975][anon_sym_BANG] = actions(2009);
	v->a[975][anon_sym_DASH] = actions(2009);
	v->a[975][anon_sym_STAR] = actions(2009);
	v->a[975][anon_sym_QMARK] = actions(2009);
	v->a[975][anon_sym_DOLLAR] = actions(2009);
	v->a[975][anon_sym_DQUOTE] = actions(2011);
	v->a[975][sym_string_content] = actions(2013);
	v->a[975][anon_sym_POUND] = actions(2009);
	v->a[975][sym_comment] = actions(3);
	v->a[975][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[975][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[975][anon_sym_AT] = actions(2009);
	return (parse_table_1235(v));
}

/* EOF parse_table_246.c */
