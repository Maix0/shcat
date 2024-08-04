/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_271.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1355(t_parse_table_array *v)
{
	v->a[1151][aux_sym__simple_variable_name_token1] = actions(2279);
	v->a[1151][anon_sym_AT] = actions(2275);
	v->a[1151][anon_sym_0] = actions(2281);
	v->a[1151][sym_variable_name] = actions(2283);
	v->a[1152][sym__expansion_body] = state(1670);
	v->a[1152][anon_sym_RBRACE] = actions(2505);
	v->a[1152][anon_sym_BANG] = actions(2275);
	v->a[1152][anon_sym_DASH] = actions(2275);
	v->a[1152][anon_sym_STAR] = actions(2275);
	v->a[1152][anon_sym_QMARK] = actions(2275);
	v->a[1152][anon_sym_DOLLAR] = actions(2275);
	v->a[1152][anon_sym_POUND] = actions(2277);
	v->a[1152][sym_comment] = actions(3);
	v->a[1152][aux_sym__simple_variable_name_token1] = actions(2279);
	v->a[1152][anon_sym_AT] = actions(2275);
	v->a[1152][anon_sym_0] = actions(2281);
	v->a[1152][sym_variable_name] = actions(2283);
	v->a[1153][sym_arithmetic_expansion] = state(1394);
	v->a[1153][sym_simple_expansion] = state(1394);
	v->a[1153][sym_expansion] = state(1394);
	return (parse_table_1356(v));
}

void	parse_table_1356(t_parse_table_array *v)
{
	v->a[1153][sym_command_substitution] = state(1394);
	v->a[1153][aux_sym_string_repeat1] = state(1150);
	v->a[1153][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(2293);
	v->a[1153][anon_sym_DOLLAR] = actions(2507);
	v->a[1153][anon_sym_DQUOTE] = actions(2509);
	v->a[1153][sym_string_content] = actions(2299);
	v->a[1153][anon_sym_DOLLAR_LBRACE] = actions(2301);
	v->a[1153][anon_sym_DOLLAR_LPAREN] = actions(2303);
	v->a[1153][anon_sym_BQUOTE] = actions(2305);
	v->a[1153][sym_comment] = actions(3);
	v->a[1154][aux_sym_pipeline_repeat1] = state(1154);
	v->a[1154][anon_sym_PIPE] = actions(2511);
	v->a[1154][anon_sym_RPAREN] = actions(1979);
	v->a[1154][anon_sym_SEMI_SEMI] = actions(1979);
	v->a[1154][anon_sym_AMP_AMP] = actions(1979);
	v->a[1154][anon_sym_PIPE_PIPE] = actions(1979);
	v->a[1154][anon_sym_LT] = actions(1979);
	v->a[1154][anon_sym_GT] = actions(1979);
	v->a[1154][anon_sym_GT_GT] = actions(1979);
	v->a[1154][anon_sym_LT_LT] = actions(1979);
	return (parse_table_1357(v));
}

void	parse_table_1357(t_parse_table_array *v)
{
	v->a[1154][aux_sym_heredoc_redirect_token1] = actions(1974);
	v->a[1154][sym_comment] = actions(3);
	v->a[1154][anon_sym_SEMI] = actions(1979);
	v->a[1155][aux_sym_pipeline_repeat1] = state(1137);
	v->a[1155][ts_builtin_sym_end] = actions(2357);
	v->a[1155][anon_sym_PIPE] = actions(2514);
	v->a[1155][anon_sym_SEMI_SEMI] = actions(2353);
	v->a[1155][anon_sym_AMP_AMP] = actions(2353);
	v->a[1155][anon_sym_PIPE_PIPE] = actions(2353);
	v->a[1155][anon_sym_LT] = actions(2353);
	v->a[1155][anon_sym_GT] = actions(2353);
	v->a[1155][anon_sym_GT_GT] = actions(2353);
	v->a[1155][anon_sym_LT_LT] = actions(2353);
	v->a[1155][aux_sym_heredoc_redirect_token1] = actions(2357);
	v->a[1155][sym_comment] = actions(3);
	v->a[1155][anon_sym_SEMI] = actions(2353);
	v->a[1156][sym_arithmetic_expansion] = state(1394);
	v->a[1156][sym_simple_expansion] = state(1394);
	v->a[1156][sym_expansion] = state(1394);
	v->a[1156][sym_command_substitution] = state(1394);
	return (parse_table_1358(v));
}

void	parse_table_1358(t_parse_table_array *v)
{
	v->a[1156][aux_sym_string_repeat1] = state(1176);
	v->a[1156][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(2293);
	v->a[1156][anon_sym_DOLLAR] = actions(2516);
	v->a[1156][anon_sym_DQUOTE] = actions(2518);
	v->a[1156][sym_string_content] = actions(2299);
	v->a[1156][anon_sym_DOLLAR_LBRACE] = actions(2301);
	v->a[1156][anon_sym_DOLLAR_LPAREN] = actions(2303);
	v->a[1156][anon_sym_BQUOTE] = actions(2305);
	v->a[1156][sym_comment] = actions(3);
	v->a[1157][sym_word] = actions(2520);
	v->a[1157][anon_sym_esac] = actions(2522);
	v->a[1157][anon_sym_LPAREN] = actions(2520);
	v->a[1157][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(2520);
	v->a[1157][anon_sym_DOLLAR] = actions(2520);
	v->a[1157][anon_sym_DQUOTE] = actions(2520);
	v->a[1157][sym_raw_string] = actions(2520);
	v->a[1157][sym_number] = actions(2520);
	v->a[1157][anon_sym_DOLLAR_LBRACE] = actions(2520);
	v->a[1157][anon_sym_DOLLAR_LPAREN] = actions(2520);
	v->a[1157][anon_sym_BQUOTE] = actions(2520);
	return (parse_table_1359(v));
}

void	parse_table_1359(t_parse_table_array *v)
{
	v->a[1157][sym_comment] = actions(3);
	v->a[1157][sym_extglob_pattern] = actions(2524);
	v->a[1158][sym__expansion_body] = state(1646);
	v->a[1158][anon_sym_RBRACE] = actions(2526);
	v->a[1158][anon_sym_BANG] = actions(2275);
	v->a[1158][anon_sym_DASH] = actions(2275);
	v->a[1158][anon_sym_STAR] = actions(2275);
	v->a[1158][anon_sym_QMARK] = actions(2275);
	v->a[1158][anon_sym_DOLLAR] = actions(2275);
	v->a[1158][anon_sym_POUND] = actions(2277);
	v->a[1158][sym_comment] = actions(3);
	v->a[1158][aux_sym__simple_variable_name_token1] = actions(2279);
	v->a[1158][anon_sym_AT] = actions(2275);
	v->a[1158][anon_sym_0] = actions(2281);
	v->a[1158][sym_variable_name] = actions(2283);
	v->a[1159][sym_arithmetic_expansion] = state(1394);
	v->a[1159][sym_simple_expansion] = state(1394);
	v->a[1159][sym_expansion] = state(1394);
	v->a[1159][sym_command_substitution] = state(1394);
	v->a[1159][aux_sym_string_repeat1] = state(1156);
	return (parse_table_1360(v));
}

/* EOF parse_table_271.c */
