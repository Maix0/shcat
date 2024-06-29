/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_911.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4555(t_small_parse_table_array *v)
{
	v->a[91100] = anon_sym_BQUOTE;
	v->a[91101] = sym_word;
	v->a[91102] = 4;
	v->a[91103] = actions(3);
	v->a[91104] = 1;
	v->a[91105] = sym_comment;
	v->a[91106] = actions(387);
	v->a[91107] = 1;
	v->a[91108] = sym_variable_name;
	v->a[91109] = actions(383);
	v->a[91110] = 2;
	v->a[91111] = aux_sym__simple_variable_name_token1;
	v->a[91112] = aux_sym__multiline_variable_name_token1;
	v->a[91113] = actions(381);
	v->a[91114] = 9;
	v->a[91115] = anon_sym_BANG;
	v->a[91116] = anon_sym_DASH;
	v->a[91117] = anon_sym_STAR;
	v->a[91118] = anon_sym_QMARK;
	v->a[91119] = anon_sym_DOLLAR;
	small_parse_table_4556(v);
}

void	small_parse_table_4556(t_small_parse_table_array *v)
{
	v->a[91120] = anon_sym_POUND;
	v->a[91121] = anon_sym_AT;
	v->a[91122] = anon_sym_0;
	v->a[91123] = anon_sym__;
	v->a[91124] = 10;
	v->a[91125] = actions(3);
	v->a[91126] = 1;
	v->a[91127] = sym_comment;
	v->a[91128] = actions(3414);
	v->a[91129] = 1;
	v->a[91130] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91131] = actions(3420);
	v->a[91132] = 1;
	v->a[91133] = sym_string_content;
	v->a[91134] = actions(3422);
	v->a[91135] = 1;
	v->a[91136] = anon_sym_DOLLAR_LBRACE;
	v->a[91137] = actions(3424);
	v->a[91138] = 1;
	v->a[91139] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4557(v);
}

void	small_parse_table_4557(t_small_parse_table_array *v)
{
	v->a[91140] = actions(3426);
	v->a[91141] = 1;
	v->a[91142] = anon_sym_BQUOTE;
	v->a[91143] = actions(3734);
	v->a[91144] = 1;
	v->a[91145] = anon_sym_DOLLAR;
	v->a[91146] = actions(3736);
	v->a[91147] = 1;
	v->a[91148] = anon_sym_DQUOTE;
	v->a[91149] = state(1897);
	v->a[91150] = 1;
	v->a[91151] = aux_sym_string_repeat1;
	v->a[91152] = state(1963);
	v->a[91153] = 4;
	v->a[91154] = sym_arithmetic_expansion;
	v->a[91155] = sym_simple_expansion;
	v->a[91156] = sym_expansion;
	v->a[91157] = sym_command_substitution;
	v->a[91158] = 4;
	v->a[91159] = actions(3);
	small_parse_table_4558(v);
}

void	small_parse_table_4558(t_small_parse_table_array *v)
{
	v->a[91160] = 1;
	v->a[91161] = sym_comment;
	v->a[91162] = actions(3742);
	v->a[91163] = 1;
	v->a[91164] = sym_variable_name;
	v->a[91165] = actions(3740);
	v->a[91166] = 2;
	v->a[91167] = aux_sym__simple_variable_name_token1;
	v->a[91168] = aux_sym__multiline_variable_name_token1;
	v->a[91169] = actions(3738);
	v->a[91170] = 9;
	v->a[91171] = anon_sym_BANG;
	v->a[91172] = anon_sym_DASH;
	v->a[91173] = anon_sym_STAR;
	v->a[91174] = anon_sym_QMARK;
	v->a[91175] = anon_sym_DOLLAR;
	v->a[91176] = anon_sym_POUND;
	v->a[91177] = anon_sym_AT;
	v->a[91178] = anon_sym_0;
	v->a[91179] = anon_sym__;
	small_parse_table_4559(v);
}

void	small_parse_table_4559(t_small_parse_table_array *v)
{
	v->a[91180] = 4;
	v->a[91181] = actions(3);
	v->a[91182] = 1;
	v->a[91183] = sym_comment;
	v->a[91184] = actions(447);
	v->a[91185] = 1;
	v->a[91186] = sym_variable_name;
	v->a[91187] = actions(445);
	v->a[91188] = 2;
	v->a[91189] = aux_sym__simple_variable_name_token1;
	v->a[91190] = aux_sym__multiline_variable_name_token1;
	v->a[91191] = actions(443);
	v->a[91192] = 9;
	v->a[91193] = anon_sym_BANG;
	v->a[91194] = anon_sym_DASH;
	v->a[91195] = anon_sym_STAR;
	v->a[91196] = anon_sym_QMARK;
	v->a[91197] = anon_sym_DOLLAR;
	v->a[91198] = anon_sym_POUND;
	v->a[91199] = anon_sym_AT;
	small_parse_table_4560(v);
}

/* EOF small_parse_table_911.c */
