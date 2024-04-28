/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2197.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10985(t_small_parse_table_array *v)
{
	v->a[219700] = sym_number;
	v->a[219701] = sym_simple_expansion;
	v->a[219702] = sym_expansion;
	v->a[219703] = sym_command_substitution;
	v->a[219704] = sym_process_substitution;
	v->a[219705] = 18;
	v->a[219706] = actions(3);
	v->a[219707] = 1;
	v->a[219708] = sym_comment;
	v->a[219709] = actions(451);
	v->a[219710] = 1;
	v->a[219711] = anon_sym_DOLLAR_LBRACK;
	v->a[219712] = actions(457);
	v->a[219713] = 1;
	v->a[219714] = anon_sym_DQUOTE;
	v->a[219715] = actions(461);
	v->a[219716] = 1;
	v->a[219717] = aux_sym_number_token1;
	v->a[219718] = actions(463);
	v->a[219719] = 1;
	small_parse_table_10986(v);
}

void	small_parse_table_10986(t_small_parse_table_array *v)
{
	v->a[219720] = aux_sym_number_token2;
	v->a[219721] = actions(465);
	v->a[219722] = 1;
	v->a[219723] = anon_sym_DOLLAR_LBRACE;
	v->a[219724] = actions(467);
	v->a[219725] = 1;
	v->a[219726] = anon_sym_DOLLAR_LPAREN;
	v->a[219727] = actions(469);
	v->a[219728] = 1;
	v->a[219729] = anon_sym_BQUOTE;
	v->a[219730] = actions(471);
	v->a[219731] = 1;
	v->a[219732] = anon_sym_DOLLAR_BQUOTE;
	v->a[219733] = actions(481);
	v->a[219734] = 1;
	v->a[219735] = sym__brace_start;
	v->a[219736] = actions(10308);
	v->a[219737] = 1;
	v->a[219738] = sym_word;
	v->a[219739] = actions(10314);
	small_parse_table_10987(v);
}

void	small_parse_table_10987(t_small_parse_table_array *v)
{
	v->a[219740] = 1;
	v->a[219741] = sym__comment_word;
	v->a[219742] = actions(10462);
	v->a[219743] = 1;
	v->a[219744] = anon_sym_DOLLAR;
	v->a[219745] = actions(449);
	v->a[219746] = 2;
	v->a[219747] = anon_sym_LPAREN_LPAREN;
	v->a[219748] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[219749] = actions(473);
	v->a[219750] = 2;
	v->a[219751] = anon_sym_LT_LPAREN;
	v->a[219752] = anon_sym_GT_LPAREN;
	v->a[219753] = actions(10310);
	v->a[219754] = 2;
	v->a[219755] = sym_test_operator;
	v->a[219756] = sym__special_character;
	v->a[219757] = actions(10312);
	v->a[219758] = 3;
	v->a[219759] = sym__bare_dollar;
	small_parse_table_10988(v);
}

void	small_parse_table_10988(t_small_parse_table_array *v)
{
	v->a[219760] = sym_raw_string;
	v->a[219761] = sym_ansi_c_string;
	v->a[219762] = state(866);
	v->a[219763] = 9;
	v->a[219764] = sym_arithmetic_expansion;
	v->a[219765] = sym_brace_expression;
	v->a[219766] = sym_string;
	v->a[219767] = sym_translated_string;
	v->a[219768] = sym_number;
	v->a[219769] = sym_simple_expansion;
	v->a[219770] = sym_expansion;
	v->a[219771] = sym_command_substitution;
	v->a[219772] = sym_process_substitution;
	v->a[219773] = 18;
	v->a[219774] = actions(3);
	v->a[219775] = 1;
	v->a[219776] = sym_comment;
	v->a[219777] = actions(707);
	v->a[219778] = 1;
	v->a[219779] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10989(v);
}

void	small_parse_table_10989(t_small_parse_table_array *v)
{
	v->a[219780] = actions(709);
	v->a[219781] = 1;
	v->a[219782] = anon_sym_DOLLAR;
	v->a[219783] = actions(713);
	v->a[219784] = 1;
	v->a[219785] = anon_sym_DQUOTE;
	v->a[219786] = actions(717);
	v->a[219787] = 1;
	v->a[219788] = aux_sym_number_token1;
	v->a[219789] = actions(719);
	v->a[219790] = 1;
	v->a[219791] = aux_sym_number_token2;
	v->a[219792] = actions(721);
	v->a[219793] = 1;
	v->a[219794] = anon_sym_DOLLAR_LBRACE;
	v->a[219795] = actions(723);
	v->a[219796] = 1;
	v->a[219797] = anon_sym_DOLLAR_LPAREN;
	v->a[219798] = actions(725);
	v->a[219799] = 1;
	small_parse_table_10990(v);
}

/* EOF small_parse_table_2197.c */
