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
	v->a[25800] = anon_sym_DOLLAR_LBRACE;
	v->a[25801] = anon_sym_DOLLAR_LPAREN;
	v->a[25802] = anon_sym_BQUOTE;
	v->a[25803] = sym_word;
	v->a[25804] = 15;
	v->a[25805] = actions(3);
	v->a[25806] = 1;
	v->a[25807] = sym_comment;
	v->a[25808] = actions(53);
	v->a[25809] = 1;
	v->a[25810] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25811] = actions(55);
	v->a[25812] = 1;
	v->a[25813] = anon_sym_DOLLAR;
	v->a[25814] = actions(57);
	v->a[25815] = 1;
	v->a[25816] = anon_sym_DQUOTE;
	v->a[25817] = actions(61);
	v->a[25818] = 1;
	v->a[25819] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1291(v);
}

void	small_parse_table_1291(t_small_parse_table_array *v)
{
	v->a[25820] = actions(63);
	v->a[25821] = 1;
	v->a[25822] = anon_sym_DOLLAR_LPAREN;
	v->a[25823] = actions(65);
	v->a[25824] = 1;
	v->a[25825] = anon_sym_BQUOTE;
	v->a[25826] = actions(341);
	v->a[25827] = 1;
	v->a[25828] = sym_variable_name;
	v->a[25829] = state(200);
	v->a[25830] = 1;
	v->a[25831] = sym_command_name;
	v->a[25832] = state(555);
	v->a[25833] = 1;
	v->a[25834] = sym_concatenation;
	v->a[25835] = state(1083);
	v->a[25836] = 1;
	v->a[25837] = sym_file_redirect;
	v->a[25838] = state(792);
	v->a[25839] = 2;
	small_parse_table_1292(v);
}

void	small_parse_table_1292(t_small_parse_table_array *v)
{
	v->a[25840] = sym_variable_assignment;
	v->a[25841] = aux_sym_command_repeat1;
	v->a[25842] = actions(59);
	v->a[25843] = 3;
	v->a[25844] = sym_raw_string;
	v->a[25845] = sym_number;
	v->a[25846] = sym_word;
	v->a[25847] = actions(758);
	v->a[25848] = 3;
	v->a[25849] = anon_sym_LT;
	v->a[25850] = anon_sym_GT;
	v->a[25851] = anon_sym_GT_GT;
	v->a[25852] = state(401);
	v->a[25853] = 5;
	v->a[25854] = sym_arithmetic_expansion;
	v->a[25855] = sym_string;
	v->a[25856] = sym_simple_expansion;
	v->a[25857] = sym_expansion;
	v->a[25858] = sym_command_substitution;
	v->a[25859] = 4;
	small_parse_table_1293(v);
}

void	small_parse_table_1293(t_small_parse_table_array *v)
{
	v->a[25860] = actions(3);
	v->a[25861] = 1;
	v->a[25862] = sym_comment;
	v->a[25863] = actions(1044);
	v->a[25864] = 1;
	v->a[25865] = sym_variable_name;
	v->a[25866] = actions(1042);
	v->a[25867] = 2;
	v->a[25868] = anon_sym_RPAREN;
	v->a[25869] = anon_sym_SEMI_SEMI;
	v->a[25870] = actions(1040);
	v->a[25871] = 20;
	v->a[25872] = anon_sym_for;
	v->a[25873] = anon_sym_while;
	v->a[25874] = anon_sym_until;
	v->a[25875] = anon_sym_if;
	v->a[25876] = anon_sym_case;
	v->a[25877] = anon_sym_LPAREN;
	v->a[25878] = anon_sym_LBRACE;
	v->a[25879] = anon_sym_BANG;
	small_parse_table_1294(v);
}

void	small_parse_table_1294(t_small_parse_table_array *v)
{
	v->a[25880] = anon_sym_LT;
	v->a[25881] = anon_sym_GT;
	v->a[25882] = anon_sym_GT_GT;
	v->a[25883] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25884] = anon_sym_DOLLAR;
	v->a[25885] = anon_sym_DQUOTE;
	v->a[25886] = sym_raw_string;
	v->a[25887] = sym_number;
	v->a[25888] = anon_sym_DOLLAR_LBRACE;
	v->a[25889] = anon_sym_DOLLAR_LPAREN;
	v->a[25890] = anon_sym_BQUOTE;
	v->a[25891] = sym_word;
	v->a[25892] = 15;
	v->a[25893] = actions(3);
	v->a[25894] = 1;
	v->a[25895] = sym_comment;
	v->a[25896] = actions(53);
	v->a[25897] = 1;
	v->a[25898] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25899] = actions(55);
	small_parse_table_1295(v);
}

/* EOF small_parse_table_258.c */
