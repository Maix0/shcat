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
	v->a[18700] = anon_sym_GT_AMP;
	v->a[18701] = anon_sym_GT_PIPE;
	v->a[18702] = state(1091);
	v->a[18703] = 12;
	v->a[18704] = sym_redirected_statement;
	v->a[18705] = sym_for_statement;
	v->a[18706] = sym_while_statement;
	v->a[18707] = sym_if_statement;
	v->a[18708] = sym_case_statement;
	v->a[18709] = sym_function_definition;
	v->a[18710] = sym_compound_statement;
	v->a[18711] = sym_subshell;
	v->a[18712] = sym_list;
	v->a[18713] = sym_negated_command;
	v->a[18714] = sym_command;
	v->a[18715] = sym_variable_assignments;
	v->a[18716] = 32;
	v->a[18717] = actions(3);
	v->a[18718] = 1;
	v->a[18719] = sym_comment;
	small_parse_table_936(v);
}

void	small_parse_table_936(t_small_parse_table_array *v)
{
	v->a[18720] = actions(9);
	v->a[18721] = 1;
	v->a[18722] = anon_sym_for;
	v->a[18723] = actions(13);
	v->a[18724] = 1;
	v->a[18725] = anon_sym_if;
	v->a[18726] = actions(15);
	v->a[18727] = 1;
	v->a[18728] = anon_sym_case;
	v->a[18729] = actions(17);
	v->a[18730] = 1;
	v->a[18731] = anon_sym_LPAREN;
	v->a[18732] = actions(19);
	v->a[18733] = 1;
	v->a[18734] = anon_sym_LBRACE;
	v->a[18735] = actions(63);
	v->a[18736] = 1;
	v->a[18737] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18738] = actions(65);
	v->a[18739] = 1;
	small_parse_table_937(v);
}

void	small_parse_table_937(t_small_parse_table_array *v)
{
	v->a[18740] = anon_sym_DOLLAR;
	v->a[18741] = actions(67);
	v->a[18742] = 1;
	v->a[18743] = anon_sym_DQUOTE;
	v->a[18744] = actions(69);
	v->a[18745] = 1;
	v->a[18746] = sym_raw_string;
	v->a[18747] = actions(71);
	v->a[18748] = 1;
	v->a[18749] = aux_sym_number_token1;
	v->a[18750] = actions(73);
	v->a[18751] = 1;
	v->a[18752] = aux_sym_number_token2;
	v->a[18753] = actions(75);
	v->a[18754] = 1;
	v->a[18755] = anon_sym_DOLLAR_LBRACE;
	v->a[18756] = actions(77);
	v->a[18757] = 1;
	v->a[18758] = anon_sym_DOLLAR_LPAREN;
	v->a[18759] = actions(79);
	small_parse_table_938(v);
}

void	small_parse_table_938(t_small_parse_table_array *v)
{
	v->a[18760] = 1;
	v->a[18761] = anon_sym_BQUOTE;
	v->a[18762] = actions(81);
	v->a[18763] = 1;
	v->a[18764] = sym_file_descriptor;
	v->a[18765] = actions(83);
	v->a[18766] = 1;
	v->a[18767] = sym_variable_name;
	v->a[18768] = actions(238);
	v->a[18769] = 1;
	v->a[18770] = sym_word;
	v->a[18771] = actions(240);
	v->a[18772] = 1;
	v->a[18773] = anon_sym_BANG;
	v->a[18774] = state(185);
	v->a[18775] = 1;
	v->a[18776] = sym_command_name;
	v->a[18777] = state(300);
	v->a[18778] = 1;
	v->a[18779] = sym_variable_assignment;
	small_parse_table_939(v);
}

void	small_parse_table_939(t_small_parse_table_array *v)
{
	v->a[18780] = state(582);
	v->a[18781] = 1;
	v->a[18782] = sym_concatenation;
	v->a[18783] = state(614);
	v->a[18784] = 1;
	v->a[18785] = aux_sym_command_repeat1;
	v->a[18786] = state(769);
	v->a[18787] = 1;
	v->a[18788] = sym_file_redirect;
	v->a[18789] = state(1085);
	v->a[18790] = 1;
	v->a[18791] = sym_pipeline;
	v->a[18792] = state(1133);
	v->a[18793] = 1;
	v->a[18794] = aux_sym_redirected_statement_repeat2;
	v->a[18795] = state(2041);
	v->a[18796] = 1;
	v->a[18797] = sym__statement_not_pipeline;
	v->a[18798] = actions(11);
	v->a[18799] = 2;
	small_parse_table_940(v);
}

/* EOF small_parse_table_187.c */
