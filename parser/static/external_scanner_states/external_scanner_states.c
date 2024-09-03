/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_states.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_external_scanner_states.h"
#include "../headers/symbols.h"
#include "../headers/external_scanner_symbol_identifiers.h"
#include "../headers/field_identifiers.h"

#include "../headers/constants.h"

static const \
t_external_scanner_states_array	g_t_external_scanner_states_array = {.a = {
[1] = {
[ts_external_token_heredoc_start] = true,
[ts_external_token_simple_heredoc_body] = true,
[ts_external_token__heredoc_body_beginning] = true,
[ts_external_token_heredoc_content] = true,
[ts_external_token_heredoc_end] = true,
[ts_external_token_file_descriptor] = true,
[ts_external_token__empty_value] = true,
[ts_external_token__concat] = true,
[ts_external_token_variable_name] = true,
[ts_external_token_regex] = true,
[ts_external_token__expansion_word] = true,
[ts_external_token_extglob_pattern] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token__immediate_double_hash] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_LT_LT_DASH] = true,
[ts_external_token_LPAREN] = true,
[ts_external_token_esac] = true,
[ts_external_token___error_recovery] = true,
},
[2] = {
[ts_external_token_variable_name] = true,
[ts_external_token_LPAREN] = true,
},
[3] = {
[ts_external_token_variable_name] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
},
[4] = {
[ts_external_token_variable_name] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
[ts_external_token_esac] = true,
},
[5] = {
[ts_external_token_variable_name] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
},
[6] = {
[ts_external_token_variable_name] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
[ts_external_token_esac] = true,
},
[7] = {
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
[ts_external_token_esac] = true,
},
[8] = {
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
},
[9] = {
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
},
[10] = {
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
[ts_external_token_esac] = true,
},
[11] = {
[ts_external_token_variable_name] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
},
[12] = {
[ts_external_token_heredoc_redirect_token1] = true,
},
[13] = {
[ts_external_token_extglob_pattern] = true,
[ts_external_token_heredoc_redirect_token1] = true,
[ts_external_token_LPAREN] = true,
[ts_external_token_esac] = true,
},
[14] = {
[ts_external_token_variable_name] = true,
[ts_external_token_LT_LT] = true,
},
[15] = {
[ts_external_token__concat] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
[ts_external_token_LPAREN] = true,
[ts_external_token_esac] = true,
},
[16] = {
[ts_external_token__concat] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
[ts_external_token_LPAREN] = true,
},
[17] = {
[ts_external_token_variable_name] = true,
[ts_external_token_heredoc_redirect_token1] = true,
},
[18] = {
[ts_external_token__concat] = true,
[ts_external_token_variable_name] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
},
[19] = {
[ts_external_token__concat] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
[ts_external_token_esac] = true,
},
[20] = {
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
},
[21] = {
[ts_external_token__concat] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
},
[22] = {
[ts_external_token_variable_name] = true,
[ts_external_token__immediate_double_hash] = true,
},
[23] = {
[ts_external_token__concat] = true,
[ts_external_token_variable_name] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
[ts_external_token_esac] = true,
},
[24] = {
[ts_external_token_variable_name] = true,
[ts_external_token_LPAREN] = true,
[ts_external_token_esac] = true,
},
[25] = {
[ts_external_token_variable_name] = true,
},
[26] = {
[ts_external_token_LT_LT] = true,
},
[27] = {
[ts_external_token__concat] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
[ts_external_token_esac] = true,
},
[28] = {
[ts_external_token__concat] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_heredoc_redirect_token1] = true,
},
[29] = {
[ts_external_token_regex] = true,
[ts_external_token__immediate_double_hash] = true,
},
[30] = {
[ts_external_token_extglob_pattern] = true,
[ts_external_token_LPAREN] = true,
[ts_external_token_esac] = true,
},
[31] = {
[ts_external_token_extglob_pattern] = true,
[ts_external_token_LPAREN] = true,
},
[32] = {
[ts_external_token__concat] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
[ts_external_token_LPAREN] = true,
},
[33] = {
[ts_external_token__concat] = true,
[ts_external_token__bare_dollar] = true,
[ts_external_token_LT_LT] = true,
},
[34] = {
[ts_external_token__concat] = true,
[ts_external_token_variable_name] = true,
[ts_external_token_LT_LT] = true,
},
[35] = {
[ts_external_token__concat] = true,
[ts_external_token_heredoc_redirect_token1] = true,
},
[36] = {
[ts_external_token__concat] = true,
[ts_external_token_LT_LT] = true,
},
[37] = {
[ts_external_token__bare_dollar] = true,
},
[38] = {
[ts_external_token__empty_value] = true,
},
[39] = {
[ts_external_token_extglob_pattern] = true,
},
[40] = {
[ts_external_token__concat] = true,
[ts_external_token_variable_name] = true,
},
[41] = {
[ts_external_token_variable_name] = true,
[ts_external_token__expansion_word] = true,
},
[42] = {
[ts_external_token__immediate_double_hash] = true,
},
[43] = {
[ts_external_token_heredoc_content] = true,
[ts_external_token_heredoc_end] = true,
},
[44] = {
[ts_external_token__concat] = true,
},
[45] = {
[ts_external_token_regex] = true,
},
[46] = {
[ts_external_token_simple_heredoc_body] = true,
[ts_external_token__heredoc_body_beginning] = true,
},
[47] = {
[ts_external_token_esac] = true,
},
[48] = {
[ts_external_token_heredoc_end] = true,
},
[49] = {
[ts_external_token_heredoc_start] = true,
},
}};

const t_external_scanner_states_array	*create_external_scanner_states(void)
{
	return (&g_t_external_scanner_states_array);
}
