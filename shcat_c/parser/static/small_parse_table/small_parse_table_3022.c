/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3022.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15110(t_small_parse_table_array *v)
{
	v->a[302200] = 6;
	v->a[302201] = actions(3);
	v->a[302202] = 1;
	v->a[302203] = sym_comment;
	v->a[302204] = actions(13294);
	v->a[302205] = 1;
	v->a[302206] = anon_sym_DQUOTE;
	v->a[302207] = actions(13732);
	v->a[302208] = 1;
	v->a[302209] = sym_string_content;
	v->a[302210] = actions(13736);
	v->a[302211] = 1;
	v->a[302212] = sym_variable_name;
	v->a[302213] = actions(13734);
	v->a[302214] = 2;
	v->a[302215] = aux_sym__simple_variable_name_token1;
	v->a[302216] = aux_sym__multiline_variable_name_token1;
	v->a[302217] = actions(13730);
	v->a[302218] = 9;
	v->a[302219] = anon_sym_DASH;
	small_parse_table_15111(v);
}

void	small_parse_table_15111(t_small_parse_table_array *v)
{
	v->a[302220] = anon_sym_STAR;
	v->a[302221] = anon_sym_BANG;
	v->a[302222] = anon_sym_QMARK;
	v->a[302223] = anon_sym_DOLLAR;
	v->a[302224] = anon_sym_POUND;
	v->a[302225] = anon_sym_AT2;
	v->a[302226] = anon_sym_0;
	v->a[302227] = anon_sym__;
	v->a[302228] = 6;
	v->a[302229] = actions(3);
	v->a[302230] = 1;
	v->a[302231] = sym_comment;
	v->a[302232] = actions(13732);
	v->a[302233] = 1;
	v->a[302234] = sym_string_content;
	v->a[302235] = actions(13736);
	v->a[302236] = 1;
	v->a[302237] = sym_variable_name;
	v->a[302238] = actions(13774);
	v->a[302239] = 1;
	small_parse_table_15112(v);
}

void	small_parse_table_15112(t_small_parse_table_array *v)
{
	v->a[302240] = anon_sym_DQUOTE;
	v->a[302241] = actions(13734);
	v->a[302242] = 2;
	v->a[302243] = aux_sym__simple_variable_name_token1;
	v->a[302244] = aux_sym__multiline_variable_name_token1;
	v->a[302245] = actions(13730);
	v->a[302246] = 9;
	v->a[302247] = anon_sym_DASH;
	v->a[302248] = anon_sym_STAR;
	v->a[302249] = anon_sym_BANG;
	v->a[302250] = anon_sym_QMARK;
	v->a[302251] = anon_sym_DOLLAR;
	v->a[302252] = anon_sym_POUND;
	v->a[302253] = anon_sym_AT2;
	v->a[302254] = anon_sym_0;
	v->a[302255] = anon_sym__;
	v->a[302256] = 6;
	v->a[302257] = actions(3);
	v->a[302258] = 1;
	v->a[302259] = sym_comment;
	small_parse_table_15113(v);
}

void	small_parse_table_15113(t_small_parse_table_array *v)
{
	v->a[302260] = actions(8694);
	v->a[302261] = 1;
	v->a[302262] = anon_sym_DQUOTE;
	v->a[302263] = actions(8698);
	v->a[302264] = 1;
	v->a[302265] = sym_variable_name;
	v->a[302266] = state(5487);
	v->a[302267] = 1;
	v->a[302268] = sym_string;
	v->a[302269] = actions(8696);
	v->a[302270] = 2;
	v->a[302271] = aux_sym__simple_variable_name_token1;
	v->a[302272] = aux_sym__multiline_variable_name_token1;
	v->a[302273] = actions(8692);
	v->a[302274] = 9;
	v->a[302275] = anon_sym_DASH;
	v->a[302276] = anon_sym_STAR;
	v->a[302277] = anon_sym_BANG;
	v->a[302278] = anon_sym_QMARK;
	v->a[302279] = anon_sym_DOLLAR;
	small_parse_table_15114(v);
}

void	small_parse_table_15114(t_small_parse_table_array *v)
{
	v->a[302280] = anon_sym_POUND;
	v->a[302281] = anon_sym_AT2;
	v->a[302282] = anon_sym_0;
	v->a[302283] = anon_sym__;
	v->a[302284] = 6;
	v->a[302285] = actions(3);
	v->a[302286] = 1;
	v->a[302287] = sym_comment;
	v->a[302288] = actions(13778);
	v->a[302289] = 1;
	v->a[302290] = anon_sym_DQUOTE;
	v->a[302291] = actions(13782);
	v->a[302292] = 1;
	v->a[302293] = sym_variable_name;
	v->a[302294] = state(6761);
	v->a[302295] = 1;
	v->a[302296] = sym_string;
	v->a[302297] = actions(13780);
	v->a[302298] = 2;
	v->a[302299] = aux_sym__simple_variable_name_token1;
	small_parse_table_15115(v);
}

/* EOF small_parse_table_3022.c */
