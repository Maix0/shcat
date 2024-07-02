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
	v->a[67500] = actions(1071);
	v->a[67501] = 1;
	v->a[67502] = anon_sym_DQUOTE;
	v->a[67503] = actions(1073);
	v->a[67504] = 1;
	v->a[67505] = anon_sym_DOLLAR_LBRACE;
	v->a[67506] = actions(1075);
	v->a[67507] = 1;
	v->a[67508] = anon_sym_DOLLAR_LPAREN;
	v->a[67509] = actions(1077);
	v->a[67510] = 1;
	v->a[67511] = anon_sym_BQUOTE;
	v->a[67512] = actions(2606);
	v->a[67513] = 1;
	v->a[67514] = aux_sym_heredoc_redirect_token1;
	v->a[67515] = state(1331);
	v->a[67516] = 1;
	v->a[67517] = aux_sym__heredoc_command;
	v->a[67518] = state(1725);
	v->a[67519] = 1;
	small_parse_table_3376(v);
}

void	small_parse_table_3376(t_small_parse_table_array *v)
{
	v->a[67520] = sym_concatenation;
	v->a[67521] = actions(1057);
	v->a[67522] = 3;
	v->a[67523] = sym_raw_string;
	v->a[67524] = sym_number;
	v->a[67525] = sym_word;
	v->a[67526] = state(1589);
	v->a[67527] = 5;
	v->a[67528] = sym_arithmetic_expansion;
	v->a[67529] = sym_string;
	v->a[67530] = sym_simple_expansion;
	v->a[67531] = sym_expansion;
	v->a[67532] = sym_command_substitution;
	v->a[67533] = 10;
	v->a[67534] = actions(3);
	v->a[67535] = 1;
	v->a[67536] = sym_comment;
	v->a[67537] = actions(2426);
	v->a[67538] = 1;
	v->a[67539] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3377(v);
}

void	small_parse_table_3377(t_small_parse_table_array *v)
{
	v->a[67540] = actions(2430);
	v->a[67541] = 1;
	v->a[67542] = anon_sym_DQUOTE;
	v->a[67543] = actions(2432);
	v->a[67544] = 1;
	v->a[67545] = anon_sym_DOLLAR_LBRACE;
	v->a[67546] = actions(2434);
	v->a[67547] = 1;
	v->a[67548] = anon_sym_DOLLAR_LPAREN;
	v->a[67549] = actions(2436);
	v->a[67550] = 1;
	v->a[67551] = anon_sym_BQUOTE;
	v->a[67552] = actions(2610);
	v->a[67553] = 1;
	v->a[67554] = anon_sym_DOLLAR;
	v->a[67555] = actions(2612);
	v->a[67556] = 1;
	v->a[67557] = sym__bare_dollar;
	v->a[67558] = actions(2608);
	v->a[67559] = 5;
	small_parse_table_3378(v);
}

void	small_parse_table_3378(t_small_parse_table_array *v)
{
	v->a[67560] = aux_sym_concatenation_token1;
	v->a[67561] = sym_raw_string;
	v->a[67562] = sym_number;
	v->a[67563] = sym__comment_word;
	v->a[67564] = sym_word;
	v->a[67565] = state(1425);
	v->a[67566] = 5;
	v->a[67567] = sym_arithmetic_expansion;
	v->a[67568] = sym_string;
	v->a[67569] = sym_simple_expansion;
	v->a[67570] = sym_expansion;
	v->a[67571] = sym_command_substitution;
	v->a[67572] = 12;
	v->a[67573] = actions(3);
	v->a[67574] = 1;
	v->a[67575] = sym_comment;
	v->a[67576] = actions(2616);
	v->a[67577] = 1;
	v->a[67578] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67579] = actions(2618);
	small_parse_table_3379(v);
}

void	small_parse_table_3379(t_small_parse_table_array *v)
{
	v->a[67580] = 1;
	v->a[67581] = anon_sym_DOLLAR;
	v->a[67582] = actions(2620);
	v->a[67583] = 1;
	v->a[67584] = anon_sym_DQUOTE;
	v->a[67585] = actions(2622);
	v->a[67586] = 1;
	v->a[67587] = anon_sym_DOLLAR_LBRACE;
	v->a[67588] = actions(2624);
	v->a[67589] = 1;
	v->a[67590] = anon_sym_DOLLAR_LPAREN;
	v->a[67591] = actions(2626);
	v->a[67592] = 1;
	v->a[67593] = anon_sym_BQUOTE;
	v->a[67594] = actions(2628);
	v->a[67595] = 1;
	v->a[67596] = sym__comment_word;
	v->a[67597] = actions(2630);
	v->a[67598] = 1;
	v->a[67599] = sym__empty_value;
	small_parse_table_3380(v);
}

/* EOF small_parse_table_675.c */
