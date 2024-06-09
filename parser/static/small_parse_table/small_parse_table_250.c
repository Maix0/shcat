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
	v->a[25000] = anon_sym_DOLLAR;
	v->a[25001] = anon_sym_DQUOTE;
	v->a[25002] = sym_raw_string;
	v->a[25003] = aux_sym_number_token1;
	v->a[25004] = aux_sym_number_token2;
	v->a[25005] = anon_sym_DOLLAR_LBRACE;
	v->a[25006] = anon_sym_DOLLAR_LPAREN;
	v->a[25007] = anon_sym_BQUOTE;
	v->a[25008] = sym_word;
	v->a[25009] = anon_sym_SEMI;
	v->a[25010] = 15;
	v->a[25011] = actions(3);
	v->a[25012] = 1;
	v->a[25013] = sym_comment;
	v->a[25014] = actions(485);
	v->a[25015] = 1;
	v->a[25016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25017] = actions(487);
	v->a[25018] = 1;
	v->a[25019] = anon_sym_DOLLAR;
	small_parse_table_1251(v);
}

void	small_parse_table_1251(t_small_parse_table_array *v)
{
	v->a[25020] = actions(489);
	v->a[25021] = 1;
	v->a[25022] = anon_sym_DQUOTE;
	v->a[25023] = actions(491);
	v->a[25024] = 1;
	v->a[25025] = aux_sym_number_token1;
	v->a[25026] = actions(493);
	v->a[25027] = 1;
	v->a[25028] = aux_sym_number_token2;
	v->a[25029] = actions(495);
	v->a[25030] = 1;
	v->a[25031] = anon_sym_DOLLAR_LBRACE;
	v->a[25032] = actions(497);
	v->a[25033] = 1;
	v->a[25034] = anon_sym_DOLLAR_LPAREN;
	v->a[25035] = actions(501);
	v->a[25036] = 1;
	v->a[25037] = sym__bare_dollar;
	v->a[25038] = actions(559);
	v->a[25039] = 1;
	small_parse_table_1252(v);
}

void	small_parse_table_1252(t_small_parse_table_array *v)
{
	v->a[25040] = sym_file_descriptor;
	v->a[25041] = state(224);
	v->a[25042] = 1;
	v->a[25043] = aux_sym_command_repeat2;
	v->a[25044] = state(753);
	v->a[25045] = 1;
	v->a[25046] = sym_concatenation;
	v->a[25047] = actions(551);
	v->a[25048] = 2;
	v->a[25049] = sym_raw_string;
	v->a[25050] = sym_word;
	v->a[25051] = state(452);
	v->a[25052] = 6;
	v->a[25053] = sym_arithmetic_expansion;
	v->a[25054] = sym_string;
	v->a[25055] = sym_number;
	v->a[25056] = sym_simple_expansion;
	v->a[25057] = sym_expansion;
	v->a[25058] = sym_command_substitution;
	v->a[25059] = actions(557);
	small_parse_table_1253(v);
}

void	small_parse_table_1253(t_small_parse_table_array *v)
{
	v->a[25060] = 20;
	v->a[25061] = anon_sym_PIPE;
	v->a[25062] = anon_sym_SEMI_SEMI;
	v->a[25063] = anon_sym_AMP_AMP;
	v->a[25064] = anon_sym_PIPE_PIPE;
	v->a[25065] = anon_sym_LT;
	v->a[25066] = anon_sym_GT;
	v->a[25067] = anon_sym_GT_GT;
	v->a[25068] = anon_sym_AMP_GT;
	v->a[25069] = anon_sym_AMP_GT_GT;
	v->a[25070] = anon_sym_LT_AMP;
	v->a[25071] = anon_sym_GT_AMP;
	v->a[25072] = anon_sym_GT_PIPE;
	v->a[25073] = anon_sym_LT_AMP_DASH;
	v->a[25074] = anon_sym_GT_AMP_DASH;
	v->a[25075] = anon_sym_LT_LT;
	v->a[25076] = anon_sym_LT_LT_DASH;
	v->a[25077] = aux_sym_heredoc_redirect_token1;
	v->a[25078] = anon_sym_AMP;
	v->a[25079] = anon_sym_BQUOTE;
	small_parse_table_1254(v);
}

void	small_parse_table_1254(t_small_parse_table_array *v)
{
	v->a[25080] = anon_sym_SEMI;
	v->a[25081] = 5;
	v->a[25082] = actions(3);
	v->a[25083] = 1;
	v->a[25084] = sym_comment;
	v->a[25085] = state(702);
	v->a[25086] = 1;
	v->a[25087] = sym_concatenation;
	v->a[25088] = actions(755);
	v->a[25089] = 2;
	v->a[25090] = sym_file_descriptor;
	v->a[25091] = sym_variable_name;
	v->a[25092] = state(376);
	v->a[25093] = 6;
	v->a[25094] = sym_arithmetic_expansion;
	v->a[25095] = sym_string;
	v->a[25096] = sym_number;
	v->a[25097] = sym_simple_expansion;
	v->a[25098] = sym_expansion;
	v->a[25099] = sym_command_substitution;
	small_parse_table_1255(v);
}

/* EOF small_parse_table_250.c */
