/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_860.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4300(t_small_parse_table_array *v)
{
	v->a[86000] = 1;
	v->a[86001] = sym_comment;
	v->a[86002] = actions(4328);
	v->a[86003] = 1;
	v->a[86004] = sym_word;
	v->a[86005] = actions(4340);
	v->a[86006] = 1;
	v->a[86007] = anon_sym_DOLLAR;
	v->a[86008] = actions(4346);
	v->a[86009] = 1;
	v->a[86010] = aux_sym_number_token1;
	v->a[86011] = actions(4348);
	v->a[86012] = 1;
	v->a[86013] = aux_sym_number_token2;
	v->a[86014] = actions(4352);
	v->a[86015] = 1;
	v->a[86016] = anon_sym_DOLLAR_LPAREN;
	v->a[86017] = actions(4360);
	v->a[86018] = 1;
	v->a[86019] = sym_extglob_pattern;
	small_parse_table_4301(v);
}

void	small_parse_table_4301(t_small_parse_table_array *v)
{
	v->a[86020] = actions(4362);
	v->a[86021] = 1;
	v->a[86022] = sym__brace_start;
	v->a[86023] = actions(4548);
	v->a[86024] = 1;
	v->a[86025] = anon_sym_LPAREN;
	v->a[86026] = actions(4550);
	v->a[86027] = 1;
	v->a[86028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86029] = actions(4552);
	v->a[86030] = 1;
	v->a[86031] = sym__special_character;
	v->a[86032] = actions(4554);
	v->a[86033] = 1;
	v->a[86034] = anon_sym_DQUOTE;
	v->a[86035] = actions(4556);
	v->a[86036] = 1;
	v->a[86037] = anon_sym_DOLLAR_LBRACE;
	v->a[86038] = actions(4558);
	v->a[86039] = 1;
	small_parse_table_4302(v);
}

void	small_parse_table_4302(t_small_parse_table_array *v)
{
	v->a[86040] = anon_sym_BQUOTE;
	v->a[86041] = actions(4560);
	v->a[86042] = 1;
	v->a[86043] = anon_sym_DOLLAR_BQUOTE;
	v->a[86044] = state(3393);
	v->a[86045] = 1;
	v->a[86046] = aux_sym__literal_repeat1;
	v->a[86047] = state(3945);
	v->a[86048] = 1;
	v->a[86049] = sym_last_case_item;
	v->a[86050] = actions(4358);
	v->a[86051] = 2;
	v->a[86052] = sym_test_operator;
	v->a[86053] = sym_raw_string;
	v->a[86054] = state(1881);
	v->a[86055] = 2;
	v->a[86056] = sym_case_item;
	v->a[86057] = aux_sym_case_statement_repeat1;
	v->a[86058] = state(3472);
	v->a[86059] = 2;
	small_parse_table_4303(v);
}

void	small_parse_table_4303(t_small_parse_table_array *v)
{
	v->a[86060] = sym_concatenation;
	v->a[86061] = sym__extglob_blob;
	v->a[86062] = state(3295);
	v->a[86063] = 7;
	v->a[86064] = sym_arithmetic_expansion;
	v->a[86065] = sym_brace_expression;
	v->a[86066] = sym_string;
	v->a[86067] = sym_number;
	v->a[86068] = sym_simple_expansion;
	v->a[86069] = sym_expansion;
	v->a[86070] = sym_command_substitution;
	v->a[86071] = 6;
	v->a[86072] = actions(57);
	v->a[86073] = 1;
	v->a[86074] = sym_comment;
	v->a[86075] = actions(4795);
	v->a[86076] = 1;
	v->a[86077] = aux_sym_concatenation_token1;
	v->a[86078] = actions(4799);
	v->a[86079] = 1;
	small_parse_table_4304(v);
}

void	small_parse_table_4304(t_small_parse_table_array *v)
{
	v->a[86080] = sym__concat;
	v->a[86081] = state(1766);
	v->a[86082] = 1;
	v->a[86083] = aux_sym_concatenation_repeat1;
	v->a[86084] = actions(2688);
	v->a[86085] = 11;
	v->a[86086] = anon_sym_LT;
	v->a[86087] = anon_sym_GT;
	v->a[86088] = anon_sym_AMP_GT;
	v->a[86089] = anon_sym_LT_AMP;
	v->a[86090] = anon_sym_GT_AMP;
	v->a[86091] = anon_sym_DOLLAR;
	v->a[86092] = aux_sym_number_token1;
	v->a[86093] = aux_sym_number_token2;
	v->a[86094] = anon_sym_DOLLAR_LPAREN;
	v->a[86095] = anon_sym_BQUOTE;
	v->a[86096] = sym_word;
	v->a[86097] = actions(2690);
	v->a[86098] = 15;
	v->a[86099] = sym_file_descriptor;
	small_parse_table_4305(v);
}

/* EOF small_parse_table_860.c */
