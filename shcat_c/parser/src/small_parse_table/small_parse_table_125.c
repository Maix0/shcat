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
	v->a[12500] = 1;
	v->a[12501] = sym_test_operator;
	v->a[12502] = actions(3048);
	v->a[12503] = 1;
	v->a[12504] = sym__brace_start;
	v->a[12505] = state(4597);
	v->a[12506] = 1;
	v->a[12507] = aux_sym__literal_repeat1;
	v->a[12508] = state(4964);
	v->a[12509] = 1;
	v->a[12510] = sym_concatenation;
	v->a[12511] = actions(2496);
	v->a[12512] = 2;
	v->a[12513] = sym_file_descriptor;
	v->a[12514] = aux_sym_heredoc_redirect_token1;
	v->a[12515] = actions(3022);
	v->a[12516] = 2;
	v->a[12517] = anon_sym_LPAREN_LPAREN;
	v->a[12518] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12519] = actions(3044);
	small_parse_table_626(v);
}

void	small_parse_table_626(t_small_parse_table_array *v)
{
	v->a[12520] = 2;
	v->a[12521] = anon_sym_LT_LPAREN;
	v->a[12522] = anon_sym_GT_LPAREN;
	v->a[12523] = actions(3020);
	v->a[12524] = 3;
	v->a[12525] = sym_raw_string;
	v->a[12526] = sym_ansi_c_string;
	v->a[12527] = sym_word;
	v->a[12528] = state(4310);
	v->a[12529] = 9;
	v->a[12530] = sym_arithmetic_expansion;
	v->a[12531] = sym_brace_expression;
	v->a[12532] = sym_string;
	v->a[12533] = sym_translated_string;
	v->a[12534] = sym_number;
	v->a[12535] = sym_simple_expansion;
	v->a[12536] = sym_expansion;
	v->a[12537] = sym_command_substitution;
	v->a[12538] = sym_process_substitution;
	v->a[12539] = actions(2494);
	small_parse_table_627(v);
}

void	small_parse_table_627(t_small_parse_table_array *v)
{
	v->a[12540] = 22;
	v->a[12541] = anon_sym_SEMI;
	v->a[12542] = anon_sym_PIPE_PIPE;
	v->a[12543] = anon_sym_AMP_AMP;
	v->a[12544] = anon_sym_PIPE;
	v->a[12545] = anon_sym_AMP;
	v->a[12546] = anon_sym_LT;
	v->a[12547] = anon_sym_GT;
	v->a[12548] = anon_sym_LT_LT;
	v->a[12549] = anon_sym_GT_GT;
	v->a[12550] = anon_sym_SEMI_SEMI;
	v->a[12551] = anon_sym_SEMI_AMP;
	v->a[12552] = anon_sym_SEMI_SEMI_AMP;
	v->a[12553] = anon_sym_PIPE_AMP;
	v->a[12554] = anon_sym_AMP_GT;
	v->a[12555] = anon_sym_AMP_GT_GT;
	v->a[12556] = anon_sym_LT_AMP;
	v->a[12557] = anon_sym_GT_AMP;
	v->a[12558] = anon_sym_GT_PIPE;
	v->a[12559] = anon_sym_LT_AMP_DASH;
	small_parse_table_628(v);
}

void	small_parse_table_628(t_small_parse_table_array *v)
{
	v->a[12560] = anon_sym_GT_AMP_DASH;
	v->a[12561] = anon_sym_LT_LT_DASH;
	v->a[12562] = anon_sym_LT_LT_LT;
	v->a[12563] = 36;
	v->a[12564] = actions(71);
	v->a[12565] = 1;
	v->a[12566] = sym_comment;
	v->a[12567] = actions(171);
	v->a[12568] = 1;
	v->a[12569] = anon_sym_RPAREN_RPAREN;
	v->a[12570] = actions(1141);
	v->a[12571] = 1;
	v->a[12572] = anon_sym_DOLLAR_LBRACK;
	v->a[12573] = actions(1145);
	v->a[12574] = 1;
	v->a[12575] = anon_sym_DOLLAR;
	v->a[12576] = actions(1149);
	v->a[12577] = 1;
	v->a[12578] = anon_sym_DQUOTE;
	v->a[12579] = actions(1153);
	small_parse_table_629(v);
}

void	small_parse_table_629(t_small_parse_table_array *v)
{
	v->a[12580] = 1;
	v->a[12581] = aux_sym_number_token1;
	v->a[12582] = actions(1155);
	v->a[12583] = 1;
	v->a[12584] = aux_sym_number_token2;
	v->a[12585] = actions(1157);
	v->a[12586] = 1;
	v->a[12587] = anon_sym_DOLLAR_LBRACE;
	v->a[12588] = actions(1159);
	v->a[12589] = 1;
	v->a[12590] = anon_sym_DOLLAR_LPAREN;
	v->a[12591] = actions(1163);
	v->a[12592] = 1;
	v->a[12593] = anon_sym_DOLLAR_BQUOTE;
	v->a[12594] = actions(1169);
	v->a[12595] = 1;
	v->a[12596] = sym__brace_start;
	v->a[12597] = actions(1171);
	v->a[12598] = 1;
	v->a[12599] = sym_word;
	small_parse_table_630(v);
}

/* EOF small_parse_table_125.c */
