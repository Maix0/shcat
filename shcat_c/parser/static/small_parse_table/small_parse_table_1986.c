/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1986.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9930(t_small_parse_table_array *v)
{
	v->a[198600] = actions(8528);
	v->a[198601] = 1;
	v->a[198602] = anon_sym_DOLLAR_LPAREN;
	v->a[198603] = actions(8530);
	v->a[198604] = 1;
	v->a[198605] = anon_sym_BQUOTE;
	v->a[198606] = actions(8532);
	v->a[198607] = 1;
	v->a[198608] = anon_sym_DOLLAR_BQUOTE;
	v->a[198609] = actions(8542);
	v->a[198610] = 1;
	v->a[198611] = sym__brace_start;
	v->a[198612] = actions(8984);
	v->a[198613] = 1;
	v->a[198614] = sym_word;
	v->a[198615] = actions(8988);
	v->a[198616] = 1;
	v->a[198617] = sym_test_operator;
	v->a[198618] = state(2671);
	v->a[198619] = 1;
	small_parse_table_9931(v);
}

void	small_parse_table_9931(t_small_parse_table_array *v)
{
	v->a[198620] = aux_sym__literal_repeat1;
	v->a[198621] = actions(8508);
	v->a[198622] = 2;
	v->a[198623] = anon_sym_LPAREN_LPAREN;
	v->a[198624] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198625] = actions(8534);
	v->a[198626] = 2;
	v->a[198627] = anon_sym_LT_LPAREN;
	v->a[198628] = anon_sym_GT_LPAREN;
	v->a[198629] = actions(8986);
	v->a[198630] = 2;
	v->a[198631] = sym_raw_string;
	v->a[198632] = sym_ansi_c_string;
	v->a[198633] = state(870);
	v->a[198634] = 2;
	v->a[198635] = sym_concatenation;
	v->a[198636] = aux_sym_for_statement_repeat1;
	v->a[198637] = state(2369);
	v->a[198638] = 9;
	v->a[198639] = sym_arithmetic_expansion;
	small_parse_table_9932(v);
}

void	small_parse_table_9932(t_small_parse_table_array *v)
{
	v->a[198640] = sym_brace_expression;
	v->a[198641] = sym_string;
	v->a[198642] = sym_translated_string;
	v->a[198643] = sym_number;
	v->a[198644] = sym_simple_expansion;
	v->a[198645] = sym_expansion;
	v->a[198646] = sym_command_substitution;
	v->a[198647] = sym_process_substitution;
	v->a[198648] = 20;
	v->a[198649] = actions(71);
	v->a[198650] = 1;
	v->a[198651] = sym_comment;
	v->a[198652] = actions(3876);
	v->a[198653] = 1;
	v->a[198654] = sym_word;
	v->a[198655] = actions(3882);
	v->a[198656] = 1;
	v->a[198657] = anon_sym_DOLLAR;
	v->a[198658] = actions(3886);
	v->a[198659] = 1;
	small_parse_table_9933(v);
}

void	small_parse_table_9933(t_small_parse_table_array *v)
{
	v->a[198660] = aux_sym_number_token1;
	v->a[198661] = actions(3888);
	v->a[198662] = 1;
	v->a[198663] = aux_sym_number_token2;
	v->a[198664] = actions(3892);
	v->a[198665] = 1;
	v->a[198666] = anon_sym_DOLLAR_LPAREN;
	v->a[198667] = actions(3900);
	v->a[198668] = 1;
	v->a[198669] = sym_test_operator;
	v->a[198670] = actions(3902);
	v->a[198671] = 1;
	v->a[198672] = sym__brace_start;
	v->a[198673] = actions(8992);
	v->a[198674] = 1;
	v->a[198675] = anon_sym_DOLLAR_LBRACK;
	v->a[198676] = actions(8994);
	v->a[198677] = 1;
	v->a[198678] = sym__special_character;
	v->a[198679] = actions(8996);
	small_parse_table_9934(v);
}

void	small_parse_table_9934(t_small_parse_table_array *v)
{
	v->a[198680] = 1;
	v->a[198681] = anon_sym_DQUOTE;
	v->a[198682] = actions(9000);
	v->a[198683] = 1;
	v->a[198684] = anon_sym_DOLLAR_LBRACE;
	v->a[198685] = actions(9002);
	v->a[198686] = 1;
	v->a[198687] = anon_sym_BQUOTE;
	v->a[198688] = actions(9004);
	v->a[198689] = 1;
	v->a[198690] = anon_sym_DOLLAR_BQUOTE;
	v->a[198691] = state(2281);
	v->a[198692] = 1;
	v->a[198693] = aux_sym__literal_repeat1;
	v->a[198694] = actions(8990);
	v->a[198695] = 2;
	v->a[198696] = anon_sym_LPAREN_LPAREN;
	v->a[198697] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198698] = actions(8998);
	v->a[198699] = 2;
	small_parse_table_9935(v);
}

/* EOF small_parse_table_1986.c */
