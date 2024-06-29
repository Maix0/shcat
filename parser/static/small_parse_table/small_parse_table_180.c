/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_180.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_900(t_small_parse_table_array *v)
{
	v->a[18000] = sym_variable_name;
	v->a[18001] = actions(234);
	v->a[18002] = 1;
	v->a[18003] = sym_word;
	v->a[18004] = actions(236);
	v->a[18005] = 1;
	v->a[18006] = anon_sym_BANG;
	v->a[18007] = state(189);
	v->a[18008] = 1;
	v->a[18009] = sym_command_name;
	v->a[18010] = state(301);
	v->a[18011] = 1;
	v->a[18012] = sym_variable_assignment;
	v->a[18013] = state(624);
	v->a[18014] = 1;
	v->a[18015] = sym_concatenation;
	v->a[18016] = state(672);
	v->a[18017] = 1;
	v->a[18018] = aux_sym_command_repeat1;
	v->a[18019] = state(787);
	small_parse_table_901(v);
}

void	small_parse_table_901(t_small_parse_table_array *v)
{
	v->a[18020] = 1;
	v->a[18021] = sym_file_redirect;
	v->a[18022] = state(1207);
	v->a[18023] = 1;
	v->a[18024] = aux_sym_redirected_statement_repeat2;
	v->a[18025] = state(1444);
	v->a[18026] = 1;
	v->a[18027] = sym_pipeline;
	v->a[18028] = actions(11);
	v->a[18029] = 2;
	v->a[18030] = anon_sym_while;
	v->a[18031] = anon_sym_until;
	v->a[18032] = actions(57);
	v->a[18033] = 2;
	v->a[18034] = anon_sym_LT_AMP_DASH;
	v->a[18035] = anon_sym_GT_AMP_DASH;
	v->a[18036] = actions(65);
	v->a[18037] = 2;
	v->a[18038] = sym_raw_string;
	v->a[18039] = sym_number;
	small_parse_table_902(v);
}

void	small_parse_table_902(t_small_parse_table_array *v)
{
	v->a[18040] = state(420);
	v->a[18041] = 5;
	v->a[18042] = sym_arithmetic_expansion;
	v->a[18043] = sym_string;
	v->a[18044] = sym_simple_expansion;
	v->a[18045] = sym_expansion;
	v->a[18046] = sym_command_substitution;
	v->a[18047] = actions(55);
	v->a[18048] = 8;
	v->a[18049] = anon_sym_LT;
	v->a[18050] = anon_sym_GT;
	v->a[18051] = anon_sym_GT_GT;
	v->a[18052] = anon_sym_AMP_GT;
	v->a[18053] = anon_sym_AMP_GT_GT;
	v->a[18054] = anon_sym_LT_AMP;
	v->a[18055] = anon_sym_GT_AMP;
	v->a[18056] = anon_sym_GT_PIPE;
	v->a[18057] = state(1170);
	v->a[18058] = 13;
	v->a[18059] = sym__statement_not_pipeline;
	small_parse_table_903(v);
}

void	small_parse_table_903(t_small_parse_table_array *v)
{
	v->a[18060] = sym_redirected_statement;
	v->a[18061] = sym_for_statement;
	v->a[18062] = sym_while_statement;
	v->a[18063] = sym_if_statement;
	v->a[18064] = sym_case_statement;
	v->a[18065] = sym_function_definition;
	v->a[18066] = sym_compound_statement;
	v->a[18067] = sym_subshell;
	v->a[18068] = sym_list;
	v->a[18069] = sym_negated_command;
	v->a[18070] = sym_command;
	v->a[18071] = sym__variable_assignments;
	v->a[18072] = 30;
	v->a[18073] = actions(3);
	v->a[18074] = 1;
	v->a[18075] = sym_comment;
	v->a[18076] = actions(87);
	v->a[18077] = 1;
	v->a[18078] = sym_word;
	v->a[18079] = actions(89);
	small_parse_table_904(v);
}

void	small_parse_table_904(t_small_parse_table_array *v)
{
	v->a[18080] = 1;
	v->a[18081] = anon_sym_for;
	v->a[18082] = actions(93);
	v->a[18083] = 1;
	v->a[18084] = anon_sym_if;
	v->a[18085] = actions(95);
	v->a[18086] = 1;
	v->a[18087] = anon_sym_case;
	v->a[18088] = actions(97);
	v->a[18089] = 1;
	v->a[18090] = anon_sym_LPAREN;
	v->a[18091] = actions(101);
	v->a[18092] = 1;
	v->a[18093] = anon_sym_LBRACE;
	v->a[18094] = actions(103);
	v->a[18095] = 1;
	v->a[18096] = anon_sym_BANG;
	v->a[18097] = actions(109);
	v->a[18098] = 1;
	v->a[18099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_905(v);
}

/* EOF small_parse_table_180.c */
