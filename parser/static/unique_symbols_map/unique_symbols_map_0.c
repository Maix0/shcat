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
	v->a[anon_sym_in] = anon_sym_in;
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
	v->a[anon_sym_LPAREN] = anon_sym_LPAREN;
	v->a[anon_sym_PIPE] = anon_sym_PIPE;
	v->a[anon_sym_RPAREN] = anon_sym_RPAREN;
	v->a[anon_sym_LF] = anon_sym_LF;
	v->a[anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI;
	unique_symbols_map_1(v);
}

void	unique_symbols_map_1(t_unique_symbols_map_array *v)
{
	v->a[anon_sym_LBRACE] = anon_sym_LBRACE;
	v->a[anon_sym_RBRACE] = anon_sym_RBRACE;
	v->a[anon_sym_AMP_AMP] = sym__immediate_double_hash;
	v->a[anon_sym_PIPE_PIPE] = sym__immediate_double_hash;
	v->a[anon_sym_BANG] = anon_sym_BANG;
	v->a[anon_sym_EQ] = anon_sym_EQ;
	v->a[anon_sym_LT] = sym__immediate_double_hash;
	v->a[anon_sym_GT] = sym__immediate_double_hash;
	v->a[anon_sym_GT_GT] = sym__immediate_double_hash;
	v->a[anon_sym_LT_LT] = sym__immediate_double_hash;
	v->a[aux_sym_heredoc_redirect_token1] = aux_sym_heredoc_redirect_token1;
	v->a[anon_sym_DOLLAR_LPAREN_LPAREN] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[anon_sym_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN;
	v->a[anon_sym_PLUS] = sym__immediate_double_hash;
	v->a[anon_sym_DASH] = sym__immediate_double_hash;
	v->a[anon_sym_STAR] = sym__immediate_double_hash;
	v->a[anon_sym_SLASH] = sym__immediate_double_hash;
	v->a[anon_sym_PERCENT] = sym__immediate_double_hash;
	v->a[anon_sym_QMARK] = anon_sym_QMARK;
	v->a[anon_sym_COLON] = anon_sym_COLON;
	unique_symbols_map_2(v);
}

void	unique_symbols_map_2(t_unique_symbols_map_array *v)
{
	v->a[anon_sym_DASH2] = sym__immediate_double_hash;
	v->a[anon_sym_PLUS2] = sym__immediate_double_hash;
	v->a[anon_sym_PLUS_PLUS] = sym__immediate_double_hash;
	v->a[anon_sym_DASH_DASH] = sym__immediate_double_hash;
	v->a[aux_sym_concatenation_token1] = aux_sym_concatenation_token1;
	v->a[anon_sym_DOLLAR] = anon_sym_DOLLAR;
	v->a[anon_sym_DQUOTE] = anon_sym_DQUOTE;
	v->a[sym_string_content] = sym_string_content;
	v->a[sym_raw_string] = sym_raw_string;
	v->a[sym_number] = sym_number;
	v->a[anon_sym_POUND] = sym__immediate_double_hash;
	v->a[anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE;
	v->a[anon_sym_COLON_DASH] = sym__immediate_double_hash;
	v->a[anon_sym_DASH3] = sym__immediate_double_hash;
	v->a[anon_sym_COLON_EQ] = sym__immediate_double_hash;
	v->a[anon_sym_EQ2] = sym__immediate_double_hash;
	v->a[anon_sym_COLON_QMARK] = sym__immediate_double_hash;
	v->a[anon_sym_QMARK2] = sym__immediate_double_hash;
	v->a[anon_sym_COLON_PLUS] = sym__immediate_double_hash;
	v->a[anon_sym_PLUS3] = sym__immediate_double_hash;
	unique_symbols_map_3(v);
}

void	unique_symbols_map_3(t_unique_symbols_map_array *v)
{
	v->a[anon_sym_PERCENT_PERCENT] = sym__immediate_double_hash;
	v->a[aux_sym__expansion_regex_token1] = sym_regex;
	v->a[anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN;
	v->a[anon_sym_BQUOTE] = anon_sym_BQUOTE;
	v->a[sym_comment] = sym_comment;
	v->a[sym__comment_word] = sym_word;
	v->a[aux_sym__simple_variable_name_token1] = sym_variable_name;
	v->a[aux_sym__multiline_variable_name_token1] = sym_variable_name;
	v->a[anon_sym_AT] = anon_sym_AT;
	v->a[anon_sym_0] = anon_sym_AT;
	v->a[aux_sym__word_no_brace_token1] = aux_sym__word_no_brace_token1;
	v->a[anon_sym_SEMI] = anon_sym_SEMI;
	v->a[anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH;
	v->a[sym_heredoc_start] = sym_heredoc_start;
	v->a[sym_simple_heredoc_body] = sym_heredoc_body;
	v->a[sym__heredoc_body_beginning] = sym__heredoc_body_beginning;
	v->a[sym_heredoc_content] = sym_heredoc_content;
	v->a[sym_heredoc_end] = sym_heredoc_end;
	v->a[sym_file_descriptor] = sym_file_descriptor;
	v->a[sym__empty_value] = sym__empty_value;
	unique_symbols_map_4(v);
}

void	unique_symbols_map_4(t_unique_symbols_map_array *v)
{
	v->a[sym__concat] = sym__concat;
	v->a[sym_variable_name] = sym_variable_name;
	v->a[sym_regex] = sym_regex;
	v->a[sym__expansion_word] = sym_word;
	v->a[sym_extglob_pattern] = sym_extglob_pattern;
	v->a[sym__bare_dollar] = sym_word;
	v->a[sym__immediate_double_hash] = sym__immediate_double_hash;
	v->a[sym___error_recovery] = sym___error_recovery;
	v->a[sym_program] = sym_program;
	v->a[sym__statements] = sym__statements;
	v->a[aux_sym__terminated_statement] = aux_sym__terminated_statement;
	v->a[sym__statement_not_pipeline] = sym__statement_not_pipeline;
	v->a[sym_redirected_statement] = sym_redirected_statement;
	v->a[sym_for_statement] = sym_for_statement;
	v->a[sym_while_statement] = sym_while_statement;
	v->a[sym_do_group] = sym_do_group;
	v->a[sym_if_statement] = sym_if_statement;
	v->a[sym_elif_clause] = sym_elif_clause;
	v->a[sym_else_clause] = sym_else_clause;
	v->a[sym_case_statement] = sym_case_statement;
	unique_symbols_map_5(v);
}

/* EOF unique_symbols_map_0.c */
