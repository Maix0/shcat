/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_620.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3100(t_small_parse_table_array *v)
{
	v->a[62000] = sym_variable_name;
	v->a[62001] = actions(660);
	v->a[62002] = 17;
	v->a[62003] = anon_sym_LT;
	v->a[62004] = anon_sym_GT;
	v->a[62005] = anon_sym_GT_GT;
	v->a[62006] = anon_sym_LT_AMP;
	v->a[62007] = anon_sym_GT_AMP;
	v->a[62008] = anon_sym_GT_PIPE;
	v->a[62009] = anon_sym_LT_GT;
	v->a[62010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62011] = aux_sym_concatenation_token1;
	v->a[62012] = anon_sym_DOLLAR;
	v->a[62013] = anon_sym_DQUOTE;
	v->a[62014] = sym_raw_string;
	v->a[62015] = sym_number;
	v->a[62016] = anon_sym_DOLLAR_LBRACE;
	v->a[62017] = anon_sym_DOLLAR_LPAREN;
	v->a[62018] = anon_sym_BQUOTE;
	v->a[62019] = sym_word;
	small_parse_table_3101(v);
}

void	small_parse_table_3101(t_small_parse_table_array *v)
{
	v->a[62020] = 9;
	v->a[62021] = actions(3);
	v->a[62022] = 1;
	v->a[62023] = sym_comment;
	v->a[62024] = actions(1889);
	v->a[62025] = 1;
	v->a[62026] = sym_file_descriptor;
	v->a[62027] = actions(1912);
	v->a[62028] = 1;
	v->a[62029] = aux_sym_heredoc_redirect_token1;
	v->a[62030] = state(745);
	v->a[62031] = 1;
	v->a[62032] = sym_terminator;
	v->a[62033] = actions(744);
	v->a[62034] = 2;
	v->a[62035] = anon_sym_LT_LT;
	v->a[62036] = anon_sym_LT_LT_DASH;
	v->a[62037] = actions(955);
	v->a[62038] = 2;
	v->a[62039] = anon_sym_AMP_AMP;
	small_parse_table_3102(v);
}

void	small_parse_table_3102(t_small_parse_table_array *v)
{
	v->a[62040] = anon_sym_PIPE_PIPE;
	v->a[62041] = actions(1013);
	v->a[62042] = 3;
	v->a[62043] = anon_sym_SEMI_SEMI;
	v->a[62044] = anon_sym_AMP;
	v->a[62045] = anon_sym_SEMI;
	v->a[62046] = state(1194);
	v->a[62047] = 3;
	v->a[62048] = sym_file_redirect;
	v->a[62049] = sym_heredoc_redirect;
	v->a[62050] = aux_sym_redirected_statement_repeat1;
	v->a[62051] = actions(1887);
	v->a[62052] = 7;
	v->a[62053] = anon_sym_LT;
	v->a[62054] = anon_sym_GT;
	v->a[62055] = anon_sym_GT_GT;
	v->a[62056] = anon_sym_LT_AMP;
	v->a[62057] = anon_sym_GT_AMP;
	v->a[62058] = anon_sym_GT_PIPE;
	v->a[62059] = anon_sym_LT_GT;
	small_parse_table_3103(v);
}

void	small_parse_table_3103(t_small_parse_table_array *v)
{
	v->a[62060] = 3;
	v->a[62061] = actions(3);
	v->a[62062] = 1;
	v->a[62063] = sym_comment;
	v->a[62064] = actions(753);
	v->a[62065] = 3;
	v->a[62066] = sym_file_descriptor;
	v->a[62067] = sym__concat;
	v->a[62068] = sym_variable_name;
	v->a[62069] = actions(751);
	v->a[62070] = 17;
	v->a[62071] = anon_sym_LT;
	v->a[62072] = anon_sym_GT;
	v->a[62073] = anon_sym_GT_GT;
	v->a[62074] = anon_sym_LT_AMP;
	v->a[62075] = anon_sym_GT_AMP;
	v->a[62076] = anon_sym_GT_PIPE;
	v->a[62077] = anon_sym_LT_GT;
	v->a[62078] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62079] = aux_sym_concatenation_token1;
	small_parse_table_3104(v);
}

void	small_parse_table_3104(t_small_parse_table_array *v)
{
	v->a[62080] = anon_sym_DOLLAR;
	v->a[62081] = anon_sym_DQUOTE;
	v->a[62082] = sym_raw_string;
	v->a[62083] = sym_number;
	v->a[62084] = anon_sym_DOLLAR_LBRACE;
	v->a[62085] = anon_sym_DOLLAR_LPAREN;
	v->a[62086] = anon_sym_BQUOTE;
	v->a[62087] = sym_word;
	v->a[62088] = 3;
	v->a[62089] = actions(3);
	v->a[62090] = 1;
	v->a[62091] = sym_comment;
	v->a[62092] = actions(662);
	v->a[62093] = 3;
	v->a[62094] = sym_file_descriptor;
	v->a[62095] = sym__concat;
	v->a[62096] = sym_variable_name;
	v->a[62097] = actions(660);
	v->a[62098] = 17;
	v->a[62099] = anon_sym_LT;
	small_parse_table_3105(v);
}

/* EOF small_parse_table_620.c */
