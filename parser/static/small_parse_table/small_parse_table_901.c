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
	v->a[90100] = 1;
	v->a[90101] = anon_sym_DOLLAR;
	v->a[90102] = actions(3594);
	v->a[90103] = 1;
	v->a[90104] = anon_sym_DQUOTE;
	v->a[90105] = state(1855);
	v->a[90106] = 1;
	v->a[90107] = aux_sym_string_repeat1;
	v->a[90108] = state(1963);
	v->a[90109] = 4;
	v->a[90110] = sym_arithmetic_expansion;
	v->a[90111] = sym_simple_expansion;
	v->a[90112] = sym_expansion;
	v->a[90113] = sym_command_substitution;
	v->a[90114] = 10;
	v->a[90115] = actions(3);
	v->a[90116] = 1;
	v->a[90117] = sym_comment;
	v->a[90118] = actions(3414);
	v->a[90119] = 1;
	small_parse_table_4506(v);
}

void	small_parse_table_4506(t_small_parse_table_array *v)
{
	v->a[90120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90121] = actions(3420);
	v->a[90122] = 1;
	v->a[90123] = sym_string_content;
	v->a[90124] = actions(3422);
	v->a[90125] = 1;
	v->a[90126] = anon_sym_DOLLAR_LBRACE;
	v->a[90127] = actions(3424);
	v->a[90128] = 1;
	v->a[90129] = anon_sym_DOLLAR_LPAREN;
	v->a[90130] = actions(3426);
	v->a[90131] = 1;
	v->a[90132] = anon_sym_BQUOTE;
	v->a[90133] = actions(3596);
	v->a[90134] = 1;
	v->a[90135] = anon_sym_DOLLAR;
	v->a[90136] = actions(3598);
	v->a[90137] = 1;
	v->a[90138] = anon_sym_DQUOTE;
	v->a[90139] = state(1863);
	small_parse_table_4507(v);
}

void	small_parse_table_4507(t_small_parse_table_array *v)
{
	v->a[90140] = 1;
	v->a[90141] = aux_sym_string_repeat1;
	v->a[90142] = state(1963);
	v->a[90143] = 4;
	v->a[90144] = sym_arithmetic_expansion;
	v->a[90145] = sym_simple_expansion;
	v->a[90146] = sym_expansion;
	v->a[90147] = sym_command_substitution;
	v->a[90148] = 4;
	v->a[90149] = actions(3);
	v->a[90150] = 1;
	v->a[90151] = sym_comment;
	v->a[90152] = actions(429);
	v->a[90153] = 1;
	v->a[90154] = sym_variable_name;
	v->a[90155] = actions(427);
	v->a[90156] = 2;
	v->a[90157] = aux_sym__simple_variable_name_token1;
	v->a[90158] = aux_sym__multiline_variable_name_token1;
	v->a[90159] = actions(425);
	small_parse_table_4508(v);
}

void	small_parse_table_4508(t_small_parse_table_array *v)
{
	v->a[90160] = 9;
	v->a[90161] = anon_sym_BANG;
	v->a[90162] = anon_sym_DASH;
	v->a[90163] = anon_sym_STAR;
	v->a[90164] = anon_sym_QMARK;
	v->a[90165] = anon_sym_DOLLAR;
	v->a[90166] = anon_sym_POUND;
	v->a[90167] = anon_sym_AT;
	v->a[90168] = anon_sym_0;
	v->a[90169] = anon_sym__;
	v->a[90170] = 10;
	v->a[90171] = actions(3);
	v->a[90172] = 1;
	v->a[90173] = sym_comment;
	v->a[90174] = actions(3414);
	v->a[90175] = 1;
	v->a[90176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90177] = actions(3420);
	v->a[90178] = 1;
	v->a[90179] = sym_string_content;
	small_parse_table_4509(v);
}

void	small_parse_table_4509(t_small_parse_table_array *v)
{
	v->a[90180] = actions(3422);
	v->a[90181] = 1;
	v->a[90182] = anon_sym_DOLLAR_LBRACE;
	v->a[90183] = actions(3424);
	v->a[90184] = 1;
	v->a[90185] = anon_sym_DOLLAR_LPAREN;
	v->a[90186] = actions(3426);
	v->a[90187] = 1;
	v->a[90188] = anon_sym_BQUOTE;
	v->a[90189] = actions(3600);
	v->a[90190] = 1;
	v->a[90191] = anon_sym_DOLLAR;
	v->a[90192] = actions(3602);
	v->a[90193] = 1;
	v->a[90194] = anon_sym_DQUOTE;
	v->a[90195] = state(1862);
	v->a[90196] = 1;
	v->a[90197] = aux_sym_string_repeat1;
	v->a[90198] = state(1963);
	v->a[90199] = 4;
	small_parse_table_4510(v);
}

/* EOF small_parse_table_901.c */
