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
	v->a[18000] = anon_sym_LPAREN;
	v->a[18001] = actions(19);
	v->a[18002] = 1;
	v->a[18003] = anon_sym_LBRACE;
	v->a[18004] = actions(63);
	v->a[18005] = 1;
	v->a[18006] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18007] = actions(65);
	v->a[18008] = 1;
	v->a[18009] = anon_sym_DOLLAR;
	v->a[18010] = actions(67);
	v->a[18011] = 1;
	v->a[18012] = anon_sym_DQUOTE;
	v->a[18013] = actions(71);
	v->a[18014] = 1;
	v->a[18015] = aux_sym_number_token1;
	v->a[18016] = actions(73);
	v->a[18017] = 1;
	v->a[18018] = aux_sym_number_token2;
	v->a[18019] = actions(75);
	small_parse_table_901(v);
}

void	small_parse_table_901(t_small_parse_table_array *v)
{
	v->a[18020] = 1;
	v->a[18021] = anon_sym_DOLLAR_LBRACE;
	v->a[18022] = actions(77);
	v->a[18023] = 1;
	v->a[18024] = anon_sym_DOLLAR_LPAREN;
	v->a[18025] = actions(79);
	v->a[18026] = 1;
	v->a[18027] = anon_sym_BQUOTE;
	v->a[18028] = actions(248);
	v->a[18029] = 1;
	v->a[18030] = sym_word;
	v->a[18031] = actions(250);
	v->a[18032] = 1;
	v->a[18033] = anon_sym_BANG;
	v->a[18034] = actions(256);
	v->a[18035] = 1;
	v->a[18036] = sym_raw_string;
	v->a[18037] = actions(258);
	v->a[18038] = 1;
	v->a[18039] = sym_file_descriptor;
	small_parse_table_902(v);
}

void	small_parse_table_902(t_small_parse_table_array *v)
{
	v->a[18040] = actions(260);
	v->a[18041] = 1;
	v->a[18042] = sym_variable_name;
	v->a[18043] = state(135);
	v->a[18044] = 1;
	v->a[18045] = aux_sym__statements_repeat1;
	v->a[18046] = state(175);
	v->a[18047] = 1;
	v->a[18048] = sym_command_name;
	v->a[18049] = state(270);
	v->a[18050] = 1;
	v->a[18051] = sym_variable_assignment;
	v->a[18052] = state(567);
	v->a[18053] = 1;
	v->a[18054] = aux_sym_command_repeat1;
	v->a[18055] = state(582);
	v->a[18056] = 1;
	v->a[18057] = sym_concatenation;
	v->a[18058] = state(718);
	v->a[18059] = 1;
	small_parse_table_903(v);
}

void	small_parse_table_903(t_small_parse_table_array *v)
{
	v->a[18060] = sym_file_redirect;
	v->a[18061] = state(1135);
	v->a[18062] = 1;
	v->a[18063] = sym_pipeline;
	v->a[18064] = state(1196);
	v->a[18065] = 1;
	v->a[18066] = aux_sym_redirected_statement_repeat2;
	v->a[18067] = state(2037);
	v->a[18068] = 1;
	v->a[18069] = sym__statement_not_pipeline;
	v->a[18070] = actions(11);
	v->a[18071] = 2;
	v->a[18072] = anon_sym_while;
	v->a[18073] = anon_sym_until;
	v->a[18074] = actions(254);
	v->a[18075] = 2;
	v->a[18076] = anon_sym_LT_AMP_DASH;
	v->a[18077] = anon_sym_GT_AMP_DASH;
	v->a[18078] = state(295);
	v->a[18079] = 6;
	small_parse_table_904(v);
}

void	small_parse_table_904(t_small_parse_table_array *v)
{
	v->a[18080] = sym_arithmetic_expansion;
	v->a[18081] = sym_string;
	v->a[18082] = sym_number;
	v->a[18083] = sym_simple_expansion;
	v->a[18084] = sym_expansion;
	v->a[18085] = sym_command_substitution;
	v->a[18086] = actions(252);
	v->a[18087] = 8;
	v->a[18088] = anon_sym_LT;
	v->a[18089] = anon_sym_GT;
	v->a[18090] = anon_sym_GT_GT;
	v->a[18091] = anon_sym_AMP_GT;
	v->a[18092] = anon_sym_AMP_GT_GT;
	v->a[18093] = anon_sym_LT_AMP;
	v->a[18094] = anon_sym_GT_AMP;
	v->a[18095] = anon_sym_GT_PIPE;
	v->a[18096] = state(1077);
	v->a[18097] = 12;
	v->a[18098] = sym_redirected_statement;
	v->a[18099] = sym_for_statement;
	small_parse_table_905(v);
}

/* EOF small_parse_table_180.c */
