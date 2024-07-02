/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_791.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3955(t_small_parse_table_array *v)
{
	v->a[79100] = 1;
	v->a[79101] = aux_sym_string_repeat1;
	v->a[79102] = state(1748);
	v->a[79103] = 4;
	v->a[79104] = sym_arithmetic_expansion;
	v->a[79105] = sym_simple_expansion;
	v->a[79106] = sym_expansion;
	v->a[79107] = sym_command_substitution;
	v->a[79108] = 4;
	v->a[79109] = actions(3);
	v->a[79110] = 1;
	v->a[79111] = sym_comment;
	v->a[79112] = actions(1264);
	v->a[79113] = 1;
	v->a[79114] = sym_variable_name;
	v->a[79115] = actions(1262);
	v->a[79116] = 2;
	v->a[79117] = aux_sym__simple_variable_name_token1;
	v->a[79118] = aux_sym__multiline_variable_name_token1;
	v->a[79119] = actions(1260);
	small_parse_table_3956(v);
}

void	small_parse_table_3956(t_small_parse_table_array *v)
{
	v->a[79120] = 9;
	v->a[79121] = anon_sym_BANG;
	v->a[79122] = anon_sym_DASH;
	v->a[79123] = anon_sym_STAR;
	v->a[79124] = anon_sym_QMARK;
	v->a[79125] = anon_sym_DOLLAR;
	v->a[79126] = anon_sym_POUND;
	v->a[79127] = anon_sym_AT;
	v->a[79128] = anon_sym_0;
	v->a[79129] = anon_sym__;
	v->a[79130] = 10;
	v->a[79131] = actions(3);
	v->a[79132] = 1;
	v->a[79133] = sym_comment;
	v->a[79134] = actions(3104);
	v->a[79135] = 1;
	v->a[79136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79137] = actions(3110);
	v->a[79138] = 1;
	v->a[79139] = sym_string_content;
	small_parse_table_3957(v);
}

void	small_parse_table_3957(t_small_parse_table_array *v)
{
	v->a[79140] = actions(3112);
	v->a[79141] = 1;
	v->a[79142] = anon_sym_DOLLAR_LBRACE;
	v->a[79143] = actions(3114);
	v->a[79144] = 1;
	v->a[79145] = anon_sym_DOLLAR_LPAREN;
	v->a[79146] = actions(3116);
	v->a[79147] = 1;
	v->a[79148] = anon_sym_BQUOTE;
	v->a[79149] = actions(3416);
	v->a[79150] = 1;
	v->a[79151] = anon_sym_DOLLAR;
	v->a[79152] = actions(3418);
	v->a[79153] = 1;
	v->a[79154] = anon_sym_DQUOTE;
	v->a[79155] = state(1666);
	v->a[79156] = 1;
	v->a[79157] = aux_sym_string_repeat1;
	v->a[79158] = state(1748);
	v->a[79159] = 4;
	small_parse_table_3958(v);
}

void	small_parse_table_3958(t_small_parse_table_array *v)
{
	v->a[79160] = sym_arithmetic_expansion;
	v->a[79161] = sym_simple_expansion;
	v->a[79162] = sym_expansion;
	v->a[79163] = sym_command_substitution;
	v->a[79164] = 10;
	v->a[79165] = actions(3);
	v->a[79166] = 1;
	v->a[79167] = sym_comment;
	v->a[79168] = actions(3104);
	v->a[79169] = 1;
	v->a[79170] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79171] = actions(3110);
	v->a[79172] = 1;
	v->a[79173] = sym_string_content;
	v->a[79174] = actions(3112);
	v->a[79175] = 1;
	v->a[79176] = anon_sym_DOLLAR_LBRACE;
	v->a[79177] = actions(3114);
	v->a[79178] = 1;
	v->a[79179] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3959(v);
}

void	small_parse_table_3959(t_small_parse_table_array *v)
{
	v->a[79180] = actions(3116);
	v->a[79181] = 1;
	v->a[79182] = anon_sym_BQUOTE;
	v->a[79183] = actions(3420);
	v->a[79184] = 1;
	v->a[79185] = anon_sym_DOLLAR;
	v->a[79186] = actions(3422);
	v->a[79187] = 1;
	v->a[79188] = anon_sym_DQUOTE;
	v->a[79189] = state(1661);
	v->a[79190] = 1;
	v->a[79191] = aux_sym_string_repeat1;
	v->a[79192] = state(1748);
	v->a[79193] = 4;
	v->a[79194] = sym_arithmetic_expansion;
	v->a[79195] = sym_simple_expansion;
	v->a[79196] = sym_expansion;
	v->a[79197] = sym_command_substitution;
	v->a[79198] = 3;
	v->a[79199] = actions(3);
	small_parse_table_3960(v);
}

/* EOF small_parse_table_791.c */
