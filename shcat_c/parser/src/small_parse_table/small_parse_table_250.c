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
	v->a[25000] = anon_sym_LT;
	v->a[25001] = anon_sym_GT;
	v->a[25002] = anon_sym_LT_LT;
	v->a[25003] = anon_sym_GT_GT;
	v->a[25004] = anon_sym_SEMI_SEMI;
	v->a[25005] = anon_sym_PIPE_AMP;
	v->a[25006] = anon_sym_AMP_GT;
	v->a[25007] = anon_sym_AMP_GT_GT;
	v->a[25008] = anon_sym_LT_AMP;
	v->a[25009] = anon_sym_GT_AMP;
	v->a[25010] = anon_sym_GT_PIPE;
	v->a[25011] = anon_sym_LT_AMP_DASH;
	v->a[25012] = anon_sym_GT_AMP_DASH;
	v->a[25013] = anon_sym_LT_LT_DASH;
	v->a[25014] = anon_sym_LT_LT_LT;
	v->a[25015] = 8;
	v->a[25016] = actions(3);
	v->a[25017] = 1;
	v->a[25018] = sym_comment;
	v->a[25019] = actions(3580);
	small_parse_table_1251(v);
}

void	small_parse_table_1251(t_small_parse_table_array *v)
{
	v->a[25020] = 1;
	v->a[25021] = anon_sym_DQUOTE;
	v->a[25022] = actions(3584);
	v->a[25023] = 1;
	v->a[25024] = sym_variable_name;
	v->a[25025] = state(2121);
	v->a[25026] = 1;
	v->a[25027] = sym_string;
	v->a[25028] = actions(3582);
	v->a[25029] = 2;
	v->a[25030] = aux_sym__simple_variable_name_token1;
	v->a[25031] = aux_sym__multiline_variable_name_token1;
	v->a[25032] = actions(1241);
	v->a[25033] = 3;
	v->a[25034] = sym_file_descriptor;
	v->a[25035] = sym_test_operator;
	v->a[25036] = sym__brace_start;
	v->a[25037] = actions(3578);
	v->a[25038] = 9;
	v->a[25039] = anon_sym_DASH;
	small_parse_table_1252(v);
}

void	small_parse_table_1252(t_small_parse_table_array *v)
{
	v->a[25040] = anon_sym_STAR;
	v->a[25041] = anon_sym_BANG;
	v->a[25042] = anon_sym_QMARK;
	v->a[25043] = anon_sym_DOLLAR;
	v->a[25044] = anon_sym_POUND;
	v->a[25045] = anon_sym_AT2;
	v->a[25046] = anon_sym_0;
	v->a[25047] = anon_sym__;
	v->a[25048] = actions(1239);
	v->a[25049] = 35;
	v->a[25050] = anon_sym_LPAREN_LPAREN;
	v->a[25051] = anon_sym_SEMI;
	v->a[25052] = anon_sym_PIPE_PIPE;
	v->a[25053] = anon_sym_AMP_AMP;
	v->a[25054] = anon_sym_PIPE;
	v->a[25055] = anon_sym_AMP;
	v->a[25056] = anon_sym_LT;
	v->a[25057] = anon_sym_GT;
	v->a[25058] = anon_sym_LT_LT;
	v->a[25059] = anon_sym_GT_GT;
	small_parse_table_1253(v);
}

void	small_parse_table_1253(t_small_parse_table_array *v)
{
	v->a[25060] = anon_sym_SEMI_SEMI;
	v->a[25061] = anon_sym_PIPE_AMP;
	v->a[25062] = anon_sym_AMP_GT;
	v->a[25063] = anon_sym_AMP_GT_GT;
	v->a[25064] = anon_sym_LT_AMP;
	v->a[25065] = anon_sym_GT_AMP;
	v->a[25066] = anon_sym_GT_PIPE;
	v->a[25067] = anon_sym_LT_AMP_DASH;
	v->a[25068] = anon_sym_GT_AMP_DASH;
	v->a[25069] = anon_sym_LT_LT_DASH;
	v->a[25070] = aux_sym_heredoc_redirect_token1;
	v->a[25071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25072] = anon_sym_DOLLAR_LBRACK;
	v->a[25073] = sym__special_character;
	v->a[25074] = sym_raw_string;
	v->a[25075] = sym_ansi_c_string;
	v->a[25076] = aux_sym_number_token1;
	v->a[25077] = aux_sym_number_token2;
	v->a[25078] = anon_sym_DOLLAR_LBRACE;
	v->a[25079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1254(v);
}

void	small_parse_table_1254(t_small_parse_table_array *v)
{
	v->a[25080] = anon_sym_BQUOTE;
	v->a[25081] = anon_sym_DOLLAR_BQUOTE;
	v->a[25082] = anon_sym_LT_LPAREN;
	v->a[25083] = anon_sym_GT_LPAREN;
	v->a[25084] = sym_word;
	v->a[25085] = 4;
	v->a[25086] = actions(71);
	v->a[25087] = 1;
	v->a[25088] = sym_comment;
	v->a[25089] = actions(2725);
	v->a[25090] = 1;
	v->a[25091] = ts_builtin_sym_end;
	v->a[25092] = actions(2717);
	v->a[25093] = 23;
	v->a[25094] = sym_file_descriptor;
	v->a[25095] = sym_variable_name;
	v->a[25096] = sym_test_operator;
	v->a[25097] = sym__brace_start;
	v->a[25098] = anon_sym_LPAREN_LPAREN;
	v->a[25099] = anon_sym_GT_GT;
	small_parse_table_1255(v);
}

/* EOF small_parse_table_250.c */
