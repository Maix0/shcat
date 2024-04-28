/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2286.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11430(t_small_parse_table_array *v)
{
	v->a[228600] = sym_subscript;
	v->a[228601] = sym__arithmetic_expression;
	v->a[228602] = sym__arithmetic_literal;
	v->a[228603] = sym__arithmetic_parenthesized_expression;
	v->a[228604] = sym_string;
	v->a[228605] = sym_number;
	v->a[228606] = sym_simple_expansion;
	v->a[228607] = sym_expansion;
	v->a[228608] = sym_command_substitution;
	v->a[228609] = 18;
	v->a[228610] = actions(3);
	v->a[228611] = 1;
	v->a[228612] = sym_comment;
	v->a[228613] = actions(2038);
	v->a[228614] = 1;
	v->a[228615] = anon_sym_DOLLAR;
	v->a[228616] = actions(2044);
	v->a[228617] = 1;
	v->a[228618] = aux_sym_number_token1;
	v->a[228619] = actions(2046);
	small_parse_table_11431(v);
}

void	small_parse_table_11431(t_small_parse_table_array *v)
{
	v->a[228620] = 1;
	v->a[228621] = aux_sym_number_token2;
	v->a[228622] = actions(2050);
	v->a[228623] = 1;
	v->a[228624] = anon_sym_DOLLAR_LPAREN;
	v->a[228625] = actions(2064);
	v->a[228626] = 1;
	v->a[228627] = sym__brace_start;
	v->a[228628] = actions(8344);
	v->a[228629] = 1;
	v->a[228630] = anon_sym_DOLLAR_LBRACK;
	v->a[228631] = actions(8348);
	v->a[228632] = 1;
	v->a[228633] = anon_sym_DQUOTE;
	v->a[228634] = actions(8352);
	v->a[228635] = 1;
	v->a[228636] = anon_sym_DOLLAR_LBRACE;
	v->a[228637] = actions(8354);
	v->a[228638] = 1;
	v->a[228639] = anon_sym_BQUOTE;
	small_parse_table_11432(v);
}

void	small_parse_table_11432(t_small_parse_table_array *v)
{
	v->a[228640] = actions(8356);
	v->a[228641] = 1;
	v->a[228642] = anon_sym_DOLLAR_BQUOTE;
	v->a[228643] = actions(10846);
	v->a[228644] = 1;
	v->a[228645] = sym_word;
	v->a[228646] = actions(10852);
	v->a[228647] = 1;
	v->a[228648] = sym__comment_word;
	v->a[228649] = actions(8340);
	v->a[228650] = 2;
	v->a[228651] = anon_sym_LPAREN_LPAREN;
	v->a[228652] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[228653] = actions(8358);
	v->a[228654] = 2;
	v->a[228655] = anon_sym_LT_LPAREN;
	v->a[228656] = anon_sym_GT_LPAREN;
	v->a[228657] = actions(10848);
	v->a[228658] = 2;
	v->a[228659] = sym_test_operator;
	small_parse_table_11433(v);
}

void	small_parse_table_11433(t_small_parse_table_array *v)
{
	v->a[228660] = sym__special_character;
	v->a[228661] = actions(10850);
	v->a[228662] = 3;
	v->a[228663] = sym__bare_dollar;
	v->a[228664] = sym_raw_string;
	v->a[228665] = sym_ansi_c_string;
	v->a[228666] = state(1493);
	v->a[228667] = 9;
	v->a[228668] = sym_arithmetic_expansion;
	v->a[228669] = sym_brace_expression;
	v->a[228670] = sym_string;
	v->a[228671] = sym_translated_string;
	v->a[228672] = sym_number;
	v->a[228673] = sym_simple_expansion;
	v->a[228674] = sym_expansion;
	v->a[228675] = sym_command_substitution;
	v->a[228676] = sym_process_substitution;
	v->a[228677] = 21;
	v->a[228678] = actions(71);
	v->a[228679] = 1;
	small_parse_table_11434(v);
}

void	small_parse_table_11434(t_small_parse_table_array *v)
{
	v->a[228680] = sym_comment;
	v->a[228681] = actions(3602);
	v->a[228682] = 1;
	v->a[228683] = sym_variable_name;
	v->a[228684] = actions(3811);
	v->a[228685] = 1;
	v->a[228686] = aux_sym__simple_variable_name_token1;
	v->a[228687] = actions(9898);
	v->a[228688] = 1;
	v->a[228689] = anon_sym_LPAREN;
	v->a[228690] = actions(9900);
	v->a[228691] = 1;
	v->a[228692] = anon_sym_BANG;
	v->a[228693] = actions(9906);
	v->a[228694] = 1;
	v->a[228695] = anon_sym_TILDE;
	v->a[228696] = actions(9908);
	v->a[228697] = 1;
	v->a[228698] = anon_sym_DOLLAR;
	v->a[228699] = actions(9910);
	small_parse_table_11435(v);
}

/* EOF small_parse_table_2286.c */
