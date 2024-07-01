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
	v->a[38000] = anon_sym_DQUOTE;
	v->a[38001] = actions(1360);
	v->a[38002] = 1;
	v->a[38003] = anon_sym_DOLLAR_LBRACE;
	v->a[38004] = actions(1363);
	v->a[38005] = 1;
	v->a[38006] = anon_sym_DOLLAR_LPAREN;
	v->a[38007] = actions(1366);
	v->a[38008] = 1;
	v->a[38009] = anon_sym_BQUOTE;
	v->a[38010] = actions(1369);
	v->a[38011] = 1;
	v->a[38012] = sym__bare_dollar;
	v->a[38013] = state(556);
	v->a[38014] = 1;
	v->a[38015] = aux_sym_command_repeat2;
	v->a[38016] = state(912);
	v->a[38017] = 1;
	v->a[38018] = sym_concatenation;
	v->a[38019] = actions(1348);
	small_parse_table_1901(v);
}

void	small_parse_table_1901(t_small_parse_table_array *v)
{
	v->a[38020] = 3;
	v->a[38021] = sym_raw_string;
	v->a[38022] = sym_number;
	v->a[38023] = sym_word;
	v->a[38024] = state(779);
	v->a[38025] = 5;
	v->a[38026] = sym_arithmetic_expansion;
	v->a[38027] = sym_string;
	v->a[38028] = sym_simple_expansion;
	v->a[38029] = sym_expansion;
	v->a[38030] = sym_command_substitution;
	v->a[38031] = actions(529);
	v->a[38032] = 12;
	v->a[38033] = anon_sym_PIPE;
	v->a[38034] = anon_sym_AMP_AMP;
	v->a[38035] = anon_sym_PIPE_PIPE;
	v->a[38036] = anon_sym_LT;
	v->a[38037] = anon_sym_GT;
	v->a[38038] = anon_sym_GT_GT;
	v->a[38039] = anon_sym_LT_AMP;
	small_parse_table_1902(v);
}

void	small_parse_table_1902(t_small_parse_table_array *v)
{
	v->a[38040] = anon_sym_GT_AMP;
	v->a[38041] = anon_sym_GT_PIPE;
	v->a[38042] = anon_sym_LT_GT;
	v->a[38043] = anon_sym_LT_LT;
	v->a[38044] = anon_sym_LT_LT_DASH;
	v->a[38045] = 5;
	v->a[38046] = actions(3);
	v->a[38047] = 1;
	v->a[38048] = sym_comment;
	v->a[38049] = actions(552);
	v->a[38050] = 2;
	v->a[38051] = sym_file_descriptor;
	v->a[38052] = sym_variable_name;
	v->a[38053] = state(451);
	v->a[38054] = 2;
	v->a[38055] = sym_concatenation;
	v->a[38056] = aux_sym_for_statement_repeat1;
	v->a[38057] = state(782);
	v->a[38058] = 5;
	v->a[38059] = sym_arithmetic_expansion;
	small_parse_table_1903(v);
}

void	small_parse_table_1903(t_small_parse_table_array *v)
{
	v->a[38060] = sym_string;
	v->a[38061] = sym_simple_expansion;
	v->a[38062] = sym_expansion;
	v->a[38063] = sym_command_substitution;
	v->a[38064] = actions(554);
	v->a[38065] = 21;
	v->a[38066] = anon_sym_PIPE;
	v->a[38067] = anon_sym_AMP_AMP;
	v->a[38068] = anon_sym_PIPE_PIPE;
	v->a[38069] = anon_sym_LT;
	v->a[38070] = anon_sym_GT;
	v->a[38071] = anon_sym_GT_GT;
	v->a[38072] = anon_sym_LT_AMP;
	v->a[38073] = anon_sym_GT_AMP;
	v->a[38074] = anon_sym_GT_PIPE;
	v->a[38075] = anon_sym_LT_GT;
	v->a[38076] = anon_sym_LT_LT;
	v->a[38077] = anon_sym_LT_LT_DASH;
	v->a[38078] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38079] = anon_sym_DOLLAR;
	small_parse_table_1904(v);
}

void	small_parse_table_1904(t_small_parse_table_array *v)
{
	v->a[38080] = anon_sym_DQUOTE;
	v->a[38081] = sym_raw_string;
	v->a[38082] = sym_number;
	v->a[38083] = anon_sym_DOLLAR_LBRACE;
	v->a[38084] = anon_sym_DOLLAR_LPAREN;
	v->a[38085] = anon_sym_BQUOTE;
	v->a[38086] = sym_word;
	v->a[38087] = 3;
	v->a[38088] = actions(3);
	v->a[38089] = 1;
	v->a[38090] = sym_comment;
	v->a[38091] = actions(802);
	v->a[38092] = 3;
	v->a[38093] = sym_file_descriptor;
	v->a[38094] = sym__concat;
	v->a[38095] = sym_variable_name;
	v->a[38096] = actions(800);
	v->a[38097] = 27;
	v->a[38098] = anon_sym_esac;
	v->a[38099] = anon_sym_PIPE;
	small_parse_table_1905(v);
}

/* EOF small_parse_table_380.c */
