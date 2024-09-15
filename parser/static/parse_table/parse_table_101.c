/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_101.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_505(t_parse_table_array *v)
{
	v->a[410][sym_number] = actions(1073);
	v->a[410][anon_sym_DOLLAR_LBRACE] = actions(1003);
	v->a[410][anon_sym_DOLLAR_LPAREN] = actions(1005);
	v->a[410][anon_sym_BQUOTE] = actions(1007);
	v->a[410][sym_comment] = actions(3);
	v->a[410][sym__comment_word] = actions(1075);
	v->a[410][sym__empty_value] = actions(1077);
	v->a[411][sym_arithmetic_expansion] = state(332);
	v->a[411][sym_string] = state(332);
	v->a[411][sym_simple_expansion] = state(332);
	v->a[411][sym_expansion] = state(332);
	v->a[411][sym_command_substitution] = state(332);
	v->a[411][sym_word] = actions(983);
	v->a[411][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(929);
	v->a[411][aux_sym_concatenation_token1] = actions(983);
	v->a[411][anon_sym_DOLLAR] = actions(931);
	v->a[411][anon_sym_DQUOTE] = actions(933);
	v->a[411][sym_raw_string] = actions(983);
	v->a[411][sym_number] = actions(983);
	v->a[411][anon_sym_DOLLAR_LBRACE] = actions(935);
	return (parse_table_506(v));
}

void	parse_table_506(t_parse_table_array *v)
{
	v->a[411][anon_sym_DOLLAR_LPAREN] = actions(937);
	v->a[411][anon_sym_BQUOTE] = actions(939);
	v->a[411][sym_comment] = actions(3);
	v->a[411][sym__comment_word] = actions(983);
	v->a[411][sym__bare_dollar] = actions(987);
	v->a[412][sym_arithmetic_expansion] = state(226);
	v->a[412][sym_string] = state(226);
	v->a[412][sym_simple_expansion] = state(226);
	v->a[412][sym_expansion] = state(226);
	v->a[412][sym_command_substitution] = state(226);
	v->a[412][sym_word] = actions(1031);
	v->a[412][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(429);
	v->a[412][aux_sym_concatenation_token1] = actions(1031);
	v->a[412][anon_sym_DOLLAR] = actions(431);
	v->a[412][anon_sym_DQUOTE] = actions(433);
	v->a[412][sym_raw_string] = actions(1031);
	v->a[412][sym_number] = actions(1031);
	v->a[412][anon_sym_DOLLAR_LBRACE] = actions(435);
	v->a[412][anon_sym_DOLLAR_LPAREN] = actions(437);
	v->a[412][anon_sym_BQUOTE] = actions(439);
	return (parse_table_507(v));
}

void	parse_table_507(t_parse_table_array *v)
{
	v->a[412][sym_comment] = actions(3);
	v->a[412][sym__comment_word] = actions(1031);
	v->a[412][sym__bare_dollar] = actions(1035);
	v->a[413][aux_sym_concatenation_repeat1] = state(413);
	v->a[413][ts_builtin_sym_end] = actions(504);
	v->a[413][anon_sym_RPAREN] = actions(496);
	v->a[413][anon_sym_PIPE] = actions(496);
	v->a[413][anon_sym_AMP_AMP] = actions(496);
	v->a[413][anon_sym_PIPE_PIPE] = actions(496);
	v->a[413][anon_sym_LT] = actions(496);
	v->a[413][anon_sym_GT] = actions(496);
	v->a[413][anon_sym_GT_GT] = actions(496);
	v->a[413][anon_sym_LT_LT] = actions(496);
	v->a[413][aux_sym_concatenation_token1] = actions(1079);
	v->a[413][anon_sym_BQUOTE] = actions(496);
	v->a[413][sym_comment] = actions(3);
	v->a[413][anon_sym_SEMI] = actions(496);
	v->a[413][anon_sym_SEMI_SEMI] = actions(496);
	v->a[413][aux_sym_terminator_token1] = actions(504);
	v->a[413][sym__concat] = actions(1082);
	return (parse_table_508(v));
}

void	parse_table_508(t_parse_table_array *v)
{
	v->a[413][sym_variable_name] = actions(504);
	v->a[414][sym_arithmetic_expansion] = state(162);
	v->a[414][sym_string] = state(162);
	v->a[414][sym_simple_expansion] = state(162);
	v->a[414][sym_expansion] = state(162);
	v->a[414][sym_command_substitution] = state(162);
	v->a[414][sym_word] = actions(1043);
	v->a[414][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(75);
	v->a[414][aux_sym_concatenation_token1] = actions(1043);
	v->a[414][anon_sym_DOLLAR] = actions(77);
	v->a[414][anon_sym_DQUOTE] = actions(79);
	v->a[414][sym_raw_string] = actions(1043);
	v->a[414][sym_number] = actions(1043);
	v->a[414][anon_sym_DOLLAR_LBRACE] = actions(81);
	v->a[414][anon_sym_DOLLAR_LPAREN] = actions(83);
	v->a[414][anon_sym_BQUOTE] = actions(85);
	v->a[414][sym_comment] = actions(3);
	v->a[414][sym__comment_word] = actions(1043);
	v->a[414][sym__bare_dollar] = actions(1047);
	v->a[415][sym_arithmetic_expansion] = state(235);
	return (parse_table_509(v));
}

void	parse_table_509(t_parse_table_array *v)
{
	v->a[415][sym_string] = state(235);
	v->a[415][sym_simple_expansion] = state(235);
	v->a[415][sym_expansion] = state(235);
	v->a[415][sym_command_substitution] = state(235);
	v->a[415][sym_word] = actions(1057);
	v->a[415][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(380);
	v->a[415][aux_sym_concatenation_token1] = actions(1057);
	v->a[415][anon_sym_DOLLAR] = actions(1085);
	v->a[415][anon_sym_DQUOTE] = actions(384);
	v->a[415][sym_raw_string] = actions(1057);
	v->a[415][sym_number] = actions(1057);
	v->a[415][anon_sym_DOLLAR_LBRACE] = actions(386);
	v->a[415][anon_sym_DOLLAR_LPAREN] = actions(388);
	v->a[415][anon_sym_BQUOTE] = actions(390);
	v->a[415][sym_comment] = actions(3);
	v->a[415][sym__comment_word] = actions(1057);
	v->a[415][sym__bare_dollar] = actions(1061);
	v->a[416][ts_builtin_sym_end] = actions(631);
	v->a[416][anon_sym_RPAREN] = actions(633);
	v->a[416][anon_sym_PIPE] = actions(633);
	return (parse_table_510(v));
}

/* EOF parse_table_101.c */
