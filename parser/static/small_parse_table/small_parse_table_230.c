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
	v->a[23000] = anon_sym_SEMI_SEMI_AMP;
	v->a[23001] = anon_sym_PIPE_AMP;
	v->a[23002] = anon_sym_AMP_AMP;
	v->a[23003] = anon_sym_PIPE_PIPE;
	v->a[23004] = anon_sym_LT;
	v->a[23005] = anon_sym_GT;
	v->a[23006] = anon_sym_GT_GT;
	v->a[23007] = anon_sym_AMP_GT;
	v->a[23008] = anon_sym_AMP_GT_GT;
	v->a[23009] = anon_sym_LT_AMP;
	v->a[23010] = anon_sym_GT_AMP;
	v->a[23011] = anon_sym_GT_PIPE;
	v->a[23012] = anon_sym_LT_AMP_DASH;
	v->a[23013] = anon_sym_GT_AMP_DASH;
	v->a[23014] = anon_sym_LT_LT;
	v->a[23015] = anon_sym_LT_LT_DASH;
	v->a[23016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23017] = anon_sym_AMP;
	v->a[23018] = aux_sym_concatenation_token1;
	v->a[23019] = anon_sym_DOLLAR;
	small_parse_table_1151(v);
}

void	small_parse_table_1151(t_small_parse_table_array *v)
{
	v->a[23020] = sym__special_character;
	v->a[23021] = anon_sym_DQUOTE;
	v->a[23022] = sym_raw_string;
	v->a[23023] = aux_sym_number_token1;
	v->a[23024] = aux_sym_number_token2;
	v->a[23025] = anon_sym_DOLLAR_LBRACE;
	v->a[23026] = anon_sym_DOLLAR_LPAREN;
	v->a[23027] = anon_sym_BQUOTE;
	v->a[23028] = anon_sym_DOLLAR_BQUOTE;
	v->a[23029] = sym_word;
	v->a[23030] = anon_sym_SEMI;
	v->a[23031] = 6;
	v->a[23032] = actions(3);
	v->a[23033] = 1;
	v->a[23034] = sym_comment;
	v->a[23035] = actions(3056);
	v->a[23036] = 1;
	v->a[23037] = aux_sym_concatenation_token1;
	v->a[23038] = actions(3113);
	v->a[23039] = 1;
	small_parse_table_1152(v);
}

void	small_parse_table_1152(t_small_parse_table_array *v)
{
	v->a[23040] = sym__concat;
	v->a[23041] = state(559);
	v->a[23042] = 1;
	v->a[23043] = aux_sym_concatenation_repeat1;
	v->a[23044] = actions(2664);
	v->a[23045] = 5;
	v->a[23046] = sym_file_descriptor;
	v->a[23047] = sym_test_operator;
	v->a[23048] = sym__bare_dollar;
	v->a[23049] = sym__brace_start;
	v->a[23050] = aux_sym_heredoc_redirect_token1;
	v->a[23051] = actions(2662);
	v->a[23052] = 34;
	v->a[23053] = anon_sym_LPAREN;
	v->a[23054] = anon_sym_PIPE;
	v->a[23055] = anon_sym_SEMI_SEMI;
	v->a[23056] = anon_sym_SEMI_AMP;
	v->a[23057] = anon_sym_SEMI_SEMI_AMP;
	v->a[23058] = anon_sym_PIPE_AMP;
	v->a[23059] = anon_sym_AMP_AMP;
	small_parse_table_1153(v);
}

void	small_parse_table_1153(t_small_parse_table_array *v)
{
	v->a[23060] = anon_sym_PIPE_PIPE;
	v->a[23061] = anon_sym_LT;
	v->a[23062] = anon_sym_GT;
	v->a[23063] = anon_sym_GT_GT;
	v->a[23064] = anon_sym_AMP_GT;
	v->a[23065] = anon_sym_AMP_GT_GT;
	v->a[23066] = anon_sym_LT_AMP;
	v->a[23067] = anon_sym_GT_AMP;
	v->a[23068] = anon_sym_GT_PIPE;
	v->a[23069] = anon_sym_LT_AMP_DASH;
	v->a[23070] = anon_sym_GT_AMP_DASH;
	v->a[23071] = anon_sym_LT_LT;
	v->a[23072] = anon_sym_LT_LT_DASH;
	v->a[23073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23074] = anon_sym_AMP;
	v->a[23075] = anon_sym_DOLLAR;
	v->a[23076] = sym__special_character;
	v->a[23077] = anon_sym_DQUOTE;
	v->a[23078] = sym_raw_string;
	v->a[23079] = aux_sym_number_token1;
	small_parse_table_1154(v);
}

void	small_parse_table_1154(t_small_parse_table_array *v)
{
	v->a[23080] = aux_sym_number_token2;
	v->a[23081] = anon_sym_DOLLAR_LBRACE;
	v->a[23082] = anon_sym_DOLLAR_LPAREN;
	v->a[23083] = anon_sym_BQUOTE;
	v->a[23084] = anon_sym_DOLLAR_BQUOTE;
	v->a[23085] = sym_word;
	v->a[23086] = anon_sym_SEMI;
	v->a[23087] = 6;
	v->a[23088] = actions(3);
	v->a[23089] = 1;
	v->a[23090] = sym_comment;
	v->a[23091] = actions(2822);
	v->a[23092] = 1;
	v->a[23093] = aux_sym_concatenation_token1;
	v->a[23094] = actions(2830);
	v->a[23095] = 1;
	v->a[23096] = sym__concat;
	v->a[23097] = state(512);
	v->a[23098] = 1;
	v->a[23099] = aux_sym_concatenation_repeat1;
	small_parse_table_1155(v);
}

/* EOF small_parse_table_230.c */
