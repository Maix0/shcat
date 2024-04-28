/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2206.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11030(t_small_parse_table_array *v)
{
	v->a[220600] = sym_process_substitution;
	v->a[220601] = 18;
	v->a[220602] = actions(3);
	v->a[220603] = 1;
	v->a[220604] = sym_comment;
	v->a[220605] = actions(3026);
	v->a[220606] = 1;
	v->a[220607] = anon_sym_DOLLAR;
	v->a[220608] = actions(3032);
	v->a[220609] = 1;
	v->a[220610] = aux_sym_number_token1;
	v->a[220611] = actions(3034);
	v->a[220612] = 1;
	v->a[220613] = aux_sym_number_token2;
	v->a[220614] = actions(3038);
	v->a[220615] = 1;
	v->a[220616] = anon_sym_DOLLAR_LPAREN;
	v->a[220617] = actions(3048);
	v->a[220618] = 1;
	v->a[220619] = sym__brace_start;
	small_parse_table_11031(v);
}

void	small_parse_table_11031(t_small_parse_table_array *v)
{
	v->a[220620] = actions(10134);
	v->a[220621] = 1;
	v->a[220622] = anon_sym_DOLLAR_LBRACK;
	v->a[220623] = actions(10138);
	v->a[220624] = 1;
	v->a[220625] = anon_sym_DQUOTE;
	v->a[220626] = actions(10142);
	v->a[220627] = 1;
	v->a[220628] = anon_sym_DOLLAR_LBRACE;
	v->a[220629] = actions(10144);
	v->a[220630] = 1;
	v->a[220631] = anon_sym_BQUOTE;
	v->a[220632] = actions(10146);
	v->a[220633] = 1;
	v->a[220634] = anon_sym_DOLLAR_BQUOTE;
	v->a[220635] = actions(10556);
	v->a[220636] = 1;
	v->a[220637] = sym_word;
	v->a[220638] = actions(10562);
	v->a[220639] = 1;
	small_parse_table_11032(v);
}

void	small_parse_table_11032(t_small_parse_table_array *v)
{
	v->a[220640] = sym__comment_word;
	v->a[220641] = actions(10132);
	v->a[220642] = 2;
	v->a[220643] = anon_sym_LPAREN_LPAREN;
	v->a[220644] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220645] = actions(10148);
	v->a[220646] = 2;
	v->a[220647] = anon_sym_LT_LPAREN;
	v->a[220648] = anon_sym_GT_LPAREN;
	v->a[220649] = actions(10558);
	v->a[220650] = 2;
	v->a[220651] = sym_test_operator;
	v->a[220652] = sym__special_character;
	v->a[220653] = actions(10560);
	v->a[220654] = 3;
	v->a[220655] = sym__bare_dollar;
	v->a[220656] = sym_raw_string;
	v->a[220657] = sym_ansi_c_string;
	v->a[220658] = state(4493);
	v->a[220659] = 9;
	small_parse_table_11033(v);
}

void	small_parse_table_11033(t_small_parse_table_array *v)
{
	v->a[220660] = sym_arithmetic_expansion;
	v->a[220661] = sym_brace_expression;
	v->a[220662] = sym_string;
	v->a[220663] = sym_translated_string;
	v->a[220664] = sym_number;
	v->a[220665] = sym_simple_expansion;
	v->a[220666] = sym_expansion;
	v->a[220667] = sym_command_substitution;
	v->a[220668] = sym_process_substitution;
	v->a[220669] = 18;
	v->a[220670] = actions(3);
	v->a[220671] = 1;
	v->a[220672] = sym_comment;
	v->a[220673] = actions(8140);
	v->a[220674] = 1;
	v->a[220675] = anon_sym_DOLLAR_LBRACK;
	v->a[220676] = actions(8142);
	v->a[220677] = 1;
	v->a[220678] = anon_sym_DOLLAR;
	v->a[220679] = actions(8146);
	small_parse_table_11034(v);
}

void	small_parse_table_11034(t_small_parse_table_array *v)
{
	v->a[220680] = 1;
	v->a[220681] = anon_sym_DQUOTE;
	v->a[220682] = actions(8150);
	v->a[220683] = 1;
	v->a[220684] = aux_sym_number_token1;
	v->a[220685] = actions(8152);
	v->a[220686] = 1;
	v->a[220687] = aux_sym_number_token2;
	v->a[220688] = actions(8154);
	v->a[220689] = 1;
	v->a[220690] = anon_sym_DOLLAR_LBRACE;
	v->a[220691] = actions(8156);
	v->a[220692] = 1;
	v->a[220693] = anon_sym_DOLLAR_LPAREN;
	v->a[220694] = actions(8158);
	v->a[220695] = 1;
	v->a[220696] = anon_sym_BQUOTE;
	v->a[220697] = actions(8160);
	v->a[220698] = 1;
	v->a[220699] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11035(v);
}

/* EOF small_parse_table_2206.c */
