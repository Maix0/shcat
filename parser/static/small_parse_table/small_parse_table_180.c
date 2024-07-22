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
	v->a[18000] = actions(121);
	v->a[18001] = 1;
	v->a[18002] = sym_file_descriptor;
	v->a[18003] = actions(359);
	v->a[18004] = 1;
	v->a[18005] = sym_variable_name;
	v->a[18006] = state(173);
	v->a[18007] = 1;
	v->a[18008] = sym_command_name;
	v->a[18009] = state(597);
	v->a[18010] = 1;
	v->a[18011] = aux_sym_command_repeat1;
	v->a[18012] = state(598);
	v->a[18013] = 1;
	v->a[18014] = sym_concatenation;
	v->a[18015] = state(714);
	v->a[18016] = 1;
	v->a[18017] = sym_file_redirect;
	v->a[18018] = state(1077);
	v->a[18019] = 1;
	small_parse_table_901(v);
}

void	small_parse_table_901(t_small_parse_table_array *v)
{
	v->a[18020] = sym_variable_assignment;
	v->a[18021] = state(1168);
	v->a[18022] = 1;
	v->a[18023] = aux_sym_redirected_statement_repeat2;
	v->a[18024] = actions(91);
	v->a[18025] = 2;
	v->a[18026] = anon_sym_while;
	v->a[18027] = anon_sym_until;
	v->a[18028] = actions(113);
	v->a[18029] = 3;
	v->a[18030] = sym_raw_string;
	v->a[18031] = sym_number;
	v->a[18032] = sym_word;
	v->a[18033] = state(378);
	v->a[18034] = 5;
	v->a[18035] = sym_arithmetic_expansion;
	v->a[18036] = sym_string;
	v->a[18037] = sym_simple_expansion;
	v->a[18038] = sym_expansion;
	v->a[18039] = sym_command_substitution;
	small_parse_table_902(v);
}

void	small_parse_table_902(t_small_parse_table_array *v)
{
	v->a[18040] = actions(105);
	v->a[18041] = 7;
	v->a[18042] = anon_sym_LT;
	v->a[18043] = anon_sym_GT;
	v->a[18044] = anon_sym_GT_GT;
	v->a[18045] = anon_sym_LT_AMP;
	v->a[18046] = anon_sym_GT_AMP;
	v->a[18047] = anon_sym_GT_PIPE;
	v->a[18048] = anon_sym_LT_GT;
	v->a[18049] = state(1288);
	v->a[18050] = 7;
	v->a[18051] = sym_for_statement;
	v->a[18052] = sym_while_statement;
	v->a[18053] = sym_if_statement;
	v->a[18054] = sym_compound_statement;
	v->a[18055] = sym_subshell;
	v->a[18056] = sym_command;
	v->a[18057] = sym__variable_assignments;
	v->a[18058] = 24;
	v->a[18059] = actions(3);
	small_parse_table_903(v);
}

void	small_parse_table_903(t_small_parse_table_array *v)
{
	v->a[18060] = 1;
	v->a[18061] = sym_comment;
	v->a[18062] = actions(9);
	v->a[18063] = 1;
	v->a[18064] = anon_sym_for;
	v->a[18065] = actions(13);
	v->a[18066] = 1;
	v->a[18067] = anon_sym_if;
	v->a[18068] = actions(17);
	v->a[18069] = 1;
	v->a[18070] = anon_sym_LPAREN;
	v->a[18071] = actions(19);
	v->a[18072] = 1;
	v->a[18073] = anon_sym_LBRACE;
	v->a[18074] = actions(55);
	v->a[18075] = 1;
	v->a[18076] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18077] = actions(57);
	v->a[18078] = 1;
	v->a[18079] = anon_sym_DOLLAR;
	small_parse_table_904(v);
}

void	small_parse_table_904(t_small_parse_table_array *v)
{
	v->a[18080] = actions(59);
	v->a[18081] = 1;
	v->a[18082] = anon_sym_DQUOTE;
	v->a[18083] = actions(63);
	v->a[18084] = 1;
	v->a[18085] = anon_sym_DOLLAR_LBRACE;
	v->a[18086] = actions(65);
	v->a[18087] = 1;
	v->a[18088] = anon_sym_DOLLAR_LPAREN;
	v->a[18089] = actions(67);
	v->a[18090] = 1;
	v->a[18091] = anon_sym_BQUOTE;
	v->a[18092] = actions(219);
	v->a[18093] = 1;
	v->a[18094] = sym_file_descriptor;
	v->a[18095] = actions(359);
	v->a[18096] = 1;
	v->a[18097] = sym_variable_name;
	v->a[18098] = state(170);
	v->a[18099] = 1;
	small_parse_table_905(v);
}

/* EOF small_parse_table_180.c */
