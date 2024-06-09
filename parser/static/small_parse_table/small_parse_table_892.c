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
	v->a[89200] = actions(3);
	v->a[89201] = 1;
	v->a[89202] = sym_comment;
	v->a[89203] = actions(3526);
	v->a[89204] = 1;
	v->a[89205] = anon_sym_DQUOTE;
	v->a[89206] = actions(3712);
	v->a[89207] = 1;
	v->a[89208] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89209] = actions(3716);
	v->a[89210] = 1;
	v->a[89211] = sym_string_content;
	v->a[89212] = actions(3718);
	v->a[89213] = 1;
	v->a[89214] = anon_sym_DOLLAR_LBRACE;
	v->a[89215] = actions(3720);
	v->a[89216] = 1;
	v->a[89217] = anon_sym_DOLLAR_LPAREN;
	v->a[89218] = actions(3722);
	v->a[89219] = 1;
	small_parse_table_4461(v);
}

void	small_parse_table_4461(t_small_parse_table_array *v)
{
	v->a[89220] = anon_sym_BQUOTE;
	v->a[89221] = actions(3854);
	v->a[89222] = 1;
	v->a[89223] = anon_sym_DOLLAR;
	v->a[89224] = state(1738);
	v->a[89225] = 1;
	v->a[89226] = aux_sym_string_repeat1;
	v->a[89227] = state(1869);
	v->a[89228] = 4;
	v->a[89229] = sym_arithmetic_expansion;
	v->a[89230] = sym_simple_expansion;
	v->a[89231] = sym_expansion;
	v->a[89232] = sym_command_substitution;
	v->a[89233] = 4;
	v->a[89234] = actions(3);
	v->a[89235] = 1;
	v->a[89236] = sym_comment;
	v->a[89237] = actions(1221);
	v->a[89238] = 1;
	v->a[89239] = sym_variable_name;
	small_parse_table_4462(v);
}

void	small_parse_table_4462(t_small_parse_table_array *v)
{
	v->a[89240] = actions(1219);
	v->a[89241] = 2;
	v->a[89242] = aux_sym__simple_variable_name_token1;
	v->a[89243] = aux_sym__multiline_variable_name_token1;
	v->a[89244] = actions(1217);
	v->a[89245] = 9;
	v->a[89246] = anon_sym_BANG;
	v->a[89247] = anon_sym_DASH;
	v->a[89248] = anon_sym_STAR;
	v->a[89249] = anon_sym_QMARK;
	v->a[89250] = anon_sym_DOLLAR;
	v->a[89251] = anon_sym_POUND;
	v->a[89252] = anon_sym_AT;
	v->a[89253] = anon_sym_0;
	v->a[89254] = anon_sym__;
	v->a[89255] = 10;
	v->a[89256] = actions(3);
	v->a[89257] = 1;
	v->a[89258] = sym_comment;
	v->a[89259] = actions(3712);
	small_parse_table_4463(v);
}

void	small_parse_table_4463(t_small_parse_table_array *v)
{
	v->a[89260] = 1;
	v->a[89261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89262] = actions(3716);
	v->a[89263] = 1;
	v->a[89264] = sym_string_content;
	v->a[89265] = actions(3718);
	v->a[89266] = 1;
	v->a[89267] = anon_sym_DOLLAR_LBRACE;
	v->a[89268] = actions(3720);
	v->a[89269] = 1;
	v->a[89270] = anon_sym_DOLLAR_LPAREN;
	v->a[89271] = actions(3722);
	v->a[89272] = 1;
	v->a[89273] = anon_sym_BQUOTE;
	v->a[89274] = actions(3856);
	v->a[89275] = 1;
	v->a[89276] = anon_sym_DOLLAR;
	v->a[89277] = actions(3858);
	v->a[89278] = 1;
	v->a[89279] = anon_sym_DQUOTE;
	small_parse_table_4464(v);
}

void	small_parse_table_4464(t_small_parse_table_array *v)
{
	v->a[89280] = state(1716);
	v->a[89281] = 1;
	v->a[89282] = aux_sym_string_repeat1;
	v->a[89283] = state(1869);
	v->a[89284] = 4;
	v->a[89285] = sym_arithmetic_expansion;
	v->a[89286] = sym_simple_expansion;
	v->a[89287] = sym_expansion;
	v->a[89288] = sym_command_substitution;
	v->a[89289] = 10;
	v->a[89290] = actions(3);
	v->a[89291] = 1;
	v->a[89292] = sym_comment;
	v->a[89293] = actions(3712);
	v->a[89294] = 1;
	v->a[89295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89296] = actions(3716);
	v->a[89297] = 1;
	v->a[89298] = sym_string_content;
	v->a[89299] = actions(3718);
	small_parse_table_4465(v);
}

/* EOF small_parse_table_892.c */
