/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_255.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1275(t_parse_table_array *v)
{
	v->a[1033][sym_file_redirect] = state(1033);
	v->a[1033][sym_heredoc_redirect] = state(1033);
	v->a[1033][aux_sym_redirected_statement_repeat1] = state(1033);
	v->a[1033][anon_sym_PIPE] = actions(1940);
	v->a[1033][anon_sym_SEMI_SEMI] = actions(1940);
	v->a[1033][anon_sym_AMP_AMP] = actions(1940);
	v->a[1033][anon_sym_PIPE_PIPE] = actions(1940);
	v->a[1033][anon_sym_LT] = actions(2161);
	v->a[1033][anon_sym_GT] = actions(2161);
	v->a[1033][anon_sym_GT_GT] = actions(2161);
	v->a[1033][anon_sym_LT_LT] = actions(1945);
	v->a[1033][aux_sym_heredoc_redirect_token1] = actions(1948);
	v->a[1033][sym_comment] = actions(3);
	v->a[1033][anon_sym_SEMI] = actions(1940);
	v->a[1034][anon_sym_BANG] = actions(2009);
	v->a[1034][anon_sym_DASH] = actions(2009);
	v->a[1034][anon_sym_STAR] = actions(2009);
	v->a[1034][anon_sym_QMARK] = actions(2009);
	v->a[1034][anon_sym_DOLLAR] = actions(2009);
	v->a[1034][anon_sym_DQUOTE] = actions(2164);
	return (parse_table_1276(v));
}

void	parse_table_1276(t_parse_table_array *v)
{
	v->a[1034][sym_string_content] = actions(2013);
	v->a[1034][anon_sym_POUND] = actions(2009);
	v->a[1034][sym_comment] = actions(3);
	v->a[1034][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1034][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1034][anon_sym_AT] = actions(2009);
	v->a[1034][anon_sym_0] = actions(2009);
	v->a[1034][sym_variable_name] = actions(2017);
	v->a[1035][sym_file_redirect] = state(1040);
	v->a[1035][sym_heredoc_redirect] = state(1040);
	v->a[1035][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[1035][anon_sym_PIPE] = actions(816);
	v->a[1035][anon_sym_SEMI_SEMI] = actions(816);
	v->a[1035][anon_sym_AMP_AMP] = actions(816);
	v->a[1035][anon_sym_PIPE_PIPE] = actions(816);
	v->a[1035][anon_sym_LT] = actions(816);
	v->a[1035][anon_sym_GT] = actions(816);
	v->a[1035][anon_sym_GT_GT] = actions(816);
	v->a[1035][anon_sym_LT_LT] = actions(816);
	v->a[1035][aux_sym_heredoc_redirect_token1] = actions(827);
	return (parse_table_1277(v));
}

void	parse_table_1277(t_parse_table_array *v)
{
	v->a[1035][sym_comment] = actions(3);
	v->a[1035][anon_sym_SEMI] = actions(816);
	v->a[1036][anon_sym_BANG] = actions(2009);
	v->a[1036][anon_sym_DASH] = actions(2009);
	v->a[1036][anon_sym_STAR] = actions(2009);
	v->a[1036][anon_sym_QMARK] = actions(2009);
	v->a[1036][anon_sym_DOLLAR] = actions(2009);
	v->a[1036][anon_sym_DQUOTE] = actions(2166);
	v->a[1036][sym_string_content] = actions(2013);
	v->a[1036][anon_sym_POUND] = actions(2009);
	v->a[1036][sym_comment] = actions(3);
	v->a[1036][aux_sym__simple_variable_name_token1] = actions(2015);
	v->a[1036][aux_sym__multiline_variable_name_token1] = actions(2015);
	v->a[1036][anon_sym_AT] = actions(2009);
	v->a[1036][anon_sym_0] = actions(2009);
	v->a[1036][sym_variable_name] = actions(2017);
	v->a[1037][sym_file_redirect] = state(1040);
	v->a[1037][sym_heredoc_redirect] = state(1040);
	v->a[1037][aux_sym_redirected_statement_repeat1] = state(1040);
	v->a[1037][anon_sym_PIPE] = actions(580);
	return (parse_table_1278(v));
}

void	parse_table_1278(t_parse_table_array *v)
{
	v->a[1037][anon_sym_SEMI_SEMI] = actions(816);
	v->a[1037][anon_sym_AMP_AMP] = actions(816);
	v->a[1037][anon_sym_PIPE_PIPE] = actions(816);
	v->a[1037][anon_sym_LT] = actions(816);
	v->a[1037][anon_sym_GT] = actions(816);
	v->a[1037][anon_sym_GT_GT] = actions(816);
	v->a[1037][anon_sym_LT_LT] = actions(816);
	v->a[1037][aux_sym_heredoc_redirect_token1] = actions(827);
	v->a[1037][sym_comment] = actions(3);
	v->a[1037][anon_sym_SEMI] = actions(816);
	v->a[1038][sym_file_redirect] = state(1038);
	v->a[1038][aux_sym_redirected_statement_repeat2] = state(1038);
	v->a[1038][anon_sym_esac] = actions(2080);
	v->a[1038][anon_sym_PIPE] = actions(2080);
	v->a[1038][anon_sym_SEMI_SEMI] = actions(2080);
	v->a[1038][anon_sym_AMP_AMP] = actions(2080);
	v->a[1038][anon_sym_PIPE_PIPE] = actions(2080);
	v->a[1038][anon_sym_LT] = actions(2168);
	v->a[1038][anon_sym_GT] = actions(2168);
	v->a[1038][anon_sym_GT_GT] = actions(2168);
	return (parse_table_1279(v));
}

void	parse_table_1279(t_parse_table_array *v)
{
	v->a[1038][anon_sym_LT_LT] = actions(2080);
	v->a[1038][aux_sym_heredoc_redirect_token1] = actions(2078);
	v->a[1038][sym_comment] = actions(3);
	v->a[1038][anon_sym_SEMI] = actions(2080);
	v->a[1039][ts_builtin_sym_end] = actions(1274);
	v->a[1039][anon_sym_PIPE] = actions(1276);
	v->a[1039][anon_sym_RPAREN] = actions(1276);
	v->a[1039][anon_sym_SEMI_SEMI] = actions(1276);
	v->a[1039][anon_sym_AMP_AMP] = actions(1276);
	v->a[1039][anon_sym_PIPE_PIPE] = actions(1276);
	v->a[1039][anon_sym_LT] = actions(1276);
	v->a[1039][anon_sym_GT] = actions(1276);
	v->a[1039][anon_sym_GT_GT] = actions(1276);
	v->a[1039][anon_sym_LT_LT] = actions(1276);
	v->a[1039][aux_sym_heredoc_redirect_token1] = actions(1274);
	v->a[1039][anon_sym_BQUOTE] = actions(1276);
	v->a[1039][sym_comment] = actions(3);
	v->a[1039][anon_sym_SEMI] = actions(1276);
	v->a[1040][sym_file_redirect] = state(1033);
	v->a[1040][sym_heredoc_redirect] = state(1033);
	return (parse_table_1280(v));
}

/* EOF parse_table_255.c */
