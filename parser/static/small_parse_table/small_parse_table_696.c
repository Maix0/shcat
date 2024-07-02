/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_696.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3480(t_small_parse_table_array *v)
{
	v->a[69600] = anon_sym_DOLLAR;
	v->a[69601] = state(197);
	v->a[69602] = 2;
	v->a[69603] = sym_concatenation;
	v->a[69604] = aux_sym_for_statement_repeat1;
	v->a[69605] = actions(2749);
	v->a[69606] = 3;
	v->a[69607] = sym_raw_string;
	v->a[69608] = sym_number;
	v->a[69609] = sym_word;
	v->a[69610] = state(435);
	v->a[69611] = 5;
	v->a[69612] = sym_arithmetic_expansion;
	v->a[69613] = sym_string;
	v->a[69614] = sym_simple_expansion;
	v->a[69615] = sym_expansion;
	v->a[69616] = sym_command_substitution;
	v->a[69617] = 10;
	v->a[69618] = actions(3);
	v->a[69619] = 1;
	small_parse_table_3481(v);
}

void	small_parse_table_3481(t_small_parse_table_array *v)
{
	v->a[69620] = sym_comment;
	v->a[69621] = actions(821);
	v->a[69622] = 1;
	v->a[69623] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69624] = actions(823);
	v->a[69625] = 1;
	v->a[69626] = anon_sym_DOLLAR;
	v->a[69627] = actions(825);
	v->a[69628] = 1;
	v->a[69629] = anon_sym_DQUOTE;
	v->a[69630] = actions(827);
	v->a[69631] = 1;
	v->a[69632] = anon_sym_DOLLAR_LBRACE;
	v->a[69633] = actions(829);
	v->a[69634] = 1;
	v->a[69635] = anon_sym_DOLLAR_LPAREN;
	v->a[69636] = actions(831);
	v->a[69637] = 1;
	v->a[69638] = anon_sym_BQUOTE;
	v->a[69639] = state(262);
	small_parse_table_3482(v);
}

void	small_parse_table_3482(t_small_parse_table_array *v)
{
	v->a[69640] = 2;
	v->a[69641] = sym_concatenation;
	v->a[69642] = aux_sym_for_statement_repeat1;
	v->a[69643] = actions(919);
	v->a[69644] = 3;
	v->a[69645] = sym_raw_string;
	v->a[69646] = sym_number;
	v->a[69647] = sym_word;
	v->a[69648] = state(593);
	v->a[69649] = 5;
	v->a[69650] = sym_arithmetic_expansion;
	v->a[69651] = sym_string;
	v->a[69652] = sym_simple_expansion;
	v->a[69653] = sym_expansion;
	v->a[69654] = sym_command_substitution;
	v->a[69655] = 3;
	v->a[69656] = actions(680);
	v->a[69657] = 1;
	v->a[69658] = sym_comment;
	v->a[69659] = actions(707);
	small_parse_table_3483(v);
}

void	small_parse_table_3483(t_small_parse_table_array *v)
{
	v->a[69660] = 4;
	v->a[69661] = anon_sym_PIPE;
	v->a[69662] = anon_sym_LT;
	v->a[69663] = anon_sym_GT;
	v->a[69664] = anon_sym_LT_LT;
	v->a[69665] = actions(709);
	v->a[69666] = 12;
	v->a[69667] = sym_file_descriptor;
	v->a[69668] = sym__concat;
	v->a[69669] = sym_variable_name;
	v->a[69670] = anon_sym_AMP_AMP;
	v->a[69671] = anon_sym_PIPE_PIPE;
	v->a[69672] = anon_sym_GT_GT;
	v->a[69673] = anon_sym_LT_AMP;
	v->a[69674] = anon_sym_GT_AMP;
	v->a[69675] = anon_sym_GT_PIPE;
	v->a[69676] = anon_sym_LT_GT;
	v->a[69677] = anon_sym_LT_LT_DASH;
	v->a[69678] = aux_sym_concatenation_token1;
	v->a[69679] = 10;
	small_parse_table_3484(v);
}

void	small_parse_table_3484(t_small_parse_table_array *v)
{
	v->a[69680] = actions(3);
	v->a[69681] = 1;
	v->a[69682] = sym_comment;
	v->a[69683] = actions(2444);
	v->a[69684] = 1;
	v->a[69685] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69686] = actions(2448);
	v->a[69687] = 1;
	v->a[69688] = anon_sym_DQUOTE;
	v->a[69689] = actions(2450);
	v->a[69690] = 1;
	v->a[69691] = anon_sym_DOLLAR_LBRACE;
	v->a[69692] = actions(2452);
	v->a[69693] = 1;
	v->a[69694] = anon_sym_DOLLAR_LPAREN;
	v->a[69695] = actions(2454);
	v->a[69696] = 1;
	v->a[69697] = anon_sym_BQUOTE;
	v->a[69698] = actions(2553);
	v->a[69699] = 1;
	small_parse_table_3485(v);
}

/* EOF small_parse_table_696.c */
