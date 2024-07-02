/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_783.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3915(t_small_parse_table_array *v)
{
	v->a[78300] = anon_sym_DOLLAR_LBRACE;
	v->a[78301] = actions(3114);
	v->a[78302] = 1;
	v->a[78303] = anon_sym_DOLLAR_LPAREN;
	v->a[78304] = actions(3116);
	v->a[78305] = 1;
	v->a[78306] = anon_sym_BQUOTE;
	v->a[78307] = actions(3330);
	v->a[78308] = 1;
	v->a[78309] = anon_sym_DOLLAR;
	v->a[78310] = actions(3332);
	v->a[78311] = 1;
	v->a[78312] = anon_sym_DQUOTE;
	v->a[78313] = state(1626);
	v->a[78314] = 1;
	v->a[78315] = aux_sym_string_repeat1;
	v->a[78316] = state(1748);
	v->a[78317] = 4;
	v->a[78318] = sym_arithmetic_expansion;
	v->a[78319] = sym_simple_expansion;
	small_parse_table_3916(v);
}

void	small_parse_table_3916(t_small_parse_table_array *v)
{
	v->a[78320] = sym_expansion;
	v->a[78321] = sym_command_substitution;
	v->a[78322] = 10;
	v->a[78323] = actions(3);
	v->a[78324] = 1;
	v->a[78325] = sym_comment;
	v->a[78326] = actions(3104);
	v->a[78327] = 1;
	v->a[78328] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78329] = actions(3110);
	v->a[78330] = 1;
	v->a[78331] = sym_string_content;
	v->a[78332] = actions(3112);
	v->a[78333] = 1;
	v->a[78334] = anon_sym_DOLLAR_LBRACE;
	v->a[78335] = actions(3114);
	v->a[78336] = 1;
	v->a[78337] = anon_sym_DOLLAR_LPAREN;
	v->a[78338] = actions(3116);
	v->a[78339] = 1;
	small_parse_table_3917(v);
}

void	small_parse_table_3917(t_small_parse_table_array *v)
{
	v->a[78340] = anon_sym_BQUOTE;
	v->a[78341] = actions(3334);
	v->a[78342] = 1;
	v->a[78343] = anon_sym_DOLLAR;
	v->a[78344] = actions(3336);
	v->a[78345] = 1;
	v->a[78346] = anon_sym_DQUOTE;
	v->a[78347] = state(1671);
	v->a[78348] = 1;
	v->a[78349] = aux_sym_string_repeat1;
	v->a[78350] = state(1748);
	v->a[78351] = 4;
	v->a[78352] = sym_arithmetic_expansion;
	v->a[78353] = sym_simple_expansion;
	v->a[78354] = sym_expansion;
	v->a[78355] = sym_command_substitution;
	v->a[78356] = 4;
	v->a[78357] = actions(3);
	v->a[78358] = 1;
	v->a[78359] = sym_comment;
	small_parse_table_3918(v);
}

void	small_parse_table_3918(t_small_parse_table_array *v)
{
	v->a[78360] = actions(1273);
	v->a[78361] = 1;
	v->a[78362] = sym_variable_name;
	v->a[78363] = actions(1271);
	v->a[78364] = 2;
	v->a[78365] = aux_sym__simple_variable_name_token1;
	v->a[78366] = aux_sym__multiline_variable_name_token1;
	v->a[78367] = actions(1269);
	v->a[78368] = 9;
	v->a[78369] = anon_sym_BANG;
	v->a[78370] = anon_sym_DASH;
	v->a[78371] = anon_sym_STAR;
	v->a[78372] = anon_sym_QMARK;
	v->a[78373] = anon_sym_DOLLAR;
	v->a[78374] = anon_sym_POUND;
	v->a[78375] = anon_sym_AT;
	v->a[78376] = anon_sym_0;
	v->a[78377] = anon_sym__;
	v->a[78378] = 10;
	v->a[78379] = actions(3);
	small_parse_table_3919(v);
}

void	small_parse_table_3919(t_small_parse_table_array *v)
{
	v->a[78380] = 1;
	v->a[78381] = sym_comment;
	v->a[78382] = actions(3104);
	v->a[78383] = 1;
	v->a[78384] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78385] = actions(3110);
	v->a[78386] = 1;
	v->a[78387] = sym_string_content;
	v->a[78388] = actions(3112);
	v->a[78389] = 1;
	v->a[78390] = anon_sym_DOLLAR_LBRACE;
	v->a[78391] = actions(3114);
	v->a[78392] = 1;
	v->a[78393] = anon_sym_DOLLAR_LPAREN;
	v->a[78394] = actions(3116);
	v->a[78395] = 1;
	v->a[78396] = anon_sym_BQUOTE;
	v->a[78397] = actions(3338);
	v->a[78398] = 1;
	v->a[78399] = anon_sym_DOLLAR;
	small_parse_table_3920(v);
}

/* EOF small_parse_table_783.c */
