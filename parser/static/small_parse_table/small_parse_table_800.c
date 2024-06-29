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
	v->a[80001] = anon_sym_BQUOTE;
	v->a[80002] = actions(2827);
	v->a[80003] = 1;
	v->a[80004] = sym__bare_dollar;
	v->a[80005] = actions(2965);
	v->a[80006] = 1;
	v->a[80007] = anon_sym_DOLLAR;
	v->a[80008] = actions(2823);
	v->a[80009] = 5;
	v->a[80010] = aux_sym_concatenation_token1;
	v->a[80011] = sym_raw_string;
	v->a[80012] = sym_number;
	v->a[80013] = sym__comment_word;
	v->a[80014] = sym_word;
	v->a[80015] = state(1040);
	v->a[80016] = 5;
	v->a[80017] = sym_arithmetic_expansion;
	v->a[80018] = sym_string;
	v->a[80019] = sym_simple_expansion;
	small_parse_table_4001(v);
}

void	small_parse_table_4001(t_small_parse_table_array *v)
{
	v->a[80020] = sym_expansion;
	v->a[80021] = sym_command_substitution;
	v->a[80022] = 10;
	v->a[80023] = actions(3);
	v->a[80024] = 1;
	v->a[80025] = sym_comment;
	v->a[80026] = actions(859);
	v->a[80027] = 1;
	v->a[80028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80029] = actions(863);
	v->a[80030] = 1;
	v->a[80031] = anon_sym_DQUOTE;
	v->a[80032] = actions(865);
	v->a[80033] = 1;
	v->a[80034] = anon_sym_DOLLAR_LBRACE;
	v->a[80035] = actions(867);
	v->a[80036] = 1;
	v->a[80037] = anon_sym_DOLLAR_LPAREN;
	v->a[80038] = actions(869);
	v->a[80039] = 1;
	small_parse_table_4002(v);
}

void	small_parse_table_4002(t_small_parse_table_array *v)
{
	v->a[80040] = anon_sym_BQUOTE;
	v->a[80041] = actions(2969);
	v->a[80042] = 1;
	v->a[80043] = anon_sym_DOLLAR;
	v->a[80044] = actions(2971);
	v->a[80045] = 1;
	v->a[80046] = sym__bare_dollar;
	v->a[80047] = actions(2967);
	v->a[80048] = 5;
	v->a[80049] = aux_sym_concatenation_token1;
	v->a[80050] = sym_raw_string;
	v->a[80051] = sym_number;
	v->a[80052] = sym__comment_word;
	v->a[80053] = sym_word;
	v->a[80054] = state(1693);
	v->a[80055] = 5;
	v->a[80056] = sym_arithmetic_expansion;
	v->a[80057] = sym_string;
	v->a[80058] = sym_simple_expansion;
	v->a[80059] = sym_expansion;
	small_parse_table_4003(v);
}

void	small_parse_table_4003(t_small_parse_table_array *v)
{
	v->a[80060] = sym_command_substitution;
	v->a[80061] = 10;
	v->a[80062] = actions(3);
	v->a[80063] = 1;
	v->a[80064] = sym_comment;
	v->a[80065] = actions(1566);
	v->a[80066] = 1;
	v->a[80067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80068] = actions(1568);
	v->a[80069] = 1;
	v->a[80070] = anon_sym_DOLLAR;
	v->a[80071] = actions(1570);
	v->a[80072] = 1;
	v->a[80073] = anon_sym_DQUOTE;
	v->a[80074] = actions(1572);
	v->a[80075] = 1;
	v->a[80076] = anon_sym_DOLLAR_LBRACE;
	v->a[80077] = actions(1574);
	v->a[80078] = 1;
	v->a[80079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4004(v);
}

void	small_parse_table_4004(t_small_parse_table_array *v)
{
	v->a[80080] = actions(1576);
	v->a[80081] = 1;
	v->a[80082] = anon_sym_BQUOTE;
	v->a[80083] = actions(2931);
	v->a[80084] = 1;
	v->a[80085] = sym__bare_dollar;
	v->a[80086] = actions(2927);
	v->a[80087] = 5;
	v->a[80088] = aux_sym_concatenation_token1;
	v->a[80089] = sym_raw_string;
	v->a[80090] = sym_number;
	v->a[80091] = sym__comment_word;
	v->a[80092] = sym_word;
	v->a[80093] = state(1450);
	v->a[80094] = 5;
	v->a[80095] = sym_arithmetic_expansion;
	v->a[80096] = sym_string;
	v->a[80097] = sym_simple_expansion;
	v->a[80098] = sym_expansion;
	v->a[80099] = sym_command_substitution;
	small_parse_table_4005(v);
}

/* EOF small_parse_table_800.c */
