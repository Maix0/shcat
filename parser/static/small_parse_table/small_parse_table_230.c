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
	v->a[23000] = anon_sym_AMP_GT_GT;
	v->a[23001] = anon_sym_LT_AMP;
	v->a[23002] = anon_sym_GT_AMP;
	v->a[23003] = anon_sym_GT_PIPE;
	v->a[23004] = anon_sym_LT_AMP_DASH;
	v->a[23005] = anon_sym_GT_AMP_DASH;
	v->a[23006] = anon_sym_LT_LT;
	v->a[23007] = anon_sym_LT_LT_DASH;
	v->a[23008] = aux_sym_heredoc_redirect_token1;
	v->a[23009] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23010] = anon_sym_AMP;
	v->a[23011] = anon_sym_DOLLAR;
	v->a[23012] = anon_sym_DQUOTE;
	v->a[23013] = sym_raw_string;
	v->a[23014] = sym_number;
	v->a[23015] = anon_sym_DOLLAR_LBRACE;
	v->a[23016] = anon_sym_DOLLAR_LPAREN;
	v->a[23017] = anon_sym_BQUOTE;
	v->a[23018] = sym_word;
	v->a[23019] = anon_sym_SEMI;
	small_parse_table_1151(v);
}

void	small_parse_table_1151(t_small_parse_table_array *v)
{
	v->a[23020] = 12;
	v->a[23021] = actions(3);
	v->a[23022] = 1;
	v->a[23023] = sym_comment;
	v->a[23024] = actions(548);
	v->a[23025] = 1;
	v->a[23026] = sym_file_descriptor;
	v->a[23027] = actions(718);
	v->a[23028] = 1;
	v->a[23029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23030] = actions(720);
	v->a[23031] = 1;
	v->a[23032] = anon_sym_DOLLAR;
	v->a[23033] = actions(722);
	v->a[23034] = 1;
	v->a[23035] = anon_sym_DQUOTE;
	v->a[23036] = actions(724);
	v->a[23037] = 1;
	v->a[23038] = anon_sym_DOLLAR_LBRACE;
	v->a[23039] = actions(726);
	small_parse_table_1152(v);
}

void	small_parse_table_1152(t_small_parse_table_array *v)
{
	v->a[23040] = 1;
	v->a[23041] = anon_sym_DOLLAR_LPAREN;
	v->a[23042] = actions(728);
	v->a[23043] = 1;
	v->a[23044] = anon_sym_BQUOTE;
	v->a[23045] = state(227);
	v->a[23046] = 2;
	v->a[23047] = sym_concatenation;
	v->a[23048] = aux_sym_for_statement_repeat1;
	v->a[23049] = actions(716);
	v->a[23050] = 3;
	v->a[23051] = sym_raw_string;
	v->a[23052] = sym_number;
	v->a[23053] = sym_word;
	v->a[23054] = state(600);
	v->a[23055] = 5;
	v->a[23056] = sym_arithmetic_expansion;
	v->a[23057] = sym_string;
	v->a[23058] = sym_simple_expansion;
	v->a[23059] = sym_expansion;
	small_parse_table_1153(v);
}

void	small_parse_table_1153(t_small_parse_table_array *v)
{
	v->a[23060] = sym_command_substitution;
	v->a[23061] = actions(546);
	v->a[23062] = 20;
	v->a[23063] = anon_sym_PIPE;
	v->a[23064] = anon_sym_RPAREN;
	v->a[23065] = anon_sym_SEMI_SEMI;
	v->a[23066] = anon_sym_AMP_AMP;
	v->a[23067] = anon_sym_PIPE_PIPE;
	v->a[23068] = anon_sym_LT;
	v->a[23069] = anon_sym_GT;
	v->a[23070] = anon_sym_GT_GT;
	v->a[23071] = anon_sym_AMP_GT;
	v->a[23072] = anon_sym_AMP_GT_GT;
	v->a[23073] = anon_sym_LT_AMP;
	v->a[23074] = anon_sym_GT_AMP;
	v->a[23075] = anon_sym_GT_PIPE;
	v->a[23076] = anon_sym_LT_AMP_DASH;
	v->a[23077] = anon_sym_GT_AMP_DASH;
	v->a[23078] = anon_sym_LT_LT;
	v->a[23079] = anon_sym_LT_LT_DASH;
	small_parse_table_1154(v);
}

void	small_parse_table_1154(t_small_parse_table_array *v)
{
	v->a[23080] = aux_sym_heredoc_redirect_token1;
	v->a[23081] = anon_sym_AMP;
	v->a[23082] = anon_sym_SEMI;
	v->a[23083] = 12;
	v->a[23084] = actions(3);
	v->a[23085] = 1;
	v->a[23086] = sym_comment;
	v->a[23087] = actions(538);
	v->a[23088] = 1;
	v->a[23089] = sym_file_descriptor;
	v->a[23090] = actions(718);
	v->a[23091] = 1;
	v->a[23092] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23093] = actions(720);
	v->a[23094] = 1;
	v->a[23095] = anon_sym_DOLLAR;
	v->a[23096] = actions(722);
	v->a[23097] = 1;
	v->a[23098] = anon_sym_DQUOTE;
	v->a[23099] = actions(724);
	small_parse_table_1155(v);
}

/* EOF small_parse_table_230.c */
