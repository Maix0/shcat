/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_976.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4880(t_small_parse_table_array *v)
{
	v->a[97600] = anon_sym_GT_LPAREN;
	v->a[97601] = 26;
	v->a[97602] = actions(71);
	v->a[97603] = 1;
	v->a[97604] = sym_comment;
	v->a[97605] = actions(187);
	v->a[97606] = 1;
	v->a[97607] = anon_sym_TILDE;
	v->a[97608] = actions(350);
	v->a[97609] = 1;
	v->a[97610] = sym_word;
	v->a[97611] = actions(359);
	v->a[97612] = 1;
	v->a[97613] = anon_sym_LPAREN;
	v->a[97614] = actions(361);
	v->a[97615] = 1;
	v->a[97616] = anon_sym_BANG;
	v->a[97617] = actions(363);
	v->a[97618] = 1;
	v->a[97619] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_4881(v);
}

void	small_parse_table_4881(t_small_parse_table_array *v)
{
	v->a[97620] = actions(367);
	v->a[97621] = 1;
	v->a[97622] = anon_sym_DOLLAR;
	v->a[97623] = actions(371);
	v->a[97624] = 1;
	v->a[97625] = anon_sym_DQUOTE;
	v->a[97626] = actions(375);
	v->a[97627] = 1;
	v->a[97628] = aux_sym_number_token1;
	v->a[97629] = actions(377);
	v->a[97630] = 1;
	v->a[97631] = aux_sym_number_token2;
	v->a[97632] = actions(379);
	v->a[97633] = 1;
	v->a[97634] = anon_sym_DOLLAR_LBRACE;
	v->a[97635] = actions(381);
	v->a[97636] = 1;
	v->a[97637] = anon_sym_DOLLAR_LPAREN;
	v->a[97638] = actions(385);
	v->a[97639] = 1;
	small_parse_table_4882(v);
}

void	small_parse_table_4882(t_small_parse_table_array *v)
{
	v->a[97640] = anon_sym_DOLLAR_BQUOTE;
	v->a[97641] = actions(389);
	v->a[97642] = 1;
	v->a[97643] = sym_test_operator;
	v->a[97644] = actions(391);
	v->a[97645] = 1;
	v->a[97646] = sym__brace_start;
	v->a[97647] = actions(5807);
	v->a[97648] = 1;
	v->a[97649] = sym__special_character;
	v->a[97650] = actions(5809);
	v->a[97651] = 1;
	v->a[97652] = anon_sym_BQUOTE;
	v->a[97653] = state(2641);
	v->a[97654] = 1;
	v->a[97655] = aux_sym__literal_repeat1;
	v->a[97656] = state(2988);
	v->a[97657] = 1;
	v->a[97658] = sym__expression;
	v->a[97659] = actions(183);
	small_parse_table_4883(v);
}

void	small_parse_table_4883(t_small_parse_table_array *v)
{
	v->a[97660] = 2;
	v->a[97661] = anon_sym_PLUS_PLUS2;
	v->a[97662] = anon_sym_DASH_DASH2;
	v->a[97663] = actions(185);
	v->a[97664] = 2;
	v->a[97665] = anon_sym_DASH2;
	v->a[97666] = anon_sym_PLUS2;
	v->a[97667] = actions(352);
	v->a[97668] = 2;
	v->a[97669] = anon_sym_LPAREN_LPAREN;
	v->a[97670] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97671] = actions(373);
	v->a[97672] = 2;
	v->a[97673] = sym_raw_string;
	v->a[97674] = sym_ansi_c_string;
	v->a[97675] = actions(387);
	v->a[97676] = 2;
	v->a[97677] = anon_sym_LT_LPAREN;
	v->a[97678] = anon_sym_GT_LPAREN;
	v->a[97679] = state(3071);
	small_parse_table_4884(v);
}

void	small_parse_table_4884(t_small_parse_table_array *v)
{
	v->a[97680] = 6;
	v->a[97681] = sym_binary_expression;
	v->a[97682] = sym_ternary_expression;
	v->a[97683] = sym_unary_expression;
	v->a[97684] = sym_postfix_expression;
	v->a[97685] = sym_parenthesized_expression;
	v->a[97686] = sym_concatenation;
	v->a[97687] = state(2521);
	v->a[97688] = 9;
	v->a[97689] = sym_arithmetic_expansion;
	v->a[97690] = sym_brace_expression;
	v->a[97691] = sym_string;
	v->a[97692] = sym_translated_string;
	v->a[97693] = sym_number;
	v->a[97694] = sym_simple_expansion;
	v->a[97695] = sym_expansion;
	v->a[97696] = sym_command_substitution;
	v->a[97697] = sym_process_substitution;
	v->a[97698] = 3;
	v->a[97699] = actions(3);
	small_parse_table_4885(v);
}

/* EOF small_parse_table_976.c */
