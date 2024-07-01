/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_630.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3150(t_small_parse_table_array *v)
{
	v->a[63000] = anon_sym_LT_GT;
	v->a[63001] = anon_sym_LT_LT;
	v->a[63002] = anon_sym_LT_LT_DASH;
	v->a[63003] = anon_sym_AMP;
	v->a[63004] = anon_sym_BQUOTE;
	v->a[63005] = anon_sym_SEMI;
	v->a[63006] = 4;
	v->a[63007] = actions(3);
	v->a[63008] = 1;
	v->a[63009] = sym_comment;
	v->a[63010] = actions(997);
	v->a[63011] = 2;
	v->a[63012] = sym_file_descriptor;
	v->a[63013] = aux_sym_heredoc_redirect_token1;
	v->a[63014] = state(1194);
	v->a[63015] = 3;
	v->a[63016] = sym_file_redirect;
	v->a[63017] = sym_heredoc_redirect;
	v->a[63018] = aux_sym_redirected_statement_repeat1;
	v->a[63019] = actions(960);
	small_parse_table_3151(v);
}

void	small_parse_table_3151(t_small_parse_table_array *v)
{
	v->a[63020] = 15;
	v->a[63021] = anon_sym_PIPE;
	v->a[63022] = anon_sym_SEMI_SEMI;
	v->a[63023] = anon_sym_AMP_AMP;
	v->a[63024] = anon_sym_PIPE_PIPE;
	v->a[63025] = anon_sym_LT;
	v->a[63026] = anon_sym_GT;
	v->a[63027] = anon_sym_GT_GT;
	v->a[63028] = anon_sym_LT_AMP;
	v->a[63029] = anon_sym_GT_AMP;
	v->a[63030] = anon_sym_GT_PIPE;
	v->a[63031] = anon_sym_LT_GT;
	v->a[63032] = anon_sym_LT_LT;
	v->a[63033] = anon_sym_LT_LT_DASH;
	v->a[63034] = anon_sym_AMP;
	v->a[63035] = anon_sym_SEMI;
	v->a[63036] = 11;
	v->a[63037] = actions(3);
	v->a[63038] = 1;
	v->a[63039] = sym_comment;
	small_parse_table_3152(v);
}

void	small_parse_table_3152(t_small_parse_table_array *v)
{
	v->a[63040] = actions(2219);
	v->a[63041] = 1;
	v->a[63042] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63043] = actions(2222);
	v->a[63044] = 1;
	v->a[63045] = anon_sym_DOLLAR;
	v->a[63046] = actions(2225);
	v->a[63047] = 1;
	v->a[63048] = anon_sym_DQUOTE;
	v->a[63049] = actions(2228);
	v->a[63050] = 1;
	v->a[63051] = anon_sym_DOLLAR_LBRACE;
	v->a[63052] = actions(2231);
	v->a[63053] = 1;
	v->a[63054] = anon_sym_DOLLAR_LPAREN;
	v->a[63055] = actions(2234);
	v->a[63056] = 1;
	v->a[63057] = anon_sym_BQUOTE;
	v->a[63058] = state(1177);
	v->a[63059] = 2;
	small_parse_table_3153(v);
}

void	small_parse_table_3153(t_small_parse_table_array *v)
{
	v->a[63060] = sym_concatenation;
	v->a[63061] = aux_sym_for_statement_repeat1;
	v->a[63062] = actions(2216);
	v->a[63063] = 3;
	v->a[63064] = sym_raw_string;
	v->a[63065] = sym_number;
	v->a[63066] = sym_word;
	v->a[63067] = actions(504);
	v->a[63068] = 4;
	v->a[63069] = anon_sym_SEMI_SEMI;
	v->a[63070] = aux_sym_heredoc_redirect_token1;
	v->a[63071] = anon_sym_AMP;
	v->a[63072] = anon_sym_SEMI;
	v->a[63073] = state(1398);
	v->a[63074] = 5;
	v->a[63075] = sym_arithmetic_expansion;
	v->a[63076] = sym_string;
	v->a[63077] = sym_simple_expansion;
	v->a[63078] = sym_expansion;
	v->a[63079] = sym_command_substitution;
	small_parse_table_3154(v);
}

void	small_parse_table_3154(t_small_parse_table_array *v)
{
	v->a[63080] = 3;
	v->a[63081] = actions(3);
	v->a[63082] = 1;
	v->a[63083] = sym_comment;
	v->a[63084] = actions(2237);
	v->a[63085] = 3;
	v->a[63086] = sym_file_descriptor;
	v->a[63087] = ts_builtin_sym_end;
	v->a[63088] = aux_sym_heredoc_redirect_token1;
	v->a[63089] = actions(2239);
	v->a[63090] = 17;
	v->a[63091] = anon_sym_PIPE;
	v->a[63092] = anon_sym_RPAREN;
	v->a[63093] = anon_sym_SEMI_SEMI;
	v->a[63094] = anon_sym_AMP_AMP;
	v->a[63095] = anon_sym_PIPE_PIPE;
	v->a[63096] = anon_sym_LT;
	v->a[63097] = anon_sym_GT;
	v->a[63098] = anon_sym_GT_GT;
	v->a[63099] = anon_sym_LT_AMP;
	small_parse_table_3155(v);
}

/* EOF small_parse_table_630.c */
