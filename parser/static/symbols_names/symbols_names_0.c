/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbols_names_0.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./symbols_names.h"

void	symbols_names_0(t_symbols_names_array *v)
{
	v->a[ts_builtin_sym_end] = "end";
	v->a[sym_word] = "word";
	v->a[anon_sym_for] = "for";
	v->a[anon_sym_in] = "in";
	v->a[anon_sym_while] = "while";
	v->a[anon_sym_until] = "until";
	v->a[anon_sym_do] = "do";
	v->a[anon_sym_done] = "done";
	v->a[anon_sym_if] = "if";
	v->a[anon_sym_then] = "then";
	v->a[anon_sym_fi] = "fi";
	v->a[anon_sym_elif] = "elif";
	v->a[anon_sym_else] = "else";
	v->a[anon_sym_case] = "case";
	v->a[anon_sym_esac] = "esac";
	v->a[anon_sym_LPAREN] = "(";
	v->a[anon_sym_PIPE] = "|";
	v->a[anon_sym_RPAREN] = ")";
	v->a[anon_sym_LF] = "\\n";
	v->a[anon_sym_SEMI_SEMI] = ";;";
	symbols_names_1(v);
}

void	symbols_names_1(t_symbols_names_array *v)
{
	v->a[anon_sym_LBRACE] = "{";
	v->a[anon_sym_RBRACE] = "}";
	v->a[anon_sym_AMP_AMP] = "operator";
	v->a[anon_sym_PIPE_PIPE] = "operator";
	v->a[anon_sym_BANG] = "!";
	v->a[anon_sym_EQ] = "=";
	v->a[anon_sym_LT] = "operator";
	v->a[anon_sym_GT] = "operator";
	v->a[anon_sym_GT_GT] = "operator";
	v->a[anon_sym_LT_AMP] = "operator";
	v->a[anon_sym_GT_AMP] = "operator";
	v->a[anon_sym_GT_PIPE] = "operator";
	v->a[anon_sym_LT_AMP_DASH] = "operator";
	v->a[anon_sym_GT_AMP_DASH] = "operator";
	v->a[anon_sym_LT_LT] = "operator";
	v->a[anon_sym_LT_LT_DASH] = "operator";
	v->a[aux_sym_heredoc_redirect_token1] = "heredoc_redirect_token1";
	v->a[anon_sym_PIPE_AMP] = "|&";
	v->a[anon_sym_DOLLAR_LPAREN_LPAREN] = "$((";
	v->a[anon_sym_RPAREN_RPAREN] = "))";
	symbols_names_2(v);
}

void	symbols_names_2(t_symbols_names_array *v)
{
	v->a[anon_sym_PLUS_EQ] = "operator";
	v->a[anon_sym_DASH_EQ] = "operator";
	v->a[anon_sym_STAR_EQ] = "operator";
	v->a[anon_sym_SLASH_EQ] = "operator";
	v->a[anon_sym_PERCENT_EQ] = "operator";
	v->a[anon_sym_LT_LT_EQ] = "operator";
	v->a[anon_sym_GT_GT_EQ] = "operator";
	v->a[anon_sym_AMP_EQ] = "operator";
	v->a[anon_sym_CARET_EQ] = "operator";
	v->a[anon_sym_PIPE_EQ] = "operator";
	v->a[anon_sym_CARET] = "operator";
	v->a[anon_sym_AMP] = "&";
	v->a[anon_sym_EQ_EQ] = "operator";
	v->a[anon_sym_BANG_EQ] = "operator";
	v->a[anon_sym_LT_EQ] = "operator";
	v->a[anon_sym_GT_EQ] = "operator";
	v->a[anon_sym_PLUS] = "operator";
	v->a[anon_sym_DASH] = "operator";
	v->a[anon_sym_STAR] = "operator";
	v->a[anon_sym_SLASH] = "operator";
	symbols_names_3(v);
}

void	symbols_names_3(t_symbols_names_array *v)
{
	v->a[anon_sym_PERCENT] = "operator";
	v->a[anon_sym_QMARK] = "\\\?";
	v->a[anon_sym_COLON] = ":";
	v->a[anon_sym_PLUS_PLUS] = "operator";
	v->a[anon_sym_DASH_DASH] = "operator";
	v->a[anon_sym_DASH2] = "operator";
	v->a[anon_sym_PLUS2] = "operator";
	v->a[anon_sym_TILDE] = "operator";
	v->a[anon_sym_PLUS_PLUS2] = "operator";
	v->a[anon_sym_DASH_DASH2] = "operator";
	v->a[aux_sym_concatenation_token1] = "``";
	v->a[anon_sym_DOLLAR] = "$";
	v->a[anon_sym_DQUOTE] = "\\\"";
	v->a[sym_string_content] = "string_content";
	v->a[sym_raw_string] = "raw_string";
	v->a[sym_number] = "number";
	v->a[anon_sym_POUND] = "special_variable_name";
	v->a[anon_sym_DOLLAR_LBRACE] = "${";
	v->a[anon_sym_COLON_DASH] = "operator";
	v->a[anon_sym_DASH3] = "operator";
	symbols_names_4(v);
}

void	symbols_names_4(t_symbols_names_array *v)
{
	v->a[anon_sym_COLON_EQ] = "operator";
	v->a[anon_sym_EQ2] = "operator";
	v->a[anon_sym_COLON_QMARK] = "operator";
	v->a[anon_sym_QMARK2] = "operator";
	v->a[anon_sym_COLON_PLUS] = "operator";
	v->a[anon_sym_PLUS3] = "operator";
	v->a[anon_sym_PERCENT_PERCENT] = "operator";
	v->a[aux_sym_expansion_regex_token1] = "regex";
	v->a[anon_sym_DOLLAR_LPAREN] = "$(";
	v->a[anon_sym_BQUOTE] = "`";
	v->a[sym_comment] = "comment";
	v->a[sym__comment_word] = "word";
	v->a[aux_sym__simple_variable_name_token1] = "variable_name";
	v->a[aux_sym__multiline_variable_name_token1] = "variable_name";
	v->a[anon_sym_AT] = "special_variable_name";
	v->a[anon_sym_0] = "special_variable_name";
	v->a[anon_sym__] = "special_variable_name";
	v->a[anon_sym_SEMI] = ";";
	v->a[sym_heredoc_start] = "heredoc_start";
	v->a[sym_simple_heredoc_body] = "heredoc_body";
	symbols_names_5(v);
}

/* EOF symbols_names_0.c */
