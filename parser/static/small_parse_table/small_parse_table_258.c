/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_258.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1290(t_small_parse_table_array *v)
{
	v->a[25800] = 1;
	v->a[25801] = anon_sym_BQUOTE;
	v->a[25802] = actions(113);
	v->a[25803] = 1;
	v->a[25804] = sym_variable_name;
	v->a[25805] = state(185);
	v->a[25806] = 1;
	v->a[25807] = sym_command_name;
	v->a[25808] = state(491);
	v->a[25809] = 1;
	v->a[25810] = aux_sym_command_repeat1;
	v->a[25811] = state(559);
	v->a[25812] = 1;
	v->a[25813] = sym_variable_assignment;
	v->a[25814] = state(599);
	v->a[25815] = 1;
	v->a[25816] = sym_concatenation;
	v->a[25817] = state(1073);
	v->a[25818] = 1;
	v->a[25819] = sym_file_redirect;
	small_parse_table_1291(v);
}

void	small_parse_table_1291(t_small_parse_table_array *v)
{
	v->a[25820] = state(1145);
	v->a[25821] = 1;
	v->a[25822] = sym_command;
	v->a[25823] = state(1164);
	v->a[25824] = 1;
	v->a[25825] = sym_subshell;
	v->a[25826] = actions(105);
	v->a[25827] = 3;
	v->a[25828] = sym_raw_string;
	v->a[25829] = sym_number;
	v->a[25830] = sym_word;
	v->a[25831] = state(341);
	v->a[25832] = 5;
	v->a[25833] = sym_arithmetic_expansion;
	v->a[25834] = sym_string;
	v->a[25835] = sym_simple_expansion;
	v->a[25836] = sym_expansion;
	v->a[25837] = sym_command_substitution;
	v->a[25838] = actions(965);
	v->a[25839] = 7;
	small_parse_table_1292(v);
}

void	small_parse_table_1292(t_small_parse_table_array *v)
{
	v->a[25840] = anon_sym_LT;
	v->a[25841] = anon_sym_GT;
	v->a[25842] = anon_sym_GT_GT;
	v->a[25843] = anon_sym_LT_AMP;
	v->a[25844] = anon_sym_GT_AMP;
	v->a[25845] = anon_sym_GT_PIPE;
	v->a[25846] = anon_sym_LT_GT;
	v->a[25847] = 13;
	v->a[25848] = actions(3);
	v->a[25849] = 1;
	v->a[25850] = sym_comment;
	v->a[25851] = actions(53);
	v->a[25852] = 1;
	v->a[25853] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25854] = actions(55);
	v->a[25855] = 1;
	v->a[25856] = anon_sym_DOLLAR;
	v->a[25857] = actions(57);
	v->a[25858] = 1;
	v->a[25859] = anon_sym_DQUOTE;
	small_parse_table_1293(v);
}

void	small_parse_table_1293(t_small_parse_table_array *v)
{
	v->a[25860] = actions(61);
	v->a[25861] = 1;
	v->a[25862] = anon_sym_DOLLAR_LBRACE;
	v->a[25863] = actions(63);
	v->a[25864] = 1;
	v->a[25865] = anon_sym_DOLLAR_LPAREN;
	v->a[25866] = actions(65);
	v->a[25867] = 1;
	v->a[25868] = anon_sym_BQUOTE;
	v->a[25869] = actions(535);
	v->a[25870] = 1;
	v->a[25871] = sym__bare_dollar;
	v->a[25872] = state(322);
	v->a[25873] = 1;
	v->a[25874] = aux_sym_command_repeat2;
	v->a[25875] = state(614);
	v->a[25876] = 1;
	v->a[25877] = sym_concatenation;
	v->a[25878] = actions(983);
	v->a[25879] = 3;
	small_parse_table_1294(v);
}

void	small_parse_table_1294(t_small_parse_table_array *v)
{
	v->a[25880] = sym_raw_string;
	v->a[25881] = sym_number;
	v->a[25882] = sym_word;
	v->a[25883] = state(570);
	v->a[25884] = 5;
	v->a[25885] = sym_arithmetic_expansion;
	v->a[25886] = sym_string;
	v->a[25887] = sym_simple_expansion;
	v->a[25888] = sym_expansion;
	v->a[25889] = sym_command_substitution;
	v->a[25890] = actions(533);
	v->a[25891] = 13;
	v->a[25892] = anon_sym_PIPE;
	v->a[25893] = anon_sym_AMP_AMP;
	v->a[25894] = anon_sym_PIPE_PIPE;
	v->a[25895] = anon_sym_LT;
	v->a[25896] = anon_sym_GT;
	v->a[25897] = anon_sym_GT_GT;
	v->a[25898] = anon_sym_LT_AMP;
	v->a[25899] = anon_sym_GT_AMP;
	small_parse_table_1295(v);
}

/* EOF small_parse_table_258.c */
