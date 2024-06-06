/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1382.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6910(t_small_parse_table_array *v)
{
	v->a[138200] = sym_expansion;
	v->a[138201] = sym_command_substitution;
	v->a[138202] = 7;
	v->a[138203] = actions(3);
	v->a[138204] = 1;
	v->a[138205] = sym_comment;
	v->a[138206] = actions(7754);
	v->a[138207] = 1;
	v->a[138208] = aux_sym__simple_variable_name_token1;
	v->a[138209] = actions(7758);
	v->a[138210] = 1;
	v->a[138211] = sym_variable_name;
	v->a[138212] = actions(8079);
	v->a[138213] = 1;
	v->a[138214] = anon_sym_RBRACE3;
	v->a[138215] = state(3810);
	v->a[138216] = 1;
	v->a[138217] = sym__expansion_body;
	v->a[138218] = actions(7756);
	v->a[138219] = 2;
	small_parse_table_6911(v);
}

void	small_parse_table_6911(t_small_parse_table_array *v)
{
	v->a[138220] = anon_sym_0;
	v->a[138221] = anon_sym__;
	v->a[138222] = actions(7750);
	v->a[138223] = 7;
	v->a[138224] = anon_sym_BANG;
	v->a[138225] = anon_sym_DASH;
	v->a[138226] = anon_sym_STAR;
	v->a[138227] = anon_sym_QMARK;
	v->a[138228] = anon_sym_DOLLAR;
	v->a[138229] = anon_sym_POUND;
	v->a[138230] = anon_sym_AT;
	v->a[138231] = 11;
	v->a[138232] = actions(3);
	v->a[138233] = 1;
	v->a[138234] = sym_comment;
	v->a[138235] = actions(7686);
	v->a[138236] = 1;
	v->a[138237] = anon_sym_DQUOTE;
	v->a[138238] = actions(7760);
	v->a[138239] = 1;
	small_parse_table_6912(v);
}

void	small_parse_table_6912(t_small_parse_table_array *v)
{
	v->a[138240] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138241] = actions(7766);
	v->a[138242] = 1;
	v->a[138243] = sym_string_content;
	v->a[138244] = actions(7768);
	v->a[138245] = 1;
	v->a[138246] = anon_sym_DOLLAR_LBRACE;
	v->a[138247] = actions(7770);
	v->a[138248] = 1;
	v->a[138249] = anon_sym_DOLLAR_LPAREN;
	v->a[138250] = actions(7772);
	v->a[138251] = 1;
	v->a[138252] = anon_sym_BQUOTE;
	v->a[138253] = actions(7774);
	v->a[138254] = 1;
	v->a[138255] = anon_sym_DOLLAR_BQUOTE;
	v->a[138256] = actions(8081);
	v->a[138257] = 1;
	v->a[138258] = anon_sym_DOLLAR;
	v->a[138259] = state(3061);
	small_parse_table_6913(v);
}

void	small_parse_table_6913(t_small_parse_table_array *v)
{
	v->a[138260] = 1;
	v->a[138261] = aux_sym_string_repeat1;
	v->a[138262] = state(3218);
	v->a[138263] = 4;
	v->a[138264] = sym_arithmetic_expansion;
	v->a[138265] = sym_simple_expansion;
	v->a[138266] = sym_expansion;
	v->a[138267] = sym_command_substitution;
	v->a[138268] = 11;
	v->a[138269] = actions(3);
	v->a[138270] = 1;
	v->a[138271] = sym_comment;
	v->a[138272] = actions(7760);
	v->a[138273] = 1;
	v->a[138274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138275] = actions(7766);
	v->a[138276] = 1;
	v->a[138277] = sym_string_content;
	v->a[138278] = actions(7768);
	v->a[138279] = 1;
	small_parse_table_6914(v);
}

void	small_parse_table_6914(t_small_parse_table_array *v)
{
	v->a[138280] = anon_sym_DOLLAR_LBRACE;
	v->a[138281] = actions(7770);
	v->a[138282] = 1;
	v->a[138283] = anon_sym_DOLLAR_LPAREN;
	v->a[138284] = actions(7772);
	v->a[138285] = 1;
	v->a[138286] = anon_sym_BQUOTE;
	v->a[138287] = actions(7774);
	v->a[138288] = 1;
	v->a[138289] = anon_sym_DOLLAR_BQUOTE;
	v->a[138290] = actions(8083);
	v->a[138291] = 1;
	v->a[138292] = anon_sym_DOLLAR;
	v->a[138293] = actions(8085);
	v->a[138294] = 1;
	v->a[138295] = anon_sym_DQUOTE;
	v->a[138296] = state(3093);
	v->a[138297] = 1;
	v->a[138298] = aux_sym_string_repeat1;
	v->a[138299] = state(3218);
	small_parse_table_6915(v);
}

/* EOF small_parse_table_1382.c */
