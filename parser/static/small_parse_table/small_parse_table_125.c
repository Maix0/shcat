/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_125.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_625(t_small_parse_table_array *v)
{
	v->a[12500] = sym_simple_expansion;
	v->a[12501] = sym_expansion;
	v->a[12502] = sym_command_substitution;
	v->a[12503] = actions(1278);
	v->a[12504] = 20;
	v->a[12505] = anon_sym_PIPE;
	v->a[12506] = anon_sym_SEMI_SEMI;
	v->a[12507] = anon_sym_PIPE_AMP;
	v->a[12508] = anon_sym_AMP_AMP;
	v->a[12509] = anon_sym_PIPE_PIPE;
	v->a[12510] = anon_sym_LT;
	v->a[12511] = anon_sym_GT;
	v->a[12512] = anon_sym_GT_GT;
	v->a[12513] = anon_sym_AMP_GT;
	v->a[12514] = anon_sym_AMP_GT_GT;
	v->a[12515] = anon_sym_LT_AMP;
	v->a[12516] = anon_sym_GT_AMP;
	v->a[12517] = anon_sym_GT_PIPE;
	v->a[12518] = anon_sym_LT_AMP_DASH;
	v->a[12519] = anon_sym_GT_AMP_DASH;
	small_parse_table_626(v);
}

void	small_parse_table_626(t_small_parse_table_array *v)
{
	v->a[12520] = anon_sym_LT_LT;
	v->a[12521] = anon_sym_LT_LT_DASH;
	v->a[12522] = anon_sym_AMP;
	v->a[12523] = anon_sym_BQUOTE;
	v->a[12524] = anon_sym_SEMI;
	v->a[12525] = 20;
	v->a[12526] = actions(3);
	v->a[12527] = 1;
	v->a[12528] = sym_comment;
	v->a[12529] = actions(1737);
	v->a[12530] = 1;
	v->a[12531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12532] = actions(1739);
	v->a[12533] = 1;
	v->a[12534] = anon_sym_DOLLAR;
	v->a[12535] = actions(1743);
	v->a[12536] = 1;
	v->a[12537] = anon_sym_DQUOTE;
	v->a[12538] = actions(1745);
	v->a[12539] = 1;
	small_parse_table_627(v);
}

void	small_parse_table_627(t_small_parse_table_array *v)
{
	v->a[12540] = aux_sym_number_token1;
	v->a[12541] = actions(1747);
	v->a[12542] = 1;
	v->a[12543] = aux_sym_number_token2;
	v->a[12544] = actions(1749);
	v->a[12545] = 1;
	v->a[12546] = anon_sym_DOLLAR_LBRACE;
	v->a[12547] = actions(1751);
	v->a[12548] = 1;
	v->a[12549] = anon_sym_DOLLAR_LPAREN;
	v->a[12550] = actions(1753);
	v->a[12551] = 1;
	v->a[12552] = anon_sym_BQUOTE;
	v->a[12553] = actions(1755);
	v->a[12554] = 1;
	v->a[12555] = anon_sym_DOLLAR_BQUOTE;
	v->a[12556] = actions(1761);
	v->a[12557] = 1;
	v->a[12558] = sym__brace_start;
	v->a[12559] = actions(2286);
	small_parse_table_628(v);
}

void	small_parse_table_628(t_small_parse_table_array *v)
{
	v->a[12560] = 1;
	v->a[12561] = sym__special_character;
	v->a[12562] = actions(2290);
	v->a[12563] = 1;
	v->a[12564] = sym_test_operator;
	v->a[12565] = actions(2350);
	v->a[12566] = 1;
	v->a[12567] = aux_sym__simple_variable_name_token1;
	v->a[12568] = state(1219);
	v->a[12569] = 1;
	v->a[12570] = aux_sym__literal_repeat1;
	v->a[12571] = actions(1246);
	v->a[12572] = 2;
	v->a[12573] = sym_file_descriptor;
	v->a[12574] = aux_sym_heredoc_redirect_token1;
	v->a[12575] = actions(2284);
	v->a[12576] = 2;
	v->a[12577] = sym_raw_string;
	v->a[12578] = sym_word;
	v->a[12579] = state(400);
	small_parse_table_629(v);
}

void	small_parse_table_629(t_small_parse_table_array *v)
{
	v->a[12580] = 2;
	v->a[12581] = sym_concatenation;
	v->a[12582] = aux_sym_unset_command_repeat1;
	v->a[12583] = state(1088);
	v->a[12584] = 7;
	v->a[12585] = sym_arithmetic_expansion;
	v->a[12586] = sym_brace_expression;
	v->a[12587] = sym_string;
	v->a[12588] = sym_number;
	v->a[12589] = sym_simple_expansion;
	v->a[12590] = sym_expansion;
	v->a[12591] = sym_command_substitution;
	v->a[12592] = actions(1244);
	v->a[12593] = 19;
	v->a[12594] = anon_sym_PIPE;
	v->a[12595] = anon_sym_SEMI_SEMI;
	v->a[12596] = anon_sym_PIPE_AMP;
	v->a[12597] = anon_sym_AMP_AMP;
	v->a[12598] = anon_sym_PIPE_PIPE;
	v->a[12599] = anon_sym_LT;
	small_parse_table_630(v);
}

/* EOF small_parse_table_125.c */
