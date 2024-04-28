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
	v->a[24700] = sym_brace_expression;
	v->a[24701] = sym_string;
	v->a[24702] = sym_translated_string;
	v->a[24703] = sym_number;
	v->a[24704] = sym_simple_expansion;
	v->a[24705] = sym_expansion;
	v->a[24706] = sym_command_substitution;
	v->a[24707] = sym_process_substitution;
	v->a[24708] = actions(2094);
	v->a[24709] = 19;
	v->a[24710] = anon_sym_SEMI;
	v->a[24711] = anon_sym_PIPE_PIPE;
	v->a[24712] = anon_sym_AMP_AMP;
	v->a[24713] = anon_sym_PIPE;
	v->a[24714] = anon_sym_AMP;
	v->a[24715] = anon_sym_LT;
	v->a[24716] = anon_sym_GT;
	v->a[24717] = anon_sym_LT_LT;
	v->a[24718] = anon_sym_GT_GT;
	v->a[24719] = anon_sym_SEMI_SEMI;
	small_parse_table_1236(v);
}

void	small_parse_table_1236(t_small_parse_table_array *v)
{
	v->a[24720] = anon_sym_PIPE_AMP;
	v->a[24721] = anon_sym_AMP_GT;
	v->a[24722] = anon_sym_AMP_GT_GT;
	v->a[24723] = anon_sym_LT_AMP;
	v->a[24724] = anon_sym_GT_AMP;
	v->a[24725] = anon_sym_GT_PIPE;
	v->a[24726] = anon_sym_LT_AMP_DASH;
	v->a[24727] = anon_sym_GT_AMP_DASH;
	v->a[24728] = anon_sym_LT_LT_DASH;
	v->a[24729] = 21;
	v->a[24730] = actions(3);
	v->a[24731] = 1;
	v->a[24732] = sym_comment;
	v->a[24733] = actions(3785);
	v->a[24734] = 1;
	v->a[24735] = anon_sym_DOLLAR_LBRACK;
	v->a[24736] = actions(3787);
	v->a[24737] = 1;
	v->a[24738] = anon_sym_DOLLAR;
	v->a[24739] = actions(3791);
	small_parse_table_1237(v);
}

void	small_parse_table_1237(t_small_parse_table_array *v)
{
	v->a[24740] = 1;
	v->a[24741] = anon_sym_DQUOTE;
	v->a[24742] = actions(3793);
	v->a[24743] = 1;
	v->a[24744] = aux_sym_number_token1;
	v->a[24745] = actions(3795);
	v->a[24746] = 1;
	v->a[24747] = aux_sym_number_token2;
	v->a[24748] = actions(3797);
	v->a[24749] = 1;
	v->a[24750] = anon_sym_DOLLAR_LBRACE;
	v->a[24751] = actions(3799);
	v->a[24752] = 1;
	v->a[24753] = anon_sym_DOLLAR_LPAREN;
	v->a[24754] = actions(3801);
	v->a[24755] = 1;
	v->a[24756] = anon_sym_BQUOTE;
	v->a[24757] = actions(3803);
	v->a[24758] = 1;
	v->a[24759] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1238(v);
}

void	small_parse_table_1238(t_small_parse_table_array *v)
{
	v->a[24760] = actions(3809);
	v->a[24761] = 1;
	v->a[24762] = sym__brace_start;
	v->a[24763] = actions(4139);
	v->a[24764] = 1;
	v->a[24765] = sym__special_character;
	v->a[24766] = actions(4141);
	v->a[24767] = 1;
	v->a[24768] = sym_test_operator;
	v->a[24769] = state(4277);
	v->a[24770] = 1;
	v->a[24771] = aux_sym__literal_repeat1;
	v->a[24772] = state(4782);
	v->a[24773] = 1;
	v->a[24774] = sym_concatenation;
	v->a[24775] = actions(2496);
	v->a[24776] = 2;
	v->a[24777] = sym_file_descriptor;
	v->a[24778] = aux_sym_heredoc_redirect_token1;
	v->a[24779] = actions(3783);
	small_parse_table_1239(v);
}

void	small_parse_table_1239(t_small_parse_table_array *v)
{
	v->a[24780] = 2;
	v->a[24781] = anon_sym_LPAREN_LPAREN;
	v->a[24782] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24783] = actions(3805);
	v->a[24784] = 2;
	v->a[24785] = anon_sym_LT_LPAREN;
	v->a[24786] = anon_sym_GT_LPAREN;
	v->a[24787] = actions(4137);
	v->a[24788] = 3;
	v->a[24789] = sym_raw_string;
	v->a[24790] = sym_ansi_c_string;
	v->a[24791] = sym_word;
	v->a[24792] = state(4834);
	v->a[24793] = 9;
	v->a[24794] = sym_arithmetic_expansion;
	v->a[24795] = sym_brace_expression;
	v->a[24796] = sym_string;
	v->a[24797] = sym_translated_string;
	v->a[24798] = sym_number;
	v->a[24799] = sym_simple_expansion;
	small_parse_table_1240(v);
}

/* EOF small_parse_table_247.c */
