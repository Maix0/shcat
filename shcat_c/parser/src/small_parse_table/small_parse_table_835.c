/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_835.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4175(t_small_parse_table_array *v)
{
	v->a[83500] = sym_process_substitution;
	v->a[83501] = 6;
	v->a[83502] = actions(3);
	v->a[83503] = 1;
	v->a[83504] = sym_comment;
	v->a[83505] = actions(5080);
	v->a[83506] = 1;
	v->a[83507] = aux_sym_concatenation_token1;
	v->a[83508] = actions(5082);
	v->a[83509] = 1;
	v->a[83510] = sym__concat;
	v->a[83511] = state(1821);
	v->a[83512] = 1;
	v->a[83513] = aux_sym_concatenation_repeat1;
	v->a[83514] = actions(4566);
	v->a[83515] = 5;
	v->a[83516] = sym_file_descriptor;
	v->a[83517] = sym_test_operator;
	v->a[83518] = sym__bare_dollar;
	v->a[83519] = sym__brace_start;
	small_parse_table_4176(v);
}

void	small_parse_table_4176(t_small_parse_table_array *v)
{
	v->a[83520] = aux_sym_heredoc_redirect_token1;
	v->a[83521] = actions(4564);
	v->a[83522] = 36;
	v->a[83523] = anon_sym_LPAREN_LPAREN;
	v->a[83524] = anon_sym_PIPE_PIPE;
	v->a[83525] = anon_sym_AMP_AMP;
	v->a[83526] = anon_sym_PIPE;
	v->a[83527] = anon_sym_EQ_EQ;
	v->a[83528] = anon_sym_LT;
	v->a[83529] = anon_sym_GT;
	v->a[83530] = anon_sym_LT_LT;
	v->a[83531] = anon_sym_GT_GT;
	v->a[83532] = anon_sym_PIPE_AMP;
	v->a[83533] = anon_sym_EQ_TILDE;
	v->a[83534] = anon_sym_AMP_GT;
	v->a[83535] = anon_sym_AMP_GT_GT;
	v->a[83536] = anon_sym_LT_AMP;
	v->a[83537] = anon_sym_GT_AMP;
	v->a[83538] = anon_sym_GT_PIPE;
	v->a[83539] = anon_sym_LT_AMP_DASH;
	small_parse_table_4177(v);
}

void	small_parse_table_4177(t_small_parse_table_array *v)
{
	v->a[83540] = anon_sym_GT_AMP_DASH;
	v->a[83541] = anon_sym_LT_LT_DASH;
	v->a[83542] = anon_sym_LT_LT_LT;
	v->a[83543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83544] = anon_sym_DOLLAR_LBRACK;
	v->a[83545] = anon_sym_DOLLAR;
	v->a[83546] = sym__special_character;
	v->a[83547] = anon_sym_DQUOTE;
	v->a[83548] = sym_raw_string;
	v->a[83549] = sym_ansi_c_string;
	v->a[83550] = aux_sym_number_token1;
	v->a[83551] = aux_sym_number_token2;
	v->a[83552] = anon_sym_DOLLAR_LBRACE;
	v->a[83553] = anon_sym_DOLLAR_LPAREN;
	v->a[83554] = anon_sym_BQUOTE;
	v->a[83555] = anon_sym_DOLLAR_BQUOTE;
	v->a[83556] = anon_sym_LT_LPAREN;
	v->a[83557] = anon_sym_GT_LPAREN;
	v->a[83558] = sym_word;
	v->a[83559] = 5;
	small_parse_table_4178(v);
}

void	small_parse_table_4178(t_small_parse_table_array *v)
{
	v->a[83560] = actions(3);
	v->a[83561] = 1;
	v->a[83562] = sym_comment;
	v->a[83563] = actions(5974);
	v->a[83564] = 1;
	v->a[83565] = sym__special_character;
	v->a[83566] = state(1751);
	v->a[83567] = 1;
	v->a[83568] = aux_sym__literal_repeat1;
	v->a[83569] = actions(1364);
	v->a[83570] = 5;
	v->a[83571] = sym_file_descriptor;
	v->a[83572] = sym_variable_name;
	v->a[83573] = sym_test_operator;
	v->a[83574] = sym__brace_start;
	v->a[83575] = aux_sym_heredoc_redirect_token1;
	v->a[83576] = actions(1362);
	v->a[83577] = 37;
	v->a[83578] = anon_sym_LPAREN_LPAREN;
	v->a[83579] = anon_sym_SEMI;
	small_parse_table_4179(v);
}

void	small_parse_table_4179(t_small_parse_table_array *v)
{
	v->a[83580] = anon_sym_PIPE_PIPE;
	v->a[83581] = anon_sym_AMP_AMP;
	v->a[83582] = anon_sym_PIPE;
	v->a[83583] = anon_sym_AMP;
	v->a[83584] = anon_sym_LT;
	v->a[83585] = anon_sym_GT;
	v->a[83586] = anon_sym_LT_LT;
	v->a[83587] = anon_sym_GT_GT;
	v->a[83588] = anon_sym_RPAREN;
	v->a[83589] = anon_sym_SEMI_SEMI;
	v->a[83590] = anon_sym_PIPE_AMP;
	v->a[83591] = anon_sym_AMP_GT;
	v->a[83592] = anon_sym_AMP_GT_GT;
	v->a[83593] = anon_sym_LT_AMP;
	v->a[83594] = anon_sym_GT_AMP;
	v->a[83595] = anon_sym_GT_PIPE;
	v->a[83596] = anon_sym_LT_AMP_DASH;
	v->a[83597] = anon_sym_GT_AMP_DASH;
	v->a[83598] = anon_sym_LT_LT_DASH;
	v->a[83599] = anon_sym_LT_LT_LT;
	small_parse_table_4180(v);
}

/* EOF small_parse_table_835.c */
