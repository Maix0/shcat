/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1146.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5730(t_small_parse_table_array *v)
{
	v->a[114600] = anon_sym_DOLLAR_LBRACE;
	v->a[114601] = actions(5830);
	v->a[114602] = 1;
	v->a[114603] = anon_sym_DOLLAR_LPAREN;
	v->a[114604] = actions(5832);
	v->a[114605] = 1;
	v->a[114606] = anon_sym_BQUOTE;
	v->a[114607] = actions(5834);
	v->a[114608] = 1;
	v->a[114609] = anon_sym_DOLLAR_BQUOTE;
	v->a[114610] = actions(5840);
	v->a[114611] = 1;
	v->a[114612] = sym__brace_start;
	v->a[114613] = actions(6651);
	v->a[114614] = 1;
	v->a[114615] = sym_word;
	v->a[114616] = actions(6653);
	v->a[114617] = 1;
	v->a[114618] = anon_sym_DOLLAR;
	v->a[114619] = actions(6655);
	small_parse_table_5731(v);
}

void	small_parse_table_5731(t_small_parse_table_array *v)
{
	v->a[114620] = 1;
	v->a[114621] = sym__special_character;
	v->a[114622] = actions(6659);
	v->a[114623] = 1;
	v->a[114624] = sym__comment_word;
	v->a[114625] = actions(6657);
	v->a[114626] = 3;
	v->a[114627] = sym_test_operator;
	v->a[114628] = sym__bare_dollar;
	v->a[114629] = sym_raw_string;
	v->a[114630] = state(1532);
	v->a[114631] = 7;
	v->a[114632] = sym_arithmetic_expansion;
	v->a[114633] = sym_brace_expression;
	v->a[114634] = sym_string;
	v->a[114635] = sym_number;
	v->a[114636] = sym_simple_expansion;
	v->a[114637] = sym_expansion;
	v->a[114638] = sym_command_substitution;
	v->a[114639] = 16;
	small_parse_table_5732(v);
}

void	small_parse_table_5732(t_small_parse_table_array *v)
{
	v->a[114640] = actions(3);
	v->a[114641] = 1;
	v->a[114642] = sym_comment;
	v->a[114643] = actions(705);
	v->a[114644] = 1;
	v->a[114645] = aux_sym_number_token1;
	v->a[114646] = actions(707);
	v->a[114647] = 1;
	v->a[114648] = aux_sym_number_token2;
	v->a[114649] = actions(711);
	v->a[114650] = 1;
	v->a[114651] = anon_sym_DOLLAR_LPAREN;
	v->a[114652] = actions(721);
	v->a[114653] = 1;
	v->a[114654] = sym__brace_start;
	v->a[114655] = actions(6661);
	v->a[114656] = 1;
	v->a[114657] = sym_word;
	v->a[114658] = actions(6663);
	v->a[114659] = 1;
	small_parse_table_5733(v);
}

void	small_parse_table_5733(t_small_parse_table_array *v)
{
	v->a[114660] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114661] = actions(6665);
	v->a[114662] = 1;
	v->a[114663] = anon_sym_DOLLAR;
	v->a[114664] = actions(6667);
	v->a[114665] = 1;
	v->a[114666] = sym__special_character;
	v->a[114667] = actions(6669);
	v->a[114668] = 1;
	v->a[114669] = anon_sym_DQUOTE;
	v->a[114670] = actions(6673);
	v->a[114671] = 1;
	v->a[114672] = anon_sym_DOLLAR_LBRACE;
	v->a[114673] = actions(6675);
	v->a[114674] = 1;
	v->a[114675] = anon_sym_BQUOTE;
	v->a[114676] = actions(6677);
	v->a[114677] = 1;
	v->a[114678] = anon_sym_DOLLAR_BQUOTE;
	v->a[114679] = actions(6679);
	small_parse_table_5734(v);
}

void	small_parse_table_5734(t_small_parse_table_array *v)
{
	v->a[114680] = 1;
	v->a[114681] = sym__comment_word;
	v->a[114682] = actions(6671);
	v->a[114683] = 3;
	v->a[114684] = sym_test_operator;
	v->a[114685] = sym__bare_dollar;
	v->a[114686] = sym_raw_string;
	v->a[114687] = state(626);
	v->a[114688] = 7;
	v->a[114689] = sym_arithmetic_expansion;
	v->a[114690] = sym_brace_expression;
	v->a[114691] = sym_string;
	v->a[114692] = sym_number;
	v->a[114693] = sym_simple_expansion;
	v->a[114694] = sym_expansion;
	v->a[114695] = sym_command_substitution;
	v->a[114696] = 16;
	v->a[114697] = actions(3);
	v->a[114698] = 1;
	v->a[114699] = sym_comment;
	small_parse_table_5735(v);
}

/* EOF small_parse_table_1146.c */
