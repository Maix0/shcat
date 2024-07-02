/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_390.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1950(t_small_parse_table_array *v)
{
	v->a[39000] = actions(1402);
	v->a[39001] = 1;
	v->a[39002] = anon_sym_DQUOTE;
	v->a[39003] = actions(1405);
	v->a[39004] = 1;
	v->a[39005] = anon_sym_DOLLAR_LBRACE;
	v->a[39006] = actions(1408);
	v->a[39007] = 1;
	v->a[39008] = anon_sym_DOLLAR_LPAREN;
	v->a[39009] = actions(1411);
	v->a[39010] = 1;
	v->a[39011] = anon_sym_BQUOTE;
	v->a[39012] = state(581);
	v->a[39013] = 2;
	v->a[39014] = sym_concatenation;
	v->a[39015] = aux_sym_for_statement_repeat1;
	v->a[39016] = actions(1393);
	v->a[39017] = 3;
	v->a[39018] = sym_raw_string;
	v->a[39019] = sym_number;
	small_parse_table_1951(v);
}

void	small_parse_table_1951(t_small_parse_table_array *v)
{
	v->a[39020] = sym_word;
	v->a[39021] = state(884);
	v->a[39022] = 5;
	v->a[39023] = sym_arithmetic_expansion;
	v->a[39024] = sym_string;
	v->a[39025] = sym_simple_expansion;
	v->a[39026] = sym_expansion;
	v->a[39027] = sym_command_substitution;
	v->a[39028] = actions(520);
	v->a[39029] = 12;
	v->a[39030] = anon_sym_PIPE;
	v->a[39031] = anon_sym_AMP_AMP;
	v->a[39032] = anon_sym_PIPE_PIPE;
	v->a[39033] = anon_sym_LT;
	v->a[39034] = anon_sym_GT;
	v->a[39035] = anon_sym_GT_GT;
	v->a[39036] = anon_sym_LT_AMP;
	v->a[39037] = anon_sym_GT_AMP;
	v->a[39038] = anon_sym_GT_PIPE;
	v->a[39039] = anon_sym_LT_GT;
	small_parse_table_1952(v);
}

void	small_parse_table_1952(t_small_parse_table_array *v)
{
	v->a[39040] = anon_sym_LT_LT;
	v->a[39041] = anon_sym_LT_LT_DASH;
	v->a[39042] = 3;
	v->a[39043] = actions(3);
	v->a[39044] = 1;
	v->a[39045] = sym_comment;
	v->a[39046] = actions(1200);
	v->a[39047] = 3;
	v->a[39048] = sym_file_descriptor;
	v->a[39049] = sym__concat;
	v->a[39050] = ts_builtin_sym_end;
	v->a[39051] = actions(1198);
	v->a[39052] = 26;
	v->a[39053] = anon_sym_PIPE;
	v->a[39054] = anon_sym_SEMI_SEMI;
	v->a[39055] = anon_sym_AMP_AMP;
	v->a[39056] = anon_sym_PIPE_PIPE;
	v->a[39057] = anon_sym_LT;
	v->a[39058] = anon_sym_GT;
	v->a[39059] = anon_sym_GT_GT;
	small_parse_table_1953(v);
}

void	small_parse_table_1953(t_small_parse_table_array *v)
{
	v->a[39060] = anon_sym_LT_AMP;
	v->a[39061] = anon_sym_GT_AMP;
	v->a[39062] = anon_sym_GT_PIPE;
	v->a[39063] = anon_sym_LT_GT;
	v->a[39064] = anon_sym_LT_LT;
	v->a[39065] = anon_sym_LT_LT_DASH;
	v->a[39066] = aux_sym_heredoc_redirect_token1;
	v->a[39067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39068] = anon_sym_AMP;
	v->a[39069] = aux_sym_concatenation_token1;
	v->a[39070] = anon_sym_DOLLAR;
	v->a[39071] = anon_sym_DQUOTE;
	v->a[39072] = sym_raw_string;
	v->a[39073] = sym_number;
	v->a[39074] = anon_sym_DOLLAR_LBRACE;
	v->a[39075] = anon_sym_DOLLAR_LPAREN;
	v->a[39076] = anon_sym_BQUOTE;
	v->a[39077] = sym_word;
	v->a[39078] = anon_sym_SEMI;
	v->a[39079] = 3;
	small_parse_table_1954(v);
}

void	small_parse_table_1954(t_small_parse_table_array *v)
{
	v->a[39080] = actions(3);
	v->a[39081] = 1;
	v->a[39082] = sym_comment;
	v->a[39083] = actions(1051);
	v->a[39084] = 3;
	v->a[39085] = sym_file_descriptor;
	v->a[39086] = sym__bare_dollar;
	v->a[39087] = ts_builtin_sym_end;
	v->a[39088] = actions(1053);
	v->a[39089] = 26;
	v->a[39090] = anon_sym_LPAREN;
	v->a[39091] = anon_sym_PIPE;
	v->a[39092] = anon_sym_SEMI_SEMI;
	v->a[39093] = anon_sym_AMP_AMP;
	v->a[39094] = anon_sym_PIPE_PIPE;
	v->a[39095] = anon_sym_LT;
	v->a[39096] = anon_sym_GT;
	v->a[39097] = anon_sym_GT_GT;
	v->a[39098] = anon_sym_LT_AMP;
	v->a[39099] = anon_sym_GT_AMP;
	small_parse_table_1955(v);
}

/* EOF small_parse_table_390.c */
