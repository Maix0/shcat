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
	v->a[25801] = anon_sym_DQUOTE;
	v->a[25802] = actions(4210);
	v->a[25803] = 1;
	v->a[25804] = aux_sym_number_token1;
	v->a[25805] = actions(4213);
	v->a[25806] = 1;
	v->a[25807] = aux_sym_number_token2;
	v->a[25808] = actions(4216);
	v->a[25809] = 1;
	v->a[25810] = anon_sym_DOLLAR_LBRACE;
	v->a[25811] = actions(4219);
	v->a[25812] = 1;
	v->a[25813] = anon_sym_DOLLAR_LPAREN;
	v->a[25814] = actions(4222);
	v->a[25815] = 1;
	v->a[25816] = anon_sym_BQUOTE;
	v->a[25817] = actions(4225);
	v->a[25818] = 1;
	v->a[25819] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1291(v);
}

void	small_parse_table_1291(t_small_parse_table_array *v)
{
	v->a[25820] = actions(4231);
	v->a[25821] = 1;
	v->a[25822] = aux_sym__simple_variable_name_token1;
	v->a[25823] = actions(4234);
	v->a[25824] = 1;
	v->a[25825] = sym_variable_name;
	v->a[25826] = actions(4237);
	v->a[25827] = 1;
	v->a[25828] = sym_test_operator;
	v->a[25829] = actions(4240);
	v->a[25830] = 1;
	v->a[25831] = sym__brace_start;
	v->a[25832] = state(2688);
	v->a[25833] = 1;
	v->a[25834] = aux_sym__literal_repeat1;
	v->a[25835] = state(6751);
	v->a[25836] = 1;
	v->a[25837] = sym_subscript;
	v->a[25838] = actions(4192);
	v->a[25839] = 2;
	small_parse_table_1292(v);
}

void	small_parse_table_1292(t_small_parse_table_array *v)
{
	v->a[25840] = anon_sym_LPAREN_LPAREN;
	v->a[25841] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25842] = actions(4207);
	v->a[25843] = 2;
	v->a[25844] = sym_raw_string;
	v->a[25845] = sym_ansi_c_string;
	v->a[25846] = actions(4228);
	v->a[25847] = 2;
	v->a[25848] = anon_sym_LT_LPAREN;
	v->a[25849] = anon_sym_GT_LPAREN;
	v->a[25850] = state(803);
	v->a[25851] = 3;
	v->a[25852] = sym_variable_assignment;
	v->a[25853] = sym_concatenation;
	v->a[25854] = aux_sym_declaration_command_repeat1;
	v->a[25855] = actions(1702);
	v->a[25856] = 7;
	v->a[25857] = anon_sym_PIPE;
	v->a[25858] = anon_sym_LT;
	v->a[25859] = anon_sym_GT;
	small_parse_table_1293(v);
}

void	small_parse_table_1293(t_small_parse_table_array *v)
{
	v->a[25860] = anon_sym_LT_LT;
	v->a[25861] = anon_sym_AMP_GT;
	v->a[25862] = anon_sym_LT_AMP;
	v->a[25863] = anon_sym_GT_AMP;
	v->a[25864] = state(2419);
	v->a[25865] = 9;
	v->a[25866] = sym_arithmetic_expansion;
	v->a[25867] = sym_brace_expression;
	v->a[25868] = sym_string;
	v->a[25869] = sym_translated_string;
	v->a[25870] = sym_number;
	v->a[25871] = sym_simple_expansion;
	v->a[25872] = sym_expansion;
	v->a[25873] = sym_command_substitution;
	v->a[25874] = sym_process_substitution;
	v->a[25875] = actions(1704);
	v->a[25876] = 10;
	v->a[25877] = sym_file_descriptor;
	v->a[25878] = anon_sym_PIPE_PIPE;
	v->a[25879] = anon_sym_AMP_AMP;
	small_parse_table_1294(v);
}

void	small_parse_table_1294(t_small_parse_table_array *v)
{
	v->a[25880] = anon_sym_GT_GT;
	v->a[25881] = anon_sym_PIPE_AMP;
	v->a[25882] = anon_sym_AMP_GT_GT;
	v->a[25883] = anon_sym_GT_PIPE;
	v->a[25884] = anon_sym_LT_AMP_DASH;
	v->a[25885] = anon_sym_GT_AMP_DASH;
	v->a[25886] = anon_sym_LT_LT_DASH;
	v->a[25887] = 21;
	v->a[25888] = actions(3);
	v->a[25889] = 1;
	v->a[25890] = sym_comment;
	v->a[25891] = actions(4078);
	v->a[25892] = 1;
	v->a[25893] = anon_sym_DOLLAR_LBRACK;
	v->a[25894] = actions(4080);
	v->a[25895] = 1;
	v->a[25896] = anon_sym_DOLLAR;
	v->a[25897] = actions(4084);
	v->a[25898] = 1;
	v->a[25899] = anon_sym_DQUOTE;
	small_parse_table_1295(v);
}

/* EOF small_parse_table_258.c */
