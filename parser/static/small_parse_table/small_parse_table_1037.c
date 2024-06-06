/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1037.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5185(t_small_parse_table_array *v)
{
	v->a[103700] = actions(5960);
	v->a[103701] = 1;
	v->a[103702] = anon_sym_DOLLAR_LBRACE;
	v->a[103703] = actions(5962);
	v->a[103704] = 1;
	v->a[103705] = anon_sym_BQUOTE;
	v->a[103706] = actions(5964);
	v->a[103707] = 1;
	v->a[103708] = anon_sym_DOLLAR_BQUOTE;
	v->a[103709] = state(1321);
	v->a[103710] = 1;
	v->a[103711] = aux_sym__literal_repeat1;
	v->a[103712] = actions(2325);
	v->a[103713] = 2;
	v->a[103714] = sym_test_operator;
	v->a[103715] = sym_raw_string;
	v->a[103716] = state(408);
	v->a[103717] = 2;
	v->a[103718] = sym_concatenation;
	v->a[103719] = aux_sym_for_statement_repeat1;
	small_parse_table_5186(v);
}

void	small_parse_table_5186(t_small_parse_table_array *v)
{
	v->a[103720] = state(1153);
	v->a[103721] = 7;
	v->a[103722] = sym_arithmetic_expansion;
	v->a[103723] = sym_brace_expression;
	v->a[103724] = sym_string;
	v->a[103725] = sym_number;
	v->a[103726] = sym_simple_expansion;
	v->a[103727] = sym_expansion;
	v->a[103728] = sym_command_substitution;
	v->a[103729] = 17;
	v->a[103730] = actions(57);
	v->a[103731] = 1;
	v->a[103732] = sym_comment;
	v->a[103733] = actions(5453);
	v->a[103734] = 1;
	v->a[103735] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103736] = actions(5455);
	v->a[103737] = 1;
	v->a[103738] = anon_sym_DOLLAR;
	v->a[103739] = actions(5457);
	small_parse_table_5187(v);
}

void	small_parse_table_5187(t_small_parse_table_array *v)
{
	v->a[103740] = 1;
	v->a[103741] = sym__special_character;
	v->a[103742] = actions(5459);
	v->a[103743] = 1;
	v->a[103744] = anon_sym_DQUOTE;
	v->a[103745] = actions(5463);
	v->a[103746] = 1;
	v->a[103747] = aux_sym_number_token1;
	v->a[103748] = actions(5465);
	v->a[103749] = 1;
	v->a[103750] = aux_sym_number_token2;
	v->a[103751] = actions(5467);
	v->a[103752] = 1;
	v->a[103753] = anon_sym_DOLLAR_LBRACE;
	v->a[103754] = actions(5469);
	v->a[103755] = 1;
	v->a[103756] = anon_sym_DOLLAR_LPAREN;
	v->a[103757] = actions(5471);
	v->a[103758] = 1;
	v->a[103759] = anon_sym_BQUOTE;
	small_parse_table_5188(v);
}

void	small_parse_table_5188(t_small_parse_table_array *v)
{
	v->a[103760] = actions(5473);
	v->a[103761] = 1;
	v->a[103762] = anon_sym_DOLLAR_BQUOTE;
	v->a[103763] = actions(5479);
	v->a[103764] = 1;
	v->a[103765] = sym__brace_start;
	v->a[103766] = actions(5948);
	v->a[103767] = 1;
	v->a[103768] = sym_word;
	v->a[103769] = state(1240);
	v->a[103770] = 1;
	v->a[103771] = aux_sym__literal_repeat1;
	v->a[103772] = actions(5950);
	v->a[103773] = 2;
	v->a[103774] = sym_test_operator;
	v->a[103775] = sym_raw_string;
	v->a[103776] = state(362);
	v->a[103777] = 2;
	v->a[103778] = sym_concatenation;
	v->a[103779] = aux_sym_for_statement_repeat1;
	small_parse_table_5189(v);
}

void	small_parse_table_5189(t_small_parse_table_array *v)
{
	v->a[103780] = state(776);
	v->a[103781] = 7;
	v->a[103782] = sym_arithmetic_expansion;
	v->a[103783] = sym_brace_expression;
	v->a[103784] = sym_string;
	v->a[103785] = sym_number;
	v->a[103786] = sym_simple_expansion;
	v->a[103787] = sym_expansion;
	v->a[103788] = sym_command_substitution;
	v->a[103789] = 10;
	v->a[103790] = actions(3);
	v->a[103791] = 1;
	v->a[103792] = sym_comment;
	v->a[103793] = actions(3366);
	v->a[103794] = 1;
	v->a[103795] = aux_sym_heredoc_redirect_token1;
	v->a[103796] = actions(5970);
	v->a[103797] = 1;
	v->a[103798] = sym_file_descriptor;
	v->a[103799] = actions(2516);
	small_parse_table_5190(v);
}

/* EOF small_parse_table_1037.c */
