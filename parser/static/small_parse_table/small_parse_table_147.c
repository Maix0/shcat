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
	v->a[14700] = anon_sym_GT_PIPE;
	v->a[14701] = anon_sym_LT_GT;
	v->a[14702] = state(966);
	v->a[14703] = 12;
	v->a[14704] = sym_redirected_statement;
	v->a[14705] = sym_for_statement;
	v->a[14706] = sym_while_statement;
	v->a[14707] = sym_if_statement;
	v->a[14708] = sym_case_statement;
	v->a[14709] = sym_function_definition;
	v->a[14710] = sym_compound_statement;
	v->a[14711] = sym_subshell;
	v->a[14712] = sym_list;
	v->a[14713] = sym_negated_command;
	v->a[14714] = sym_command;
	v->a[14715] = sym__variable_assignments;
	v->a[14716] = 28;
	v->a[14717] = actions(3);
	v->a[14718] = 1;
	v->a[14719] = sym_comment;
	small_parse_table_736(v);
}

void	small_parse_table_736(t_small_parse_table_array *v)
{
	v->a[14720] = actions(9);
	v->a[14721] = 1;
	v->a[14722] = anon_sym_for;
	v->a[14723] = actions(13);
	v->a[14724] = 1;
	v->a[14725] = anon_sym_if;
	v->a[14726] = actions(15);
	v->a[14727] = 1;
	v->a[14728] = anon_sym_case;
	v->a[14729] = actions(17);
	v->a[14730] = 1;
	v->a[14731] = anon_sym_LPAREN;
	v->a[14732] = actions(19);
	v->a[14733] = 1;
	v->a[14734] = anon_sym_LBRACE;
	v->a[14735] = actions(41);
	v->a[14736] = 1;
	v->a[14737] = sym_word;
	v->a[14738] = actions(49);
	v->a[14739] = 1;
	small_parse_table_737(v);
}

void	small_parse_table_737(t_small_parse_table_array *v)
{
	v->a[14740] = anon_sym_BANG;
	v->a[14741] = actions(53);
	v->a[14742] = 1;
	v->a[14743] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14744] = actions(55);
	v->a[14745] = 1;
	v->a[14746] = anon_sym_DOLLAR;
	v->a[14747] = actions(57);
	v->a[14748] = 1;
	v->a[14749] = anon_sym_DQUOTE;
	v->a[14750] = actions(61);
	v->a[14751] = 1;
	v->a[14752] = anon_sym_DOLLAR_LBRACE;
	v->a[14753] = actions(63);
	v->a[14754] = 1;
	v->a[14755] = anon_sym_DOLLAR_LPAREN;
	v->a[14756] = actions(65);
	v->a[14757] = 1;
	v->a[14758] = anon_sym_BQUOTE;
	v->a[14759] = actions(67);
	small_parse_table_738(v);
}

void	small_parse_table_738(t_small_parse_table_array *v)
{
	v->a[14760] = 1;
	v->a[14761] = sym_variable_name;
	v->a[14762] = state(271);
	v->a[14763] = 1;
	v->a[14764] = sym_command_name;
	v->a[14765] = state(308);
	v->a[14766] = 1;
	v->a[14767] = sym_variable_assignment;
	v->a[14768] = state(482);
	v->a[14769] = 1;
	v->a[14770] = aux_sym_command_repeat1;
	v->a[14771] = state(600);
	v->a[14772] = 1;
	v->a[14773] = sym_file_redirect;
	v->a[14774] = state(602);
	v->a[14775] = 1;
	v->a[14776] = sym_concatenation;
	v->a[14777] = state(979);
	v->a[14778] = 1;
	v->a[14779] = sym_pipeline;
	small_parse_table_739(v);
}

void	small_parse_table_739(t_small_parse_table_array *v)
{
	v->a[14780] = state(1068);
	v->a[14781] = 1;
	v->a[14782] = aux_sym_redirected_statement_repeat2;
	v->a[14783] = state(1609);
	v->a[14784] = 1;
	v->a[14785] = sym__statement_not_pipeline;
	v->a[14786] = actions(11);
	v->a[14787] = 2;
	v->a[14788] = anon_sym_while;
	v->a[14789] = anon_sym_until;
	v->a[14790] = actions(59);
	v->a[14791] = 2;
	v->a[14792] = sym_raw_string;
	v->a[14793] = sym_number;
	v->a[14794] = state(425);
	v->a[14795] = 5;
	v->a[14796] = sym_arithmetic_expansion;
	v->a[14797] = sym_string;
	v->a[14798] = sym_simple_expansion;
	v->a[14799] = sym_expansion;
	small_parse_table_740(v);
}

/* EOF small_parse_table_147.c */
