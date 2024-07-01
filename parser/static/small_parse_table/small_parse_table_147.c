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
	v->a[14700] = state(991);
	v->a[14701] = 1;
	v->a[14702] = sym_command;
	v->a[14703] = state(992);
	v->a[14704] = 1;
	v->a[14705] = sym_negated_command;
	v->a[14706] = state(993);
	v->a[14707] = 1;
	v->a[14708] = sym_list;
	v->a[14709] = state(996);
	v->a[14710] = 1;
	v->a[14711] = sym_subshell;
	v->a[14712] = state(997);
	v->a[14713] = 1;
	v->a[14714] = sym_compound_statement;
	v->a[14715] = state(998);
	v->a[14716] = 1;
	v->a[14717] = sym_function_definition;
	v->a[14718] = state(999);
	v->a[14719] = 1;
	small_parse_table_736(v);
}

void	small_parse_table_736(t_small_parse_table_array *v)
{
	v->a[14720] = sym_case_statement;
	v->a[14721] = state(1000);
	v->a[14722] = 1;
	v->a[14723] = sym_if_statement;
	v->a[14724] = state(1001);
	v->a[14725] = 1;
	v->a[14726] = sym_while_statement;
	v->a[14727] = state(1002);
	v->a[14728] = 1;
	v->a[14729] = sym_for_statement;
	v->a[14730] = state(1004);
	v->a[14731] = 1;
	v->a[14732] = sym_redirected_statement;
	v->a[14733] = state(1028);
	v->a[14734] = 1;
	v->a[14735] = sym_pipeline;
	v->a[14736] = state(1136);
	v->a[14737] = 1;
	v->a[14738] = aux_sym_redirected_statement_repeat2;
	v->a[14739] = state(1898);
	small_parse_table_737(v);
}

void	small_parse_table_737(t_small_parse_table_array *v)
{
	v->a[14740] = 1;
	v->a[14741] = sym__statement_not_pipeline;
	v->a[14742] = actions(11);
	v->a[14743] = 2;
	v->a[14744] = anon_sym_while;
	v->a[14745] = anon_sym_until;
	v->a[14746] = actions(217);
	v->a[14747] = 2;
	v->a[14748] = sym_raw_string;
	v->a[14749] = sym_number;
	v->a[14750] = state(362);
	v->a[14751] = 5;
	v->a[14752] = sym_arithmetic_expansion;
	v->a[14753] = sym_string;
	v->a[14754] = sym_simple_expansion;
	v->a[14755] = sym_expansion;
	v->a[14756] = sym_command_substitution;
	v->a[14757] = actions(215);
	v->a[14758] = 7;
	v->a[14759] = anon_sym_LT;
	small_parse_table_738(v);
}

void	small_parse_table_738(t_small_parse_table_array *v)
{
	v->a[14760] = anon_sym_GT;
	v->a[14761] = anon_sym_GT_GT;
	v->a[14762] = anon_sym_LT_AMP;
	v->a[14763] = anon_sym_GT_AMP;
	v->a[14764] = anon_sym_GT_PIPE;
	v->a[14765] = anon_sym_LT_GT;
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
