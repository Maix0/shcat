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
	v->a[18500] = anon_sym_BQUOTE;
	v->a[18501] = actions(41);
	v->a[18502] = 1;
	v->a[18503] = sym_file_descriptor;
	v->a[18504] = actions(43);
	v->a[18505] = 1;
	v->a[18506] = sym_variable_name;
	v->a[18507] = state(181);
	v->a[18508] = 1;
	v->a[18509] = sym_command_name;
	v->a[18510] = state(264);
	v->a[18511] = 1;
	v->a[18512] = sym_variable_assignment;
	v->a[18513] = state(618);
	v->a[18514] = 1;
	v->a[18515] = sym_concatenation;
	v->a[18516] = state(684);
	v->a[18517] = 1;
	v->a[18518] = sym_file_redirect;
	v->a[18519] = state(688);
	small_parse_table_926(v);
}

void	small_parse_table_926(t_small_parse_table_array *v)
{
	v->a[18520] = 1;
	v->a[18521] = aux_sym_command_repeat1;
	v->a[18522] = state(1206);
	v->a[18523] = 1;
	v->a[18524] = aux_sym_redirected_statement_repeat2;
	v->a[18525] = state(1579);
	v->a[18526] = 1;
	v->a[18527] = sym_pipeline;
	v->a[18528] = actions(11);
	v->a[18529] = 2;
	v->a[18530] = anon_sym_while;
	v->a[18531] = anon_sym_until;
	v->a[18532] = actions(25);
	v->a[18533] = 2;
	v->a[18534] = anon_sym_LT_AMP_DASH;
	v->a[18535] = anon_sym_GT_AMP_DASH;
	v->a[18536] = actions(33);
	v->a[18537] = 2;
	v->a[18538] = sym_raw_string;
	v->a[18539] = sym_number;
	small_parse_table_927(v);
}

void	small_parse_table_927(t_small_parse_table_array *v)
{
	v->a[18540] = state(323);
	v->a[18541] = 5;
	v->a[18542] = sym_arithmetic_expansion;
	v->a[18543] = sym_string;
	v->a[18544] = sym_simple_expansion;
	v->a[18545] = sym_expansion;
	v->a[18546] = sym_command_substitution;
	v->a[18547] = actions(23);
	v->a[18548] = 6;
	v->a[18549] = anon_sym_LT;
	v->a[18550] = anon_sym_GT;
	v->a[18551] = anon_sym_GT_GT;
	v->a[18552] = anon_sym_LT_AMP;
	v->a[18553] = anon_sym_GT_AMP;
	v->a[18554] = anon_sym_GT_PIPE;
	v->a[18555] = state(1113);
	v->a[18556] = 13;
	v->a[18557] = sym__statement_not_pipeline;
	v->a[18558] = sym_redirected_statement;
	v->a[18559] = sym_for_statement;
	small_parse_table_928(v);
}

void	small_parse_table_928(t_small_parse_table_array *v)
{
	v->a[18560] = sym_while_statement;
	v->a[18561] = sym_if_statement;
	v->a[18562] = sym_case_statement;
	v->a[18563] = sym_function_definition;
	v->a[18564] = sym_compound_statement;
	v->a[18565] = sym_subshell;
	v->a[18566] = sym_list;
	v->a[18567] = sym_negated_command;
	v->a[18568] = sym_command;
	v->a[18569] = sym__variable_assignments;
	v->a[18570] = 30;
	v->a[18571] = actions(3);
	v->a[18572] = 1;
	v->a[18573] = sym_comment;
	v->a[18574] = actions(9);
	v->a[18575] = 1;
	v->a[18576] = anon_sym_for;
	v->a[18577] = actions(13);
	v->a[18578] = 1;
	v->a[18579] = anon_sym_if;
	small_parse_table_929(v);
}

void	small_parse_table_929(t_small_parse_table_array *v)
{
	v->a[18580] = actions(15);
	v->a[18581] = 1;
	v->a[18582] = anon_sym_case;
	v->a[18583] = actions(17);
	v->a[18584] = 1;
	v->a[18585] = anon_sym_LPAREN;
	v->a[18586] = actions(19);
	v->a[18587] = 1;
	v->a[18588] = anon_sym_LBRACE;
	v->a[18589] = actions(59);
	v->a[18590] = 1;
	v->a[18591] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18592] = actions(61);
	v->a[18593] = 1;
	v->a[18594] = anon_sym_DOLLAR;
	v->a[18595] = actions(63);
	v->a[18596] = 1;
	v->a[18597] = anon_sym_DQUOTE;
	v->a[18598] = actions(67);
	v->a[18599] = 1;
	small_parse_table_930(v);
}

/* EOF small_parse_table_185.c */
