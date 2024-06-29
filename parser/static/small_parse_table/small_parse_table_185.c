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
	v->a[18500] = sym_arithmetic_expansion;
	v->a[18501] = sym_string;
	v->a[18502] = sym_simple_expansion;
	v->a[18503] = sym_expansion;
	v->a[18504] = sym_command_substitution;
	v->a[18505] = actions(367);
	v->a[18506] = 8;
	v->a[18507] = anon_sym_LT;
	v->a[18508] = anon_sym_GT;
	v->a[18509] = anon_sym_GT_GT;
	v->a[18510] = anon_sym_AMP_GT;
	v->a[18511] = anon_sym_AMP_GT_GT;
	v->a[18512] = anon_sym_LT_AMP;
	v->a[18513] = anon_sym_GT_AMP;
	v->a[18514] = anon_sym_GT_PIPE;
	v->a[18515] = state(1170);
	v->a[18516] = 13;
	v->a[18517] = sym__statement_not_pipeline;
	v->a[18518] = sym_redirected_statement;
	v->a[18519] = sym_for_statement;
	small_parse_table_926(v);
}

void	small_parse_table_926(t_small_parse_table_array *v)
{
	v->a[18520] = sym_while_statement;
	v->a[18521] = sym_if_statement;
	v->a[18522] = sym_case_statement;
	v->a[18523] = sym_function_definition;
	v->a[18524] = sym_compound_statement;
	v->a[18525] = sym_subshell;
	v->a[18526] = sym_list;
	v->a[18527] = sym_negated_command;
	v->a[18528] = sym_command;
	v->a[18529] = sym__variable_assignments;
	v->a[18530] = 30;
	v->a[18531] = actions(3);
	v->a[18532] = 1;
	v->a[18533] = sym_comment;
	v->a[18534] = actions(325);
	v->a[18535] = 1;
	v->a[18536] = sym_word;
	v->a[18537] = actions(327);
	v->a[18538] = 1;
	v->a[18539] = anon_sym_for;
	small_parse_table_927(v);
}

void	small_parse_table_927(t_small_parse_table_array *v)
{
	v->a[18540] = actions(331);
	v->a[18541] = 1;
	v->a[18542] = anon_sym_if;
	v->a[18543] = actions(333);
	v->a[18544] = 1;
	v->a[18545] = anon_sym_case;
	v->a[18546] = actions(335);
	v->a[18547] = 1;
	v->a[18548] = anon_sym_LPAREN;
	v->a[18549] = actions(337);
	v->a[18550] = 1;
	v->a[18551] = anon_sym_LBRACE;
	v->a[18552] = actions(339);
	v->a[18553] = 1;
	v->a[18554] = anon_sym_BANG;
	v->a[18555] = actions(345);
	v->a[18556] = 1;
	v->a[18557] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18558] = actions(347);
	v->a[18559] = 1;
	small_parse_table_928(v);
}

void	small_parse_table_928(t_small_parse_table_array *v)
{
	v->a[18560] = anon_sym_DOLLAR;
	v->a[18561] = actions(349);
	v->a[18562] = 1;
	v->a[18563] = anon_sym_DQUOTE;
	v->a[18564] = actions(353);
	v->a[18565] = 1;
	v->a[18566] = anon_sym_DOLLAR_LBRACE;
	v->a[18567] = actions(355);
	v->a[18568] = 1;
	v->a[18569] = anon_sym_DOLLAR_LPAREN;
	v->a[18570] = actions(357);
	v->a[18571] = 1;
	v->a[18572] = anon_sym_BQUOTE;
	v->a[18573] = actions(359);
	v->a[18574] = 1;
	v->a[18575] = sym_file_descriptor;
	v->a[18576] = actions(361);
	v->a[18577] = 1;
	v->a[18578] = sym_variable_name;
	v->a[18579] = state(287);
	small_parse_table_929(v);
}

void	small_parse_table_929(t_small_parse_table_array *v)
{
	v->a[18580] = 1;
	v->a[18581] = sym_command_name;
	v->a[18582] = state(708);
	v->a[18583] = 1;
	v->a[18584] = sym_variable_assignment;
	v->a[18585] = state(732);
	v->a[18586] = 1;
	v->a[18587] = aux_sym_command_repeat1;
	v->a[18588] = state(928);
	v->a[18589] = 1;
	v->a[18590] = sym_concatenation;
	v->a[18591] = state(961);
	v->a[18592] = 1;
	v->a[18593] = sym_file_redirect;
	v->a[18594] = state(1434);
	v->a[18595] = 1;
	v->a[18596] = sym_pipeline;
	v->a[18597] = state(1440);
	v->a[18598] = 1;
	v->a[18599] = aux_sym_redirected_statement_repeat2;
	small_parse_table_930(v);
}

/* EOF small_parse_table_185.c */
