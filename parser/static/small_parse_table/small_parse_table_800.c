/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_800.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4000(t_small_parse_table_array *v)
{
	v->a[80000] = 2;
	v->a[80001] = sym__concat;
	v->a[80002] = aux_sym_heredoc_redirect_token1;
	v->a[80003] = actions(569);
	v->a[80004] = 4;
	v->a[80005] = anon_sym_in;
	v->a[80006] = anon_sym_SEMI_SEMI;
	v->a[80007] = aux_sym_concatenation_token1;
	v->a[80008] = anon_sym_SEMI;
	v->a[80009] = 6;
	v->a[80010] = actions(501);
	v->a[80011] = 1;
	v->a[80012] = sym_comment;
	v->a[80013] = actions(3606);
	v->a[80014] = 1;
	v->a[80015] = anon_sym_elif;
	v->a[80016] = actions(3608);
	v->a[80017] = 1;
	v->a[80018] = anon_sym_else;
	v->a[80019] = actions(3626);
	small_parse_table_4001(v);
}

void	small_parse_table_4001(t_small_parse_table_array *v)
{
	v->a[80020] = 1;
	v->a[80021] = anon_sym_fi;
	v->a[80022] = state(2044);
	v->a[80023] = 1;
	v->a[80024] = sym_else_clause;
	v->a[80025] = state(1811);
	v->a[80026] = 2;
	v->a[80027] = sym_elif_clause;
	v->a[80028] = aux_sym_if_statement_repeat1;
	v->a[80029] = 3;
	v->a[80030] = actions(3);
	v->a[80031] = 1;
	v->a[80032] = sym_comment;
	v->a[80033] = actions(1110);
	v->a[80034] = 2;
	v->a[80035] = sym__concat;
	v->a[80036] = aux_sym_heredoc_redirect_token1;
	v->a[80037] = actions(1105);
	v->a[80038] = 4;
	v->a[80039] = anon_sym_in;
	small_parse_table_4002(v);
}

void	small_parse_table_4002(t_small_parse_table_array *v)
{
	v->a[80040] = anon_sym_SEMI_SEMI;
	v->a[80041] = aux_sym_concatenation_token1;
	v->a[80042] = anon_sym_SEMI;
	v->a[80043] = 3;
	v->a[80044] = actions(3);
	v->a[80045] = 1;
	v->a[80046] = sym_comment;
	v->a[80047] = actions(523);
	v->a[80048] = 2;
	v->a[80049] = sym__concat;
	v->a[80050] = aux_sym_heredoc_redirect_token1;
	v->a[80051] = actions(521);
	v->a[80052] = 4;
	v->a[80053] = anon_sym_in;
	v->a[80054] = anon_sym_SEMI_SEMI;
	v->a[80055] = aux_sym_concatenation_token1;
	v->a[80056] = anon_sym_SEMI;
	v->a[80057] = 3;
	v->a[80058] = actions(3);
	v->a[80059] = 1;
	small_parse_table_4003(v);
}

void	small_parse_table_4003(t_small_parse_table_array *v)
{
	v->a[80060] = sym_comment;
	v->a[80061] = actions(527);
	v->a[80062] = 2;
	v->a[80063] = sym__concat;
	v->a[80064] = aux_sym_heredoc_redirect_token1;
	v->a[80065] = actions(525);
	v->a[80066] = 4;
	v->a[80067] = anon_sym_in;
	v->a[80068] = anon_sym_SEMI_SEMI;
	v->a[80069] = aux_sym_concatenation_token1;
	v->a[80070] = anon_sym_SEMI;
	v->a[80071] = 6;
	v->a[80072] = actions(501);
	v->a[80073] = 1;
	v->a[80074] = sym_comment;
	v->a[80075] = actions(3628);
	v->a[80076] = 1;
	v->a[80077] = sym_simple_heredoc_body;
	v->a[80078] = actions(3630);
	v->a[80079] = 1;
	small_parse_table_4004(v);
}

void	small_parse_table_4004(t_small_parse_table_array *v)
{
	v->a[80080] = sym__heredoc_body_beginning;
	v->a[80081] = state(1161);
	v->a[80082] = 1;
	v->a[80083] = sym__heredoc_body;
	v->a[80084] = state(1162);
	v->a[80085] = 1;
	v->a[80086] = sym__simple_heredoc_body;
	v->a[80087] = state(2113);
	v->a[80088] = 1;
	v->a[80089] = sym_heredoc_body;
	v->a[80090] = 5;
	v->a[80091] = actions(3);
	v->a[80092] = 1;
	v->a[80093] = sym_comment;
	v->a[80094] = actions(3513);
	v->a[80095] = 1;
	v->a[80096] = aux_sym_heredoc_redirect_token1;
	v->a[80097] = actions(3632);
	v->a[80098] = 1;
	v->a[80099] = anon_sym_in;
	small_parse_table_4005(v);
}

/* EOF small_parse_table_800.c */
