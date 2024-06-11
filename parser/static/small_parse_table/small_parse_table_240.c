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
	v->a[24000] = sym_concatenation;
	v->a[24001] = aux_sym_for_statement_repeat1;
	v->a[24002] = actions(747);
	v->a[24003] = 3;
	v->a[24004] = sym_raw_string;
	v->a[24005] = sym_number;
	v->a[24006] = sym_word;
	v->a[24007] = state(595);
	v->a[24008] = 5;
	v->a[24009] = sym_arithmetic_expansion;
	v->a[24010] = sym_string;
	v->a[24011] = sym_simple_expansion;
	v->a[24012] = sym_expansion;
	v->a[24013] = sym_command_substitution;
	v->a[24014] = actions(541);
	v->a[24015] = 20;
	v->a[24016] = anon_sym_PIPE;
	v->a[24017] = anon_sym_RPAREN;
	v->a[24018] = anon_sym_SEMI_SEMI;
	v->a[24019] = anon_sym_AMP_AMP;
	small_parse_table_1201(v);
}

void	small_parse_table_1201(t_small_parse_table_array *v)
{
	v->a[24020] = anon_sym_PIPE_PIPE;
	v->a[24021] = anon_sym_LT;
	v->a[24022] = anon_sym_GT;
	v->a[24023] = anon_sym_GT_GT;
	v->a[24024] = anon_sym_AMP_GT;
	v->a[24025] = anon_sym_AMP_GT_GT;
	v->a[24026] = anon_sym_LT_AMP;
	v->a[24027] = anon_sym_GT_AMP;
	v->a[24028] = anon_sym_GT_PIPE;
	v->a[24029] = anon_sym_LT_AMP_DASH;
	v->a[24030] = anon_sym_GT_AMP_DASH;
	v->a[24031] = anon_sym_LT_LT;
	v->a[24032] = anon_sym_LT_LT_DASH;
	v->a[24033] = aux_sym_heredoc_redirect_token1;
	v->a[24034] = anon_sym_AMP;
	v->a[24035] = anon_sym_SEMI;
	v->a[24036] = 12;
	v->a[24037] = actions(3);
	v->a[24038] = 1;
	v->a[24039] = sym_comment;
	small_parse_table_1202(v);
}

void	small_parse_table_1202(t_small_parse_table_array *v)
{
	v->a[24040] = actions(608);
	v->a[24041] = 1;
	v->a[24042] = sym_file_descriptor;
	v->a[24043] = actions(749);
	v->a[24044] = 1;
	v->a[24045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24046] = actions(751);
	v->a[24047] = 1;
	v->a[24048] = anon_sym_DOLLAR;
	v->a[24049] = actions(753);
	v->a[24050] = 1;
	v->a[24051] = anon_sym_DQUOTE;
	v->a[24052] = actions(755);
	v->a[24053] = 1;
	v->a[24054] = anon_sym_DOLLAR_LBRACE;
	v->a[24055] = actions(757);
	v->a[24056] = 1;
	v->a[24057] = anon_sym_DOLLAR_LPAREN;
	v->a[24058] = actions(759);
	v->a[24059] = 1;
	small_parse_table_1203(v);
}

void	small_parse_table_1203(t_small_parse_table_array *v)
{
	v->a[24060] = anon_sym_BQUOTE;
	v->a[24061] = state(236);
	v->a[24062] = 2;
	v->a[24063] = sym_concatenation;
	v->a[24064] = aux_sym_for_statement_repeat1;
	v->a[24065] = actions(747);
	v->a[24066] = 3;
	v->a[24067] = sym_raw_string;
	v->a[24068] = sym_number;
	v->a[24069] = sym_word;
	v->a[24070] = state(595);
	v->a[24071] = 5;
	v->a[24072] = sym_arithmetic_expansion;
	v->a[24073] = sym_string;
	v->a[24074] = sym_simple_expansion;
	v->a[24075] = sym_expansion;
	v->a[24076] = sym_command_substitution;
	v->a[24077] = actions(610);
	v->a[24078] = 20;
	v->a[24079] = anon_sym_PIPE;
	small_parse_table_1204(v);
}

void	small_parse_table_1204(t_small_parse_table_array *v)
{
	v->a[24080] = anon_sym_RPAREN;
	v->a[24081] = anon_sym_SEMI_SEMI;
	v->a[24082] = anon_sym_AMP_AMP;
	v->a[24083] = anon_sym_PIPE_PIPE;
	v->a[24084] = anon_sym_LT;
	v->a[24085] = anon_sym_GT;
	v->a[24086] = anon_sym_GT_GT;
	v->a[24087] = anon_sym_AMP_GT;
	v->a[24088] = anon_sym_AMP_GT_GT;
	v->a[24089] = anon_sym_LT_AMP;
	v->a[24090] = anon_sym_GT_AMP;
	v->a[24091] = anon_sym_GT_PIPE;
	v->a[24092] = anon_sym_LT_AMP_DASH;
	v->a[24093] = anon_sym_GT_AMP_DASH;
	v->a[24094] = anon_sym_LT_LT;
	v->a[24095] = anon_sym_LT_LT_DASH;
	v->a[24096] = aux_sym_heredoc_redirect_token1;
	v->a[24097] = anon_sym_AMP;
	v->a[24098] = anon_sym_SEMI;
	v->a[24099] = 12;
	small_parse_table_1205(v);
}

/* EOF small_parse_table_240.c */
