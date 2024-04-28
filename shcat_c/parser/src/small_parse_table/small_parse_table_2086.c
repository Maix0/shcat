/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2086.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10430(t_small_parse_table_array *v)
{
	v->a[208600] = actions(9810);
	v->a[208601] = 1;
	v->a[208602] = anon_sym_DOLLAR_LBRACE;
	v->a[208603] = actions(9812);
	v->a[208604] = 1;
	v->a[208605] = anon_sym_BQUOTE;
	v->a[208606] = actions(9814);
	v->a[208607] = 1;
	v->a[208608] = anon_sym_DOLLAR_BQUOTE;
	v->a[208609] = actions(9818);
	v->a[208610] = 1;
	v->a[208611] = sym_test_operator;
	v->a[208612] = state(4538);
	v->a[208613] = 1;
	v->a[208614] = aux_sym__literal_repeat1;
	v->a[208615] = state(4930);
	v->a[208616] = 1;
	v->a[208617] = sym_concatenation;
	v->a[208618] = actions(9800);
	v->a[208619] = 2;
	small_parse_table_10431(v);
}

void	small_parse_table_10431(t_small_parse_table_array *v)
{
	v->a[208620] = anon_sym_LPAREN_LPAREN;
	v->a[208621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208622] = actions(9808);
	v->a[208623] = 2;
	v->a[208624] = sym_raw_string;
	v->a[208625] = sym_ansi_c_string;
	v->a[208626] = actions(9816);
	v->a[208627] = 2;
	v->a[208628] = anon_sym_LT_LPAREN;
	v->a[208629] = anon_sym_GT_LPAREN;
	v->a[208630] = state(4292);
	v->a[208631] = 9;
	v->a[208632] = sym_arithmetic_expansion;
	v->a[208633] = sym_brace_expression;
	v->a[208634] = sym_string;
	v->a[208635] = sym_translated_string;
	v->a[208636] = sym_number;
	v->a[208637] = sym_simple_expansion;
	v->a[208638] = sym_expansion;
	v->a[208639] = sym_command_substitution;
	small_parse_table_10432(v);
}

void	small_parse_table_10432(t_small_parse_table_array *v)
{
	v->a[208640] = sym_process_substitution;
	v->a[208641] = 18;
	v->a[208642] = actions(3);
	v->a[208643] = 1;
	v->a[208644] = sym_comment;
	v->a[208645] = actions(1767);
	v->a[208646] = 1;
	v->a[208647] = aux_sym_number_token1;
	v->a[208648] = actions(1769);
	v->a[208649] = 1;
	v->a[208650] = aux_sym_number_token2;
	v->a[208651] = actions(1773);
	v->a[208652] = 1;
	v->a[208653] = anon_sym_DOLLAR_LPAREN;
	v->a[208654] = actions(1787);
	v->a[208655] = 1;
	v->a[208656] = sym__brace_start;
	v->a[208657] = actions(8426);
	v->a[208658] = 1;
	v->a[208659] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10433(v);
}

void	small_parse_table_10433(t_small_parse_table_array *v)
{
	v->a[208660] = actions(8430);
	v->a[208661] = 1;
	v->a[208662] = anon_sym_DQUOTE;
	v->a[208663] = actions(8434);
	v->a[208664] = 1;
	v->a[208665] = anon_sym_DOLLAR_LBRACE;
	v->a[208666] = actions(8436);
	v->a[208667] = 1;
	v->a[208668] = anon_sym_BQUOTE;
	v->a[208669] = actions(8438);
	v->a[208670] = 1;
	v->a[208671] = anon_sym_DOLLAR_BQUOTE;
	v->a[208672] = actions(9820);
	v->a[208673] = 1;
	v->a[208674] = sym_word;
	v->a[208675] = actions(9822);
	v->a[208676] = 1;
	v->a[208677] = anon_sym_DOLLAR;
	v->a[208678] = actions(9828);
	v->a[208679] = 1;
	small_parse_table_10434(v);
}

void	small_parse_table_10434(t_small_parse_table_array *v)
{
	v->a[208680] = sym__comment_word;
	v->a[208681] = actions(8422);
	v->a[208682] = 2;
	v->a[208683] = anon_sym_LPAREN_LPAREN;
	v->a[208684] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208685] = actions(8440);
	v->a[208686] = 2;
	v->a[208687] = anon_sym_LT_LPAREN;
	v->a[208688] = anon_sym_GT_LPAREN;
	v->a[208689] = actions(9824);
	v->a[208690] = 2;
	v->a[208691] = sym_test_operator;
	v->a[208692] = sym__special_character;
	v->a[208693] = actions(9826);
	v->a[208694] = 3;
	v->a[208695] = sym__bare_dollar;
	v->a[208696] = sym_raw_string;
	v->a[208697] = sym_ansi_c_string;
	v->a[208698] = state(1207);
	v->a[208699] = 9;
	small_parse_table_10435(v);
}

/* EOF small_parse_table_2086.c */
