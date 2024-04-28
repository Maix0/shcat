/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_symbol_map_0.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./external_scanner_symbol_map.h"

void	external_scanner_symbol_map_0(t_external_scanner_symbol_map_array *v)
{
	v->a[ts_external_token_heredoc_start] = sym_heredoc_start;
	v->a[ts_external_token_simple_heredoc_body] = sym_simple_heredoc_body;
	v->a[ts_external_token__heredoc_body_beginning] \
	= sym__heredoc_body_beginning;
	v->a[ts_external_token_heredoc_content] = sym_heredoc_content;
	v->a[ts_external_token_heredoc_end] = sym_heredoc_end;
	v->a[ts_external_token_file_descriptor] = sym_file_descriptor;
	v->a[ts_external_token__empty_value] = sym__empty_value;
	v->a[ts_external_token__concat] = sym__concat;
	v->a[ts_external_token_variable_name] = sym_variable_name;
	v->a[ts_external_token_test_operator] = sym_test_operator;
	v->a[ts_external_token_regex] = sym_regex;
	v->a[ts_external_token__regex_no_slash] = sym__regex_no_slash;
	v->a[ts_external_token__regex_no_space] = sym__regex_no_space;
	v->a[ts_external_token__expansion_word] = sym__expansion_word;
	v->a[ts_external_token_extglob_pattern] = sym_extglob_pattern;
	v->a[ts_external_token__bare_dollar] = sym__bare_dollar;
	v->a[ts_external_token__brace_start] = sym__brace_start;
	v->a[ts_external_token__immediate_double_hash] \
	= sym__immediate_double_hash;
	v->a[ts_external_token__external_expansion_sym_hash] \
	= sym__external_expansion_sym_hash;
	v->a[ts_external_token__external_expansion_sym_bang] \
	= sym__external_expansion_sym_bang;
	external_scanner_symbol_map_1(v);
}

void	external_scanner_symbol_map_1(t_external_scanner_symbol_map_array *v)
{
	v->a[ts_external_token__external_expansion_sym_equal] \
	= sym__external_expansion_sym_equal;
	v->a[ts_external_token_RBRACE] = anon_sym_RBRACE3;
	v->a[ts_external_token_RBRACK] = anon_sym_RBRACK;
	v->a[ts_external_token_LT_LT] = anon_sym_LT_LT;
	v->a[ts_external_token_LT_LT_DASH] = anon_sym_LT_LT_DASH;
	v->a[ts_external_token_heredoc_redirect_token1] \
	= aux_sym_heredoc_redirect_token1;
	v->a[ts_external_token_LPAREN] = anon_sym_LPAREN;
	v->a[ts_external_token_esac] = anon_sym_esac;
	v->a[ts_external_token___error_recovery] = sym___error_recovery;
}

/* EOF external_scanner_symbol_map_0.c */
