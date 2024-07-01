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
	v->a[18000] = sym_list;
	v->a[18001] = sym_negated_command;
	v->a[18002] = sym_command;
	v->a[18003] = sym__variable_assignments;
	v->a[18004] = 29;
	v->a[18005] = actions(3);
	v->a[18006] = 1;
	v->a[18007] = sym_comment;
	v->a[18008] = actions(9);
	v->a[18009] = 1;
	v->a[18010] = anon_sym_for;
	v->a[18011] = actions(13);
	v->a[18012] = 1;
	v->a[18013] = anon_sym_if;
	v->a[18014] = actions(15);
	v->a[18015] = 1;
	v->a[18016] = anon_sym_case;
	v->a[18017] = actions(17);
	v->a[18018] = 1;
	v->a[18019] = anon_sym_LPAREN;
	small_parse_table_901(v);
}

void	small_parse_table_901(t_small_parse_table_array *v)
{
	v->a[18020] = actions(19);
	v->a[18021] = 1;
	v->a[18022] = anon_sym_LBRACE;
	v->a[18023] = actions(59);
	v->a[18024] = 1;
	v->a[18025] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18026] = actions(61);
	v->a[18027] = 1;
	v->a[18028] = anon_sym_DOLLAR;
	v->a[18029] = actions(63);
	v->a[18030] = 1;
	v->a[18031] = anon_sym_DQUOTE;
	v->a[18032] = actions(67);
	v->a[18033] = 1;
	v->a[18034] = anon_sym_DOLLAR_LBRACE;
	v->a[18035] = actions(69);
	v->a[18036] = 1;
	v->a[18037] = anon_sym_DOLLAR_LPAREN;
	v->a[18038] = actions(71);
	v->a[18039] = 1;
	small_parse_table_902(v);
}

void	small_parse_table_902(t_small_parse_table_array *v)
{
	v->a[18040] = anon_sym_BQUOTE;
	v->a[18041] = actions(73);
	v->a[18042] = 1;
	v->a[18043] = sym_file_descriptor;
	v->a[18044] = actions(75);
	v->a[18045] = 1;
	v->a[18046] = sym_variable_name;
	v->a[18047] = actions(240);
	v->a[18048] = 1;
	v->a[18049] = sym_word;
	v->a[18050] = actions(242);
	v->a[18051] = 1;
	v->a[18052] = anon_sym_BANG;
	v->a[18053] = state(188);
	v->a[18054] = 1;
	v->a[18055] = sym_command_name;
	v->a[18056] = state(318);
	v->a[18057] = 1;
	v->a[18058] = sym_variable_assignment;
	v->a[18059] = state(650);
	small_parse_table_903(v);
}

void	small_parse_table_903(t_small_parse_table_array *v)
{
	v->a[18060] = 1;
	v->a[18061] = sym_concatenation;
	v->a[18062] = state(749);
	v->a[18063] = 1;
	v->a[18064] = aux_sym_command_repeat1;
	v->a[18065] = state(795);
	v->a[18066] = 1;
	v->a[18067] = sym_file_redirect;
	v->a[18068] = state(1240);
	v->a[18069] = 1;
	v->a[18070] = aux_sym_redirected_statement_repeat2;
	v->a[18071] = state(1544);
	v->a[18072] = 1;
	v->a[18073] = sym_pipeline;
	v->a[18074] = actions(11);
	v->a[18075] = 2;
	v->a[18076] = anon_sym_while;
	v->a[18077] = anon_sym_until;
	v->a[18078] = actions(57);
	v->a[18079] = 2;
	small_parse_table_904(v);
}

void	small_parse_table_904(t_small_parse_table_array *v)
{
	v->a[18080] = anon_sym_LT_AMP_DASH;
	v->a[18081] = anon_sym_GT_AMP_DASH;
	v->a[18082] = actions(65);
	v->a[18083] = 2;
	v->a[18084] = sym_raw_string;
	v->a[18085] = sym_number;
	v->a[18086] = state(443);
	v->a[18087] = 5;
	v->a[18088] = sym_arithmetic_expansion;
	v->a[18089] = sym_string;
	v->a[18090] = sym_simple_expansion;
	v->a[18091] = sym_expansion;
	v->a[18092] = sym_command_substitution;
	v->a[18093] = actions(55);
	v->a[18094] = 6;
	v->a[18095] = anon_sym_LT;
	v->a[18096] = anon_sym_GT;
	v->a[18097] = anon_sym_GT_GT;
	v->a[18098] = anon_sym_LT_AMP;
	v->a[18099] = anon_sym_GT_AMP;
	small_parse_table_905(v);
}

/* EOF small_parse_table_180.c */
