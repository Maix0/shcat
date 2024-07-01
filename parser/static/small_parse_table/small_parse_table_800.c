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
	v->a[80000] = anon_sym_GT_AMP;
	v->a[80001] = 10;
	v->a[80002] = actions(3);
	v->a[80003] = 1;
	v->a[80004] = sym_comment;
	v->a[80005] = actions(2587);
	v->a[80006] = 1;
	v->a[80007] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80008] = actions(2591);
	v->a[80009] = 1;
	v->a[80010] = anon_sym_DQUOTE;
	v->a[80011] = actions(2593);
	v->a[80012] = 1;
	v->a[80013] = anon_sym_DOLLAR_LBRACE;
	v->a[80014] = actions(2595);
	v->a[80015] = 1;
	v->a[80016] = anon_sym_DOLLAR_LPAREN;
	v->a[80017] = actions(2597);
	v->a[80018] = 1;
	v->a[80019] = anon_sym_BQUOTE;
	small_parse_table_4001(v);
}

void	small_parse_table_4001(t_small_parse_table_array *v)
{
	v->a[80020] = actions(2741);
	v->a[80021] = 1;
	v->a[80022] = anon_sym_DOLLAR;
	v->a[80023] = state(484);
	v->a[80024] = 2;
	v->a[80025] = sym_concatenation;
	v->a[80026] = aux_sym_for_statement_repeat1;
	v->a[80027] = actions(3084);
	v->a[80028] = 3;
	v->a[80029] = sym_raw_string;
	v->a[80030] = sym_number;
	v->a[80031] = sym_word;
	v->a[80032] = state(778);
	v->a[80033] = 5;
	v->a[80034] = sym_arithmetic_expansion;
	v->a[80035] = sym_string;
	v->a[80036] = sym_simple_expansion;
	v->a[80037] = sym_expansion;
	v->a[80038] = sym_command_substitution;
	v->a[80039] = 3;
	small_parse_table_4002(v);
}

void	small_parse_table_4002(t_small_parse_table_array *v)
{
	v->a[80040] = actions(870);
	v->a[80041] = 1;
	v->a[80042] = sym_comment;
	v->a[80043] = actions(1039);
	v->a[80044] = 6;
	v->a[80045] = anon_sym_PIPE;
	v->a[80046] = anon_sym_LT;
	v->a[80047] = anon_sym_GT;
	v->a[80048] = anon_sym_LT_AMP;
	v->a[80049] = anon_sym_GT_AMP;
	v->a[80050] = anon_sym_LT_LT;
	v->a[80051] = actions(1041);
	v->a[80052] = 10;
	v->a[80053] = sym_file_descriptor;
	v->a[80054] = sym__concat;
	v->a[80055] = anon_sym_AMP_AMP;
	v->a[80056] = anon_sym_PIPE_PIPE;
	v->a[80057] = anon_sym_GT_GT;
	v->a[80058] = anon_sym_GT_PIPE;
	v->a[80059] = anon_sym_LT_AMP_DASH;
	small_parse_table_4003(v);
}

void	small_parse_table_4003(t_small_parse_table_array *v)
{
	v->a[80060] = anon_sym_GT_AMP_DASH;
	v->a[80061] = anon_sym_LT_LT_DASH;
	v->a[80062] = aux_sym_concatenation_token1;
	v->a[80063] = 5;
	v->a[80064] = actions(3);
	v->a[80065] = 1;
	v->a[80066] = sym_comment;
	v->a[80067] = actions(3108);
	v->a[80068] = 1;
	v->a[80069] = aux_sym_concatenation_token1;
	v->a[80070] = actions(3111);
	v->a[80071] = 1;
	v->a[80072] = sym__concat;
	v->a[80073] = state(1586);
	v->a[80074] = 1;
	v->a[80075] = aux_sym_concatenation_repeat1;
	v->a[80076] = actions(1189);
	v->a[80077] = 13;
	v->a[80078] = anon_sym_SEMI_SEMI;
	v->a[80079] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4004(v);
}

void	small_parse_table_4004(t_small_parse_table_array *v)
{
	v->a[80080] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80081] = anon_sym_AMP;
	v->a[80082] = anon_sym_DOLLAR;
	v->a[80083] = anon_sym_DQUOTE;
	v->a[80084] = sym_raw_string;
	v->a[80085] = sym_number;
	v->a[80086] = anon_sym_DOLLAR_LBRACE;
	v->a[80087] = anon_sym_DOLLAR_LPAREN;
	v->a[80088] = anon_sym_BQUOTE;
	v->a[80089] = sym_word;
	v->a[80090] = anon_sym_SEMI;
	v->a[80091] = 10;
	v->a[80092] = actions(3);
	v->a[80093] = 1;
	v->a[80094] = sym_comment;
	v->a[80095] = actions(894);
	v->a[80096] = 1;
	v->a[80097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80098] = actions(896);
	v->a[80099] = 1;
	small_parse_table_4005(v);
}

/* EOF small_parse_table_800.c */
