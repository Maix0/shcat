/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_200.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1000(t_small_parse_table_array *v)
{
	v->a[20000] = anon_sym_AMP_GT_GT;
	v->a[20001] = anon_sym_LT_AMP;
	v->a[20002] = anon_sym_GT_AMP;
	v->a[20003] = anon_sym_GT_PIPE;
	v->a[20004] = anon_sym_LT_AMP_DASH;
	v->a[20005] = anon_sym_GT_AMP_DASH;
	v->a[20006] = anon_sym_LT_LT_DASH;
	v->a[20007] = anon_sym_LT_LT_LT;
	v->a[20008] = 21;
	v->a[20009] = actions(3);
	v->a[20010] = 1;
	v->a[20011] = sym_comment;
	v->a[20012] = actions(3785);
	v->a[20013] = 1;
	v->a[20014] = anon_sym_DOLLAR_LBRACK;
	v->a[20015] = actions(3787);
	v->a[20016] = 1;
	v->a[20017] = anon_sym_DOLLAR;
	v->a[20018] = actions(3791);
	v->a[20019] = 1;
	small_parse_table_1001(v);
}

void	small_parse_table_1001(t_small_parse_table_array *v)
{
	v->a[20020] = anon_sym_DQUOTE;
	v->a[20021] = actions(3793);
	v->a[20022] = 1;
	v->a[20023] = aux_sym_number_token1;
	v->a[20024] = actions(3795);
	v->a[20025] = 1;
	v->a[20026] = aux_sym_number_token2;
	v->a[20027] = actions(3797);
	v->a[20028] = 1;
	v->a[20029] = anon_sym_DOLLAR_LBRACE;
	v->a[20030] = actions(3799);
	v->a[20031] = 1;
	v->a[20032] = anon_sym_DOLLAR_LPAREN;
	v->a[20033] = actions(3801);
	v->a[20034] = 1;
	v->a[20035] = anon_sym_BQUOTE;
	v->a[20036] = actions(3803);
	v->a[20037] = 1;
	v->a[20038] = anon_sym_DOLLAR_BQUOTE;
	v->a[20039] = actions(3809);
	small_parse_table_1002(v);
}

void	small_parse_table_1002(t_small_parse_table_array *v)
{
	v->a[20040] = 1;
	v->a[20041] = sym__brace_start;
	v->a[20042] = actions(3817);
	v->a[20043] = 1;
	v->a[20044] = sym__special_character;
	v->a[20045] = actions(3823);
	v->a[20046] = 1;
	v->a[20047] = sym_test_operator;
	v->a[20048] = state(4277);
	v->a[20049] = 1;
	v->a[20050] = aux_sym__literal_repeat1;
	v->a[20051] = state(4782);
	v->a[20052] = 1;
	v->a[20053] = sym_concatenation;
	v->a[20054] = actions(3783);
	v->a[20055] = 2;
	v->a[20056] = anon_sym_LPAREN_LPAREN;
	v->a[20057] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20058] = actions(3805);
	v->a[20059] = 2;
	small_parse_table_1003(v);
}

void	small_parse_table_1003(t_small_parse_table_array *v)
{
	v->a[20060] = anon_sym_LT_LPAREN;
	v->a[20061] = anon_sym_GT_LPAREN;
	v->a[20062] = actions(2496);
	v->a[20063] = 3;
	v->a[20064] = sym_file_descriptor;
	v->a[20065] = ts_builtin_sym_end;
	v->a[20066] = aux_sym_heredoc_redirect_token1;
	v->a[20067] = actions(3821);
	v->a[20068] = 3;
	v->a[20069] = sym_raw_string;
	v->a[20070] = sym_ansi_c_string;
	v->a[20071] = sym_word;
	v->a[20072] = state(4486);
	v->a[20073] = 9;
	v->a[20074] = sym_arithmetic_expansion;
	v->a[20075] = sym_brace_expression;
	v->a[20076] = sym_string;
	v->a[20077] = sym_translated_string;
	v->a[20078] = sym_number;
	v->a[20079] = sym_simple_expansion;
	small_parse_table_1004(v);
}

void	small_parse_table_1004(t_small_parse_table_array *v)
{
	v->a[20080] = sym_expansion;
	v->a[20081] = sym_command_substitution;
	v->a[20082] = sym_process_substitution;
	v->a[20083] = actions(2494);
	v->a[20084] = 20;
	v->a[20085] = anon_sym_SEMI;
	v->a[20086] = anon_sym_PIPE_PIPE;
	v->a[20087] = anon_sym_AMP_AMP;
	v->a[20088] = anon_sym_PIPE;
	v->a[20089] = anon_sym_AMP;
	v->a[20090] = anon_sym_LT;
	v->a[20091] = anon_sym_GT;
	v->a[20092] = anon_sym_LT_LT;
	v->a[20093] = anon_sym_GT_GT;
	v->a[20094] = anon_sym_SEMI_SEMI;
	v->a[20095] = anon_sym_PIPE_AMP;
	v->a[20096] = anon_sym_AMP_GT;
	v->a[20097] = anon_sym_AMP_GT_GT;
	v->a[20098] = anon_sym_LT_AMP;
	v->a[20099] = anon_sym_GT_AMP;
	small_parse_table_1005(v);
}

/* EOF small_parse_table_200.c */
