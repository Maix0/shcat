/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_124.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_620(t_parse_table_array *v)
{
	v->a[347][sym_variable_name] = actions(1108);
	v->a[348][sym_word] = actions(1040);
	v->a[348][anon_sym_for] = actions(1040);
	v->a[348][anon_sym_while] = actions(1040);
	v->a[348][anon_sym_until] = actions(1040);
	v->a[348][anon_sym_if] = actions(1040);
	v->a[348][anon_sym_case] = actions(1040);
	v->a[348][anon_sym_esac] = actions(1042);
	v->a[348][anon_sym_LPAREN] = actions(1040);
	v->a[348][anon_sym_SEMI_SEMI] = actions(1042);
	v->a[348][anon_sym_LBRACE] = actions(1040);
	v->a[348][anon_sym_BANG] = actions(1040);
	v->a[348][anon_sym_LT] = actions(1040);
	v->a[348][anon_sym_GT] = actions(1040);
	v->a[348][anon_sym_GT_GT] = actions(1040);
	v->a[348][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1040);
	v->a[348][anon_sym_DOLLAR] = actions(1040);
	v->a[348][anon_sym_DQUOTE] = actions(1040);
	v->a[348][sym_raw_string] = actions(1040);
	v->a[348][sym_number] = actions(1040);
	return (parse_table_621(v));
}

void	parse_table_621(t_parse_table_array *v)
{
	v->a[348][anon_sym_DOLLAR_LBRACE] = actions(1040);
	v->a[348][anon_sym_DOLLAR_LPAREN] = actions(1040);
	v->a[348][anon_sym_BQUOTE] = actions(1040);
	v->a[348][sym_comment] = actions(3);
	v->a[348][sym_variable_name] = actions(1044);
	v->a[349][sym_word] = actions(1089);
	v->a[349][anon_sym_esac] = actions(1089);
	v->a[349][anon_sym_PIPE] = actions(1089);
	v->a[349][anon_sym_SEMI_SEMI] = actions(1089);
	v->a[349][anon_sym_AMP_AMP] = actions(1089);
	v->a[349][anon_sym_PIPE_PIPE] = actions(1089);
	v->a[349][anon_sym_LT] = actions(1089);
	v->a[349][anon_sym_GT] = actions(1089);
	v->a[349][anon_sym_GT_GT] = actions(1089);
	v->a[349][anon_sym_LT_LT] = actions(1089);
	v->a[349][aux_sym_heredoc_redirect_token1] = actions(1089);
	v->a[349][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1089);
	v->a[349][aux_sym_concatenation_token1] = actions(1089);
	v->a[349][anon_sym_DOLLAR] = actions(1089);
	v->a[349][anon_sym_DQUOTE] = actions(1089);
	return (parse_table_622(v));
}

void	parse_table_622(t_parse_table_array *v)
{
	v->a[349][sym_raw_string] = actions(1089);
	v->a[349][sym_number] = actions(1089);
	v->a[349][anon_sym_DOLLAR_LBRACE] = actions(1089);
	v->a[349][anon_sym_DOLLAR_LPAREN] = actions(1089);
	v->a[349][anon_sym_BQUOTE] = actions(1089);
	v->a[349][sym_comment] = actions(3);
	v->a[349][anon_sym_SEMI] = actions(1089);
	v->a[349][sym__concat] = actions(1087);
	v->a[349][sym_variable_name] = actions(1087);
	v->a[350][sym_word] = actions(1085);
	v->a[350][anon_sym_esac] = actions(1085);
	v->a[350][anon_sym_PIPE] = actions(1085);
	v->a[350][anon_sym_SEMI_SEMI] = actions(1085);
	v->a[350][anon_sym_AMP_AMP] = actions(1085);
	v->a[350][anon_sym_PIPE_PIPE] = actions(1085);
	v->a[350][anon_sym_LT] = actions(1085);
	v->a[350][anon_sym_GT] = actions(1085);
	v->a[350][anon_sym_GT_GT] = actions(1085);
	v->a[350][anon_sym_LT_LT] = actions(1085);
	v->a[350][aux_sym_heredoc_redirect_token1] = actions(1085);
	return (parse_table_623(v));
}

void	parse_table_623(t_parse_table_array *v)
{
	v->a[350][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1085);
	v->a[350][aux_sym_concatenation_token1] = actions(1085);
	v->a[350][anon_sym_DOLLAR] = actions(1085);
	v->a[350][anon_sym_DQUOTE] = actions(1085);
	v->a[350][sym_raw_string] = actions(1085);
	v->a[350][sym_number] = actions(1085);
	v->a[350][anon_sym_DOLLAR_LBRACE] = actions(1085);
	v->a[350][anon_sym_DOLLAR_LPAREN] = actions(1085);
	v->a[350][anon_sym_BQUOTE] = actions(1085);
	v->a[350][sym_comment] = actions(3);
	v->a[350][anon_sym_SEMI] = actions(1085);
	v->a[350][sym__concat] = actions(1083);
	v->a[350][sym_variable_name] = actions(1083);
	v->a[351][sym_word] = actions(1124);
	v->a[351][anon_sym_PIPE] = actions(1124);
	v->a[351][anon_sym_RPAREN] = actions(1124);
	v->a[351][anon_sym_SEMI_SEMI] = actions(1124);
	v->a[351][anon_sym_AMP_AMP] = actions(1124);
	v->a[351][anon_sym_PIPE_PIPE] = actions(1124);
	v->a[351][anon_sym_LT] = actions(1124);
	return (parse_table_624(v));
}

void	parse_table_624(t_parse_table_array *v)
{
	v->a[351][anon_sym_GT] = actions(1124);
	v->a[351][anon_sym_GT_GT] = actions(1124);
	v->a[351][anon_sym_LT_LT] = actions(1124);
	v->a[351][aux_sym_heredoc_redirect_token1] = actions(1124);
	v->a[351][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1124);
	v->a[351][aux_sym_concatenation_token1] = actions(1124);
	v->a[351][anon_sym_DOLLAR] = actions(1124);
	v->a[351][anon_sym_DQUOTE] = actions(1124);
	v->a[351][sym_raw_string] = actions(1124);
	v->a[351][sym_number] = actions(1124);
	v->a[351][anon_sym_DOLLAR_LBRACE] = actions(1124);
	v->a[351][anon_sym_DOLLAR_LPAREN] = actions(1124);
	v->a[351][anon_sym_BQUOTE] = actions(1124);
	v->a[351][sym_comment] = actions(3);
	v->a[351][anon_sym_SEMI] = actions(1124);
	v->a[351][sym__concat] = actions(1126);
	v->a[351][sym__bare_dollar] = actions(1126);
	v->a[352][sym_word] = actions(1124);
	v->a[352][anon_sym_esac] = actions(1124);
	v->a[352][anon_sym_PIPE] = actions(1124);
	return (parse_table_625(v));
}

/* EOF parse_table_124.c */
