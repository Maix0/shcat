/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_716.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3580(t_small_parse_table_array *v)
{
	v->a[71600] = actions(4152);
	v->a[71601] = 2;
	v->a[71602] = anon_sym_PLUS_PLUS2;
	v->a[71603] = anon_sym_DASH_DASH2;
	v->a[71604] = actions(4148);
	v->a[71605] = 3;
	v->a[71606] = anon_sym_STAR;
	v->a[71607] = anon_sym_SLASH;
	v->a[71608] = anon_sym_PERCENT;
	v->a[71609] = actions(4237);
	v->a[71610] = 13;
	v->a[71611] = anon_sym_COMMA;
	v->a[71612] = anon_sym_RPAREN_RPAREN;
	v->a[71613] = anon_sym_PLUS_EQ;
	v->a[71614] = anon_sym_DASH_EQ;
	v->a[71615] = anon_sym_STAR_EQ;
	v->a[71616] = anon_sym_SLASH_EQ;
	v->a[71617] = anon_sym_PERCENT_EQ;
	v->a[71618] = anon_sym_LT_LT_EQ;
	v->a[71619] = anon_sym_GT_GT_EQ;
	small_parse_table_3581(v);
}

void	small_parse_table_3581(t_small_parse_table_array *v)
{
	v->a[71620] = anon_sym_AMP_EQ;
	v->a[71621] = anon_sym_CARET_EQ;
	v->a[71622] = anon_sym_PIPE_EQ;
	v->a[71623] = anon_sym_COLON;
	v->a[71624] = 3;
	v->a[71625] = actions(57);
	v->a[71626] = 1;
	v->a[71627] = sym_comment;
	v->a[71628] = actions(4313);
	v->a[71629] = 13;
	v->a[71630] = anon_sym_PIPE;
	v->a[71631] = anon_sym_EQ;
	v->a[71632] = anon_sym_LT;
	v->a[71633] = anon_sym_GT;
	v->a[71634] = anon_sym_GT_GT;
	v->a[71635] = anon_sym_LT_LT;
	v->a[71636] = anon_sym_CARET;
	v->a[71637] = anon_sym_AMP;
	v->a[71638] = anon_sym_PLUS;
	v->a[71639] = anon_sym_DASH;
	small_parse_table_3582(v);
}

void	small_parse_table_3582(t_small_parse_table_array *v)
{
	v->a[71640] = anon_sym_STAR;
	v->a[71641] = anon_sym_SLASH;
	v->a[71642] = anon_sym_PERCENT;
	v->a[71643] = actions(4315);
	v->a[71644] = 22;
	v->a[71645] = anon_sym_AMP_AMP;
	v->a[71646] = anon_sym_PIPE_PIPE;
	v->a[71647] = anon_sym_COMMA;
	v->a[71648] = anon_sym_RPAREN_RPAREN;
	v->a[71649] = anon_sym_PLUS_EQ;
	v->a[71650] = anon_sym_DASH_EQ;
	v->a[71651] = anon_sym_STAR_EQ;
	v->a[71652] = anon_sym_SLASH_EQ;
	v->a[71653] = anon_sym_PERCENT_EQ;
	v->a[71654] = anon_sym_LT_LT_EQ;
	v->a[71655] = anon_sym_GT_GT_EQ;
	v->a[71656] = anon_sym_AMP_EQ;
	v->a[71657] = anon_sym_CARET_EQ;
	v->a[71658] = anon_sym_PIPE_EQ;
	v->a[71659] = anon_sym_EQ_EQ;
	small_parse_table_3583(v);
}

void	small_parse_table_3583(t_small_parse_table_array *v)
{
	v->a[71660] = anon_sym_BANG_EQ;
	v->a[71661] = anon_sym_LT_EQ;
	v->a[71662] = anon_sym_GT_EQ;
	v->a[71663] = anon_sym_QMARK;
	v->a[71664] = anon_sym_COLON;
	v->a[71665] = anon_sym_PLUS_PLUS2;
	v->a[71666] = anon_sym_DASH_DASH2;
	v->a[71667] = 5;
	v->a[71668] = actions(57);
	v->a[71669] = 1;
	v->a[71670] = sym_comment;
	v->a[71671] = actions(4317);
	v->a[71672] = 1;
	v->a[71673] = sym__special_character;
	v->a[71674] = state(1512);
	v->a[71675] = 1;
	v->a[71676] = aux_sym__literal_repeat1;
	v->a[71677] = actions(3195);
	v->a[71678] = 13;
	v->a[71679] = anon_sym_PIPE;
	small_parse_table_3584(v);
}

void	small_parse_table_3584(t_small_parse_table_array *v)
{
	v->a[71680] = anon_sym_LT;
	v->a[71681] = anon_sym_GT;
	v->a[71682] = anon_sym_AMP_GT;
	v->a[71683] = anon_sym_LT_AMP;
	v->a[71684] = anon_sym_GT_AMP;
	v->a[71685] = anon_sym_LT_LT;
	v->a[71686] = anon_sym_DOLLAR;
	v->a[71687] = aux_sym_number_token1;
	v->a[71688] = aux_sym_number_token2;
	v->a[71689] = anon_sym_DOLLAR_LPAREN;
	v->a[71690] = aux_sym__simple_variable_name_token1;
	v->a[71691] = sym_word;
	v->a[71692] = actions(3197);
	v->a[71693] = 19;
	v->a[71694] = sym_file_descriptor;
	v->a[71695] = sym_variable_name;
	v->a[71696] = sym_test_operator;
	v->a[71697] = sym__brace_start;
	v->a[71698] = anon_sym_PIPE_AMP;
	v->a[71699] = anon_sym_AMP_AMP;
	small_parse_table_3585(v);
}

/* EOF small_parse_table_716.c */
