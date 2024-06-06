/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1381.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6905(t_small_parse_table_array *v)
{
	v->a[138100] = actions(3);
	v->a[138101] = 1;
	v->a[138102] = sym_comment;
	v->a[138103] = actions(7760);
	v->a[138104] = 1;
	v->a[138105] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138106] = actions(7766);
	v->a[138107] = 1;
	v->a[138108] = sym_string_content;
	v->a[138109] = actions(7768);
	v->a[138110] = 1;
	v->a[138111] = anon_sym_DOLLAR_LBRACE;
	v->a[138112] = actions(7770);
	v->a[138113] = 1;
	v->a[138114] = anon_sym_DOLLAR_LPAREN;
	v->a[138115] = actions(7772);
	v->a[138116] = 1;
	v->a[138117] = anon_sym_BQUOTE;
	v->a[138118] = actions(7774);
	v->a[138119] = 1;
	small_parse_table_6906(v);
}

void	small_parse_table_6906(t_small_parse_table_array *v)
{
	v->a[138120] = anon_sym_DOLLAR_BQUOTE;
	v->a[138121] = actions(8071);
	v->a[138122] = 1;
	v->a[138123] = anon_sym_DOLLAR;
	v->a[138124] = actions(8073);
	v->a[138125] = 1;
	v->a[138126] = anon_sym_DQUOTE;
	v->a[138127] = state(3056);
	v->a[138128] = 1;
	v->a[138129] = aux_sym_string_repeat1;
	v->a[138130] = state(3218);
	v->a[138131] = 4;
	v->a[138132] = sym_arithmetic_expansion;
	v->a[138133] = sym_simple_expansion;
	v->a[138134] = sym_expansion;
	v->a[138135] = sym_command_substitution;
	v->a[138136] = 7;
	v->a[138137] = actions(3);
	v->a[138138] = 1;
	v->a[138139] = sym_comment;
	small_parse_table_6907(v);
}

void	small_parse_table_6907(t_small_parse_table_array *v)
{
	v->a[138140] = actions(7754);
	v->a[138141] = 1;
	v->a[138142] = aux_sym__simple_variable_name_token1;
	v->a[138143] = actions(7758);
	v->a[138144] = 1;
	v->a[138145] = sym_variable_name;
	v->a[138146] = actions(8075);
	v->a[138147] = 1;
	v->a[138148] = anon_sym_RBRACE3;
	v->a[138149] = state(3909);
	v->a[138150] = 1;
	v->a[138151] = sym__expansion_body;
	v->a[138152] = actions(7756);
	v->a[138153] = 2;
	v->a[138154] = anon_sym_0;
	v->a[138155] = anon_sym__;
	v->a[138156] = actions(7750);
	v->a[138157] = 7;
	v->a[138158] = anon_sym_BANG;
	v->a[138159] = anon_sym_DASH;
	small_parse_table_6908(v);
}

void	small_parse_table_6908(t_small_parse_table_array *v)
{
	v->a[138160] = anon_sym_STAR;
	v->a[138161] = anon_sym_QMARK;
	v->a[138162] = anon_sym_DOLLAR;
	v->a[138163] = anon_sym_POUND;
	v->a[138164] = anon_sym_AT;
	v->a[138165] = 11;
	v->a[138166] = actions(3);
	v->a[138167] = 1;
	v->a[138168] = sym_comment;
	v->a[138169] = actions(7708);
	v->a[138170] = 1;
	v->a[138171] = anon_sym_DQUOTE;
	v->a[138172] = actions(7760);
	v->a[138173] = 1;
	v->a[138174] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138175] = actions(7766);
	v->a[138176] = 1;
	v->a[138177] = sym_string_content;
	v->a[138178] = actions(7768);
	v->a[138179] = 1;
	small_parse_table_6909(v);
}

void	small_parse_table_6909(t_small_parse_table_array *v)
{
	v->a[138180] = anon_sym_DOLLAR_LBRACE;
	v->a[138181] = actions(7770);
	v->a[138182] = 1;
	v->a[138183] = anon_sym_DOLLAR_LPAREN;
	v->a[138184] = actions(7772);
	v->a[138185] = 1;
	v->a[138186] = anon_sym_BQUOTE;
	v->a[138187] = actions(7774);
	v->a[138188] = 1;
	v->a[138189] = anon_sym_DOLLAR_BQUOTE;
	v->a[138190] = actions(8077);
	v->a[138191] = 1;
	v->a[138192] = anon_sym_DOLLAR;
	v->a[138193] = state(3061);
	v->a[138194] = 1;
	v->a[138195] = aux_sym_string_repeat1;
	v->a[138196] = state(3218);
	v->a[138197] = 4;
	v->a[138198] = sym_arithmetic_expansion;
	v->a[138199] = sym_simple_expansion;
	small_parse_table_6910(v);
}

/* EOF small_parse_table_1381.c */
