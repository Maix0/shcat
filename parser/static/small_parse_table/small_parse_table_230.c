/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_230.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1150(t_small_parse_table_array *v)
{
	v->a[23000] = anon_sym_GT_AMP_DASH;
	v->a[23001] = anon_sym_LT_LT;
	v->a[23002] = anon_sym_LT_LT_DASH;
	v->a[23003] = aux_sym_heredoc_redirect_token1;
	v->a[23004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23005] = anon_sym_DQUOTE;
	v->a[23006] = sym_raw_string;
	v->a[23007] = sym_number;
	v->a[23008] = anon_sym_DOLLAR_LBRACE;
	v->a[23009] = anon_sym_DOLLAR_LPAREN;
	v->a[23010] = anon_sym_BQUOTE;
	v->a[23011] = sym_word;
	v->a[23012] = 12;
	v->a[23013] = actions(3);
	v->a[23014] = 1;
	v->a[23015] = sym_comment;
	v->a[23016] = actions(608);
	v->a[23017] = 1;
	v->a[23018] = sym_file_descriptor;
	v->a[23019] = actions(701);
	small_parse_table_1151(v);
}

void	small_parse_table_1151(t_small_parse_table_array *v)
{
	v->a[23020] = 1;
	v->a[23021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23022] = actions(703);
	v->a[23023] = 1;
	v->a[23024] = anon_sym_DOLLAR;
	v->a[23025] = actions(705);
	v->a[23026] = 1;
	v->a[23027] = anon_sym_DQUOTE;
	v->a[23028] = actions(707);
	v->a[23029] = 1;
	v->a[23030] = anon_sym_DOLLAR_LBRACE;
	v->a[23031] = actions(709);
	v->a[23032] = 1;
	v->a[23033] = anon_sym_DOLLAR_LPAREN;
	v->a[23034] = actions(711);
	v->a[23035] = 1;
	v->a[23036] = anon_sym_BQUOTE;
	v->a[23037] = state(237);
	v->a[23038] = 2;
	v->a[23039] = sym_concatenation;
	small_parse_table_1152(v);
}

void	small_parse_table_1152(t_small_parse_table_array *v)
{
	v->a[23040] = aux_sym_for_statement_repeat1;
	v->a[23041] = actions(699);
	v->a[23042] = 3;
	v->a[23043] = sym_raw_string;
	v->a[23044] = sym_number;
	v->a[23045] = sym_word;
	v->a[23046] = state(517);
	v->a[23047] = 5;
	v->a[23048] = sym_arithmetic_expansion;
	v->a[23049] = sym_string;
	v->a[23050] = sym_simple_expansion;
	v->a[23051] = sym_expansion;
	v->a[23052] = sym_command_substitution;
	v->a[23053] = actions(610);
	v->a[23054] = 20;
	v->a[23055] = anon_sym_esac;
	v->a[23056] = anon_sym_PIPE;
	v->a[23057] = anon_sym_SEMI_SEMI;
	v->a[23058] = anon_sym_AMP_AMP;
	v->a[23059] = anon_sym_PIPE_PIPE;
	small_parse_table_1153(v);
}

void	small_parse_table_1153(t_small_parse_table_array *v)
{
	v->a[23060] = anon_sym_LT;
	v->a[23061] = anon_sym_GT;
	v->a[23062] = anon_sym_GT_GT;
	v->a[23063] = anon_sym_AMP_GT;
	v->a[23064] = anon_sym_AMP_GT_GT;
	v->a[23065] = anon_sym_LT_AMP;
	v->a[23066] = anon_sym_GT_AMP;
	v->a[23067] = anon_sym_GT_PIPE;
	v->a[23068] = anon_sym_LT_AMP_DASH;
	v->a[23069] = anon_sym_GT_AMP_DASH;
	v->a[23070] = anon_sym_LT_LT;
	v->a[23071] = anon_sym_LT_LT_DASH;
	v->a[23072] = aux_sym_heredoc_redirect_token1;
	v->a[23073] = anon_sym_AMP;
	v->a[23074] = anon_sym_SEMI;
	v->a[23075] = 5;
	v->a[23076] = actions(3);
	v->a[23077] = 1;
	v->a[23078] = sym_comment;
	v->a[23079] = state(825);
	small_parse_table_1154(v);
}

void	small_parse_table_1154(t_small_parse_table_array *v)
{
	v->a[23080] = 1;
	v->a[23081] = sym_concatenation;
	v->a[23082] = actions(713);
	v->a[23083] = 3;
	v->a[23084] = sym_file_descriptor;
	v->a[23085] = sym_variable_name;
	v->a[23086] = ts_builtin_sym_end;
	v->a[23087] = state(309);
	v->a[23088] = 5;
	v->a[23089] = sym_arithmetic_expansion;
	v->a[23090] = sym_string;
	v->a[23091] = sym_simple_expansion;
	v->a[23092] = sym_expansion;
	v->a[23093] = sym_command_substitution;
	v->a[23094] = actions(715);
	v->a[23095] = 28;
	v->a[23096] = anon_sym_PIPE;
	v->a[23097] = anon_sym_SEMI_SEMI;
	v->a[23098] = anon_sym_AMP_AMP;
	v->a[23099] = anon_sym_PIPE_PIPE;
	small_parse_table_1155(v);
}

/* EOF small_parse_table_230.c */
