/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2366.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11830(t_small_parse_table_array *v)
{
	v->a[236600] = anon_sym_DASH2;
	v->a[236601] = anon_sym_PLUS2;
	v->a[236602] = state(3274);
	v->a[236603] = 9;
	v->a[236604] = sym_subscript;
	v->a[236605] = sym__arithmetic_expression;
	v->a[236606] = sym__arithmetic_literal;
	v->a[236607] = sym__arithmetic_parenthesized_expression;
	v->a[236608] = sym_string;
	v->a[236609] = sym_number;
	v->a[236610] = sym_simple_expansion;
	v->a[236611] = sym_expansion;
	v->a[236612] = sym_command_substitution;
	v->a[236613] = 18;
	v->a[236614] = actions(3);
	v->a[236615] = 1;
	v->a[236616] = sym_comment;
	v->a[236617] = actions(4820);
	v->a[236618] = 1;
	v->a[236619] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11831(v);
}

void	small_parse_table_11831(t_small_parse_table_array *v)
{
	v->a[236620] = actions(4826);
	v->a[236621] = 1;
	v->a[236622] = anon_sym_DQUOTE;
	v->a[236623] = actions(4830);
	v->a[236624] = 1;
	v->a[236625] = aux_sym_number_token1;
	v->a[236626] = actions(4832);
	v->a[236627] = 1;
	v->a[236628] = aux_sym_number_token2;
	v->a[236629] = actions(4834);
	v->a[236630] = 1;
	v->a[236631] = anon_sym_DOLLAR_LBRACE;
	v->a[236632] = actions(4836);
	v->a[236633] = 1;
	v->a[236634] = anon_sym_DOLLAR_LPAREN;
	v->a[236635] = actions(4838);
	v->a[236636] = 1;
	v->a[236637] = anon_sym_BQUOTE;
	v->a[236638] = actions(4840);
	v->a[236639] = 1;
	small_parse_table_11832(v);
}

void	small_parse_table_11832(t_small_parse_table_array *v)
{
	v->a[236640] = anon_sym_DOLLAR_BQUOTE;
	v->a[236641] = actions(4848);
	v->a[236642] = 1;
	v->a[236643] = sym__brace_start;
	v->a[236644] = actions(9534);
	v->a[236645] = 1;
	v->a[236646] = sym_word;
	v->a[236647] = actions(9540);
	v->a[236648] = 1;
	v->a[236649] = sym__comment_word;
	v->a[236650] = actions(11144);
	v->a[236651] = 1;
	v->a[236652] = anon_sym_DOLLAR;
	v->a[236653] = actions(4818);
	v->a[236654] = 2;
	v->a[236655] = anon_sym_LPAREN_LPAREN;
	v->a[236656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[236657] = actions(4842);
	v->a[236658] = 2;
	v->a[236659] = anon_sym_LT_LPAREN;
	small_parse_table_11833(v);
}

void	small_parse_table_11833(t_small_parse_table_array *v)
{
	v->a[236660] = anon_sym_GT_LPAREN;
	v->a[236661] = actions(9536);
	v->a[236662] = 2;
	v->a[236663] = sym_test_operator;
	v->a[236664] = sym__special_character;
	v->a[236665] = actions(9538);
	v->a[236666] = 3;
	v->a[236667] = sym__bare_dollar;
	v->a[236668] = sym_raw_string;
	v->a[236669] = sym_ansi_c_string;
	v->a[236670] = state(2707);
	v->a[236671] = 9;
	v->a[236672] = sym_arithmetic_expansion;
	v->a[236673] = sym_brace_expression;
	v->a[236674] = sym_string;
	v->a[236675] = sym_translated_string;
	v->a[236676] = sym_number;
	v->a[236677] = sym_simple_expansion;
	v->a[236678] = sym_expansion;
	v->a[236679] = sym_command_substitution;
	small_parse_table_11834(v);
}

void	small_parse_table_11834(t_small_parse_table_array *v)
{
	v->a[236680] = sym_process_substitution;
	v->a[236681] = 18;
	v->a[236682] = actions(3);
	v->a[236683] = 1;
	v->a[236684] = sym_comment;
	v->a[236685] = actions(8178);
	v->a[236686] = 1;
	v->a[236687] = anon_sym_DOLLAR_LBRACK;
	v->a[236688] = actions(8184);
	v->a[236689] = 1;
	v->a[236690] = anon_sym_DQUOTE;
	v->a[236691] = actions(8188);
	v->a[236692] = 1;
	v->a[236693] = aux_sym_number_token1;
	v->a[236694] = actions(8190);
	v->a[236695] = 1;
	v->a[236696] = aux_sym_number_token2;
	v->a[236697] = actions(8192);
	v->a[236698] = 1;
	v->a[236699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11835(v);
}

/* EOF small_parse_table_2366.c */
