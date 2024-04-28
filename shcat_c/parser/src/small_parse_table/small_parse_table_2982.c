/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2982.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14910(t_small_parse_table_array *v)
{
	v->a[298200] = sym_expansion;
	v->a[298201] = sym_command_substitution;
	v->a[298202] = 12;
	v->a[298203] = actions(3);
	v->a[298204] = 1;
	v->a[298205] = sym_comment;
	v->a[298206] = actions(13060);
	v->a[298207] = 1;
	v->a[298208] = anon_sym_DOLLAR_LBRACK;
	v->a[298209] = actions(13066);
	v->a[298210] = 1;
	v->a[298211] = sym_string_content;
	v->a[298212] = actions(13068);
	v->a[298213] = 1;
	v->a[298214] = anon_sym_DOLLAR_LBRACE;
	v->a[298215] = actions(13070);
	v->a[298216] = 1;
	v->a[298217] = anon_sym_DOLLAR_LPAREN;
	v->a[298218] = actions(13072);
	v->a[298219] = 1;
	small_parse_table_14911(v);
}

void	small_parse_table_14911(t_small_parse_table_array *v)
{
	v->a[298220] = anon_sym_BQUOTE;
	v->a[298221] = actions(13074);
	v->a[298222] = 1;
	v->a[298223] = anon_sym_DOLLAR_BQUOTE;
	v->a[298224] = actions(13482);
	v->a[298225] = 1;
	v->a[298226] = anon_sym_DOLLAR;
	v->a[298227] = actions(13484);
	v->a[298228] = 1;
	v->a[298229] = anon_sym_DQUOTE;
	v->a[298230] = state(5768);
	v->a[298231] = 1;
	v->a[298232] = aux_sym_string_repeat1;
	v->a[298233] = actions(13058);
	v->a[298234] = 2;
	v->a[298235] = anon_sym_LPAREN_LPAREN;
	v->a[298236] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[298237] = state(6127);
	v->a[298238] = 4;
	v->a[298239] = sym_arithmetic_expansion;
	small_parse_table_14912(v);
}

void	small_parse_table_14912(t_small_parse_table_array *v)
{
	v->a[298240] = sym_simple_expansion;
	v->a[298241] = sym_expansion;
	v->a[298242] = sym_command_substitution;
	v->a[298243] = 12;
	v->a[298244] = actions(3);
	v->a[298245] = 1;
	v->a[298246] = sym_comment;
	v->a[298247] = actions(13060);
	v->a[298248] = 1;
	v->a[298249] = anon_sym_DOLLAR_LBRACK;
	v->a[298250] = actions(13066);
	v->a[298251] = 1;
	v->a[298252] = sym_string_content;
	v->a[298253] = actions(13068);
	v->a[298254] = 1;
	v->a[298255] = anon_sym_DOLLAR_LBRACE;
	v->a[298256] = actions(13070);
	v->a[298257] = 1;
	v->a[298258] = anon_sym_DOLLAR_LPAREN;
	v->a[298259] = actions(13072);
	small_parse_table_14913(v);
}

void	small_parse_table_14913(t_small_parse_table_array *v)
{
	v->a[298260] = 1;
	v->a[298261] = anon_sym_BQUOTE;
	v->a[298262] = actions(13074);
	v->a[298263] = 1;
	v->a[298264] = anon_sym_DOLLAR_BQUOTE;
	v->a[298265] = actions(13486);
	v->a[298266] = 1;
	v->a[298267] = anon_sym_DOLLAR;
	v->a[298268] = actions(13488);
	v->a[298269] = 1;
	v->a[298270] = anon_sym_DQUOTE;
	v->a[298271] = state(5802);
	v->a[298272] = 1;
	v->a[298273] = aux_sym_string_repeat1;
	v->a[298274] = actions(13058);
	v->a[298275] = 2;
	v->a[298276] = anon_sym_LPAREN_LPAREN;
	v->a[298277] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[298278] = state(6127);
	v->a[298279] = 4;
	small_parse_table_14914(v);
}

void	small_parse_table_14914(t_small_parse_table_array *v)
{
	v->a[298280] = sym_arithmetic_expansion;
	v->a[298281] = sym_simple_expansion;
	v->a[298282] = sym_expansion;
	v->a[298283] = sym_command_substitution;
	v->a[298284] = 12;
	v->a[298285] = actions(3);
	v->a[298286] = 1;
	v->a[298287] = sym_comment;
	v->a[298288] = actions(13060);
	v->a[298289] = 1;
	v->a[298290] = anon_sym_DOLLAR_LBRACK;
	v->a[298291] = actions(13066);
	v->a[298292] = 1;
	v->a[298293] = sym_string_content;
	v->a[298294] = actions(13068);
	v->a[298295] = 1;
	v->a[298296] = anon_sym_DOLLAR_LBRACE;
	v->a[298297] = actions(13070);
	v->a[298298] = 1;
	v->a[298299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_14915(v);
}

/* EOF small_parse_table_2982.c */
