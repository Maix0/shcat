/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_656.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3280(t_small_parse_table_array *v)
{
	v->a[65600] = anon_sym_EQ_EQ;
	v->a[65601] = anon_sym_BANG_EQ;
	v->a[65602] = actions(4144);
	v->a[65603] = 2;
	v->a[65604] = anon_sym_LT_EQ;
	v->a[65605] = anon_sym_GT_EQ;
	v->a[65606] = actions(4146);
	v->a[65607] = 2;
	v->a[65608] = anon_sym_PLUS;
	v->a[65609] = anon_sym_DASH;
	v->a[65610] = actions(4152);
	v->a[65611] = 2;
	v->a[65612] = anon_sym_PLUS_PLUS2;
	v->a[65613] = anon_sym_DASH_DASH2;
	v->a[65614] = actions(4148);
	v->a[65615] = 3;
	v->a[65616] = anon_sym_STAR;
	v->a[65617] = anon_sym_SLASH;
	v->a[65618] = anon_sym_PERCENT;
	v->a[65619] = actions(4136);
	small_parse_table_3281(v);
}

void	small_parse_table_3281(t_small_parse_table_array *v)
{
	v->a[65620] = 10;
	v->a[65621] = anon_sym_PLUS_EQ;
	v->a[65622] = anon_sym_DASH_EQ;
	v->a[65623] = anon_sym_STAR_EQ;
	v->a[65624] = anon_sym_SLASH_EQ;
	v->a[65625] = anon_sym_PERCENT_EQ;
	v->a[65626] = anon_sym_LT_LT_EQ;
	v->a[65627] = anon_sym_GT_GT_EQ;
	v->a[65628] = anon_sym_AMP_EQ;
	v->a[65629] = anon_sym_CARET_EQ;
	v->a[65630] = anon_sym_PIPE_EQ;
	v->a[65631] = 6;
	v->a[65632] = actions(57);
	v->a[65633] = 1;
	v->a[65634] = sym_comment;
	v->a[65635] = state(1887);
	v->a[65636] = 1;
	v->a[65637] = aux_sym__literal_repeat1;
	v->a[65638] = state(2040);
	v->a[65639] = 1;
	small_parse_table_3282(v);
}

void	small_parse_table_3282(t_small_parse_table_array *v)
{
	v->a[65640] = sym_concatenation;
	v->a[65641] = state(1829);
	v->a[65642] = 7;
	v->a[65643] = sym_arithmetic_expansion;
	v->a[65644] = sym_brace_expression;
	v->a[65645] = sym_string;
	v->a[65646] = sym_number;
	v->a[65647] = sym_simple_expansion;
	v->a[65648] = sym_expansion;
	v->a[65649] = sym_command_substitution;
	v->a[65650] = actions(1532);
	v->a[65651] = 10;
	v->a[65652] = anon_sym_LT;
	v->a[65653] = anon_sym_GT;
	v->a[65654] = anon_sym_AMP_GT;
	v->a[65655] = anon_sym_LT_AMP;
	v->a[65656] = anon_sym_GT_AMP;
	v->a[65657] = anon_sym_DOLLAR;
	v->a[65658] = aux_sym_number_token1;
	v->a[65659] = aux_sym_number_token2;
	small_parse_table_3283(v);
}

void	small_parse_table_3283(t_small_parse_table_array *v)
{
	v->a[65660] = anon_sym_DOLLAR_LPAREN;
	v->a[65661] = sym_word;
	v->a[65662] = actions(1534);
	v->a[65663] = 16;
	v->a[65664] = sym_file_descriptor;
	v->a[65665] = sym_variable_name;
	v->a[65666] = sym_test_operator;
	v->a[65667] = sym__brace_start;
	v->a[65668] = anon_sym_GT_GT;
	v->a[65669] = anon_sym_AMP_GT_GT;
	v->a[65670] = anon_sym_GT_PIPE;
	v->a[65671] = anon_sym_LT_AMP_DASH;
	v->a[65672] = anon_sym_GT_AMP_DASH;
	v->a[65673] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65674] = sym__special_character;
	v->a[65675] = anon_sym_DQUOTE;
	v->a[65676] = sym_raw_string;
	v->a[65677] = anon_sym_DOLLAR_LBRACE;
	v->a[65678] = anon_sym_BQUOTE;
	v->a[65679] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_3284(v);
}

void	small_parse_table_3284(t_small_parse_table_array *v)
{
	v->a[65680] = 19;
	v->a[65681] = actions(57);
	v->a[65682] = 1;
	v->a[65683] = sym_comment;
	v->a[65684] = actions(4120);
	v->a[65685] = 1;
	v->a[65686] = anon_sym_PIPE;
	v->a[65687] = actions(4122);
	v->a[65688] = 1;
	v->a[65689] = anon_sym_AMP_AMP;
	v->a[65690] = actions(4124);
	v->a[65691] = 1;
	v->a[65692] = anon_sym_PIPE_PIPE;
	v->a[65693] = actions(4126);
	v->a[65694] = 1;
	v->a[65695] = anon_sym_EQ;
	v->a[65696] = actions(4132);
	v->a[65697] = 1;
	v->a[65698] = anon_sym_COMMA;
	v->a[65699] = actions(4138);
	small_parse_table_3285(v);
}

/* EOF small_parse_table_656.c */
