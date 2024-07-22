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
	v->a[77100] = anon_sym_RBRACE;
	v->a[77101] = state(2084);
	v->a[77102] = 1;
	v->a[77103] = sym__expansion_body;
	v->a[77104] = actions(3038);
	v->a[77105] = 6;
	v->a[77106] = anon_sym_BANG;
	v->a[77107] = anon_sym_DASH;
	v->a[77108] = anon_sym_STAR;
	v->a[77109] = anon_sym_QMARK;
	v->a[77110] = anon_sym_DOLLAR;
	v->a[77111] = anon_sym_AT;
	v->a[77112] = 8;
	v->a[77113] = actions(3);
	v->a[77114] = 1;
	v->a[77115] = sym_comment;
	v->a[77116] = actions(3040);
	v->a[77117] = 1;
	v->a[77118] = anon_sym_POUND;
	v->a[77119] = actions(3042);
	small_parse_table_3856(v);
}

void	small_parse_table_3856(t_small_parse_table_array *v)
{
	v->a[77120] = 1;
	v->a[77121] = aux_sym__simple_variable_name_token1;
	v->a[77122] = actions(3044);
	v->a[77123] = 1;
	v->a[77124] = anon_sym_0;
	v->a[77125] = actions(3046);
	v->a[77126] = 1;
	v->a[77127] = sym_variable_name;
	v->a[77128] = actions(3332);
	v->a[77129] = 1;
	v->a[77130] = anon_sym_RBRACE;
	v->a[77131] = state(2026);
	v->a[77132] = 1;
	v->a[77133] = sym__expansion_body;
	v->a[77134] = actions(3038);
	v->a[77135] = 6;
	v->a[77136] = anon_sym_BANG;
	v->a[77137] = anon_sym_DASH;
	v->a[77138] = anon_sym_STAR;
	v->a[77139] = anon_sym_QMARK;
	small_parse_table_3857(v);
}

void	small_parse_table_3857(t_small_parse_table_array *v)
{
	v->a[77140] = anon_sym_DOLLAR;
	v->a[77141] = anon_sym_AT;
	v->a[77142] = 10;
	v->a[77143] = actions(3);
	v->a[77144] = 1;
	v->a[77145] = sym_comment;
	v->a[77146] = actions(3058);
	v->a[77147] = 1;
	v->a[77148] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77149] = actions(3064);
	v->a[77150] = 1;
	v->a[77151] = sym_string_content;
	v->a[77152] = actions(3066);
	v->a[77153] = 1;
	v->a[77154] = anon_sym_DOLLAR_LBRACE;
	v->a[77155] = actions(3068);
	v->a[77156] = 1;
	v->a[77157] = anon_sym_DOLLAR_LPAREN;
	v->a[77158] = actions(3070);
	v->a[77159] = 1;
	small_parse_table_3858(v);
}

void	small_parse_table_3858(t_small_parse_table_array *v)
{
	v->a[77160] = anon_sym_BQUOTE;
	v->a[77161] = actions(3334);
	v->a[77162] = 1;
	v->a[77163] = anon_sym_DOLLAR;
	v->a[77164] = actions(3336);
	v->a[77165] = 1;
	v->a[77166] = anon_sym_DQUOTE;
	v->a[77167] = state(1610);
	v->a[77168] = 1;
	v->a[77169] = aux_sym_string_repeat1;
	v->a[77170] = state(1748);
	v->a[77171] = 4;
	v->a[77172] = sym_arithmetic_expansion;
	v->a[77173] = sym_simple_expansion;
	v->a[77174] = sym_expansion;
	v->a[77175] = sym_command_substitution;
	v->a[77176] = 10;
	v->a[77177] = actions(3);
	v->a[77178] = 1;
	v->a[77179] = sym_comment;
	small_parse_table_3859(v);
}

void	small_parse_table_3859(t_small_parse_table_array *v)
{
	v->a[77180] = actions(3058);
	v->a[77181] = 1;
	v->a[77182] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77183] = actions(3064);
	v->a[77184] = 1;
	v->a[77185] = sym_string_content;
	v->a[77186] = actions(3066);
	v->a[77187] = 1;
	v->a[77188] = anon_sym_DOLLAR_LBRACE;
	v->a[77189] = actions(3068);
	v->a[77190] = 1;
	v->a[77191] = anon_sym_DOLLAR_LPAREN;
	v->a[77192] = actions(3070);
	v->a[77193] = 1;
	v->a[77194] = anon_sym_BQUOTE;
	v->a[77195] = actions(3338);
	v->a[77196] = 1;
	v->a[77197] = anon_sym_DOLLAR;
	v->a[77198] = actions(3340);
	v->a[77199] = 1;
	small_parse_table_3860(v);
}

/* EOF small_parse_table_771.c */
