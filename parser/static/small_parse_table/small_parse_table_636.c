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
	v->a[63600] = actions(2558);
	v->a[63601] = 1;
	v->a[63602] = anon_sym_DOLLAR_LPAREN;
	v->a[63603] = actions(2560);
	v->a[63604] = 1;
	v->a[63605] = anon_sym_BQUOTE;
	v->a[63606] = actions(2795);
	v->a[63607] = 1;
	v->a[63608] = anon_sym_DOLLAR;
	v->a[63609] = actions(2797);
	v->a[63610] = 1;
	v->a[63611] = anon_sym_DQUOTE;
	v->a[63612] = state(1381);
	v->a[63613] = 1;
	v->a[63614] = aux_sym_string_repeat1;
	v->a[63615] = state(1477);
	v->a[63616] = 4;
	v->a[63617] = sym_arithmetic_expansion;
	v->a[63618] = sym_simple_expansion;
	v->a[63619] = sym_expansion;
	small_parse_table_3181(v);
}

void	small_parse_table_3181(t_small_parse_table_array *v)
{
	v->a[63620] = sym_command_substitution;
	v->a[63621] = 3;
	v->a[63622] = actions(407);
	v->a[63623] = 1;
	v->a[63624] = sym_comment;
	v->a[63625] = actions(1817);
	v->a[63626] = 4;
	v->a[63627] = anon_sym_PIPE;
	v->a[63628] = anon_sym_LT;
	v->a[63629] = anon_sym_GT;
	v->a[63630] = anon_sym_LT_LT;
	v->a[63631] = actions(1815);
	v->a[63632] = 8;
	v->a[63633] = anon_sym_AMP_AMP;
	v->a[63634] = anon_sym_PIPE_PIPE;
	v->a[63635] = anon_sym_GT_GT;
	v->a[63636] = anon_sym_LT_AMP;
	v->a[63637] = anon_sym_GT_AMP;
	v->a[63638] = anon_sym_GT_PIPE;
	v->a[63639] = anon_sym_LT_GT;
	small_parse_table_3182(v);
}

void	small_parse_table_3182(t_small_parse_table_array *v)
{
	v->a[63640] = anon_sym_LT_LT_DASH;
	v->a[63641] = 10;
	v->a[63642] = actions(3);
	v->a[63643] = 1;
	v->a[63644] = sym_comment;
	v->a[63645] = actions(2548);
	v->a[63646] = 1;
	v->a[63647] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63648] = actions(2554);
	v->a[63649] = 1;
	v->a[63650] = sym_string_content;
	v->a[63651] = actions(2556);
	v->a[63652] = 1;
	v->a[63653] = anon_sym_DOLLAR_LBRACE;
	v->a[63654] = actions(2558);
	v->a[63655] = 1;
	v->a[63656] = anon_sym_DOLLAR_LPAREN;
	v->a[63657] = actions(2560);
	v->a[63658] = 1;
	v->a[63659] = anon_sym_BQUOTE;
	small_parse_table_3183(v);
}

void	small_parse_table_3183(t_small_parse_table_array *v)
{
	v->a[63660] = actions(2799);
	v->a[63661] = 1;
	v->a[63662] = anon_sym_DOLLAR;
	v->a[63663] = actions(2801);
	v->a[63664] = 1;
	v->a[63665] = anon_sym_DQUOTE;
	v->a[63666] = state(1391);
	v->a[63667] = 1;
	v->a[63668] = aux_sym_string_repeat1;
	v->a[63669] = state(1477);
	v->a[63670] = 4;
	v->a[63671] = sym_arithmetic_expansion;
	v->a[63672] = sym_simple_expansion;
	v->a[63673] = sym_expansion;
	v->a[63674] = sym_command_substitution;
	v->a[63675] = 8;
	v->a[63676] = actions(3);
	v->a[63677] = 1;
	v->a[63678] = sym_comment;
	v->a[63679] = actions(2566);
	small_parse_table_3184(v);
}

void	small_parse_table_3184(t_small_parse_table_array *v)
{
	v->a[63680] = 1;
	v->a[63681] = anon_sym_POUND;
	v->a[63682] = actions(2568);
	v->a[63683] = 1;
	v->a[63684] = aux_sym__simple_variable_name_token1;
	v->a[63685] = actions(2570);
	v->a[63686] = 1;
	v->a[63687] = anon_sym_0;
	v->a[63688] = actions(2572);
	v->a[63689] = 1;
	v->a[63690] = sym_variable_name;
	v->a[63691] = actions(2803);
	v->a[63692] = 1;
	v->a[63693] = anon_sym_RBRACE;
	v->a[63694] = state(1692);
	v->a[63695] = 1;
	v->a[63696] = sym__expansion_body;
	v->a[63697] = actions(2564);
	v->a[63698] = 6;
	v->a[63699] = anon_sym_BANG;
	small_parse_table_3185(v);
}

/* EOF small_parse_table_636.c */
