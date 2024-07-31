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
	v->a[23000] = anon_sym_DOLLAR_LBRACE;
	v->a[23001] = actions(554);
	v->a[23002] = 1;
	v->a[23003] = anon_sym_DOLLAR_LPAREN;
	v->a[23004] = actions(557);
	v->a[23005] = 1;
	v->a[23006] = anon_sym_BQUOTE;
	v->a[23007] = actions(560);
	v->a[23008] = 1;
	v->a[23009] = sym__bare_dollar;
	v->a[23010] = state(268);
	v->a[23011] = 1;
	v->a[23012] = aux_sym_command_repeat2;
	v->a[23013] = state(614);
	v->a[23014] = 1;
	v->a[23015] = sym_concatenation;
	v->a[23016] = actions(855);
	v->a[23017] = 3;
	v->a[23018] = sym_raw_string;
	v->a[23019] = sym_number;
	small_parse_table_1151(v);
}

void	small_parse_table_1151(t_small_parse_table_array *v)
{
	v->a[23020] = sym_word;
	v->a[23021] = state(449);
	v->a[23022] = 5;
	v->a[23023] = sym_arithmetic_expansion;
	v->a[23024] = sym_string;
	v->a[23025] = sym_simple_expansion;
	v->a[23026] = sym_expansion;
	v->a[23027] = sym_command_substitution;
	v->a[23028] = actions(506);
	v->a[23029] = 15;
	v->a[23030] = anon_sym_PIPE;
	v->a[23031] = anon_sym_SEMI_SEMI;
	v->a[23032] = anon_sym_AMP_AMP;
	v->a[23033] = anon_sym_PIPE_PIPE;
	v->a[23034] = anon_sym_LT;
	v->a[23035] = anon_sym_GT;
	v->a[23036] = anon_sym_GT_GT;
	v->a[23037] = anon_sym_LT_AMP;
	v->a[23038] = anon_sym_GT_AMP;
	v->a[23039] = anon_sym_GT_PIPE;
	small_parse_table_1152(v);
}

void	small_parse_table_1152(t_small_parse_table_array *v)
{
	v->a[23040] = anon_sym_LT_GT;
	v->a[23041] = anon_sym_LT_LT;
	v->a[23042] = anon_sym_LT_LT_DASH;
	v->a[23043] = aux_sym_heredoc_redirect_token1;
	v->a[23044] = anon_sym_SEMI;
	v->a[23045] = 5;
	v->a[23046] = actions(3);
	v->a[23047] = 1;
	v->a[23048] = sym_comment;
	v->a[23049] = actions(489);
	v->a[23050] = 1;
	v->a[23051] = sym_variable_name;
	v->a[23052] = state(278);
	v->a[23053] = 2;
	v->a[23054] = sym_concatenation;
	v->a[23055] = aux_sym_for_statement_repeat1;
	v->a[23056] = state(439);
	v->a[23057] = 5;
	v->a[23058] = sym_arithmetic_expansion;
	v->a[23059] = sym_string;
	small_parse_table_1153(v);
}

void	small_parse_table_1153(t_small_parse_table_array *v)
{
	v->a[23060] = sym_simple_expansion;
	v->a[23061] = sym_expansion;
	v->a[23062] = sym_command_substitution;
	v->a[23063] = actions(487);
	v->a[23064] = 24;
	v->a[23065] = anon_sym_PIPE;
	v->a[23066] = anon_sym_SEMI_SEMI;
	v->a[23067] = anon_sym_AMP_AMP;
	v->a[23068] = anon_sym_PIPE_PIPE;
	v->a[23069] = anon_sym_LT;
	v->a[23070] = anon_sym_GT;
	v->a[23071] = anon_sym_GT_GT;
	v->a[23072] = anon_sym_LT_AMP;
	v->a[23073] = anon_sym_GT_AMP;
	v->a[23074] = anon_sym_GT_PIPE;
	v->a[23075] = anon_sym_LT_GT;
	v->a[23076] = anon_sym_LT_LT;
	v->a[23077] = anon_sym_LT_LT_DASH;
	v->a[23078] = aux_sym_heredoc_redirect_token1;
	v->a[23079] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1154(v);
}

void	small_parse_table_1154(t_small_parse_table_array *v)
{
	v->a[23080] = anon_sym_DOLLAR;
	v->a[23081] = anon_sym_DQUOTE;
	v->a[23082] = sym_raw_string;
	v->a[23083] = sym_number;
	v->a[23084] = anon_sym_DOLLAR_LBRACE;
	v->a[23085] = anon_sym_DOLLAR_LPAREN;
	v->a[23086] = anon_sym_BQUOTE;
	v->a[23087] = sym_word;
	v->a[23088] = anon_sym_SEMI;
	v->a[23089] = 13;
	v->a[23090] = actions(3);
	v->a[23091] = 1;
	v->a[23092] = sym_comment;
	v->a[23093] = actions(53);
	v->a[23094] = 1;
	v->a[23095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23096] = actions(55);
	v->a[23097] = 1;
	v->a[23098] = anon_sym_DOLLAR;
	v->a[23099] = actions(57);
	small_parse_table_1155(v);
}

/* EOF small_parse_table_230.c */
