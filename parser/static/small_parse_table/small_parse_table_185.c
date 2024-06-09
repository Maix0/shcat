/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_185.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_925(t_small_parse_table_array *v)
{
	v->a[18500] = 1;
	v->a[18501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18502] = actions(119);
	v->a[18503] = 1;
	v->a[18504] = anon_sym_DOLLAR;
	v->a[18505] = actions(121);
	v->a[18506] = 1;
	v->a[18507] = anon_sym_DQUOTE;
	v->a[18508] = actions(123);
	v->a[18509] = 1;
	v->a[18510] = sym_raw_string;
	v->a[18511] = actions(125);
	v->a[18512] = 1;
	v->a[18513] = aux_sym_number_token1;
	v->a[18514] = actions(127);
	v->a[18515] = 1;
	v->a[18516] = aux_sym_number_token2;
	v->a[18517] = actions(129);
	v->a[18518] = 1;
	v->a[18519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_926(v);
}

void	small_parse_table_926(t_small_parse_table_array *v)
{
	v->a[18520] = actions(131);
	v->a[18521] = 1;
	v->a[18522] = anon_sym_DOLLAR_LPAREN;
	v->a[18523] = actions(133);
	v->a[18524] = 1;
	v->a[18525] = anon_sym_BQUOTE;
	v->a[18526] = actions(135);
	v->a[18527] = 1;
	v->a[18528] = sym_file_descriptor;
	v->a[18529] = actions(137);
	v->a[18530] = 1;
	v->a[18531] = sym_variable_name;
	v->a[18532] = state(173);
	v->a[18533] = 1;
	v->a[18534] = sym_command_name;
	v->a[18535] = state(276);
	v->a[18536] = 1;
	v->a[18537] = sym_variable_assignment;
	v->a[18538] = state(663);
	v->a[18539] = 1;
	small_parse_table_927(v);
}

void	small_parse_table_927(t_small_parse_table_array *v)
{
	v->a[18540] = aux_sym_command_repeat1;
	v->a[18541] = state(665);
	v->a[18542] = 1;
	v->a[18543] = sym_concatenation;
	v->a[18544] = state(749);
	v->a[18545] = 1;
	v->a[18546] = sym_file_redirect;
	v->a[18547] = state(1145);
	v->a[18548] = 1;
	v->a[18549] = aux_sym_redirected_statement_repeat2;
	v->a[18550] = state(1437);
	v->a[18551] = 1;
	v->a[18552] = sym_pipeline;
	v->a[18553] = actions(99);
	v->a[18554] = 2;
	v->a[18555] = anon_sym_while;
	v->a[18556] = anon_sym_until;
	v->a[18557] = actions(115);
	v->a[18558] = 2;
	v->a[18559] = anon_sym_LT_AMP_DASH;
	small_parse_table_928(v);
}

void	small_parse_table_928(t_small_parse_table_array *v)
{
	v->a[18560] = anon_sym_GT_AMP_DASH;
	v->a[18561] = state(282);
	v->a[18562] = 6;
	v->a[18563] = sym_arithmetic_expansion;
	v->a[18564] = sym_string;
	v->a[18565] = sym_number;
	v->a[18566] = sym_simple_expansion;
	v->a[18567] = sym_expansion;
	v->a[18568] = sym_command_substitution;
	v->a[18569] = actions(113);
	v->a[18570] = 8;
	v->a[18571] = anon_sym_LT;
	v->a[18572] = anon_sym_GT;
	v->a[18573] = anon_sym_GT_GT;
	v->a[18574] = anon_sym_AMP_GT;
	v->a[18575] = anon_sym_AMP_GT_GT;
	v->a[18576] = anon_sym_LT_AMP;
	v->a[18577] = anon_sym_GT_AMP;
	v->a[18578] = anon_sym_GT_PIPE;
	v->a[18579] = state(1221);
	small_parse_table_929(v);
}

void	small_parse_table_929(t_small_parse_table_array *v)
{
	v->a[18580] = 13;
	v->a[18581] = sym__statement_not_pipeline;
	v->a[18582] = sym_redirected_statement;
	v->a[18583] = sym_for_statement;
	v->a[18584] = sym_while_statement;
	v->a[18585] = sym_if_statement;
	v->a[18586] = sym_case_statement;
	v->a[18587] = sym_function_definition;
	v->a[18588] = sym_compound_statement;
	v->a[18589] = sym_subshell;
	v->a[18590] = sym_list;
	v->a[18591] = sym_negated_command;
	v->a[18592] = sym_command;
	v->a[18593] = sym_variable_assignments;
	v->a[18594] = 32;
	v->a[18595] = actions(3);
	v->a[18596] = 1;
	v->a[18597] = sym_comment;
	v->a[18598] = actions(95);
	v->a[18599] = 1;
	small_parse_table_930(v);
}

/* EOF small_parse_table_185.c */
