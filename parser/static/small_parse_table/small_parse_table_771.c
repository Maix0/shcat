/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_771.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3855(t_small_parse_table_array *v)
{
	v->a[77100] = sym_comment;
	v->a[77101] = actions(393);
	v->a[77102] = 1;
	v->a[77103] = sym_variable_name;
	v->a[77104] = actions(391);
	v->a[77105] = 2;
	v->a[77106] = aux_sym__simple_variable_name_token1;
	v->a[77107] = aux_sym__multiline_variable_name_token1;
	v->a[77108] = actions(389);
	v->a[77109] = 9;
	v->a[77110] = anon_sym_BANG;
	v->a[77111] = anon_sym_DASH;
	v->a[77112] = anon_sym_STAR;
	v->a[77113] = anon_sym_QMARK;
	v->a[77114] = anon_sym_DOLLAR;
	v->a[77115] = anon_sym_POUND;
	v->a[77116] = anon_sym_AT;
	v->a[77117] = anon_sym_0;
	v->a[77118] = anon_sym__;
	v->a[77119] = 10;
	small_parse_table_3856(v);
}

void	small_parse_table_3856(t_small_parse_table_array *v)
{
	v->a[77120] = actions(3);
	v->a[77121] = 1;
	v->a[77122] = sym_comment;
	v->a[77123] = actions(3071);
	v->a[77124] = 1;
	v->a[77125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77126] = actions(3077);
	v->a[77127] = 1;
	v->a[77128] = sym_string_content;
	v->a[77129] = actions(3079);
	v->a[77130] = 1;
	v->a[77131] = anon_sym_DOLLAR_LBRACE;
	v->a[77132] = actions(3081);
	v->a[77133] = 1;
	v->a[77134] = anon_sym_DOLLAR_LPAREN;
	v->a[77135] = actions(3083);
	v->a[77136] = 1;
	v->a[77137] = anon_sym_BQUOTE;
	v->a[77138] = actions(3181);
	v->a[77139] = 1;
	small_parse_table_3857(v);
}

void	small_parse_table_3857(t_small_parse_table_array *v)
{
	v->a[77140] = anon_sym_DOLLAR;
	v->a[77141] = actions(3183);
	v->a[77142] = 1;
	v->a[77143] = anon_sym_DQUOTE;
	v->a[77144] = state(1627);
	v->a[77145] = 1;
	v->a[77146] = aux_sym_string_repeat1;
	v->a[77147] = state(1739);
	v->a[77148] = 4;
	v->a[77149] = sym_arithmetic_expansion;
	v->a[77150] = sym_simple_expansion;
	v->a[77151] = sym_expansion;
	v->a[77152] = sym_command_substitution;
	v->a[77153] = 10;
	v->a[77154] = actions(3);
	v->a[77155] = 1;
	v->a[77156] = sym_comment;
	v->a[77157] = actions(3071);
	v->a[77158] = 1;
	v->a[77159] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3858(v);
}

void	small_parse_table_3858(t_small_parse_table_array *v)
{
	v->a[77160] = actions(3077);
	v->a[77161] = 1;
	v->a[77162] = sym_string_content;
	v->a[77163] = actions(3079);
	v->a[77164] = 1;
	v->a[77165] = anon_sym_DOLLAR_LBRACE;
	v->a[77166] = actions(3081);
	v->a[77167] = 1;
	v->a[77168] = anon_sym_DOLLAR_LPAREN;
	v->a[77169] = actions(3083);
	v->a[77170] = 1;
	v->a[77171] = anon_sym_BQUOTE;
	v->a[77172] = actions(3185);
	v->a[77173] = 1;
	v->a[77174] = anon_sym_DOLLAR;
	v->a[77175] = actions(3187);
	v->a[77176] = 1;
	v->a[77177] = anon_sym_DQUOTE;
	v->a[77178] = state(1681);
	v->a[77179] = 1;
	small_parse_table_3859(v);
}

void	small_parse_table_3859(t_small_parse_table_array *v)
{
	v->a[77180] = aux_sym_string_repeat1;
	v->a[77181] = state(1739);
	v->a[77182] = 4;
	v->a[77183] = sym_arithmetic_expansion;
	v->a[77184] = sym_simple_expansion;
	v->a[77185] = sym_expansion;
	v->a[77186] = sym_command_substitution;
	v->a[77187] = 4;
	v->a[77188] = actions(3);
	v->a[77189] = 1;
	v->a[77190] = sym_comment;
	v->a[77191] = actions(1307);
	v->a[77192] = 1;
	v->a[77193] = sym_variable_name;
	v->a[77194] = actions(1305);
	v->a[77195] = 2;
	v->a[77196] = aux_sym__simple_variable_name_token1;
	v->a[77197] = aux_sym__multiline_variable_name_token1;
	v->a[77198] = actions(1303);
	v->a[77199] = 9;
	small_parse_table_3860(v);
}

/* EOF small_parse_table_771.c */
