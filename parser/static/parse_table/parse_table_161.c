/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_161.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_805(t_parse_table_array *v)
{
	v->a[505][anon_sym_while] = actions(1040);
	v->a[505][anon_sym_until] = actions(1040);
	v->a[505][anon_sym_if] = actions(1040);
	v->a[505][anon_sym_case] = actions(1040);
	v->a[505][anon_sym_LPAREN] = actions(1040);
	v->a[505][anon_sym_LBRACE] = actions(1040);
	v->a[505][anon_sym_BANG] = actions(1040);
	v->a[505][anon_sym_LT] = actions(1040);
	v->a[505][anon_sym_GT] = actions(1040);
	v->a[505][anon_sym_GT_GT] = actions(1040);
	v->a[505][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1040);
	v->a[505][anon_sym_DOLLAR] = actions(1040);
	v->a[505][anon_sym_DQUOTE] = actions(1040);
	v->a[505][sym_raw_string] = actions(1040);
	v->a[505][sym_number] = actions(1040);
	v->a[505][anon_sym_DOLLAR_LBRACE] = actions(1040);
	v->a[505][anon_sym_DOLLAR_LPAREN] = actions(1040);
	v->a[505][anon_sym_BQUOTE] = actions(1040);
	v->a[505][sym_comment] = actions(3);
	v->a[505][sym_variable_name] = actions(1044);
	return (parse_table_806(v));
}

void	parse_table_806(t_parse_table_array *v)
{
	v->a[506][ts_builtin_sym_end] = actions(1185);
	v->a[506][sym_word] = actions(1040);
	v->a[506][anon_sym_for] = actions(1040);
	v->a[506][anon_sym_while] = actions(1040);
	v->a[506][anon_sym_until] = actions(1040);
	v->a[506][anon_sym_if] = actions(1040);
	v->a[506][anon_sym_case] = actions(1040);
	v->a[506][anon_sym_LPAREN] = actions(1040);
	v->a[506][anon_sym_LBRACE] = actions(1040);
	v->a[506][anon_sym_BANG] = actions(1040);
	v->a[506][anon_sym_LT] = actions(1040);
	v->a[506][anon_sym_GT] = actions(1040);
	v->a[506][anon_sym_GT_GT] = actions(1040);
	v->a[506][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1040);
	v->a[506][anon_sym_DOLLAR] = actions(1040);
	v->a[506][anon_sym_DQUOTE] = actions(1040);
	v->a[506][sym_raw_string] = actions(1040);
	v->a[506][sym_number] = actions(1040);
	v->a[506][anon_sym_DOLLAR_LBRACE] = actions(1040);
	v->a[506][anon_sym_DOLLAR_LPAREN] = actions(1040);
	return (parse_table_807(v));
}

void	parse_table_807(t_parse_table_array *v)
{
	v->a[506][anon_sym_BQUOTE] = actions(1040);
	v->a[506][sym_comment] = actions(3);
	v->a[506][sym_variable_name] = actions(1044);
	v->a[507][sym__case_item_last] = state(1647);
	v->a[507][sym_case_item] = state(1232);
	v->a[507][sym_arithmetic_expansion] = state(1468);
	v->a[507][sym_concatenation] = state(1538);
	v->a[507][sym_string] = state(1468);
	v->a[507][sym_simple_expansion] = state(1468);
	v->a[507][sym_expansion] = state(1468);
	v->a[507][sym_command_substitution] = state(1468);
	v->a[507][sym__extglob_blob] = state(1538);
	v->a[507][aux_sym_case_statement_repeat1] = state(571);
	v->a[507][sym_word] = actions(774);
	v->a[507][anon_sym_esac] = actions(814);
	v->a[507][anon_sym_LPAREN] = actions(778);
	v->a[507][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[507][anon_sym_DOLLAR] = actions(784);
	v->a[507][anon_sym_DQUOTE] = actions(786);
	v->a[507][sym_raw_string] = actions(774);
	return (parse_table_808(v));
}

void	parse_table_808(t_parse_table_array *v)
{
	v->a[507][sym_number] = actions(774);
	v->a[507][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[507][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[507][anon_sym_BQUOTE] = actions(792);
	v->a[507][sym_comment] = actions(3);
	v->a[507][sym_extglob_pattern] = actions(794);
	v->a[508][sym__case_item_last] = state(1712);
	v->a[508][sym_case_item] = state(1232);
	v->a[508][sym_arithmetic_expansion] = state(1468);
	v->a[508][sym_concatenation] = state(1538);
	v->a[508][sym_string] = state(1468);
	v->a[508][sym_simple_expansion] = state(1468);
	v->a[508][sym_expansion] = state(1468);
	v->a[508][sym_command_substitution] = state(1468);
	v->a[508][sym__extglob_blob] = state(1538);
	v->a[508][aux_sym_case_statement_repeat1] = state(518);
	v->a[508][sym_word] = actions(774);
	v->a[508][anon_sym_esac] = actions(1243);
	v->a[508][anon_sym_LPAREN] = actions(778);
	v->a[508][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	return (parse_table_809(v));
}

void	parse_table_809(t_parse_table_array *v)
{
	v->a[508][anon_sym_DOLLAR] = actions(784);
	v->a[508][anon_sym_DQUOTE] = actions(786);
	v->a[508][sym_raw_string] = actions(774);
	v->a[508][sym_number] = actions(774);
	v->a[508][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[508][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[508][anon_sym_BQUOTE] = actions(792);
	v->a[508][sym_comment] = actions(3);
	v->a[508][sym_extglob_pattern] = actions(794);
	v->a[509][sym_arithmetic_expansion] = state(684);
	v->a[509][sym_concatenation] = state(500);
	v->a[509][sym_string] = state(684);
	v->a[509][sym_simple_expansion] = state(684);
	v->a[509][sym_expansion] = state(684);
	v->a[509][sym_command_substitution] = state(684);
	v->a[509][aux_sym_for_statement_repeat1] = state(500);
	v->a[509][sym_word] = actions(1245);
	v->a[509][anon_sym_AMP_AMP] = actions(421);
	v->a[509][anon_sym_PIPE_PIPE] = actions(421);
	v->a[509][anon_sym_LT] = actions(421);
	return (parse_table_810(v));
}

/* EOF parse_table_161.c */
