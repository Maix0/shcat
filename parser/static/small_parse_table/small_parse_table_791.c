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
	v->a[79100] = sym_raw_string;
	v->a[79101] = sym_number;
	v->a[79102] = sym_word;
	v->a[79103] = state(842);
	v->a[79104] = 5;
	v->a[79105] = sym_arithmetic_expansion;
	v->a[79106] = sym_string;
	v->a[79107] = sym_simple_expansion;
	v->a[79108] = sym_expansion;
	v->a[79109] = sym_command_substitution;
	v->a[79110] = 10;
	v->a[79111] = actions(3);
	v->a[79112] = 1;
	v->a[79113] = sym_comment;
	v->a[79114] = actions(704);
	v->a[79115] = 1;
	v->a[79116] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79117] = actions(708);
	v->a[79118] = 1;
	v->a[79119] = anon_sym_DQUOTE;
	small_parse_table_3956(v);
}

void	small_parse_table_3956(t_small_parse_table_array *v)
{
	v->a[79120] = actions(710);
	v->a[79121] = 1;
	v->a[79122] = anon_sym_DOLLAR_LBRACE;
	v->a[79123] = actions(712);
	v->a[79124] = 1;
	v->a[79125] = anon_sym_DOLLAR_LPAREN;
	v->a[79126] = actions(714);
	v->a[79127] = 1;
	v->a[79128] = anon_sym_BQUOTE;
	v->a[79129] = actions(2899);
	v->a[79130] = 1;
	v->a[79131] = anon_sym_DOLLAR;
	v->a[79132] = actions(2901);
	v->a[79133] = 1;
	v->a[79134] = sym__bare_dollar;
	v->a[79135] = actions(2897);
	v->a[79136] = 5;
	v->a[79137] = aux_sym_concatenation_token1;
	v->a[79138] = sym_raw_string;
	v->a[79139] = sym_number;
	small_parse_table_3957(v);
}

void	small_parse_table_3957(t_small_parse_table_array *v)
{
	v->a[79140] = sym__comment_word;
	v->a[79141] = sym_word;
	v->a[79142] = state(662);
	v->a[79143] = 5;
	v->a[79144] = sym_arithmetic_expansion;
	v->a[79145] = sym_string;
	v->a[79146] = sym_simple_expansion;
	v->a[79147] = sym_expansion;
	v->a[79148] = sym_command_substitution;
	v->a[79149] = 10;
	v->a[79150] = actions(3);
	v->a[79151] = 1;
	v->a[79152] = sym_comment;
	v->a[79153] = actions(2773);
	v->a[79154] = 1;
	v->a[79155] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79156] = actions(2777);
	v->a[79157] = 1;
	v->a[79158] = anon_sym_DQUOTE;
	v->a[79159] = actions(2779);
	small_parse_table_3958(v);
}

void	small_parse_table_3958(t_small_parse_table_array *v)
{
	v->a[79160] = 1;
	v->a[79161] = anon_sym_DOLLAR_LBRACE;
	v->a[79162] = actions(2781);
	v->a[79163] = 1;
	v->a[79164] = anon_sym_DOLLAR_LPAREN;
	v->a[79165] = actions(2783);
	v->a[79166] = 1;
	v->a[79167] = anon_sym_BQUOTE;
	v->a[79168] = actions(2785);
	v->a[79169] = 1;
	v->a[79170] = sym__bare_dollar;
	v->a[79171] = actions(2903);
	v->a[79172] = 1;
	v->a[79173] = anon_sym_DOLLAR;
	v->a[79174] = actions(2771);
	v->a[79175] = 5;
	v->a[79176] = aux_sym_concatenation_token1;
	v->a[79177] = sym_raw_string;
	v->a[79178] = sym_number;
	v->a[79179] = sym__comment_word;
	small_parse_table_3959(v);
}

void	small_parse_table_3959(t_small_parse_table_array *v)
{
	v->a[79180] = sym_word;
	v->a[79181] = state(1183);
	v->a[79182] = 5;
	v->a[79183] = sym_arithmetic_expansion;
	v->a[79184] = sym_string;
	v->a[79185] = sym_simple_expansion;
	v->a[79186] = sym_expansion;
	v->a[79187] = sym_command_substitution;
	v->a[79188] = 10;
	v->a[79189] = actions(3);
	v->a[79190] = 1;
	v->a[79191] = sym_comment;
	v->a[79192] = actions(2809);
	v->a[79193] = 1;
	v->a[79194] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79195] = actions(2813);
	v->a[79196] = 1;
	v->a[79197] = anon_sym_DQUOTE;
	v->a[79198] = actions(2815);
	v->a[79199] = 1;
	small_parse_table_3960(v);
}

/* EOF small_parse_table_791.c */
