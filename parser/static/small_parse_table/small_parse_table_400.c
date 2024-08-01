/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_400.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2000(t_small_parse_table_array *v)
{
	v->a[40000] = 1;
	v->a[40001] = anon_sym_DOLLAR;
	v->a[40002] = actions(659);
	v->a[40003] = 1;
	v->a[40004] = anon_sym_DQUOTE;
	v->a[40005] = actions(661);
	v->a[40006] = 1;
	v->a[40007] = anon_sym_DOLLAR_LBRACE;
	v->a[40008] = actions(663);
	v->a[40009] = 1;
	v->a[40010] = anon_sym_DOLLAR_LPAREN;
	v->a[40011] = actions(665);
	v->a[40012] = 1;
	v->a[40013] = anon_sym_BQUOTE;
	v->a[40014] = state(591);
	v->a[40015] = 2;
	v->a[40016] = sym_concatenation;
	v->a[40017] = aux_sym_for_statement_repeat1;
	v->a[40018] = actions(1346);
	v->a[40019] = 3;
	small_parse_table_2001(v);
}

void	small_parse_table_2001(t_small_parse_table_array *v)
{
	v->a[40020] = sym_raw_string;
	v->a[40021] = sym_number;
	v->a[40022] = sym_word;
	v->a[40023] = state(857);
	v->a[40024] = 5;
	v->a[40025] = sym_arithmetic_expansion;
	v->a[40026] = sym_string;
	v->a[40027] = sym_simple_expansion;
	v->a[40028] = sym_expansion;
	v->a[40029] = sym_command_substitution;
	v->a[40030] = 6;
	v->a[40031] = actions(3);
	v->a[40032] = 1;
	v->a[40033] = sym_comment;
	v->a[40034] = actions(1853);
	v->a[40035] = 1;
	v->a[40036] = sym_variable_name;
	v->a[40037] = state(1083);
	v->a[40038] = 1;
	v->a[40039] = sym_file_redirect;
	small_parse_table_2002(v);
}

void	small_parse_table_2002(t_small_parse_table_array *v)
{
	v->a[40040] = state(792);
	v->a[40041] = 2;
	v->a[40042] = sym_variable_assignment;
	v->a[40043] = aux_sym_command_repeat1;
	v->a[40044] = actions(1850);
	v->a[40045] = 3;
	v->a[40046] = anon_sym_LT;
	v->a[40047] = anon_sym_GT;
	v->a[40048] = anon_sym_GT_GT;
	v->a[40049] = actions(1848);
	v->a[40050] = 9;
	v->a[40051] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40052] = anon_sym_DOLLAR;
	v->a[40053] = anon_sym_DQUOTE;
	v->a[40054] = sym_raw_string;
	v->a[40055] = sym_number;
	v->a[40056] = anon_sym_DOLLAR_LBRACE;
	v->a[40057] = anon_sym_DOLLAR_LPAREN;
	v->a[40058] = anon_sym_BQUOTE;
	v->a[40059] = sym_word;
	small_parse_table_2003(v);
}

void	small_parse_table_2003(t_small_parse_table_array *v)
{
	v->a[40060] = 3;
	v->a[40061] = actions(3);
	v->a[40062] = 1;
	v->a[40063] = sym_comment;
	v->a[40064] = actions(1108);
	v->a[40065] = 4;
	v->a[40066] = sym__concat;
	v->a[40067] = sym_variable_name;
	v->a[40068] = ts_builtin_sym_end;
	v->a[40069] = aux_sym_heredoc_redirect_token1;
	v->a[40070] = actions(1106);
	v->a[40071] = 12;
	v->a[40072] = anon_sym_PIPE;
	v->a[40073] = anon_sym_RPAREN;
	v->a[40074] = anon_sym_SEMI_SEMI;
	v->a[40075] = anon_sym_AMP_AMP;
	v->a[40076] = anon_sym_PIPE_PIPE;
	v->a[40077] = anon_sym_LT;
	v->a[40078] = anon_sym_GT;
	v->a[40079] = anon_sym_GT_GT;
	small_parse_table_2004(v);
}

void	small_parse_table_2004(t_small_parse_table_array *v)
{
	v->a[40080] = anon_sym_LT_LT;
	v->a[40081] = aux_sym_concatenation_token1;
	v->a[40082] = anon_sym_BQUOTE;
	v->a[40083] = anon_sym_SEMI;
	v->a[40084] = 10;
	v->a[40085] = actions(3);
	v->a[40086] = 1;
	v->a[40087] = sym_comment;
	v->a[40088] = actions(655);
	v->a[40089] = 1;
	v->a[40090] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40091] = actions(657);
	v->a[40092] = 1;
	v->a[40093] = anon_sym_DOLLAR;
	v->a[40094] = actions(659);
	v->a[40095] = 1;
	v->a[40096] = anon_sym_DQUOTE;
	v->a[40097] = actions(661);
	v->a[40098] = 1;
	v->a[40099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2005(v);
}

/* EOF small_parse_table_400.c */
