/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_160.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_800(t_small_parse_table_array *v)
{
	v->a[16000] = anon_sym_LBRACE;
	v->a[16001] = actions(63);
	v->a[16002] = 1;
	v->a[16003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16004] = actions(65);
	v->a[16005] = 1;
	v->a[16006] = anon_sym_DOLLAR;
	v->a[16007] = actions(67);
	v->a[16008] = 1;
	v->a[16009] = anon_sym_DQUOTE;
	v->a[16010] = actions(71);
	v->a[16011] = 1;
	v->a[16012] = aux_sym_number_token1;
	v->a[16013] = actions(73);
	v->a[16014] = 1;
	v->a[16015] = aux_sym_number_token2;
	v->a[16016] = actions(75);
	v->a[16017] = 1;
	v->a[16018] = anon_sym_DOLLAR_LBRACE;
	v->a[16019] = actions(77);
	small_parse_table_801(v);
}

void	small_parse_table_801(t_small_parse_table_array *v)
{
	v->a[16020] = 1;
	v->a[16021] = anon_sym_DOLLAR_LPAREN;
	v->a[16022] = actions(79);
	v->a[16023] = 1;
	v->a[16024] = anon_sym_BQUOTE;
	v->a[16025] = actions(248);
	v->a[16026] = 1;
	v->a[16027] = sym_word;
	v->a[16028] = actions(250);
	v->a[16029] = 1;
	v->a[16030] = anon_sym_BANG;
	v->a[16031] = actions(256);
	v->a[16032] = 1;
	v->a[16033] = sym_raw_string;
	v->a[16034] = actions(258);
	v->a[16035] = 1;
	v->a[16036] = sym_file_descriptor;
	v->a[16037] = actions(260);
	v->a[16038] = 1;
	v->a[16039] = sym_variable_name;
	small_parse_table_802(v);
}

void	small_parse_table_802(t_small_parse_table_array *v)
{
	v->a[16040] = state(141);
	v->a[16041] = 1;
	v->a[16042] = aux_sym__statements_repeat1;
	v->a[16043] = state(175);
	v->a[16044] = 1;
	v->a[16045] = sym_command_name;
	v->a[16046] = state(278);
	v->a[16047] = 1;
	v->a[16048] = sym_variable_assignment;
	v->a[16049] = state(567);
	v->a[16050] = 1;
	v->a[16051] = aux_sym_command_repeat1;
	v->a[16052] = state(582);
	v->a[16053] = 1;
	v->a[16054] = sym_concatenation;
	v->a[16055] = state(714);
	v->a[16056] = 1;
	v->a[16057] = sym_file_redirect;
	v->a[16058] = state(1100);
	v->a[16059] = 1;
	small_parse_table_803(v);
}

void	small_parse_table_803(t_small_parse_table_array *v)
{
	v->a[16060] = sym_pipeline;
	v->a[16061] = state(1196);
	v->a[16062] = 1;
	v->a[16063] = aux_sym_redirected_statement_repeat2;
	v->a[16064] = state(2037);
	v->a[16065] = 1;
	v->a[16066] = sym__statement_not_pipeline;
	v->a[16067] = state(2187);
	v->a[16068] = 1;
	v->a[16069] = sym__statements;
	v->a[16070] = actions(11);
	v->a[16071] = 2;
	v->a[16072] = anon_sym_while;
	v->a[16073] = anon_sym_until;
	v->a[16074] = actions(254);
	v->a[16075] = 2;
	v->a[16076] = anon_sym_LT_AMP_DASH;
	v->a[16077] = anon_sym_GT_AMP_DASH;
	v->a[16078] = state(295);
	v->a[16079] = 6;
	small_parse_table_804(v);
}

void	small_parse_table_804(t_small_parse_table_array *v)
{
	v->a[16080] = sym_arithmetic_expansion;
	v->a[16081] = sym_string;
	v->a[16082] = sym_number;
	v->a[16083] = sym_simple_expansion;
	v->a[16084] = sym_expansion;
	v->a[16085] = sym_command_substitution;
	v->a[16086] = actions(252);
	v->a[16087] = 8;
	v->a[16088] = anon_sym_LT;
	v->a[16089] = anon_sym_GT;
	v->a[16090] = anon_sym_GT_GT;
	v->a[16091] = anon_sym_AMP_GT;
	v->a[16092] = anon_sym_AMP_GT_GT;
	v->a[16093] = anon_sym_LT_AMP;
	v->a[16094] = anon_sym_GT_AMP;
	v->a[16095] = anon_sym_GT_PIPE;
	v->a[16096] = state(1031);
	v->a[16097] = 12;
	v->a[16098] = sym_redirected_statement;
	v->a[16099] = sym_for_statement;
	small_parse_table_805(v);
}

/* EOF small_parse_table_160.c */
