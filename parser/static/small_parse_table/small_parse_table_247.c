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
	v->a[24701] = sym_concatenation;
	v->a[24702] = actions(551);
	v->a[24703] = 2;
	v->a[24704] = sym_raw_string;
	v->a[24705] = sym_word;
	v->a[24706] = state(452);
	v->a[24707] = 6;
	v->a[24708] = sym_arithmetic_expansion;
	v->a[24709] = sym_string;
	v->a[24710] = sym_number;
	v->a[24711] = sym_simple_expansion;
	v->a[24712] = sym_expansion;
	v->a[24713] = sym_command_substitution;
	v->a[24714] = actions(557);
	v->a[24715] = 19;
	v->a[24716] = anon_sym_PIPE;
	v->a[24717] = anon_sym_SEMI_SEMI;
	v->a[24718] = anon_sym_AMP_AMP;
	v->a[24719] = anon_sym_PIPE_PIPE;
	small_parse_table_1236(v);
}

void	small_parse_table_1236(t_small_parse_table_array *v)
{
	v->a[24720] = anon_sym_LT;
	v->a[24721] = anon_sym_GT;
	v->a[24722] = anon_sym_GT_GT;
	v->a[24723] = anon_sym_AMP_GT;
	v->a[24724] = anon_sym_AMP_GT_GT;
	v->a[24725] = anon_sym_LT_AMP;
	v->a[24726] = anon_sym_GT_AMP;
	v->a[24727] = anon_sym_GT_PIPE;
	v->a[24728] = anon_sym_LT_AMP_DASH;
	v->a[24729] = anon_sym_GT_AMP_DASH;
	v->a[24730] = anon_sym_LT_LT;
	v->a[24731] = anon_sym_LT_LT_DASH;
	v->a[24732] = aux_sym_heredoc_redirect_token1;
	v->a[24733] = anon_sym_AMP;
	v->a[24734] = anon_sym_SEMI;
	v->a[24735] = 5;
	v->a[24736] = actions(3);
	v->a[24737] = 1;
	v->a[24738] = sym_comment;
	v->a[24739] = actions(565);
	small_parse_table_1237(v);
}

void	small_parse_table_1237(t_small_parse_table_array *v)
{
	v->a[24740] = 2;
	v->a[24741] = sym_file_descriptor;
	v->a[24742] = sym_variable_name;
	v->a[24743] = state(212);
	v->a[24744] = 2;
	v->a[24745] = sym_concatenation;
	v->a[24746] = aux_sym_for_statement_repeat1;
	v->a[24747] = state(431);
	v->a[24748] = 6;
	v->a[24749] = sym_arithmetic_expansion;
	v->a[24750] = sym_string;
	v->a[24751] = sym_number;
	v->a[24752] = sym_simple_expansion;
	v->a[24753] = sym_expansion;
	v->a[24754] = sym_command_substitution;
	v->a[24755] = actions(567);
	v->a[24756] = 29;
	v->a[24757] = anon_sym_PIPE;
	v->a[24758] = anon_sym_SEMI_SEMI;
	v->a[24759] = anon_sym_AMP_AMP;
	small_parse_table_1238(v);
}

void	small_parse_table_1238(t_small_parse_table_array *v)
{
	v->a[24760] = anon_sym_PIPE_PIPE;
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
	v->a[24771] = anon_sym_LT_LT;
	v->a[24772] = anon_sym_LT_LT_DASH;
	v->a[24773] = aux_sym_heredoc_redirect_token1;
	v->a[24774] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24775] = anon_sym_AMP;
	v->a[24776] = anon_sym_DOLLAR;
	v->a[24777] = anon_sym_DQUOTE;
	v->a[24778] = sym_raw_string;
	v->a[24779] = aux_sym_number_token1;
	small_parse_table_1239(v);
}

void	small_parse_table_1239(t_small_parse_table_array *v)
{
	v->a[24780] = aux_sym_number_token2;
	v->a[24781] = anon_sym_DOLLAR_LBRACE;
	v->a[24782] = anon_sym_DOLLAR_LPAREN;
	v->a[24783] = anon_sym_BQUOTE;
	v->a[24784] = sym_word;
	v->a[24785] = anon_sym_SEMI;
	v->a[24786] = 5;
	v->a[24787] = actions(3);
	v->a[24788] = 1;
	v->a[24789] = sym_comment;
	v->a[24790] = state(734);
	v->a[24791] = 1;
	v->a[24792] = sym_concatenation;
	v->a[24793] = actions(750);
	v->a[24794] = 3;
	v->a[24795] = sym_file_descriptor;
	v->a[24796] = sym_variable_name;
	v->a[24797] = ts_builtin_sym_end;
	v->a[24798] = state(344);
	v->a[24799] = 6;
	small_parse_table_1240(v);
}

/* EOF small_parse_table_247.c */
