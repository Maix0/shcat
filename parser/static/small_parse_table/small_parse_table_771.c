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
	v->a[77100] = 10;
	v->a[77101] = actions(3);
	v->a[77102] = 1;
	v->a[77103] = sym_comment;
	v->a[77104] = actions(943);
	v->a[77105] = 1;
	v->a[77106] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77107] = actions(945);
	v->a[77108] = 1;
	v->a[77109] = anon_sym_DOLLAR;
	v->a[77110] = actions(947);
	v->a[77111] = 1;
	v->a[77112] = anon_sym_DQUOTE;
	v->a[77113] = actions(949);
	v->a[77114] = 1;
	v->a[77115] = anon_sym_DOLLAR_LBRACE;
	v->a[77116] = actions(951);
	v->a[77117] = 1;
	v->a[77118] = anon_sym_DOLLAR_LPAREN;
	v->a[77119] = actions(953);
	small_parse_table_3856(v);
}

void	small_parse_table_3856(t_small_parse_table_array *v)
{
	v->a[77120] = 1;
	v->a[77121] = anon_sym_BQUOTE;
	v->a[77122] = actions(2876);
	v->a[77123] = 1;
	v->a[77124] = sym__bare_dollar;
	v->a[77125] = actions(2872);
	v->a[77126] = 5;
	v->a[77127] = aux_sym_concatenation_token1;
	v->a[77128] = sym_raw_string;
	v->a[77129] = sym_number;
	v->a[77130] = sym__comment_word;
	v->a[77131] = sym_word;
	v->a[77132] = state(1279);
	v->a[77133] = 5;
	v->a[77134] = sym_arithmetic_expansion;
	v->a[77135] = sym_string;
	v->a[77136] = sym_simple_expansion;
	v->a[77137] = sym_expansion;
	v->a[77138] = sym_command_substitution;
	v->a[77139] = 10;
	small_parse_table_3857(v);
}

void	small_parse_table_3857(t_small_parse_table_array *v)
{
	v->a[77140] = actions(3);
	v->a[77141] = 1;
	v->a[77142] = sym_comment;
	v->a[77143] = actions(477);
	v->a[77144] = 1;
	v->a[77145] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77146] = actions(481);
	v->a[77147] = 1;
	v->a[77148] = anon_sym_DQUOTE;
	v->a[77149] = actions(483);
	v->a[77150] = 1;
	v->a[77151] = anon_sym_DOLLAR_LBRACE;
	v->a[77152] = actions(485);
	v->a[77153] = 1;
	v->a[77154] = anon_sym_DOLLAR_LPAREN;
	v->a[77155] = actions(487);
	v->a[77156] = 1;
	v->a[77157] = anon_sym_BQUOTE;
	v->a[77158] = actions(2774);
	v->a[77159] = 1;
	small_parse_table_3858(v);
}

void	small_parse_table_3858(t_small_parse_table_array *v)
{
	v->a[77160] = sym__bare_dollar;
	v->a[77161] = actions(2952);
	v->a[77162] = 1;
	v->a[77163] = anon_sym_DOLLAR;
	v->a[77164] = actions(2772);
	v->a[77165] = 5;
	v->a[77166] = aux_sym_concatenation_token1;
	v->a[77167] = sym_raw_string;
	v->a[77168] = sym_number;
	v->a[77169] = sym__comment_word;
	v->a[77170] = sym_word;
	v->a[77171] = state(503);
	v->a[77172] = 5;
	v->a[77173] = sym_arithmetic_expansion;
	v->a[77174] = sym_string;
	v->a[77175] = sym_simple_expansion;
	v->a[77176] = sym_expansion;
	v->a[77177] = sym_command_substitution;
	v->a[77178] = 6;
	v->a[77179] = actions(870);
	small_parse_table_3859(v);
}

void	small_parse_table_3859(t_small_parse_table_array *v)
{
	v->a[77180] = 1;
	v->a[77181] = sym_comment;
	v->a[77182] = actions(2840);
	v->a[77183] = 1;
	v->a[77184] = aux_sym_concatenation_token1;
	v->a[77185] = actions(2954);
	v->a[77186] = 1;
	v->a[77187] = sym__concat;
	v->a[77188] = state(1499);
	v->a[77189] = 1;
	v->a[77190] = aux_sym_concatenation_repeat1;
	v->a[77191] = actions(1081);
	v->a[77192] = 6;
	v->a[77193] = anon_sym_PIPE;
	v->a[77194] = anon_sym_LT;
	v->a[77195] = anon_sym_GT;
	v->a[77196] = anon_sym_LT_AMP;
	v->a[77197] = anon_sym_GT_AMP;
	v->a[77198] = anon_sym_LT_LT;
	v->a[77199] = actions(1085);
	small_parse_table_3860(v);
}

/* EOF small_parse_table_771.c */
