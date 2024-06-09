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
	v->a[67500] = actions(2119);
	v->a[67501] = 1;
	v->a[67502] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67503] = actions(2121);
	v->a[67504] = 1;
	v->a[67505] = anon_sym_DOLLAR;
	v->a[67506] = actions(2123);
	v->a[67507] = 1;
	v->a[67508] = anon_sym_DQUOTE;
	v->a[67509] = actions(2125);
	v->a[67510] = 1;
	v->a[67511] = aux_sym_number_token1;
	v->a[67512] = actions(2127);
	v->a[67513] = 1;
	v->a[67514] = aux_sym_number_token2;
	v->a[67515] = actions(2129);
	v->a[67516] = 1;
	v->a[67517] = anon_sym_DOLLAR_LBRACE;
	v->a[67518] = actions(2131);
	v->a[67519] = 1;
	small_parse_table_3376(v);
}

void	small_parse_table_3376(t_small_parse_table_array *v)
{
	v->a[67520] = anon_sym_DOLLAR_LPAREN;
	v->a[67521] = actions(2133);
	v->a[67522] = 1;
	v->a[67523] = anon_sym_BQUOTE;
	v->a[67524] = actions(2135);
	v->a[67525] = 1;
	v->a[67526] = sym_extglob_pattern;
	v->a[67527] = state(1241);
	v->a[67528] = 1;
	v->a[67529] = aux_sym_case_statement_repeat1;
	v->a[67530] = state(1786);
	v->a[67531] = 1;
	v->a[67532] = sym_case_item;
	v->a[67533] = state(2124);
	v->a[67534] = 1;
	v->a[67535] = sym__case_item_last;
	v->a[67536] = actions(2111);
	v->a[67537] = 2;
	v->a[67538] = sym_raw_string;
	v->a[67539] = sym_word;
	small_parse_table_3377(v);
}

void	small_parse_table_3377(t_small_parse_table_array *v)
{
	v->a[67540] = state(2016);
	v->a[67541] = 2;
	v->a[67542] = sym_concatenation;
	v->a[67543] = sym__extglob_blob;
	v->a[67544] = state(1896);
	v->a[67545] = 6;
	v->a[67546] = sym_arithmetic_expansion;
	v->a[67547] = sym_string;
	v->a[67548] = sym_number;
	v->a[67549] = sym_simple_expansion;
	v->a[67550] = sym_expansion;
	v->a[67551] = sym_command_substitution;
	v->a[67552] = 17;
	v->a[67553] = actions(3);
	v->a[67554] = 1;
	v->a[67555] = sym_comment;
	v->a[67556] = actions(2115);
	v->a[67557] = 1;
	v->a[67558] = anon_sym_LPAREN;
	v->a[67559] = actions(2119);
	small_parse_table_3378(v);
}

void	small_parse_table_3378(t_small_parse_table_array *v)
{
	v->a[67560] = 1;
	v->a[67561] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67562] = actions(2121);
	v->a[67563] = 1;
	v->a[67564] = anon_sym_DOLLAR;
	v->a[67565] = actions(2123);
	v->a[67566] = 1;
	v->a[67567] = anon_sym_DQUOTE;
	v->a[67568] = actions(2125);
	v->a[67569] = 1;
	v->a[67570] = aux_sym_number_token1;
	v->a[67571] = actions(2127);
	v->a[67572] = 1;
	v->a[67573] = aux_sym_number_token2;
	v->a[67574] = actions(2129);
	v->a[67575] = 1;
	v->a[67576] = anon_sym_DOLLAR_LBRACE;
	v->a[67577] = actions(2131);
	v->a[67578] = 1;
	v->a[67579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3379(v);
}

void	small_parse_table_3379(t_small_parse_table_array *v)
{
	v->a[67580] = actions(2133);
	v->a[67581] = 1;
	v->a[67582] = anon_sym_BQUOTE;
	v->a[67583] = actions(2135);
	v->a[67584] = 1;
	v->a[67585] = sym_extglob_pattern;
	v->a[67586] = state(1241);
	v->a[67587] = 1;
	v->a[67588] = aux_sym_case_statement_repeat1;
	v->a[67589] = state(1786);
	v->a[67590] = 1;
	v->a[67591] = sym_case_item;
	v->a[67592] = state(2081);
	v->a[67593] = 1;
	v->a[67594] = sym__case_item_last;
	v->a[67595] = actions(2111);
	v->a[67596] = 2;
	v->a[67597] = sym_raw_string;
	v->a[67598] = sym_word;
	v->a[67599] = state(2016);
	small_parse_table_3380(v);
}

/* EOF small_parse_table_675.c */
