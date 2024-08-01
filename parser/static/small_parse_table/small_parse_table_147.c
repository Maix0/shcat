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
	v->a[14700] = actions(51);
	v->a[14701] = 3;
	v->a[14702] = anon_sym_LT;
	v->a[14703] = anon_sym_GT;
	v->a[14704] = anon_sym_GT_GT;
	v->a[14705] = state(401);
	v->a[14706] = 5;
	v->a[14707] = sym_arithmetic_expansion;
	v->a[14708] = sym_string;
	v->a[14709] = sym_simple_expansion;
	v->a[14710] = sym_expansion;
	v->a[14711] = sym_command_substitution;
	v->a[14712] = state(927);
	v->a[14713] = 12;
	v->a[14714] = sym_redirected_statement;
	v->a[14715] = sym_for_statement;
	v->a[14716] = sym_while_statement;
	v->a[14717] = sym_if_statement;
	v->a[14718] = sym_case_statement;
	v->a[14719] = sym_function_definition;
	small_parse_table_736(v);
}

void	small_parse_table_736(t_small_parse_table_array *v)
{
	v->a[14720] = sym_compound_statement;
	v->a[14721] = sym_subshell;
	v->a[14722] = sym_list;
	v->a[14723] = sym_negated_command;
	v->a[14724] = sym_command;
	v->a[14725] = sym__variable_assignments;
	v->a[14726] = 27;
	v->a[14727] = actions(3);
	v->a[14728] = 1;
	v->a[14729] = sym_comment;
	v->a[14730] = actions(9);
	v->a[14731] = 1;
	v->a[14732] = anon_sym_for;
	v->a[14733] = actions(13);
	v->a[14734] = 1;
	v->a[14735] = anon_sym_if;
	v->a[14736] = actions(15);
	v->a[14737] = 1;
	v->a[14738] = anon_sym_case;
	v->a[14739] = actions(17);
	small_parse_table_737(v);
}

void	small_parse_table_737(t_small_parse_table_array *v)
{
	v->a[14740] = 1;
	v->a[14741] = anon_sym_LPAREN;
	v->a[14742] = actions(19);
	v->a[14743] = 1;
	v->a[14744] = anon_sym_LBRACE;
	v->a[14745] = actions(53);
	v->a[14746] = 1;
	v->a[14747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14748] = actions(55);
	v->a[14749] = 1;
	v->a[14750] = anon_sym_DOLLAR;
	v->a[14751] = actions(57);
	v->a[14752] = 1;
	v->a[14753] = anon_sym_DQUOTE;
	v->a[14754] = actions(61);
	v->a[14755] = 1;
	v->a[14756] = anon_sym_DOLLAR_LBRACE;
	v->a[14757] = actions(63);
	v->a[14758] = 1;
	v->a[14759] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_738(v);
}

void	small_parse_table_738(t_small_parse_table_array *v)
{
	v->a[14760] = actions(65);
	v->a[14761] = 1;
	v->a[14762] = anon_sym_BQUOTE;
	v->a[14763] = actions(67);
	v->a[14764] = 1;
	v->a[14765] = sym_variable_name;
	v->a[14766] = actions(204);
	v->a[14767] = 1;
	v->a[14768] = sym_word;
	v->a[14769] = actions(206);
	v->a[14770] = 1;
	v->a[14771] = anon_sym_BANG;
	v->a[14772] = state(179);
	v->a[14773] = 1;
	v->a[14774] = sym_command_name;
	v->a[14775] = state(244);
	v->a[14776] = 1;
	v->a[14777] = sym_variable_assignment;
	v->a[14778] = state(385);
	v->a[14779] = 1;
	small_parse_table_739(v);
}

void	small_parse_table_739(t_small_parse_table_array *v)
{
	v->a[14780] = aux_sym_command_repeat1;
	v->a[14781] = state(555);
	v->a[14782] = 1;
	v->a[14783] = sym_concatenation;
	v->a[14784] = state(599);
	v->a[14785] = 1;
	v->a[14786] = sym_file_redirect;
	v->a[14787] = state(1006);
	v->a[14788] = 1;
	v->a[14789] = aux_sym_redirected_statement_repeat2;
	v->a[14790] = state(1357);
	v->a[14791] = 1;
	v->a[14792] = sym_pipeline;
	v->a[14793] = actions(11);
	v->a[14794] = 2;
	v->a[14795] = anon_sym_while;
	v->a[14796] = anon_sym_until;
	v->a[14797] = actions(59);
	v->a[14798] = 2;
	v->a[14799] = sym_raw_string;
	small_parse_table_740(v);
}

/* EOF small_parse_table_147.c */
