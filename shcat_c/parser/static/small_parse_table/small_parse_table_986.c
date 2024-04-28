/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_986.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4930(t_small_parse_table_array *v)
{
	v->a[98600] = anon_sym_DQUOTE;
	v->a[98601] = actions(375);
	v->a[98602] = 1;
	v->a[98603] = aux_sym_number_token1;
	v->a[98604] = actions(377);
	v->a[98605] = 1;
	v->a[98606] = aux_sym_number_token2;
	v->a[98607] = actions(379);
	v->a[98608] = 1;
	v->a[98609] = anon_sym_DOLLAR_LBRACE;
	v->a[98610] = actions(381);
	v->a[98611] = 1;
	v->a[98612] = anon_sym_DOLLAR_LPAREN;
	v->a[98613] = actions(385);
	v->a[98614] = 1;
	v->a[98615] = anon_sym_DOLLAR_BQUOTE;
	v->a[98616] = actions(389);
	v->a[98617] = 1;
	v->a[98618] = sym_test_operator;
	v->a[98619] = actions(391);
	small_parse_table_4931(v);
}

void	small_parse_table_4931(t_small_parse_table_array *v)
{
	v->a[98620] = 1;
	v->a[98621] = sym__brace_start;
	v->a[98622] = actions(5807);
	v->a[98623] = 1;
	v->a[98624] = sym__special_character;
	v->a[98625] = actions(5809);
	v->a[98626] = 1;
	v->a[98627] = anon_sym_BQUOTE;
	v->a[98628] = state(2641);
	v->a[98629] = 1;
	v->a[98630] = aux_sym__literal_repeat1;
	v->a[98631] = state(2959);
	v->a[98632] = 1;
	v->a[98633] = sym__expression;
	v->a[98634] = actions(183);
	v->a[98635] = 2;
	v->a[98636] = anon_sym_PLUS_PLUS2;
	v->a[98637] = anon_sym_DASH_DASH2;
	v->a[98638] = actions(185);
	v->a[98639] = 2;
	small_parse_table_4932(v);
}

void	small_parse_table_4932(t_small_parse_table_array *v)
{
	v->a[98640] = anon_sym_DASH2;
	v->a[98641] = anon_sym_PLUS2;
	v->a[98642] = actions(352);
	v->a[98643] = 2;
	v->a[98644] = anon_sym_LPAREN_LPAREN;
	v->a[98645] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98646] = actions(373);
	v->a[98647] = 2;
	v->a[98648] = sym_raw_string;
	v->a[98649] = sym_ansi_c_string;
	v->a[98650] = actions(387);
	v->a[98651] = 2;
	v->a[98652] = anon_sym_LT_LPAREN;
	v->a[98653] = anon_sym_GT_LPAREN;
	v->a[98654] = state(3071);
	v->a[98655] = 6;
	v->a[98656] = sym_binary_expression;
	v->a[98657] = sym_ternary_expression;
	v->a[98658] = sym_unary_expression;
	v->a[98659] = sym_postfix_expression;
	small_parse_table_4933(v);
}

void	small_parse_table_4933(t_small_parse_table_array *v)
{
	v->a[98660] = sym_parenthesized_expression;
	v->a[98661] = sym_concatenation;
	v->a[98662] = state(2521);
	v->a[98663] = 9;
	v->a[98664] = sym_arithmetic_expansion;
	v->a[98665] = sym_brace_expression;
	v->a[98666] = sym_string;
	v->a[98667] = sym_translated_string;
	v->a[98668] = sym_number;
	v->a[98669] = sym_simple_expansion;
	v->a[98670] = sym_expansion;
	v->a[98671] = sym_command_substitution;
	v->a[98672] = sym_process_substitution;
	v->a[98673] = 26;
	v->a[98674] = actions(71);
	v->a[98675] = 1;
	v->a[98676] = sym_comment;
	v->a[98677] = actions(187);
	v->a[98678] = 1;
	v->a[98679] = anon_sym_TILDE;
	small_parse_table_4934(v);
}

void	small_parse_table_4934(t_small_parse_table_array *v)
{
	v->a[98680] = actions(350);
	v->a[98681] = 1;
	v->a[98682] = sym_word;
	v->a[98683] = actions(359);
	v->a[98684] = 1;
	v->a[98685] = anon_sym_LPAREN;
	v->a[98686] = actions(361);
	v->a[98687] = 1;
	v->a[98688] = anon_sym_BANG;
	v->a[98689] = actions(363);
	v->a[98690] = 1;
	v->a[98691] = anon_sym_DOLLAR_LBRACK;
	v->a[98692] = actions(367);
	v->a[98693] = 1;
	v->a[98694] = anon_sym_DOLLAR;
	v->a[98695] = actions(371);
	v->a[98696] = 1;
	v->a[98697] = anon_sym_DQUOTE;
	v->a[98698] = actions(375);
	v->a[98699] = 1;
	small_parse_table_4935(v);
}

/* EOF small_parse_table_986.c */
