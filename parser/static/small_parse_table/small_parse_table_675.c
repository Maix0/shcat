/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_675.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3375(t_small_parse_table_array *v)
{
	v->a[67500] = sym_simple_expansion;
	v->a[67501] = sym_expansion;
	v->a[67502] = sym_command_substitution;
	v->a[67503] = 10;
	v->a[67504] = actions(3);
	v->a[67505] = 1;
	v->a[67506] = sym_comment;
	v->a[67507] = actions(871);
	v->a[67508] = 1;
	v->a[67509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67510] = actions(875);
	v->a[67511] = 1;
	v->a[67512] = anon_sym_DQUOTE;
	v->a[67513] = actions(877);
	v->a[67514] = 1;
	v->a[67515] = anon_sym_DOLLAR_LBRACE;
	v->a[67516] = actions(879);
	v->a[67517] = 1;
	v->a[67518] = anon_sym_DOLLAR_LPAREN;
	v->a[67519] = actions(881);
	small_parse_table_3376(v);
}

void	small_parse_table_3376(t_small_parse_table_array *v)
{
	v->a[67520] = 1;
	v->a[67521] = anon_sym_BQUOTE;
	v->a[67522] = actions(2366);
	v->a[67523] = 1;
	v->a[67524] = sym__bare_dollar;
	v->a[67525] = actions(2600);
	v->a[67526] = 1;
	v->a[67527] = anon_sym_DOLLAR;
	v->a[67528] = actions(2362);
	v->a[67529] = 5;
	v->a[67530] = aux_sym_concatenation_token1;
	v->a[67531] = sym_raw_string;
	v->a[67532] = sym_number;
	v->a[67533] = sym__comment_word;
	v->a[67534] = sym_word;
	v->a[67535] = state(589);
	v->a[67536] = 5;
	v->a[67537] = sym_arithmetic_expansion;
	v->a[67538] = sym_string;
	v->a[67539] = sym_simple_expansion;
	small_parse_table_3377(v);
}

void	small_parse_table_3377(t_small_parse_table_array *v)
{
	v->a[67540] = sym_expansion;
	v->a[67541] = sym_command_substitution;
	v->a[67542] = 10;
	v->a[67543] = actions(3);
	v->a[67544] = 1;
	v->a[67545] = sym_comment;
	v->a[67546] = actions(2446);
	v->a[67547] = 1;
	v->a[67548] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67549] = actions(2450);
	v->a[67550] = 1;
	v->a[67551] = anon_sym_DQUOTE;
	v->a[67552] = actions(2452);
	v->a[67553] = 1;
	v->a[67554] = anon_sym_DOLLAR_LBRACE;
	v->a[67555] = actions(2454);
	v->a[67556] = 1;
	v->a[67557] = anon_sym_DOLLAR_LPAREN;
	v->a[67558] = actions(2456);
	v->a[67559] = 1;
	small_parse_table_3378(v);
}

void	small_parse_table_3378(t_small_parse_table_array *v)
{
	v->a[67560] = anon_sym_BQUOTE;
	v->a[67561] = actions(2458);
	v->a[67562] = 1;
	v->a[67563] = sym__bare_dollar;
	v->a[67564] = actions(2602);
	v->a[67565] = 1;
	v->a[67566] = anon_sym_DOLLAR;
	v->a[67567] = actions(2444);
	v->a[67568] = 5;
	v->a[67569] = aux_sym_concatenation_token1;
	v->a[67570] = sym_raw_string;
	v->a[67571] = sym_number;
	v->a[67572] = sym__comment_word;
	v->a[67573] = sym_word;
	v->a[67574] = state(538);
	v->a[67575] = 5;
	v->a[67576] = sym_arithmetic_expansion;
	v->a[67577] = sym_string;
	v->a[67578] = sym_simple_expansion;
	v->a[67579] = sym_expansion;
	small_parse_table_3379(v);
}

void	small_parse_table_3379(t_small_parse_table_array *v)
{
	v->a[67580] = sym_command_substitution;
	v->a[67581] = 10;
	v->a[67582] = actions(3);
	v->a[67583] = 1;
	v->a[67584] = sym_comment;
	v->a[67585] = actions(2490);
	v->a[67586] = 1;
	v->a[67587] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67588] = actions(2492);
	v->a[67589] = 1;
	v->a[67590] = anon_sym_DOLLAR;
	v->a[67591] = actions(2494);
	v->a[67592] = 1;
	v->a[67593] = anon_sym_DQUOTE;
	v->a[67594] = actions(2496);
	v->a[67595] = 1;
	v->a[67596] = anon_sym_DOLLAR_LBRACE;
	v->a[67597] = actions(2498);
	v->a[67598] = 1;
	v->a[67599] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3380(v);
}

/* EOF small_parse_table_675.c */
