/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1351.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6755(t_small_parse_table_array *v)
{
	v->a[135100] = actions(7768);
	v->a[135101] = 1;
	v->a[135102] = anon_sym_DOLLAR_LBRACE;
	v->a[135103] = actions(7770);
	v->a[135104] = 1;
	v->a[135105] = anon_sym_DOLLAR_LPAREN;
	v->a[135106] = actions(7772);
	v->a[135107] = 1;
	v->a[135108] = anon_sym_BQUOTE;
	v->a[135109] = actions(7774);
	v->a[135110] = 1;
	v->a[135111] = anon_sym_DOLLAR_BQUOTE;
	v->a[135112] = actions(7824);
	v->a[135113] = 1;
	v->a[135114] = anon_sym_DOLLAR;
	v->a[135115] = state(3061);
	v->a[135116] = 1;
	v->a[135117] = aux_sym_string_repeat1;
	v->a[135118] = state(3218);
	v->a[135119] = 4;
	small_parse_table_6756(v);
}

void	small_parse_table_6756(t_small_parse_table_array *v)
{
	v->a[135120] = sym_arithmetic_expansion;
	v->a[135121] = sym_simple_expansion;
	v->a[135122] = sym_expansion;
	v->a[135123] = sym_command_substitution;
	v->a[135124] = 7;
	v->a[135125] = actions(3);
	v->a[135126] = 1;
	v->a[135127] = sym_comment;
	v->a[135128] = actions(7754);
	v->a[135129] = 1;
	v->a[135130] = aux_sym__simple_variable_name_token1;
	v->a[135131] = actions(7758);
	v->a[135132] = 1;
	v->a[135133] = sym_variable_name;
	v->a[135134] = actions(7826);
	v->a[135135] = 1;
	v->a[135136] = anon_sym_RBRACE3;
	v->a[135137] = state(3695);
	v->a[135138] = 1;
	v->a[135139] = sym__expansion_body;
	small_parse_table_6757(v);
}

void	small_parse_table_6757(t_small_parse_table_array *v)
{
	v->a[135140] = actions(7756);
	v->a[135141] = 2;
	v->a[135142] = anon_sym_0;
	v->a[135143] = anon_sym__;
	v->a[135144] = actions(7750);
	v->a[135145] = 7;
	v->a[135146] = anon_sym_BANG;
	v->a[135147] = anon_sym_DASH;
	v->a[135148] = anon_sym_STAR;
	v->a[135149] = anon_sym_QMARK;
	v->a[135150] = anon_sym_DOLLAR;
	v->a[135151] = anon_sym_POUND;
	v->a[135152] = anon_sym_AT;
	v->a[135153] = 7;
	v->a[135154] = actions(3);
	v->a[135155] = 1;
	v->a[135156] = sym_comment;
	v->a[135157] = actions(7754);
	v->a[135158] = 1;
	v->a[135159] = aux_sym__simple_variable_name_token1;
	small_parse_table_6758(v);
}

void	small_parse_table_6758(t_small_parse_table_array *v)
{
	v->a[135160] = actions(7758);
	v->a[135161] = 1;
	v->a[135162] = sym_variable_name;
	v->a[135163] = actions(7828);
	v->a[135164] = 1;
	v->a[135165] = anon_sym_RBRACE3;
	v->a[135166] = state(3884);
	v->a[135167] = 1;
	v->a[135168] = sym__expansion_body;
	v->a[135169] = actions(7756);
	v->a[135170] = 2;
	v->a[135171] = anon_sym_0;
	v->a[135172] = anon_sym__;
	v->a[135173] = actions(7750);
	v->a[135174] = 7;
	v->a[135175] = anon_sym_BANG;
	v->a[135176] = anon_sym_DASH;
	v->a[135177] = anon_sym_STAR;
	v->a[135178] = anon_sym_QMARK;
	v->a[135179] = anon_sym_DOLLAR;
	small_parse_table_6759(v);
}

void	small_parse_table_6759(t_small_parse_table_array *v)
{
	v->a[135180] = anon_sym_POUND;
	v->a[135181] = anon_sym_AT;
	v->a[135182] = 11;
	v->a[135183] = actions(3);
	v->a[135184] = 1;
	v->a[135185] = sym_comment;
	v->a[135186] = actions(7668);
	v->a[135187] = 1;
	v->a[135188] = anon_sym_DQUOTE;
	v->a[135189] = actions(7760);
	v->a[135190] = 1;
	v->a[135191] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135192] = actions(7766);
	v->a[135193] = 1;
	v->a[135194] = sym_string_content;
	v->a[135195] = actions(7768);
	v->a[135196] = 1;
	v->a[135197] = anon_sym_DOLLAR_LBRACE;
	v->a[135198] = actions(7770);
	v->a[135199] = 1;
	small_parse_table_6760(v);
}

/* EOF small_parse_table_1351.c */
