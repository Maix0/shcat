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
	v->a[18500] = sym_number;
	v->a[18501] = state(291);
	v->a[18502] = 5;
	v->a[18503] = sym_arithmetic_expansion;
	v->a[18504] = sym_string;
	v->a[18505] = sym_simple_expansion;
	v->a[18506] = sym_expansion;
	v->a[18507] = sym_command_substitution;
	v->a[18508] = actions(23);
	v->a[18509] = 8;
	v->a[18510] = anon_sym_LT;
	v->a[18511] = anon_sym_GT;
	v->a[18512] = anon_sym_GT_GT;
	v->a[18513] = anon_sym_AMP_GT;
	v->a[18514] = anon_sym_AMP_GT_GT;
	v->a[18515] = anon_sym_LT_AMP;
	v->a[18516] = anon_sym_GT_AMP;
	v->a[18517] = anon_sym_GT_PIPE;
	v->a[18518] = state(1209);
	v->a[18519] = 12;
	small_parse_table_926(v);
}

void	small_parse_table_926(t_small_parse_table_array *v)
{
	v->a[18520] = sym_redirected_statement;
	v->a[18521] = sym_for_statement;
	v->a[18522] = sym_while_statement;
	v->a[18523] = sym_if_statement;
	v->a[18524] = sym_case_statement;
	v->a[18525] = sym_function_definition;
	v->a[18526] = sym_compound_statement;
	v->a[18527] = sym_subshell;
	v->a[18528] = sym_list;
	v->a[18529] = sym_negated_command;
	v->a[18530] = sym_command;
	v->a[18531] = sym_variable_assignments;
	v->a[18532] = 30;
	v->a[18533] = actions(3);
	v->a[18534] = 1;
	v->a[18535] = sym_comment;
	v->a[18536] = actions(9);
	v->a[18537] = 1;
	v->a[18538] = anon_sym_for;
	v->a[18539] = actions(13);
	small_parse_table_927(v);
}

void	small_parse_table_927(t_small_parse_table_array *v)
{
	v->a[18540] = 1;
	v->a[18541] = anon_sym_if;
	v->a[18542] = actions(15);
	v->a[18543] = 1;
	v->a[18544] = anon_sym_case;
	v->a[18545] = actions(17);
	v->a[18546] = 1;
	v->a[18547] = anon_sym_LPAREN;
	v->a[18548] = actions(19);
	v->a[18549] = 1;
	v->a[18550] = anon_sym_LBRACE;
	v->a[18551] = actions(59);
	v->a[18552] = 1;
	v->a[18553] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18554] = actions(61);
	v->a[18555] = 1;
	v->a[18556] = anon_sym_DOLLAR;
	v->a[18557] = actions(63);
	v->a[18558] = 1;
	v->a[18559] = anon_sym_DQUOTE;
	small_parse_table_928(v);
}

void	small_parse_table_928(t_small_parse_table_array *v)
{
	v->a[18560] = actions(67);
	v->a[18561] = 1;
	v->a[18562] = anon_sym_DOLLAR_LBRACE;
	v->a[18563] = actions(69);
	v->a[18564] = 1;
	v->a[18565] = anon_sym_DOLLAR_LPAREN;
	v->a[18566] = actions(71);
	v->a[18567] = 1;
	v->a[18568] = anon_sym_BQUOTE;
	v->a[18569] = actions(363);
	v->a[18570] = 1;
	v->a[18571] = sym_word;
	v->a[18572] = actions(365);
	v->a[18573] = 1;
	v->a[18574] = anon_sym_BANG;
	v->a[18575] = actions(373);
	v->a[18576] = 1;
	v->a[18577] = sym_file_descriptor;
	v->a[18578] = actions(375);
	v->a[18579] = 1;
	small_parse_table_929(v);
}

void	small_parse_table_929(t_small_parse_table_array *v)
{
	v->a[18580] = sym_variable_name;
	v->a[18581] = state(242);
	v->a[18582] = 1;
	v->a[18583] = sym_command_name;
	v->a[18584] = state(619);
	v->a[18585] = 1;
	v->a[18586] = sym_variable_assignment;
	v->a[18587] = state(647);
	v->a[18588] = 1;
	v->a[18589] = sym_concatenation;
	v->a[18590] = state(738);
	v->a[18591] = 1;
	v->a[18592] = sym_file_redirect;
	v->a[18593] = state(768);
	v->a[18594] = 1;
	v->a[18595] = aux_sym_command_repeat1;
	v->a[18596] = state(1564);
	v->a[18597] = 1;
	v->a[18598] = aux_sym_redirected_statement_repeat2;
	v->a[18599] = state(1581);
	small_parse_table_930(v);
}

/* EOF small_parse_table_185.c */
