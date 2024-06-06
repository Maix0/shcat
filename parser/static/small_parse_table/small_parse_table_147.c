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
	v->a[14700] = actions(2545);
	v->a[14701] = 1;
	v->a[14702] = sym__special_character;
	v->a[14703] = actions(2547);
	v->a[14704] = 1;
	v->a[14705] = anon_sym_DQUOTE;
	v->a[14706] = actions(2551);
	v->a[14707] = 1;
	v->a[14708] = aux_sym_number_token1;
	v->a[14709] = actions(2553);
	v->a[14710] = 1;
	v->a[14711] = aux_sym_number_token2;
	v->a[14712] = actions(2555);
	v->a[14713] = 1;
	v->a[14714] = anon_sym_DOLLAR_LBRACE;
	v->a[14715] = actions(2557);
	v->a[14716] = 1;
	v->a[14717] = anon_sym_DOLLAR_LPAREN;
	v->a[14718] = actions(2559);
	v->a[14719] = 1;
	small_parse_table_736(v);
}

void	small_parse_table_736(t_small_parse_table_array *v)
{
	v->a[14720] = anon_sym_BQUOTE;
	v->a[14721] = actions(2561);
	v->a[14722] = 1;
	v->a[14723] = anon_sym_DOLLAR_BQUOTE;
	v->a[14724] = actions(2563);
	v->a[14725] = 1;
	v->a[14726] = aux_sym__simple_variable_name_token1;
	v->a[14727] = actions(2565);
	v->a[14728] = 1;
	v->a[14729] = sym_variable_name;
	v->a[14730] = actions(2567);
	v->a[14731] = 1;
	v->a[14732] = sym__brace_start;
	v->a[14733] = state(1522);
	v->a[14734] = 1;
	v->a[14735] = aux_sym__literal_repeat1;
	v->a[14736] = actions(2549);
	v->a[14737] = 2;
	v->a[14738] = sym_test_operator;
	v->a[14739] = sym_raw_string;
	small_parse_table_737(v);
}

void	small_parse_table_737(t_small_parse_table_array *v)
{
	v->a[14740] = state(452);
	v->a[14741] = 3;
	v->a[14742] = sym_variable_assignment;
	v->a[14743] = sym_concatenation;
	v->a[14744] = aux_sym_declaration_command_repeat1;
	v->a[14745] = actions(725);
	v->a[14746] = 7;
	v->a[14747] = anon_sym_PIPE;
	v->a[14748] = anon_sym_LT;
	v->a[14749] = anon_sym_GT;
	v->a[14750] = anon_sym_AMP_GT;
	v->a[14751] = anon_sym_LT_AMP;
	v->a[14752] = anon_sym_GT_AMP;
	v->a[14753] = anon_sym_LT_LT;
	v->a[14754] = state(1350);
	v->a[14755] = 7;
	v->a[14756] = sym_arithmetic_expansion;
	v->a[14757] = sym_brace_expression;
	v->a[14758] = sym_string;
	v->a[14759] = sym_number;
	small_parse_table_738(v);
}

void	small_parse_table_738(t_small_parse_table_array *v)
{
	v->a[14760] = sym_simple_expansion;
	v->a[14761] = sym_expansion;
	v->a[14762] = sym_command_substitution;
	v->a[14763] = actions(727);
	v->a[14764] = 10;
	v->a[14765] = sym_file_descriptor;
	v->a[14766] = anon_sym_PIPE_AMP;
	v->a[14767] = anon_sym_AMP_AMP;
	v->a[14768] = anon_sym_PIPE_PIPE;
	v->a[14769] = anon_sym_GT_GT;
	v->a[14770] = anon_sym_AMP_GT_GT;
	v->a[14771] = anon_sym_GT_PIPE;
	v->a[14772] = anon_sym_LT_AMP_DASH;
	v->a[14773] = anon_sym_GT_AMP_DASH;
	v->a[14774] = anon_sym_LT_LT_DASH;
	v->a[14775] = 27;
	v->a[14776] = actions(3);
	v->a[14777] = 1;
	v->a[14778] = sym_comment;
	v->a[14779] = actions(2458);
	small_parse_table_739(v);
}

void	small_parse_table_739(t_small_parse_table_array *v)
{
	v->a[14780] = 1;
	v->a[14781] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14782] = actions(2460);
	v->a[14783] = 1;
	v->a[14784] = anon_sym_DOLLAR;
	v->a[14785] = actions(2462);
	v->a[14786] = 1;
	v->a[14787] = sym__special_character;
	v->a[14788] = actions(2464);
	v->a[14789] = 1;
	v->a[14790] = anon_sym_DQUOTE;
	v->a[14791] = actions(2466);
	v->a[14792] = 1;
	v->a[14793] = aux_sym_number_token1;
	v->a[14794] = actions(2468);
	v->a[14795] = 1;
	v->a[14796] = aux_sym_number_token2;
	v->a[14797] = actions(2470);
	v->a[14798] = 1;
	v->a[14799] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_740(v);
}

/* EOF small_parse_table_147.c */
