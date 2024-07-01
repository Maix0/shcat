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
	v->a[75200] = actions(2711);
	v->a[75201] = 1;
	v->a[75202] = sym__bare_dollar;
	v->a[75203] = actions(2707);
	v->a[75204] = 5;
	v->a[75205] = aux_sym_concatenation_token1;
	v->a[75206] = sym_raw_string;
	v->a[75207] = sym_number;
	v->a[75208] = sym__comment_word;
	v->a[75209] = sym_word;
	v->a[75210] = state(1029);
	v->a[75211] = 5;
	v->a[75212] = sym_arithmetic_expansion;
	v->a[75213] = sym_string;
	v->a[75214] = sym_simple_expansion;
	v->a[75215] = sym_expansion;
	v->a[75216] = sym_command_substitution;
	v->a[75217] = 11;
	v->a[75218] = actions(3);
	v->a[75219] = 1;
	small_parse_table_3761(v);
}

void	small_parse_table_3761(t_small_parse_table_array *v)
{
	v->a[75220] = sym_comment;
	v->a[75221] = actions(1778);
	v->a[75222] = 1;
	v->a[75223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75224] = actions(1780);
	v->a[75225] = 1;
	v->a[75226] = anon_sym_DOLLAR;
	v->a[75227] = actions(1782);
	v->a[75228] = 1;
	v->a[75229] = anon_sym_DQUOTE;
	v->a[75230] = actions(1784);
	v->a[75231] = 1;
	v->a[75232] = anon_sym_DOLLAR_LBRACE;
	v->a[75233] = actions(1786);
	v->a[75234] = 1;
	v->a[75235] = anon_sym_DOLLAR_LPAREN;
	v->a[75236] = actions(1788);
	v->a[75237] = 1;
	v->a[75238] = anon_sym_BQUOTE;
	v->a[75239] = actions(1790);
	small_parse_table_3762(v);
}

void	small_parse_table_3762(t_small_parse_table_array *v)
{
	v->a[75240] = 1;
	v->a[75241] = sym_extglob_pattern;
	v->a[75242] = state(2084);
	v->a[75243] = 2;
	v->a[75244] = sym_concatenation;
	v->a[75245] = sym__extglob_blob;
	v->a[75246] = actions(2784);
	v->a[75247] = 3;
	v->a[75248] = sym_raw_string;
	v->a[75249] = sym_number;
	v->a[75250] = sym_word;
	v->a[75251] = state(1998);
	v->a[75252] = 5;
	v->a[75253] = sym_arithmetic_expansion;
	v->a[75254] = sym_string;
	v->a[75255] = sym_simple_expansion;
	v->a[75256] = sym_expansion;
	v->a[75257] = sym_command_substitution;
	v->a[75258] = 10;
	v->a[75259] = actions(3);
	small_parse_table_3763(v);
}

void	small_parse_table_3763(t_small_parse_table_array *v)
{
	v->a[75260] = 1;
	v->a[75261] = sym_comment;
	v->a[75262] = actions(1637);
	v->a[75263] = 1;
	v->a[75264] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75265] = actions(1639);
	v->a[75266] = 1;
	v->a[75267] = anon_sym_DOLLAR;
	v->a[75268] = actions(1641);
	v->a[75269] = 1;
	v->a[75270] = anon_sym_DQUOTE;
	v->a[75271] = actions(1643);
	v->a[75272] = 1;
	v->a[75273] = anon_sym_DOLLAR_LBRACE;
	v->a[75274] = actions(1645);
	v->a[75275] = 1;
	v->a[75276] = anon_sym_DOLLAR_LPAREN;
	v->a[75277] = actions(1647);
	v->a[75278] = 1;
	v->a[75279] = anon_sym_BQUOTE;
	small_parse_table_3764(v);
}

void	small_parse_table_3764(t_small_parse_table_array *v)
{
	v->a[75280] = actions(2788);
	v->a[75281] = 1;
	v->a[75282] = sym__bare_dollar;
	v->a[75283] = actions(2786);
	v->a[75284] = 5;
	v->a[75285] = aux_sym_concatenation_token1;
	v->a[75286] = sym_raw_string;
	v->a[75287] = sym_number;
	v->a[75288] = sym__comment_word;
	v->a[75289] = sym_word;
	v->a[75290] = state(1580);
	v->a[75291] = 5;
	v->a[75292] = sym_arithmetic_expansion;
	v->a[75293] = sym_string;
	v->a[75294] = sym_simple_expansion;
	v->a[75295] = sym_expansion;
	v->a[75296] = sym_command_substitution;
	v->a[75297] = 12;
	v->a[75298] = actions(3);
	v->a[75299] = 1;
	small_parse_table_3765(v);
}

/* EOF small_parse_table_752.c */
