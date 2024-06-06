/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1205.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6025(t_small_parse_table_array *v)
{
	v->a[120500] = actions(6889);
	v->a[120501] = 3;
	v->a[120502] = sym_test_operator;
	v->a[120503] = sym__bare_dollar;
	v->a[120504] = sym_raw_string;
	v->a[120505] = state(1005);
	v->a[120506] = 7;
	v->a[120507] = sym_arithmetic_expansion;
	v->a[120508] = sym_brace_expression;
	v->a[120509] = sym_string;
	v->a[120510] = sym_number;
	v->a[120511] = sym_simple_expansion;
	v->a[120512] = sym_expansion;
	v->a[120513] = sym_command_substitution;
	v->a[120514] = 16;
	v->a[120515] = actions(3);
	v->a[120516] = 1;
	v->a[120517] = sym_comment;
	v->a[120518] = actions(5692);
	v->a[120519] = 1;
	small_parse_table_6026(v);
}

void	small_parse_table_6026(t_small_parse_table_array *v)
{
	v->a[120520] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120521] = actions(5694);
	v->a[120522] = 1;
	v->a[120523] = anon_sym_DOLLAR;
	v->a[120524] = actions(5698);
	v->a[120525] = 1;
	v->a[120526] = anon_sym_DQUOTE;
	v->a[120527] = actions(5702);
	v->a[120528] = 1;
	v->a[120529] = aux_sym_number_token1;
	v->a[120530] = actions(5704);
	v->a[120531] = 1;
	v->a[120532] = aux_sym_number_token2;
	v->a[120533] = actions(5706);
	v->a[120534] = 1;
	v->a[120535] = anon_sym_DOLLAR_LBRACE;
	v->a[120536] = actions(5708);
	v->a[120537] = 1;
	v->a[120538] = anon_sym_DOLLAR_LPAREN;
	v->a[120539] = actions(5710);
	small_parse_table_6027(v);
}

void	small_parse_table_6027(t_small_parse_table_array *v)
{
	v->a[120540] = 1;
	v->a[120541] = anon_sym_BQUOTE;
	v->a[120542] = actions(5712);
	v->a[120543] = 1;
	v->a[120544] = anon_sym_DOLLAR_BQUOTE;
	v->a[120545] = actions(5718);
	v->a[120546] = 1;
	v->a[120547] = sym__brace_start;
	v->a[120548] = actions(6444);
	v->a[120549] = 1;
	v->a[120550] = sym_word;
	v->a[120551] = actions(6448);
	v->a[120552] = 1;
	v->a[120553] = sym__special_character;
	v->a[120554] = actions(6452);
	v->a[120555] = 1;
	v->a[120556] = sym__comment_word;
	v->a[120557] = actions(6450);
	v->a[120558] = 3;
	v->a[120559] = sym_test_operator;
	small_parse_table_6028(v);
}

void	small_parse_table_6028(t_small_parse_table_array *v)
{
	v->a[120560] = sym__bare_dollar;
	v->a[120561] = sym_raw_string;
	v->a[120562] = state(654);
	v->a[120563] = 7;
	v->a[120564] = sym_arithmetic_expansion;
	v->a[120565] = sym_brace_expression;
	v->a[120566] = sym_string;
	v->a[120567] = sym_number;
	v->a[120568] = sym_simple_expansion;
	v->a[120569] = sym_expansion;
	v->a[120570] = sym_command_substitution;
	v->a[120571] = 16;
	v->a[120572] = actions(3);
	v->a[120573] = 1;
	v->a[120574] = sym_comment;
	v->a[120575] = actions(897);
	v->a[120576] = 1;
	v->a[120577] = aux_sym_number_token1;
	v->a[120578] = actions(899);
	v->a[120579] = 1;
	small_parse_table_6029(v);
}

void	small_parse_table_6029(t_small_parse_table_array *v)
{
	v->a[120580] = aux_sym_number_token2;
	v->a[120581] = actions(903);
	v->a[120582] = 1;
	v->a[120583] = anon_sym_DOLLAR_LPAREN;
	v->a[120584] = actions(915);
	v->a[120585] = 1;
	v->a[120586] = sym__brace_start;
	v->a[120587] = actions(5621);
	v->a[120588] = 1;
	v->a[120589] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120590] = actions(5625);
	v->a[120591] = 1;
	v->a[120592] = anon_sym_DQUOTE;
	v->a[120593] = actions(5629);
	v->a[120594] = 1;
	v->a[120595] = anon_sym_DOLLAR_LBRACE;
	v->a[120596] = actions(5631);
	v->a[120597] = 1;
	v->a[120598] = anon_sym_BQUOTE;
	v->a[120599] = actions(5633);
	small_parse_table_6030(v);
}

/* EOF small_parse_table_1205.c */
