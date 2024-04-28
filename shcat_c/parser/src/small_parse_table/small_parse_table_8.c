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
	v->a[800] = sym_arithmetic_expansion;
	v->a[801] = sym_brace_expression;
	v->a[802] = sym_string;
	v->a[803] = sym_translated_string;
	v->a[804] = sym_number;
	v->a[805] = sym_simple_expansion;
	v->a[806] = sym_expansion;
	v->a[807] = sym_command_substitution;
	v->a[808] = sym_process_substitution;
	v->a[809] = actions(1404);
	v->a[810] = 19;
	v->a[811] = anon_sym_SEMI;
	v->a[812] = anon_sym_PIPE_PIPE;
	v->a[813] = anon_sym_AMP_AMP;
	v->a[814] = anon_sym_PIPE;
	v->a[815] = anon_sym_AMP;
	v->a[816] = anon_sym_LT;
	v->a[817] = anon_sym_GT;
	v->a[818] = anon_sym_LT_LT;
	v->a[819] = anon_sym_GT_GT;
	small_parse_table_41(v);
}

void	small_parse_table_41(t_small_parse_table_array *v)
{
	v->a[820] = anon_sym_SEMI_SEMI;
	v->a[821] = anon_sym_PIPE_AMP;
	v->a[822] = anon_sym_AMP_GT;
	v->a[823] = anon_sym_AMP_GT_GT;
	v->a[824] = anon_sym_LT_AMP;
	v->a[825] = anon_sym_GT_AMP;
	v->a[826] = anon_sym_GT_PIPE;
	v->a[827] = anon_sym_LT_AMP_DASH;
	v->a[828] = anon_sym_GT_AMP_DASH;
	v->a[829] = anon_sym_LT_LT_DASH;
	v->a[830] = 26;
	v->a[831] = actions(3);
	v->a[832] = 1;
	v->a[833] = sym_comment;
	v->a[834] = actions(1410);
	v->a[835] = 1;
	v->a[836] = anon_sym_LT_LT_LT;
	v->a[837] = actions(1412);
	v->a[838] = 1;
	v->a[839] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_42(v);
}

void	small_parse_table_42(t_small_parse_table_array *v)
{
	v->a[840] = actions(1414);
	v->a[841] = 1;
	v->a[842] = anon_sym_DOLLAR;
	v->a[843] = actions(1416);
	v->a[844] = 1;
	v->a[845] = sym__special_character;
	v->a[846] = actions(1418);
	v->a[847] = 1;
	v->a[848] = anon_sym_DQUOTE;
	v->a[849] = actions(1420);
	v->a[850] = 1;
	v->a[851] = aux_sym_number_token1;
	v->a[852] = actions(1422);
	v->a[853] = 1;
	v->a[854] = aux_sym_number_token2;
	v->a[855] = actions(1424);
	v->a[856] = 1;
	v->a[857] = anon_sym_DOLLAR_LBRACE;
	v->a[858] = actions(1426);
	v->a[859] = 1;
	small_parse_table_43(v);
}

void	small_parse_table_43(t_small_parse_table_array *v)
{
	v->a[860] = anon_sym_DOLLAR_LPAREN;
	v->a[861] = actions(1428);
	v->a[862] = 1;
	v->a[863] = anon_sym_BQUOTE;
	v->a[864] = actions(1430);
	v->a[865] = 1;
	v->a[866] = anon_sym_DOLLAR_BQUOTE;
	v->a[867] = actions(1434);
	v->a[868] = 1;
	v->a[869] = sym_test_operator;
	v->a[870] = actions(1436);
	v->a[871] = 1;
	v->a[872] = sym__bare_dollar;
	v->a[873] = actions(1438);
	v->a[874] = 1;
	v->a[875] = sym__brace_start;
	v->a[876] = state(532);
	v->a[877] = 1;
	v->a[878] = aux_sym_command_repeat2;
	v->a[879] = state(1045);
	small_parse_table_44(v);
}

void	small_parse_table_44(t_small_parse_table_array *v)
{
	v->a[880] = 1;
	v->a[881] = aux_sym__literal_repeat1;
	v->a[882] = state(1181);
	v->a[883] = 1;
	v->a[884] = sym_herestring_redirect;
	v->a[885] = state(1182);
	v->a[886] = 1;
	v->a[887] = sym_concatenation;
	v->a[888] = actions(1402);
	v->a[889] = 2;
	v->a[890] = anon_sym_LPAREN_LPAREN;
	v->a[891] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[892] = actions(1406);
	v->a[893] = 2;
	v->a[894] = anon_sym_EQ_EQ;
	v->a[895] = anon_sym_EQ_TILDE;
	v->a[896] = actions(1432);
	v->a[897] = 2;
	v->a[898] = anon_sym_LT_LPAREN;
	v->a[899] = anon_sym_GT_LPAREN;
	small_parse_table_45(v);
}

/* EOF small_parse_table_8.c */
