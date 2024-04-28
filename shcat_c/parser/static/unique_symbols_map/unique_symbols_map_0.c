/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique_symbols_map_0.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./unique_symbols_map.h"

void	unique_symbols_map_0(t_unique_symbols_map_array *v)
{
	v->a[ts_builtin_sym_end] = ts_builtin_sym_end;
	v->a[sym_word] = sym_word;
	v->a[anon_sym_for] = anon_sym_for;
	v->a[anon_sym_select] = anon_sym_select;
	v->a[anon_sym_in] = anon_sym_in;
	v->a[anon_sym_LPAREN_LPAREN] = anon_sym_LPAREN_LPAREN;
	v->a[anon_sym_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN;
	v->a[anon_sym_SEMI] = anon_sym_SEMI;
	v->a[anon_sym_COMMA] = anon_sym_COMMA;
	v->a[anon_sym_EQ] = anon_sym_EQ;
	v->a[anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS;
	v->a[anon_sym_DASH_DASH] = anon_sym_DASH_DASH;
	v->a[anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ;
	v->a[anon_sym_DASH_EQ] = anon_sym_DASH_EQ;
	v->a[anon_sym_STAR_EQ] = anon_sym_STAR_EQ;
	v->a[anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ;
	v->a[anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ;
	v->a[anon_sym_STAR_STAR_EQ] = anon_sym_STAR_STAR_EQ;
	v->a[anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ;
	v->a[anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ;
	unique_symbols_map_1(v);
}

void	unique_symbols_map_1(t_unique_symbols_map_array *v)
{
	v->a[anon_sym_AMP_EQ] = anon_sym_AMP_EQ;
	v->a[anon_sym_CARET_EQ] = anon_sym_CARET_EQ;
	v->a[anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ;
	v->a[anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE;
	v->a[anon_sym_DASHo] = anon_sym_DASHo;
	v->a[anon_sym_AMP_AMP] = anon_sym_AMP_AMP;
	v->a[anon_sym_DASHa] = anon_sym_DASHa;
	v->a[anon_sym_PIPE] = anon_sym_PIPE;
	v->a[anon_sym_CARET] = anon_sym_CARET;
	v->a[anon_sym_AMP] = anon_sym_AMP;
	v->a[anon_sym_EQ_EQ] = anon_sym_EQ_EQ;
	v->a[anon_sym_BANG_EQ] = anon_sym_BANG_EQ;
	v->a[anon_sym_LT] = anon_sym_LT;
	v->a[anon_sym_GT] = anon_sym_GT;
	v->a[anon_sym_LT_EQ] = anon_sym_LT_EQ;
	v->a[anon_sym_GT_EQ] = anon_sym_GT_EQ;
	v->a[anon_sym_LT_LT] = anon_sym_LT_LT;
	v->a[anon_sym_GT_GT] = anon_sym_GT_GT;
	v->a[anon_sym_PLUS] = anon_sym_PLUS;
	v->a[anon_sym_DASH] = anon_sym_DASH;
	unique_symbols_map_2(v);
}

void	unique_symbols_map_2(t_unique_symbols_map_array *v)
{
	v->a[anon_sym_STAR] = anon_sym_STAR;
	v->a[anon_sym_SLASH] = anon_sym_SLASH;
	v->a[anon_sym_PERCENT] = anon_sym_PERCENT;
	v->a[anon_sym_STAR_STAR] = anon_sym_STAR_STAR;
	v->a[anon_sym_LPAREN] = anon_sym_LPAREN;
	v->a[anon_sym_RPAREN] = anon_sym_RPAREN;
	v->a[aux_sym__c_word_token1] = sym_word;
	v->a[anon_sym_while] = anon_sym_while;
	v->a[anon_sym_until] = anon_sym_until;
	v->a[anon_sym_do] = anon_sym_do;
	v->a[anon_sym_done] = anon_sym_done;
	v->a[anon_sym_if] = anon_sym_if;
	v->a[anon_sym_then] = anon_sym_then;
	v->a[anon_sym_fi] = anon_sym_fi;
	v->a[anon_sym_elif] = anon_sym_elif;
	v->a[anon_sym_else] = anon_sym_else;
	v->a[anon_sym_case] = anon_sym_case;
	v->a[anon_sym_esac] = anon_sym_esac;
	v->a[anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI;
	v->a[anon_sym_SEMI_AMP] = anon_sym_SEMI_AMP;
	unique_symbols_map_3(v);
}

void	unique_symbols_map_3(t_unique_symbols_map_array *v)
{
	v->a[anon_sym_SEMI_SEMI_AMP] = anon_sym_SEMI_SEMI_AMP;
	v->a[anon_sym_function] = anon_sym_function;
	v->a[anon_sym_LBRACE] = anon_sym_LBRACE;
	v->a[anon_sym_RBRACE] = anon_sym_RBRACE;
	v->a[anon_sym_PIPE_AMP] = anon_sym_PIPE_AMP;
	v->a[anon_sym_BANG] = anon_sym_BANG;
	v->a[anon_sym_LBRACK] = anon_sym_LBRACK;
	v->a[anon_sym_RBRACK] = anon_sym_RBRACK;
	v->a[anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK;
	v->a[anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK;
	v->a[anon_sym_declare] = anon_sym_declare;
	v->a[anon_sym_typeset] = anon_sym_typeset;
	v->a[anon_sym_export] = anon_sym_export;
	v->a[anon_sym_readonly] = anon_sym_readonly;
	v->a[anon_sym_local] = anon_sym_local;
	v->a[anon_sym_unset] = anon_sym_unset;
	v->a[anon_sym_unsetenv] = anon_sym_unsetenv;
	v->a[anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE;
	v->a[anon_sym_AMP_GT] = anon_sym_AMP_GT;
	v->a[anon_sym_AMP_GT_GT] = anon_sym_AMP_GT_GT;
	unique_symbols_map_4(v);
}

void	unique_symbols_map_4(t_unique_symbols_map_array *v)
{
	v->a[anon_sym_LT_AMP] = anon_sym_LT_AMP;
	v->a[anon_sym_GT_AMP] = anon_sym_GT_AMP;
	v->a[anon_sym_GT_PIPE] = anon_sym_GT_PIPE;
	v->a[anon_sym_LT_AMP_DASH] = anon_sym_LT_AMP_DASH;
	v->a[anon_sym_GT_AMP_DASH] = anon_sym_GT_AMP_DASH;
	v->a[anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH;
	v->a[aux_sym_heredoc_redirect_token1] = aux_sym_heredoc_redirect_token1;
	v->a[anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT;
	v->a[anon_sym_QMARK] = anon_sym_QMARK;
	v->a[anon_sym_COLON] = anon_sym_COLON;
	v->a[anon_sym_PLUS_PLUS2] = anon_sym_PLUS_PLUS;
	v->a[anon_sym_DASH_DASH2] = anon_sym_DASH_DASH;
	v->a[anon_sym_DASH2] = anon_sym_DASH;
	v->a[anon_sym_PLUS2] = anon_sym_PLUS;
	v->a[anon_sym_TILDE] = anon_sym_TILDE;
	v->a[anon_sym_DOLLAR_LPAREN_LPAREN] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[anon_sym_DOLLAR_LBRACK] = anon_sym_DOLLAR_LBRACK;
	v->a[aux_sym_brace_expression_token1] = sym_number;
	v->a[anon_sym_DOT_DOT] = anon_sym_DOT_DOT;
	v->a[anon_sym_RBRACE2] = anon_sym_RBRACE;
	unique_symbols_map_5(v);
}

/* EOF unique_symbols_map_0.c */
