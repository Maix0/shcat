/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_226.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1130(t_small_parse_table_array *v)
{
	v->a[22600] = 1;
	v->a[22601] = sym_comment;
	v->a[22602] = actions(631);
	v->a[22603] = 1;
	v->a[22604] = sym_variable_name;
	v->a[22605] = actions(385);
	v->a[22606] = 2;
	v->a[22607] = sym_file_descriptor;
	v->a[22608] = sym__bare_dollar;
	v->a[22609] = actions(629);
	v->a[22610] = 2;
	v->a[22611] = aux_sym__simple_variable_name_token1;
	v->a[22612] = aux_sym__multiline_variable_name_token1;
	v->a[22613] = actions(627);
	v->a[22614] = 9;
	v->a[22615] = anon_sym_BANG;
	v->a[22616] = anon_sym_DASH;
	v->a[22617] = anon_sym_STAR;
	v->a[22618] = anon_sym_QMARK;
	v->a[22619] = anon_sym_DOLLAR;
	small_parse_table_1131(v);
}

void	small_parse_table_1131(t_small_parse_table_array *v)
{
	v->a[22620] = anon_sym_POUND;
	v->a[22621] = anon_sym_AT;
	v->a[22622] = anon_sym_0;
	v->a[22623] = anon_sym__;
	v->a[22624] = actions(379);
	v->a[22625] = 24;
	v->a[22626] = anon_sym_LPAREN;
	v->a[22627] = anon_sym_PIPE;
	v->a[22628] = anon_sym_AMP_AMP;
	v->a[22629] = anon_sym_PIPE_PIPE;
	v->a[22630] = anon_sym_LT;
	v->a[22631] = anon_sym_GT;
	v->a[22632] = anon_sym_GT_GT;
	v->a[22633] = anon_sym_AMP_GT;
	v->a[22634] = anon_sym_AMP_GT_GT;
	v->a[22635] = anon_sym_LT_AMP;
	v->a[22636] = anon_sym_GT_AMP;
	v->a[22637] = anon_sym_GT_PIPE;
	v->a[22638] = anon_sym_LT_AMP_DASH;
	v->a[22639] = anon_sym_GT_AMP_DASH;
	small_parse_table_1132(v);
}

void	small_parse_table_1132(t_small_parse_table_array *v)
{
	v->a[22640] = anon_sym_LT_LT;
	v->a[22641] = anon_sym_LT_LT_DASH;
	v->a[22642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22643] = anon_sym_DQUOTE;
	v->a[22644] = sym_raw_string;
	v->a[22645] = sym_number;
	v->a[22646] = anon_sym_DOLLAR_LBRACE;
	v->a[22647] = anon_sym_DOLLAR_LPAREN;
	v->a[22648] = anon_sym_BQUOTE;
	v->a[22649] = sym_word;
	v->a[22650] = 14;
	v->a[22651] = actions(3);
	v->a[22652] = 1;
	v->a[22653] = sym_comment;
	v->a[22654] = actions(636);
	v->a[22655] = 1;
	v->a[22656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22657] = actions(639);
	v->a[22658] = 1;
	v->a[22659] = anon_sym_DOLLAR;
	small_parse_table_1133(v);
}

void	small_parse_table_1133(t_small_parse_table_array *v)
{
	v->a[22660] = actions(642);
	v->a[22661] = 1;
	v->a[22662] = anon_sym_DQUOTE;
	v->a[22663] = actions(645);
	v->a[22664] = 1;
	v->a[22665] = anon_sym_DOLLAR_LBRACE;
	v->a[22666] = actions(648);
	v->a[22667] = 1;
	v->a[22668] = anon_sym_DOLLAR_LPAREN;
	v->a[22669] = actions(651);
	v->a[22670] = 1;
	v->a[22671] = anon_sym_BQUOTE;
	v->a[22672] = actions(654);
	v->a[22673] = 1;
	v->a[22674] = sym__bare_dollar;
	v->a[22675] = state(210);
	v->a[22676] = 1;
	v->a[22677] = aux_sym_command_repeat2;
	v->a[22678] = state(706);
	v->a[22679] = 1;
	small_parse_table_1134(v);
}

void	small_parse_table_1134(t_small_parse_table_array *v)
{
	v->a[22680] = sym_concatenation;
	v->a[22681] = actions(577);
	v->a[22682] = 2;
	v->a[22683] = sym_file_descriptor;
	v->a[22684] = ts_builtin_sym_end;
	v->a[22685] = actions(633);
	v->a[22686] = 3;
	v->a[22687] = sym_raw_string;
	v->a[22688] = sym_number;
	v->a[22689] = sym_word;
	v->a[22690] = state(333);
	v->a[22691] = 5;
	v->a[22692] = sym_arithmetic_expansion;
	v->a[22693] = sym_string;
	v->a[22694] = sym_simple_expansion;
	v->a[22695] = sym_expansion;
	v->a[22696] = sym_command_substitution;
	v->a[22697] = actions(557);
	v->a[22698] = 19;
	v->a[22699] = anon_sym_PIPE;
	small_parse_table_1135(v);
}

/* EOF small_parse_table_226.c */
