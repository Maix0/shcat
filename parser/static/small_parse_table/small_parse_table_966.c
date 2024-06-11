/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_966.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4830(t_small_parse_table_array *v)
{
	v->a[96600] = anon_sym_DOLLAR_LBRACE;
	v->a[96601] = actions(3866);
	v->a[96602] = 1;
	v->a[96603] = anon_sym_DOLLAR_LPAREN;
	v->a[96604] = actions(3868);
	v->a[96605] = 1;
	v->a[96606] = anon_sym_BQUOTE;
	v->a[96607] = actions(4146);
	v->a[96608] = 1;
	v->a[96609] = anon_sym_DOLLAR;
	v->a[96610] = actions(4148);
	v->a[96611] = 1;
	v->a[96612] = anon_sym_DQUOTE;
	v->a[96613] = state(2015);
	v->a[96614] = 1;
	v->a[96615] = aux_sym_string_repeat1;
	v->a[96616] = state(2107);
	v->a[96617] = 4;
	v->a[96618] = sym_arithmetic_expansion;
	v->a[96619] = sym_simple_expansion;
	small_parse_table_4831(v);
}

void	small_parse_table_4831(t_small_parse_table_array *v)
{
	v->a[96620] = sym_expansion;
	v->a[96621] = sym_command_substitution;
	v->a[96622] = 10;
	v->a[96623] = actions(3);
	v->a[96624] = 1;
	v->a[96625] = sym_comment;
	v->a[96626] = actions(3856);
	v->a[96627] = 1;
	v->a[96628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96629] = actions(3862);
	v->a[96630] = 1;
	v->a[96631] = sym_string_content;
	v->a[96632] = actions(3864);
	v->a[96633] = 1;
	v->a[96634] = anon_sym_DOLLAR_LBRACE;
	v->a[96635] = actions(3866);
	v->a[96636] = 1;
	v->a[96637] = anon_sym_DOLLAR_LPAREN;
	v->a[96638] = actions(3868);
	v->a[96639] = 1;
	small_parse_table_4832(v);
}

void	small_parse_table_4832(t_small_parse_table_array *v)
{
	v->a[96640] = anon_sym_BQUOTE;
	v->a[96641] = actions(4150);
	v->a[96642] = 1;
	v->a[96643] = anon_sym_DOLLAR;
	v->a[96644] = actions(4152);
	v->a[96645] = 1;
	v->a[96646] = anon_sym_DQUOTE;
	v->a[96647] = state(1987);
	v->a[96648] = 1;
	v->a[96649] = aux_sym_string_repeat1;
	v->a[96650] = state(2107);
	v->a[96651] = 4;
	v->a[96652] = sym_arithmetic_expansion;
	v->a[96653] = sym_simple_expansion;
	v->a[96654] = sym_expansion;
	v->a[96655] = sym_command_substitution;
	v->a[96656] = 6;
	v->a[96657] = actions(1094);
	v->a[96658] = 1;
	v->a[96659] = sym_comment;
	small_parse_table_4833(v);
}

void	small_parse_table_4833(t_small_parse_table_array *v)
{
	v->a[96660] = actions(3896);
	v->a[96661] = 1;
	v->a[96662] = anon_sym_LT_LT;
	v->a[96663] = actions(3898);
	v->a[96664] = 1;
	v->a[96665] = anon_sym_LT_LT_DASH;
	v->a[96666] = actions(4158);
	v->a[96667] = 2;
	v->a[96668] = anon_sym_LT_AMP_DASH;
	v->a[96669] = anon_sym_GT_AMP_DASH;
	v->a[96670] = actions(4156);
	v->a[96671] = 3;
	v->a[96672] = anon_sym_GT_GT;
	v->a[96673] = anon_sym_AMP_GT_GT;
	v->a[96674] = anon_sym_GT_PIPE;
	v->a[96675] = actions(4154);
	v->a[96676] = 5;
	v->a[96677] = anon_sym_LT;
	v->a[96678] = anon_sym_GT;
	v->a[96679] = anon_sym_AMP_GT;
	small_parse_table_4834(v);
}

void	small_parse_table_4834(t_small_parse_table_array *v)
{
	v->a[96680] = anon_sym_LT_AMP;
	v->a[96681] = anon_sym_GT_AMP;
	v->a[96682] = 4;
	v->a[96683] = actions(3);
	v->a[96684] = 1;
	v->a[96685] = sym_comment;
	v->a[96686] = actions(1840);
	v->a[96687] = 1;
	v->a[96688] = sym_variable_name;
	v->a[96689] = actions(1838);
	v->a[96690] = 2;
	v->a[96691] = aux_sym__simple_variable_name_token1;
	v->a[96692] = aux_sym__multiline_variable_name_token1;
	v->a[96693] = actions(1836);
	v->a[96694] = 9;
	v->a[96695] = anon_sym_BANG;
	v->a[96696] = anon_sym_DASH;
	v->a[96697] = anon_sym_STAR;
	v->a[96698] = anon_sym_QMARK;
	v->a[96699] = anon_sym_DOLLAR;
	small_parse_table_4835(v);
}

/* EOF small_parse_table_966.c */
