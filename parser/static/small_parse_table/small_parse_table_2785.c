/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2785.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13925(t_small_parse_table_array *v)
{
	v->a[278500] = anon_sym_GT_AMP_DASH;
	v->a[278501] = anon_sym_LT_LT_DASH;
	v->a[278502] = 22;
	v->a[278503] = actions(3);
	v->a[278504] = 1;
	v->a[278505] = sym_comment;
	v->a[278506] = actions(7793);
	v->a[278507] = 1;
	v->a[278508] = aux_sym_number_token1;
	v->a[278509] = actions(7795);
	v->a[278510] = 1;
	v->a[278511] = aux_sym_number_token2;
	v->a[278512] = actions(12543);
	v->a[278513] = 1;
	v->a[278514] = anon_sym_LPAREN;
	v->a[278515] = actions(12545);
	v->a[278516] = 1;
	v->a[278517] = aux_sym_heredoc_redirect_token1;
	v->a[278518] = actions(12547);
	v->a[278519] = 1;
	small_parse_table_13926(v);
}

void	small_parse_table_13926(t_small_parse_table_array *v)
{
	v->a[278520] = anon_sym_DOLLAR_LBRACK;
	v->a[278521] = actions(12549);
	v->a[278522] = 1;
	v->a[278523] = anon_sym_DOLLAR;
	v->a[278524] = actions(12551);
	v->a[278525] = 1;
	v->a[278526] = anon_sym_DOLLAR_LBRACE;
	v->a[278527] = actions(12553);
	v->a[278528] = 1;
	v->a[278529] = anon_sym_RBRACE3;
	v->a[278530] = actions(12555);
	v->a[278531] = 1;
	v->a[278532] = anon_sym_DOLLAR_LPAREN;
	v->a[278533] = actions(12557);
	v->a[278534] = 1;
	v->a[278535] = anon_sym_BQUOTE;
	v->a[278536] = actions(12559);
	v->a[278537] = 1;
	v->a[278538] = anon_sym_DOLLAR_BQUOTE;
	v->a[278539] = actions(12561);
	small_parse_table_13927(v);
}

void	small_parse_table_13927(t_small_parse_table_array *v)
{
	v->a[278540] = 1;
	v->a[278541] = aux_sym__simple_variable_name_token1;
	v->a[278542] = state(5460);
	v->a[278543] = 1;
	v->a[278544] = sym_simple_expansion;
	v->a[278545] = state(6264);
	v->a[278546] = 1;
	v->a[278547] = sym_number;
	v->a[278548] = state(6267);
	v->a[278549] = 1;
	v->a[278550] = sym_expansion;
	v->a[278551] = state(6268);
	v->a[278552] = 1;
	v->a[278553] = sym__expansion_max_length_binary_expression;
	v->a[278554] = state(6470);
	v->a[278555] = 1;
	v->a[278556] = sym__expansion_max_length_expression;
	v->a[278557] = state(7025);
	v->a[278558] = 1;
	v->a[278559] = sym_parenthesized_expression;
	small_parse_table_13928(v);
}

void	small_parse_table_13928(t_small_parse_table_array *v)
{
	v->a[278560] = state(7026);
	v->a[278561] = 1;
	v->a[278562] = sym_arithmetic_expansion;
	v->a[278563] = state(7027);
	v->a[278564] = 1;
	v->a[278565] = sym_command_substitution;
	v->a[278566] = actions(12541);
	v->a[278567] = 2;
	v->a[278568] = anon_sym_LPAREN_LPAREN;
	v->a[278569] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[278570] = 19;
	v->a[278571] = actions(3);
	v->a[278572] = 1;
	v->a[278573] = sym_comment;
	v->a[278574] = actions(7793);
	v->a[278575] = 1;
	v->a[278576] = aux_sym_number_token1;
	v->a[278577] = actions(7795);
	v->a[278578] = 1;
	v->a[278579] = aux_sym_number_token2;
	small_parse_table_13929(v);
}

void	small_parse_table_13929(t_small_parse_table_array *v)
{
	v->a[278580] = actions(12543);
	v->a[278581] = 1;
	v->a[278582] = anon_sym_LPAREN;
	v->a[278583] = actions(12547);
	v->a[278584] = 1;
	v->a[278585] = anon_sym_DOLLAR_LBRACK;
	v->a[278586] = actions(12549);
	v->a[278587] = 1;
	v->a[278588] = anon_sym_DOLLAR;
	v->a[278589] = actions(12551);
	v->a[278590] = 1;
	v->a[278591] = anon_sym_DOLLAR_LBRACE;
	v->a[278592] = actions(12555);
	v->a[278593] = 1;
	v->a[278594] = anon_sym_DOLLAR_LPAREN;
	v->a[278595] = actions(12557);
	v->a[278596] = 1;
	v->a[278597] = anon_sym_BQUOTE;
	v->a[278598] = actions(12559);
	v->a[278599] = 1;
	small_parse_table_13930(v);
}

/* EOF small_parse_table_2785.c */
