/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_901.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4505(t_small_parse_table_array *v)
{
	v->a[90100] = actions(3938);
	v->a[90101] = 1;
	v->a[90102] = anon_sym_DOLLAR;
	v->a[90103] = actions(3940);
	v->a[90104] = 1;
	v->a[90105] = anon_sym_DQUOTE;
	v->a[90106] = state(1814);
	v->a[90107] = 1;
	v->a[90108] = aux_sym_string_repeat1;
	v->a[90109] = state(1869);
	v->a[90110] = 4;
	v->a[90111] = sym_arithmetic_expansion;
	v->a[90112] = sym_simple_expansion;
	v->a[90113] = sym_expansion;
	v->a[90114] = sym_command_substitution;
	v->a[90115] = 3;
	v->a[90116] = actions(3);
	v->a[90117] = 1;
	v->a[90118] = sym_comment;
	v->a[90119] = actions(3682);
	small_parse_table_4506(v);
}

void	small_parse_table_4506(t_small_parse_table_array *v)
{
	v->a[90120] = 1;
	v->a[90121] = sym_extglob_pattern;
	v->a[90122] = actions(3678);
	v->a[90123] = 11;
	v->a[90124] = anon_sym_LPAREN;
	v->a[90125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90126] = anon_sym_DOLLAR;
	v->a[90127] = anon_sym_DQUOTE;
	v->a[90128] = sym_raw_string;
	v->a[90129] = aux_sym_number_token1;
	v->a[90130] = aux_sym_number_token2;
	v->a[90131] = anon_sym_DOLLAR_LBRACE;
	v->a[90132] = anon_sym_DOLLAR_LPAREN;
	v->a[90133] = anon_sym_BQUOTE;
	v->a[90134] = sym_word;
	v->a[90135] = 10;
	v->a[90136] = actions(3);
	v->a[90137] = 1;
	v->a[90138] = sym_comment;
	v->a[90139] = actions(3712);
	small_parse_table_4507(v);
}

void	small_parse_table_4507(t_small_parse_table_array *v)
{
	v->a[90140] = 1;
	v->a[90141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90142] = actions(3716);
	v->a[90143] = 1;
	v->a[90144] = sym_string_content;
	v->a[90145] = actions(3718);
	v->a[90146] = 1;
	v->a[90147] = anon_sym_DOLLAR_LBRACE;
	v->a[90148] = actions(3720);
	v->a[90149] = 1;
	v->a[90150] = anon_sym_DOLLAR_LPAREN;
	v->a[90151] = actions(3722);
	v->a[90152] = 1;
	v->a[90153] = anon_sym_BQUOTE;
	v->a[90154] = actions(3942);
	v->a[90155] = 1;
	v->a[90156] = anon_sym_DOLLAR;
	v->a[90157] = actions(3944);
	v->a[90158] = 1;
	v->a[90159] = anon_sym_DQUOTE;
	small_parse_table_4508(v);
}

void	small_parse_table_4508(t_small_parse_table_array *v)
{
	v->a[90160] = state(1791);
	v->a[90161] = 1;
	v->a[90162] = aux_sym_string_repeat1;
	v->a[90163] = state(1869);
	v->a[90164] = 4;
	v->a[90165] = sym_arithmetic_expansion;
	v->a[90166] = sym_simple_expansion;
	v->a[90167] = sym_expansion;
	v->a[90168] = sym_command_substitution;
	v->a[90169] = 4;
	v->a[90170] = actions(3);
	v->a[90171] = 1;
	v->a[90172] = sym_comment;
	v->a[90173] = actions(421);
	v->a[90174] = 1;
	v->a[90175] = sym_variable_name;
	v->a[90176] = actions(419);
	v->a[90177] = 2;
	v->a[90178] = aux_sym__simple_variable_name_token1;
	v->a[90179] = aux_sym__multiline_variable_name_token1;
	small_parse_table_4509(v);
}

void	small_parse_table_4509(t_small_parse_table_array *v)
{
	v->a[90180] = actions(417);
	v->a[90181] = 9;
	v->a[90182] = anon_sym_BANG;
	v->a[90183] = anon_sym_DASH;
	v->a[90184] = anon_sym_STAR;
	v->a[90185] = anon_sym_QMARK;
	v->a[90186] = anon_sym_DOLLAR;
	v->a[90187] = anon_sym_POUND;
	v->a[90188] = anon_sym_AT;
	v->a[90189] = anon_sym_0;
	v->a[90190] = anon_sym__;
	v->a[90191] = 6;
	v->a[90192] = actions(1404);
	v->a[90193] = 1;
	v->a[90194] = sym_comment;
	v->a[90195] = actions(3952);
	v->a[90196] = 1;
	v->a[90197] = anon_sym_LT_LT;
	v->a[90198] = actions(3954);
	v->a[90199] = 1;
	small_parse_table_4510(v);
}

/* EOF small_parse_table_901.c */
