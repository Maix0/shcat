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
	v->a[16000] = 23;
	v->a[16001] = actions(3);
	v->a[16002] = 1;
	v->a[16003] = sym_comment;
	v->a[16004] = actions(9);
	v->a[16005] = 1;
	v->a[16006] = anon_sym_for;
	v->a[16007] = actions(13);
	v->a[16008] = 1;
	v->a[16009] = anon_sym_if;
	v->a[16010] = actions(17);
	v->a[16011] = 1;
	v->a[16012] = anon_sym_LPAREN;
	v->a[16013] = actions(19);
	v->a[16014] = 1;
	v->a[16015] = anon_sym_LBRACE;
	v->a[16016] = actions(53);
	v->a[16017] = 1;
	v->a[16018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16019] = actions(55);
	small_parse_table_801(v);
}

void	small_parse_table_801(t_small_parse_table_array *v)
{
	v->a[16020] = 1;
	v->a[16021] = anon_sym_DOLLAR;
	v->a[16022] = actions(57);
	v->a[16023] = 1;
	v->a[16024] = anon_sym_DQUOTE;
	v->a[16025] = actions(61);
	v->a[16026] = 1;
	v->a[16027] = anon_sym_DOLLAR_LBRACE;
	v->a[16028] = actions(63);
	v->a[16029] = 1;
	v->a[16030] = anon_sym_DOLLAR_LPAREN;
	v->a[16031] = actions(65);
	v->a[16032] = 1;
	v->a[16033] = anon_sym_BQUOTE;
	v->a[16034] = actions(341);
	v->a[16035] = 1;
	v->a[16036] = sym_variable_name;
	v->a[16037] = state(271);
	v->a[16038] = 1;
	v->a[16039] = sym_command_name;
	small_parse_table_802(v);
}

void	small_parse_table_802(t_small_parse_table_array *v)
{
	v->a[16040] = state(482);
	v->a[16041] = 1;
	v->a[16042] = aux_sym_command_repeat1;
	v->a[16043] = state(600);
	v->a[16044] = 1;
	v->a[16045] = sym_file_redirect;
	v->a[16046] = state(602);
	v->a[16047] = 1;
	v->a[16048] = sym_concatenation;
	v->a[16049] = state(947);
	v->a[16050] = 1;
	v->a[16051] = sym_variable_assignment;
	v->a[16052] = state(1080);
	v->a[16053] = 1;
	v->a[16054] = aux_sym_redirected_statement_repeat2;
	v->a[16055] = actions(11);
	v->a[16056] = 2;
	v->a[16057] = anon_sym_while;
	v->a[16058] = anon_sym_until;
	v->a[16059] = actions(59);
	small_parse_table_803(v);
}

void	small_parse_table_803(t_small_parse_table_array *v)
{
	v->a[16060] = 3;
	v->a[16061] = sym_raw_string;
	v->a[16062] = sym_number;
	v->a[16063] = sym_word;
	v->a[16064] = state(425);
	v->a[16065] = 5;
	v->a[16066] = sym_arithmetic_expansion;
	v->a[16067] = sym_string;
	v->a[16068] = sym_simple_expansion;
	v->a[16069] = sym_expansion;
	v->a[16070] = sym_command_substitution;
	v->a[16071] = actions(51);
	v->a[16072] = 7;
	v->a[16073] = anon_sym_LT;
	v->a[16074] = anon_sym_GT;
	v->a[16075] = anon_sym_GT_GT;
	v->a[16076] = anon_sym_LT_AMP;
	v->a[16077] = anon_sym_GT_AMP;
	v->a[16078] = anon_sym_GT_PIPE;
	v->a[16079] = anon_sym_LT_GT;
	small_parse_table_804(v);
}

void	small_parse_table_804(t_small_parse_table_array *v)
{
	v->a[16080] = state(974);
	v->a[16081] = 7;
	v->a[16082] = sym_for_statement;
	v->a[16083] = sym_while_statement;
	v->a[16084] = sym_if_statement;
	v->a[16085] = sym_compound_statement;
	v->a[16086] = sym_subshell;
	v->a[16087] = sym_command;
	v->a[16088] = sym__variable_assignments;
	v->a[16089] = 6;
	v->a[16090] = actions(3);
	v->a[16091] = 1;
	v->a[16092] = sym_comment;
	v->a[16093] = actions(351);
	v->a[16094] = 1;
	v->a[16095] = sym_variable_name;
	v->a[16096] = actions(343);
	v->a[16097] = 2;
	v->a[16098] = sym__bare_dollar;
	v->a[16099] = ts_builtin_sym_end;
	small_parse_table_805(v);
}

/* EOF small_parse_table_160.c */
