/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1186.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5930(t_small_parse_table_array *v)
{
	v->a[118600] = 1;
	v->a[118601] = anon_sym_DOLLAR_LPAREN;
	v->a[118602] = actions(2559);
	v->a[118603] = 1;
	v->a[118604] = anon_sym_BQUOTE;
	v->a[118605] = actions(2561);
	v->a[118606] = 1;
	v->a[118607] = anon_sym_DOLLAR_BQUOTE;
	v->a[118608] = actions(2567);
	v->a[118609] = 1;
	v->a[118610] = sym__brace_start;
	v->a[118611] = actions(6282);
	v->a[118612] = 1;
	v->a[118613] = sym_word;
	v->a[118614] = actions(6284);
	v->a[118615] = 1;
	v->a[118616] = sym__special_character;
	v->a[118617] = actions(6288);
	v->a[118618] = 1;
	v->a[118619] = sym__comment_word;
	small_parse_table_5931(v);
}

void	small_parse_table_5931(t_small_parse_table_array *v)
{
	v->a[118620] = actions(6961);
	v->a[118621] = 1;
	v->a[118622] = anon_sym_DOLLAR;
	v->a[118623] = actions(6286);
	v->a[118624] = 3;
	v->a[118625] = sym_test_operator;
	v->a[118626] = sym__bare_dollar;
	v->a[118627] = sym_raw_string;
	v->a[118628] = state(1502);
	v->a[118629] = 7;
	v->a[118630] = sym_arithmetic_expansion;
	v->a[118631] = sym_brace_expression;
	v->a[118632] = sym_string;
	v->a[118633] = sym_number;
	v->a[118634] = sym_simple_expansion;
	v->a[118635] = sym_expansion;
	v->a[118636] = sym_command_substitution;
	v->a[118637] = 16;
	v->a[118638] = actions(3);
	v->a[118639] = 1;
	small_parse_table_5932(v);
}

void	small_parse_table_5932(t_small_parse_table_array *v)
{
	v->a[118640] = sym_comment;
	v->a[118641] = actions(87);
	v->a[118642] = 1;
	v->a[118643] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118644] = actions(89);
	v->a[118645] = 1;
	v->a[118646] = anon_sym_DOLLAR;
	v->a[118647] = actions(93);
	v->a[118648] = 1;
	v->a[118649] = anon_sym_DQUOTE;
	v->a[118650] = actions(97);
	v->a[118651] = 1;
	v->a[118652] = aux_sym_number_token1;
	v->a[118653] = actions(99);
	v->a[118654] = 1;
	v->a[118655] = aux_sym_number_token2;
	v->a[118656] = actions(101);
	v->a[118657] = 1;
	v->a[118658] = anon_sym_DOLLAR_LBRACE;
	v->a[118659] = actions(103);
	small_parse_table_5933(v);
}

void	small_parse_table_5933(t_small_parse_table_array *v)
{
	v->a[118660] = 1;
	v->a[118661] = anon_sym_DOLLAR_LPAREN;
	v->a[118662] = actions(105);
	v->a[118663] = 1;
	v->a[118664] = anon_sym_BQUOTE;
	v->a[118665] = actions(107);
	v->a[118666] = 1;
	v->a[118667] = anon_sym_DOLLAR_BQUOTE;
	v->a[118668] = actions(113);
	v->a[118669] = 1;
	v->a[118670] = sym__brace_start;
	v->a[118671] = actions(6845);
	v->a[118672] = 1;
	v->a[118673] = sym_word;
	v->a[118674] = actions(6849);
	v->a[118675] = 1;
	v->a[118676] = sym__special_character;
	v->a[118677] = actions(6853);
	v->a[118678] = 1;
	v->a[118679] = sym__comment_word;
	small_parse_table_5934(v);
}

void	small_parse_table_5934(t_small_parse_table_array *v)
{
	v->a[118680] = actions(6851);
	v->a[118681] = 3;
	v->a[118682] = sym_test_operator;
	v->a[118683] = sym__bare_dollar;
	v->a[118684] = sym_raw_string;
	v->a[118685] = state(853);
	v->a[118686] = 7;
	v->a[118687] = sym_arithmetic_expansion;
	v->a[118688] = sym_brace_expression;
	v->a[118689] = sym_string;
	v->a[118690] = sym_number;
	v->a[118691] = sym_simple_expansion;
	v->a[118692] = sym_expansion;
	v->a[118693] = sym_command_substitution;
	v->a[118694] = 16;
	v->a[118695] = actions(3);
	v->a[118696] = 1;
	v->a[118697] = sym_comment;
	v->a[118698] = actions(5814);
	v->a[118699] = 1;
	small_parse_table_5935(v);
}

/* EOF small_parse_table_1186.c */
