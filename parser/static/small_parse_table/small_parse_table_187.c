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
	v->a[18700] = state(248);
	v->a[18701] = 1;
	v->a[18702] = sym_variable_assignment;
	v->a[18703] = state(621);
	v->a[18704] = 1;
	v->a[18705] = sym_concatenation;
	v->a[18706] = state(692);
	v->a[18707] = 1;
	v->a[18708] = sym_file_redirect;
	v->a[18709] = state(810);
	v->a[18710] = 1;
	v->a[18711] = aux_sym_command_repeat1;
	v->a[18712] = state(1432);
	v->a[18713] = 1;
	v->a[18714] = aux_sym_redirected_statement_repeat2;
	v->a[18715] = state(1605);
	v->a[18716] = 1;
	v->a[18717] = sym_pipeline;
	v->a[18718] = actions(93);
	v->a[18719] = 2;
	small_parse_table_936(v);
}

void	small_parse_table_936(t_small_parse_table_array *v)
{
	v->a[18720] = anon_sym_while;
	v->a[18721] = anon_sym_until;
	v->a[18722] = actions(107);
	v->a[18723] = 2;
	v->a[18724] = anon_sym_LT_AMP_DASH;
	v->a[18725] = anon_sym_GT_AMP_DASH;
	v->a[18726] = actions(115);
	v->a[18727] = 2;
	v->a[18728] = sym_raw_string;
	v->a[18729] = sym_number;
	v->a[18730] = state(282);
	v->a[18731] = 5;
	v->a[18732] = sym_arithmetic_expansion;
	v->a[18733] = sym_string;
	v->a[18734] = sym_simple_expansion;
	v->a[18735] = sym_expansion;
	v->a[18736] = sym_command_substitution;
	v->a[18737] = actions(105);
	v->a[18738] = 8;
	v->a[18739] = anon_sym_LT;
	small_parse_table_937(v);
}

void	small_parse_table_937(t_small_parse_table_array *v)
{
	v->a[18740] = anon_sym_GT;
	v->a[18741] = anon_sym_GT_GT;
	v->a[18742] = anon_sym_AMP_GT;
	v->a[18743] = anon_sym_AMP_GT_GT;
	v->a[18744] = anon_sym_LT_AMP;
	v->a[18745] = anon_sym_GT_AMP;
	v->a[18746] = anon_sym_GT_PIPE;
	v->a[18747] = state(1449);
	v->a[18748] = 13;
	v->a[18749] = sym__statement_not_pipeline;
	v->a[18750] = sym_redirected_statement;
	v->a[18751] = sym_for_statement;
	v->a[18752] = sym_while_statement;
	v->a[18753] = sym_if_statement;
	v->a[18754] = sym_case_statement;
	v->a[18755] = sym_function_definition;
	v->a[18756] = sym_compound_statement;
	v->a[18757] = sym_subshell;
	v->a[18758] = sym_list;
	v->a[18759] = sym_negated_command;
	small_parse_table_938(v);
}

void	small_parse_table_938(t_small_parse_table_array *v)
{
	v->a[18760] = sym_command;
	v->a[18761] = sym_variable_assignments;
	v->a[18762] = 29;
	v->a[18763] = actions(3);
	v->a[18764] = 1;
	v->a[18765] = sym_comment;
	v->a[18766] = actions(7);
	v->a[18767] = 1;
	v->a[18768] = sym_word;
	v->a[18769] = actions(9);
	v->a[18770] = 1;
	v->a[18771] = anon_sym_for;
	v->a[18772] = actions(13);
	v->a[18773] = 1;
	v->a[18774] = anon_sym_if;
	v->a[18775] = actions(15);
	v->a[18776] = 1;
	v->a[18777] = anon_sym_case;
	v->a[18778] = actions(17);
	v->a[18779] = 1;
	small_parse_table_939(v);
}

void	small_parse_table_939(t_small_parse_table_array *v)
{
	v->a[18780] = anon_sym_LPAREN;
	v->a[18781] = actions(19);
	v->a[18782] = 1;
	v->a[18783] = anon_sym_LBRACE;
	v->a[18784] = actions(21);
	v->a[18785] = 1;
	v->a[18786] = anon_sym_BANG;
	v->a[18787] = actions(27);
	v->a[18788] = 1;
	v->a[18789] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18790] = actions(29);
	v->a[18791] = 1;
	v->a[18792] = anon_sym_DOLLAR;
	v->a[18793] = actions(31);
	v->a[18794] = 1;
	v->a[18795] = anon_sym_DQUOTE;
	v->a[18796] = actions(35);
	v->a[18797] = 1;
	v->a[18798] = anon_sym_DOLLAR_LBRACE;
	v->a[18799] = actions(37);
	small_parse_table_940(v);
}

/* EOF small_parse_table_187.c */
