/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3002.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15010(t_small_parse_table_array *v)
{
	v->a[300200] = aux_sym_string_repeat1;
	v->a[300201] = actions(13058);
	v->a[300202] = 2;
	v->a[300203] = anon_sym_LPAREN_LPAREN;
	v->a[300204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300205] = state(6127);
	v->a[300206] = 4;
	v->a[300207] = sym_arithmetic_expansion;
	v->a[300208] = sym_simple_expansion;
	v->a[300209] = sym_expansion;
	v->a[300210] = sym_command_substitution;
	v->a[300211] = 12;
	v->a[300212] = actions(3);
	v->a[300213] = 1;
	v->a[300214] = sym_comment;
	v->a[300215] = actions(13060);
	v->a[300216] = 1;
	v->a[300217] = anon_sym_DOLLAR_LBRACK;
	v->a[300218] = actions(13066);
	v->a[300219] = 1;
	small_parse_table_15011(v);
}

void	small_parse_table_15011(t_small_parse_table_array *v)
{
	v->a[300220] = sym_string_content;
	v->a[300221] = actions(13068);
	v->a[300222] = 1;
	v->a[300223] = anon_sym_DOLLAR_LBRACE;
	v->a[300224] = actions(13070);
	v->a[300225] = 1;
	v->a[300226] = anon_sym_DOLLAR_LPAREN;
	v->a[300227] = actions(13072);
	v->a[300228] = 1;
	v->a[300229] = anon_sym_BQUOTE;
	v->a[300230] = actions(13074);
	v->a[300231] = 1;
	v->a[300232] = anon_sym_DOLLAR_BQUOTE;
	v->a[300233] = actions(13678);
	v->a[300234] = 1;
	v->a[300235] = anon_sym_DOLLAR;
	v->a[300236] = actions(13680);
	v->a[300237] = 1;
	v->a[300238] = anon_sym_DQUOTE;
	v->a[300239] = state(5717);
	small_parse_table_15012(v);
}

void	small_parse_table_15012(t_small_parse_table_array *v)
{
	v->a[300240] = 1;
	v->a[300241] = aux_sym_string_repeat1;
	v->a[300242] = actions(13058);
	v->a[300243] = 2;
	v->a[300244] = anon_sym_LPAREN_LPAREN;
	v->a[300245] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300246] = state(6127);
	v->a[300247] = 4;
	v->a[300248] = sym_arithmetic_expansion;
	v->a[300249] = sym_simple_expansion;
	v->a[300250] = sym_expansion;
	v->a[300251] = sym_command_substitution;
	v->a[300252] = 12;
	v->a[300253] = actions(3);
	v->a[300254] = 1;
	v->a[300255] = sym_comment;
	v->a[300256] = actions(13060);
	v->a[300257] = 1;
	v->a[300258] = anon_sym_DOLLAR_LBRACK;
	v->a[300259] = actions(13066);
	small_parse_table_15013(v);
}

void	small_parse_table_15013(t_small_parse_table_array *v)
{
	v->a[300260] = 1;
	v->a[300261] = sym_string_content;
	v->a[300262] = actions(13068);
	v->a[300263] = 1;
	v->a[300264] = anon_sym_DOLLAR_LBRACE;
	v->a[300265] = actions(13070);
	v->a[300266] = 1;
	v->a[300267] = anon_sym_DOLLAR_LPAREN;
	v->a[300268] = actions(13072);
	v->a[300269] = 1;
	v->a[300270] = anon_sym_BQUOTE;
	v->a[300271] = actions(13074);
	v->a[300272] = 1;
	v->a[300273] = anon_sym_DOLLAR_BQUOTE;
	v->a[300274] = actions(13682);
	v->a[300275] = 1;
	v->a[300276] = anon_sym_DOLLAR;
	v->a[300277] = actions(13684);
	v->a[300278] = 1;
	v->a[300279] = anon_sym_DQUOTE;
	small_parse_table_15014(v);
}

void	small_parse_table_15014(t_small_parse_table_array *v)
{
	v->a[300280] = state(5768);
	v->a[300281] = 1;
	v->a[300282] = aux_sym_string_repeat1;
	v->a[300283] = actions(13058);
	v->a[300284] = 2;
	v->a[300285] = anon_sym_LPAREN_LPAREN;
	v->a[300286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300287] = state(6127);
	v->a[300288] = 4;
	v->a[300289] = sym_arithmetic_expansion;
	v->a[300290] = sym_simple_expansion;
	v->a[300291] = sym_expansion;
	v->a[300292] = sym_command_substitution;
	v->a[300293] = 12;
	v->a[300294] = actions(3);
	v->a[300295] = 1;
	v->a[300296] = sym_comment;
	v->a[300297] = actions(13060);
	v->a[300298] = 1;
	v->a[300299] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_15015(v);
}

/* EOF small_parse_table_3002.c */
