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
	v->a[89100] = state(1723);
	v->a[89101] = 1;
	v->a[89102] = aux_sym_string_repeat1;
	v->a[89103] = state(1869);
	v->a[89104] = 4;
	v->a[89105] = sym_arithmetic_expansion;
	v->a[89106] = sym_simple_expansion;
	v->a[89107] = sym_expansion;
	v->a[89108] = sym_command_substitution;
	v->a[89109] = 10;
	v->a[89110] = actions(3);
	v->a[89111] = 1;
	v->a[89112] = sym_comment;
	v->a[89113] = actions(3524);
	v->a[89114] = 1;
	v->a[89115] = anon_sym_DQUOTE;
	v->a[89116] = actions(3712);
	v->a[89117] = 1;
	v->a[89118] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89119] = actions(3716);
	small_parse_table_4456(v);
}

void	small_parse_table_4456(t_small_parse_table_array *v)
{
	v->a[89120] = 1;
	v->a[89121] = sym_string_content;
	v->a[89122] = actions(3718);
	v->a[89123] = 1;
	v->a[89124] = anon_sym_DOLLAR_LBRACE;
	v->a[89125] = actions(3720);
	v->a[89126] = 1;
	v->a[89127] = anon_sym_DOLLAR_LPAREN;
	v->a[89128] = actions(3722);
	v->a[89129] = 1;
	v->a[89130] = anon_sym_BQUOTE;
	v->a[89131] = actions(3850);
	v->a[89132] = 1;
	v->a[89133] = anon_sym_DOLLAR;
	v->a[89134] = state(1738);
	v->a[89135] = 1;
	v->a[89136] = aux_sym_string_repeat1;
	v->a[89137] = state(1869);
	v->a[89138] = 4;
	v->a[89139] = sym_arithmetic_expansion;
	small_parse_table_4457(v);
}

void	small_parse_table_4457(t_small_parse_table_array *v)
{
	v->a[89140] = sym_simple_expansion;
	v->a[89141] = sym_expansion;
	v->a[89142] = sym_command_substitution;
	v->a[89143] = 10;
	v->a[89144] = actions(3);
	v->a[89145] = 1;
	v->a[89146] = sym_comment;
	v->a[89147] = actions(3468);
	v->a[89148] = 1;
	v->a[89149] = anon_sym_DQUOTE;
	v->a[89150] = actions(3712);
	v->a[89151] = 1;
	v->a[89152] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89153] = actions(3716);
	v->a[89154] = 1;
	v->a[89155] = sym_string_content;
	v->a[89156] = actions(3718);
	v->a[89157] = 1;
	v->a[89158] = anon_sym_DOLLAR_LBRACE;
	v->a[89159] = actions(3720);
	small_parse_table_4458(v);
}

void	small_parse_table_4458(t_small_parse_table_array *v)
{
	v->a[89160] = 1;
	v->a[89161] = anon_sym_DOLLAR_LPAREN;
	v->a[89162] = actions(3722);
	v->a[89163] = 1;
	v->a[89164] = anon_sym_BQUOTE;
	v->a[89165] = actions(3852);
	v->a[89166] = 1;
	v->a[89167] = anon_sym_DOLLAR;
	v->a[89168] = state(1738);
	v->a[89169] = 1;
	v->a[89170] = aux_sym_string_repeat1;
	v->a[89171] = state(1869);
	v->a[89172] = 4;
	v->a[89173] = sym_arithmetic_expansion;
	v->a[89174] = sym_simple_expansion;
	v->a[89175] = sym_expansion;
	v->a[89176] = sym_command_substitution;
	v->a[89177] = 4;
	v->a[89178] = actions(3);
	v->a[89179] = 1;
	small_parse_table_4459(v);
}

void	small_parse_table_4459(t_small_parse_table_array *v)
{
	v->a[89180] = sym_comment;
	v->a[89181] = actions(3388);
	v->a[89182] = 1;
	v->a[89183] = sym_variable_name;
	v->a[89184] = actions(3386);
	v->a[89185] = 2;
	v->a[89186] = aux_sym__simple_variable_name_token1;
	v->a[89187] = aux_sym__multiline_variable_name_token1;
	v->a[89188] = actions(3384);
	v->a[89189] = 9;
	v->a[89190] = anon_sym_BANG;
	v->a[89191] = anon_sym_DASH;
	v->a[89192] = anon_sym_STAR;
	v->a[89193] = anon_sym_QMARK;
	v->a[89194] = anon_sym_DOLLAR;
	v->a[89195] = anon_sym_POUND;
	v->a[89196] = anon_sym_AT;
	v->a[89197] = anon_sym_0;
	v->a[89198] = anon_sym__;
	v->a[89199] = 10;
	small_parse_table_4460(v);
}

/* EOF small_parse_table_891.c */
