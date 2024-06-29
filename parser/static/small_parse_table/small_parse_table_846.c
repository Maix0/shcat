/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_846.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4230(t_small_parse_table_array *v)
{
	v->a[84600] = anon_sym_AMP_GT_GT;
	v->a[84601] = anon_sym_GT_PIPE;
	v->a[84602] = anon_sym_LT_AMP_DASH;
	v->a[84603] = anon_sym_GT_AMP_DASH;
	v->a[84604] = anon_sym_LT_LT_DASH;
	v->a[84605] = 3;
	v->a[84606] = actions(1074);
	v->a[84607] = 1;
	v->a[84608] = sym_comment;
	v->a[84609] = actions(2425);
	v->a[84610] = 7;
	v->a[84611] = anon_sym_PIPE;
	v->a[84612] = anon_sym_LT;
	v->a[84613] = anon_sym_GT;
	v->a[84614] = anon_sym_AMP_GT;
	v->a[84615] = anon_sym_LT_AMP;
	v->a[84616] = anon_sym_GT_AMP;
	v->a[84617] = anon_sym_LT_LT;
	v->a[84618] = actions(2423);
	v->a[84619] = 9;
	small_parse_table_4231(v);
}

void	small_parse_table_4231(t_small_parse_table_array *v)
{
	v->a[84620] = sym_file_descriptor;
	v->a[84621] = anon_sym_AMP_AMP;
	v->a[84622] = anon_sym_PIPE_PIPE;
	v->a[84623] = anon_sym_GT_GT;
	v->a[84624] = anon_sym_AMP_GT_GT;
	v->a[84625] = anon_sym_GT_PIPE;
	v->a[84626] = anon_sym_LT_AMP_DASH;
	v->a[84627] = anon_sym_GT_AMP_DASH;
	v->a[84628] = anon_sym_LT_LT_DASH;
	v->a[84629] = 3;
	v->a[84630] = actions(1074);
	v->a[84631] = 1;
	v->a[84632] = sym_comment;
	v->a[84633] = actions(2378);
	v->a[84634] = 7;
	v->a[84635] = anon_sym_PIPE;
	v->a[84636] = anon_sym_LT;
	v->a[84637] = anon_sym_GT;
	v->a[84638] = anon_sym_AMP_GT;
	v->a[84639] = anon_sym_LT_AMP;
	small_parse_table_4232(v);
}

void	small_parse_table_4232(t_small_parse_table_array *v)
{
	v->a[84640] = anon_sym_GT_AMP;
	v->a[84641] = anon_sym_LT_LT;
	v->a[84642] = actions(2376);
	v->a[84643] = 9;
	v->a[84644] = sym_file_descriptor;
	v->a[84645] = anon_sym_AMP_AMP;
	v->a[84646] = anon_sym_PIPE_PIPE;
	v->a[84647] = anon_sym_GT_GT;
	v->a[84648] = anon_sym_AMP_GT_GT;
	v->a[84649] = anon_sym_GT_PIPE;
	v->a[84650] = anon_sym_LT_AMP_DASH;
	v->a[84651] = anon_sym_GT_AMP_DASH;
	v->a[84652] = anon_sym_LT_LT_DASH;
	v->a[84653] = 10;
	v->a[84654] = actions(3);
	v->a[84655] = 1;
	v->a[84656] = sym_comment;
	v->a[84657] = actions(813);
	v->a[84658] = 1;
	v->a[84659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4233(v);
}

void	small_parse_table_4233(t_small_parse_table_array *v)
{
	v->a[84660] = actions(815);
	v->a[84661] = 1;
	v->a[84662] = anon_sym_DOLLAR;
	v->a[84663] = actions(817);
	v->a[84664] = 1;
	v->a[84665] = anon_sym_DQUOTE;
	v->a[84666] = actions(819);
	v->a[84667] = 1;
	v->a[84668] = anon_sym_DOLLAR_LBRACE;
	v->a[84669] = actions(821);
	v->a[84670] = 1;
	v->a[84671] = anon_sym_DOLLAR_LPAREN;
	v->a[84672] = actions(823);
	v->a[84673] = 1;
	v->a[84674] = anon_sym_BQUOTE;
	v->a[84675] = state(234);
	v->a[84676] = 2;
	v->a[84677] = sym_concatenation;
	v->a[84678] = aux_sym_for_statement_repeat1;
	v->a[84679] = actions(811);
	small_parse_table_4234(v);
}

void	small_parse_table_4234(t_small_parse_table_array *v)
{
	v->a[84680] = 3;
	v->a[84681] = sym_raw_string;
	v->a[84682] = sym_number;
	v->a[84683] = sym_word;
	v->a[84684] = state(506);
	v->a[84685] = 5;
	v->a[84686] = sym_arithmetic_expansion;
	v->a[84687] = sym_string;
	v->a[84688] = sym_simple_expansion;
	v->a[84689] = sym_expansion;
	v->a[84690] = sym_command_substitution;
	v->a[84691] = 5;
	v->a[84692] = actions(3);
	v->a[84693] = 1;
	v->a[84694] = sym_comment;
	v->a[84695] = actions(3141);
	v->a[84696] = 1;
	v->a[84697] = aux_sym_concatenation_token1;
	v->a[84698] = actions(3160);
	v->a[84699] = 1;
	small_parse_table_4235(v);
}

/* EOF small_parse_table_846.c */
