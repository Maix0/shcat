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
	v->a[17500] = actions(325);
	v->a[17501] = 1;
	v->a[17502] = sym_word;
	v->a[17503] = actions(327);
	v->a[17504] = 1;
	v->a[17505] = anon_sym_for;
	v->a[17506] = actions(331);
	v->a[17507] = 1;
	v->a[17508] = anon_sym_if;
	v->a[17509] = actions(333);
	v->a[17510] = 1;
	v->a[17511] = anon_sym_case;
	v->a[17512] = actions(335);
	v->a[17513] = 1;
	v->a[17514] = anon_sym_LPAREN;
	v->a[17515] = actions(337);
	v->a[17516] = 1;
	v->a[17517] = anon_sym_LBRACE;
	v->a[17518] = actions(339);
	v->a[17519] = 1;
	small_parse_table_876(v);
}

void	small_parse_table_876(t_small_parse_table_array *v)
{
	v->a[17520] = anon_sym_BANG;
	v->a[17521] = actions(345);
	v->a[17522] = 1;
	v->a[17523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17524] = actions(347);
	v->a[17525] = 1;
	v->a[17526] = anon_sym_DOLLAR;
	v->a[17527] = actions(349);
	v->a[17528] = 1;
	v->a[17529] = anon_sym_DQUOTE;
	v->a[17530] = actions(353);
	v->a[17531] = 1;
	v->a[17532] = anon_sym_DOLLAR_LBRACE;
	v->a[17533] = actions(355);
	v->a[17534] = 1;
	v->a[17535] = anon_sym_DOLLAR_LPAREN;
	v->a[17536] = actions(357);
	v->a[17537] = 1;
	v->a[17538] = anon_sym_BQUOTE;
	v->a[17539] = actions(359);
	small_parse_table_877(v);
}

void	small_parse_table_877(t_small_parse_table_array *v)
{
	v->a[17540] = 1;
	v->a[17541] = sym_file_descriptor;
	v->a[17542] = actions(361);
	v->a[17543] = 1;
	v->a[17544] = sym_variable_name;
	v->a[17545] = state(287);
	v->a[17546] = 1;
	v->a[17547] = sym_command_name;
	v->a[17548] = state(732);
	v->a[17549] = 1;
	v->a[17550] = aux_sym_command_repeat1;
	v->a[17551] = state(767);
	v->a[17552] = 1;
	v->a[17553] = sym_variable_assignment;
	v->a[17554] = state(928);
	v->a[17555] = 1;
	v->a[17556] = sym_concatenation;
	v->a[17557] = state(961);
	v->a[17558] = 1;
	v->a[17559] = sym_file_redirect;
	small_parse_table_878(v);
}

void	small_parse_table_878(t_small_parse_table_array *v)
{
	v->a[17560] = state(1440);
	v->a[17561] = 1;
	v->a[17562] = aux_sym_redirected_statement_repeat2;
	v->a[17563] = state(1445);
	v->a[17564] = 1;
	v->a[17565] = sym_pipeline;
	v->a[17566] = actions(329);
	v->a[17567] = 2;
	v->a[17568] = anon_sym_while;
	v->a[17569] = anon_sym_until;
	v->a[17570] = actions(343);
	v->a[17571] = 2;
	v->a[17572] = anon_sym_LT_AMP_DASH;
	v->a[17573] = anon_sym_GT_AMP_DASH;
	v->a[17574] = actions(351);
	v->a[17575] = 2;
	v->a[17576] = sym_raw_string;
	v->a[17577] = sym_number;
	v->a[17578] = state(777);
	v->a[17579] = 5;
	small_parse_table_879(v);
}

void	small_parse_table_879(t_small_parse_table_array *v)
{
	v->a[17580] = sym_arithmetic_expansion;
	v->a[17581] = sym_string;
	v->a[17582] = sym_simple_expansion;
	v->a[17583] = sym_expansion;
	v->a[17584] = sym_command_substitution;
	v->a[17585] = actions(341);
	v->a[17586] = 8;
	v->a[17587] = anon_sym_LT;
	v->a[17588] = anon_sym_GT;
	v->a[17589] = anon_sym_GT_GT;
	v->a[17590] = anon_sym_AMP_GT;
	v->a[17591] = anon_sym_AMP_GT_GT;
	v->a[17592] = anon_sym_LT_AMP;
	v->a[17593] = anon_sym_GT_AMP;
	v->a[17594] = anon_sym_GT_PIPE;
	v->a[17595] = state(1514);
	v->a[17596] = 13;
	v->a[17597] = sym__statement_not_pipeline;
	v->a[17598] = sym_redirected_statement;
	v->a[17599] = sym_for_statement;
	small_parse_table_880(v);
}

/* EOF small_parse_table_175.c */
