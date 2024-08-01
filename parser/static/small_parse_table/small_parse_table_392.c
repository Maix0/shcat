/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_392.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1960(t_small_parse_table_array *v)
{
	v->a[39200] = anon_sym_SEMI;
	v->a[39201] = 11;
	v->a[39202] = actions(3);
	v->a[39203] = 1;
	v->a[39204] = sym_comment;
	v->a[39205] = actions(782);
	v->a[39206] = 1;
	v->a[39207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39208] = actions(784);
	v->a[39209] = 1;
	v->a[39210] = anon_sym_DOLLAR;
	v->a[39211] = actions(786);
	v->a[39212] = 1;
	v->a[39213] = anon_sym_DQUOTE;
	v->a[39214] = actions(788);
	v->a[39215] = 1;
	v->a[39216] = anon_sym_DOLLAR_LBRACE;
	v->a[39217] = actions(790);
	v->a[39218] = 1;
	v->a[39219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1961(v);
}

void	small_parse_table_1961(t_small_parse_table_array *v)
{
	v->a[39220] = actions(792);
	v->a[39221] = 1;
	v->a[39222] = anon_sym_BQUOTE;
	v->a[39223] = actions(794);
	v->a[39224] = 1;
	v->a[39225] = sym_extglob_pattern;
	v->a[39226] = state(1548);
	v->a[39227] = 2;
	v->a[39228] = sym_concatenation;
	v->a[39229] = sym__extglob_blob;
	v->a[39230] = actions(1810);
	v->a[39231] = 3;
	v->a[39232] = sym_raw_string;
	v->a[39233] = sym_number;
	v->a[39234] = sym_word;
	v->a[39235] = state(1460);
	v->a[39236] = 5;
	v->a[39237] = sym_arithmetic_expansion;
	v->a[39238] = sym_string;
	v->a[39239] = sym_simple_expansion;
	small_parse_table_1962(v);
}

void	small_parse_table_1962(t_small_parse_table_array *v)
{
	v->a[39240] = sym_expansion;
	v->a[39241] = sym_command_substitution;
	v->a[39242] = 10;
	v->a[39243] = actions(3);
	v->a[39244] = 1;
	v->a[39245] = sym_comment;
	v->a[39246] = actions(1144);
	v->a[39247] = 1;
	v->a[39248] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39249] = actions(1148);
	v->a[39250] = 1;
	v->a[39251] = anon_sym_DQUOTE;
	v->a[39252] = actions(1150);
	v->a[39253] = 1;
	v->a[39254] = anon_sym_DOLLAR_LBRACE;
	v->a[39255] = actions(1152);
	v->a[39256] = 1;
	v->a[39257] = anon_sym_DOLLAR_LPAREN;
	v->a[39258] = actions(1154);
	v->a[39259] = 1;
	small_parse_table_1963(v);
}

void	small_parse_table_1963(t_small_parse_table_array *v)
{
	v->a[39260] = anon_sym_BQUOTE;
	v->a[39261] = actions(1495);
	v->a[39262] = 1;
	v->a[39263] = sym__bare_dollar;
	v->a[39264] = actions(1812);
	v->a[39265] = 1;
	v->a[39266] = anon_sym_DOLLAR;
	v->a[39267] = actions(1493);
	v->a[39268] = 5;
	v->a[39269] = aux_sym_concatenation_token1;
	v->a[39270] = sym_raw_string;
	v->a[39271] = sym_number;
	v->a[39272] = sym__comment_word;
	v->a[39273] = sym_word;
	v->a[39274] = state(686);
	v->a[39275] = 5;
	v->a[39276] = sym_arithmetic_expansion;
	v->a[39277] = sym_string;
	v->a[39278] = sym_simple_expansion;
	v->a[39279] = sym_expansion;
	small_parse_table_1964(v);
}

void	small_parse_table_1964(t_small_parse_table_array *v)
{
	v->a[39280] = sym_command_substitution;
	v->a[39281] = 12;
	v->a[39282] = actions(3);
	v->a[39283] = 1;
	v->a[39284] = sym_comment;
	v->a[39285] = actions(1479);
	v->a[39286] = 1;
	v->a[39287] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39288] = actions(1481);
	v->a[39289] = 1;
	v->a[39290] = anon_sym_DOLLAR;
	v->a[39291] = actions(1483);
	v->a[39292] = 1;
	v->a[39293] = anon_sym_DQUOTE;
	v->a[39294] = actions(1485);
	v->a[39295] = 1;
	v->a[39296] = anon_sym_DOLLAR_LBRACE;
	v->a[39297] = actions(1487);
	v->a[39298] = 1;
	v->a[39299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1965(v);
}

/* EOF small_parse_table_392.c */
