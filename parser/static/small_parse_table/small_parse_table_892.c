/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_892.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4460(t_small_parse_table_array *v)
{
	v->a[89200] = 1;
	v->a[89201] = anon_sym_DOLLAR_LPAREN;
	v->a[89202] = actions(3426);
	v->a[89203] = 1;
	v->a[89204] = anon_sym_BQUOTE;
	v->a[89205] = actions(3504);
	v->a[89206] = 1;
	v->a[89207] = anon_sym_DOLLAR;
	v->a[89208] = actions(3506);
	v->a[89209] = 1;
	v->a[89210] = anon_sym_DQUOTE;
	v->a[89211] = state(1825);
	v->a[89212] = 1;
	v->a[89213] = aux_sym_string_repeat1;
	v->a[89214] = state(1963);
	v->a[89215] = 4;
	v->a[89216] = sym_arithmetic_expansion;
	v->a[89217] = sym_simple_expansion;
	v->a[89218] = sym_expansion;
	v->a[89219] = sym_command_substitution;
	small_parse_table_4461(v);
}

void	small_parse_table_4461(t_small_parse_table_array *v)
{
	v->a[89220] = 4;
	v->a[89221] = actions(3);
	v->a[89222] = 1;
	v->a[89223] = sym_comment;
	v->a[89224] = actions(1426);
	v->a[89225] = 1;
	v->a[89226] = sym_variable_name;
	v->a[89227] = actions(1424);
	v->a[89228] = 2;
	v->a[89229] = aux_sym__simple_variable_name_token1;
	v->a[89230] = aux_sym__multiline_variable_name_token1;
	v->a[89231] = actions(1422);
	v->a[89232] = 9;
	v->a[89233] = anon_sym_BANG;
	v->a[89234] = anon_sym_DASH;
	v->a[89235] = anon_sym_STAR;
	v->a[89236] = anon_sym_QMARK;
	v->a[89237] = anon_sym_DOLLAR;
	v->a[89238] = anon_sym_POUND;
	v->a[89239] = anon_sym_AT;
	small_parse_table_4462(v);
}

void	small_parse_table_4462(t_small_parse_table_array *v)
{
	v->a[89240] = anon_sym_0;
	v->a[89241] = anon_sym__;
	v->a[89242] = 4;
	v->a[89243] = actions(3);
	v->a[89244] = 1;
	v->a[89245] = sym_comment;
	v->a[89246] = actions(3282);
	v->a[89247] = 1;
	v->a[89248] = sym_variable_name;
	v->a[89249] = actions(3280);
	v->a[89250] = 2;
	v->a[89251] = aux_sym__simple_variable_name_token1;
	v->a[89252] = aux_sym__multiline_variable_name_token1;
	v->a[89253] = actions(3278);
	v->a[89254] = 9;
	v->a[89255] = anon_sym_BANG;
	v->a[89256] = anon_sym_DASH;
	v->a[89257] = anon_sym_STAR;
	v->a[89258] = anon_sym_QMARK;
	v->a[89259] = anon_sym_DOLLAR;
	small_parse_table_4463(v);
}

void	small_parse_table_4463(t_small_parse_table_array *v)
{
	v->a[89260] = anon_sym_POUND;
	v->a[89261] = anon_sym_AT;
	v->a[89262] = anon_sym_0;
	v->a[89263] = anon_sym__;
	v->a[89264] = 10;
	v->a[89265] = actions(3);
	v->a[89266] = 1;
	v->a[89267] = sym_comment;
	v->a[89268] = actions(3414);
	v->a[89269] = 1;
	v->a[89270] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89271] = actions(3420);
	v->a[89272] = 1;
	v->a[89273] = sym_string_content;
	v->a[89274] = actions(3422);
	v->a[89275] = 1;
	v->a[89276] = anon_sym_DOLLAR_LBRACE;
	v->a[89277] = actions(3424);
	v->a[89278] = 1;
	v->a[89279] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4464(v);
}

void	small_parse_table_4464(t_small_parse_table_array *v)
{
	v->a[89280] = actions(3426);
	v->a[89281] = 1;
	v->a[89282] = anon_sym_BQUOTE;
	v->a[89283] = actions(3508);
	v->a[89284] = 1;
	v->a[89285] = anon_sym_DOLLAR;
	v->a[89286] = actions(3510);
	v->a[89287] = 1;
	v->a[89288] = anon_sym_DQUOTE;
	v->a[89289] = state(1832);
	v->a[89290] = 1;
	v->a[89291] = aux_sym_string_repeat1;
	v->a[89292] = state(1963);
	v->a[89293] = 4;
	v->a[89294] = sym_arithmetic_expansion;
	v->a[89295] = sym_simple_expansion;
	v->a[89296] = sym_expansion;
	v->a[89297] = sym_command_substitution;
	v->a[89298] = 6;
	v->a[89299] = actions(1074);
	small_parse_table_4465(v);
}

/* EOF small_parse_table_892.c */
