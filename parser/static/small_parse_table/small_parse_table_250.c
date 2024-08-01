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
	v->a[25000] = 1;
	v->a[25001] = sym_comment;
	v->a[25002] = actions(1044);
	v->a[25003] = 1;
	v->a[25004] = sym_variable_name;
	v->a[25005] = actions(1042);
	v->a[25006] = 2;
	v->a[25007] = anon_sym_RPAREN;
	v->a[25008] = anon_sym_SEMI_SEMI;
	v->a[25009] = actions(1040);
	v->a[25010] = 20;
	v->a[25011] = anon_sym_for;
	v->a[25012] = anon_sym_while;
	v->a[25013] = anon_sym_until;
	v->a[25014] = anon_sym_if;
	v->a[25015] = anon_sym_case;
	v->a[25016] = anon_sym_LPAREN;
	v->a[25017] = anon_sym_LBRACE;
	v->a[25018] = anon_sym_BANG;
	v->a[25019] = anon_sym_LT;
	small_parse_table_1251(v);
}

void	small_parse_table_1251(t_small_parse_table_array *v)
{
	v->a[25020] = anon_sym_GT;
	v->a[25021] = anon_sym_GT_GT;
	v->a[25022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25023] = anon_sym_DOLLAR;
	v->a[25024] = anon_sym_DQUOTE;
	v->a[25025] = sym_raw_string;
	v->a[25026] = sym_number;
	v->a[25027] = anon_sym_DOLLAR_LBRACE;
	v->a[25028] = anon_sym_DOLLAR_LPAREN;
	v->a[25029] = anon_sym_BQUOTE;
	v->a[25030] = sym_word;
	v->a[25031] = 5;
	v->a[25032] = actions(3);
	v->a[25033] = 1;
	v->a[25034] = sym_comment;
	v->a[25035] = actions(1110);
	v->a[25036] = 1;
	v->a[25037] = aux_sym_concatenation_token1;
	v->a[25038] = actions(1138);
	v->a[25039] = 1;
	small_parse_table_1252(v);
}

void	small_parse_table_1252(t_small_parse_table_array *v)
{
	v->a[25040] = sym__concat;
	v->a[25041] = state(331);
	v->a[25042] = 1;
	v->a[25043] = aux_sym_concatenation_repeat1;
	v->a[25044] = actions(880);
	v->a[25045] = 20;
	v->a[25046] = anon_sym_esac;
	v->a[25047] = anon_sym_PIPE;
	v->a[25048] = anon_sym_SEMI_SEMI;
	v->a[25049] = anon_sym_AMP_AMP;
	v->a[25050] = anon_sym_PIPE_PIPE;
	v->a[25051] = anon_sym_LT;
	v->a[25052] = anon_sym_GT;
	v->a[25053] = anon_sym_GT_GT;
	v->a[25054] = anon_sym_LT_LT;
	v->a[25055] = aux_sym_heredoc_redirect_token1;
	v->a[25056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25057] = anon_sym_DOLLAR;
	v->a[25058] = anon_sym_DQUOTE;
	v->a[25059] = sym_raw_string;
	small_parse_table_1253(v);
}

void	small_parse_table_1253(t_small_parse_table_array *v)
{
	v->a[25060] = sym_number;
	v->a[25061] = anon_sym_DOLLAR_LBRACE;
	v->a[25062] = anon_sym_DOLLAR_LPAREN;
	v->a[25063] = anon_sym_BQUOTE;
	v->a[25064] = sym_word;
	v->a[25065] = anon_sym_SEMI;
	v->a[25066] = 3;
	v->a[25067] = actions(3);
	v->a[25068] = 1;
	v->a[25069] = sym_comment;
	v->a[25070] = actions(1108);
	v->a[25071] = 3;
	v->a[25072] = sym__concat;
	v->a[25073] = sym__bare_dollar;
	v->a[25074] = ts_builtin_sym_end;
	v->a[25075] = actions(1106);
	v->a[25076] = 20;
	v->a[25077] = anon_sym_PIPE;
	v->a[25078] = anon_sym_SEMI_SEMI;
	v->a[25079] = anon_sym_AMP_AMP;
	small_parse_table_1254(v);
}

void	small_parse_table_1254(t_small_parse_table_array *v)
{
	v->a[25080] = anon_sym_PIPE_PIPE;
	v->a[25081] = anon_sym_LT;
	v->a[25082] = anon_sym_GT;
	v->a[25083] = anon_sym_GT_GT;
	v->a[25084] = anon_sym_LT_LT;
	v->a[25085] = aux_sym_heredoc_redirect_token1;
	v->a[25086] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25087] = aux_sym_concatenation_token1;
	v->a[25088] = anon_sym_DOLLAR;
	v->a[25089] = anon_sym_DQUOTE;
	v->a[25090] = sym_raw_string;
	v->a[25091] = sym_number;
	v->a[25092] = anon_sym_DOLLAR_LBRACE;
	v->a[25093] = anon_sym_DOLLAR_LPAREN;
	v->a[25094] = anon_sym_BQUOTE;
	v->a[25095] = sym_word;
	v->a[25096] = anon_sym_SEMI;
	v->a[25097] = 9;
	v->a[25098] = actions(3);
	v->a[25099] = 1;
	small_parse_table_1255(v);
}

/* EOF small_parse_table_250.c */
