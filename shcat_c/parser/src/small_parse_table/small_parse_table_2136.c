/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2136.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10680(t_small_parse_table_array *v)
{
	v->a[213600] = sym_comment;
	v->a[213601] = actions(4086);
	v->a[213602] = 1;
	v->a[213603] = aux_sym_number_token1;
	v->a[213604] = actions(4088);
	v->a[213605] = 1;
	v->a[213606] = aux_sym_number_token2;
	v->a[213607] = actions(4092);
	v->a[213608] = 1;
	v->a[213609] = anon_sym_DOLLAR_LPAREN;
	v->a[213610] = actions(4102);
	v->a[213611] = 1;
	v->a[213612] = sym__brace_start;
	v->a[213613] = actions(9306);
	v->a[213614] = 1;
	v->a[213615] = sym_word;
	v->a[213616] = actions(9310);
	v->a[213617] = 1;
	v->a[213618] = anon_sym_DOLLAR_LBRACK;
	v->a[213619] = actions(9316);
	small_parse_table_10681(v);
}

void	small_parse_table_10681(t_small_parse_table_array *v)
{
	v->a[213620] = 1;
	v->a[213621] = anon_sym_DQUOTE;
	v->a[213622] = actions(9320);
	v->a[213623] = 1;
	v->a[213624] = anon_sym_DOLLAR_LBRACE;
	v->a[213625] = actions(9322);
	v->a[213626] = 1;
	v->a[213627] = anon_sym_BQUOTE;
	v->a[213628] = actions(9324);
	v->a[213629] = 1;
	v->a[213630] = anon_sym_DOLLAR_BQUOTE;
	v->a[213631] = actions(9328);
	v->a[213632] = 1;
	v->a[213633] = sym__comment_word;
	v->a[213634] = actions(10172);
	v->a[213635] = 1;
	v->a[213636] = anon_sym_DOLLAR;
	v->a[213637] = actions(9308);
	v->a[213638] = 2;
	v->a[213639] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10682(v);
}

void	small_parse_table_10682(t_small_parse_table_array *v)
{
	v->a[213640] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[213641] = actions(9314);
	v->a[213642] = 2;
	v->a[213643] = sym_test_operator;
	v->a[213644] = sym__special_character;
	v->a[213645] = actions(9326);
	v->a[213646] = 2;
	v->a[213647] = anon_sym_LT_LPAREN;
	v->a[213648] = anon_sym_GT_LPAREN;
	v->a[213649] = actions(9318);
	v->a[213650] = 3;
	v->a[213651] = sym__bare_dollar;
	v->a[213652] = sym_raw_string;
	v->a[213653] = sym_ansi_c_string;
	v->a[213654] = state(4566);
	v->a[213655] = 9;
	v->a[213656] = sym_arithmetic_expansion;
	v->a[213657] = sym_brace_expression;
	v->a[213658] = sym_string;
	v->a[213659] = sym_translated_string;
	small_parse_table_10683(v);
}

void	small_parse_table_10683(t_small_parse_table_array *v)
{
	v->a[213660] = sym_number;
	v->a[213661] = sym_simple_expansion;
	v->a[213662] = sym_expansion;
	v->a[213663] = sym_command_substitution;
	v->a[213664] = sym_process_substitution;
	v->a[213665] = 18;
	v->a[213666] = actions(3);
	v->a[213667] = 1;
	v->a[213668] = sym_comment;
	v->a[213669] = actions(5112);
	v->a[213670] = 1;
	v->a[213671] = anon_sym_DOLLAR_LBRACK;
	v->a[213672] = actions(5118);
	v->a[213673] = 1;
	v->a[213674] = anon_sym_DQUOTE;
	v->a[213675] = actions(5122);
	v->a[213676] = 1;
	v->a[213677] = aux_sym_number_token1;
	v->a[213678] = actions(5124);
	v->a[213679] = 1;
	small_parse_table_10684(v);
}

void	small_parse_table_10684(t_small_parse_table_array *v)
{
	v->a[213680] = aux_sym_number_token2;
	v->a[213681] = actions(5126);
	v->a[213682] = 1;
	v->a[213683] = anon_sym_DOLLAR_LBRACE;
	v->a[213684] = actions(5128);
	v->a[213685] = 1;
	v->a[213686] = anon_sym_DOLLAR_LPAREN;
	v->a[213687] = actions(5130);
	v->a[213688] = 1;
	v->a[213689] = anon_sym_BQUOTE;
	v->a[213690] = actions(5132);
	v->a[213691] = 1;
	v->a[213692] = anon_sym_DOLLAR_BQUOTE;
	v->a[213693] = actions(5138);
	v->a[213694] = 1;
	v->a[213695] = sym__brace_start;
	v->a[213696] = actions(10174);
	v->a[213697] = 1;
	v->a[213698] = sym_word;
	v->a[213699] = actions(10176);
	small_parse_table_10685(v);
}

/* EOF small_parse_table_2136.c */
