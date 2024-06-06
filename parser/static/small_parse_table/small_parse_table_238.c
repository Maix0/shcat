/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_238.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1190(t_small_parse_table_array *v)
{
	v->a[23800] = actions(3082);
	v->a[23801] = 1;
	v->a[23802] = sym__special_character;
	v->a[23803] = actions(3084);
	v->a[23804] = 1;
	v->a[23805] = anon_sym_DQUOTE;
	v->a[23806] = actions(3088);
	v->a[23807] = 1;
	v->a[23808] = aux_sym_number_token1;
	v->a[23809] = actions(3090);
	v->a[23810] = 1;
	v->a[23811] = aux_sym_number_token2;
	v->a[23812] = actions(3092);
	v->a[23813] = 1;
	v->a[23814] = anon_sym_DOLLAR_LBRACE;
	v->a[23815] = actions(3094);
	v->a[23816] = 1;
	v->a[23817] = anon_sym_DOLLAR_LPAREN;
	v->a[23818] = actions(3096);
	v->a[23819] = 1;
	small_parse_table_1191(v);
}

void	small_parse_table_1191(t_small_parse_table_array *v)
{
	v->a[23820] = anon_sym_BQUOTE;
	v->a[23821] = actions(3098);
	v->a[23822] = 1;
	v->a[23823] = anon_sym_DOLLAR_BQUOTE;
	v->a[23824] = actions(3102);
	v->a[23825] = 1;
	v->a[23826] = sym__brace_start;
	v->a[23827] = actions(3133);
	v->a[23828] = 1;
	v->a[23829] = aux_sym__simple_variable_name_token1;
	v->a[23830] = state(1629);
	v->a[23831] = 1;
	v->a[23832] = aux_sym__literal_repeat1;
	v->a[23833] = actions(3086);
	v->a[23834] = 2;
	v->a[23835] = sym_test_operator;
	v->a[23836] = sym_raw_string;
	v->a[23837] = state(565);
	v->a[23838] = 2;
	v->a[23839] = sym_concatenation;
	small_parse_table_1192(v);
}

void	small_parse_table_1192(t_small_parse_table_array *v)
{
	v->a[23840] = aux_sym_unset_command_repeat1;
	v->a[23841] = actions(1244);
	v->a[23842] = 7;
	v->a[23843] = anon_sym_PIPE;
	v->a[23844] = anon_sym_LT;
	v->a[23845] = anon_sym_GT;
	v->a[23846] = anon_sym_AMP_GT;
	v->a[23847] = anon_sym_LT_AMP;
	v->a[23848] = anon_sym_GT_AMP;
	v->a[23849] = anon_sym_LT_LT;
	v->a[23850] = state(1442);
	v->a[23851] = 7;
	v->a[23852] = sym_arithmetic_expansion;
	v->a[23853] = sym_brace_expression;
	v->a[23854] = sym_string;
	v->a[23855] = sym_number;
	v->a[23856] = sym_simple_expansion;
	v->a[23857] = sym_expansion;
	v->a[23858] = sym_command_substitution;
	v->a[23859] = actions(1246);
	small_parse_table_1193(v);
}

void	small_parse_table_1193(t_small_parse_table_array *v)
{
	v->a[23860] = 10;
	v->a[23861] = sym_file_descriptor;
	v->a[23862] = anon_sym_PIPE_AMP;
	v->a[23863] = anon_sym_AMP_AMP;
	v->a[23864] = anon_sym_PIPE_PIPE;
	v->a[23865] = anon_sym_GT_GT;
	v->a[23866] = anon_sym_AMP_GT_GT;
	v->a[23867] = anon_sym_GT_PIPE;
	v->a[23868] = anon_sym_LT_AMP_DASH;
	v->a[23869] = anon_sym_GT_AMP_DASH;
	v->a[23870] = anon_sym_LT_LT_DASH;
	v->a[23871] = 6;
	v->a[23872] = actions(3);
	v->a[23873] = 1;
	v->a[23874] = sym_comment;
	v->a[23875] = actions(3139);
	v->a[23876] = 1;
	v->a[23877] = sym_variable_name;
	v->a[23878] = actions(3137);
	v->a[23879] = 2;
	small_parse_table_1194(v);
}

void	small_parse_table_1194(t_small_parse_table_array *v)
{
	v->a[23880] = aux_sym__simple_variable_name_token1;
	v->a[23881] = aux_sym__multiline_variable_name_token1;
	v->a[23882] = actions(828);
	v->a[23883] = 3;
	v->a[23884] = sym_file_descriptor;
	v->a[23885] = sym_test_operator;
	v->a[23886] = sym__brace_start;
	v->a[23887] = actions(3135);
	v->a[23888] = 9;
	v->a[23889] = anon_sym_BANG;
	v->a[23890] = anon_sym_DASH;
	v->a[23891] = anon_sym_STAR;
	v->a[23892] = anon_sym_QMARK;
	v->a[23893] = anon_sym_DOLLAR;
	v->a[23894] = anon_sym_POUND;
	v->a[23895] = anon_sym_AT;
	v->a[23896] = anon_sym_0;
	v->a[23897] = anon_sym__;
	v->a[23898] = actions(826);
	v->a[23899] = 27;
	small_parse_table_1195(v);
}

/* EOF small_parse_table_238.c */
