/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_240.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1200(t_small_parse_table_array *v)
{
	v->a[24000] = anon_sym_DOLLAR_LBRACE;
	v->a[24001] = anon_sym_DOLLAR_LPAREN;
	v->a[24002] = anon_sym_BQUOTE;
	v->a[24003] = sym_word;
	v->a[24004] = anon_sym_SEMI;
	v->a[24005] = 4;
	v->a[24006] = actions(3);
	v->a[24007] = 1;
	v->a[24008] = sym_comment;
	v->a[24009] = actions(1044);
	v->a[24010] = 1;
	v->a[24011] = sym_variable_name;
	v->a[24012] = actions(1042);
	v->a[24013] = 2;
	v->a[24014] = anon_sym_esac;
	v->a[24015] = anon_sym_SEMI_SEMI;
	v->a[24016] = actions(1040);
	v->a[24017] = 20;
	v->a[24018] = anon_sym_for;
	v->a[24019] = anon_sym_while;
	small_parse_table_1201(v);
}

void	small_parse_table_1201(t_small_parse_table_array *v)
{
	v->a[24020] = anon_sym_until;
	v->a[24021] = anon_sym_if;
	v->a[24022] = anon_sym_case;
	v->a[24023] = anon_sym_LPAREN;
	v->a[24024] = anon_sym_LBRACE;
	v->a[24025] = anon_sym_BANG;
	v->a[24026] = anon_sym_LT;
	v->a[24027] = anon_sym_GT;
	v->a[24028] = anon_sym_GT_GT;
	v->a[24029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24030] = anon_sym_DOLLAR;
	v->a[24031] = anon_sym_DQUOTE;
	v->a[24032] = sym_raw_string;
	v->a[24033] = sym_number;
	v->a[24034] = anon_sym_DOLLAR_LBRACE;
	v->a[24035] = anon_sym_DOLLAR_LPAREN;
	v->a[24036] = anon_sym_BQUOTE;
	v->a[24037] = sym_word;
	v->a[24038] = 5;
	v->a[24039] = actions(3);
	small_parse_table_1202(v);
}

void	small_parse_table_1202(t_small_parse_table_array *v)
{
	v->a[24040] = 1;
	v->a[24041] = sym_comment;
	v->a[24042] = actions(1110);
	v->a[24043] = 1;
	v->a[24044] = aux_sym_concatenation_token1;
	v->a[24045] = actions(1112);
	v->a[24046] = 1;
	v->a[24047] = sym__concat;
	v->a[24048] = state(337);
	v->a[24049] = 1;
	v->a[24050] = aux_sym_concatenation_repeat1;
	v->a[24051] = actions(923);
	v->a[24052] = 20;
	v->a[24053] = anon_sym_esac;
	v->a[24054] = anon_sym_PIPE;
	v->a[24055] = anon_sym_SEMI_SEMI;
	v->a[24056] = anon_sym_AMP_AMP;
	v->a[24057] = anon_sym_PIPE_PIPE;
	v->a[24058] = anon_sym_LT;
	v->a[24059] = anon_sym_GT;
	small_parse_table_1203(v);
}

void	small_parse_table_1203(t_small_parse_table_array *v)
{
	v->a[24060] = anon_sym_GT_GT;
	v->a[24061] = anon_sym_LT_LT;
	v->a[24062] = aux_sym_heredoc_redirect_token1;
	v->a[24063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24064] = anon_sym_DOLLAR;
	v->a[24065] = anon_sym_DQUOTE;
	v->a[24066] = sym_raw_string;
	v->a[24067] = sym_number;
	v->a[24068] = anon_sym_DOLLAR_LBRACE;
	v->a[24069] = anon_sym_DOLLAR_LPAREN;
	v->a[24070] = anon_sym_BQUOTE;
	v->a[24071] = sym_word;
	v->a[24072] = anon_sym_SEMI;
	v->a[24073] = 4;
	v->a[24074] = actions(3);
	v->a[24075] = 1;
	v->a[24076] = sym_comment;
	v->a[24077] = actions(1044);
	v->a[24078] = 1;
	v->a[24079] = sym_variable_name;
	small_parse_table_1204(v);
}

void	small_parse_table_1204(t_small_parse_table_array *v)
{
	v->a[24080] = actions(1042);
	v->a[24081] = 2;
	v->a[24082] = anon_sym_esac;
	v->a[24083] = anon_sym_SEMI_SEMI;
	v->a[24084] = actions(1040);
	v->a[24085] = 20;
	v->a[24086] = anon_sym_for;
	v->a[24087] = anon_sym_while;
	v->a[24088] = anon_sym_until;
	v->a[24089] = anon_sym_if;
	v->a[24090] = anon_sym_case;
	v->a[24091] = anon_sym_LPAREN;
	v->a[24092] = anon_sym_LBRACE;
	v->a[24093] = anon_sym_BANG;
	v->a[24094] = anon_sym_LT;
	v->a[24095] = anon_sym_GT;
	v->a[24096] = anon_sym_GT_GT;
	v->a[24097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24098] = anon_sym_DOLLAR;
	v->a[24099] = anon_sym_DQUOTE;
	small_parse_table_1205(v);
}

/* EOF small_parse_table_240.c */
