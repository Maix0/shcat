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
	v->a[80501] = actions(909);
	v->a[80502] = 1;
	v->a[80503] = anon_sym_DQUOTE;
	v->a[80504] = actions(911);
	v->a[80505] = 1;
	v->a[80506] = aux_sym_number_token1;
	v->a[80507] = actions(913);
	v->a[80508] = 1;
	v->a[80509] = aux_sym_number_token2;
	v->a[80510] = actions(915);
	v->a[80511] = 1;
	v->a[80512] = anon_sym_DOLLAR_LBRACE;
	v->a[80513] = actions(917);
	v->a[80514] = 1;
	v->a[80515] = anon_sym_DOLLAR_LPAREN;
	v->a[80516] = actions(919);
	v->a[80517] = 1;
	v->a[80518] = anon_sym_BQUOTE;
	v->a[80519] = actions(3077);
	small_parse_table_4026(v);
}

void	small_parse_table_4026(t_small_parse_table_array *v)
{
	v->a[80520] = 1;
	v->a[80521] = sym__bare_dollar;
	v->a[80522] = actions(3334);
	v->a[80523] = 1;
	v->a[80524] = anon_sym_DOLLAR;
	v->a[80525] = actions(3075);
	v->a[80526] = 3;
	v->a[80527] = sym_raw_string;
	v->a[80528] = sym__comment_word;
	v->a[80529] = sym_word;
	v->a[80530] = state(981);
	v->a[80531] = 6;
	v->a[80532] = sym_arithmetic_expansion;
	v->a[80533] = sym_string;
	v->a[80534] = sym_number;
	v->a[80535] = sym_simple_expansion;
	v->a[80536] = sym_expansion;
	v->a[80537] = sym_command_substitution;
	v->a[80538] = 12;
	v->a[80539] = actions(3);
	small_parse_table_4027(v);
}

void	small_parse_table_4027(t_small_parse_table_array *v)
{
	v->a[80540] = 1;
	v->a[80541] = sym_comment;
	v->a[80542] = actions(933);
	v->a[80543] = 1;
	v->a[80544] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80545] = actions(937);
	v->a[80546] = 1;
	v->a[80547] = anon_sym_DQUOTE;
	v->a[80548] = actions(939);
	v->a[80549] = 1;
	v->a[80550] = aux_sym_number_token1;
	v->a[80551] = actions(941);
	v->a[80552] = 1;
	v->a[80553] = aux_sym_number_token2;
	v->a[80554] = actions(943);
	v->a[80555] = 1;
	v->a[80556] = anon_sym_DOLLAR_LBRACE;
	v->a[80557] = actions(945);
	v->a[80558] = 1;
	v->a[80559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4028(v);
}

void	small_parse_table_4028(t_small_parse_table_array *v)
{
	v->a[80560] = actions(947);
	v->a[80561] = 1;
	v->a[80562] = anon_sym_BQUOTE;
	v->a[80563] = actions(3288);
	v->a[80564] = 1;
	v->a[80565] = sym__bare_dollar;
	v->a[80566] = actions(3336);
	v->a[80567] = 1;
	v->a[80568] = anon_sym_DOLLAR;
	v->a[80569] = actions(3284);
	v->a[80570] = 3;
	v->a[80571] = sym_raw_string;
	v->a[80572] = sym__comment_word;
	v->a[80573] = sym_word;
	v->a[80574] = state(1552);
	v->a[80575] = 6;
	v->a[80576] = sym_arithmetic_expansion;
	v->a[80577] = sym_string;
	v->a[80578] = sym_number;
	v->a[80579] = sym_simple_expansion;
	small_parse_table_4029(v);
}

void	small_parse_table_4029(t_small_parse_table_array *v)
{
	v->a[80580] = sym_expansion;
	v->a[80581] = sym_command_substitution;
	v->a[80582] = 12;
	v->a[80583] = actions(3);
	v->a[80584] = 1;
	v->a[80585] = sym_comment;
	v->a[80586] = actions(485);
	v->a[80587] = 1;
	v->a[80588] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80589] = actions(489);
	v->a[80590] = 1;
	v->a[80591] = anon_sym_DQUOTE;
	v->a[80592] = actions(491);
	v->a[80593] = 1;
	v->a[80594] = aux_sym_number_token1;
	v->a[80595] = actions(493);
	v->a[80596] = 1;
	v->a[80597] = aux_sym_number_token2;
	v->a[80598] = actions(495);
	v->a[80599] = 1;
	small_parse_table_4030(v);
}

/* EOF small_parse_table_805.c */
