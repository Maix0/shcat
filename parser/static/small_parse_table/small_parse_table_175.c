/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_175.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_875(t_small_parse_table_array *v)
{
	v->a[17500] = aux_sym_for_statement_repeat1;
	v->a[17501] = actions(625);
	v->a[17502] = 3;
	v->a[17503] = sym_raw_string;
	v->a[17504] = sym_number;
	v->a[17505] = sym_word;
	v->a[17506] = state(362);
	v->a[17507] = 5;
	v->a[17508] = sym_arithmetic_expansion;
	v->a[17509] = sym_string;
	v->a[17510] = sym_simple_expansion;
	v->a[17511] = sym_expansion;
	v->a[17512] = sym_command_substitution;
	v->a[17513] = actions(421);
	v->a[17514] = 11;
	v->a[17515] = anon_sym_esac;
	v->a[17516] = anon_sym_PIPE;
	v->a[17517] = anon_sym_SEMI_SEMI;
	v->a[17518] = anon_sym_AMP_AMP;
	v->a[17519] = anon_sym_PIPE_PIPE;
	small_parse_table_876(v);
}

void	small_parse_table_876(t_small_parse_table_array *v)
{
	v->a[17520] = anon_sym_LT;
	v->a[17521] = anon_sym_GT;
	v->a[17522] = anon_sym_GT_GT;
	v->a[17523] = anon_sym_LT_LT;
	v->a[17524] = aux_sym_heredoc_redirect_token1;
	v->a[17525] = anon_sym_SEMI;
	v->a[17526] = 6;
	v->a[17527] = actions(3);
	v->a[17528] = 1;
	v->a[17529] = sym_comment;
	v->a[17530] = actions(351);
	v->a[17531] = 1;
	v->a[17532] = sym__bare_dollar;
	v->a[17533] = actions(643);
	v->a[17534] = 1;
	v->a[17535] = sym_variable_name;
	v->a[17536] = actions(641);
	v->a[17537] = 2;
	v->a[17538] = aux_sym__simple_variable_name_token1;
	v->a[17539] = aux_sym__multiline_variable_name_token1;
	small_parse_table_877(v);
}

void	small_parse_table_877(t_small_parse_table_array *v)
{
	v->a[17540] = actions(639);
	v->a[17541] = 8;
	v->a[17542] = anon_sym_BANG;
	v->a[17543] = anon_sym_DASH;
	v->a[17544] = anon_sym_STAR;
	v->a[17545] = anon_sym_QMARK;
	v->a[17546] = anon_sym_DOLLAR;
	v->a[17547] = anon_sym_POUND;
	v->a[17548] = anon_sym_AT;
	v->a[17549] = anon_sym_0;
	v->a[17550] = actions(343);
	v->a[17551] = 15;
	v->a[17552] = anon_sym_PIPE;
	v->a[17553] = anon_sym_AMP_AMP;
	v->a[17554] = anon_sym_PIPE_PIPE;
	v->a[17555] = anon_sym_LT;
	v->a[17556] = anon_sym_GT;
	v->a[17557] = anon_sym_GT_GT;
	v->a[17558] = anon_sym_LT_LT;
	v->a[17559] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_878(v);
}

void	small_parse_table_878(t_small_parse_table_array *v)
{
	v->a[17560] = anon_sym_DQUOTE;
	v->a[17561] = sym_raw_string;
	v->a[17562] = sym_number;
	v->a[17563] = anon_sym_DOLLAR_LBRACE;
	v->a[17564] = anon_sym_DOLLAR_LPAREN;
	v->a[17565] = anon_sym_BQUOTE;
	v->a[17566] = sym_word;
	v->a[17567] = 18;
	v->a[17568] = actions(3);
	v->a[17569] = 1;
	v->a[17570] = sym_comment;
	v->a[17571] = actions(647);
	v->a[17572] = 1;
	v->a[17573] = anon_sym_PIPE;
	v->a[17574] = actions(653);
	v->a[17575] = 1;
	v->a[17576] = aux_sym_heredoc_redirect_token1;
	v->a[17577] = actions(655);
	v->a[17578] = 1;
	v->a[17579] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_879(v);
}

void	small_parse_table_879(t_small_parse_table_array *v)
{
	v->a[17580] = actions(657);
	v->a[17581] = 1;
	v->a[17582] = anon_sym_DOLLAR;
	v->a[17583] = actions(659);
	v->a[17584] = 1;
	v->a[17585] = anon_sym_DQUOTE;
	v->a[17586] = actions(661);
	v->a[17587] = 1;
	v->a[17588] = anon_sym_DOLLAR_LBRACE;
	v->a[17589] = actions(663);
	v->a[17590] = 1;
	v->a[17591] = anon_sym_DOLLAR_LPAREN;
	v->a[17592] = actions(665);
	v->a[17593] = 1;
	v->a[17594] = anon_sym_BQUOTE;
	v->a[17595] = state(753);
	v->a[17596] = 1;
	v->a[17597] = aux_sym__heredoc_command;
	v->a[17598] = state(1296);
	v->a[17599] = 1;
	small_parse_table_880(v);
}

/* EOF small_parse_table_175.c */
