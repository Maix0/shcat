/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_250.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1250(t_small_parse_table_array *v)
{
	v->a[25000] = sym_comment;
	v->a[25001] = actions(17);
	v->a[25002] = 1;
	v->a[25003] = anon_sym_LPAREN;
	v->a[25004] = actions(53);
	v->a[25005] = 1;
	v->a[25006] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25007] = actions(55);
	v->a[25008] = 1;
	v->a[25009] = anon_sym_DOLLAR;
	v->a[25010] = actions(57);
	v->a[25011] = 1;
	v->a[25012] = anon_sym_DQUOTE;
	v->a[25013] = actions(61);
	v->a[25014] = 1;
	v->a[25015] = anon_sym_DOLLAR_LBRACE;
	v->a[25016] = actions(63);
	v->a[25017] = 1;
	v->a[25018] = anon_sym_DOLLAR_LPAREN;
	v->a[25019] = actions(65);
	small_parse_table_1251(v);
}

void	small_parse_table_1251(t_small_parse_table_array *v)
{
	v->a[25020] = 1;
	v->a[25021] = anon_sym_BQUOTE;
	v->a[25022] = actions(67);
	v->a[25023] = 1;
	v->a[25024] = sym_variable_name;
	v->a[25025] = state(271);
	v->a[25026] = 1;
	v->a[25027] = sym_command_name;
	v->a[25028] = state(482);
	v->a[25029] = 1;
	v->a[25030] = aux_sym_command_repeat1;
	v->a[25031] = state(602);
	v->a[25032] = 1;
	v->a[25033] = sym_concatenation;
	v->a[25034] = state(607);
	v->a[25035] = 1;
	v->a[25036] = sym_variable_assignment;
	v->a[25037] = state(1007);
	v->a[25038] = 1;
	v->a[25039] = sym_subshell;
	small_parse_table_1252(v);
}

void	small_parse_table_1252(t_small_parse_table_array *v)
{
	v->a[25040] = state(1009);
	v->a[25041] = 1;
	v->a[25042] = sym_command;
	v->a[25043] = state(1073);
	v->a[25044] = 1;
	v->a[25045] = sym_file_redirect;
	v->a[25046] = actions(59);
	v->a[25047] = 3;
	v->a[25048] = sym_raw_string;
	v->a[25049] = sym_number;
	v->a[25050] = sym_word;
	v->a[25051] = state(425);
	v->a[25052] = 5;
	v->a[25053] = sym_arithmetic_expansion;
	v->a[25054] = sym_string;
	v->a[25055] = sym_simple_expansion;
	v->a[25056] = sym_expansion;
	v->a[25057] = sym_command_substitution;
	v->a[25058] = actions(965);
	v->a[25059] = 7;
	small_parse_table_1253(v);
}

void	small_parse_table_1253(t_small_parse_table_array *v)
{
	v->a[25060] = anon_sym_LT;
	v->a[25061] = anon_sym_GT;
	v->a[25062] = anon_sym_GT_GT;
	v->a[25063] = anon_sym_LT_AMP;
	v->a[25064] = anon_sym_GT_AMP;
	v->a[25065] = anon_sym_GT_PIPE;
	v->a[25066] = anon_sym_LT_GT;
	v->a[25067] = 7;
	v->a[25068] = actions(3);
	v->a[25069] = 1;
	v->a[25070] = sym_comment;
	v->a[25071] = actions(969);
	v->a[25072] = 1;
	v->a[25073] = anon_sym_LPAREN;
	v->a[25074] = actions(971);
	v->a[25075] = 1;
	v->a[25076] = aux_sym_concatenation_token1;
	v->a[25077] = actions(973);
	v->a[25078] = 1;
	v->a[25079] = sym__concat;
	small_parse_table_1254(v);
}

void	small_parse_table_1254(t_small_parse_table_array *v)
{
	v->a[25080] = actions(975);
	v->a[25081] = 1;
	v->a[25082] = sym__bare_dollar;
	v->a[25083] = state(334);
	v->a[25084] = 1;
	v->a[25085] = aux_sym_concatenation_repeat1;
	v->a[25086] = actions(967);
	v->a[25087] = 25;
	v->a[25088] = anon_sym_esac;
	v->a[25089] = anon_sym_PIPE;
	v->a[25090] = anon_sym_SEMI_SEMI;
	v->a[25091] = anon_sym_AMP_AMP;
	v->a[25092] = anon_sym_PIPE_PIPE;
	v->a[25093] = anon_sym_LT;
	v->a[25094] = anon_sym_GT;
	v->a[25095] = anon_sym_GT_GT;
	v->a[25096] = anon_sym_LT_AMP;
	v->a[25097] = anon_sym_GT_AMP;
	v->a[25098] = anon_sym_GT_PIPE;
	v->a[25099] = anon_sym_LT_GT;
	small_parse_table_1255(v);
}

/* EOF small_parse_table_250.c */
