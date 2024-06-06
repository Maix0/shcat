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
	v->a[anon_sym_select] = "select";
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
	v->a[anon_sym_SEMI_SEMI] = ";;";
	symbols_names_1(v);
}

void	symbols_names_1(t_symbols_names_array *v)
{
	v->a[anon_sym_SEMI_AMP] = ";&";
	v->a[anon_sym_SEMI_SEMI_AMP] = ";;&";
	v->a[anon_sym_function] = "function";
	v->a[anon_sym_LBRACE] = "{";
	v->a[anon_sym_RBRACE] = "}";
	v->a[anon_sym_PIPE_AMP] = "|&";
	v->a[anon_sym_AMP_AMP] = "&&";
	v->a[anon_sym_PIPE_PIPE] = "||";
	v->a[anon_sym_BANG] = "!";
	v->a[anon_sym_declare] = "declare";
	v->a[anon_sym_typeset] = "typeset";
	v->a[anon_sym_export] = "export";
	v->a[anon_sym_readonly] = "readonly";
	v->a[anon_sym_local] = "local";
	v->a[anon_sym_unset] = "unset";
	v->a[anon_sym_unsetenv] = "unsetenv";
	v->a[anon_sym_EQ] = "=";
	v->a[anon_sym_LT] = "<";
	v->a[anon_sym_GT] = ">";
	v->a[anon_sym_GT_GT] = ">>";
	symbols_names_2(v);
}

void	symbols_names_2(t_symbols_names_array *v)
{
	v->a[anon_sym_AMP_GT] = "&>";
	v->a[anon_sym_AMP_GT_GT] = "&>>";
	v->a[anon_sym_LT_AMP] = "<&";
	v->a[anon_sym_GT_AMP] = ">&";
	v->a[anon_sym_GT_PIPE] = ">|";
	v->a[anon_sym_LT_AMP_DASH] = "<&-";
	v->a[anon_sym_GT_AMP_DASH] = ">&-";
	v->a[anon_sym_LT_LT] = "<<";
	v->a[anon_sym_LT_LT_DASH] = "<<-";
	v->a[aux_sym_heredoc_redirect_token1] = "heredoc_redirect_token1";
	v->a[anon_sym_DOLLAR_LPAREN_LPAREN] = "$((";
	v->a[anon_sym_COMMA] = ",";
	v->a[anon_sym_RPAREN_RPAREN] = "))";
	v->a[aux_sym_brace_expression_token1] = "number";
	v->a[anon_sym_DOT_DOT] = "..";
	v->a[anon_sym_RBRACE2] = "}";
	v->a[anon_sym_PLUS_EQ] = "+=";
	v->a[anon_sym_DASH_EQ] = "-=";
	v->a[anon_sym_STAR_EQ] = "*=";
	v->a[anon_sym_SLASH_EQ] = "/=";
	symbols_names_3(v);
}

void	symbols_names_3(t_symbols_names_array *v)
{
	v->a[anon_sym_PERCENT_EQ] = "%=";
	v->a[anon_sym_LT_LT_EQ] = "<<=";
	v->a[anon_sym_GT_GT_EQ] = ">>=";
	v->a[anon_sym_AMP_EQ] = "&=";
	v->a[anon_sym_CARET_EQ] = "^=";
	v->a[anon_sym_PIPE_EQ] = "|=";
	v->a[anon_sym_CARET] = "^";
	v->a[anon_sym_AMP] = "&";
	v->a[anon_sym_EQ_EQ] = "==";
	v->a[anon_sym_BANG_EQ] = "!=";
	v->a[anon_sym_LT_EQ] = "<=";
	v->a[anon_sym_GT_EQ] = ">=";
	v->a[anon_sym_PLUS] = "+";
	v->a[anon_sym_DASH] = "-";
	v->a[anon_sym_STAR] = "*";
	v->a[anon_sym_SLASH] = "/";
	v->a[anon_sym_PERCENT] = "%";
	v->a[anon_sym_QMARK] = "\\\?";
	v->a[anon_sym_COLON] = ":";
	v->a[anon_sym_PLUS_PLUS] = "++";
	symbols_names_4(v);
}

void	symbols_names_4(t_symbols_names_array *v)
{
	v->a[anon_sym_DASH_DASH] = "--";
	v->a[anon_sym_DASH2] = "-";
	v->a[anon_sym_PLUS2] = "+";
	v->a[anon_sym_TILDE] = "~";
	v->a[anon_sym_PLUS_PLUS2] = "++";
	v->a[anon_sym_DASH_DASH2] = "--";
	v->a[aux_sym_concatenation_token1] = "``";
	v->a[anon_sym_DOLLAR] = "$";
	v->a[sym__special_character] = "_special_character";
	v->a[anon_sym_DQUOTE] = "\\\"";
	v->a[sym_string_content] = "string_content";
	v->a[sym_raw_string] = "raw_string";
	v->a[aux_sym_number_token1] = "number_token1";
	v->a[aux_sym_number_token2] = "number_token2";
	v->a[anon_sym_POUND] = "#";
	v->a[anon_sym_DOLLAR_LBRACE] = "${";
	v->a[anon_sym_RBRACE3] = "}";
	v->a[anon_sym_COLON_DASH] = ":-";
	v->a[anon_sym_DASH3] = "-";
	v->a[anon_sym_COLON_EQ] = ":=";
	symbols_names_5(v);
}

/* EOF symbols_names_0.c */
