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
	v->a[80000] = sym_variable_name;
	v->a[80001] = sym_test_operator;
	v->a[80002] = sym__brace_start;
	v->a[80003] = anon_sym_PIPE_AMP;
	v->a[80004] = anon_sym_AMP_AMP;
	v->a[80005] = anon_sym_PIPE_PIPE;
	v->a[80006] = anon_sym_GT_GT;
	v->a[80007] = anon_sym_AMP_GT_GT;
	v->a[80008] = anon_sym_GT_PIPE;
	v->a[80009] = anon_sym_LT_AMP_DASH;
	v->a[80010] = anon_sym_GT_AMP_DASH;
	v->a[80011] = anon_sym_LT_LT_DASH;
	v->a[80012] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80013] = sym__special_character;
	v->a[80014] = anon_sym_DQUOTE;
	v->a[80015] = sym_raw_string;
	v->a[80016] = anon_sym_DOLLAR_LBRACE;
	v->a[80017] = anon_sym_BQUOTE;
	v->a[80018] = anon_sym_DOLLAR_BQUOTE;
	v->a[80019] = 5;
	small_parse_table_4001(v);
}

void	small_parse_table_4001(t_small_parse_table_array *v)
{
	v->a[80020] = actions(57);
	v->a[80021] = 1;
	v->a[80022] = sym_comment;
	v->a[80023] = actions(4531);
	v->a[80024] = 1;
	v->a[80025] = sym__special_character;
	v->a[80026] = state(1684);
	v->a[80027] = 1;
	v->a[80028] = aux_sym__literal_repeat1;
	v->a[80029] = actions(3195);
	v->a[80030] = 12;
	v->a[80031] = anon_sym_PIPE;
	v->a[80032] = anon_sym_LT;
	v->a[80033] = anon_sym_GT;
	v->a[80034] = anon_sym_AMP_GT;
	v->a[80035] = anon_sym_LT_AMP;
	v->a[80036] = anon_sym_GT_AMP;
	v->a[80037] = anon_sym_LT_LT;
	v->a[80038] = anon_sym_DOLLAR;
	v->a[80039] = aux_sym_number_token1;
	small_parse_table_4002(v);
}

void	small_parse_table_4002(t_small_parse_table_array *v)
{
	v->a[80040] = aux_sym_number_token2;
	v->a[80041] = anon_sym_DOLLAR_LPAREN;
	v->a[80042] = sym_word;
	v->a[80043] = actions(3197);
	v->a[80044] = 18;
	v->a[80045] = sym_file_descriptor;
	v->a[80046] = sym_test_operator;
	v->a[80047] = sym__brace_start;
	v->a[80048] = anon_sym_PIPE_AMP;
	v->a[80049] = anon_sym_AMP_AMP;
	v->a[80050] = anon_sym_PIPE_PIPE;
	v->a[80051] = anon_sym_GT_GT;
	v->a[80052] = anon_sym_AMP_GT_GT;
	v->a[80053] = anon_sym_GT_PIPE;
	v->a[80054] = anon_sym_LT_AMP_DASH;
	v->a[80055] = anon_sym_GT_AMP_DASH;
	v->a[80056] = anon_sym_LT_LT_DASH;
	v->a[80057] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80058] = anon_sym_DQUOTE;
	v->a[80059] = sym_raw_string;
	small_parse_table_4003(v);
}

void	small_parse_table_4003(t_small_parse_table_array *v)
{
	v->a[80060] = anon_sym_DOLLAR_LBRACE;
	v->a[80061] = anon_sym_BQUOTE;
	v->a[80062] = anon_sym_DOLLAR_BQUOTE;
	v->a[80063] = 6;
	v->a[80064] = actions(3);
	v->a[80065] = 1;
	v->a[80066] = sym_comment;
	v->a[80067] = actions(4534);
	v->a[80068] = 1;
	v->a[80069] = aux_sym_concatenation_token1;
	v->a[80070] = actions(4536);
	v->a[80071] = 1;
	v->a[80072] = sym__concat;
	v->a[80073] = state(1688);
	v->a[80074] = 1;
	v->a[80075] = aux_sym_concatenation_repeat1;
	v->a[80076] = actions(3121);
	v->a[80077] = 4;
	v->a[80078] = sym_file_descriptor;
	v->a[80079] = sym_test_operator;
	small_parse_table_4004(v);
}

void	small_parse_table_4004(t_small_parse_table_array *v)
{
	v->a[80080] = sym__brace_start;
	v->a[80081] = aux_sym_heredoc_redirect_token1;
	v->a[80082] = actions(3119);
	v->a[80083] = 24;
	v->a[80084] = anon_sym_AMP_AMP;
	v->a[80085] = anon_sym_PIPE_PIPE;
	v->a[80086] = anon_sym_LT;
	v->a[80087] = anon_sym_GT;
	v->a[80088] = anon_sym_GT_GT;
	v->a[80089] = anon_sym_AMP_GT;
	v->a[80090] = anon_sym_AMP_GT_GT;
	v->a[80091] = anon_sym_LT_AMP;
	v->a[80092] = anon_sym_GT_AMP;
	v->a[80093] = anon_sym_GT_PIPE;
	v->a[80094] = anon_sym_LT_AMP_DASH;
	v->a[80095] = anon_sym_GT_AMP_DASH;
	v->a[80096] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80097] = anon_sym_DOLLAR;
	v->a[80098] = sym__special_character;
	v->a[80099] = anon_sym_DQUOTE;
	small_parse_table_4005(v);
}

/* EOF small_parse_table_800.c */
