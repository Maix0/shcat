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
	v->a[17500] = anon_sym_LPAREN;
	v->a[17501] = actions(19);
	v->a[17502] = 1;
	v->a[17503] = anon_sym_LBRACE;
	v->a[17504] = actions(49);
	v->a[17505] = 1;
	v->a[17506] = sym_word;
	v->a[17507] = actions(57);
	v->a[17508] = 1;
	v->a[17509] = anon_sym_BANG;
	v->a[17510] = actions(63);
	v->a[17511] = 1;
	v->a[17512] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17513] = actions(65);
	v->a[17514] = 1;
	v->a[17515] = anon_sym_DOLLAR;
	v->a[17516] = actions(67);
	v->a[17517] = 1;
	v->a[17518] = anon_sym_DQUOTE;
	v->a[17519] = actions(69);
	small_parse_table_876(v);
}

void	small_parse_table_876(t_small_parse_table_array *v)
{
	v->a[17520] = 1;
	v->a[17521] = sym_raw_string;
	v->a[17522] = actions(71);
	v->a[17523] = 1;
	v->a[17524] = aux_sym_number_token1;
	v->a[17525] = actions(73);
	v->a[17526] = 1;
	v->a[17527] = aux_sym_number_token2;
	v->a[17528] = actions(75);
	v->a[17529] = 1;
	v->a[17530] = anon_sym_DOLLAR_LBRACE;
	v->a[17531] = actions(77);
	v->a[17532] = 1;
	v->a[17533] = anon_sym_DOLLAR_LPAREN;
	v->a[17534] = actions(79);
	v->a[17535] = 1;
	v->a[17536] = anon_sym_BQUOTE;
	v->a[17537] = actions(81);
	v->a[17538] = 1;
	v->a[17539] = sym_file_descriptor;
	small_parse_table_877(v);
}

void	small_parse_table_877(t_small_parse_table_array *v)
{
	v->a[17540] = actions(83);
	v->a[17541] = 1;
	v->a[17542] = sym_variable_name;
	v->a[17543] = state(72);
	v->a[17544] = 1;
	v->a[17545] = aux_sym__terminated_statement;
	v->a[17546] = state(190);
	v->a[17547] = 1;
	v->a[17548] = sym_command_name;
	v->a[17549] = state(303);
	v->a[17550] = 1;
	v->a[17551] = sym_variable_assignment;
	v->a[17552] = state(582);
	v->a[17553] = 1;
	v->a[17554] = sym_concatenation;
	v->a[17555] = state(587);
	v->a[17556] = 1;
	v->a[17557] = aux_sym_command_repeat1;
	v->a[17558] = state(718);
	v->a[17559] = 1;
	small_parse_table_878(v);
}

void	small_parse_table_878(t_small_parse_table_array *v)
{
	v->a[17560] = sym_file_redirect;
	v->a[17561] = state(1213);
	v->a[17562] = 1;
	v->a[17563] = aux_sym_redirected_statement_repeat2;
	v->a[17564] = state(1225);
	v->a[17565] = 1;
	v->a[17566] = sym_pipeline;
	v->a[17567] = state(2035);
	v->a[17568] = 1;
	v->a[17569] = sym__statement_not_pipeline;
	v->a[17570] = actions(11);
	v->a[17571] = 2;
	v->a[17572] = anon_sym_while;
	v->a[17573] = anon_sym_until;
	v->a[17574] = actions(61);
	v->a[17575] = 2;
	v->a[17576] = anon_sym_LT_AMP_DASH;
	v->a[17577] = anon_sym_GT_AMP_DASH;
	v->a[17578] = state(397);
	v->a[17579] = 6;
	small_parse_table_879(v);
}

void	small_parse_table_879(t_small_parse_table_array *v)
{
	v->a[17580] = sym_arithmetic_expansion;
	v->a[17581] = sym_string;
	v->a[17582] = sym_number;
	v->a[17583] = sym_simple_expansion;
	v->a[17584] = sym_expansion;
	v->a[17585] = sym_command_substitution;
	v->a[17586] = actions(59);
	v->a[17587] = 8;
	v->a[17588] = anon_sym_LT;
	v->a[17589] = anon_sym_GT;
	v->a[17590] = anon_sym_GT_GT;
	v->a[17591] = anon_sym_AMP_GT;
	v->a[17592] = anon_sym_AMP_GT_GT;
	v->a[17593] = anon_sym_LT_AMP;
	v->a[17594] = anon_sym_GT_AMP;
	v->a[17595] = anon_sym_GT_PIPE;
	v->a[17596] = state(1137);
	v->a[17597] = 12;
	v->a[17598] = sym_redirected_statement;
	v->a[17599] = sym_for_statement;
	small_parse_table_880(v);
}

/* EOF small_parse_table_175.c */
