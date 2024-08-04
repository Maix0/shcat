/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_281.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1405(t_parse_table_array *v)
{
	v->a[1231][sym_comment] = actions(3);
	v->a[1231][anon_sym_SEMI] = actions(1276);
	v->a[1232][sym_word] = actions(2649);
	v->a[1232][anon_sym_LPAREN] = actions(2649);
	v->a[1232][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(2649);
	v->a[1232][anon_sym_DOLLAR] = actions(2649);
	v->a[1232][anon_sym_DQUOTE] = actions(2649);
	v->a[1232][sym_raw_string] = actions(2649);
	v->a[1232][sym_number] = actions(2649);
	v->a[1232][anon_sym_DOLLAR_LBRACE] = actions(2649);
	v->a[1232][anon_sym_DOLLAR_LPAREN] = actions(2649);
	v->a[1232][anon_sym_BQUOTE] = actions(2649);
	v->a[1232][sym_comment] = actions(3);
	v->a[1232][sym_extglob_pattern] = actions(2651);
	v->a[1233][anon_sym_esac] = actions(2027);
	v->a[1233][anon_sym_PIPE] = actions(2027);
	v->a[1233][anon_sym_SEMI_SEMI] = actions(2027);
	v->a[1233][anon_sym_AMP_AMP] = actions(2027);
	v->a[1233][anon_sym_PIPE_PIPE] = actions(2027);
	v->a[1233][anon_sym_LT] = actions(2027);
	return (parse_table_1406(v));
}

void	parse_table_1406(t_parse_table_array *v)
{
	v->a[1233][anon_sym_GT] = actions(2027);
	v->a[1233][anon_sym_GT_GT] = actions(2027);
	v->a[1233][anon_sym_LT_LT] = actions(2027);
	v->a[1233][aux_sym_heredoc_redirect_token1] = actions(2025);
	v->a[1233][sym_comment] = actions(3);
	v->a[1233][anon_sym_SEMI] = actions(2027);
	v->a[1234][anon_sym_esac] = actions(2031);
	v->a[1234][anon_sym_PIPE] = actions(2031);
	v->a[1234][anon_sym_SEMI_SEMI] = actions(2031);
	v->a[1234][anon_sym_AMP_AMP] = actions(2031);
	v->a[1234][anon_sym_PIPE_PIPE] = actions(2031);
	v->a[1234][anon_sym_LT] = actions(2031);
	v->a[1234][anon_sym_GT] = actions(2031);
	v->a[1234][anon_sym_GT_GT] = actions(2031);
	v->a[1234][anon_sym_LT_LT] = actions(2031);
	v->a[1234][aux_sym_heredoc_redirect_token1] = actions(2029);
	v->a[1234][sym_comment] = actions(3);
	v->a[1234][anon_sym_SEMI] = actions(2031);
	v->a[1235][anon_sym_BANG] = actions(2653);
	v->a[1235][anon_sym_DASH] = actions(2653);
	return (parse_table_1407(v));
}

void	parse_table_1407(t_parse_table_array *v)
{
	v->a[1235][anon_sym_STAR] = actions(2653);
	v->a[1235][anon_sym_QMARK] = actions(2653);
	v->a[1235][anon_sym_DOLLAR] = actions(2653);
	v->a[1235][anon_sym_POUND] = actions(2653);
	v->a[1235][sym_comment] = actions(3);
	v->a[1235][aux_sym__simple_variable_name_token1] = actions(2655);
	v->a[1235][aux_sym__multiline_variable_name_token1] = actions(2655);
	v->a[1235][anon_sym_AT] = actions(2653);
	v->a[1235][anon_sym_0] = actions(2653);
	v->a[1235][sym_variable_name] = actions(2657);
	v->a[1236][sym_variable_assignment] = state(1236);
	v->a[1236][aux_sym__variable_assignments_repeat1] = state(1236);
	v->a[1236][anon_sym_PIPE] = actions(1961);
	v->a[1236][anon_sym_AMP_AMP] = actions(1961);
	v->a[1236][anon_sym_PIPE_PIPE] = actions(1961);
	v->a[1236][anon_sym_LT] = actions(1961);
	v->a[1236][anon_sym_GT] = actions(1961);
	v->a[1236][anon_sym_GT_GT] = actions(1961);
	v->a[1236][anon_sym_LT_LT] = actions(1961);
	v->a[1236][aux_sym_heredoc_redirect_token1] = actions(1963);
	return (parse_table_1408(v));
}

void	parse_table_1408(t_parse_table_array *v)
{
	v->a[1236][sym_comment] = actions(3);
	v->a[1236][sym_variable_name] = actions(2659);
	v->a[1237][anon_sym_esac] = actions(2041);
	v->a[1237][anon_sym_PIPE] = actions(2041);
	v->a[1237][anon_sym_SEMI_SEMI] = actions(2041);
	v->a[1237][anon_sym_AMP_AMP] = actions(2041);
	v->a[1237][anon_sym_PIPE_PIPE] = actions(2041);
	v->a[1237][anon_sym_LT] = actions(2041);
	v->a[1237][anon_sym_GT] = actions(2041);
	v->a[1237][anon_sym_GT_GT] = actions(2041);
	v->a[1237][anon_sym_LT_LT] = actions(2041);
	v->a[1237][aux_sym_heredoc_redirect_token1] = actions(2039);
	v->a[1237][sym_comment] = actions(3);
	v->a[1237][anon_sym_SEMI] = actions(2041);
	v->a[1238][anon_sym_BANG] = actions(1187);
	v->a[1238][anon_sym_DASH] = actions(1187);
	v->a[1238][anon_sym_STAR] = actions(1187);
	v->a[1238][anon_sym_QMARK] = actions(1187);
	v->a[1238][anon_sym_DOLLAR] = actions(1187);
	v->a[1238][anon_sym_POUND] = actions(1187);
	return (parse_table_1409(v));
}

void	parse_table_1409(t_parse_table_array *v)
{
	v->a[1238][sym_comment] = actions(3);
	v->a[1238][aux_sym__simple_variable_name_token1] = actions(1189);
	v->a[1238][aux_sym__multiline_variable_name_token1] = actions(1189);
	v->a[1238][anon_sym_AT] = actions(1187);
	v->a[1238][anon_sym_0] = actions(1187);
	v->a[1238][sym_variable_name] = actions(1191);
	v->a[1239][anon_sym_esac] = actions(2049);
	v->a[1239][anon_sym_PIPE] = actions(2049);
	v->a[1239][anon_sym_SEMI_SEMI] = actions(2049);
	v->a[1239][anon_sym_AMP_AMP] = actions(2049);
	v->a[1239][anon_sym_PIPE_PIPE] = actions(2049);
	v->a[1239][anon_sym_LT] = actions(2049);
	v->a[1239][anon_sym_GT] = actions(2049);
	v->a[1239][anon_sym_GT_GT] = actions(2049);
	v->a[1239][anon_sym_LT_LT] = actions(2049);
	v->a[1239][aux_sym_heredoc_redirect_token1] = actions(2047);
	v->a[1239][sym_comment] = actions(3);
	v->a[1239][anon_sym_SEMI] = actions(2049);
	v->a[1240][anon_sym_esac] = actions(2053);
	v->a[1240][anon_sym_PIPE] = actions(2053);
	return (parse_table_1410(v));
}

/* EOF parse_table_281.c */
