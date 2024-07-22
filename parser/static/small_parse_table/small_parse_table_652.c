/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_652.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3260(t_small_parse_table_array *v)
{
	v->a[65200] = sym_simple_expansion;
	v->a[65201] = sym_expansion;
	v->a[65202] = sym_command_substitution;
	v->a[65203] = 12;
	v->a[65204] = actions(3);
	v->a[65205] = 1;
	v->a[65206] = sym_comment;
	v->a[65207] = actions(2536);
	v->a[65208] = 1;
	v->a[65209] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65210] = actions(2538);
	v->a[65211] = 1;
	v->a[65212] = anon_sym_DOLLAR;
	v->a[65213] = actions(2540);
	v->a[65214] = 1;
	v->a[65215] = anon_sym_DQUOTE;
	v->a[65216] = actions(2542);
	v->a[65217] = 1;
	v->a[65218] = anon_sym_DOLLAR_LBRACE;
	v->a[65219] = actions(2544);
	small_parse_table_3261(v);
}

void	small_parse_table_3261(t_small_parse_table_array *v)
{
	v->a[65220] = 1;
	v->a[65221] = anon_sym_DOLLAR_LPAREN;
	v->a[65222] = actions(2546);
	v->a[65223] = 1;
	v->a[65224] = anon_sym_BQUOTE;
	v->a[65225] = actions(2548);
	v->a[65226] = 1;
	v->a[65227] = sym__comment_word;
	v->a[65228] = actions(2550);
	v->a[65229] = 1;
	v->a[65230] = sym__empty_value;
	v->a[65231] = state(1206);
	v->a[65232] = 1;
	v->a[65233] = sym_concatenation;
	v->a[65234] = actions(2534);
	v->a[65235] = 3;
	v->a[65236] = sym_raw_string;
	v->a[65237] = sym_number;
	v->a[65238] = sym_word;
	v->a[65239] = state(956);
	small_parse_table_3262(v);
}

void	small_parse_table_3262(t_small_parse_table_array *v)
{
	v->a[65240] = 5;
	v->a[65241] = sym_arithmetic_expansion;
	v->a[65242] = sym_string;
	v->a[65243] = sym_simple_expansion;
	v->a[65244] = sym_expansion;
	v->a[65245] = sym_command_substitution;
	v->a[65246] = 10;
	v->a[65247] = actions(3);
	v->a[65248] = 1;
	v->a[65249] = sym_comment;
	v->a[65250] = actions(405);
	v->a[65251] = 1;
	v->a[65252] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65253] = actions(407);
	v->a[65254] = 1;
	v->a[65255] = anon_sym_DOLLAR;
	v->a[65256] = actions(409);
	v->a[65257] = 1;
	v->a[65258] = anon_sym_DQUOTE;
	v->a[65259] = actions(411);
	small_parse_table_3263(v);
}

void	small_parse_table_3263(t_small_parse_table_array *v)
{
	v->a[65260] = 1;
	v->a[65261] = anon_sym_DOLLAR_LBRACE;
	v->a[65262] = actions(413);
	v->a[65263] = 1;
	v->a[65264] = anon_sym_DOLLAR_LPAREN;
	v->a[65265] = actions(415);
	v->a[65266] = 1;
	v->a[65267] = anon_sym_BQUOTE;
	v->a[65268] = actions(2554);
	v->a[65269] = 1;
	v->a[65270] = sym__bare_dollar;
	v->a[65271] = actions(2552);
	v->a[65272] = 5;
	v->a[65273] = aux_sym_concatenation_token1;
	v->a[65274] = sym_raw_string;
	v->a[65275] = sym_number;
	v->a[65276] = sym__comment_word;
	v->a[65277] = sym_word;
	v->a[65278] = state(565);
	v->a[65279] = 5;
	small_parse_table_3264(v);
}

void	small_parse_table_3264(t_small_parse_table_array *v)
{
	v->a[65280] = sym_arithmetic_expansion;
	v->a[65281] = sym_string;
	v->a[65282] = sym_simple_expansion;
	v->a[65283] = sym_expansion;
	v->a[65284] = sym_command_substitution;
	v->a[65285] = 12;
	v->a[65286] = actions(3);
	v->a[65287] = 1;
	v->a[65288] = sym_comment;
	v->a[65289] = actions(2504);
	v->a[65290] = 1;
	v->a[65291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65292] = actions(2508);
	v->a[65293] = 1;
	v->a[65294] = anon_sym_DQUOTE;
	v->a[65295] = actions(2510);
	v->a[65296] = 1;
	v->a[65297] = anon_sym_DOLLAR_LBRACE;
	v->a[65298] = actions(2512);
	v->a[65299] = 1;
	small_parse_table_3265(v);
}

/* EOF small_parse_table_652.c */
