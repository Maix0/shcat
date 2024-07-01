/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbols_metadata_0.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./symbols_metadata.h"

void	symbols_metadata_0(t_symbols_metadata_array *v)
{
	v->a[ts_builtin_sym_end] = sym_metadata(false, true, false);
	v->a[sym_word] = sym_metadata(true, true, false);
	v->a[anon_sym_for] = sym_metadata(true, false, false);
	v->a[anon_sym_in] = sym_metadata(true, false, false);
	v->a[anon_sym_while] = sym_metadata(true, false, false);
	v->a[anon_sym_until] = sym_metadata(true, false, false);
	v->a[anon_sym_do] = sym_metadata(true, false, false);
	v->a[anon_sym_done] = sym_metadata(true, false, false);
	v->a[anon_sym_if] = sym_metadata(true, false, false);
	v->a[anon_sym_then] = sym_metadata(true, false, false);
	v->a[anon_sym_fi] = sym_metadata(true, false, false);
	v->a[anon_sym_elif] = sym_metadata(true, false, false);
	v->a[anon_sym_else] = sym_metadata(true, false, false);
	v->a[anon_sym_case] = sym_metadata(true, false, false);
	v->a[anon_sym_esac] = sym_metadata(true, false, false);
	v->a[anon_sym_LPAREN] = sym_metadata(true, false, false);
	v->a[anon_sym_PIPE] = sym_metadata(true, false, false);
	v->a[anon_sym_RPAREN] = sym_metadata(true, false, false);
	v->a[anon_sym_LF] = sym_metadata(true, false, false);
	v->a[anon_sym_SEMI_SEMI] = sym_metadata(true, false, false);
	symbols_metadata_1(v);
}

void	symbols_metadata_1(t_symbols_metadata_array *v)
{
	v->a[anon_sym_LBRACE] = sym_metadata(true, false, false);
	v->a[anon_sym_RBRACE] = sym_metadata(true, false, false);
	v->a[anon_sym_AMP_AMP] = sym_metadata(true, true, false);
	v->a[anon_sym_PIPE_PIPE] = sym_metadata(true, true, false);
	v->a[anon_sym_BANG] = sym_metadata(true, false, false);
	v->a[anon_sym_EQ] = sym_metadata(true, false, false);
	v->a[anon_sym_LT] = sym_metadata(true, true, false);
	v->a[anon_sym_GT] = sym_metadata(true, true, false);
	v->a[anon_sym_GT_GT] = sym_metadata(true, true, false);
	v->a[anon_sym_LT_AMP] = sym_metadata(true, true, false);
	v->a[anon_sym_GT_AMP] = sym_metadata(true, true, false);
	v->a[anon_sym_GT_PIPE] = sym_metadata(true, true, false);
	v->a[anon_sym_LT_AMP_DASH] = sym_metadata(true, true, false);
	v->a[anon_sym_GT_AMP_DASH] = sym_metadata(true, true, false);
	v->a[anon_sym_LT_LT] = sym_metadata(true, true, false);
	v->a[anon_sym_LT_LT_DASH] = sym_metadata(true, true, false);
	v->a[aux_sym_heredoc_redirect_token1] = sym_metadata(false, false, false);
	v->a[anon_sym_PIPE_AMP] = sym_metadata(true, false, false);
	v->a[anon_sym_DOLLAR_LPAREN_LPAREN] = sym_metadata(true, false, false);
	v->a[anon_sym_RPAREN_RPAREN] = sym_metadata(true, false, false);
	symbols_metadata_2(v);
}

void	symbols_metadata_2(t_symbols_metadata_array *v)
{
	v->a[anon_sym_PLUS_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_DASH_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_STAR_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_SLASH_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_PERCENT_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_LT_LT_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_GT_GT_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_AMP_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_CARET_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_PIPE_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_CARET] = sym_metadata(true, true, false);
	v->a[anon_sym_AMP] = sym_metadata(true, false, false);
	v->a[anon_sym_EQ_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_BANG_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_LT_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_GT_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_PLUS] = sym_metadata(true, true, false);
	v->a[anon_sym_DASH] = sym_metadata(true, true, false);
	v->a[anon_sym_STAR] = sym_metadata(true, true, false);
	v->a[anon_sym_SLASH] = sym_metadata(true, true, false);
	symbols_metadata_3(v);
}

