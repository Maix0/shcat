/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_300.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1500(t_small_parse_table_array *v)
{
	v->a[30000] = actions(1243);
	v->a[30001] = 1;
	v->a[30002] = anon_sym_esac;
	v->a[30003] = state(518);
	v->a[30004] = 1;
	v->a[30005] = aux_sym_case_statement_repeat1;
	v->a[30006] = state(1232);
	v->a[30007] = 1;
	v->a[30008] = sym_case_item;
	v->a[30009] = state(1712);
	v->a[30010] = 1;
	v->a[30011] = sym__case_item_last;
	v->a[30012] = state(1538);
	v->a[30013] = 2;
	v->a[30014] = sym_concatenation;
	v->a[30015] = sym__extglob_blob;
	v->a[30016] = actions(774);
	v->a[30017] = 3;
	v->a[30018] = sym_raw_string;
	v->a[30019] = sym_number;
	small_parse_table_1501(v);
}

void	small_parse_table_1501(t_small_parse_table_array *v)
{
	v->a[30020] = sym_word;
	v->a[30021] = state(1468);
	v->a[30022] = 5;
	v->a[30023] = sym_arithmetic_expansion;
	v->a[30024] = sym_string;
	v->a[30025] = sym_simple_expansion;
	v->a[30026] = sym_expansion;
	v->a[30027] = sym_command_substitution;
	v->a[30028] = 11;
	v->a[30029] = actions(3);
	v->a[30030] = 1;
	v->a[30031] = sym_comment;
	v->a[30032] = actions(655);
	v->a[30033] = 1;
	v->a[30034] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30035] = actions(657);
	v->a[30036] = 1;
	v->a[30037] = anon_sym_DOLLAR;
	v->a[30038] = actions(659);
	v->a[30039] = 1;
	small_parse_table_1502(v);
}

void	small_parse_table_1502(t_small_parse_table_array *v)
{
	v->a[30040] = anon_sym_DQUOTE;
	v->a[30041] = actions(661);
	v->a[30042] = 1;
	v->a[30043] = anon_sym_DOLLAR_LBRACE;
	v->a[30044] = actions(663);
	v->a[30045] = 1;
	v->a[30046] = anon_sym_DOLLAR_LPAREN;
	v->a[30047] = actions(665);
	v->a[30048] = 1;
	v->a[30049] = anon_sym_BQUOTE;
	v->a[30050] = state(500);
	v->a[30051] = 2;
	v->a[30052] = sym_concatenation;
	v->a[30053] = aux_sym_for_statement_repeat1;
	v->a[30054] = actions(1245);
	v->a[30055] = 3;
	v->a[30056] = sym_raw_string;
	v->a[30057] = sym_number;
	v->a[30058] = sym_word;
	v->a[30059] = state(684);
	small_parse_table_1503(v);
}

void	small_parse_table_1503(t_small_parse_table_array *v)
{
	v->a[30060] = 5;
	v->a[30061] = sym_arithmetic_expansion;
	v->a[30062] = sym_string;
	v->a[30063] = sym_simple_expansion;
	v->a[30064] = sym_expansion;
	v->a[30065] = sym_command_substitution;
	v->a[30066] = actions(421);
	v->a[30067] = 6;
	v->a[30068] = anon_sym_AMP_AMP;
	v->a[30069] = anon_sym_PIPE_PIPE;
	v->a[30070] = anon_sym_LT;
	v->a[30071] = anon_sym_GT;
	v->a[30072] = anon_sym_GT_GT;
	v->a[30073] = aux_sym_heredoc_redirect_token1;
	v->a[30074] = 4;
	v->a[30075] = actions(3);
	v->a[30076] = 1;
	v->a[30077] = sym_comment;
	v->a[30078] = actions(1044);
	v->a[30079] = 1;
	small_parse_table_1504(v);
}

void	small_parse_table_1504(t_small_parse_table_array *v)
{
	v->a[30080] = sym_variable_name;
	v->a[30081] = actions(1185);
	v->a[30082] = 1;
	v->a[30083] = ts_builtin_sym_end;
	v->a[30084] = actions(1040);
	v->a[30085] = 20;
	v->a[30086] = anon_sym_for;
	v->a[30087] = anon_sym_while;
	v->a[30088] = anon_sym_until;
	v->a[30089] = anon_sym_if;
	v->a[30090] = anon_sym_case;
	v->a[30091] = anon_sym_LPAREN;
	v->a[30092] = anon_sym_LBRACE;
	v->a[30093] = anon_sym_BANG;
	v->a[30094] = anon_sym_LT;
	v->a[30095] = anon_sym_GT;
	v->a[30096] = anon_sym_GT_GT;
	v->a[30097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30098] = anon_sym_DOLLAR;
	v->a[30099] = anon_sym_DQUOTE;
	small_parse_table_1505(v);
}

/* EOF small_parse_table_300.c */
