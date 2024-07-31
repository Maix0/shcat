/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_186.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_930(t_small_parse_table_array *v)
{
	v->a[18600] = anon_sym_PIPE_PIPE;
	v->a[18601] = actions(423);
	v->a[18602] = 1;
	v->a[18603] = anon_sym_CARET;
	v->a[18604] = actions(425);
	v->a[18605] = 1;
	v->a[18606] = anon_sym_AMP;
	v->a[18607] = actions(479);
	v->a[18608] = 1;
	v->a[18609] = anon_sym_QMARK;
	v->a[18610] = actions(485);
	v->a[18611] = 1;
	v->a[18612] = anon_sym_EQ;
	v->a[18613] = actions(563);
	v->a[18614] = 1;
	v->a[18615] = anon_sym_COLON;
	v->a[18616] = actions(405);
	v->a[18617] = 2;
	v->a[18618] = anon_sym_PLUS_PLUS2;
	v->a[18619] = anon_sym_DASH_DASH2;
	small_parse_table_931(v);
}

void	small_parse_table_931(t_small_parse_table_array *v)
{
	v->a[18620] = actions(417);
	v->a[18621] = 2;
	v->a[18622] = anon_sym_LT;
	v->a[18623] = anon_sym_GT;
	v->a[18624] = actions(419);
	v->a[18625] = 2;
	v->a[18626] = anon_sym_GT_GT;
	v->a[18627] = anon_sym_LT_LT;
	v->a[18628] = actions(427);
	v->a[18629] = 2;
	v->a[18630] = anon_sym_EQ_EQ;
	v->a[18631] = anon_sym_BANG_EQ;
	v->a[18632] = actions(429);
	v->a[18633] = 2;
	v->a[18634] = anon_sym_LT_EQ;
	v->a[18635] = anon_sym_GT_EQ;
	v->a[18636] = actions(431);
	v->a[18637] = 2;
	v->a[18638] = anon_sym_PLUS;
	v->a[18639] = anon_sym_DASH;
	small_parse_table_932(v);
}

void	small_parse_table_932(t_small_parse_table_array *v)
{
	v->a[18640] = actions(433);
	v->a[18641] = 3;
	v->a[18642] = anon_sym_STAR;
	v->a[18643] = anon_sym_SLASH;
	v->a[18644] = anon_sym_PERCENT;
	v->a[18645] = actions(493);
	v->a[18646] = 10;
	v->a[18647] = anon_sym_PLUS_EQ;
	v->a[18648] = anon_sym_DASH_EQ;
	v->a[18649] = anon_sym_STAR_EQ;
	v->a[18650] = anon_sym_SLASH_EQ;
	v->a[18651] = anon_sym_PERCENT_EQ;
	v->a[18652] = anon_sym_LT_LT_EQ;
	v->a[18653] = anon_sym_GT_GT_EQ;
	v->a[18654] = anon_sym_AMP_EQ;
	v->a[18655] = anon_sym_CARET_EQ;
	v->a[18656] = anon_sym_PIPE_EQ;
	v->a[18657] = 13;
	v->a[18658] = actions(3);
	v->a[18659] = 1;
	small_parse_table_933(v);
}

void	small_parse_table_933(t_small_parse_table_array *v)
{
	v->a[18660] = sym_comment;
	v->a[18661] = actions(53);
	v->a[18662] = 1;
	v->a[18663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18664] = actions(55);
	v->a[18665] = 1;
	v->a[18666] = anon_sym_DOLLAR;
	v->a[18667] = actions(57);
	v->a[18668] = 1;
	v->a[18669] = anon_sym_DQUOTE;
	v->a[18670] = actions(61);
	v->a[18671] = 1;
	v->a[18672] = anon_sym_DOLLAR_LBRACE;
	v->a[18673] = actions(63);
	v->a[18674] = 1;
	v->a[18675] = anon_sym_DOLLAR_LPAREN;
	v->a[18676] = actions(65);
	v->a[18677] = 1;
	v->a[18678] = anon_sym_BQUOTE;
	v->a[18679] = actions(535);
	small_parse_table_934(v);
}

void	small_parse_table_934(t_small_parse_table_array *v)
{
	v->a[18680] = 1;
	v->a[18681] = sym__bare_dollar;
	v->a[18682] = state(191);
	v->a[18683] = 1;
	v->a[18684] = aux_sym_command_repeat2;
	v->a[18685] = state(614);
	v->a[18686] = 1;
	v->a[18687] = sym_concatenation;
	v->a[18688] = actions(531);
	v->a[18689] = 3;
	v->a[18690] = sym_raw_string;
	v->a[18691] = sym_number;
	v->a[18692] = sym_word;
	v->a[18693] = state(344);
	v->a[18694] = 5;
	v->a[18695] = sym_arithmetic_expansion;
	v->a[18696] = sym_string;
	v->a[18697] = sym_simple_expansion;
	v->a[18698] = sym_expansion;
	v->a[18699] = sym_command_substitution;
	small_parse_table_935(v);
}

/* EOF small_parse_table_186.c */
