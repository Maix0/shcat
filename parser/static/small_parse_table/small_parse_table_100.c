/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_100.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_500(t_small_parse_table_array *v)
{
	v->a[10000] = anon_sym_AMP_GT_GT;
	v->a[10001] = anon_sym_LT_AMP;
	v->a[10002] = anon_sym_GT_AMP;
	v->a[10003] = anon_sym_GT_PIPE;
	v->a[10004] = anon_sym_LT_AMP_DASH;
	v->a[10005] = anon_sym_GT_AMP_DASH;
	v->a[10006] = anon_sym_LT_LT_DASH;
	v->a[10007] = 21;
	v->a[10008] = actions(3);
	v->a[10009] = 1;
	v->a[10010] = sym_comment;
	v->a[10011] = actions(2818);
	v->a[10012] = 1;
	v->a[10013] = anon_sym_DOLLAR_LBRACK;
	v->a[10014] = actions(2821);
	v->a[10015] = 1;
	v->a[10016] = anon_sym_DOLLAR;
	v->a[10017] = actions(2824);
	v->a[10018] = 1;
	v->a[10019] = sym__special_character;
	small_parse_table_501(v);
}

void	small_parse_table_501(t_small_parse_table_array *v)
{
	v->a[10020] = actions(2827);
	v->a[10021] = 1;
	v->a[10022] = anon_sym_DQUOTE;
	v->a[10023] = actions(2830);
	v->a[10024] = 1;
	v->a[10025] = aux_sym_number_token1;
	v->a[10026] = actions(2833);
	v->a[10027] = 1;
	v->a[10028] = aux_sym_number_token2;
	v->a[10029] = actions(2836);
	v->a[10030] = 1;
	v->a[10031] = anon_sym_DOLLAR_LBRACE;
	v->a[10032] = actions(2839);
	v->a[10033] = 1;
	v->a[10034] = anon_sym_DOLLAR_LPAREN;
	v->a[10035] = actions(2842);
	v->a[10036] = 1;
	v->a[10037] = anon_sym_BQUOTE;
	v->a[10038] = actions(2845);
	v->a[10039] = 1;
	small_parse_table_502(v);
}

void	small_parse_table_502(t_small_parse_table_array *v)
{
	v->a[10040] = anon_sym_DOLLAR_BQUOTE;
	v->a[10041] = actions(2851);
	v->a[10042] = 1;
	v->a[10043] = sym_test_operator;
	v->a[10044] = actions(2854);
	v->a[10045] = 1;
	v->a[10046] = sym__brace_start;
	v->a[10047] = state(1803);
	v->a[10048] = 1;
	v->a[10049] = aux_sym__literal_repeat1;
	v->a[10050] = actions(2216);
	v->a[10051] = 2;
	v->a[10052] = sym_file_descriptor;
	v->a[10053] = aux_sym_heredoc_redirect_token1;
	v->a[10054] = actions(2815);
	v->a[10055] = 2;
	v->a[10056] = anon_sym_LPAREN_LPAREN;
	v->a[10057] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10058] = actions(2848);
	v->a[10059] = 2;
	small_parse_table_503(v);
}

void	small_parse_table_503(t_small_parse_table_array *v)
{
	v->a[10060] = anon_sym_LT_LPAREN;
	v->a[10061] = anon_sym_GT_LPAREN;
	v->a[10062] = state(630);
	v->a[10063] = 2;
	v->a[10064] = sym_concatenation;
	v->a[10065] = aux_sym_for_statement_repeat1;
	v->a[10066] = actions(2812);
	v->a[10067] = 3;
	v->a[10068] = sym_raw_string;
	v->a[10069] = sym_ansi_c_string;
	v->a[10070] = sym_word;
	v->a[10071] = state(1381);
	v->a[10072] = 9;
	v->a[10073] = sym_arithmetic_expansion;
	v->a[10074] = sym_brace_expression;
	v->a[10075] = sym_string;
	v->a[10076] = sym_translated_string;
	v->a[10077] = sym_number;
	v->a[10078] = sym_simple_expansion;
	v->a[10079] = sym_expansion;
	small_parse_table_504(v);
}

void	small_parse_table_504(t_small_parse_table_array *v)
{
	v->a[10080] = sym_command_substitution;
	v->a[10081] = sym_process_substitution;
	v->a[10082] = actions(2214);
	v->a[10083] = 22;
	v->a[10084] = anon_sym_SEMI;
	v->a[10085] = anon_sym_PIPE_PIPE;
	v->a[10086] = anon_sym_AMP_AMP;
	v->a[10087] = anon_sym_PIPE;
	v->a[10088] = anon_sym_AMP;
	v->a[10089] = anon_sym_LT;
	v->a[10090] = anon_sym_GT;
	v->a[10091] = anon_sym_LT_LT;
	v->a[10092] = anon_sym_GT_GT;
	v->a[10093] = anon_sym_esac;
	v->a[10094] = anon_sym_SEMI_SEMI;
	v->a[10095] = anon_sym_SEMI_AMP;
	v->a[10096] = anon_sym_SEMI_SEMI_AMP;
	v->a[10097] = anon_sym_PIPE_AMP;
	v->a[10098] = anon_sym_AMP_GT;
	v->a[10099] = anon_sym_AMP_GT_GT;
	small_parse_table_505(v);
}

/* EOF small_parse_table_100.c */
