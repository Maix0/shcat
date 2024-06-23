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
	v->a[14700] = sym_file_redirect;
	v->a[14701] = state(1422);
	v->a[14702] = 1;
	v->a[14703] = sym_pipeline;
	v->a[14704] = state(1429);
	v->a[14705] = 1;
	v->a[14706] = aux_sym_redirected_statement_repeat2;
	v->a[14707] = state(2271);
	v->a[14708] = 1;
	v->a[14709] = sym__statement_not_pipeline;
	v->a[14710] = state(2376);
	v->a[14711] = 1;
	v->a[14712] = sym__statements;
	v->a[14713] = actions(11);
	v->a[14714] = 2;
	v->a[14715] = anon_sym_while;
	v->a[14716] = anon_sym_until;
	v->a[14717] = actions(57);
	v->a[14718] = 2;
	v->a[14719] = anon_sym_LT_AMP_DASH;
	small_parse_table_736(v);
}

void	small_parse_table_736(t_small_parse_table_array *v)
{
	v->a[14720] = anon_sym_GT_AMP_DASH;
	v->a[14721] = actions(65);
	v->a[14722] = 2;
	v->a[14723] = sym_raw_string;
	v->a[14724] = sym_number;
	v->a[14725] = state(394);
	v->a[14726] = 5;
	v->a[14727] = sym_arithmetic_expansion;
	v->a[14728] = sym_string;
	v->a[14729] = sym_simple_expansion;
	v->a[14730] = sym_expansion;
	v->a[14731] = sym_command_substitution;
	v->a[14732] = actions(55);
	v->a[14733] = 8;
	v->a[14734] = anon_sym_LT;
	v->a[14735] = anon_sym_GT;
	v->a[14736] = anon_sym_GT_GT;
	v->a[14737] = anon_sym_AMP_GT;
	v->a[14738] = anon_sym_AMP_GT_GT;
	v->a[14739] = anon_sym_LT_AMP;
	small_parse_table_737(v);
}

void	small_parse_table_737(t_small_parse_table_array *v)
{
	v->a[14740] = anon_sym_GT_AMP;
	v->a[14741] = anon_sym_GT_PIPE;
	v->a[14742] = state(1211);
	v->a[14743] = 12;
	v->a[14744] = sym_redirected_statement;
	v->a[14745] = sym_for_statement;
	v->a[14746] = sym_while_statement;
	v->a[14747] = sym_if_statement;
	v->a[14748] = sym_case_statement;
	v->a[14749] = sym_function_definition;
	v->a[14750] = sym_compound_statement;
	v->a[14751] = sym_subshell;
	v->a[14752] = sym_list;
	v->a[14753] = sym_negated_command;
	v->a[14754] = sym_command;
	v->a[14755] = sym__variable_assignments;
	v->a[14756] = 32;
	v->a[14757] = actions(3);
	v->a[14758] = 1;
	v->a[14759] = sym_comment;
	small_parse_table_738(v);
}

void	small_parse_table_738(t_small_parse_table_array *v)
{
	v->a[14760] = actions(9);
	v->a[14761] = 1;
	v->a[14762] = anon_sym_for;
	v->a[14763] = actions(13);
	v->a[14764] = 1;
	v->a[14765] = anon_sym_if;
	v->a[14766] = actions(15);
	v->a[14767] = 1;
	v->a[14768] = anon_sym_case;
	v->a[14769] = actions(17);
	v->a[14770] = 1;
	v->a[14771] = anon_sym_LPAREN;
	v->a[14772] = actions(19);
	v->a[14773] = 1;
	v->a[14774] = anon_sym_LBRACE;
	v->a[14775] = actions(59);
	v->a[14776] = 1;
	v->a[14777] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14778] = actions(61);
	v->a[14779] = 1;
	small_parse_table_739(v);
}

void	small_parse_table_739(t_small_parse_table_array *v)
{
	v->a[14780] = anon_sym_DOLLAR;
	v->a[14781] = actions(63);
	v->a[14782] = 1;
	v->a[14783] = anon_sym_DQUOTE;
	v->a[14784] = actions(67);
	v->a[14785] = 1;
	v->a[14786] = anon_sym_DOLLAR_LBRACE;
	v->a[14787] = actions(69);
	v->a[14788] = 1;
	v->a[14789] = anon_sym_DOLLAR_LPAREN;
	v->a[14790] = actions(71);
	v->a[14791] = 1;
	v->a[14792] = anon_sym_BQUOTE;
	v->a[14793] = actions(220);
	v->a[14794] = 1;
	v->a[14795] = sym_word;
	v->a[14796] = actions(222);
	v->a[14797] = 1;
	v->a[14798] = anon_sym_BANG;
	v->a[14799] = actions(230);
	small_parse_table_740(v);
}

/* EOF small_parse_table_147.c */
