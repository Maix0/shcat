/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_961.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4805(t_small_parse_table_array *v)
{
	v->a[96100] = sym_variable_name;
	v->a[96101] = actions(1135);
	v->a[96102] = 2;
	v->a[96103] = aux_sym__simple_variable_name_token1;
	v->a[96104] = aux_sym__multiline_variable_name_token1;
	v->a[96105] = actions(1133);
	v->a[96106] = 9;
	v->a[96107] = anon_sym_BANG;
	v->a[96108] = anon_sym_DASH;
	v->a[96109] = anon_sym_STAR;
	v->a[96110] = anon_sym_QMARK;
	v->a[96111] = anon_sym_DOLLAR;
	v->a[96112] = anon_sym_POUND;
	v->a[96113] = anon_sym_AT;
	v->a[96114] = anon_sym_0;
	v->a[96115] = anon_sym__;
	v->a[96116] = 10;
	v->a[96117] = actions(3);
	v->a[96118] = 1;
	v->a[96119] = sym_comment;
	small_parse_table_4806(v);
}

void	small_parse_table_4806(t_small_parse_table_array *v)
{
	v->a[96120] = actions(3856);
	v->a[96121] = 1;
	v->a[96122] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96123] = actions(3862);
	v->a[96124] = 1;
	v->a[96125] = sym_string_content;
	v->a[96126] = actions(3864);
	v->a[96127] = 1;
	v->a[96128] = anon_sym_DOLLAR_LBRACE;
	v->a[96129] = actions(3866);
	v->a[96130] = 1;
	v->a[96131] = anon_sym_DOLLAR_LPAREN;
	v->a[96132] = actions(3868);
	v->a[96133] = 1;
	v->a[96134] = anon_sym_BQUOTE;
	v->a[96135] = actions(4094);
	v->a[96136] = 1;
	v->a[96137] = anon_sym_DOLLAR;
	v->a[96138] = actions(4096);
	v->a[96139] = 1;
	small_parse_table_4807(v);
}

void	small_parse_table_4807(t_small_parse_table_array *v)
{
	v->a[96140] = anon_sym_DQUOTE;
	v->a[96141] = state(1954);
	v->a[96142] = 1;
	v->a[96143] = aux_sym_string_repeat1;
	v->a[96144] = state(2107);
	v->a[96145] = 4;
	v->a[96146] = sym_arithmetic_expansion;
	v->a[96147] = sym_simple_expansion;
	v->a[96148] = sym_expansion;
	v->a[96149] = sym_command_substitution;
	v->a[96150] = 4;
	v->a[96151] = actions(3);
	v->a[96152] = 1;
	v->a[96153] = sym_comment;
	v->a[96154] = actions(411);
	v->a[96155] = 1;
	v->a[96156] = sym_variable_name;
	v->a[96157] = actions(409);
	v->a[96158] = 2;
	v->a[96159] = aux_sym__simple_variable_name_token1;
	small_parse_table_4808(v);
}

void	small_parse_table_4808(t_small_parse_table_array *v)
{
	v->a[96160] = aux_sym__multiline_variable_name_token1;
	v->a[96161] = actions(407);
	v->a[96162] = 9;
	v->a[96163] = anon_sym_BANG;
	v->a[96164] = anon_sym_DASH;
	v->a[96165] = anon_sym_STAR;
	v->a[96166] = anon_sym_QMARK;
	v->a[96167] = anon_sym_DOLLAR;
	v->a[96168] = anon_sym_POUND;
	v->a[96169] = anon_sym_AT;
	v->a[96170] = anon_sym_0;
	v->a[96171] = anon_sym__;
	v->a[96172] = 4;
	v->a[96173] = actions(3);
	v->a[96174] = 1;
	v->a[96175] = sym_comment;
	v->a[96176] = actions(4100);
	v->a[96177] = 1;
	v->a[96178] = anon_sym_esac;
	v->a[96179] = actions(4102);
	small_parse_table_4809(v);
}

void	small_parse_table_4809(t_small_parse_table_array *v)
{
	v->a[96180] = 1;
	v->a[96181] = sym_extglob_pattern;
	v->a[96182] = actions(4098);
	v->a[96183] = 10;
	v->a[96184] = anon_sym_LPAREN;
	v->a[96185] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96186] = anon_sym_DOLLAR;
	v->a[96187] = anon_sym_DQUOTE;
	v->a[96188] = sym_raw_string;
	v->a[96189] = sym_number;
	v->a[96190] = anon_sym_DOLLAR_LBRACE;
	v->a[96191] = anon_sym_DOLLAR_LPAREN;
	v->a[96192] = anon_sym_BQUOTE;
	v->a[96193] = sym_word;
	v->a[96194] = 10;
	v->a[96195] = actions(3);
	v->a[96196] = 1;
	v->a[96197] = sym_comment;
	v->a[96198] = actions(3856);
	v->a[96199] = 1;
	small_parse_table_4810(v);
}

/* EOF small_parse_table_961.c */
