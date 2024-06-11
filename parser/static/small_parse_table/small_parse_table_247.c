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
	v->a[24700] = anon_sym_GT;
	v->a[24701] = anon_sym_GT_GT;
	v->a[24702] = anon_sym_AMP_GT;
	v->a[24703] = anon_sym_AMP_GT_GT;
	v->a[24704] = anon_sym_LT_AMP;
	v->a[24705] = anon_sym_GT_AMP;
	v->a[24706] = anon_sym_GT_PIPE;
	v->a[24707] = anon_sym_LT_AMP_DASH;
	v->a[24708] = anon_sym_GT_AMP_DASH;
	v->a[24709] = anon_sym_LT_LT;
	v->a[24710] = anon_sym_LT_LT_DASH;
	v->a[24711] = aux_sym_heredoc_redirect_token1;
	v->a[24712] = anon_sym_AMP;
	v->a[24713] = anon_sym_SEMI;
	v->a[24714] = 14;
	v->a[24715] = actions(3);
	v->a[24716] = 1;
	v->a[24717] = sym_comment;
	v->a[24718] = actions(807);
	v->a[24719] = 1;
	small_parse_table_1236(v);
}

void	small_parse_table_1236(t_small_parse_table_array *v)
{
	v->a[24720] = anon_sym_PIPE;
	v->a[24721] = actions(811);
	v->a[24722] = 1;
	v->a[24723] = sym_file_descriptor;
	v->a[24724] = actions(840);
	v->a[24725] = 1;
	v->a[24726] = anon_sym_RPAREN;
	v->a[24727] = actions(857);
	v->a[24728] = 1;
	v->a[24729] = anon_sym_SEMI_SEMI;
	v->a[24730] = actions(863);
	v->a[24731] = 1;
	v->a[24732] = aux_sym_heredoc_redirect_token1;
	v->a[24733] = actions(865);
	v->a[24734] = 1;
	v->a[24735] = anon_sym_AMP;
	v->a[24736] = actions(867);
	v->a[24737] = 1;
	v->a[24738] = anon_sym_SEMI;
	v->a[24739] = actions(869);
	small_parse_table_1237(v);
}

void	small_parse_table_1237(t_small_parse_table_array *v)
{
	v->a[24740] = 1;
	v->a[24741] = sym_variable_name;
	v->a[24742] = actions(859);
	v->a[24743] = 2;
	v->a[24744] = anon_sym_AMP_AMP;
	v->a[24745] = anon_sym_PIPE_PIPE;
	v->a[24746] = actions(861);
	v->a[24747] = 2;
	v->a[24748] = anon_sym_LT_LT;
	v->a[24749] = anon_sym_LT_LT_DASH;
	v->a[24750] = state(1208);
	v->a[24751] = 2;
	v->a[24752] = sym_variable_assignment;
	v->a[24753] = aux_sym_variable_assignments_repeat1;
	v->a[24754] = state(1283);
	v->a[24755] = 3;
	v->a[24756] = sym_file_redirect;
	v->a[24757] = sym_heredoc_redirect;
	v->a[24758] = aux_sym_redirected_statement_repeat1;
	v->a[24759] = actions(805);
	small_parse_table_1238(v);
}

void	small_parse_table_1238(t_small_parse_table_array *v)
{
	v->a[24760] = 19;
	v->a[24761] = anon_sym_LT;
	v->a[24762] = anon_sym_GT;
	v->a[24763] = anon_sym_GT_GT;
	v->a[24764] = anon_sym_AMP_GT;
	v->a[24765] = anon_sym_AMP_GT_GT;
	v->a[24766] = anon_sym_LT_AMP;
	v->a[24767] = anon_sym_GT_AMP;
	v->a[24768] = anon_sym_GT_PIPE;
	v->a[24769] = anon_sym_LT_AMP_DASH;
	v->a[24770] = anon_sym_GT_AMP_DASH;
	v->a[24771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24772] = anon_sym_DOLLAR;
	v->a[24773] = anon_sym_DQUOTE;
	v->a[24774] = sym_raw_string;
	v->a[24775] = sym_number;
	v->a[24776] = anon_sym_DOLLAR_LBRACE;
	v->a[24777] = anon_sym_DOLLAR_LPAREN;
	v->a[24778] = anon_sym_BQUOTE;
	v->a[24779] = sym_word;
	small_parse_table_1239(v);
}

void	small_parse_table_1239(t_small_parse_table_array *v)
{
	v->a[24780] = 20;
	v->a[24781] = actions(3);
	v->a[24782] = 1;
	v->a[24783] = sym_comment;
	v->a[24784] = actions(882);
	v->a[24785] = 1;
	v->a[24786] = aux_sym_heredoc_redirect_token1;
	v->a[24787] = actions(884);
	v->a[24788] = 1;
	v->a[24789] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24790] = actions(886);
	v->a[24791] = 1;
	v->a[24792] = anon_sym_DOLLAR;
	v->a[24793] = actions(888);
	v->a[24794] = 1;
	v->a[24795] = anon_sym_DQUOTE;
	v->a[24796] = actions(890);
	v->a[24797] = 1;
	v->a[24798] = anon_sym_DOLLAR_LBRACE;
	v->a[24799] = actions(892);
	small_parse_table_1240(v);
}

/* EOF small_parse_table_247.c */
