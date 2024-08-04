/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_213.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1065(t_parse_table_array *v)
{
	v->a[762][sym_number] = actions(919);
	v->a[762][anon_sym_DOLLAR_LBRACE] = actions(919);
	v->a[762][anon_sym_DOLLAR_LPAREN] = actions(919);
	v->a[762][anon_sym_BQUOTE] = actions(919);
	v->a[762][sym_comment] = actions(3);
	v->a[762][sym_variable_name] = actions(917);
	v->a[763][sym_arithmetic_expansion] = state(1293);
	v->a[763][sym_string] = state(1293);
	v->a[763][sym_simple_expansion] = state(1293);
	v->a[763][sym_expansion] = state(1293);
	v->a[763][sym_command_substitution] = state(1293);
	v->a[763][sym_word] = actions(1729);
	v->a[763][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1665);
	v->a[763][aux_sym_concatenation_token1] = actions(1729);
	v->a[763][anon_sym_DOLLAR] = actions(1798);
	v->a[763][anon_sym_DQUOTE] = actions(1669);
	v->a[763][sym_raw_string] = actions(1729);
	v->a[763][sym_number] = actions(1729);
	v->a[763][anon_sym_DOLLAR_LBRACE] = actions(1671);
	v->a[763][anon_sym_DOLLAR_LPAREN] = actions(1673);
	return (parse_table_1066(v));
}

void	parse_table_1066(t_parse_table_array *v)
{
	v->a[763][anon_sym_BQUOTE] = actions(1675);
	v->a[763][sym_comment] = actions(3);
	v->a[763][sym__comment_word] = actions(1729);
	v->a[763][sym__bare_dollar] = actions(1731);
	v->a[764][sym_arithmetic_expansion] = state(475);
	v->a[764][sym_string] = state(475);
	v->a[764][sym_simple_expansion] = state(475);
	v->a[764][sym_expansion] = state(475);
	v->a[764][sym_command_substitution] = state(475);
	v->a[764][sym_word] = actions(1725);
	v->a[764][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(627);
	v->a[764][aux_sym_concatenation_token1] = actions(1725);
	v->a[764][anon_sym_DOLLAR] = actions(1800);
	v->a[764][anon_sym_DQUOTE] = actions(631);
	v->a[764][sym_raw_string] = actions(1725);
	v->a[764][sym_number] = actions(1725);
	v->a[764][anon_sym_DOLLAR_LBRACE] = actions(633);
	v->a[764][anon_sym_DOLLAR_LPAREN] = actions(635);
	v->a[764][anon_sym_BQUOTE] = actions(637);
	v->a[764][sym_comment] = actions(3);
	return (parse_table_1067(v));
}

void	parse_table_1067(t_parse_table_array *v)
{
	v->a[764][sym__comment_word] = actions(1725);
	v->a[764][sym__bare_dollar] = actions(1727);
	v->a[765][sym_arithmetic_expansion] = state(474);
	v->a[765][sym_string] = state(474);
	v->a[765][sym_simple_expansion] = state(474);
	v->a[765][sym_expansion] = state(474);
	v->a[765][sym_command_substitution] = state(474);
	v->a[765][sym_word] = actions(1521);
	v->a[765][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(704);
	v->a[765][aux_sym_concatenation_token1] = actions(1521);
	v->a[765][anon_sym_DOLLAR] = actions(1802);
	v->a[765][anon_sym_DQUOTE] = actions(708);
	v->a[765][sym_raw_string] = actions(1521);
	v->a[765][sym_number] = actions(1521);
	v->a[765][anon_sym_DOLLAR_LBRACE] = actions(710);
	v->a[765][anon_sym_DOLLAR_LPAREN] = actions(712);
	v->a[765][anon_sym_BQUOTE] = actions(714);
	v->a[765][sym_comment] = actions(3);
	v->a[765][sym__comment_word] = actions(1521);
	v->a[765][sym__bare_dollar] = actions(1525);
	return (parse_table_1068(v));
}

void	parse_table_1068(t_parse_table_array *v)
{
	v->a[766][aux_sym_concatenation_repeat1] = state(766);
	v->a[766][ts_builtin_sym_end] = actions(981);
	v->a[766][anon_sym_PIPE] = actions(973);
	v->a[766][anon_sym_RPAREN] = actions(973);
	v->a[766][anon_sym_SEMI_SEMI] = actions(973);
	v->a[766][anon_sym_AMP_AMP] = actions(973);
	v->a[766][anon_sym_PIPE_PIPE] = actions(973);
	v->a[766][anon_sym_LT] = actions(973);
	v->a[766][anon_sym_GT] = actions(973);
	v->a[766][anon_sym_GT_GT] = actions(973);
	v->a[766][anon_sym_LT_LT] = actions(973);
	v->a[766][aux_sym_heredoc_redirect_token1] = actions(981);
	v->a[766][aux_sym_concatenation_token1] = actions(1804);
	v->a[766][anon_sym_BQUOTE] = actions(973);
	v->a[766][sym_comment] = actions(3);
	v->a[766][anon_sym_SEMI] = actions(973);
	v->a[766][sym__concat] = actions(1807);
	v->a[766][sym_variable_name] = actions(981);
	v->a[767][sym_arithmetic_expansion] = state(1460);
	v->a[767][sym_concatenation] = state(1548);
	return (parse_table_1069(v));
}

void	parse_table_1069(t_parse_table_array *v)
{
	v->a[767][sym_string] = state(1460);
	v->a[767][sym_simple_expansion] = state(1460);
	v->a[767][sym_expansion] = state(1460);
	v->a[767][sym_command_substitution] = state(1460);
	v->a[767][sym__extglob_blob] = state(1548);
	v->a[767][sym_word] = actions(1810);
	v->a[767][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[767][anon_sym_DOLLAR] = actions(784);
	v->a[767][anon_sym_DQUOTE] = actions(786);
	v->a[767][sym_raw_string] = actions(1810);
	v->a[767][sym_number] = actions(1810);
	v->a[767][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[767][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[767][anon_sym_BQUOTE] = actions(792);
	v->a[767][sym_comment] = actions(3);
	v->a[767][sym_extglob_pattern] = actions(794);
	v->a[768][sym_arithmetic_expansion] = state(686);
	v->a[768][sym_string] = state(686);
	v->a[768][sym_simple_expansion] = state(686);
	v->a[768][sym_expansion] = state(686);
	return (parse_table_1070(v));
}

/* EOF parse_table_213.c */
