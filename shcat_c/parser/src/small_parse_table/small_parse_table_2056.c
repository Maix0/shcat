/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2056.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10280(t_small_parse_table_array *v)
{
	v->a[205600] = sym_comment;
	v->a[205601] = actions(4820);
	v->a[205602] = 1;
	v->a[205603] = anon_sym_DOLLAR_LBRACK;
	v->a[205604] = actions(4822);
	v->a[205605] = 1;
	v->a[205606] = anon_sym_DOLLAR;
	v->a[205607] = actions(4826);
	v->a[205608] = 1;
	v->a[205609] = anon_sym_DQUOTE;
	v->a[205610] = actions(4830);
	v->a[205611] = 1;
	v->a[205612] = aux_sym_number_token1;
	v->a[205613] = actions(4832);
	v->a[205614] = 1;
	v->a[205615] = aux_sym_number_token2;
	v->a[205616] = actions(4834);
	v->a[205617] = 1;
	v->a[205618] = anon_sym_DOLLAR_LBRACE;
	v->a[205619] = actions(4836);
	small_parse_table_10281(v);
}

void	small_parse_table_10281(t_small_parse_table_array *v)
{
	v->a[205620] = 1;
	v->a[205621] = anon_sym_DOLLAR_LPAREN;
	v->a[205622] = actions(4838);
	v->a[205623] = 1;
	v->a[205624] = anon_sym_BQUOTE;
	v->a[205625] = actions(4840);
	v->a[205626] = 1;
	v->a[205627] = anon_sym_DOLLAR_BQUOTE;
	v->a[205628] = actions(4848);
	v->a[205629] = 1;
	v->a[205630] = sym__brace_start;
	v->a[205631] = actions(9534);
	v->a[205632] = 1;
	v->a[205633] = sym_word;
	v->a[205634] = actions(9540);
	v->a[205635] = 1;
	v->a[205636] = sym__comment_word;
	v->a[205637] = actions(4818);
	v->a[205638] = 2;
	v->a[205639] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10282(v);
}

void	small_parse_table_10282(t_small_parse_table_array *v)
{
	v->a[205640] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[205641] = actions(4842);
	v->a[205642] = 2;
	v->a[205643] = anon_sym_LT_LPAREN;
	v->a[205644] = anon_sym_GT_LPAREN;
	v->a[205645] = actions(9536);
	v->a[205646] = 2;
	v->a[205647] = sym_test_operator;
	v->a[205648] = sym__special_character;
	v->a[205649] = actions(9538);
	v->a[205650] = 3;
	v->a[205651] = sym__bare_dollar;
	v->a[205652] = sym_raw_string;
	v->a[205653] = sym_ansi_c_string;
	v->a[205654] = state(2707);
	v->a[205655] = 9;
	v->a[205656] = sym_arithmetic_expansion;
	v->a[205657] = sym_brace_expression;
	v->a[205658] = sym_string;
	v->a[205659] = sym_translated_string;
	small_parse_table_10283(v);
}

void	small_parse_table_10283(t_small_parse_table_array *v)
{
	v->a[205660] = sym_number;
	v->a[205661] = sym_simple_expansion;
	v->a[205662] = sym_expansion;
	v->a[205663] = sym_command_substitution;
	v->a[205664] = sym_process_substitution;
	v->a[205665] = 20;
	v->a[205666] = actions(71);
	v->a[205667] = 1;
	v->a[205668] = sym_comment;
	v->a[205669] = actions(5870);
	v->a[205670] = 1;
	v->a[205671] = anon_sym_DOLLAR;
	v->a[205672] = actions(5876);
	v->a[205673] = 1;
	v->a[205674] = aux_sym_number_token1;
	v->a[205675] = actions(5878);
	v->a[205676] = 1;
	v->a[205677] = aux_sym_number_token2;
	v->a[205678] = actions(5882);
	v->a[205679] = 1;
	small_parse_table_10284(v);
}

void	small_parse_table_10284(t_small_parse_table_array *v)
{
	v->a[205680] = anon_sym_DOLLAR_LPAREN;
	v->a[205681] = actions(5892);
	v->a[205682] = 1;
	v->a[205683] = sym__brace_start;
	v->a[205684] = actions(9542);
	v->a[205685] = 1;
	v->a[205686] = sym_word;
	v->a[205687] = actions(9546);
	v->a[205688] = 1;
	v->a[205689] = anon_sym_DOLLAR_LBRACK;
	v->a[205690] = actions(9548);
	v->a[205691] = 1;
	v->a[205692] = sym__special_character;
	v->a[205693] = actions(9550);
	v->a[205694] = 1;
	v->a[205695] = anon_sym_DQUOTE;
	v->a[205696] = actions(9554);
	v->a[205697] = 1;
	v->a[205698] = anon_sym_DOLLAR_LBRACE;
	v->a[205699] = actions(9556);
	small_parse_table_10285(v);
}

/* EOF small_parse_table_2056.c */
