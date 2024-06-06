/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1020.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5100(t_small_parse_table_array *v)
{
	v->a[102000] = actions(5433);
	v->a[102001] = 1;
	v->a[102002] = sym__brace_start;
	v->a[102003] = actions(5887);
	v->a[102004] = 1;
	v->a[102005] = sym_word;
	v->a[102006] = actions(5889);
	v->a[102007] = 1;
	v->a[102008] = sym__special_character;
	v->a[102009] = state(1916);
	v->a[102010] = 1;
	v->a[102011] = aux_sym__literal_repeat1;
	v->a[102012] = state(2141);
	v->a[102013] = 1;
	v->a[102014] = sym_concatenation;
	v->a[102015] = actions(5891);
	v->a[102016] = 2;
	v->a[102017] = sym_test_operator;
	v->a[102018] = sym_raw_string;
	v->a[102019] = state(2003);
	small_parse_table_5101(v);
}

void	small_parse_table_5101(t_small_parse_table_array *v)
{
	v->a[102020] = 7;
	v->a[102021] = sym_arithmetic_expansion;
	v->a[102022] = sym_brace_expression;
	v->a[102023] = sym_string;
	v->a[102024] = sym_number;
	v->a[102025] = sym_simple_expansion;
	v->a[102026] = sym_expansion;
	v->a[102027] = sym_command_substitution;
	v->a[102028] = 19;
	v->a[102029] = actions(3);
	v->a[102030] = 1;
	v->a[102031] = sym_comment;
	v->a[102032] = actions(2458);
	v->a[102033] = 1;
	v->a[102034] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102035] = actions(2460);
	v->a[102036] = 1;
	v->a[102037] = anon_sym_DOLLAR;
	v->a[102038] = actions(2462);
	v->a[102039] = 1;
	small_parse_table_5102(v);
}

void	small_parse_table_5102(t_small_parse_table_array *v)
{
	v->a[102040] = sym__special_character;
	v->a[102041] = actions(2464);
	v->a[102042] = 1;
	v->a[102043] = anon_sym_DQUOTE;
	v->a[102044] = actions(2466);
	v->a[102045] = 1;
	v->a[102046] = aux_sym_number_token1;
	v->a[102047] = actions(2468);
	v->a[102048] = 1;
	v->a[102049] = aux_sym_number_token2;
	v->a[102050] = actions(2470);
	v->a[102051] = 1;
	v->a[102052] = anon_sym_DOLLAR_LBRACE;
	v->a[102053] = actions(2472);
	v->a[102054] = 1;
	v->a[102055] = anon_sym_DOLLAR_LPAREN;
	v->a[102056] = actions(2474);
	v->a[102057] = 1;
	v->a[102058] = anon_sym_BQUOTE;
	v->a[102059] = actions(2476);
	small_parse_table_5103(v);
}

void	small_parse_table_5103(t_small_parse_table_array *v)
{
	v->a[102060] = 1;
	v->a[102061] = anon_sym_DOLLAR_BQUOTE;
	v->a[102062] = actions(2480);
	v->a[102063] = 1;
	v->a[102064] = sym_test_operator;
	v->a[102065] = actions(2482);
	v->a[102066] = 1;
	v->a[102067] = sym__brace_start;
	v->a[102068] = actions(5893);
	v->a[102069] = 1;
	v->a[102070] = aux_sym_heredoc_redirect_token1;
	v->a[102071] = state(2122);
	v->a[102072] = 1;
	v->a[102073] = aux_sym__heredoc_command;
	v->a[102074] = state(2852);
	v->a[102075] = 1;
	v->a[102076] = aux_sym__literal_repeat1;
	v->a[102077] = state(2882);
	v->a[102078] = 1;
	v->a[102079] = sym_concatenation;
	small_parse_table_5104(v);
}

void	small_parse_table_5104(t_small_parse_table_array *v)
{
	v->a[102080] = actions(2446);
	v->a[102081] = 2;
	v->a[102082] = sym_raw_string;
	v->a[102083] = sym_word;
	v->a[102084] = state(2716);
	v->a[102085] = 7;
	v->a[102086] = sym_arithmetic_expansion;
	v->a[102087] = sym_brace_expression;
	v->a[102088] = sym_string;
	v->a[102089] = sym_number;
	v->a[102090] = sym_simple_expansion;
	v->a[102091] = sym_expansion;
	v->a[102092] = sym_command_substitution;
	v->a[102093] = 6;
	v->a[102094] = actions(3);
	v->a[102095] = 1;
	v->a[102096] = sym_comment;
	v->a[102097] = actions(5267);
	v->a[102098] = 1;
	v->a[102099] = aux_sym_concatenation_token1;
	small_parse_table_5105(v);
}

/* EOF small_parse_table_1020.c */
