/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_805.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4025(t_small_parse_table_array *v)
{
	v->a[80500] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80501] = actions(2703);
	v->a[80502] = 1;
	v->a[80503] = anon_sym_DOLLAR;
	v->a[80504] = actions(2705);
	v->a[80505] = 1;
	v->a[80506] = anon_sym_DQUOTE;
	v->a[80507] = actions(2707);
	v->a[80508] = 1;
	v->a[80509] = anon_sym_DOLLAR_LBRACE;
	v->a[80510] = actions(2709);
	v->a[80511] = 1;
	v->a[80512] = anon_sym_DOLLAR_LPAREN;
	v->a[80513] = actions(2711);
	v->a[80514] = 1;
	v->a[80515] = anon_sym_BQUOTE;
	v->a[80516] = actions(2833);
	v->a[80517] = 1;
	v->a[80518] = sym__bare_dollar;
	v->a[80519] = actions(2829);
	small_parse_table_4026(v);
}

void	small_parse_table_4026(t_small_parse_table_array *v)
{
	v->a[80520] = 5;
	v->a[80521] = aux_sym_concatenation_token1;
	v->a[80522] = sym_raw_string;
	v->a[80523] = sym_number;
	v->a[80524] = sym__comment_word;
	v->a[80525] = sym_word;
	v->a[80526] = state(1436);
	v->a[80527] = 5;
	v->a[80528] = sym_arithmetic_expansion;
	v->a[80529] = sym_string;
	v->a[80530] = sym_simple_expansion;
	v->a[80531] = sym_expansion;
	v->a[80532] = sym_command_substitution;
	v->a[80533] = 11;
	v->a[80534] = actions(3);
	v->a[80535] = 1;
	v->a[80536] = sym_comment;
	v->a[80537] = actions(1883);
	v->a[80538] = 1;
	v->a[80539] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4027(v);
}

void	small_parse_table_4027(t_small_parse_table_array *v)
{
	v->a[80540] = actions(1885);
	v->a[80541] = 1;
	v->a[80542] = anon_sym_DOLLAR;
	v->a[80543] = actions(1887);
	v->a[80544] = 1;
	v->a[80545] = anon_sym_DQUOTE;
	v->a[80546] = actions(1889);
	v->a[80547] = 1;
	v->a[80548] = anon_sym_DOLLAR_LBRACE;
	v->a[80549] = actions(1891);
	v->a[80550] = 1;
	v->a[80551] = anon_sym_DOLLAR_LPAREN;
	v->a[80552] = actions(1893);
	v->a[80553] = 1;
	v->a[80554] = anon_sym_BQUOTE;
	v->a[80555] = actions(1895);
	v->a[80556] = 1;
	v->a[80557] = sym_extglob_pattern;
	v->a[80558] = state(2103);
	v->a[80559] = 2;
	small_parse_table_4028(v);
}

void	small_parse_table_4028(t_small_parse_table_array *v)
{
	v->a[80560] = sym_concatenation;
	v->a[80561] = sym__extglob_blob;
	v->a[80562] = actions(3007);
	v->a[80563] = 3;
	v->a[80564] = sym_raw_string;
	v->a[80565] = sym_number;
	v->a[80566] = sym_word;
	v->a[80567] = state(2037);
	v->a[80568] = 5;
	v->a[80569] = sym_arithmetic_expansion;
	v->a[80570] = sym_string;
	v->a[80571] = sym_simple_expansion;
	v->a[80572] = sym_expansion;
	v->a[80573] = sym_command_substitution;
	v->a[80574] = 10;
	v->a[80575] = actions(3);
	v->a[80576] = 1;
	v->a[80577] = sym_comment;
	v->a[80578] = actions(904);
	v->a[80579] = 1;
	small_parse_table_4029(v);
}

void	small_parse_table_4029(t_small_parse_table_array *v)
{
	v->a[80580] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80581] = actions(906);
	v->a[80582] = 1;
	v->a[80583] = anon_sym_DOLLAR;
	v->a[80584] = actions(908);
	v->a[80585] = 1;
	v->a[80586] = anon_sym_DQUOTE;
	v->a[80587] = actions(910);
	v->a[80588] = 1;
	v->a[80589] = anon_sym_DOLLAR_LBRACE;
	v->a[80590] = actions(912);
	v->a[80591] = 1;
	v->a[80592] = anon_sym_DOLLAR_LPAREN;
	v->a[80593] = actions(914);
	v->a[80594] = 1;
	v->a[80595] = anon_sym_BQUOTE;
	v->a[80596] = actions(2827);
	v->a[80597] = 1;
	v->a[80598] = sym__bare_dollar;
	v->a[80599] = actions(2823);
	small_parse_table_4030(v);
}

/* EOF small_parse_table_805.c */
