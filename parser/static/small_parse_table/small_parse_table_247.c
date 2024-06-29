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
	v->a[24700] = sym_heredoc_redirect;
	v->a[24701] = aux_sym_redirected_statement_repeat1;
	v->a[24702] = actions(800);
	v->a[24703] = 4;
	v->a[24704] = anon_sym_SEMI_SEMI;
	v->a[24705] = aux_sym_heredoc_redirect_token1;
	v->a[24706] = anon_sym_AMP;
	v->a[24707] = anon_sym_SEMI;
	v->a[24708] = actions(762);
	v->a[24709] = 18;
	v->a[24710] = anon_sym_LT;
	v->a[24711] = anon_sym_GT;
	v->a[24712] = anon_sym_GT_GT;
	v->a[24713] = anon_sym_AMP_GT;
	v->a[24714] = anon_sym_AMP_GT_GT;
	v->a[24715] = anon_sym_LT_AMP;
	v->a[24716] = anon_sym_GT_AMP;
	v->a[24717] = anon_sym_GT_PIPE;
	v->a[24718] = anon_sym_LT_AMP_DASH;
	v->a[24719] = anon_sym_GT_AMP_DASH;
	small_parse_table_1236(v);
}

void	small_parse_table_1236(t_small_parse_table_array *v)
{
	v->a[24720] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24721] = anon_sym_DOLLAR;
	v->a[24722] = anon_sym_DQUOTE;
	v->a[24723] = sym_raw_string;
	v->a[24724] = sym_number;
	v->a[24725] = anon_sym_DOLLAR_LBRACE;
	v->a[24726] = anon_sym_DOLLAR_LPAREN;
	v->a[24727] = sym_word;
	v->a[24728] = 20;
	v->a[24729] = actions(3);
	v->a[24730] = 1;
	v->a[24731] = sym_comment;
	v->a[24732] = actions(857);
	v->a[24733] = 1;
	v->a[24734] = aux_sym_heredoc_redirect_token1;
	v->a[24735] = actions(859);
	v->a[24736] = 1;
	v->a[24737] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24738] = actions(861);
	v->a[24739] = 1;
	small_parse_table_1237(v);
}

void	small_parse_table_1237(t_small_parse_table_array *v)
{
	v->a[24740] = anon_sym_DOLLAR;
	v->a[24741] = actions(863);
	v->a[24742] = 1;
	v->a[24743] = anon_sym_DQUOTE;
	v->a[24744] = actions(865);
	v->a[24745] = 1;
	v->a[24746] = anon_sym_DOLLAR_LBRACE;
	v->a[24747] = actions(867);
	v->a[24748] = 1;
	v->a[24749] = anon_sym_DOLLAR_LPAREN;
	v->a[24750] = actions(869);
	v->a[24751] = 1;
	v->a[24752] = anon_sym_BQUOTE;
	v->a[24753] = actions(871);
	v->a[24754] = 1;
	v->a[24755] = sym_file_descriptor;
	v->a[24756] = state(1558);
	v->a[24757] = 1;
	v->a[24758] = aux_sym__heredoc_command;
	v->a[24759] = state(1953);
	small_parse_table_1238(v);
}

void	small_parse_table_1238(t_small_parse_table_array *v)
{
	v->a[24760] = 1;
	v->a[24761] = sym_concatenation;
	v->a[24762] = state(2244);
	v->a[24763] = 1;
	v->a[24764] = sym__heredoc_expression;
	v->a[24765] = state(2245);
	v->a[24766] = 1;
	v->a[24767] = sym__heredoc_pipeline;
	v->a[24768] = actions(849);
	v->a[24769] = 2;
	v->a[24770] = anon_sym_PIPE;
	v->a[24771] = anon_sym_PIPE_AMP;
	v->a[24772] = actions(851);
	v->a[24773] = 2;
	v->a[24774] = anon_sym_AMP_AMP;
	v->a[24775] = anon_sym_PIPE_PIPE;
	v->a[24776] = actions(855);
	v->a[24777] = 2;
	v->a[24778] = anon_sym_LT_AMP_DASH;
	v->a[24779] = anon_sym_GT_AMP_DASH;
	small_parse_table_1239(v);
}

void	small_parse_table_1239(t_small_parse_table_array *v)
{
	v->a[24780] = state(1567);
	v->a[24781] = 2;
	v->a[24782] = sym_file_redirect;
	v->a[24783] = aux_sym_redirected_statement_repeat2;
	v->a[24784] = actions(847);
	v->a[24785] = 3;
	v->a[24786] = sym_raw_string;
	v->a[24787] = sym_number;
	v->a[24788] = sym_word;
	v->a[24789] = state(1788);
	v->a[24790] = 5;
	v->a[24791] = sym_arithmetic_expansion;
	v->a[24792] = sym_string;
	v->a[24793] = sym_simple_expansion;
	v->a[24794] = sym_expansion;
	v->a[24795] = sym_command_substitution;
	v->a[24796] = actions(853);
	v->a[24797] = 8;
	v->a[24798] = anon_sym_LT;
	v->a[24799] = anon_sym_GT;
	small_parse_table_1240(v);
}

/* EOF small_parse_table_247.c */
