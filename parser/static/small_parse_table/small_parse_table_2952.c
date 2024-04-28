/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2952.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14760(t_small_parse_table_array *v)
{
	v->a[295200] = actions(3);
	v->a[295201] = 1;
	v->a[295202] = sym_comment;
	v->a[295203] = actions(13060);
	v->a[295204] = 1;
	v->a[295205] = anon_sym_DOLLAR_LBRACK;
	v->a[295206] = actions(13066);
	v->a[295207] = 1;
	v->a[295208] = sym_string_content;
	v->a[295209] = actions(13068);
	v->a[295210] = 1;
	v->a[295211] = anon_sym_DOLLAR_LBRACE;
	v->a[295212] = actions(13070);
	v->a[295213] = 1;
	v->a[295214] = anon_sym_DOLLAR_LPAREN;
	v->a[295215] = actions(13072);
	v->a[295216] = 1;
	v->a[295217] = anon_sym_BQUOTE;
	v->a[295218] = actions(13074);
	v->a[295219] = 1;
	small_parse_table_14761(v);
}

void	small_parse_table_14761(t_small_parse_table_array *v)
{
	v->a[295220] = anon_sym_DOLLAR_BQUOTE;
	v->a[295221] = actions(13176);
	v->a[295222] = 1;
	v->a[295223] = anon_sym_DOLLAR;
	v->a[295224] = actions(13178);
	v->a[295225] = 1;
	v->a[295226] = anon_sym_DQUOTE;
	v->a[295227] = state(5768);
	v->a[295228] = 1;
	v->a[295229] = aux_sym_string_repeat1;
	v->a[295230] = actions(13058);
	v->a[295231] = 2;
	v->a[295232] = anon_sym_LPAREN_LPAREN;
	v->a[295233] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295234] = state(6127);
	v->a[295235] = 4;
	v->a[295236] = sym_arithmetic_expansion;
	v->a[295237] = sym_simple_expansion;
	v->a[295238] = sym_expansion;
	v->a[295239] = sym_command_substitution;
	small_parse_table_14762(v);
}

void	small_parse_table_14762(t_small_parse_table_array *v)
{
	v->a[295240] = 12;
	v->a[295241] = actions(3);
	v->a[295242] = 1;
	v->a[295243] = sym_comment;
	v->a[295244] = actions(13060);
	v->a[295245] = 1;
	v->a[295246] = anon_sym_DOLLAR_LBRACK;
	v->a[295247] = actions(13066);
	v->a[295248] = 1;
	v->a[295249] = sym_string_content;
	v->a[295250] = actions(13068);
	v->a[295251] = 1;
	v->a[295252] = anon_sym_DOLLAR_LBRACE;
	v->a[295253] = actions(13070);
	v->a[295254] = 1;
	v->a[295255] = anon_sym_DOLLAR_LPAREN;
	v->a[295256] = actions(13072);
	v->a[295257] = 1;
	v->a[295258] = anon_sym_BQUOTE;
	v->a[295259] = actions(13074);
	small_parse_table_14763(v);
}

void	small_parse_table_14763(t_small_parse_table_array *v)
{
	v->a[295260] = 1;
	v->a[295261] = anon_sym_DOLLAR_BQUOTE;
	v->a[295262] = actions(13180);
	v->a[295263] = 1;
	v->a[295264] = anon_sym_DOLLAR;
	v->a[295265] = actions(13182);
	v->a[295266] = 1;
	v->a[295267] = anon_sym_DQUOTE;
	v->a[295268] = state(5728);
	v->a[295269] = 1;
	v->a[295270] = aux_sym_string_repeat1;
	v->a[295271] = actions(13058);
	v->a[295272] = 2;
	v->a[295273] = anon_sym_LPAREN_LPAREN;
	v->a[295274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295275] = state(6127);
	v->a[295276] = 4;
	v->a[295277] = sym_arithmetic_expansion;
	v->a[295278] = sym_simple_expansion;
	v->a[295279] = sym_expansion;
	small_parse_table_14764(v);
}

void	small_parse_table_14764(t_small_parse_table_array *v)
{
	v->a[295280] = sym_command_substitution;
	v->a[295281] = 12;
	v->a[295282] = actions(3);
	v->a[295283] = 1;
	v->a[295284] = sym_comment;
	v->a[295285] = actions(13060);
	v->a[295286] = 1;
	v->a[295287] = anon_sym_DOLLAR_LBRACK;
	v->a[295288] = actions(13066);
	v->a[295289] = 1;
	v->a[295290] = sym_string_content;
	v->a[295291] = actions(13068);
	v->a[295292] = 1;
	v->a[295293] = anon_sym_DOLLAR_LBRACE;
	v->a[295294] = actions(13070);
	v->a[295295] = 1;
	v->a[295296] = anon_sym_DOLLAR_LPAREN;
	v->a[295297] = actions(13072);
	v->a[295298] = 1;
	v->a[295299] = anon_sym_BQUOTE;
	small_parse_table_14765(v);
}

/* EOF small_parse_table_2952.c */
