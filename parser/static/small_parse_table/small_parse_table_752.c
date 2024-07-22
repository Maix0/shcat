/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_752.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3760(t_small_parse_table_array *v)
{
	v->a[75200] = actions(3040);
	v->a[75201] = 1;
	v->a[75202] = anon_sym_POUND;
	v->a[75203] = actions(3042);
	v->a[75204] = 1;
	v->a[75205] = aux_sym__simple_variable_name_token1;
	v->a[75206] = actions(3044);
	v->a[75207] = 1;
	v->a[75208] = anon_sym_0;
	v->a[75209] = actions(3046);
	v->a[75210] = 1;
	v->a[75211] = sym_variable_name;
	v->a[75212] = actions(3112);
	v->a[75213] = 1;
	v->a[75214] = anon_sym_RBRACE;
	v->a[75215] = state(2010);
	v->a[75216] = 1;
	v->a[75217] = sym__expansion_body;
	v->a[75218] = actions(3038);
	v->a[75219] = 6;
	small_parse_table_3761(v);
}

void	small_parse_table_3761(t_small_parse_table_array *v)
{
	v->a[75220] = anon_sym_BANG;
	v->a[75221] = anon_sym_DASH;
	v->a[75222] = anon_sym_STAR;
	v->a[75223] = anon_sym_QMARK;
	v->a[75224] = anon_sym_DOLLAR;
	v->a[75225] = anon_sym_AT;
	v->a[75226] = 4;
	v->a[75227] = actions(3);
	v->a[75228] = 1;
	v->a[75229] = sym_comment;
	v->a[75230] = actions(3116);
	v->a[75231] = 1;
	v->a[75232] = anon_sym_esac;
	v->a[75233] = actions(3118);
	v->a[75234] = 1;
	v->a[75235] = sym_extglob_pattern;
	v->a[75236] = actions(3114);
	v->a[75237] = 10;
	v->a[75238] = anon_sym_LPAREN;
	v->a[75239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3762(v);
}

void	small_parse_table_3762(t_small_parse_table_array *v)
{
	v->a[75240] = anon_sym_DOLLAR;
	v->a[75241] = anon_sym_DQUOTE;
	v->a[75242] = sym_raw_string;
	v->a[75243] = sym_number;
	v->a[75244] = anon_sym_DOLLAR_LBRACE;
	v->a[75245] = anon_sym_DOLLAR_LPAREN;
	v->a[75246] = anon_sym_BQUOTE;
	v->a[75247] = sym_word;
	v->a[75248] = 10;
	v->a[75249] = actions(3);
	v->a[75250] = 1;
	v->a[75251] = sym_comment;
	v->a[75252] = actions(3058);
	v->a[75253] = 1;
	v->a[75254] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75255] = actions(3064);
	v->a[75256] = 1;
	v->a[75257] = sym_string_content;
	v->a[75258] = actions(3066);
	v->a[75259] = 1;
	small_parse_table_3763(v);
}

void	small_parse_table_3763(t_small_parse_table_array *v)
{
	v->a[75260] = anon_sym_DOLLAR_LBRACE;
	v->a[75261] = actions(3068);
	v->a[75262] = 1;
	v->a[75263] = anon_sym_DOLLAR_LPAREN;
	v->a[75264] = actions(3070);
	v->a[75265] = 1;
	v->a[75266] = anon_sym_BQUOTE;
	v->a[75267] = actions(3120);
	v->a[75268] = 1;
	v->a[75269] = anon_sym_DOLLAR;
	v->a[75270] = actions(3122);
	v->a[75271] = 1;
	v->a[75272] = anon_sym_DQUOTE;
	v->a[75273] = state(1610);
	v->a[75274] = 1;
	v->a[75275] = aux_sym_string_repeat1;
	v->a[75276] = state(1748);
	v->a[75277] = 4;
	v->a[75278] = sym_arithmetic_expansion;
	v->a[75279] = sym_simple_expansion;
	small_parse_table_3764(v);
}

void	small_parse_table_3764(t_small_parse_table_array *v)
{
	v->a[75280] = sym_expansion;
	v->a[75281] = sym_command_substitution;
	v->a[75282] = 10;
	v->a[75283] = actions(3);
	v->a[75284] = 1;
	v->a[75285] = sym_comment;
	v->a[75286] = actions(3058);
	v->a[75287] = 1;
	v->a[75288] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75289] = actions(3064);
	v->a[75290] = 1;
	v->a[75291] = sym_string_content;
	v->a[75292] = actions(3066);
	v->a[75293] = 1;
	v->a[75294] = anon_sym_DOLLAR_LBRACE;
	v->a[75295] = actions(3068);
	v->a[75296] = 1;
	v->a[75297] = anon_sym_DOLLAR_LPAREN;
	v->a[75298] = actions(3070);
	v->a[75299] = 1;
	small_parse_table_3765(v);
}

/* EOF small_parse_table_752.c */
