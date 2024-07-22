/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_147.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_735(t_small_parse_table_array *v)
{
	v->a[14700] = sym_variable_name;
	v->a[14701] = state(51);
	v->a[14702] = 1;
	v->a[14703] = aux_sym__terminated_statement;
	v->a[14704] = state(183);
	v->a[14705] = 1;
	v->a[14706] = sym_command_name;
	v->a[14707] = state(327);
	v->a[14708] = 1;
	v->a[14709] = sym_variable_assignment;
	v->a[14710] = state(655);
	v->a[14711] = 1;
	v->a[14712] = aux_sym_command_repeat1;
	v->a[14713] = state(661);
	v->a[14714] = 1;
	v->a[14715] = sym_concatenation;
	v->a[14716] = state(665);
	v->a[14717] = 1;
	v->a[14718] = sym_file_redirect;
	v->a[14719] = state(1142);
	small_parse_table_736(v);
}

void	small_parse_table_736(t_small_parse_table_array *v)
{
	v->a[14720] = 1;
	v->a[14721] = sym_pipeline;
	v->a[14722] = state(1198);
	v->a[14723] = 1;
	v->a[14724] = aux_sym_redirected_statement_repeat2;
	v->a[14725] = state(1901);
	v->a[14726] = 1;
	v->a[14727] = sym__statement_not_pipeline;
	v->a[14728] = actions(11);
	v->a[14729] = 2;
	v->a[14730] = anon_sym_while;
	v->a[14731] = anon_sym_until;
	v->a[14732] = actions(61);
	v->a[14733] = 2;
	v->a[14734] = sym_raw_string;
	v->a[14735] = sym_number;
	v->a[14736] = state(455);
	v->a[14737] = 5;
	v->a[14738] = sym_arithmetic_expansion;
	v->a[14739] = sym_string;
	small_parse_table_737(v);
}

void	small_parse_table_737(t_small_parse_table_array *v)
{
	v->a[14740] = sym_simple_expansion;
	v->a[14741] = sym_expansion;
	v->a[14742] = sym_command_substitution;
	v->a[14743] = actions(53);
	v->a[14744] = 7;
	v->a[14745] = anon_sym_LT;
	v->a[14746] = anon_sym_GT;
	v->a[14747] = anon_sym_GT_GT;
	v->a[14748] = anon_sym_LT_AMP;
	v->a[14749] = anon_sym_GT_AMP;
	v->a[14750] = anon_sym_GT_PIPE;
	v->a[14751] = anon_sym_LT_GT;
	v->a[14752] = state(1090);
	v->a[14753] = 12;
	v->a[14754] = sym_redirected_statement;
	v->a[14755] = sym_for_statement;
	v->a[14756] = sym_while_statement;
	v->a[14757] = sym_if_statement;
	v->a[14758] = sym_case_statement;
	v->a[14759] = sym_function_definition;
	small_parse_table_738(v);
}

void	small_parse_table_738(t_small_parse_table_array *v)
{
	v->a[14760] = sym_compound_statement;
	v->a[14761] = sym_subshell;
	v->a[14762] = sym_list;
	v->a[14763] = sym_negated_command;
	v->a[14764] = sym_command;
	v->a[14765] = sym__variable_assignments;
	v->a[14766] = 30;
	v->a[14767] = actions(3);
	v->a[14768] = 1;
	v->a[14769] = sym_comment;
	v->a[14770] = actions(9);
	v->a[14771] = 1;
	v->a[14772] = anon_sym_for;
	v->a[14773] = actions(13);
	v->a[14774] = 1;
	v->a[14775] = anon_sym_if;
	v->a[14776] = actions(15);
	v->a[14777] = 1;
	v->a[14778] = anon_sym_case;
	v->a[14779] = actions(17);
	small_parse_table_739(v);
}

void	small_parse_table_739(t_small_parse_table_array *v)
{
	v->a[14780] = 1;
	v->a[14781] = anon_sym_LPAREN;
	v->a[14782] = actions(19);
	v->a[14783] = 1;
	v->a[14784] = anon_sym_LBRACE;
	v->a[14785] = actions(43);
	v->a[14786] = 1;
	v->a[14787] = sym_word;
	v->a[14788] = actions(51);
	v->a[14789] = 1;
	v->a[14790] = anon_sym_BANG;
	v->a[14791] = actions(55);
	v->a[14792] = 1;
	v->a[14793] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14794] = actions(57);
	v->a[14795] = 1;
	v->a[14796] = anon_sym_DOLLAR;
	v->a[14797] = actions(59);
	v->a[14798] = 1;
	v->a[14799] = anon_sym_DQUOTE;
	small_parse_table_740(v);
}

/* EOF small_parse_table_147.c */
