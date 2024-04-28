/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1087.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5435(t_small_parse_table_array *v)
{
	v->a[108700] = anon_sym_GT_LPAREN;
	v->a[108701] = sym_word;
	v->a[108702] = 26;
	v->a[108703] = actions(71);
	v->a[108704] = 1;
	v->a[108705] = sym_comment;
	v->a[108706] = actions(187);
	v->a[108707] = 1;
	v->a[108708] = anon_sym_TILDE;
	v->a[108709] = actions(350);
	v->a[108710] = 1;
	v->a[108711] = sym_word;
	v->a[108712] = actions(359);
	v->a[108713] = 1;
	v->a[108714] = anon_sym_LPAREN;
	v->a[108715] = actions(361);
	v->a[108716] = 1;
	v->a[108717] = anon_sym_BANG;
	v->a[108718] = actions(363);
	v->a[108719] = 1;
	small_parse_table_5436(v);
}

void	small_parse_table_5436(t_small_parse_table_array *v)
{
	v->a[108720] = anon_sym_DOLLAR_LBRACK;
	v->a[108721] = actions(367);
	v->a[108722] = 1;
	v->a[108723] = anon_sym_DOLLAR;
	v->a[108724] = actions(371);
	v->a[108725] = 1;
	v->a[108726] = anon_sym_DQUOTE;
	v->a[108727] = actions(375);
	v->a[108728] = 1;
	v->a[108729] = aux_sym_number_token1;
	v->a[108730] = actions(377);
	v->a[108731] = 1;
	v->a[108732] = aux_sym_number_token2;
	v->a[108733] = actions(379);
	v->a[108734] = 1;
	v->a[108735] = anon_sym_DOLLAR_LBRACE;
	v->a[108736] = actions(381);
	v->a[108737] = 1;
	v->a[108738] = anon_sym_DOLLAR_LPAREN;
	v->a[108739] = actions(385);
	small_parse_table_5437(v);
}

void	small_parse_table_5437(t_small_parse_table_array *v)
{
	v->a[108740] = 1;
	v->a[108741] = anon_sym_DOLLAR_BQUOTE;
	v->a[108742] = actions(389);
	v->a[108743] = 1;
	v->a[108744] = sym_test_operator;
	v->a[108745] = actions(391);
	v->a[108746] = 1;
	v->a[108747] = sym__brace_start;
	v->a[108748] = actions(5807);
	v->a[108749] = 1;
	v->a[108750] = sym__special_character;
	v->a[108751] = actions(5809);
	v->a[108752] = 1;
	v->a[108753] = anon_sym_BQUOTE;
	v->a[108754] = state(2641);
	v->a[108755] = 1;
	v->a[108756] = aux_sym__literal_repeat1;
	v->a[108757] = state(3009);
	v->a[108758] = 1;
	v->a[108759] = sym__expression;
	small_parse_table_5438(v);
}

void	small_parse_table_5438(t_small_parse_table_array *v)
{
	v->a[108760] = actions(183);
	v->a[108761] = 2;
	v->a[108762] = anon_sym_PLUS_PLUS2;
	v->a[108763] = anon_sym_DASH_DASH2;
	v->a[108764] = actions(185);
	v->a[108765] = 2;
	v->a[108766] = anon_sym_DASH2;
	v->a[108767] = anon_sym_PLUS2;
	v->a[108768] = actions(352);
	v->a[108769] = 2;
	v->a[108770] = anon_sym_LPAREN_LPAREN;
	v->a[108771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108772] = actions(373);
	v->a[108773] = 2;
	v->a[108774] = sym_raw_string;
	v->a[108775] = sym_ansi_c_string;
	v->a[108776] = actions(387);
	v->a[108777] = 2;
	v->a[108778] = anon_sym_LT_LPAREN;
	v->a[108779] = anon_sym_GT_LPAREN;
	small_parse_table_5439(v);
}

void	small_parse_table_5439(t_small_parse_table_array *v)
{
	v->a[108780] = state(3071);
	v->a[108781] = 6;
	v->a[108782] = sym_binary_expression;
	v->a[108783] = sym_ternary_expression;
	v->a[108784] = sym_unary_expression;
	v->a[108785] = sym_postfix_expression;
	v->a[108786] = sym_parenthesized_expression;
	v->a[108787] = sym_concatenation;
	v->a[108788] = state(2521);
	v->a[108789] = 9;
	v->a[108790] = sym_arithmetic_expansion;
	v->a[108791] = sym_brace_expression;
	v->a[108792] = sym_string;
	v->a[108793] = sym_translated_string;
	v->a[108794] = sym_number;
	v->a[108795] = sym_simple_expansion;
	v->a[108796] = sym_expansion;
	v->a[108797] = sym_command_substitution;
	v->a[108798] = sym_process_substitution;
	v->a[108799] = 26;
	small_parse_table_5440(v);
}

/* EOF small_parse_table_1087.c */