void	symbols_metadata_3(t_symbols_metadata_array *v)
{
	v->a[anon_sym_PERCENT] = sym_metadata(true, true, false);
	v->a[anon_sym_QMARK] = sym_metadata(true, false, false);
	v->a[anon_sym_COLON] = sym_metadata(true, false, false);
	v->a[anon_sym_PLUS_PLUS] = sym_metadata(true, true, false);
	v->a[anon_sym_DASH_DASH] = sym_metadata(true, true, false);
	v->a[anon_sym_DASH2] = sym_metadata(true, true, false);
	v->a[anon_sym_PLUS2] = sym_metadata(true, true, false);
	v->a[anon_sym_TILDE] = sym_metadata(true, true, false);
	v->a[anon_sym_PLUS_PLUS2] = sym_metadata(true, true, false);
	v->a[anon_sym_DASH_DASH2] = sym_metadata(true, true, false);
	v->a[aux_sym_concatenation_token1] = sym_metadata(true, false, false);
	v->a[anon_sym_DOLLAR] = sym_metadata(true, false, false);
	v->a[anon_sym_DQUOTE] = sym_metadata(true, false, false);
	v->a[sym_string_content] = sym_metadata(true, true, false);
	v->a[sym_raw_string] = sym_metadata(true, true, false);
	v->a[sym_number] = sym_metadata(true, true, false);
	v->a[anon_sym_POUND] = sym_metadata(true, true, false);
	v->a[anon_sym_DOLLAR_LBRACE] = sym_metadata(true, false, false);
	v->a[anon_sym_COLON_DASH] = sym_metadata(true, true, false);
	v->a[anon_sym_DASH3] = sym_metadata(true, true, false);
	symbols_metadata_4(v);
}

void	symbols_metadata_4(t_symbols_metadata_array *v)
{
	v->a[anon_sym_COLON_EQ] = sym_metadata(true, true, false);
	v->a[anon_sym_EQ2] = sym_metadata(true, true, false);
	v->a[anon_sym_COLON_QMARK] = sym_metadata(true, true, false);
	v->a[anon_sym_QMARK2] = sym_metadata(true, true, false);
	v->a[anon_sym_COLON_PLUS] = sym_metadata(true, true, false);
	v->a[anon_sym_PLUS3] = sym_metadata(true, true, false);
	v->a[anon_sym_PERCENT_PERCENT] = sym_metadata(true, true, false);
	v->a[aux_sym_expansion_regex_token1] = sym_metadata(true, true, false);
	v->a[anon_sym_DOLLAR_LPAREN] = sym_metadata(true, false, false);
	v->a[anon_sym_BQUOTE] = sym_metadata(true, false, false);
	v->a[sym_comment] = sym_metadata(true, true, false);
	v->a[sym__comment_word] = sym_metadata(true, true, false);
	v->a[aux_sym__simple_variable_name_token1] \
	= sym_metadata(true, true, false);
	v->a[aux_sym__multiline_variable_name_token1] \
	= sym_metadata(true, true, false);
	v->a[anon_sym_AT] = sym_metadata(true, true, false);
	v->a[anon_sym_0] = sym_metadata(true, true, false);
	v->a[anon_sym__] = sym_metadata(true, true, false);
	v->a[anon_sym_SEMI] = sym_metadata(true, false, false);
	v->a[sym_heredoc_start] = sym_metadata(true, true, false);
	v->a[sym_simple_heredoc_body] = sym_metadata(true, true, false);
	symbols_metadata_5(v);
}

/* EOF symbols_metadata_0.c */
