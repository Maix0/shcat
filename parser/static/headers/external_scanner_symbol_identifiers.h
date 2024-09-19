/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_symbol_identifiers.h              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 11:29:21 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTERNAL_SCANNER_SYMBOL_IDENTIFIERS_H
# define EXTERNAL_SCANNER_SYMBOL_IDENTIFIERS_H

enum e_external_scanner_symbol_identifiers
{
	ts_external_token_file_descriptor = 0,
	ts_external_token__empty_value = 1,
	ts_external_token__concat = 2,
	ts_external_token_variable_name = 3,
	ts_external_token_regex = 4,
	ts_external_token__expansion_word = 5,
	ts_external_token_extglob_pattern = 6,
	ts_external_token__bare_dollar = 7,
	ts_external_token__immediate_double_hash = 8,
	ts_external_token_terminator_token1 = 9,
	ts_external_token_LPAREN = 10,
	ts_external_token___error_recovery = 11,
};

#endif // EXTERNAL_SCANNER_SYMBOL_IDENTIFIERS_H
