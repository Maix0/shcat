/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2356.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11780(t_small_parse_table_array *v)
{
	v->a[235600] = 3;
	v->a[235601] = sym__bare_dollar;
	v->a[235602] = sym_raw_string;
	v->a[235603] = sym_ansi_c_string;
	v->a[235604] = state(1827);
	v->a[235605] = 9;
	v->a[235606] = sym_arithmetic_expansion;
	v->a[235607] = sym_brace_expression;
	v->a[235608] = sym_string;
	v->a[235609] = sym_translated_string;
	v->a[235610] = sym_number;
	v->a[235611] = sym_simple_expansion;
	v->a[235612] = sym_expansion;
	v->a[235613] = sym_command_substitution;
	v->a[235614] = sym_process_substitution;
	v->a[235615] = 18;
	v->a[235616] = actions(3);
	v->a[235617] = 1;
	v->a[235618] = sym_comment;
	v->a[235619] = actions(2044);
	small_parse_table_11781(v);
}

void	small_parse_table_11781(t_small_parse_table_array *v)
{
	v->a[235620] = 1;
	v->a[235621] = aux_sym_number_token1;
	v->a[235622] = actions(2046);
	v->a[235623] = 1;
	v->a[235624] = aux_sym_number_token2;
	v->a[235625] = actions(2050);
	v->a[235626] = 1;
	v->a[235627] = anon_sym_DOLLAR_LPAREN;
	v->a[235628] = actions(2064);
	v->a[235629] = 1;
	v->a[235630] = sym__brace_start;
	v->a[235631] = actions(8344);
	v->a[235632] = 1;
	v->a[235633] = anon_sym_DOLLAR_LBRACK;
	v->a[235634] = actions(8348);
	v->a[235635] = 1;
	v->a[235636] = anon_sym_DQUOTE;
	v->a[235637] = actions(8352);
	v->a[235638] = 1;
	v->a[235639] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11782(v);
}

void	small_parse_table_11782(t_small_parse_table_array *v)
{
	v->a[235640] = actions(8354);
	v->a[235641] = 1;
	v->a[235642] = anon_sym_BQUOTE;
	v->a[235643] = actions(8356);
	v->a[235644] = 1;
	v->a[235645] = anon_sym_DOLLAR_BQUOTE;
	v->a[235646] = actions(10846);
	v->a[235647] = 1;
	v->a[235648] = sym_word;
	v->a[235649] = actions(10852);
	v->a[235650] = 1;
	v->a[235651] = sym__comment_word;
	v->a[235652] = actions(11098);
	v->a[235653] = 1;
	v->a[235654] = anon_sym_DOLLAR;
	v->a[235655] = actions(8340);
	v->a[235656] = 2;
	v->a[235657] = anon_sym_LPAREN_LPAREN;
	v->a[235658] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[235659] = actions(8358);
	small_parse_table_11783(v);
}

void	small_parse_table_11783(t_small_parse_table_array *v)
{
	v->a[235660] = 2;
	v->a[235661] = anon_sym_LT_LPAREN;
	v->a[235662] = anon_sym_GT_LPAREN;
	v->a[235663] = actions(10848);
	v->a[235664] = 2;
	v->a[235665] = sym_test_operator;
	v->a[235666] = sym__special_character;
	v->a[235667] = actions(10850);
	v->a[235668] = 3;
	v->a[235669] = sym__bare_dollar;
	v->a[235670] = sym_raw_string;
	v->a[235671] = sym_ansi_c_string;
	v->a[235672] = state(1493);
	v->a[235673] = 9;
	v->a[235674] = sym_arithmetic_expansion;
	v->a[235675] = sym_brace_expression;
	v->a[235676] = sym_string;
	v->a[235677] = sym_translated_string;
	v->a[235678] = sym_number;
	v->a[235679] = sym_simple_expansion;
	small_parse_table_11784(v);
}

void	small_parse_table_11784(t_small_parse_table_array *v)
{
	v->a[235680] = sym_expansion;
	v->a[235681] = sym_command_substitution;
	v->a[235682] = sym_process_substitution;
	v->a[235683] = 21;
	v->a[235684] = actions(71);
	v->a[235685] = 1;
	v->a[235686] = sym_comment;
	v->a[235687] = actions(3064);
	v->a[235688] = 1;
	v->a[235689] = sym_variable_name;
	v->a[235690] = actions(9278);
	v->a[235691] = 1;
	v->a[235692] = anon_sym_LPAREN;
	v->a[235693] = actions(9280);
	v->a[235694] = 1;
	v->a[235695] = anon_sym_BANG;
	v->a[235696] = actions(9286);
	v->a[235697] = 1;
	v->a[235698] = anon_sym_TILDE;
	v->a[235699] = actions(9288);
	small_parse_table_11785(v);
}

/* EOF small_parse_table_2356.c */
