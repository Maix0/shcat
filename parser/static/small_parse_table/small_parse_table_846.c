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
	v->a[84600] = sym_string;
	v->a[84601] = sym_simple_expansion;
	v->a[84602] = sym_expansion;
	v->a[84603] = sym_command_substitution;
	v->a[84604] = 10;
	v->a[84605] = actions(3);
	v->a[84606] = 1;
	v->a[84607] = sym_comment;
	v->a[84608] = actions(3156);
	v->a[84609] = 1;
	v->a[84610] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84611] = actions(3160);
	v->a[84612] = 1;
	v->a[84613] = anon_sym_DQUOTE;
	v->a[84614] = actions(3162);
	v->a[84615] = 1;
	v->a[84616] = anon_sym_DOLLAR_LBRACE;
	v->a[84617] = actions(3164);
	v->a[84618] = 1;
	v->a[84619] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4231(v);
}

void	small_parse_table_4231(t_small_parse_table_array *v)
{
	v->a[84620] = actions(3166);
	v->a[84621] = 1;
	v->a[84622] = anon_sym_BQUOTE;
	v->a[84623] = actions(3168);
	v->a[84624] = 1;
	v->a[84625] = sym__bare_dollar;
	v->a[84626] = actions(3252);
	v->a[84627] = 1;
	v->a[84628] = anon_sym_DOLLAR;
	v->a[84629] = actions(3154);
	v->a[84630] = 5;
	v->a[84631] = aux_sym_concatenation_token1;
	v->a[84632] = sym_raw_string;
	v->a[84633] = sym_number;
	v->a[84634] = sym__comment_word;
	v->a[84635] = sym_word;
	v->a[84636] = state(1113);
	v->a[84637] = 5;
	v->a[84638] = sym_arithmetic_expansion;
	v->a[84639] = sym_string;
	small_parse_table_4232(v);
}

void	small_parse_table_4232(t_small_parse_table_array *v)
{
	v->a[84640] = sym_simple_expansion;
	v->a[84641] = sym_expansion;
	v->a[84642] = sym_command_substitution;
	v->a[84643] = 10;
	v->a[84644] = actions(3);
	v->a[84645] = 1;
	v->a[84646] = sym_comment;
	v->a[84647] = actions(3308);
	v->a[84648] = 1;
	v->a[84649] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84650] = actions(3310);
	v->a[84651] = 1;
	v->a[84652] = anon_sym_DOLLAR;
	v->a[84653] = actions(3312);
	v->a[84654] = 1;
	v->a[84655] = anon_sym_DQUOTE;
	v->a[84656] = actions(3314);
	v->a[84657] = 1;
	v->a[84658] = anon_sym_DOLLAR_LBRACE;
	v->a[84659] = actions(3316);
	small_parse_table_4233(v);
}

void	small_parse_table_4233(t_small_parse_table_array *v)
{
	v->a[84660] = 1;
	v->a[84661] = anon_sym_DOLLAR_LPAREN;
	v->a[84662] = actions(3318);
	v->a[84663] = 1;
	v->a[84664] = anon_sym_BQUOTE;
	v->a[84665] = actions(3320);
	v->a[84666] = 1;
	v->a[84667] = sym__bare_dollar;
	v->a[84668] = actions(3306);
	v->a[84669] = 5;
	v->a[84670] = aux_sym_concatenation_token1;
	v->a[84671] = sym_raw_string;
	v->a[84672] = sym_number;
	v->a[84673] = sym__comment_word;
	v->a[84674] = sym_word;
	v->a[84675] = state(1197);
	v->a[84676] = 5;
	v->a[84677] = sym_arithmetic_expansion;
	v->a[84678] = sym_string;
	v->a[84679] = sym_simple_expansion;
	small_parse_table_4234(v);
}

void	small_parse_table_4234(t_small_parse_table_array *v)
{
	v->a[84680] = sym_expansion;
	v->a[84681] = sym_command_substitution;
	v->a[84682] = 12;
	v->a[84683] = actions(3);
	v->a[84684] = 1;
	v->a[84685] = sym_comment;
	v->a[84686] = actions(3172);
	v->a[84687] = 1;
	v->a[84688] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84689] = actions(3174);
	v->a[84690] = 1;
	v->a[84691] = anon_sym_DOLLAR;
	v->a[84692] = actions(3176);
	v->a[84693] = 1;
	v->a[84694] = anon_sym_DQUOTE;
	v->a[84695] = actions(3178);
	v->a[84696] = 1;
	v->a[84697] = anon_sym_DOLLAR_LBRACE;
	v->a[84698] = actions(3180);
	v->a[84699] = 1;
	small_parse_table_4235(v);
}

/* EOF small_parse_table_846.c */
