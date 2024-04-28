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
	v->a[38000] = aux_sym_number_token1;
	v->a[38001] = aux_sym_number_token2;
	v->a[38002] = anon_sym_DOLLAR_LBRACE;
	v->a[38003] = anon_sym_DOLLAR_LPAREN;
	v->a[38004] = anon_sym_BQUOTE;
	v->a[38005] = anon_sym_DOLLAR_BQUOTE;
	v->a[38006] = anon_sym_LT_LPAREN;
	v->a[38007] = anon_sym_GT_LPAREN;
	v->a[38008] = sym_word;
	v->a[38009] = 21;
	v->a[38010] = actions(3);
	v->a[38011] = 1;
	v->a[38012] = sym_comment;
	v->a[38013] = actions(3837);
	v->a[38014] = 1;
	v->a[38015] = anon_sym_DOLLAR_LBRACK;
	v->a[38016] = actions(3840);
	v->a[38017] = 1;
	v->a[38018] = anon_sym_DOLLAR;
	v->a[38019] = actions(3846);
	small_parse_table_1901(v);
}

void	small_parse_table_1901(t_small_parse_table_array *v)
{
	v->a[38020] = 1;
	v->a[38021] = anon_sym_DQUOTE;
	v->a[38022] = actions(3849);
	v->a[38023] = 1;
	v->a[38024] = aux_sym_number_token1;
	v->a[38025] = actions(3852);
	v->a[38026] = 1;
	v->a[38027] = aux_sym_number_token2;
	v->a[38028] = actions(3855);
	v->a[38029] = 1;
	v->a[38030] = anon_sym_DOLLAR_LBRACE;
	v->a[38031] = actions(3858);
	v->a[38032] = 1;
	v->a[38033] = anon_sym_DOLLAR_LPAREN;
	v->a[38034] = actions(3861);
	v->a[38035] = 1;
	v->a[38036] = anon_sym_BQUOTE;
	v->a[38037] = actions(3864);
	v->a[38038] = 1;
	v->a[38039] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1902(v);
}

void	small_parse_table_1902(t_small_parse_table_array *v)
{
	v->a[38040] = actions(3873);
	v->a[38041] = 1;
	v->a[38042] = sym__brace_start;
	v->a[38043] = actions(4986);
	v->a[38044] = 1;
	v->a[38045] = sym__special_character;
	v->a[38046] = actions(4989);
	v->a[38047] = 1;
	v->a[38048] = sym_test_operator;
	v->a[38049] = state(2270);
	v->a[38050] = 1;
	v->a[38051] = aux_sym__literal_repeat1;
	v->a[38052] = actions(2216);
	v->a[38053] = 2;
	v->a[38054] = sym_file_descriptor;
	v->a[38055] = aux_sym_heredoc_redirect_token1;
	v->a[38056] = actions(3834);
	v->a[38057] = 2;
	v->a[38058] = anon_sym_LPAREN_LPAREN;
	v->a[38059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1903(v);
}

void	small_parse_table_1903(t_small_parse_table_array *v)
{
	v->a[38060] = actions(3867);
	v->a[38061] = 2;
	v->a[38062] = anon_sym_LT_LPAREN;
	v->a[38063] = anon_sym_GT_LPAREN;
	v->a[38064] = state(976);
	v->a[38065] = 2;
	v->a[38066] = sym_concatenation;
	v->a[38067] = aux_sym_for_statement_repeat1;
	v->a[38068] = actions(4983);
	v->a[38069] = 3;
	v->a[38070] = sym_raw_string;
	v->a[38071] = sym_ansi_c_string;
	v->a[38072] = sym_word;
	v->a[38073] = state(2572);
	v->a[38074] = 9;
	v->a[38075] = sym_arithmetic_expansion;
	v->a[38076] = sym_brace_expression;
	v->a[38077] = sym_string;
	v->a[38078] = sym_translated_string;
	v->a[38079] = sym_number;
	small_parse_table_1904(v);
}

void	small_parse_table_1904(t_small_parse_table_array *v)
{
	v->a[38080] = sym_simple_expansion;
	v->a[38081] = sym_expansion;
	v->a[38082] = sym_command_substitution;
	v->a[38083] = sym_process_substitution;
	v->a[38084] = actions(2214);
	v->a[38085] = 16;
	v->a[38086] = anon_sym_PIPE_PIPE;
	v->a[38087] = anon_sym_AMP_AMP;
	v->a[38088] = anon_sym_PIPE;
	v->a[38089] = anon_sym_LT;
	v->a[38090] = anon_sym_GT;
	v->a[38091] = anon_sym_LT_LT;
	v->a[38092] = anon_sym_GT_GT;
	v->a[38093] = anon_sym_PIPE_AMP;
	v->a[38094] = anon_sym_AMP_GT;
	v->a[38095] = anon_sym_AMP_GT_GT;
	v->a[38096] = anon_sym_LT_AMP;
	v->a[38097] = anon_sym_GT_AMP;
	v->a[38098] = anon_sym_GT_PIPE;
	v->a[38099] = anon_sym_LT_AMP_DASH;
	small_parse_table_1905(v);
}

/* EOF small_parse_table_380.c */
