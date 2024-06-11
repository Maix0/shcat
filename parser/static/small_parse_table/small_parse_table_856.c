/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_856.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4280(t_small_parse_table_array *v)
{
	v->a[85600] = anon_sym_GT_PIPE;
	v->a[85601] = anon_sym_LT_AMP_DASH;
	v->a[85602] = anon_sym_GT_AMP_DASH;
	v->a[85603] = anon_sym_LT_LT_DASH;
	v->a[85604] = 12;
	v->a[85605] = actions(3);
	v->a[85606] = 1;
	v->a[85607] = sym_comment;
	v->a[85608] = actions(3266);
	v->a[85609] = 1;
	v->a[85610] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85611] = actions(3268);
	v->a[85612] = 1;
	v->a[85613] = anon_sym_DOLLAR;
	v->a[85614] = actions(3270);
	v->a[85615] = 1;
	v->a[85616] = anon_sym_DQUOTE;
	v->a[85617] = actions(3272);
	v->a[85618] = 1;
	v->a[85619] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4281(v);
}

void	small_parse_table_4281(t_small_parse_table_array *v)
{
	v->a[85620] = actions(3274);
	v->a[85621] = 1;
	v->a[85622] = anon_sym_DOLLAR_LPAREN;
	v->a[85623] = actions(3276);
	v->a[85624] = 1;
	v->a[85625] = anon_sym_BQUOTE;
	v->a[85626] = actions(3443);
	v->a[85627] = 1;
	v->a[85628] = sym__comment_word;
	v->a[85629] = actions(3445);
	v->a[85630] = 1;
	v->a[85631] = sym__empty_value;
	v->a[85632] = state(743);
	v->a[85633] = 1;
	v->a[85634] = sym_concatenation;
	v->a[85635] = actions(3441);
	v->a[85636] = 3;
	v->a[85637] = sym_raw_string;
	v->a[85638] = sym_number;
	v->a[85639] = sym_word;
	small_parse_table_4282(v);
}

void	small_parse_table_4282(t_small_parse_table_array *v)
{
	v->a[85640] = state(399);
	v->a[85641] = 5;
	v->a[85642] = sym_arithmetic_expansion;
	v->a[85643] = sym_string;
	v->a[85644] = sym_simple_expansion;
	v->a[85645] = sym_expansion;
	v->a[85646] = sym_command_substitution;
	v->a[85647] = 12;
	v->a[85648] = actions(3);
	v->a[85649] = 1;
	v->a[85650] = sym_comment;
	v->a[85651] = actions(3172);
	v->a[85652] = 1;
	v->a[85653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85654] = actions(3174);
	v->a[85655] = 1;
	v->a[85656] = anon_sym_DOLLAR;
	v->a[85657] = actions(3176);
	v->a[85658] = 1;
	v->a[85659] = anon_sym_DQUOTE;
	small_parse_table_4283(v);
}

void	small_parse_table_4283(t_small_parse_table_array *v)
{
	v->a[85660] = actions(3178);
	v->a[85661] = 1;
	v->a[85662] = anon_sym_DOLLAR_LBRACE;
	v->a[85663] = actions(3180);
	v->a[85664] = 1;
	v->a[85665] = anon_sym_DOLLAR_LPAREN;
	v->a[85666] = actions(3182);
	v->a[85667] = 1;
	v->a[85668] = anon_sym_BQUOTE;
	v->a[85669] = actions(3184);
	v->a[85670] = 1;
	v->a[85671] = sym__comment_word;
	v->a[85672] = actions(3186);
	v->a[85673] = 1;
	v->a[85674] = sym__empty_value;
	v->a[85675] = state(696);
	v->a[85676] = 1;
	v->a[85677] = sym_concatenation;
	v->a[85678] = actions(3447);
	v->a[85679] = 3;
	small_parse_table_4284(v);
}

void	small_parse_table_4284(t_small_parse_table_array *v)
{
	v->a[85680] = sym_raw_string;
	v->a[85681] = sym_number;
	v->a[85682] = sym_word;
	v->a[85683] = state(890);
	v->a[85684] = 5;
	v->a[85685] = sym_arithmetic_expansion;
	v->a[85686] = sym_string;
	v->a[85687] = sym_simple_expansion;
	v->a[85688] = sym_expansion;
	v->a[85689] = sym_command_substitution;
	v->a[85690] = 10;
	v->a[85691] = actions(3);
	v->a[85692] = 1;
	v->a[85693] = sym_comment;
	v->a[85694] = actions(3156);
	v->a[85695] = 1;
	v->a[85696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85697] = actions(3160);
	v->a[85698] = 1;
	v->a[85699] = anon_sym_DQUOTE;
	small_parse_table_4285(v);
}

/* EOF small_parse_table_856.c */
