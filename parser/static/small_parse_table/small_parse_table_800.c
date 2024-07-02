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
	v->a[80000] = 1;
	v->a[80001] = anon_sym_RBRACE;
	v->a[80002] = state(1749);
	v->a[80003] = 2;
	v->a[80004] = sym_string;
	v->a[80005] = aux_sym__expansion_regex_repeat1;
	v->a[80006] = 3;
	v->a[80007] = actions(3);
	v->a[80008] = 1;
	v->a[80009] = sym_comment;
	v->a[80010] = actions(3552);
	v->a[80011] = 1;
	v->a[80012] = sym__concat;
	v->a[80013] = actions(3550);
	v->a[80014] = 7;
	v->a[80015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80016] = anon_sym_DOLLAR;
	v->a[80017] = anon_sym_DQUOTE;
	v->a[80018] = sym_string_content;
	v->a[80019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4001(v);
}

void	small_parse_table_4001(t_small_parse_table_array *v)
{
	v->a[80020] = anon_sym_DOLLAR_LPAREN;
	v->a[80021] = anon_sym_BQUOTE;
	v->a[80022] = 8;
	v->a[80023] = actions(3);
	v->a[80024] = 1;
	v->a[80025] = sym_comment;
	v->a[80026] = actions(1885);
	v->a[80027] = 1;
	v->a[80028] = anon_sym_RPAREN;
	v->a[80029] = actions(1890);
	v->a[80030] = 1;
	v->a[80031] = anon_sym_DQUOTE;
	v->a[80032] = actions(1894);
	v->a[80033] = 1;
	v->a[80034] = aux_sym__expansion_regex_token1;
	v->a[80035] = actions(3554);
	v->a[80036] = 1;
	v->a[80037] = anon_sym_RBRACE;
	v->a[80038] = actions(3556);
	v->a[80039] = 1;
	small_parse_table_4002(v);
}

void	small_parse_table_4002(t_small_parse_table_array *v)
{
	v->a[80040] = sym_raw_string;
	v->a[80041] = actions(3558);
	v->a[80042] = 1;
	v->a[80043] = sym_regex;
	v->a[80044] = state(1742);
	v->a[80045] = 2;
	v->a[80046] = sym_string;
	v->a[80047] = aux_sym__expansion_regex_repeat1;
	v->a[80048] = 3;
	v->a[80049] = actions(3);
	v->a[80050] = 1;
	v->a[80051] = sym_comment;
	v->a[80052] = actions(792);
	v->a[80053] = 1;
	v->a[80054] = sym__concat;
	v->a[80055] = actions(790);
	v->a[80056] = 7;
	v->a[80057] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80058] = anon_sym_DOLLAR;
	v->a[80059] = anon_sym_DQUOTE;
	small_parse_table_4003(v);
}

void	small_parse_table_4003(t_small_parse_table_array *v)
{
	v->a[80060] = sym_string_content;
	v->a[80061] = anon_sym_DOLLAR_LBRACE;
	v->a[80062] = anon_sym_DOLLAR_LPAREN;
	v->a[80063] = anon_sym_BQUOTE;
	v->a[80064] = 3;
	v->a[80065] = actions(3);
	v->a[80066] = 1;
	v->a[80067] = sym_comment;
	v->a[80068] = actions(3560);
	v->a[80069] = 1;
	v->a[80070] = sym__concat;
	v->a[80071] = actions(3274);
	v->a[80072] = 7;
	v->a[80073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80074] = anon_sym_DOLLAR;
	v->a[80075] = anon_sym_DQUOTE;
	v->a[80076] = sym_string_content;
	v->a[80077] = anon_sym_DOLLAR_LBRACE;
	v->a[80078] = anon_sym_DOLLAR_LPAREN;
	v->a[80079] = anon_sym_BQUOTE;
	small_parse_table_4004(v);
}

void	small_parse_table_4004(t_small_parse_table_array *v)
{
	v->a[80080] = 3;
	v->a[80081] = actions(3);
	v->a[80082] = 1;
	v->a[80083] = sym_comment;
	v->a[80084] = actions(835);
	v->a[80085] = 1;
	v->a[80086] = sym__concat;
	v->a[80087] = actions(833);
	v->a[80088] = 7;
	v->a[80089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80090] = anon_sym_DOLLAR;
	v->a[80091] = anon_sym_DQUOTE;
	v->a[80092] = sym_string_content;
	v->a[80093] = anon_sym_DOLLAR_LBRACE;
	v->a[80094] = anon_sym_DOLLAR_LPAREN;
	v->a[80095] = anon_sym_BQUOTE;
	v->a[80096] = 3;
	v->a[80097] = actions(3);
	v->a[80098] = 1;
	v->a[80099] = sym_comment;
	small_parse_table_4005(v);
}

/* EOF small_parse_table_800.c */
