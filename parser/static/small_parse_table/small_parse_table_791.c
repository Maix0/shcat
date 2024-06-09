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
	v->a[79101] = anon_sym_DQUOTE;
	v->a[79102] = actions(71);
	v->a[79103] = 1;
	v->a[79104] = aux_sym_number_token1;
	v->a[79105] = actions(73);
	v->a[79106] = 1;
	v->a[79107] = aux_sym_number_token2;
	v->a[79108] = actions(75);
	v->a[79109] = 1;
	v->a[79110] = anon_sym_DOLLAR_LBRACE;
	v->a[79111] = actions(77);
	v->a[79112] = 1;
	v->a[79113] = anon_sym_DOLLAR_LPAREN;
	v->a[79114] = actions(79);
	v->a[79115] = 1;
	v->a[79116] = anon_sym_BQUOTE;
	v->a[79117] = actions(3160);
	v->a[79118] = 1;
	v->a[79119] = sym__bare_dollar;
	small_parse_table_3956(v);
}

void	small_parse_table_3956(t_small_parse_table_array *v)
{
	v->a[79120] = actions(3256);
	v->a[79121] = 1;
	v->a[79122] = anon_sym_DOLLAR;
	v->a[79123] = actions(3158);
	v->a[79124] = 3;
	v->a[79125] = sym_raw_string;
	v->a[79126] = sym__comment_word;
	v->a[79127] = sym_word;
	v->a[79128] = state(354);
	v->a[79129] = 6;
	v->a[79130] = sym_arithmetic_expansion;
	v->a[79131] = sym_string;
	v->a[79132] = sym_number;
	v->a[79133] = sym_simple_expansion;
	v->a[79134] = sym_expansion;
	v->a[79135] = sym_command_substitution;
	v->a[79136] = 12;
	v->a[79137] = actions(3);
	v->a[79138] = 1;
	v->a[79139] = sym_comment;
	small_parse_table_3957(v);
}

void	small_parse_table_3957(t_small_parse_table_array *v)
{
	v->a[79140] = actions(779);
	v->a[79141] = 1;
	v->a[79142] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79143] = actions(781);
	v->a[79144] = 1;
	v->a[79145] = anon_sym_DOLLAR;
	v->a[79146] = actions(783);
	v->a[79147] = 1;
	v->a[79148] = anon_sym_DQUOTE;
	v->a[79149] = actions(785);
	v->a[79150] = 1;
	v->a[79151] = aux_sym_number_token1;
	v->a[79152] = actions(787);
	v->a[79153] = 1;
	v->a[79154] = aux_sym_number_token2;
	v->a[79155] = actions(789);
	v->a[79156] = 1;
	v->a[79157] = anon_sym_DOLLAR_LBRACE;
	v->a[79158] = actions(791);
	v->a[79159] = 1;
	small_parse_table_3958(v);
}

void	small_parse_table_3958(t_small_parse_table_array *v)
{
	v->a[79160] = anon_sym_DOLLAR_LPAREN;
	v->a[79161] = actions(793);
	v->a[79162] = 1;
	v->a[79163] = anon_sym_BQUOTE;
	v->a[79164] = actions(777);
	v->a[79165] = 2;
	v->a[79166] = sym_raw_string;
	v->a[79167] = sym_word;
	v->a[79168] = state(218);
	v->a[79169] = 2;
	v->a[79170] = sym_concatenation;
	v->a[79171] = aux_sym_for_statement_repeat1;
	v->a[79172] = state(502);
	v->a[79173] = 6;
	v->a[79174] = sym_arithmetic_expansion;
	v->a[79175] = sym_string;
	v->a[79176] = sym_number;
	v->a[79177] = sym_simple_expansion;
	v->a[79178] = sym_expansion;
	v->a[79179] = sym_command_substitution;
	small_parse_table_3959(v);
}

void	small_parse_table_3959(t_small_parse_table_array *v)
{
	v->a[79180] = 9;
	v->a[79181] = actions(1062);
	v->a[79182] = 1;
	v->a[79183] = anon_sym_LT_LT;
	v->a[79184] = actions(1404);
	v->a[79185] = 1;
	v->a[79186] = sym_comment;
	v->a[79187] = actions(2352);
	v->a[79188] = 1;
	v->a[79189] = sym_file_descriptor;
	v->a[79190] = actions(3107);
	v->a[79191] = 1;
	v->a[79192] = anon_sym_LT_LT_DASH;
	v->a[79193] = actions(3258);
	v->a[79194] = 2;
	v->a[79195] = anon_sym_AMP_AMP;
	v->a[79196] = anon_sym_PIPE_PIPE;
	v->a[79197] = actions(3262);
	v->a[79198] = 2;
	v->a[79199] = anon_sym_LT_AMP_DASH;
	small_parse_table_3960(v);
}

/* EOF small_parse_table_791.c */
