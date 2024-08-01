/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_430.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2150(t_small_parse_table_array *v)
{
	v->a[43000] = 1;
	v->a[43001] = anon_sym_LT_LT;
	v->a[43002] = actions(716);
	v->a[43003] = 1;
	v->a[43004] = ts_builtin_sym_end;
	v->a[43005] = actions(1874);
	v->a[43006] = 1;
	v->a[43007] = aux_sym_heredoc_redirect_token1;
	v->a[43008] = state(444);
	v->a[43009] = 1;
	v->a[43010] = sym_terminator;
	v->a[43011] = actions(693);
	v->a[43012] = 2;
	v->a[43013] = anon_sym_SEMI_SEMI;
	v->a[43014] = anon_sym_SEMI;
	v->a[43015] = actions(695);
	v->a[43016] = 2;
	v->a[43017] = anon_sym_AMP_AMP;
	v->a[43018] = anon_sym_PIPE_PIPE;
	v->a[43019] = actions(1872);
	small_parse_table_2151(v);
}

void	small_parse_table_2151(t_small_parse_table_array *v)
{
	v->a[43020] = 3;
	v->a[43021] = anon_sym_LT;
	v->a[43022] = anon_sym_GT;
	v->a[43023] = anon_sym_GT_GT;
	v->a[43024] = state(922);
	v->a[43025] = 3;
	v->a[43026] = sym_file_redirect;
	v->a[43027] = sym_heredoc_redirect;
	v->a[43028] = aux_sym_redirected_statement_repeat1;
	v->a[43029] = 10;
	v->a[43030] = actions(3);
	v->a[43031] = 1;
	v->a[43032] = sym_comment;
	v->a[43033] = actions(1569);
	v->a[43034] = 1;
	v->a[43035] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43036] = actions(1573);
	v->a[43037] = 1;
	v->a[43038] = anon_sym_DQUOTE;
	v->a[43039] = actions(1575);
	small_parse_table_2152(v);
}

void	small_parse_table_2152(t_small_parse_table_array *v)
{
	v->a[43040] = 1;
	v->a[43041] = anon_sym_DOLLAR_LBRACE;
	v->a[43042] = actions(1577);
	v->a[43043] = 1;
	v->a[43044] = anon_sym_DOLLAR_LPAREN;
	v->a[43045] = actions(1579);
	v->a[43046] = 1;
	v->a[43047] = anon_sym_BQUOTE;
	v->a[43048] = actions(1756);
	v->a[43049] = 1;
	v->a[43050] = anon_sym_DOLLAR;
	v->a[43051] = state(1510);
	v->a[43052] = 1;
	v->a[43053] = sym_concatenation;
	v->a[43054] = actions(1902);
	v->a[43055] = 3;
	v->a[43056] = sym_raw_string;
	v->a[43057] = sym_number;
	v->a[43058] = sym_word;
	v->a[43059] = state(1381);
	small_parse_table_2153(v);
}

void	small_parse_table_2153(t_small_parse_table_array *v)
{
	v->a[43060] = 5;
	v->a[43061] = sym_arithmetic_expansion;
	v->a[43062] = sym_string;
	v->a[43063] = sym_simple_expansion;
	v->a[43064] = sym_expansion;
	v->a[43065] = sym_command_substitution;
	v->a[43066] = 10;
	v->a[43067] = actions(3);
	v->a[43068] = 1;
	v->a[43069] = sym_comment;
	v->a[43070] = actions(580);
	v->a[43071] = 1;
	v->a[43072] = anon_sym_PIPE;
	v->a[43073] = actions(597);
	v->a[43074] = 1;
	v->a[43075] = anon_sym_LT_LT;
	v->a[43076] = actions(716);
	v->a[43077] = 1;
	v->a[43078] = ts_builtin_sym_end;
	v->a[43079] = actions(1874);
	small_parse_table_2154(v);
}

void	small_parse_table_2154(t_small_parse_table_array *v)
{
	v->a[43080] = 1;
	v->a[43081] = aux_sym_heredoc_redirect_token1;
	v->a[43082] = state(441);
	v->a[43083] = 1;
	v->a[43084] = sym_terminator;
	v->a[43085] = actions(693);
	v->a[43086] = 2;
	v->a[43087] = anon_sym_SEMI_SEMI;
	v->a[43088] = anon_sym_SEMI;
	v->a[43089] = actions(695);
	v->a[43090] = 2;
	v->a[43091] = anon_sym_AMP_AMP;
	v->a[43092] = anon_sym_PIPE_PIPE;
	v->a[43093] = actions(1872);
	v->a[43094] = 3;
	v->a[43095] = anon_sym_LT;
	v->a[43096] = anon_sym_GT;
	v->a[43097] = anon_sym_GT_GT;
	v->a[43098] = state(922);
	v->a[43099] = 3;
	small_parse_table_2155(v);
}

/* EOF small_parse_table_430.c */
