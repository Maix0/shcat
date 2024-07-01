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
	v->a[17500] = 1;
	v->a[17501] = sym_file_redirect;
	v->a[17502] = state(1441);
	v->a[17503] = 1;
	v->a[17504] = aux_sym_redirected_statement_repeat2;
	v->a[17505] = state(1549);
	v->a[17506] = 1;
	v->a[17507] = sym_pipeline;
	v->a[17508] = actions(11);
	v->a[17509] = 2;
	v->a[17510] = anon_sym_while;
	v->a[17511] = anon_sym_until;
	v->a[17512] = actions(369);
	v->a[17513] = 2;
	v->a[17514] = anon_sym_LT_AMP_DASH;
	v->a[17515] = anon_sym_GT_AMP_DASH;
	v->a[17516] = actions(371);
	v->a[17517] = 2;
	v->a[17518] = sym_raw_string;
	v->a[17519] = sym_number;
	small_parse_table_876(v);
}

void	small_parse_table_876(t_small_parse_table_array *v)
{
	v->a[17520] = state(711);
	v->a[17521] = 5;
	v->a[17522] = sym_arithmetic_expansion;
	v->a[17523] = sym_string;
	v->a[17524] = sym_simple_expansion;
	v->a[17525] = sym_expansion;
	v->a[17526] = sym_command_substitution;
	v->a[17527] = actions(367);
	v->a[17528] = 6;
	v->a[17529] = anon_sym_LT;
	v->a[17530] = anon_sym_GT;
	v->a[17531] = anon_sym_GT_GT;
	v->a[17532] = anon_sym_LT_AMP;
	v->a[17533] = anon_sym_GT_AMP;
	v->a[17534] = anon_sym_GT_PIPE;
	v->a[17535] = state(1113);
	v->a[17536] = 13;
	v->a[17537] = sym__statement_not_pipeline;
	v->a[17538] = sym_redirected_statement;
	v->a[17539] = sym_for_statement;
	small_parse_table_877(v);
}

void	small_parse_table_877(t_small_parse_table_array *v)
{
	v->a[17540] = sym_while_statement;
	v->a[17541] = sym_if_statement;
	v->a[17542] = sym_case_statement;
	v->a[17543] = sym_function_definition;
	v->a[17544] = sym_compound_statement;
	v->a[17545] = sym_subshell;
	v->a[17546] = sym_list;
	v->a[17547] = sym_negated_command;
	v->a[17548] = sym_command;
	v->a[17549] = sym__variable_assignments;
	v->a[17550] = 29;
	v->a[17551] = actions(3);
	v->a[17552] = 1;
	v->a[17553] = sym_comment;
	v->a[17554] = actions(156);
	v->a[17555] = 1;
	v->a[17556] = sym_word;
	v->a[17557] = actions(158);
	v->a[17558] = 1;
	v->a[17559] = anon_sym_for;
	small_parse_table_878(v);
}

void	small_parse_table_878(t_small_parse_table_array *v)
{
	v->a[17560] = actions(162);
	v->a[17561] = 1;
	v->a[17562] = anon_sym_if;
	v->a[17563] = actions(164);
	v->a[17564] = 1;
	v->a[17565] = anon_sym_case;
	v->a[17566] = actions(166);
	v->a[17567] = 1;
	v->a[17568] = anon_sym_LPAREN;
	v->a[17569] = actions(168);
	v->a[17570] = 1;
	v->a[17571] = anon_sym_LBRACE;
	v->a[17572] = actions(170);
	v->a[17573] = 1;
	v->a[17574] = anon_sym_BANG;
	v->a[17575] = actions(176);
	v->a[17576] = 1;
	v->a[17577] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17578] = actions(178);
	v->a[17579] = 1;
	small_parse_table_879(v);
}

void	small_parse_table_879(t_small_parse_table_array *v)
{
	v->a[17580] = anon_sym_DOLLAR;
	v->a[17581] = actions(180);
	v->a[17582] = 1;
	v->a[17583] = anon_sym_DQUOTE;
	v->a[17584] = actions(184);
	v->a[17585] = 1;
	v->a[17586] = anon_sym_DOLLAR_LBRACE;
	v->a[17587] = actions(186);
	v->a[17588] = 1;
	v->a[17589] = anon_sym_DOLLAR_LPAREN;
	v->a[17590] = actions(188);
	v->a[17591] = 1;
	v->a[17592] = anon_sym_BQUOTE;
	v->a[17593] = actions(190);
	v->a[17594] = 1;
	v->a[17595] = sym_file_descriptor;
	v->a[17596] = actions(192);
	v->a[17597] = 1;
	v->a[17598] = sym_variable_name;
	v->a[17599] = state(186);
	small_parse_table_880(v);
}

/* EOF small_parse_table_175.c */
