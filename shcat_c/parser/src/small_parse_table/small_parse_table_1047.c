/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1047.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5235(t_small_parse_table_array *v)
{
	v->a[104700] = sym_expansion;
	v->a[104701] = sym_command_substitution;
	v->a[104702] = sym_process_substitution;
	v->a[104703] = 26;
	v->a[104704] = actions(71);
	v->a[104705] = 1;
	v->a[104706] = sym_comment;
	v->a[104707] = actions(363);
	v->a[104708] = 1;
	v->a[104709] = anon_sym_DOLLAR_LBRACK;
	v->a[104710] = actions(367);
	v->a[104711] = 1;
	v->a[104712] = anon_sym_DOLLAR;
	v->a[104713] = actions(371);
	v->a[104714] = 1;
	v->a[104715] = anon_sym_DQUOTE;
	v->a[104716] = actions(375);
	v->a[104717] = 1;
	v->a[104718] = aux_sym_number_token1;
	v->a[104719] = actions(377);
	small_parse_table_5236(v);
}

void	small_parse_table_5236(t_small_parse_table_array *v)
{
	v->a[104720] = 1;
	v->a[104721] = aux_sym_number_token2;
	v->a[104722] = actions(379);
	v->a[104723] = 1;
	v->a[104724] = anon_sym_DOLLAR_LBRACE;
	v->a[104725] = actions(381);
	v->a[104726] = 1;
	v->a[104727] = anon_sym_DOLLAR_LPAREN;
	v->a[104728] = actions(385);
	v->a[104729] = 1;
	v->a[104730] = anon_sym_DOLLAR_BQUOTE;
	v->a[104731] = actions(391);
	v->a[104732] = 1;
	v->a[104733] = sym__brace_start;
	v->a[104734] = actions(1091);
	v->a[104735] = 1;
	v->a[104736] = sym_word;
	v->a[104737] = actions(1093);
	v->a[104738] = 1;
	v->a[104739] = anon_sym_LPAREN;
	small_parse_table_5237(v);
}

void	small_parse_table_5237(t_small_parse_table_array *v)
{
	v->a[104740] = actions(1095);
	v->a[104741] = 1;
	v->a[104742] = anon_sym_BANG;
	v->a[104743] = actions(1103);
	v->a[104744] = 1;
	v->a[104745] = anon_sym_TILDE;
	v->a[104746] = actions(1113);
	v->a[104747] = 1;
	v->a[104748] = sym_test_operator;
	v->a[104749] = actions(5809);
	v->a[104750] = 1;
	v->a[104751] = anon_sym_BQUOTE;
	v->a[104752] = actions(5916);
	v->a[104753] = 1;
	v->a[104754] = sym__special_character;
	v->a[104755] = state(2472);
	v->a[104756] = 1;
	v->a[104757] = aux_sym__literal_repeat1;
	v->a[104758] = state(2832);
	v->a[104759] = 1;
	small_parse_table_5238(v);
}

void	small_parse_table_5238(t_small_parse_table_array *v)
{
	v->a[104760] = sym__expression;
	v->a[104761] = actions(352);
	v->a[104762] = 2;
	v->a[104763] = anon_sym_LPAREN_LPAREN;
	v->a[104764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104765] = actions(387);
	v->a[104766] = 2;
	v->a[104767] = anon_sym_LT_LPAREN;
	v->a[104768] = anon_sym_GT_LPAREN;
	v->a[104769] = actions(1099);
	v->a[104770] = 2;
	v->a[104771] = anon_sym_PLUS_PLUS2;
	v->a[104772] = anon_sym_DASH_DASH2;
	v->a[104773] = actions(1101);
	v->a[104774] = 2;
	v->a[104775] = anon_sym_DASH2;
	v->a[104776] = anon_sym_PLUS2;
	v->a[104777] = actions(1109);
	v->a[104778] = 2;
	v->a[104779] = sym_raw_string;
	small_parse_table_5239(v);
}

void	small_parse_table_5239(t_small_parse_table_array *v)
{
	v->a[104780] = sym_ansi_c_string;
	v->a[104781] = state(2863);
	v->a[104782] = 6;
	v->a[104783] = sym_binary_expression;
	v->a[104784] = sym_ternary_expression;
	v->a[104785] = sym_unary_expression;
	v->a[104786] = sym_postfix_expression;
	v->a[104787] = sym_parenthesized_expression;
	v->a[104788] = sym_concatenation;
	v->a[104789] = state(2451);
	v->a[104790] = 9;
	v->a[104791] = sym_arithmetic_expansion;
	v->a[104792] = sym_brace_expression;
	v->a[104793] = sym_string;
	v->a[104794] = sym_translated_string;
	v->a[104795] = sym_number;
	v->a[104796] = sym_simple_expansion;
	v->a[104797] = sym_expansion;
	v->a[104798] = sym_command_substitution;
	v->a[104799] = sym_process_substitution;
	small_parse_table_5240(v);
}

/* EOF small_parse_table_1047.c */
