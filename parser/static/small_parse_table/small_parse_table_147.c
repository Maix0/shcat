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
	v->a[14700] = 1;
	v->a[14701] = aux_sym_command_repeat1;
	v->a[14702] = state(795);
	v->a[14703] = 1;
	v->a[14704] = sym_file_redirect;
	v->a[14705] = state(1154);
	v->a[14706] = 1;
	v->a[14707] = sym_pipeline;
	v->a[14708] = state(1240);
	v->a[14709] = 1;
	v->a[14710] = aux_sym_redirected_statement_repeat2;
	v->a[14711] = state(2119);
	v->a[14712] = 1;
	v->a[14713] = sym__statement_not_pipeline;
	v->a[14714] = state(2302);
	v->a[14715] = 1;
	v->a[14716] = sym__statements;
	v->a[14717] = actions(11);
	v->a[14718] = 2;
	v->a[14719] = anon_sym_while;
	small_parse_table_736(v);
}

void	small_parse_table_736(t_small_parse_table_array *v)
{
	v->a[14720] = anon_sym_until;
	v->a[14721] = actions(57);
	v->a[14722] = 2;
	v->a[14723] = anon_sym_LT_AMP_DASH;
	v->a[14724] = anon_sym_GT_AMP_DASH;
	v->a[14725] = actions(65);
	v->a[14726] = 2;
	v->a[14727] = sym_raw_string;
	v->a[14728] = sym_number;
	v->a[14729] = state(443);
	v->a[14730] = 5;
	v->a[14731] = sym_arithmetic_expansion;
	v->a[14732] = sym_string;
	v->a[14733] = sym_simple_expansion;
	v->a[14734] = sym_expansion;
	v->a[14735] = sym_command_substitution;
	v->a[14736] = actions(55);
	v->a[14737] = 6;
	v->a[14738] = anon_sym_LT;
	v->a[14739] = anon_sym_GT;
	small_parse_table_737(v);
}

void	small_parse_table_737(t_small_parse_table_array *v)
{
	v->a[14740] = anon_sym_GT_GT;
	v->a[14741] = anon_sym_LT_AMP;
	v->a[14742] = anon_sym_GT_AMP;
	v->a[14743] = anon_sym_GT_PIPE;
	v->a[14744] = state(1030);
	v->a[14745] = 12;
	v->a[14746] = sym_redirected_statement;
	v->a[14747] = sym_for_statement;
	v->a[14748] = sym_while_statement;
	v->a[14749] = sym_if_statement;
	v->a[14750] = sym_case_statement;
	v->a[14751] = sym_function_definition;
	v->a[14752] = sym_compound_statement;
	v->a[14753] = sym_subshell;
	v->a[14754] = sym_list;
	v->a[14755] = sym_negated_command;
	v->a[14756] = sym_command;
	v->a[14757] = sym__variable_assignments;
	v->a[14758] = 32;
	v->a[14759] = actions(3);
	small_parse_table_738(v);
}

void	small_parse_table_738(t_small_parse_table_array *v)
{
	v->a[14760] = 1;
	v->a[14761] = sym_comment;
	v->a[14762] = actions(9);
	v->a[14763] = 1;
	v->a[14764] = anon_sym_for;
	v->a[14765] = actions(13);
	v->a[14766] = 1;
	v->a[14767] = anon_sym_if;
	v->a[14768] = actions(15);
	v->a[14769] = 1;
	v->a[14770] = anon_sym_case;
	v->a[14771] = actions(17);
	v->a[14772] = 1;
	v->a[14773] = anon_sym_LPAREN;
	v->a[14774] = actions(19);
	v->a[14775] = 1;
	v->a[14776] = anon_sym_LBRACE;
	v->a[14777] = actions(59);
	v->a[14778] = 1;
	v->a[14779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_739(v);
}

void	small_parse_table_739(t_small_parse_table_array *v)
{
	v->a[14780] = actions(61);
	v->a[14781] = 1;
	v->a[14782] = anon_sym_DOLLAR;
	v->a[14783] = actions(63);
	v->a[14784] = 1;
	v->a[14785] = anon_sym_DQUOTE;
	v->a[14786] = actions(67);
	v->a[14787] = 1;
	v->a[14788] = anon_sym_DOLLAR_LBRACE;
	v->a[14789] = actions(69);
	v->a[14790] = 1;
	v->a[14791] = anon_sym_DOLLAR_LPAREN;
	v->a[14792] = actions(71);
	v->a[14793] = 1;
	v->a[14794] = anon_sym_BQUOTE;
	v->a[14795] = actions(220);
	v->a[14796] = 1;
	v->a[14797] = sym_word;
	v->a[14798] = actions(222);
	v->a[14799] = 1;
	small_parse_table_740(v);
}

/* EOF small_parse_table_147.c */
