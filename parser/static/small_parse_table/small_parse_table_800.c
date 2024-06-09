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
	v->a[80000] = sym_concatenation;
	v->a[80001] = aux_sym_for_statement_repeat1;
	v->a[80002] = state(502);
	v->a[80003] = 6;
	v->a[80004] = sym_arithmetic_expansion;
	v->a[80005] = sym_string;
	v->a[80006] = sym_number;
	v->a[80007] = sym_simple_expansion;
	v->a[80008] = sym_expansion;
	v->a[80009] = sym_command_substitution;
	v->a[80010] = 12;
	v->a[80011] = actions(3);
	v->a[80012] = 1;
	v->a[80013] = sym_comment;
	v->a[80014] = actions(2929);
	v->a[80015] = 1;
	v->a[80016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80017] = actions(2931);
	v->a[80018] = 1;
	v->a[80019] = anon_sym_DOLLAR;
	small_parse_table_4001(v);
}

void	small_parse_table_4001(t_small_parse_table_array *v)
{
	v->a[80020] = actions(2933);
	v->a[80021] = 1;
	v->a[80022] = anon_sym_DQUOTE;
	v->a[80023] = actions(2935);
	v->a[80024] = 1;
	v->a[80025] = aux_sym_number_token1;
	v->a[80026] = actions(2937);
	v->a[80027] = 1;
	v->a[80028] = aux_sym_number_token2;
	v->a[80029] = actions(2939);
	v->a[80030] = 1;
	v->a[80031] = anon_sym_DOLLAR_LBRACE;
	v->a[80032] = actions(2941);
	v->a[80033] = 1;
	v->a[80034] = anon_sym_DOLLAR_LPAREN;
	v->a[80035] = actions(2943);
	v->a[80036] = 1;
	v->a[80037] = anon_sym_BQUOTE;
	v->a[80038] = actions(3312);
	v->a[80039] = 1;
	small_parse_table_4002(v);
}

void	small_parse_table_4002(t_small_parse_table_array *v)
{
	v->a[80040] = sym__bare_dollar;
	v->a[80041] = actions(3310);
	v->a[80042] = 3;
	v->a[80043] = sym_raw_string;
	v->a[80044] = sym__comment_word;
	v->a[80045] = sym_word;
	v->a[80046] = state(827);
	v->a[80047] = 6;
	v->a[80048] = sym_arithmetic_expansion;
	v->a[80049] = sym_string;
	v->a[80050] = sym_number;
	v->a[80051] = sym_simple_expansion;
	v->a[80052] = sym_expansion;
	v->a[80053] = sym_command_substitution;
	v->a[80054] = 12;
	v->a[80055] = actions(3);
	v->a[80056] = 1;
	v->a[80057] = sym_comment;
	v->a[80058] = actions(117);
	v->a[80059] = 1;
	small_parse_table_4003(v);
}

void	small_parse_table_4003(t_small_parse_table_array *v)
{
	v->a[80060] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80061] = actions(119);
	v->a[80062] = 1;
	v->a[80063] = anon_sym_DOLLAR;
	v->a[80064] = actions(121);
	v->a[80065] = 1;
	v->a[80066] = anon_sym_DQUOTE;
	v->a[80067] = actions(125);
	v->a[80068] = 1;
	v->a[80069] = aux_sym_number_token1;
	v->a[80070] = actions(127);
	v->a[80071] = 1;
	v->a[80072] = aux_sym_number_token2;
	v->a[80073] = actions(129);
	v->a[80074] = 1;
	v->a[80075] = anon_sym_DOLLAR_LBRACE;
	v->a[80076] = actions(131);
	v->a[80077] = 1;
	v->a[80078] = anon_sym_DOLLAR_LPAREN;
	v->a[80079] = actions(133);
	small_parse_table_4004(v);
}

void	small_parse_table_4004(t_small_parse_table_array *v)
{
	v->a[80080] = 1;
	v->a[80081] = anon_sym_BQUOTE;
	v->a[80082] = actions(3316);
	v->a[80083] = 1;
	v->a[80084] = sym__bare_dollar;
	v->a[80085] = actions(3314);
	v->a[80086] = 3;
	v->a[80087] = sym_raw_string;
	v->a[80088] = sym__comment_word;
	v->a[80089] = sym_word;
	v->a[80090] = state(396);
	v->a[80091] = 6;
	v->a[80092] = sym_arithmetic_expansion;
	v->a[80093] = sym_string;
	v->a[80094] = sym_number;
	v->a[80095] = sym_simple_expansion;
	v->a[80096] = sym_expansion;
	v->a[80097] = sym_command_substitution;
	v->a[80098] = 12;
	v->a[80099] = actions(3);
	small_parse_table_4005(v);
}

/* EOF small_parse_table_800.c */
