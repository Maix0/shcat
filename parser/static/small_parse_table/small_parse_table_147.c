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
	v->a[14700] = sym_command;
	v->a[14701] = sym_variable_assignments;
	v->a[14702] = 34;
	v->a[14703] = actions(3);
	v->a[14704] = 1;
	v->a[14705] = sym_comment;
	v->a[14706] = actions(9);
	v->a[14707] = 1;
	v->a[14708] = anon_sym_for;
	v->a[14709] = actions(13);
	v->a[14710] = 1;
	v->a[14711] = anon_sym_if;
	v->a[14712] = actions(15);
	v->a[14713] = 1;
	v->a[14714] = anon_sym_case;
	v->a[14715] = actions(17);
	v->a[14716] = 1;
	v->a[14717] = anon_sym_LPAREN;
	v->a[14718] = actions(19);
	v->a[14719] = 1;
	small_parse_table_736(v);
}

void	small_parse_table_736(t_small_parse_table_array *v)
{
	v->a[14720] = anon_sym_LBRACE;
	v->a[14721] = actions(63);
	v->a[14722] = 1;
	v->a[14723] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14724] = actions(65);
	v->a[14725] = 1;
	v->a[14726] = anon_sym_DOLLAR;
	v->a[14727] = actions(67);
	v->a[14728] = 1;
	v->a[14729] = anon_sym_DQUOTE;
	v->a[14730] = actions(69);
	v->a[14731] = 1;
	v->a[14732] = sym_raw_string;
	v->a[14733] = actions(71);
	v->a[14734] = 1;
	v->a[14735] = aux_sym_number_token1;
	v->a[14736] = actions(73);
	v->a[14737] = 1;
	v->a[14738] = aux_sym_number_token2;
	v->a[14739] = actions(75);
	small_parse_table_737(v);
}

void	small_parse_table_737(t_small_parse_table_array *v)
{
	v->a[14740] = 1;
	v->a[14741] = anon_sym_DOLLAR_LBRACE;
	v->a[14742] = actions(77);
	v->a[14743] = 1;
	v->a[14744] = anon_sym_DOLLAR_LPAREN;
	v->a[14745] = actions(79);
	v->a[14746] = 1;
	v->a[14747] = anon_sym_BQUOTE;
	v->a[14748] = actions(81);
	v->a[14749] = 1;
	v->a[14750] = sym_file_descriptor;
	v->a[14751] = actions(83);
	v->a[14752] = 1;
	v->a[14753] = sym_variable_name;
	v->a[14754] = actions(238);
	v->a[14755] = 1;
	v->a[14756] = sym_word;
	v->a[14757] = actions(240);
	v->a[14758] = 1;
	v->a[14759] = anon_sym_BANG;
	small_parse_table_738(v);
}

void	small_parse_table_738(t_small_parse_table_array *v)
{
	v->a[14760] = state(132);
	v->a[14761] = 1;
	v->a[14762] = aux_sym__statements_repeat1;
	v->a[14763] = state(185);
	v->a[14764] = 1;
	v->a[14765] = sym_command_name;
	v->a[14766] = state(297);
	v->a[14767] = 1;
	v->a[14768] = sym_variable_assignment;
	v->a[14769] = state(582);
	v->a[14770] = 1;
	v->a[14771] = sym_concatenation;
	v->a[14772] = state(614);
	v->a[14773] = 1;
	v->a[14774] = aux_sym_command_repeat1;
	v->a[14775] = state(769);
	v->a[14776] = 1;
	v->a[14777] = sym_file_redirect;
	v->a[14778] = state(1133);
	v->a[14779] = 1;
	small_parse_table_739(v);
}

void	small_parse_table_739(t_small_parse_table_array *v)
{
	v->a[14780] = aux_sym_redirected_statement_repeat2;
	v->a[14781] = state(1142);
	v->a[14782] = 1;
	v->a[14783] = sym_pipeline;
	v->a[14784] = state(2041);
	v->a[14785] = 1;
	v->a[14786] = sym__statement_not_pipeline;
	v->a[14787] = state(2103);
	v->a[14788] = 1;
	v->a[14789] = sym__statements;
	v->a[14790] = actions(11);
	v->a[14791] = 2;
	v->a[14792] = anon_sym_while;
	v->a[14793] = anon_sym_until;
	v->a[14794] = actions(61);
	v->a[14795] = 2;
	v->a[14796] = anon_sym_LT_AMP_DASH;
	v->a[14797] = anon_sym_GT_AMP_DASH;
	v->a[14798] = state(397);
	v->a[14799] = 6;
	small_parse_table_740(v);
}

/* EOF small_parse_table_147.c */
