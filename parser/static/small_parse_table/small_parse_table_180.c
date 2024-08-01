/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_180.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_900(t_small_parse_table_array *v)
{
	v->a[18000] = 1;
	v->a[18001] = ts_builtin_sym_end;
	v->a[18002] = actions(697);
	v->a[18003] = 1;
	v->a[18004] = sym_variable_name;
	v->a[18005] = state(461);
	v->a[18006] = 1;
	v->a[18007] = sym_terminator;
	v->a[18008] = actions(695);
	v->a[18009] = 2;
	v->a[18010] = anon_sym_AMP_AMP;
	v->a[18011] = anon_sym_PIPE_PIPE;
	v->a[18012] = state(924);
	v->a[18013] = 2;
	v->a[18014] = sym_variable_assignment;
	v->a[18015] = aux_sym__variable_assignments_repeat1;
	v->a[18016] = actions(693);
	v->a[18017] = 3;
	v->a[18018] = anon_sym_SEMI_SEMI;
	v->a[18019] = aux_sym_heredoc_redirect_token1;
	small_parse_table_901(v);
}

void	small_parse_table_901(t_small_parse_table_array *v)
{
	v->a[18020] = anon_sym_SEMI;
	v->a[18021] = state(922);
	v->a[18022] = 3;
	v->a[18023] = sym_file_redirect;
	v->a[18024] = sym_heredoc_redirect;
	v->a[18025] = aux_sym_redirected_statement_repeat1;
	v->a[18026] = actions(576);
	v->a[18027] = 12;
	v->a[18028] = anon_sym_LT;
	v->a[18029] = anon_sym_GT;
	v->a[18030] = anon_sym_GT_GT;
	v->a[18031] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18032] = anon_sym_DOLLAR;
	v->a[18033] = anon_sym_DQUOTE;
	v->a[18034] = sym_raw_string;
	v->a[18035] = sym_number;
	v->a[18036] = anon_sym_DOLLAR_LBRACE;
	v->a[18037] = anon_sym_DOLLAR_LPAREN;
	v->a[18038] = anon_sym_BQUOTE;
	v->a[18039] = sym_word;
	small_parse_table_902(v);
}

void	small_parse_table_902(t_small_parse_table_array *v)
{
	v->a[18040] = 18;
	v->a[18041] = actions(3);
	v->a[18042] = 1;
	v->a[18043] = sym_comment;
	v->a[18044] = actions(647);
	v->a[18045] = 1;
	v->a[18046] = anon_sym_PIPE;
	v->a[18047] = actions(655);
	v->a[18048] = 1;
	v->a[18049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18050] = actions(657);
	v->a[18051] = 1;
	v->a[18052] = anon_sym_DOLLAR;
	v->a[18053] = actions(659);
	v->a[18054] = 1;
	v->a[18055] = anon_sym_DQUOTE;
	v->a[18056] = actions(661);
	v->a[18057] = 1;
	v->a[18058] = anon_sym_DOLLAR_LBRACE;
	v->a[18059] = actions(663);
	small_parse_table_903(v);
}

void	small_parse_table_903(t_small_parse_table_array *v)
{
	v->a[18060] = 1;
	v->a[18061] = anon_sym_DOLLAR_LPAREN;
	v->a[18062] = actions(665);
	v->a[18063] = 1;
	v->a[18064] = anon_sym_BQUOTE;
	v->a[18065] = actions(700);
	v->a[18066] = 1;
	v->a[18067] = aux_sym_heredoc_redirect_token1;
	v->a[18068] = state(756);
	v->a[18069] = 1;
	v->a[18070] = aux_sym__heredoc_command;
	v->a[18071] = state(1296);
	v->a[18072] = 1;
	v->a[18073] = sym_concatenation;
	v->a[18074] = state(1596);
	v->a[18075] = 1;
	v->a[18076] = sym__heredoc_pipeline;
	v->a[18077] = state(1667);
	v->a[18078] = 1;
	v->a[18079] = sym__heredoc_expression;
	small_parse_table_904(v);
}

void	small_parse_table_904(t_small_parse_table_array *v)
{
	v->a[18080] = actions(649);
	v->a[18081] = 2;
	v->a[18082] = anon_sym_AMP_AMP;
	v->a[18083] = anon_sym_PIPE_PIPE;
	v->a[18084] = state(1360);
	v->a[18085] = 2;
	v->a[18086] = sym_file_redirect;
	v->a[18087] = aux_sym_redirected_statement_repeat2;
	v->a[18088] = actions(645);
	v->a[18089] = 3;
	v->a[18090] = sym_raw_string;
	v->a[18091] = sym_number;
	v->a[18092] = sym_word;
	v->a[18093] = actions(651);
	v->a[18094] = 3;
	v->a[18095] = anon_sym_LT;
	v->a[18096] = anon_sym_GT;
	v->a[18097] = anon_sym_GT_GT;
	v->a[18098] = state(1011);
	v->a[18099] = 5;
	small_parse_table_905(v);
}

/* EOF small_parse_table_180.c */
