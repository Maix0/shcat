/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_987.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4935(t_small_parse_table_array *v)
{
	v->a[98700] = aux_sym_number_token1;
	v->a[98701] = actions(377);
	v->a[98702] = 1;
	v->a[98703] = aux_sym_number_token2;
	v->a[98704] = actions(379);
	v->a[98705] = 1;
	v->a[98706] = anon_sym_DOLLAR_LBRACE;
	v->a[98707] = actions(381);
	v->a[98708] = 1;
	v->a[98709] = anon_sym_DOLLAR_LPAREN;
	v->a[98710] = actions(385);
	v->a[98711] = 1;
	v->a[98712] = anon_sym_DOLLAR_BQUOTE;
	v->a[98713] = actions(389);
	v->a[98714] = 1;
	v->a[98715] = sym_test_operator;
	v->a[98716] = actions(391);
	v->a[98717] = 1;
	v->a[98718] = sym__brace_start;
	v->a[98719] = actions(5807);
	small_parse_table_4936(v);
}

void	small_parse_table_4936(t_small_parse_table_array *v)
{
	v->a[98720] = 1;
	v->a[98721] = sym__special_character;
	v->a[98722] = actions(5809);
	v->a[98723] = 1;
	v->a[98724] = anon_sym_BQUOTE;
	v->a[98725] = state(2641);
	v->a[98726] = 1;
	v->a[98727] = aux_sym__literal_repeat1;
	v->a[98728] = state(2958);
	v->a[98729] = 1;
	v->a[98730] = sym__expression;
	v->a[98731] = actions(183);
	v->a[98732] = 2;
	v->a[98733] = anon_sym_PLUS_PLUS2;
	v->a[98734] = anon_sym_DASH_DASH2;
	v->a[98735] = actions(185);
	v->a[98736] = 2;
	v->a[98737] = anon_sym_DASH2;
	v->a[98738] = anon_sym_PLUS2;
	v->a[98739] = actions(352);
	small_parse_table_4937(v);
}

void	small_parse_table_4937(t_small_parse_table_array *v)
{
	v->a[98740] = 2;
	v->a[98741] = anon_sym_LPAREN_LPAREN;
	v->a[98742] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98743] = actions(373);
	v->a[98744] = 2;
	v->a[98745] = sym_raw_string;
	v->a[98746] = sym_ansi_c_string;
	v->a[98747] = actions(387);
	v->a[98748] = 2;
	v->a[98749] = anon_sym_LT_LPAREN;
	v->a[98750] = anon_sym_GT_LPAREN;
	v->a[98751] = state(3071);
	v->a[98752] = 6;
	v->a[98753] = sym_binary_expression;
	v->a[98754] = sym_ternary_expression;
	v->a[98755] = sym_unary_expression;
	v->a[98756] = sym_postfix_expression;
	v->a[98757] = sym_parenthesized_expression;
	v->a[98758] = sym_concatenation;
	v->a[98759] = state(2521);
	small_parse_table_4938(v);
}

void	small_parse_table_4938(t_small_parse_table_array *v)
{
	v->a[98760] = 9;
	v->a[98761] = sym_arithmetic_expansion;
	v->a[98762] = sym_brace_expression;
	v->a[98763] = sym_string;
	v->a[98764] = sym_translated_string;
	v->a[98765] = sym_number;
	v->a[98766] = sym_simple_expansion;
	v->a[98767] = sym_expansion;
	v->a[98768] = sym_command_substitution;
	v->a[98769] = sym_process_substitution;
	v->a[98770] = 26;
	v->a[98771] = actions(71);
	v->a[98772] = 1;
	v->a[98773] = sym_comment;
	v->a[98774] = actions(187);
	v->a[98775] = 1;
	v->a[98776] = anon_sym_TILDE;
	v->a[98777] = actions(350);
	v->a[98778] = 1;
	v->a[98779] = sym_word;
	small_parse_table_4939(v);
}

void	small_parse_table_4939(t_small_parse_table_array *v)
{
	v->a[98780] = actions(359);
	v->a[98781] = 1;
	v->a[98782] = anon_sym_LPAREN;
	v->a[98783] = actions(361);
	v->a[98784] = 1;
	v->a[98785] = anon_sym_BANG;
	v->a[98786] = actions(363);
	v->a[98787] = 1;
	v->a[98788] = anon_sym_DOLLAR_LBRACK;
	v->a[98789] = actions(367);
	v->a[98790] = 1;
	v->a[98791] = anon_sym_DOLLAR;
	v->a[98792] = actions(371);
	v->a[98793] = 1;
	v->a[98794] = anon_sym_DQUOTE;
	v->a[98795] = actions(375);
	v->a[98796] = 1;
	v->a[98797] = aux_sym_number_token1;
	v->a[98798] = actions(377);
	v->a[98799] = 1;
	small_parse_table_4940(v);
}

/* EOF small_parse_table_987.c */
