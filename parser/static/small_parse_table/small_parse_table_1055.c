/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1055.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5275(t_small_parse_table_array *v)
{
	v->a[105500] = sym_comment;
	v->a[105501] = actions(2154);
	v->a[105502] = 1;
	v->a[105503] = anon_sym_DOLLAR;
	v->a[105504] = actions(2160);
	v->a[105505] = 1;
	v->a[105506] = aux_sym_number_token1;
	v->a[105507] = actions(2162);
	v->a[105508] = 1;
	v->a[105509] = aux_sym_number_token2;
	v->a[105510] = actions(2166);
	v->a[105511] = 1;
	v->a[105512] = anon_sym_DOLLAR_LPAREN;
	v->a[105513] = actions(2174);
	v->a[105514] = 1;
	v->a[105515] = sym__brace_start;
	v->a[105516] = actions(3127);
	v->a[105517] = 1;
	v->a[105518] = sym_word;
	v->a[105519] = actions(5989);
	small_parse_table_5276(v);
}

void	small_parse_table_5276(t_small_parse_table_array *v)
{
	v->a[105520] = 1;
	v->a[105521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105522] = actions(5993);
	v->a[105523] = 1;
	v->a[105524] = anon_sym_DQUOTE;
	v->a[105525] = actions(5995);
	v->a[105526] = 1;
	v->a[105527] = anon_sym_DOLLAR_LBRACE;
	v->a[105528] = actions(5997);
	v->a[105529] = 1;
	v->a[105530] = anon_sym_BQUOTE;
	v->a[105531] = actions(5999);
	v->a[105532] = 1;
	v->a[105533] = anon_sym_DOLLAR_BQUOTE;
	v->a[105534] = actions(6075);
	v->a[105535] = 1;
	v->a[105536] = sym__special_character;
	v->a[105537] = state(1270);
	v->a[105538] = 1;
	v->a[105539] = aux_sym__literal_repeat1;
	small_parse_table_5277(v);
}

void	small_parse_table_5277(t_small_parse_table_array *v)
{
	v->a[105540] = actions(3131);
	v->a[105541] = 2;
	v->a[105542] = sym_test_operator;
	v->a[105543] = sym_raw_string;
	v->a[105544] = state(582);
	v->a[105545] = 2;
	v->a[105546] = sym_concatenation;
	v->a[105547] = aux_sym_for_statement_repeat1;
	v->a[105548] = state(1412);
	v->a[105549] = 7;
	v->a[105550] = sym_arithmetic_expansion;
	v->a[105551] = sym_brace_expression;
	v->a[105552] = sym_string;
	v->a[105553] = sym_number;
	v->a[105554] = sym_simple_expansion;
	v->a[105555] = sym_expansion;
	v->a[105556] = sym_command_substitution;
	v->a[105557] = 17;
	v->a[105558] = actions(57);
	v->a[105559] = 1;
	small_parse_table_5278(v);
}

void	small_parse_table_5278(t_small_parse_table_array *v)
{
	v->a[105560] = sym_comment;
	v->a[105561] = actions(2154);
	v->a[105562] = 1;
	v->a[105563] = anon_sym_DOLLAR;
	v->a[105564] = actions(2160);
	v->a[105565] = 1;
	v->a[105566] = aux_sym_number_token1;
	v->a[105567] = actions(2162);
	v->a[105568] = 1;
	v->a[105569] = aux_sym_number_token2;
	v->a[105570] = actions(2166);
	v->a[105571] = 1;
	v->a[105572] = anon_sym_DOLLAR_LPAREN;
	v->a[105573] = actions(2174);
	v->a[105574] = 1;
	v->a[105575] = sym__brace_start;
	v->a[105576] = actions(3127);
	v->a[105577] = 1;
	v->a[105578] = sym_word;
	v->a[105579] = actions(5989);
	small_parse_table_5279(v);
}

void	small_parse_table_5279(t_small_parse_table_array *v)
{
	v->a[105580] = 1;
	v->a[105581] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105582] = actions(5993);
	v->a[105583] = 1;
	v->a[105584] = anon_sym_DQUOTE;
	v->a[105585] = actions(5995);
	v->a[105586] = 1;
	v->a[105587] = anon_sym_DOLLAR_LBRACE;
	v->a[105588] = actions(5997);
	v->a[105589] = 1;
	v->a[105590] = anon_sym_BQUOTE;
	v->a[105591] = actions(5999);
	v->a[105592] = 1;
	v->a[105593] = anon_sym_DOLLAR_BQUOTE;
	v->a[105594] = actions(6075);
	v->a[105595] = 1;
	v->a[105596] = sym__special_character;
	v->a[105597] = state(1270);
	v->a[105598] = 1;
	v->a[105599] = aux_sym__literal_repeat1;
	small_parse_table_5280(v);
}

/* EOF small_parse_table_1055.c */
