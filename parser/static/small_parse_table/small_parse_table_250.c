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
	v->a[25000] = aux_sym__simple_variable_name_token1;
	v->a[25001] = aux_sym__multiline_variable_name_token1;
	v->a[25002] = actions(902);
	v->a[25003] = 9;
	v->a[25004] = anon_sym_BANG;
	v->a[25005] = anon_sym_DASH;
	v->a[25006] = anon_sym_STAR;
	v->a[25007] = anon_sym_QMARK;
	v->a[25008] = anon_sym_DOLLAR;
	v->a[25009] = anon_sym_POUND;
	v->a[25010] = anon_sym_AT;
	v->a[25011] = anon_sym_0;
	v->a[25012] = anon_sym__;
	v->a[25013] = actions(381);
	v->a[25014] = 23;
	v->a[25015] = anon_sym_PIPE;
	v->a[25016] = anon_sym_AMP_AMP;
	v->a[25017] = anon_sym_PIPE_PIPE;
	v->a[25018] = anon_sym_LT;
	v->a[25019] = anon_sym_GT;
	small_parse_table_1251(v);
}

void	small_parse_table_1251(t_small_parse_table_array *v)
{
	v->a[25020] = anon_sym_GT_GT;
	v->a[25021] = anon_sym_AMP_GT;
	v->a[25022] = anon_sym_AMP_GT_GT;
	v->a[25023] = anon_sym_LT_AMP;
	v->a[25024] = anon_sym_GT_AMP;
	v->a[25025] = anon_sym_GT_PIPE;
	v->a[25026] = anon_sym_LT_AMP_DASH;
	v->a[25027] = anon_sym_GT_AMP_DASH;
	v->a[25028] = anon_sym_LT_LT;
	v->a[25029] = anon_sym_LT_LT_DASH;
	v->a[25030] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25031] = anon_sym_DQUOTE;
	v->a[25032] = sym_raw_string;
	v->a[25033] = sym_number;
	v->a[25034] = anon_sym_DOLLAR_LBRACE;
	v->a[25035] = anon_sym_DOLLAR_LPAREN;
	v->a[25036] = anon_sym_BQUOTE;
	v->a[25037] = sym_word;
	v->a[25038] = 12;
	v->a[25039] = actions(3);
	small_parse_table_1252(v);
}

void	small_parse_table_1252(t_small_parse_table_array *v)
{
	v->a[25040] = 1;
	v->a[25041] = sym_comment;
	v->a[25042] = actions(717);
	v->a[25043] = 1;
	v->a[25044] = sym_file_descriptor;
	v->a[25045] = actions(910);
	v->a[25046] = 1;
	v->a[25047] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25048] = actions(912);
	v->a[25049] = 1;
	v->a[25050] = anon_sym_DOLLAR;
	v->a[25051] = actions(914);
	v->a[25052] = 1;
	v->a[25053] = anon_sym_DQUOTE;
	v->a[25054] = actions(916);
	v->a[25055] = 1;
	v->a[25056] = anon_sym_DOLLAR_LBRACE;
	v->a[25057] = actions(918);
	v->a[25058] = 1;
	v->a[25059] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1253(v);
}

void	small_parse_table_1253(t_small_parse_table_array *v)
{
	v->a[25060] = actions(920);
	v->a[25061] = 1;
	v->a[25062] = anon_sym_BQUOTE;
	v->a[25063] = state(1472);
	v->a[25064] = 1;
	v->a[25065] = sym_concatenation;
	v->a[25066] = actions(908);
	v->a[25067] = 3;
	v->a[25068] = sym_raw_string;
	v->a[25069] = sym_number;
	v->a[25070] = sym_word;
	v->a[25071] = state(1262);
	v->a[25072] = 5;
	v->a[25073] = sym_arithmetic_expansion;
	v->a[25074] = sym_string;
	v->a[25075] = sym_simple_expansion;
	v->a[25076] = sym_expansion;
	v->a[25077] = sym_command_substitution;
	v->a[25078] = actions(719);
	v->a[25079] = 20;
	small_parse_table_1254(v);
}

void	small_parse_table_1254(t_small_parse_table_array *v)
{
	v->a[25080] = anon_sym_esac;
	v->a[25081] = anon_sym_PIPE;
	v->a[25082] = anon_sym_SEMI_SEMI;
	v->a[25083] = anon_sym_AMP_AMP;
	v->a[25084] = anon_sym_PIPE_PIPE;
	v->a[25085] = anon_sym_LT;
	v->a[25086] = anon_sym_GT;
	v->a[25087] = anon_sym_GT_GT;
	v->a[25088] = anon_sym_AMP_GT;
	v->a[25089] = anon_sym_AMP_GT_GT;
	v->a[25090] = anon_sym_LT_AMP;
	v->a[25091] = anon_sym_GT_AMP;
	v->a[25092] = anon_sym_GT_PIPE;
	v->a[25093] = anon_sym_LT_AMP_DASH;
	v->a[25094] = anon_sym_GT_AMP_DASH;
	v->a[25095] = anon_sym_LT_LT;
	v->a[25096] = anon_sym_LT_LT_DASH;
	v->a[25097] = aux_sym_heredoc_redirect_token1;
	v->a[25098] = anon_sym_AMP;
	v->a[25099] = anon_sym_SEMI;
	small_parse_table_1255(v);
}

/* EOF small_parse_table_250.c */
