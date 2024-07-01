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
	v->a[23000] = 1;
	v->a[23001] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23002] = actions(633);
	v->a[23003] = 1;
	v->a[23004] = anon_sym_DOLLAR;
	v->a[23005] = actions(636);
	v->a[23006] = 1;
	v->a[23007] = anon_sym_DQUOTE;
	v->a[23008] = actions(639);
	v->a[23009] = 1;
	v->a[23010] = anon_sym_DOLLAR_LBRACE;
	v->a[23011] = actions(642);
	v->a[23012] = 1;
	v->a[23013] = anon_sym_DOLLAR_LPAREN;
	v->a[23014] = actions(645);
	v->a[23015] = 1;
	v->a[23016] = anon_sym_BQUOTE;
	v->a[23017] = actions(577);
	v->a[23018] = 2;
	v->a[23019] = sym_file_descriptor;
	small_parse_table_1151(v);
}

void	small_parse_table_1151(t_small_parse_table_array *v)
{
	v->a[23020] = sym_variable_name;
	v->a[23021] = state(223);
	v->a[23022] = 2;
	v->a[23023] = sym_concatenation;
	v->a[23024] = aux_sym_for_statement_repeat1;
	v->a[23025] = actions(759);
	v->a[23026] = 3;
	v->a[23027] = sym_raw_string;
	v->a[23028] = sym_number;
	v->a[23029] = sym_word;
	v->a[23030] = state(507);
	v->a[23031] = 5;
	v->a[23032] = sym_arithmetic_expansion;
	v->a[23033] = sym_string;
	v->a[23034] = sym_simple_expansion;
	v->a[23035] = sym_expansion;
	v->a[23036] = sym_command_substitution;
	v->a[23037] = actions(582);
	v->a[23038] = 17;
	v->a[23039] = anon_sym_PIPE;
	small_parse_table_1152(v);
}

void	small_parse_table_1152(t_small_parse_table_array *v)
{
	v->a[23040] = anon_sym_SEMI_SEMI;
	v->a[23041] = anon_sym_AMP_AMP;
	v->a[23042] = anon_sym_PIPE_PIPE;
	v->a[23043] = anon_sym_LT;
	v->a[23044] = anon_sym_GT;
	v->a[23045] = anon_sym_GT_GT;
	v->a[23046] = anon_sym_LT_AMP;
	v->a[23047] = anon_sym_GT_AMP;
	v->a[23048] = anon_sym_GT_PIPE;
	v->a[23049] = anon_sym_LT_AMP_DASH;
	v->a[23050] = anon_sym_GT_AMP_DASH;
	v->a[23051] = anon_sym_LT_LT;
	v->a[23052] = anon_sym_LT_LT_DASH;
	v->a[23053] = aux_sym_heredoc_redirect_token1;
	v->a[23054] = anon_sym_AMP;
	v->a[23055] = anon_sym_SEMI;
	v->a[23056] = 14;
	v->a[23057] = actions(3);
	v->a[23058] = 1;
	v->a[23059] = sym_comment;
	small_parse_table_1153(v);
}

void	small_parse_table_1153(t_small_parse_table_array *v)
{
	v->a[23060] = actions(536);
	v->a[23061] = 1;
	v->a[23062] = sym_file_descriptor;
	v->a[23063] = actions(657);
	v->a[23064] = 1;
	v->a[23065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23066] = actions(660);
	v->a[23067] = 1;
	v->a[23068] = anon_sym_DOLLAR;
	v->a[23069] = actions(663);
	v->a[23070] = 1;
	v->a[23071] = anon_sym_DQUOTE;
	v->a[23072] = actions(666);
	v->a[23073] = 1;
	v->a[23074] = anon_sym_DOLLAR_LBRACE;
	v->a[23075] = actions(669);
	v->a[23076] = 1;
	v->a[23077] = anon_sym_DOLLAR_LPAREN;
	v->a[23078] = actions(672);
	v->a[23079] = 1;
	small_parse_table_1154(v);
}

void	small_parse_table_1154(t_small_parse_table_array *v)
{
	v->a[23080] = anon_sym_BQUOTE;
	v->a[23081] = actions(675);
	v->a[23082] = 1;
	v->a[23083] = sym__bare_dollar;
	v->a[23084] = state(224);
	v->a[23085] = 1;
	v->a[23086] = aux_sym_command_repeat2;
	v->a[23087] = state(718);
	v->a[23088] = 1;
	v->a[23089] = sym_concatenation;
	v->a[23090] = actions(762);
	v->a[23091] = 3;
	v->a[23092] = sym_raw_string;
	v->a[23093] = sym_number;
	v->a[23094] = sym_word;
	v->a[23095] = state(493);
	v->a[23096] = 5;
	v->a[23097] = sym_arithmetic_expansion;
	v->a[23098] = sym_string;
	v->a[23099] = sym_simple_expansion;
	small_parse_table_1155(v);
}

/* EOF small_parse_table_230.c */
