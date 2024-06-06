/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_8.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_40(t_small_parse_table_array *v)
{
	v->a[800] = sym_variable_assignment;
	v->a[801] = sym_concatenation;
	v->a[802] = aux_sym_declaration_command_repeat1;
	v->a[803] = state(605);
	v->a[804] = 7;
	v->a[805] = sym_arithmetic_expansion;
	v->a[806] = sym_brace_expression;
	v->a[807] = sym_string;
	v->a[808] = sym_number;
	v->a[809] = sym_simple_expansion;
	v->a[810] = sym_expansion;
	v->a[811] = sym_command_substitution;
	v->a[812] = actions(764);
	v->a[813] = 21;
	v->a[814] = anon_sym_PIPE;
	v->a[815] = anon_sym_SEMI_SEMI;
	v->a[816] = anon_sym_SEMI_AMP;
	v->a[817] = anon_sym_SEMI_SEMI_AMP;
	v->a[818] = anon_sym_PIPE_AMP;
	v->a[819] = anon_sym_AMP_AMP;
	small_parse_table_41(v);
}

void	small_parse_table_41(t_small_parse_table_array *v)
{
	v->a[820] = anon_sym_PIPE_PIPE;
	v->a[821] = anon_sym_LT;
	v->a[822] = anon_sym_GT;
	v->a[823] = anon_sym_GT_GT;
	v->a[824] = anon_sym_AMP_GT;
	v->a[825] = anon_sym_AMP_GT_GT;
	v->a[826] = anon_sym_LT_AMP;
	v->a[827] = anon_sym_GT_AMP;
	v->a[828] = anon_sym_GT_PIPE;
	v->a[829] = anon_sym_LT_AMP_DASH;
	v->a[830] = anon_sym_GT_AMP_DASH;
	v->a[831] = anon_sym_LT_LT;
	v->a[832] = anon_sym_LT_LT_DASH;
	v->a[833] = anon_sym_AMP;
	v->a[834] = anon_sym_SEMI;
	v->a[835] = 21;
	v->a[836] = actions(3);
	v->a[837] = 1;
	v->a[838] = sym_comment;
	v->a[839] = actions(889);
	small_parse_table_42(v);
}

void	small_parse_table_42(t_small_parse_table_array *v)
{
	v->a[840] = 1;
	v->a[841] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[842] = actions(891);
	v->a[843] = 1;
	v->a[844] = anon_sym_DOLLAR;
	v->a[845] = actions(893);
	v->a[846] = 1;
	v->a[847] = sym__special_character;
	v->a[848] = actions(895);
	v->a[849] = 1;
	v->a[850] = anon_sym_DQUOTE;
	v->a[851] = actions(897);
	v->a[852] = 1;
	v->a[853] = aux_sym_number_token1;
	v->a[854] = actions(899);
	v->a[855] = 1;
	v->a[856] = aux_sym_number_token2;
	v->a[857] = actions(901);
	v->a[858] = 1;
	v->a[859] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_43(v);
}

void	small_parse_table_43(t_small_parse_table_array *v)
{
	v->a[860] = actions(903);
	v->a[861] = 1;
	v->a[862] = anon_sym_DOLLAR_LPAREN;
	v->a[863] = actions(905);
	v->a[864] = 1;
	v->a[865] = anon_sym_BQUOTE;
	v->a[866] = actions(907);
	v->a[867] = 1;
	v->a[868] = anon_sym_DOLLAR_BQUOTE;
	v->a[869] = actions(909);
	v->a[870] = 1;
	v->a[871] = aux_sym__simple_variable_name_token1;
	v->a[872] = actions(911);
	v->a[873] = 1;
	v->a[874] = sym_variable_name;
	v->a[875] = actions(913);
	v->a[876] = 1;
	v->a[877] = sym_test_operator;
	v->a[878] = actions(915);
	v->a[879] = 1;
	small_parse_table_44(v);
}

void	small_parse_table_44(t_small_parse_table_array *v)
{
	v->a[880] = sym__brace_start;
	v->a[881] = state(962);
	v->a[882] = 1;
	v->a[883] = aux_sym__literal_repeat1;
	v->a[884] = actions(822);
	v->a[885] = 2;
	v->a[886] = sym_file_descriptor;
	v->a[887] = aux_sym_heredoc_redirect_token1;
	v->a[888] = actions(887);
	v->a[889] = 2;
	v->a[890] = sym_raw_string;
	v->a[891] = sym_word;
	v->a[892] = state(272);
	v->a[893] = 3;
	v->a[894] = sym_variable_assignment;
	v->a[895] = sym_concatenation;
	v->a[896] = aux_sym_declaration_command_repeat1;
	v->a[897] = state(605);
	v->a[898] = 7;
	v->a[899] = sym_arithmetic_expansion;
	small_parse_table_45(v);
}

/* EOF small_parse_table_8.c */
