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
	v->a[18000] = actions(375);
	v->a[18001] = 1;
	v->a[18002] = sym_variable_name;
	v->a[18003] = state(242);
	v->a[18004] = 1;
	v->a[18005] = sym_command_name;
	v->a[18006] = state(624);
	v->a[18007] = 1;
	v->a[18008] = sym_variable_assignment;
	v->a[18009] = state(647);
	v->a[18010] = 1;
	v->a[18011] = sym_concatenation;
	v->a[18012] = state(738);
	v->a[18013] = 1;
	v->a[18014] = sym_file_redirect;
	v->a[18015] = state(768);
	v->a[18016] = 1;
	v->a[18017] = aux_sym_command_repeat1;
	v->a[18018] = state(1564);
	v->a[18019] = 1;
	small_parse_table_901(v);
}

void	small_parse_table_901(t_small_parse_table_array *v)
{
	v->a[18020] = aux_sym_redirected_statement_repeat2;
	v->a[18021] = state(1608);
	v->a[18022] = 1;
	v->a[18023] = sym_pipeline;
	v->a[18024] = actions(11);
	v->a[18025] = 2;
	v->a[18026] = anon_sym_while;
	v->a[18027] = anon_sym_until;
	v->a[18028] = actions(369);
	v->a[18029] = 2;
	v->a[18030] = anon_sym_LT_AMP_DASH;
	v->a[18031] = anon_sym_GT_AMP_DASH;
	v->a[18032] = actions(371);
	v->a[18033] = 2;
	v->a[18034] = sym_raw_string;
	v->a[18035] = sym_number;
	v->a[18036] = state(790);
	v->a[18037] = 5;
	v->a[18038] = sym_arithmetic_expansion;
	v->a[18039] = sym_string;
	small_parse_table_902(v);
}

void	small_parse_table_902(t_small_parse_table_array *v)
{
	v->a[18040] = sym_simple_expansion;
	v->a[18041] = sym_expansion;
	v->a[18042] = sym_command_substitution;
	v->a[18043] = actions(367);
	v->a[18044] = 8;
	v->a[18045] = anon_sym_LT;
	v->a[18046] = anon_sym_GT;
	v->a[18047] = anon_sym_GT_GT;
	v->a[18048] = anon_sym_AMP_GT;
	v->a[18049] = anon_sym_AMP_GT_GT;
	v->a[18050] = anon_sym_LT_AMP;
	v->a[18051] = anon_sym_GT_AMP;
	v->a[18052] = anon_sym_GT_PIPE;
	v->a[18053] = state(1239);
	v->a[18054] = 13;
	v->a[18055] = sym__statement_not_pipeline;
	v->a[18056] = sym_redirected_statement;
	v->a[18057] = sym_for_statement;
	v->a[18058] = sym_while_statement;
	v->a[18059] = sym_if_statement;
	small_parse_table_903(v);
}

void	small_parse_table_903(t_small_parse_table_array *v)
{
	v->a[18060] = sym_case_statement;
	v->a[18061] = sym_function_definition;
	v->a[18062] = sym_compound_statement;
	v->a[18063] = sym_subshell;
	v->a[18064] = sym_list;
	v->a[18065] = sym_negated_command;
	v->a[18066] = sym_command;
	v->a[18067] = sym__variable_assignments;
	v->a[18068] = 30;
	v->a[18069] = actions(3);
	v->a[18070] = 1;
	v->a[18071] = sym_comment;
	v->a[18072] = actions(9);
	v->a[18073] = 1;
	v->a[18074] = anon_sym_for;
	v->a[18075] = actions(13);
	v->a[18076] = 1;
	v->a[18077] = anon_sym_if;
	v->a[18078] = actions(15);
	v->a[18079] = 1;
	small_parse_table_904(v);
}

void	small_parse_table_904(t_small_parse_table_array *v)
{
	v->a[18080] = anon_sym_case;
	v->a[18081] = actions(17);
	v->a[18082] = 1;
	v->a[18083] = anon_sym_LPAREN;
	v->a[18084] = actions(19);
	v->a[18085] = 1;
	v->a[18086] = anon_sym_LBRACE;
	v->a[18087] = actions(59);
	v->a[18088] = 1;
	v->a[18089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18090] = actions(61);
	v->a[18091] = 1;
	v->a[18092] = anon_sym_DOLLAR;
	v->a[18093] = actions(63);
	v->a[18094] = 1;
	v->a[18095] = anon_sym_DQUOTE;
	v->a[18096] = actions(67);
	v->a[18097] = 1;
	v->a[18098] = anon_sym_DOLLAR_LBRACE;
	v->a[18099] = actions(69);
	small_parse_table_905(v);
}

/* EOF small_parse_table_180.c */
