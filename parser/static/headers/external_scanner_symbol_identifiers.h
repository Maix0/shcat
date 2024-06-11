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
	ts_external_token_regex = 9,
	ts_external_token__expansion_word = 10,
	ts_external_token_extglob_pattern = 11,
	ts_external_token__bare_dollar = 12,
	ts_external_token__immediate_double_hash = 13,
	ts_external_token_LT_LT = 14,
	ts_external_token_LT_LT_DASH = 15,
	ts_external_token_heredoc_redirect_token1 = 16,
	ts_external_token_LPAREN = 17,
	ts_external_token_esac = 18,
	ts_external_token___error_recovery = 19,
};

#endif // EXTERNAL_SCANNER_SYMBOL_IDENTIFIERS_H
