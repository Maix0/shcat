/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_187.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_935(t_small_parse_table_array *v)
{
	v->a[18700] = actions(335);
	v->a[18701] = 1;
	v->a[18702] = anon_sym_LPAREN;
	v->a[18703] = actions(337);
	v->a[18704] = 1;
	v->a[18705] = anon_sym_LBRACE;
	v->a[18706] = actions(339);
	v->a[18707] = 1;
	v->a[18708] = anon_sym_BANG;
	v->a[18709] = actions(345);
	v->a[18710] = 1;
	v->a[18711] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18712] = actions(347);
	v->a[18713] = 1;
	v->a[18714] = anon_sym_DOLLAR;
	v->a[18715] = actions(349);
	v->a[18716] = 1;
	v->a[18717] = anon_sym_DQUOTE;
	v->a[18718] = actions(353);
	v->a[18719] = 1;
	small_parse_table_936(v);
}

void	small_parse_table_936(t_small_parse_table_array *v)
{
	v->a[18720] = anon_sym_DOLLAR_LBRACE;
	v->a[18721] = actions(355);
	v->a[18722] = 1;
	v->a[18723] = anon_sym_DOLLAR_LPAREN;
	v->a[18724] = actions(357);
	v->a[18725] = 1;
	v->a[18726] = anon_sym_BQUOTE;
	v->a[18727] = actions(359);
	v->a[18728] = 1;
	v->a[18729] = sym_file_descriptor;
	v->a[18730] = actions(361);
	v->a[18731] = 1;
	v->a[18732] = sym_variable_name;
	v->a[18733] = state(387);
	v->a[18734] = 1;
	v->a[18735] = sym_command_name;
	v->a[18736] = state(706);
	v->a[18737] = 1;
	v->a[18738] = sym_variable_assignment;
	v->a[18739] = state(737);
	small_parse_table_937(v);
}

void	small_parse_table_937(t_small_parse_table_array *v)
{
	v->a[18740] = 1;
	v->a[18741] = aux_sym_command_repeat1;
	v->a[18742] = state(975);
	v->a[18743] = 1;
	v->a[18744] = sym_concatenation;
	v->a[18745] = state(991);
	v->a[18746] = 1;
	v->a[18747] = sym_file_redirect;
	v->a[18748] = state(1551);
	v->a[18749] = 1;
	v->a[18750] = aux_sym_redirected_statement_repeat2;
	v->a[18751] = state(1553);
	v->a[18752] = 1;
	v->a[18753] = sym_pipeline;
	v->a[18754] = actions(329);
	v->a[18755] = 2;
	v->a[18756] = anon_sym_while;
	v->a[18757] = anon_sym_until;
	v->a[18758] = actions(343);
	v->a[18759] = 2;
	small_parse_table_938(v);
}

void	small_parse_table_938(t_small_parse_table_array *v)
{
	v->a[18760] = anon_sym_LT_AMP_DASH;
	v->a[18761] = anon_sym_GT_AMP_DASH;
	v->a[18762] = actions(351);
	v->a[18763] = 2;
	v->a[18764] = sym_raw_string;
	v->a[18765] = sym_number;
	v->a[18766] = state(785);
	v->a[18767] = 5;
	v->a[18768] = sym_arithmetic_expansion;
	v->a[18769] = sym_string;
	v->a[18770] = sym_simple_expansion;
	v->a[18771] = sym_expansion;
	v->a[18772] = sym_command_substitution;
	v->a[18773] = actions(341);
	v->a[18774] = 6;
	v->a[18775] = anon_sym_LT;
	v->a[18776] = anon_sym_GT;
	v->a[18777] = anon_sym_GT_GT;
	v->a[18778] = anon_sym_LT_AMP;
	v->a[18779] = anon_sym_GT_AMP;
	small_parse_table_939(v);
}

void	small_parse_table_939(t_small_parse_table_array *v)
{
	v->a[18780] = anon_sym_GT_PIPE;
	v->a[18781] = state(1609);
	v->a[18782] = 13;
	v->a[18783] = sym__statement_not_pipeline;
	v->a[18784] = sym_redirected_statement;
	v->a[18785] = sym_for_statement;
	v->a[18786] = sym_while_statement;
	v->a[18787] = sym_if_statement;
	v->a[18788] = sym_case_statement;
	v->a[18789] = sym_function_definition;
	v->a[18790] = sym_compound_statement;
	v->a[18791] = sym_subshell;
	v->a[18792] = sym_list;
	v->a[18793] = sym_negated_command;
	v->a[18794] = sym_command;
	v->a[18795] = sym__variable_assignments;
	v->a[18796] = 30;
	v->a[18797] = actions(3);
	v->a[18798] = 1;
	v->a[18799] = sym_comment;
	small_parse_table_940(v);
}

/* EOF small_parse_table_187.c */
