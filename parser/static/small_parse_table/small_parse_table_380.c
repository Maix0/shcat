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
	v->a[38000] = anon_sym_BQUOTE;
	v->a[38001] = actions(1477);
	v->a[38002] = 2;
	v->a[38003] = sym_raw_string;
	v->a[38004] = sym_word;
	v->a[38005] = state(421);
	v->a[38006] = 2;
	v->a[38007] = sym_concatenation;
	v->a[38008] = aux_sym_for_statement_repeat1;
	v->a[38009] = state(832);
	v->a[38010] = 6;
	v->a[38011] = sym_arithmetic_expansion;
	v->a[38012] = sym_string;
	v->a[38013] = sym_number;
	v->a[38014] = sym_simple_expansion;
	v->a[38015] = sym_expansion;
	v->a[38016] = sym_command_substitution;
	v->a[38017] = actions(553);
	v->a[38018] = 15;
	v->a[38019] = anon_sym_PIPE;
	small_parse_table_1901(v);
}

void	small_parse_table_1901(t_small_parse_table_array *v)
{
	v->a[38020] = anon_sym_AMP_AMP;
	v->a[38021] = anon_sym_PIPE_PIPE;
	v->a[38022] = anon_sym_LT;
	v->a[38023] = anon_sym_GT;
	v->a[38024] = anon_sym_GT_GT;
	v->a[38025] = anon_sym_AMP_GT;
	v->a[38026] = anon_sym_AMP_GT_GT;
	v->a[38027] = anon_sym_LT_AMP;
	v->a[38028] = anon_sym_GT_AMP;
	v->a[38029] = anon_sym_GT_PIPE;
	v->a[38030] = anon_sym_LT_AMP_DASH;
	v->a[38031] = anon_sym_GT_AMP_DASH;
	v->a[38032] = anon_sym_LT_LT;
	v->a[38033] = anon_sym_LT_LT_DASH;
	v->a[38034] = 3;
	v->a[38035] = actions(3);
	v->a[38036] = 1;
	v->a[38037] = sym_comment;
	v->a[38038] = actions(1247);
	v->a[38039] = 3;
	small_parse_table_1902(v);
}

void	small_parse_table_1902(t_small_parse_table_array *v)
{
	v->a[38040] = sym_file_descriptor;
	v->a[38041] = sym__concat;
	v->a[38042] = sym__bare_dollar;
	v->a[38043] = actions(1249);
	v->a[38044] = 31;
	v->a[38045] = anon_sym_PIPE;
	v->a[38046] = anon_sym_RPAREN;
	v->a[38047] = anon_sym_SEMI_SEMI;
	v->a[38048] = anon_sym_AMP_AMP;
	v->a[38049] = anon_sym_PIPE_PIPE;
	v->a[38050] = anon_sym_LT;
	v->a[38051] = anon_sym_GT;
	v->a[38052] = anon_sym_GT_GT;
	v->a[38053] = anon_sym_AMP_GT;
	v->a[38054] = anon_sym_AMP_GT_GT;
	v->a[38055] = anon_sym_LT_AMP;
	v->a[38056] = anon_sym_GT_AMP;
	v->a[38057] = anon_sym_GT_PIPE;
	v->a[38058] = anon_sym_LT_AMP_DASH;
	v->a[38059] = anon_sym_GT_AMP_DASH;
	small_parse_table_1903(v);
}

void	small_parse_table_1903(t_small_parse_table_array *v)
{
	v->a[38060] = anon_sym_LT_LT;
	v->a[38061] = anon_sym_LT_LT_DASH;
	v->a[38062] = aux_sym_heredoc_redirect_token1;
	v->a[38063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38064] = anon_sym_AMP;
	v->a[38065] = aux_sym_concatenation_token1;
	v->a[38066] = anon_sym_DOLLAR;
	v->a[38067] = anon_sym_DQUOTE;
	v->a[38068] = sym_raw_string;
	v->a[38069] = aux_sym_number_token1;
	v->a[38070] = aux_sym_number_token2;
	v->a[38071] = anon_sym_DOLLAR_LBRACE;
	v->a[38072] = anon_sym_DOLLAR_LPAREN;
	v->a[38073] = anon_sym_BQUOTE;
	v->a[38074] = sym_word;
	v->a[38075] = anon_sym_SEMI;
	v->a[38076] = 3;
	v->a[38077] = actions(3);
	v->a[38078] = 1;
	v->a[38079] = sym_comment;
	small_parse_table_1904(v);
}

void	small_parse_table_1904(t_small_parse_table_array *v)
{
	v->a[38080] = actions(1192);
	v->a[38081] = 3;
	v->a[38082] = sym_file_descriptor;
	v->a[38083] = sym__concat;
	v->a[38084] = sym_variable_name;
	v->a[38085] = actions(1190);
	v->a[38086] = 31;
	v->a[38087] = anon_sym_PIPE;
	v->a[38088] = anon_sym_RPAREN;
	v->a[38089] = anon_sym_SEMI_SEMI;
	v->a[38090] = anon_sym_AMP_AMP;
	v->a[38091] = anon_sym_PIPE_PIPE;
	v->a[38092] = anon_sym_LT;
	v->a[38093] = anon_sym_GT;
	v->a[38094] = anon_sym_GT_GT;
	v->a[38095] = anon_sym_AMP_GT;
	v->a[38096] = anon_sym_AMP_GT_GT;
	v->a[38097] = anon_sym_LT_AMP;
	v->a[38098] = anon_sym_GT_AMP;
	v->a[38099] = anon_sym_GT_PIPE;
	small_parse_table_1905(v);
}

/* EOF small_parse_table_380.c */
