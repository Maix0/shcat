/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_636.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3180(t_small_parse_table_array *v)
{
	v->a[63600] = anon_sym_GT_AMP;
	v->a[63601] = anon_sym_LT_LT;
	v->a[63602] = anon_sym_DOLLAR;
	v->a[63603] = aux_sym_number_token1;
	v->a[63604] = aux_sym_number_token2;
	v->a[63605] = anon_sym_DOLLAR_LPAREN;
	v->a[63606] = anon_sym_BQUOTE;
	v->a[63607] = aux_sym__simple_variable_name_token1;
	v->a[63608] = sym_word;
	v->a[63609] = actions(2719);
	v->a[63610] = 19;
	v->a[63611] = sym_file_descriptor;
	v->a[63612] = sym_variable_name;
	v->a[63613] = sym_test_operator;
	v->a[63614] = sym__brace_start;
	v->a[63615] = anon_sym_PIPE_AMP;
	v->a[63616] = anon_sym_AMP_AMP;
	v->a[63617] = anon_sym_PIPE_PIPE;
	v->a[63618] = anon_sym_GT_GT;
	v->a[63619] = anon_sym_AMP_GT_GT;
	small_parse_table_3181(v);
}

void	small_parse_table_3181(t_small_parse_table_array *v)
{
	v->a[63620] = anon_sym_GT_PIPE;
	v->a[63621] = anon_sym_LT_AMP_DASH;
	v->a[63622] = anon_sym_GT_AMP_DASH;
	v->a[63623] = anon_sym_LT_LT_DASH;
	v->a[63624] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63625] = sym__special_character;
	v->a[63626] = anon_sym_DQUOTE;
	v->a[63627] = sym_raw_string;
	v->a[63628] = anon_sym_DOLLAR_LBRACE;
	v->a[63629] = anon_sym_DOLLAR_BQUOTE;
	v->a[63630] = 19;
	v->a[63631] = actions(57);
	v->a[63632] = 1;
	v->a[63633] = sym_comment;
	v->a[63634] = actions(4079);
	v->a[63635] = 1;
	v->a[63636] = sym_word;
	v->a[63637] = actions(4082);
	v->a[63638] = 1;
	v->a[63639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3182(v);
}

void	small_parse_table_3182(t_small_parse_table_array *v)
{
	v->a[63640] = actions(4085);
	v->a[63641] = 1;
	v->a[63642] = anon_sym_DOLLAR;
	v->a[63643] = actions(4088);
	v->a[63644] = 1;
	v->a[63645] = sym__special_character;
	v->a[63646] = actions(4091);
	v->a[63647] = 1;
	v->a[63648] = anon_sym_DQUOTE;
	v->a[63649] = actions(4097);
	v->a[63650] = 1;
	v->a[63651] = aux_sym_number_token1;
	v->a[63652] = actions(4100);
	v->a[63653] = 1;
	v->a[63654] = aux_sym_number_token2;
	v->a[63655] = actions(4103);
	v->a[63656] = 1;
	v->a[63657] = anon_sym_DOLLAR_LBRACE;
	v->a[63658] = actions(4106);
	v->a[63659] = 1;
	small_parse_table_3183(v);
}

void	small_parse_table_3183(t_small_parse_table_array *v)
{
	v->a[63660] = anon_sym_DOLLAR_LPAREN;
	v->a[63661] = actions(4109);
	v->a[63662] = 1;
	v->a[63663] = anon_sym_BQUOTE;
	v->a[63664] = actions(4112);
	v->a[63665] = 1;
	v->a[63666] = anon_sym_DOLLAR_BQUOTE;
	v->a[63667] = actions(4115);
	v->a[63668] = 1;
	v->a[63669] = sym__brace_start;
	v->a[63670] = state(1920);
	v->a[63671] = 1;
	v->a[63672] = aux_sym__literal_repeat1;
	v->a[63673] = actions(4094);
	v->a[63674] = 2;
	v->a[63675] = sym_test_operator;
	v->a[63676] = sym_raw_string;
	v->a[63677] = state(1368);
	v->a[63678] = 2;
	v->a[63679] = sym_concatenation;
	small_parse_table_3184(v);
}

void	small_parse_table_3184(t_small_parse_table_array *v)
{
	v->a[63680] = aux_sym_for_statement_repeat1;
	v->a[63681] = actions(1285);
	v->a[63682] = 5;
	v->a[63683] = anon_sym_LT;
	v->a[63684] = anon_sym_GT;
	v->a[63685] = anon_sym_AMP_GT;
	v->a[63686] = anon_sym_LT_AMP;
	v->a[63687] = anon_sym_GT_AMP;
	v->a[63688] = actions(1287);
	v->a[63689] = 7;
	v->a[63690] = sym_file_descriptor;
	v->a[63691] = sym_variable_name;
	v->a[63692] = anon_sym_GT_GT;
	v->a[63693] = anon_sym_AMP_GT_GT;
	v->a[63694] = anon_sym_GT_PIPE;
	v->a[63695] = anon_sym_LT_AMP_DASH;
	v->a[63696] = anon_sym_GT_AMP_DASH;
	v->a[63697] = state(1800);
	v->a[63698] = 7;
	v->a[63699] = sym_arithmetic_expansion;
	small_parse_table_3185(v);
}

/* EOF small_parse_table_636.c */
