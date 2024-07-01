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
	v->a[79100] = sym_command_substitution;
	v->a[79101] = 10;
	v->a[79102] = actions(3);
	v->a[79103] = 1;
	v->a[79104] = sym_comment;
	v->a[79105] = actions(699);
	v->a[79106] = 1;
	v->a[79107] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79108] = actions(701);
	v->a[79109] = 1;
	v->a[79110] = anon_sym_DOLLAR;
	v->a[79111] = actions(703);
	v->a[79112] = 1;
	v->a[79113] = anon_sym_DQUOTE;
	v->a[79114] = actions(705);
	v->a[79115] = 1;
	v->a[79116] = anon_sym_DOLLAR_LBRACE;
	v->a[79117] = actions(707);
	v->a[79118] = 1;
	v->a[79119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3956(v);
}

void	small_parse_table_3956(t_small_parse_table_array *v)
{
	v->a[79120] = actions(709);
	v->a[79121] = 1;
	v->a[79122] = anon_sym_BQUOTE;
	v->a[79123] = state(569);
	v->a[79124] = 2;
	v->a[79125] = sym_concatenation;
	v->a[79126] = aux_sym_for_statement_repeat1;
	v->a[79127] = actions(1354);
	v->a[79128] = 3;
	v->a[79129] = sym_raw_string;
	v->a[79130] = sym_number;
	v->a[79131] = sym_word;
	v->a[79132] = state(884);
	v->a[79133] = 5;
	v->a[79134] = sym_arithmetic_expansion;
	v->a[79135] = sym_string;
	v->a[79136] = sym_simple_expansion;
	v->a[79137] = sym_expansion;
	v->a[79138] = sym_command_substitution;
	v->a[79139] = 10;
	small_parse_table_3957(v);
}

void	small_parse_table_3957(t_small_parse_table_array *v)
{
	v->a[79140] = actions(3);
	v->a[79141] = 1;
	v->a[79142] = sym_comment;
	v->a[79143] = actions(2715);
	v->a[79144] = 1;
	v->a[79145] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79146] = actions(2717);
	v->a[79147] = 1;
	v->a[79148] = anon_sym_DOLLAR;
	v->a[79149] = actions(2719);
	v->a[79150] = 1;
	v->a[79151] = anon_sym_DQUOTE;
	v->a[79152] = actions(2721);
	v->a[79153] = 1;
	v->a[79154] = anon_sym_DOLLAR_LBRACE;
	v->a[79155] = actions(2723);
	v->a[79156] = 1;
	v->a[79157] = anon_sym_DOLLAR_LPAREN;
	v->a[79158] = actions(2725);
	v->a[79159] = 1;
	small_parse_table_3958(v);
}

void	small_parse_table_3958(t_small_parse_table_array *v)
{
	v->a[79160] = anon_sym_BQUOTE;
	v->a[79161] = state(519);
	v->a[79162] = 2;
	v->a[79163] = sym_concatenation;
	v->a[79164] = aux_sym_for_statement_repeat1;
	v->a[79165] = actions(3071);
	v->a[79166] = 3;
	v->a[79167] = sym_raw_string;
	v->a[79168] = sym_number;
	v->a[79169] = sym_word;
	v->a[79170] = state(828);
	v->a[79171] = 5;
	v->a[79172] = sym_arithmetic_expansion;
	v->a[79173] = sym_string;
	v->a[79174] = sym_simple_expansion;
	v->a[79175] = sym_expansion;
	v->a[79176] = sym_command_substitution;
	v->a[79177] = 10;
	v->a[79178] = actions(3);
	v->a[79179] = 1;
	small_parse_table_3959(v);
}

void	small_parse_table_3959(t_small_parse_table_array *v)
{
	v->a[79180] = sym_comment;
	v->a[79181] = actions(1504);
	v->a[79182] = 1;
	v->a[79183] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79184] = actions(1506);
	v->a[79185] = 1;
	v->a[79186] = anon_sym_DOLLAR;
	v->a[79187] = actions(1508);
	v->a[79188] = 1;
	v->a[79189] = anon_sym_DQUOTE;
	v->a[79190] = actions(1510);
	v->a[79191] = 1;
	v->a[79192] = anon_sym_DOLLAR_LBRACE;
	v->a[79193] = actions(1512);
	v->a[79194] = 1;
	v->a[79195] = anon_sym_DOLLAR_LPAREN;
	v->a[79196] = actions(1514);
	v->a[79197] = 1;
	v->a[79198] = anon_sym_BQUOTE;
	v->a[79199] = state(658);
	small_parse_table_3960(v);
}

/* EOF small_parse_table_791.c */
