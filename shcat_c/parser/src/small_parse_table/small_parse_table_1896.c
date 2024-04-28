/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1896.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9480(t_small_parse_table_array *v)
{
	v->a[189600] = 1;
	v->a[189601] = anon_sym_DOLLAR_BQUOTE;
	v->a[189602] = actions(7982);
	v->a[189603] = 1;
	v->a[189604] = sym__comment_word;
	v->a[189605] = actions(7984);
	v->a[189606] = 1;
	v->a[189607] = sym__empty_value;
	v->a[189608] = actions(7988);
	v->a[189609] = 1;
	v->a[189610] = sym__brace_start;
	v->a[189611] = actions(8210);
	v->a[189612] = 1;
	v->a[189613] = sym_word;
	v->a[189614] = actions(8212);
	v->a[189615] = 1;
	v->a[189616] = sym__special_character;
	v->a[189617] = actions(8216);
	v->a[189618] = 1;
	v->a[189619] = sym_test_operator;
	small_parse_table_9481(v);
}

void	small_parse_table_9481(t_small_parse_table_array *v)
{
	v->a[189620] = state(4287);
	v->a[189621] = 1;
	v->a[189622] = aux_sym__literal_repeat1;
	v->a[189623] = actions(7954);
	v->a[189624] = 2;
	v->a[189625] = anon_sym_LPAREN_LPAREN;
	v->a[189626] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189627] = actions(7980);
	v->a[189628] = 2;
	v->a[189629] = anon_sym_LT_LPAREN;
	v->a[189630] = anon_sym_GT_LPAREN;
	v->a[189631] = actions(8214);
	v->a[189632] = 2;
	v->a[189633] = sym_raw_string;
	v->a[189634] = sym_ansi_c_string;
	v->a[189635] = state(4759);
	v->a[189636] = 2;
	v->a[189637] = sym_concatenation;
	v->a[189638] = sym_array;
	v->a[189639] = state(4525);
	small_parse_table_9482(v);
}

void	small_parse_table_9482(t_small_parse_table_array *v)
{
	v->a[189640] = 9;
	v->a[189641] = sym_arithmetic_expansion;
	v->a[189642] = sym_brace_expression;
	v->a[189643] = sym_string;
	v->a[189644] = sym_translated_string;
	v->a[189645] = sym_number;
	v->a[189646] = sym_simple_expansion;
	v->a[189647] = sym_expansion;
	v->a[189648] = sym_command_substitution;
	v->a[189649] = sym_process_substitution;
	v->a[189650] = 23;
	v->a[189651] = actions(3);
	v->a[189652] = 1;
	v->a[189653] = sym_comment;
	v->a[189654] = actions(8176);
	v->a[189655] = 1;
	v->a[189656] = anon_sym_LPAREN;
	v->a[189657] = actions(8178);
	v->a[189658] = 1;
	v->a[189659] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_9483(v);
}

void	small_parse_table_9483(t_small_parse_table_array *v)
{
	v->a[189660] = actions(8180);
	v->a[189661] = 1;
	v->a[189662] = anon_sym_DOLLAR;
	v->a[189663] = actions(8184);
	v->a[189664] = 1;
	v->a[189665] = anon_sym_DQUOTE;
	v->a[189666] = actions(8188);
	v->a[189667] = 1;
	v->a[189668] = aux_sym_number_token1;
	v->a[189669] = actions(8190);
	v->a[189670] = 1;
	v->a[189671] = aux_sym_number_token2;
	v->a[189672] = actions(8192);
	v->a[189673] = 1;
	v->a[189674] = anon_sym_DOLLAR_LBRACE;
	v->a[189675] = actions(8194);
	v->a[189676] = 1;
	v->a[189677] = anon_sym_DOLLAR_LPAREN;
	v->a[189678] = actions(8196);
	v->a[189679] = 1;
	small_parse_table_9484(v);
}

void	small_parse_table_9484(t_small_parse_table_array *v)
{
	v->a[189680] = anon_sym_BQUOTE;
	v->a[189681] = actions(8198);
	v->a[189682] = 1;
	v->a[189683] = anon_sym_DOLLAR_BQUOTE;
	v->a[189684] = actions(8202);
	v->a[189685] = 1;
	v->a[189686] = sym__comment_word;
	v->a[189687] = actions(8204);
	v->a[189688] = 1;
	v->a[189689] = sym__empty_value;
	v->a[189690] = actions(8208);
	v->a[189691] = 1;
	v->a[189692] = sym__brace_start;
	v->a[189693] = actions(8218);
	v->a[189694] = 1;
	v->a[189695] = sym_word;
	v->a[189696] = actions(8220);
	v->a[189697] = 1;
	v->a[189698] = sym__special_character;
	v->a[189699] = actions(8224);
	small_parse_table_9485(v);
}

/* EOF small_parse_table_1896.c */
