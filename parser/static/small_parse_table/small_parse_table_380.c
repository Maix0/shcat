/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_380.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1900(t_small_parse_table_array *v)
{
	v->a[38000] = sym__concat;
	v->a[38001] = sym_test_operator;
	v->a[38002] = sym__bare_dollar;
	v->a[38003] = sym__brace_start;
	v->a[38004] = ts_builtin_sym_end;
	v->a[38005] = aux_sym_heredoc_redirect_token1;
	v->a[38006] = actions(3123);
	v->a[38007] = 33;
	v->a[38008] = anon_sym_LPAREN;
	v->a[38009] = anon_sym_PIPE;
	v->a[38010] = anon_sym_SEMI_SEMI;
	v->a[38011] = anon_sym_PIPE_AMP;
	v->a[38012] = anon_sym_AMP_AMP;
	v->a[38013] = anon_sym_PIPE_PIPE;
	v->a[38014] = anon_sym_LT;
	v->a[38015] = anon_sym_GT;
	v->a[38016] = anon_sym_GT_GT;
	v->a[38017] = anon_sym_AMP_GT;
	v->a[38018] = anon_sym_AMP_GT_GT;
	v->a[38019] = anon_sym_LT_AMP;
	small_parse_table_1901(v);
}

void	small_parse_table_1901(t_small_parse_table_array *v)
{
	v->a[38020] = anon_sym_GT_AMP;
	v->a[38021] = anon_sym_GT_PIPE;
	v->a[38022] = anon_sym_LT_AMP_DASH;
	v->a[38023] = anon_sym_GT_AMP_DASH;
	v->a[38024] = anon_sym_LT_LT;
	v->a[38025] = anon_sym_LT_LT_DASH;
	v->a[38026] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38027] = anon_sym_AMP;
	v->a[38028] = aux_sym_concatenation_token1;
	v->a[38029] = anon_sym_DOLLAR;
	v->a[38030] = sym__special_character;
	v->a[38031] = anon_sym_DQUOTE;
	v->a[38032] = sym_raw_string;
	v->a[38033] = aux_sym_number_token1;
	v->a[38034] = aux_sym_number_token2;
	v->a[38035] = anon_sym_DOLLAR_LBRACE;
	v->a[38036] = anon_sym_DOLLAR_LPAREN;
	v->a[38037] = anon_sym_BQUOTE;
	v->a[38038] = anon_sym_DOLLAR_BQUOTE;
	v->a[38039] = sym_word;
	small_parse_table_1902(v);
}

void	small_parse_table_1902(t_small_parse_table_array *v)
{
	v->a[38040] = anon_sym_SEMI;
	v->a[38041] = 3;
	v->a[38042] = actions(3);
	v->a[38043] = 1;
	v->a[38044] = sym_comment;
	v->a[38045] = actions(2774);
	v->a[38046] = 7;
	v->a[38047] = sym_file_descriptor;
	v->a[38048] = sym__concat;
	v->a[38049] = sym_test_operator;
	v->a[38050] = sym__bare_dollar;
	v->a[38051] = sym__brace_start;
	v->a[38052] = ts_builtin_sym_end;
	v->a[38053] = aux_sym_heredoc_redirect_token1;
	v->a[38054] = actions(2772);
	v->a[38055] = 33;
	v->a[38056] = anon_sym_LPAREN;
	v->a[38057] = anon_sym_PIPE;
	v->a[38058] = anon_sym_SEMI_SEMI;
	v->a[38059] = anon_sym_PIPE_AMP;
	small_parse_table_1903(v);
}

void	small_parse_table_1903(t_small_parse_table_array *v)
{
	v->a[38060] = anon_sym_AMP_AMP;
	v->a[38061] = anon_sym_PIPE_PIPE;
	v->a[38062] = anon_sym_LT;
	v->a[38063] = anon_sym_GT;
	v->a[38064] = anon_sym_GT_GT;
	v->a[38065] = anon_sym_AMP_GT;
	v->a[38066] = anon_sym_AMP_GT_GT;
	v->a[38067] = anon_sym_LT_AMP;
	v->a[38068] = anon_sym_GT_AMP;
	v->a[38069] = anon_sym_GT_PIPE;
	v->a[38070] = anon_sym_LT_AMP_DASH;
	v->a[38071] = anon_sym_GT_AMP_DASH;
	v->a[38072] = anon_sym_LT_LT;
	v->a[38073] = anon_sym_LT_LT_DASH;
	v->a[38074] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38075] = anon_sym_AMP;
	v->a[38076] = aux_sym_concatenation_token1;
	v->a[38077] = anon_sym_DOLLAR;
	v->a[38078] = sym__special_character;
	v->a[38079] = anon_sym_DQUOTE;
	small_parse_table_1904(v);
}

void	small_parse_table_1904(t_small_parse_table_array *v)
{
	v->a[38080] = sym_raw_string;
	v->a[38081] = aux_sym_number_token1;
	v->a[38082] = aux_sym_number_token2;
	v->a[38083] = anon_sym_DOLLAR_LBRACE;
	v->a[38084] = anon_sym_DOLLAR_LPAREN;
	v->a[38085] = anon_sym_BQUOTE;
	v->a[38086] = anon_sym_DOLLAR_BQUOTE;
	v->a[38087] = sym_word;
	v->a[38088] = anon_sym_SEMI;
	v->a[38089] = 3;
	v->a[38090] = actions(3);
	v->a[38091] = 1;
	v->a[38092] = sym_comment;
	v->a[38093] = actions(2967);
	v->a[38094] = 6;
	v->a[38095] = sym_file_descriptor;
	v->a[38096] = sym__concat;
	v->a[38097] = sym_variable_name;
	v->a[38098] = sym_test_operator;
	v->a[38099] = sym__brace_start;
	small_parse_table_1905(v);
}

/* EOF small_parse_table_380.c */
