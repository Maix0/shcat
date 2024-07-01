/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_247.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1235(t_small_parse_table_array *v)
{
	v->a[24700] = anon_sym_CARET_EQ;
	v->a[24701] = anon_sym_PIPE_EQ;
	v->a[24702] = 11;
	v->a[24703] = actions(3);
	v->a[24704] = 1;
	v->a[24705] = sym_comment;
	v->a[24706] = actions(736);
	v->a[24707] = 1;
	v->a[24708] = anon_sym_PIPE;
	v->a[24709] = actions(746);
	v->a[24710] = 1;
	v->a[24711] = sym_file_descriptor;
	v->a[24712] = actions(957);
	v->a[24713] = 1;
	v->a[24714] = sym_variable_name;
	v->a[24715] = state(599);
	v->a[24716] = 1;
	v->a[24717] = sym_terminator;
	v->a[24718] = actions(744);
	v->a[24719] = 2;
	small_parse_table_1236(v);
}

void	small_parse_table_1236(t_small_parse_table_array *v)
{
	v->a[24720] = anon_sym_LT_LT;
	v->a[24721] = anon_sym_LT_LT_DASH;
	v->a[24722] = actions(955);
	v->a[24723] = 2;
	v->a[24724] = anon_sym_AMP_AMP;
	v->a[24725] = anon_sym_PIPE_PIPE;
	v->a[24726] = state(1134);
	v->a[24727] = 2;
	v->a[24728] = sym_variable_assignment;
	v->a[24729] = aux_sym__variable_assignments_repeat1;
	v->a[24730] = state(1194);
	v->a[24731] = 3;
	v->a[24732] = sym_file_redirect;
	v->a[24733] = sym_heredoc_redirect;
	v->a[24734] = aux_sym_redirected_statement_repeat1;
	v->a[24735] = actions(964);
	v->a[24736] = 4;
	v->a[24737] = anon_sym_SEMI_SEMI;
	v->a[24738] = aux_sym_heredoc_redirect_token1;
	v->a[24739] = anon_sym_AMP;
	small_parse_table_1237(v);
}

void	small_parse_table_1237(t_small_parse_table_array *v)
{
	v->a[24740] = anon_sym_SEMI;
	v->a[24741] = actions(734);
	v->a[24742] = 16;
	v->a[24743] = anon_sym_LT;
	v->a[24744] = anon_sym_GT;
	v->a[24745] = anon_sym_GT_GT;
	v->a[24746] = anon_sym_LT_AMP;
	v->a[24747] = anon_sym_GT_AMP;
	v->a[24748] = anon_sym_GT_PIPE;
	v->a[24749] = anon_sym_LT_GT;
	v->a[24750] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24751] = anon_sym_DOLLAR;
	v->a[24752] = anon_sym_DQUOTE;
	v->a[24753] = sym_raw_string;
	v->a[24754] = sym_number;
	v->a[24755] = anon_sym_DOLLAR_LBRACE;
	v->a[24756] = anon_sym_DOLLAR_LPAREN;
	v->a[24757] = anon_sym_BQUOTE;
	v->a[24758] = sym_word;
	v->a[24759] = 17;
	small_parse_table_1238(v);
}

void	small_parse_table_1238(t_small_parse_table_array *v)
{
	v->a[24760] = actions(664);
	v->a[24761] = 1;
	v->a[24762] = sym_comment;
	v->a[24763] = actions(702);
	v->a[24764] = 1;
	v->a[24765] = anon_sym_CARET;
	v->a[24766] = actions(704);
	v->a[24767] = 1;
	v->a[24768] = anon_sym_AMP;
	v->a[24769] = actions(710);
	v->a[24770] = 1;
	v->a[24771] = anon_sym_PIPE;
	v->a[24772] = actions(712);
	v->a[24773] = 1;
	v->a[24774] = anon_sym_AMP_AMP;
	v->a[24775] = actions(714);
	v->a[24776] = 1;
	v->a[24777] = anon_sym_PIPE_PIPE;
	v->a[24778] = actions(716);
	v->a[24779] = 1;
	small_parse_table_1239(v);
}

void	small_parse_table_1239(t_small_parse_table_array *v)
{
	v->a[24780] = anon_sym_QMARK;
	v->a[24781] = actions(718);
	v->a[24782] = 1;
	v->a[24783] = anon_sym_EQ;
	v->a[24784] = actions(966);
	v->a[24785] = 1;
	v->a[24786] = anon_sym_RPAREN_RPAREN;
	v->a[24787] = actions(684);
	v->a[24788] = 2;
	v->a[24789] = anon_sym_GT_GT;
	v->a[24790] = anon_sym_LT_LT;
	v->a[24791] = actions(686);
	v->a[24792] = 2;
	v->a[24793] = anon_sym_PLUS;
	v->a[24794] = anon_sym_DASH;
	v->a[24795] = actions(690);
	v->a[24796] = 2;
	v->a[24797] = anon_sym_PLUS_PLUS2;
	v->a[24798] = anon_sym_DASH_DASH2;
	v->a[24799] = actions(700);
	small_parse_table_1240(v);
}

/* EOF small_parse_table_247.c */
