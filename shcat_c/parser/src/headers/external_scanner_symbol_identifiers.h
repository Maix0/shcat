/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_symbol_identifiers.h              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTERNAL_SCANNER_SYMBOL_IDENTIFIERS_H
# define EXTERNAL_SCANNER_SYMBOL_IDENTIFIERS_H

enum e_external_scanner_symbol_identifiers {
	ts_external_token_heredoc_start = 0,
	ts_external_token_simple_heredoc_body = 1,
	ts_external_token__heredoc_body_beginning = 2,
	ts_external_token_heredoc_content = 3,
	ts_external_token_heredoc_end = 4,
	ts_external_token_file_descriptor = 5,
	ts_external_token__empty_value = 6,
	ts_external_token__concat = 7,
	ts_external_token_variable_name = 8,
	ts_external_token_test_operator = 9,
	ts_external_token_regex = 10,
	ts_external_token__regex_no_slash = 11,
	ts_external_token__regex_no_space = 12,
	ts_external_token__expansion_word = 13,
	ts_external_token_extglob_pattern = 14,
	ts_external_token__bare_dollar = 15,
	ts_external_token__brace_start = 16,
	ts_external_token__immediate_double_hash = 17,
	ts_external_token__external_expansion_sym_hash = 18,
	ts_external_token__external_expansion_sym_bang = 19,
	ts_external_token__external_expansion_sym_equal = 20,
	ts_external_token_RBRACE = 21,
	ts_external_token_RBRACK = 22,
	ts_external_token_LT_LT = 23,
	ts_external_token_LT_LT_DASH = 24,
	ts_external_token_heredoc_redirect_token1 = 25,
	ts_external_token_LPAREN = 26,
	ts_external_token_esac = 27,
	ts_external_token___error_recovery = 28,
};

#endif // EXTERNAL_SCANNER_SYMBOL_IDENTIFIERS_H
