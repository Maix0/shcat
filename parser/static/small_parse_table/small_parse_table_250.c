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
	v->a[25000] = actions(889);
	v->a[25001] = 1;
	v->a[25002] = anon_sym_BQUOTE;
	v->a[25003] = state(1345);
	v->a[25004] = 1;
	v->a[25005] = sym_concatenation;
	v->a[25006] = actions(877);
	v->a[25007] = 3;
	v->a[25008] = sym_raw_string;
	v->a[25009] = sym_number;
	v->a[25010] = sym_word;
	v->a[25011] = state(1173);
	v->a[25012] = 5;
	v->a[25013] = sym_arithmetic_expansion;
	v->a[25014] = sym_string;
	v->a[25015] = sym_simple_expansion;
	v->a[25016] = sym_expansion;
	v->a[25017] = sym_command_substitution;
	v->a[25018] = actions(758);
	v->a[25019] = 20;
	small_parse_table_1251(v);
}

void	small_parse_table_1251(t_small_parse_table_array *v)
{
	v->a[25020] = anon_sym_esac;
	v->a[25021] = anon_sym_PIPE;
	v->a[25022] = anon_sym_SEMI_SEMI;
	v->a[25023] = anon_sym_AMP_AMP;
	v->a[25024] = anon_sym_PIPE_PIPE;
	v->a[25025] = anon_sym_LT;
	v->a[25026] = anon_sym_GT;
	v->a[25027] = anon_sym_GT_GT;
	v->a[25028] = anon_sym_AMP_GT;
	v->a[25029] = anon_sym_AMP_GT_GT;
	v->a[25030] = anon_sym_LT_AMP;
	v->a[25031] = anon_sym_GT_AMP;
	v->a[25032] = anon_sym_GT_PIPE;
	v->a[25033] = anon_sym_LT_AMP_DASH;
	v->a[25034] = anon_sym_GT_AMP_DASH;
	v->a[25035] = anon_sym_LT_LT;
	v->a[25036] = anon_sym_LT_LT_DASH;
	v->a[25037] = aux_sym_heredoc_redirect_token1;
	v->a[25038] = anon_sym_AMP;
	v->a[25039] = anon_sym_SEMI;
	small_parse_table_1252(v);
}

void	small_parse_table_1252(t_small_parse_table_array *v)
{
	v->a[25040] = 12;
	v->a[25041] = actions(3);
	v->a[25042] = 1;
	v->a[25043] = sym_comment;
	v->a[25044] = actions(548);
	v->a[25045] = 1;
	v->a[25046] = sym_file_descriptor;
	v->a[25047] = actions(718);
	v->a[25048] = 1;
	v->a[25049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25050] = actions(720);
	v->a[25051] = 1;
	v->a[25052] = anon_sym_DOLLAR;
	v->a[25053] = actions(722);
	v->a[25054] = 1;
	v->a[25055] = anon_sym_DQUOTE;
	v->a[25056] = actions(724);
	v->a[25057] = 1;
	v->a[25058] = anon_sym_DOLLAR_LBRACE;
	v->a[25059] = actions(726);
	small_parse_table_1253(v);
}

void	small_parse_table_1253(t_small_parse_table_array *v)
{
	v->a[25060] = 1;
	v->a[25061] = anon_sym_DOLLAR_LPAREN;
	v->a[25062] = actions(728);
	v->a[25063] = 1;
	v->a[25064] = anon_sym_BQUOTE;
	v->a[25065] = state(263);
	v->a[25066] = 2;
	v->a[25067] = sym_concatenation;
	v->a[25068] = aux_sym_for_statement_repeat1;
	v->a[25069] = actions(873);
	v->a[25070] = 3;
	v->a[25071] = sym_raw_string;
	v->a[25072] = sym_number;
	v->a[25073] = sym_word;
	v->a[25074] = state(647);
	v->a[25075] = 5;
	v->a[25076] = sym_arithmetic_expansion;
	v->a[25077] = sym_string;
	v->a[25078] = sym_simple_expansion;
	v->a[25079] = sym_expansion;
	small_parse_table_1254(v);
}

void	small_parse_table_1254(t_small_parse_table_array *v)
{
	v->a[25080] = sym_command_substitution;
	v->a[25081] = actions(546);
	v->a[25082] = 19;
	v->a[25083] = anon_sym_PIPE;
	v->a[25084] = anon_sym_SEMI_SEMI;
	v->a[25085] = anon_sym_AMP_AMP;
	v->a[25086] = anon_sym_PIPE_PIPE;
	v->a[25087] = anon_sym_LT;
	v->a[25088] = anon_sym_GT;
	v->a[25089] = anon_sym_GT_GT;
	v->a[25090] = anon_sym_AMP_GT;
	v->a[25091] = anon_sym_AMP_GT_GT;
	v->a[25092] = anon_sym_LT_AMP;
	v->a[25093] = anon_sym_GT_AMP;
	v->a[25094] = anon_sym_GT_PIPE;
	v->a[25095] = anon_sym_LT_AMP_DASH;
	v->a[25096] = anon_sym_GT_AMP_DASH;
	v->a[25097] = anon_sym_LT_LT;
	v->a[25098] = anon_sym_LT_LT_DASH;
	v->a[25099] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1255(v);
}

/* EOF small_parse_table_250.c */
