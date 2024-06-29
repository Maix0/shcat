/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_891.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4455(t_small_parse_table_array *v)
{
	v->a[89100] = sym_arithmetic_expansion;
	v->a[89101] = sym_simple_expansion;
	v->a[89102] = sym_expansion;
	v->a[89103] = sym_command_substitution;
	v->a[89104] = 4;
	v->a[89105] = actions(3);
	v->a[89106] = 1;
	v->a[89107] = sym_comment;
	v->a[89108] = actions(1790);
	v->a[89109] = 1;
	v->a[89110] = sym_variable_name;
	v->a[89111] = actions(1788);
	v->a[89112] = 2;
	v->a[89113] = aux_sym__simple_variable_name_token1;
	v->a[89114] = aux_sym__multiline_variable_name_token1;
	v->a[89115] = actions(1786);
	v->a[89116] = 9;
	v->a[89117] = anon_sym_BANG;
	v->a[89118] = anon_sym_DASH;
	v->a[89119] = anon_sym_STAR;
	small_parse_table_4456(v);
}

void	small_parse_table_4456(t_small_parse_table_array *v)
{
	v->a[89120] = anon_sym_QMARK;
	v->a[89121] = anon_sym_DOLLAR;
	v->a[89122] = anon_sym_POUND;
	v->a[89123] = anon_sym_AT;
	v->a[89124] = anon_sym_0;
	v->a[89125] = anon_sym__;
	v->a[89126] = 10;
	v->a[89127] = actions(3);
	v->a[89128] = 1;
	v->a[89129] = sym_comment;
	v->a[89130] = actions(3414);
	v->a[89131] = 1;
	v->a[89132] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89133] = actions(3420);
	v->a[89134] = 1;
	v->a[89135] = sym_string_content;
	v->a[89136] = actions(3422);
	v->a[89137] = 1;
	v->a[89138] = anon_sym_DOLLAR_LBRACE;
	v->a[89139] = actions(3424);
	small_parse_table_4457(v);
}

void	small_parse_table_4457(t_small_parse_table_array *v)
{
	v->a[89140] = 1;
	v->a[89141] = anon_sym_DOLLAR_LPAREN;
	v->a[89142] = actions(3426);
	v->a[89143] = 1;
	v->a[89144] = anon_sym_BQUOTE;
	v->a[89145] = actions(3490);
	v->a[89146] = 1;
	v->a[89147] = anon_sym_DOLLAR;
	v->a[89148] = actions(3492);
	v->a[89149] = 1;
	v->a[89150] = anon_sym_DQUOTE;
	v->a[89151] = state(1863);
	v->a[89152] = 1;
	v->a[89153] = aux_sym_string_repeat1;
	v->a[89154] = state(1963);
	v->a[89155] = 4;
	v->a[89156] = sym_arithmetic_expansion;
	v->a[89157] = sym_simple_expansion;
	v->a[89158] = sym_expansion;
	v->a[89159] = sym_command_substitution;
	small_parse_table_4458(v);
}

void	small_parse_table_4458(t_small_parse_table_array *v)
{
	v->a[89160] = 6;
	v->a[89161] = actions(1074);
	v->a[89162] = 1;
	v->a[89163] = sym_comment;
	v->a[89164] = actions(3500);
	v->a[89165] = 1;
	v->a[89166] = anon_sym_LT_LT;
	v->a[89167] = actions(3502);
	v->a[89168] = 1;
	v->a[89169] = anon_sym_LT_LT_DASH;
	v->a[89170] = actions(3498);
	v->a[89171] = 2;
	v->a[89172] = anon_sym_LT_AMP_DASH;
	v->a[89173] = anon_sym_GT_AMP_DASH;
	v->a[89174] = actions(3496);
	v->a[89175] = 3;
	v->a[89176] = anon_sym_GT_GT;
	v->a[89177] = anon_sym_AMP_GT_GT;
	v->a[89178] = anon_sym_GT_PIPE;
	v->a[89179] = actions(3494);
	small_parse_table_4459(v);
}

void	small_parse_table_4459(t_small_parse_table_array *v)
{
	v->a[89180] = 5;
	v->a[89181] = anon_sym_LT;
	v->a[89182] = anon_sym_GT;
	v->a[89183] = anon_sym_AMP_GT;
	v->a[89184] = anon_sym_LT_AMP;
	v->a[89185] = anon_sym_GT_AMP;
	v->a[89186] = 10;
	v->a[89187] = actions(3);
	v->a[89188] = 1;
	v->a[89189] = sym_comment;
	v->a[89190] = actions(3414);
	v->a[89191] = 1;
	v->a[89192] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89193] = actions(3420);
	v->a[89194] = 1;
	v->a[89195] = sym_string_content;
	v->a[89196] = actions(3422);
	v->a[89197] = 1;
	v->a[89198] = anon_sym_DOLLAR_LBRACE;
	v->a[89199] = actions(3424);
	small_parse_table_4460(v);
}

/* EOF small_parse_table_891.c */
