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
	v->a[24700] = 1;
	v->a[24701] = sym__heredoc_pipeline;
	v->a[24702] = state(1636);
	v->a[24703] = 1;
	v->a[24704] = sym__heredoc_expression;
	v->a[24705] = actions(924);
	v->a[24706] = 2;
	v->a[24707] = anon_sym_AMP_AMP;
	v->a[24708] = anon_sym_PIPE_PIPE;
	v->a[24709] = state(1297);
	v->a[24710] = 2;
	v->a[24711] = sym_file_redirect;
	v->a[24712] = aux_sym_redirected_statement_repeat2;
	v->a[24713] = actions(920);
	v->a[24714] = 3;
	v->a[24715] = sym_raw_string;
	v->a[24716] = sym_number;
	v->a[24717] = sym_word;
	v->a[24718] = state(1287);
	v->a[24719] = 5;
	small_parse_table_1236(v);
}

void	small_parse_table_1236(t_small_parse_table_array *v)
{
	v->a[24720] = sym_arithmetic_expansion;
	v->a[24721] = sym_string;
	v->a[24722] = sym_simple_expansion;
	v->a[24723] = sym_expansion;
	v->a[24724] = sym_command_substitution;
	v->a[24725] = actions(926);
	v->a[24726] = 7;
	v->a[24727] = anon_sym_LT;
	v->a[24728] = anon_sym_GT;
	v->a[24729] = anon_sym_GT_GT;
	v->a[24730] = anon_sym_LT_AMP;
	v->a[24731] = anon_sym_GT_AMP;
	v->a[24732] = anon_sym_GT_PIPE;
	v->a[24733] = anon_sym_LT_GT;
	v->a[24734] = 11;
	v->a[24735] = actions(3);
	v->a[24736] = 1;
	v->a[24737] = sym_comment;
	v->a[24738] = actions(746);
	v->a[24739] = 1;
	small_parse_table_1237(v);
}

void	small_parse_table_1237(t_small_parse_table_array *v)
{
	v->a[24740] = anon_sym_PIPE;
	v->a[24741] = actions(842);
	v->a[24742] = 1;
	v->a[24743] = anon_sym_BQUOTE;
	v->a[24744] = actions(911);
	v->a[24745] = 1;
	v->a[24746] = sym_variable_name;
	v->a[24747] = state(640);
	v->a[24748] = 1;
	v->a[24749] = sym_terminator;
	v->a[24750] = actions(850);
	v->a[24751] = 2;
	v->a[24752] = anon_sym_LT_LT;
	v->a[24753] = anon_sym_LT_LT_DASH;
	v->a[24754] = actions(909);
	v->a[24755] = 2;
	v->a[24756] = anon_sym_AMP_AMP;
	v->a[24757] = anon_sym_PIPE_PIPE;
	v->a[24758] = state(972);
	v->a[24759] = 2;
	small_parse_table_1238(v);
}

void	small_parse_table_1238(t_small_parse_table_array *v)
{
	v->a[24760] = sym_variable_assignment;
	v->a[24761] = aux_sym__variable_assignments_repeat1;
	v->a[24762] = actions(858);
	v->a[24763] = 3;
	v->a[24764] = anon_sym_SEMI_SEMI;
	v->a[24765] = aux_sym_heredoc_redirect_token1;
	v->a[24766] = anon_sym_SEMI;
	v->a[24767] = state(970);
	v->a[24768] = 3;
	v->a[24769] = sym_file_redirect;
	v->a[24770] = sym_heredoc_redirect;
	v->a[24771] = aux_sym_redirected_statement_repeat1;
	v->a[24772] = actions(742);
	v->a[24773] = 15;
	v->a[24774] = anon_sym_LT;
	v->a[24775] = anon_sym_GT;
	v->a[24776] = anon_sym_GT_GT;
	v->a[24777] = anon_sym_LT_AMP;
	v->a[24778] = anon_sym_GT_AMP;
	v->a[24779] = anon_sym_GT_PIPE;
	small_parse_table_1239(v);
}

void	small_parse_table_1239(t_small_parse_table_array *v)
{
	v->a[24780] = anon_sym_LT_GT;
	v->a[24781] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24782] = anon_sym_DOLLAR;
	v->a[24783] = anon_sym_DQUOTE;
	v->a[24784] = sym_raw_string;
	v->a[24785] = sym_number;
	v->a[24786] = anon_sym_DOLLAR_LBRACE;
	v->a[24787] = anon_sym_DOLLAR_LPAREN;
	v->a[24788] = sym_word;
	v->a[24789] = 11;
	v->a[24790] = actions(3);
	v->a[24791] = 1;
	v->a[24792] = sym_comment;
	v->a[24793] = actions(824);
	v->a[24794] = 1;
	v->a[24795] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24796] = actions(827);
	v->a[24797] = 1;
	v->a[24798] = anon_sym_DOLLAR;
	v->a[24799] = actions(830);
	small_parse_table_1240(v);
}

/* EOF small_parse_table_247.c */
