/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_93.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_465(t_parse_table_array *v)
{
	v->a[223][sym_raw_string] = actions(105);
	v->a[223][sym_number] = actions(105);
	v->a[223][anon_sym_DOLLAR_LBRACE] = actions(107);
	v->a[223][anon_sym_DOLLAR_LPAREN] = actions(109);
	v->a[223][anon_sym_BQUOTE] = actions(111);
	v->a[223][sym_comment] = actions(3);
	v->a[223][sym_variable_name] = actions(113);
	v->a[224][sym_arithmetic_expansion] = state(493);
	v->a[224][sym_concatenation] = state(225);
	v->a[224][sym_string] = state(493);
	v->a[224][sym_simple_expansion] = state(493);
	v->a[224][sym_expansion] = state(493);
	v->a[224][sym_command_substitution] = state(493);
	v->a[224][aux_sym_for_statement_repeat1] = state(225);
	v->a[224][sym_word] = actions(760);
	v->a[224][anon_sym_PIPE] = actions(421);
	v->a[224][anon_sym_SEMI_SEMI] = actions(421);
	v->a[224][anon_sym_AMP_AMP] = actions(421);
	v->a[224][anon_sym_PIPE_PIPE] = actions(421);
	v->a[224][anon_sym_LT] = actions(421);
	return (parse_table_466(v));
}

void	parse_table_466(t_parse_table_array *v)
{
	v->a[224][anon_sym_GT] = actions(421);
	v->a[224][anon_sym_GT_GT] = actions(421);
	v->a[224][anon_sym_LT_LT] = actions(421);
	v->a[224][aux_sym_heredoc_redirect_token1] = actions(421);
	v->a[224][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(704);
	v->a[224][anon_sym_DOLLAR] = actions(706);
	v->a[224][anon_sym_DQUOTE] = actions(708);
	v->a[224][sym_raw_string] = actions(760);
	v->a[224][sym_number] = actions(760);
	v->a[224][anon_sym_DOLLAR_LBRACE] = actions(710);
	v->a[224][anon_sym_DOLLAR_LPAREN] = actions(712);
	v->a[224][anon_sym_BQUOTE] = actions(714);
	v->a[224][sym_comment] = actions(3);
	v->a[224][anon_sym_SEMI] = actions(421);
	v->a[225][sym_arithmetic_expansion] = state(493);
	v->a[225][sym_concatenation] = state(225);
	v->a[225][sym_string] = state(493);
	v->a[225][sym_simple_expansion] = state(493);
	v->a[225][sym_expansion] = state(493);
	v->a[225][sym_command_substitution] = state(493);
	return (parse_table_467(v));
}

void	parse_table_467(t_parse_table_array *v)
{
	v->a[225][aux_sym_for_statement_repeat1] = state(225);
	v->a[225][sym_word] = actions(818);
	v->a[225][anon_sym_PIPE] = actions(428);
	v->a[225][anon_sym_SEMI_SEMI] = actions(428);
	v->a[225][anon_sym_AMP_AMP] = actions(428);
	v->a[225][anon_sym_PIPE_PIPE] = actions(428);
	v->a[225][anon_sym_LT] = actions(428);
	v->a[225][anon_sym_GT] = actions(428);
	v->a[225][anon_sym_GT_GT] = actions(428);
	v->a[225][anon_sym_LT_LT] = actions(428);
	v->a[225][aux_sym_heredoc_redirect_token1] = actions(428);
	v->a[225][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(607);
	v->a[225][anon_sym_DOLLAR] = actions(610);
	v->a[225][anon_sym_DQUOTE] = actions(613);
	v->a[225][sym_raw_string] = actions(818);
	v->a[225][sym_number] = actions(818);
	v->a[225][anon_sym_DOLLAR_LBRACE] = actions(616);
	v->a[225][anon_sym_DOLLAR_LPAREN] = actions(619);
	v->a[225][anon_sym_BQUOTE] = actions(622);
	v->a[225][sym_comment] = actions(3);
	return (parse_table_468(v));
}

void	parse_table_468(t_parse_table_array *v)
{
	v->a[225][anon_sym_SEMI] = actions(428);
	v->a[226][sym__case_item_last] = state(1627);
	v->a[226][sym_case_item] = state(1232);
	v->a[226][sym_arithmetic_expansion] = state(1468);
	v->a[226][sym_concatenation] = state(1538);
	v->a[226][sym_string] = state(1468);
	v->a[226][sym_simple_expansion] = state(1468);
	v->a[226][sym_expansion] = state(1468);
	v->a[226][sym_command_substitution] = state(1468);
	v->a[226][sym__extglob_blob] = state(1538);
	v->a[226][sym_terminator] = state(485);
	v->a[226][aux_sym_case_statement_repeat1] = state(524);
	v->a[226][sym_word] = actions(774);
	v->a[226][anon_sym_esac] = actions(821);
	v->a[226][anon_sym_LPAREN] = actions(778);
	v->a[226][anon_sym_SEMI_SEMI] = actions(780);
	v->a[226][aux_sym_heredoc_redirect_token1] = actions(780);
	v->a[226][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[226][anon_sym_DOLLAR] = actions(784);
	v->a[226][anon_sym_DQUOTE] = actions(786);
	return (parse_table_469(v));
}

void	parse_table_469(t_parse_table_array *v)
{
	v->a[226][sym_raw_string] = actions(774);
	v->a[226][sym_number] = actions(774);
	v->a[226][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[226][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[226][anon_sym_BQUOTE] = actions(792);
	v->a[226][sym_comment] = actions(3);
	v->a[226][anon_sym_SEMI] = actions(780);
	v->a[226][sym_extglob_pattern] = actions(794);
	v->a[227][sym_variable_assignment] = state(963);
	v->a[227][sym_file_redirect] = state(916);
	v->a[227][sym_heredoc_redirect] = state(916);
	v->a[227][aux_sym_redirected_statement_repeat1] = state(916);
	v->a[227][aux_sym__variable_assignments_repeat1] = state(963);
	v->a[227][sym_word] = actions(576);
	v->a[227][anon_sym_PIPE] = actions(580);
	v->a[227][anon_sym_RPAREN] = actions(816);
	v->a[227][anon_sym_SEMI_SEMI] = actions(816);
	v->a[227][anon_sym_AMP_AMP] = actions(816);
	v->a[227][anon_sym_PIPE_PIPE] = actions(816);
	v->a[227][anon_sym_LT] = actions(576);
	return (parse_table_470(v));
}

/* EOF parse_table_93.c */
