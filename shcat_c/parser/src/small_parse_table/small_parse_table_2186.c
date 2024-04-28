/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2186.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10930(t_small_parse_table_array *v)
{
	v->a[218600] = actions(3);
	v->a[218601] = 1;
	v->a[218602] = sym_comment;
	v->a[218603] = actions(2269);
	v->a[218604] = 1;
	v->a[218605] = aux_sym_number_token1;
	v->a[218606] = actions(2271);
	v->a[218607] = 1;
	v->a[218608] = aux_sym_number_token2;
	v->a[218609] = actions(2275);
	v->a[218610] = 1;
	v->a[218611] = anon_sym_DOLLAR_LPAREN;
	v->a[218612] = actions(2289);
	v->a[218613] = 1;
	v->a[218614] = sym__brace_start;
	v->a[218615] = actions(8066);
	v->a[218616] = 1;
	v->a[218617] = anon_sym_DOLLAR_LBRACK;
	v->a[218618] = actions(8070);
	v->a[218619] = 1;
	small_parse_table_10931(v);
}

void	small_parse_table_10931(t_small_parse_table_array *v)
{
	v->a[218620] = anon_sym_DQUOTE;
	v->a[218621] = actions(8074);
	v->a[218622] = 1;
	v->a[218623] = anon_sym_DOLLAR_LBRACE;
	v->a[218624] = actions(8076);
	v->a[218625] = 1;
	v->a[218626] = anon_sym_BQUOTE;
	v->a[218627] = actions(8078);
	v->a[218628] = 1;
	v->a[218629] = anon_sym_DOLLAR_BQUOTE;
	v->a[218630] = actions(9580);
	v->a[218631] = 1;
	v->a[218632] = sym_word;
	v->a[218633] = actions(9588);
	v->a[218634] = 1;
	v->a[218635] = sym__comment_word;
	v->a[218636] = actions(10416);
	v->a[218637] = 1;
	v->a[218638] = anon_sym_DOLLAR;
	v->a[218639] = actions(8062);
	small_parse_table_10932(v);
}

void	small_parse_table_10932(t_small_parse_table_array *v)
{
	v->a[218640] = 2;
	v->a[218641] = anon_sym_LPAREN_LPAREN;
	v->a[218642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[218643] = actions(8080);
	v->a[218644] = 2;
	v->a[218645] = anon_sym_LT_LPAREN;
	v->a[218646] = anon_sym_GT_LPAREN;
	v->a[218647] = actions(9584);
	v->a[218648] = 2;
	v->a[218649] = sym_test_operator;
	v->a[218650] = sym__special_character;
	v->a[218651] = actions(9586);
	v->a[218652] = 3;
	v->a[218653] = sym__bare_dollar;
	v->a[218654] = sym_raw_string;
	v->a[218655] = sym_ansi_c_string;
	v->a[218656] = state(1623);
	v->a[218657] = 9;
	v->a[218658] = sym_arithmetic_expansion;
	v->a[218659] = sym_brace_expression;
	small_parse_table_10933(v);
}

void	small_parse_table_10933(t_small_parse_table_array *v)
{
	v->a[218660] = sym_string;
	v->a[218661] = sym_translated_string;
	v->a[218662] = sym_number;
	v->a[218663] = sym_simple_expansion;
	v->a[218664] = sym_expansion;
	v->a[218665] = sym_command_substitution;
	v->a[218666] = sym_process_substitution;
	v->a[218667] = 18;
	v->a[218668] = actions(3);
	v->a[218669] = 1;
	v->a[218670] = sym_comment;
	v->a[218671] = actions(451);
	v->a[218672] = 1;
	v->a[218673] = anon_sym_DOLLAR_LBRACK;
	v->a[218674] = actions(457);
	v->a[218675] = 1;
	v->a[218676] = anon_sym_DQUOTE;
	v->a[218677] = actions(461);
	v->a[218678] = 1;
	v->a[218679] = aux_sym_number_token1;
	small_parse_table_10934(v);
}

void	small_parse_table_10934(t_small_parse_table_array *v)
{
	v->a[218680] = actions(463);
	v->a[218681] = 1;
	v->a[218682] = aux_sym_number_token2;
	v->a[218683] = actions(465);
	v->a[218684] = 1;
	v->a[218685] = anon_sym_DOLLAR_LBRACE;
	v->a[218686] = actions(467);
	v->a[218687] = 1;
	v->a[218688] = anon_sym_DOLLAR_LPAREN;
	v->a[218689] = actions(469);
	v->a[218690] = 1;
	v->a[218691] = anon_sym_BQUOTE;
	v->a[218692] = actions(471);
	v->a[218693] = 1;
	v->a[218694] = anon_sym_DOLLAR_BQUOTE;
	v->a[218695] = actions(481);
	v->a[218696] = 1;
	v->a[218697] = sym__brace_start;
	v->a[218698] = actions(10308);
	v->a[218699] = 1;
	small_parse_table_10935(v);
}

/* EOF small_parse_table_2186.c */
