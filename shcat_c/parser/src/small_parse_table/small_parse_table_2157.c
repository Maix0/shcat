/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2157.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10785(t_small_parse_table_array *v)
{
	v->a[215700] = 1;
	v->a[215701] = anon_sym_DQUOTE;
	v->a[215702] = actions(461);
	v->a[215703] = 1;
	v->a[215704] = aux_sym_number_token1;
	v->a[215705] = actions(463);
	v->a[215706] = 1;
	v->a[215707] = aux_sym_number_token2;
	v->a[215708] = actions(465);
	v->a[215709] = 1;
	v->a[215710] = anon_sym_DOLLAR_LBRACE;
	v->a[215711] = actions(467);
	v->a[215712] = 1;
	v->a[215713] = anon_sym_DOLLAR_LPAREN;
	v->a[215714] = actions(469);
	v->a[215715] = 1;
	v->a[215716] = anon_sym_BQUOTE;
	v->a[215717] = actions(471);
	v->a[215718] = 1;
	v->a[215719] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10786(v);
}

void	small_parse_table_10786(t_small_parse_table_array *v)
{
	v->a[215720] = actions(481);
	v->a[215721] = 1;
	v->a[215722] = sym__brace_start;
	v->a[215723] = actions(10308);
	v->a[215724] = 1;
	v->a[215725] = sym_word;
	v->a[215726] = actions(10314);
	v->a[215727] = 1;
	v->a[215728] = sym__comment_word;
	v->a[215729] = actions(449);
	v->a[215730] = 2;
	v->a[215731] = anon_sym_LPAREN_LPAREN;
	v->a[215732] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[215733] = actions(473);
	v->a[215734] = 2;
	v->a[215735] = anon_sym_LT_LPAREN;
	v->a[215736] = anon_sym_GT_LPAREN;
	v->a[215737] = actions(10310);
	v->a[215738] = 2;
	v->a[215739] = sym_test_operator;
	small_parse_table_10787(v);
}

void	small_parse_table_10787(t_small_parse_table_array *v)
{
	v->a[215740] = sym__special_character;
	v->a[215741] = actions(10312);
	v->a[215742] = 3;
	v->a[215743] = sym__bare_dollar;
	v->a[215744] = sym_raw_string;
	v->a[215745] = sym_ansi_c_string;
	v->a[215746] = state(866);
	v->a[215747] = 9;
	v->a[215748] = sym_arithmetic_expansion;
	v->a[215749] = sym_brace_expression;
	v->a[215750] = sym_string;
	v->a[215751] = sym_translated_string;
	v->a[215752] = sym_number;
	v->a[215753] = sym_simple_expansion;
	v->a[215754] = sym_expansion;
	v->a[215755] = sym_command_substitution;
	v->a[215756] = sym_process_substitution;
	v->a[215757] = 18;
	v->a[215758] = actions(3);
	v->a[215759] = 1;
	small_parse_table_10788(v);
}

void	small_parse_table_10788(t_small_parse_table_array *v)
{
	v->a[215760] = sym_comment;
	v->a[215761] = actions(5112);
	v->a[215762] = 1;
	v->a[215763] = anon_sym_DOLLAR_LBRACK;
	v->a[215764] = actions(5114);
	v->a[215765] = 1;
	v->a[215766] = anon_sym_DOLLAR;
	v->a[215767] = actions(5118);
	v->a[215768] = 1;
	v->a[215769] = anon_sym_DQUOTE;
	v->a[215770] = actions(5122);
	v->a[215771] = 1;
	v->a[215772] = aux_sym_number_token1;
	v->a[215773] = actions(5124);
	v->a[215774] = 1;
	v->a[215775] = aux_sym_number_token2;
	v->a[215776] = actions(5126);
	v->a[215777] = 1;
	v->a[215778] = anon_sym_DOLLAR_LBRACE;
	v->a[215779] = actions(5128);
	small_parse_table_10789(v);
}

void	small_parse_table_10789(t_small_parse_table_array *v)
{
	v->a[215780] = 1;
	v->a[215781] = anon_sym_DOLLAR_LPAREN;
	v->a[215782] = actions(5130);
	v->a[215783] = 1;
	v->a[215784] = anon_sym_BQUOTE;
	v->a[215785] = actions(5132);
	v->a[215786] = 1;
	v->a[215787] = anon_sym_DOLLAR_BQUOTE;
	v->a[215788] = actions(5138);
	v->a[215789] = 1;
	v->a[215790] = sym__brace_start;
	v->a[215791] = actions(10174);
	v->a[215792] = 1;
	v->a[215793] = sym_word;
	v->a[215794] = actions(10182);
	v->a[215795] = 1;
	v->a[215796] = sym__comment_word;
	v->a[215797] = actions(5110);
	v->a[215798] = 2;
	v->a[215799] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10790(v);
}

/* EOF small_parse_table_2157.c */
