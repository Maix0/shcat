/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_596.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2980(t_small_parse_table_array *v)
{
	v->a[59600] = state(1200);
	v->a[59601] = 5;
	v->a[59602] = sym_arithmetic_expansion;
	v->a[59603] = sym_string;
	v->a[59604] = sym_simple_expansion;
	v->a[59605] = sym_expansion;
	v->a[59606] = sym_command_substitution;
	v->a[59607] = actions(541);
	v->a[59608] = 19;
	v->a[59609] = anon_sym_LT;
	v->a[59610] = anon_sym_GT;
	v->a[59611] = anon_sym_GT_GT;
	v->a[59612] = anon_sym_AMP_GT;
	v->a[59613] = anon_sym_AMP_GT_GT;
	v->a[59614] = anon_sym_LT_AMP;
	v->a[59615] = anon_sym_GT_AMP;
	v->a[59616] = anon_sym_GT_PIPE;
	v->a[59617] = anon_sym_LT_AMP_DASH;
	v->a[59618] = anon_sym_GT_AMP_DASH;
	v->a[59619] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2981(v);
}

void	small_parse_table_2981(t_small_parse_table_array *v)
{
	v->a[59620] = anon_sym_DOLLAR;
	v->a[59621] = anon_sym_DQUOTE;
	v->a[59622] = sym_raw_string;
	v->a[59623] = sym_number;
	v->a[59624] = anon_sym_DOLLAR_LBRACE;
	v->a[59625] = anon_sym_DOLLAR_LPAREN;
	v->a[59626] = anon_sym_BQUOTE;
	v->a[59627] = sym_word;
	v->a[59628] = 3;
	v->a[59629] = actions(3);
	v->a[59630] = 1;
	v->a[59631] = sym_comment;
	v->a[59632] = actions(1145);
	v->a[59633] = 3;
	v->a[59634] = sym_file_descriptor;
	v->a[59635] = sym__concat;
	v->a[59636] = sym_variable_name;
	v->a[59637] = actions(1143);
	v->a[59638] = 25;
	v->a[59639] = anon_sym_PIPE;
	small_parse_table_2982(v);
}

void	small_parse_table_2982(t_small_parse_table_array *v)
{
	v->a[59640] = anon_sym_AMP_AMP;
	v->a[59641] = anon_sym_PIPE_PIPE;
	v->a[59642] = anon_sym_LT;
	v->a[59643] = anon_sym_GT;
	v->a[59644] = anon_sym_GT_GT;
	v->a[59645] = anon_sym_AMP_GT;
	v->a[59646] = anon_sym_AMP_GT_GT;
	v->a[59647] = anon_sym_LT_AMP;
	v->a[59648] = anon_sym_GT_AMP;
	v->a[59649] = anon_sym_GT_PIPE;
	v->a[59650] = anon_sym_LT_AMP_DASH;
	v->a[59651] = anon_sym_GT_AMP_DASH;
	v->a[59652] = anon_sym_LT_LT;
	v->a[59653] = anon_sym_LT_LT_DASH;
	v->a[59654] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59655] = aux_sym_concatenation_token1;
	v->a[59656] = anon_sym_DOLLAR;
	v->a[59657] = anon_sym_DQUOTE;
	v->a[59658] = sym_raw_string;
	v->a[59659] = sym_number;
	small_parse_table_2983(v);
}

void	small_parse_table_2983(t_small_parse_table_array *v)
{
	v->a[59660] = anon_sym_DOLLAR_LBRACE;
	v->a[59661] = anon_sym_DOLLAR_LPAREN;
	v->a[59662] = anon_sym_BQUOTE;
	v->a[59663] = sym_word;
	v->a[59664] = 3;
	v->a[59665] = actions(3);
	v->a[59666] = 1;
	v->a[59667] = sym_comment;
	v->a[59668] = actions(1076);
	v->a[59669] = 3;
	v->a[59670] = sym_file_descriptor;
	v->a[59671] = sym__concat;
	v->a[59672] = sym_variable_name;
	v->a[59673] = actions(1074);
	v->a[59674] = 25;
	v->a[59675] = anon_sym_PIPE;
	v->a[59676] = anon_sym_AMP_AMP;
	v->a[59677] = anon_sym_PIPE_PIPE;
	v->a[59678] = anon_sym_LT;
	v->a[59679] = anon_sym_GT;
	small_parse_table_2984(v);
}

void	small_parse_table_2984(t_small_parse_table_array *v)
{
	v->a[59680] = anon_sym_GT_GT;
	v->a[59681] = anon_sym_AMP_GT;
	v->a[59682] = anon_sym_AMP_GT_GT;
	v->a[59683] = anon_sym_LT_AMP;
	v->a[59684] = anon_sym_GT_AMP;
	v->a[59685] = anon_sym_GT_PIPE;
	v->a[59686] = anon_sym_LT_AMP_DASH;
	v->a[59687] = anon_sym_GT_AMP_DASH;
	v->a[59688] = anon_sym_LT_LT;
	v->a[59689] = anon_sym_LT_LT_DASH;
	v->a[59690] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59691] = aux_sym_concatenation_token1;
	v->a[59692] = anon_sym_DOLLAR;
	v->a[59693] = anon_sym_DQUOTE;
	v->a[59694] = sym_raw_string;
	v->a[59695] = sym_number;
	v->a[59696] = anon_sym_DOLLAR_LBRACE;
	v->a[59697] = anon_sym_DOLLAR_LPAREN;
	v->a[59698] = anon_sym_BQUOTE;
	v->a[59699] = sym_word;
	small_parse_table_2985(v);
}

/* EOF small_parse_table_596.c */
