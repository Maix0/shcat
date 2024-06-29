/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_515.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2575(t_small_parse_table_array *v)
{
	v->a[51500] = sym_comment;
	v->a[51501] = actions(1693);
	v->a[51502] = 1;
	v->a[51503] = aux_sym_concatenation_token1;
	v->a[51504] = actions(1721);
	v->a[51505] = 1;
	v->a[51506] = sym__concat;
	v->a[51507] = state(793);
	v->a[51508] = 1;
	v->a[51509] = aux_sym_concatenation_repeat1;
	v->a[51510] = actions(961);
	v->a[51511] = 2;
	v->a[51512] = sym_file_descriptor;
	v->a[51513] = sym__bare_dollar;
	v->a[51514] = actions(957);
	v->a[51515] = 25;
	v->a[51516] = anon_sym_LPAREN;
	v->a[51517] = anon_sym_PIPE;
	v->a[51518] = anon_sym_AMP_AMP;
	v->a[51519] = anon_sym_PIPE_PIPE;
	small_parse_table_2576(v);
}

void	small_parse_table_2576(t_small_parse_table_array *v)
{
	v->a[51520] = anon_sym_LT;
	v->a[51521] = anon_sym_GT;
	v->a[51522] = anon_sym_GT_GT;
	v->a[51523] = anon_sym_AMP_GT;
	v->a[51524] = anon_sym_AMP_GT_GT;
	v->a[51525] = anon_sym_LT_AMP;
	v->a[51526] = anon_sym_GT_AMP;
	v->a[51527] = anon_sym_GT_PIPE;
	v->a[51528] = anon_sym_LT_AMP_DASH;
	v->a[51529] = anon_sym_GT_AMP_DASH;
	v->a[51530] = anon_sym_LT_LT;
	v->a[51531] = anon_sym_LT_LT_DASH;
	v->a[51532] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51533] = anon_sym_DOLLAR;
	v->a[51534] = anon_sym_DQUOTE;
	v->a[51535] = sym_raw_string;
	v->a[51536] = sym_number;
	v->a[51537] = anon_sym_DOLLAR_LBRACE;
	v->a[51538] = anon_sym_DOLLAR_LPAREN;
	v->a[51539] = anon_sym_BQUOTE;
	small_parse_table_2577(v);
}

void	small_parse_table_2577(t_small_parse_table_array *v)
{
	v->a[51540] = sym_word;
	v->a[51541] = 12;
	v->a[51542] = actions(3);
	v->a[51543] = 1;
	v->a[51544] = sym_comment;
	v->a[51545] = actions(548);
	v->a[51546] = 1;
	v->a[51547] = sym_file_descriptor;
	v->a[51548] = actions(1709);
	v->a[51549] = 1;
	v->a[51550] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51551] = actions(1711);
	v->a[51552] = 1;
	v->a[51553] = anon_sym_DOLLAR;
	v->a[51554] = actions(1713);
	v->a[51555] = 1;
	v->a[51556] = anon_sym_DQUOTE;
	v->a[51557] = actions(1715);
	v->a[51558] = 1;
	v->a[51559] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2578(v);
}

void	small_parse_table_2578(t_small_parse_table_array *v)
{
	v->a[51560] = actions(1717);
	v->a[51561] = 1;
	v->a[51562] = anon_sym_DOLLAR_LPAREN;
	v->a[51563] = actions(1719);
	v->a[51564] = 1;
	v->a[51565] = anon_sym_BQUOTE;
	v->a[51566] = state(804);
	v->a[51567] = 2;
	v->a[51568] = sym_concatenation;
	v->a[51569] = aux_sym_for_statement_repeat1;
	v->a[51570] = actions(1707);
	v->a[51571] = 3;
	v->a[51572] = sym_raw_string;
	v->a[51573] = sym_number;
	v->a[51574] = sym_word;
	v->a[51575] = state(950);
	v->a[51576] = 5;
	v->a[51577] = sym_arithmetic_expansion;
	v->a[51578] = sym_string;
	v->a[51579] = sym_simple_expansion;
	small_parse_table_2579(v);
}

void	small_parse_table_2579(t_small_parse_table_array *v)
{
	v->a[51580] = sym_expansion;
	v->a[51581] = sym_command_substitution;
	v->a[51582] = actions(546);
	v->a[51583] = 13;
	v->a[51584] = anon_sym_AMP_AMP;
	v->a[51585] = anon_sym_PIPE_PIPE;
	v->a[51586] = anon_sym_LT;
	v->a[51587] = anon_sym_GT;
	v->a[51588] = anon_sym_GT_GT;
	v->a[51589] = anon_sym_AMP_GT;
	v->a[51590] = anon_sym_AMP_GT_GT;
	v->a[51591] = anon_sym_LT_AMP;
	v->a[51592] = anon_sym_GT_AMP;
	v->a[51593] = anon_sym_GT_PIPE;
	v->a[51594] = anon_sym_LT_AMP_DASH;
	v->a[51595] = anon_sym_GT_AMP_DASH;
	v->a[51596] = aux_sym_heredoc_redirect_token1;
	v->a[51597] = 12;
	v->a[51598] = actions(3);
	v->a[51599] = 1;
	small_parse_table_2580(v);
}

/* EOF small_parse_table_515.c */
