/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_446.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2230(t_small_parse_table_array *v)
{
	v->a[44600] = 1;
	v->a[44601] = anon_sym_DOLLAR;
	v->a[44602] = actions(67);
	v->a[44603] = 1;
	v->a[44604] = anon_sym_DQUOTE;
	v->a[44605] = actions(71);
	v->a[44606] = 1;
	v->a[44607] = aux_sym_number_token1;
	v->a[44608] = actions(73);
	v->a[44609] = 1;
	v->a[44610] = aux_sym_number_token2;
	v->a[44611] = actions(75);
	v->a[44612] = 1;
	v->a[44613] = anon_sym_DOLLAR_LBRACE;
	v->a[44614] = actions(77);
	v->a[44615] = 1;
	v->a[44616] = anon_sym_DOLLAR_LPAREN;
	v->a[44617] = actions(79);
	v->a[44618] = 1;
	v->a[44619] = anon_sym_BQUOTE;
	small_parse_table_2231(v);
}

void	small_parse_table_2231(t_small_parse_table_array *v)
{
	v->a[44620] = actions(405);
	v->a[44621] = 1;
	v->a[44622] = sym_variable_name;
	v->a[44623] = actions(1102);
	v->a[44624] = 1;
	v->a[44625] = sym_file_descriptor;
	v->a[44626] = state(187);
	v->a[44627] = 1;
	v->a[44628] = sym_command_name;
	v->a[44629] = state(582);
	v->a[44630] = 1;
	v->a[44631] = sym_concatenation;
	v->a[44632] = state(1237);
	v->a[44633] = 1;
	v->a[44634] = sym_file_redirect;
	v->a[44635] = actions(69);
	v->a[44636] = 2;
	v->a[44637] = sym_raw_string;
	v->a[44638] = sym_word;
	v->a[44639] = actions(1100);
	small_parse_table_2232(v);
}

void	small_parse_table_2232(t_small_parse_table_array *v)
{
	v->a[44640] = 2;
	v->a[44641] = anon_sym_LT_AMP_DASH;
	v->a[44642] = anon_sym_GT_AMP_DASH;
	v->a[44643] = state(996);
	v->a[44644] = 2;
	v->a[44645] = sym_variable_assignment;
	v->a[44646] = aux_sym_command_repeat1;
	v->a[44647] = state(397);
	v->a[44648] = 6;
	v->a[44649] = sym_arithmetic_expansion;
	v->a[44650] = sym_string;
	v->a[44651] = sym_number;
	v->a[44652] = sym_simple_expansion;
	v->a[44653] = sym_expansion;
	v->a[44654] = sym_command_substitution;
	v->a[44655] = actions(1098);
	v->a[44656] = 8;
	v->a[44657] = anon_sym_LT;
	v->a[44658] = anon_sym_GT;
	v->a[44659] = anon_sym_GT_GT;
	small_parse_table_2233(v);
}

void	small_parse_table_2233(t_small_parse_table_array *v)
{
	v->a[44660] = anon_sym_AMP_GT;
	v->a[44661] = anon_sym_AMP_GT_GT;
	v->a[44662] = anon_sym_LT_AMP;
	v->a[44663] = anon_sym_GT_AMP;
	v->a[44664] = anon_sym_GT_PIPE;
	v->a[44665] = 6;
	v->a[44666] = actions(3);
	v->a[44667] = 1;
	v->a[44668] = sym_comment;
	v->a[44669] = actions(413);
	v->a[44670] = 1;
	v->a[44671] = sym_file_descriptor;
	v->a[44672] = actions(1650);
	v->a[44673] = 1;
	v->a[44674] = sym_variable_name;
	v->a[44675] = actions(1648);
	v->a[44676] = 2;
	v->a[44677] = aux_sym__simple_variable_name_token1;
	v->a[44678] = aux_sym__multiline_variable_name_token1;
	v->a[44679] = actions(1646);
	small_parse_table_2234(v);
}

void	small_parse_table_2234(t_small_parse_table_array *v)
{
	v->a[44680] = 9;
	v->a[44681] = anon_sym_BANG;
	v->a[44682] = anon_sym_DASH;
	v->a[44683] = anon_sym_STAR;
	v->a[44684] = anon_sym_QMARK;
	v->a[44685] = anon_sym_DOLLAR;
	v->a[44686] = anon_sym_POUND;
	v->a[44687] = anon_sym_AT;
	v->a[44688] = anon_sym_0;
	v->a[44689] = anon_sym__;
	v->a[44690] = actions(407);
	v->a[44691] = 20;
	v->a[44692] = anon_sym_PIPE;
	v->a[44693] = anon_sym_RPAREN;
	v->a[44694] = anon_sym_SEMI_SEMI;
	v->a[44695] = anon_sym_AMP_AMP;
	v->a[44696] = anon_sym_PIPE_PIPE;
	v->a[44697] = anon_sym_LT;
	v->a[44698] = anon_sym_GT;
	v->a[44699] = anon_sym_GT_GT;
	small_parse_table_2235(v);
}

/* EOF small_parse_table_446.c */
