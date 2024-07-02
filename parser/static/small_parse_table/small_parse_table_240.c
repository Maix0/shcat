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
	v->a[24000] = sym_raw_string;
	v->a[24001] = sym_number;
	v->a[24002] = anon_sym_DOLLAR_LBRACE;
	v->a[24003] = anon_sym_DOLLAR_LPAREN;
	v->a[24004] = anon_sym_BQUOTE;
	v->a[24005] = sym_word;
	v->a[24006] = 11;
	v->a[24007] = actions(3);
	v->a[24008] = 1;
	v->a[24009] = sym_comment;
	v->a[24010] = actions(511);
	v->a[24011] = 1;
	v->a[24012] = sym_file_descriptor;
	v->a[24013] = actions(821);
	v->a[24014] = 1;
	v->a[24015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24016] = actions(823);
	v->a[24017] = 1;
	v->a[24018] = anon_sym_DOLLAR;
	v->a[24019] = actions(825);
	small_parse_table_1201(v);
}

void	small_parse_table_1201(t_small_parse_table_array *v)
{
	v->a[24020] = 1;
	v->a[24021] = anon_sym_DQUOTE;
	v->a[24022] = actions(827);
	v->a[24023] = 1;
	v->a[24024] = anon_sym_DOLLAR_LBRACE;
	v->a[24025] = actions(829);
	v->a[24026] = 1;
	v->a[24027] = anon_sym_DOLLAR_LPAREN;
	v->a[24028] = state(274);
	v->a[24029] = 2;
	v->a[24030] = sym_concatenation;
	v->a[24031] = aux_sym_for_statement_repeat1;
	v->a[24032] = actions(919);
	v->a[24033] = 3;
	v->a[24034] = sym_raw_string;
	v->a[24035] = sym_number;
	v->a[24036] = sym_word;
	v->a[24037] = state(593);
	v->a[24038] = 5;
	v->a[24039] = sym_arithmetic_expansion;
	small_parse_table_1202(v);
}

void	small_parse_table_1202(t_small_parse_table_array *v)
{
	v->a[24040] = sym_string;
	v->a[24041] = sym_simple_expansion;
	v->a[24042] = sym_expansion;
	v->a[24043] = sym_command_substitution;
	v->a[24044] = actions(509);
	v->a[24045] = 17;
	v->a[24046] = anon_sym_PIPE;
	v->a[24047] = anon_sym_SEMI_SEMI;
	v->a[24048] = anon_sym_AMP_AMP;
	v->a[24049] = anon_sym_PIPE_PIPE;
	v->a[24050] = anon_sym_LT;
	v->a[24051] = anon_sym_GT;
	v->a[24052] = anon_sym_GT_GT;
	v->a[24053] = anon_sym_LT_AMP;
	v->a[24054] = anon_sym_GT_AMP;
	v->a[24055] = anon_sym_GT_PIPE;
	v->a[24056] = anon_sym_LT_GT;
	v->a[24057] = anon_sym_LT_LT;
	v->a[24058] = anon_sym_LT_LT_DASH;
	v->a[24059] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1203(v);
}

void	small_parse_table_1203(t_small_parse_table_array *v)
{
	v->a[24060] = anon_sym_AMP;
	v->a[24061] = anon_sym_BQUOTE;
	v->a[24062] = anon_sym_SEMI;
	v->a[24063] = 7;
	v->a[24064] = actions(3);
	v->a[24065] = 1;
	v->a[24066] = sym_comment;
	v->a[24067] = actions(765);
	v->a[24068] = 1;
	v->a[24069] = sym_variable_name;
	v->a[24070] = actions(921);
	v->a[24071] = 1;
	v->a[24072] = sym_file_descriptor;
	v->a[24073] = state(1048);
	v->a[24074] = 2;
	v->a[24075] = sym_variable_assignment;
	v->a[24076] = aux_sym__variable_assignments_repeat1;
	v->a[24077] = state(1059);
	v->a[24078] = 3;
	v->a[24079] = sym_file_redirect;
	small_parse_table_1204(v);
}

void	small_parse_table_1204(t_small_parse_table_array *v)
{
	v->a[24080] = sym_heredoc_redirect;
	v->a[24081] = aux_sym_redirected_statement_repeat1;
	v->a[24082] = actions(690);
	v->a[24083] = 9;
	v->a[24084] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24085] = anon_sym_DOLLAR;
	v->a[24086] = anon_sym_DQUOTE;
	v->a[24087] = sym_raw_string;
	v->a[24088] = sym_number;
	v->a[24089] = anon_sym_DOLLAR_LBRACE;
	v->a[24090] = anon_sym_DOLLAR_LPAREN;
	v->a[24091] = anon_sym_BQUOTE;
	v->a[24092] = sym_word;
	v->a[24093] = actions(692);
	v->a[24094] = 17;
	v->a[24095] = anon_sym_esac;
	v->a[24096] = anon_sym_PIPE;
	v->a[24097] = anon_sym_SEMI_SEMI;
	v->a[24098] = anon_sym_AMP_AMP;
	v->a[24099] = anon_sym_PIPE_PIPE;
	small_parse_table_1205(v);
}

/* EOF small_parse_table_240.c */
