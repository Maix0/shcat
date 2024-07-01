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
	v->a[80000] = actions(3450);
	v->a[80001] = 5;
	v->a[80002] = anon_sym_GT_GT;
	v->a[80003] = anon_sym_LT_AMP;
	v->a[80004] = anon_sym_GT_AMP;
	v->a[80005] = anon_sym_GT_PIPE;
	v->a[80006] = anon_sym_LT_GT;
	v->a[80007] = 3;
	v->a[80008] = actions(664);
	v->a[80009] = 1;
	v->a[80010] = sym_comment;
	v->a[80011] = actions(3547);
	v->a[80012] = 2;
	v->a[80013] = anon_sym_LT;
	v->a[80014] = anon_sym_GT;
	v->a[80015] = actions(3549);
	v->a[80016] = 5;
	v->a[80017] = anon_sym_GT_GT;
	v->a[80018] = anon_sym_LT_AMP;
	v->a[80019] = anon_sym_GT_AMP;
	small_parse_table_4001(v);
}

void	small_parse_table_4001(t_small_parse_table_array *v)
{
	v->a[80020] = anon_sym_GT_PIPE;
	v->a[80021] = anon_sym_LT_GT;
	v->a[80022] = 2;
	v->a[80023] = actions(3);
	v->a[80024] = 1;
	v->a[80025] = sym_comment;
	v->a[80026] = actions(3551);
	v->a[80027] = 7;
	v->a[80028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80029] = anon_sym_DOLLAR;
	v->a[80030] = anon_sym_DQUOTE;
	v->a[80031] = sym_string_content;
	v->a[80032] = anon_sym_DOLLAR_LBRACE;
	v->a[80033] = anon_sym_DOLLAR_LPAREN;
	v->a[80034] = anon_sym_BQUOTE;
	v->a[80035] = 3;
	v->a[80036] = actions(3);
	v->a[80037] = 1;
	v->a[80038] = sym_comment;
	v->a[80039] = actions(662);
	small_parse_table_4002(v);
}

void	small_parse_table_4002(t_small_parse_table_array *v)
{
	v->a[80040] = 2;
	v->a[80041] = sym__concat;
	v->a[80042] = aux_sym_heredoc_redirect_token1;
	v->a[80043] = actions(660);
	v->a[80044] = 5;
	v->a[80045] = anon_sym_in;
	v->a[80046] = anon_sym_SEMI_SEMI;
	v->a[80047] = anon_sym_AMP;
	v->a[80048] = aux_sym_concatenation_token1;
	v->a[80049] = anon_sym_SEMI;
	v->a[80050] = 3;
	v->a[80051] = actions(3);
	v->a[80052] = 1;
	v->a[80053] = sym_comment;
	v->a[80054] = actions(766);
	v->a[80055] = 2;
	v->a[80056] = sym__concat;
	v->a[80057] = aux_sym_heredoc_redirect_token1;
	v->a[80058] = actions(764);
	v->a[80059] = 5;
	small_parse_table_4003(v);
}

void	small_parse_table_4003(t_small_parse_table_array *v)
{
	v->a[80060] = anon_sym_in;
	v->a[80061] = anon_sym_SEMI_SEMI;
	v->a[80062] = anon_sym_AMP;
	v->a[80063] = aux_sym_concatenation_token1;
	v->a[80064] = anon_sym_SEMI;
	v->a[80065] = 3;
	v->a[80066] = actions(664);
	v->a[80067] = 1;
	v->a[80068] = sym_comment;
	v->a[80069] = actions(3553);
	v->a[80070] = 2;
	v->a[80071] = anon_sym_LT;
	v->a[80072] = anon_sym_GT;
	v->a[80073] = actions(3555);
	v->a[80074] = 5;
	v->a[80075] = anon_sym_GT_GT;
	v->a[80076] = anon_sym_LT_AMP;
	v->a[80077] = anon_sym_GT_AMP;
	v->a[80078] = anon_sym_GT_PIPE;
	v->a[80079] = anon_sym_LT_GT;
	small_parse_table_4004(v);
}

void	small_parse_table_4004(t_small_parse_table_array *v)
{
	v->a[80080] = 3;
	v->a[80081] = actions(664);
	v->a[80082] = 1;
	v->a[80083] = sym_comment;
	v->a[80084] = actions(3557);
	v->a[80085] = 2;
	v->a[80086] = anon_sym_LT;
	v->a[80087] = anon_sym_GT;
	v->a[80088] = actions(3559);
	v->a[80089] = 5;
	v->a[80090] = anon_sym_GT_GT;
	v->a[80091] = anon_sym_LT_AMP;
	v->a[80092] = anon_sym_GT_AMP;
	v->a[80093] = anon_sym_GT_PIPE;
	v->a[80094] = anon_sym_LT_GT;
	v->a[80095] = 3;
	v->a[80096] = actions(664);
	v->a[80097] = 1;
	v->a[80098] = sym_comment;
	v->a[80099] = actions(3561);
	small_parse_table_4005(v);
}

/* EOF small_parse_table_800.c */
