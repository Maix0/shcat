/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_405.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2025(t_small_parse_table_array *v)
{
	v->a[40500] = anon_sym_SEMI;
	v->a[40501] = 17;
	v->a[40502] = actions(1074);
	v->a[40503] = 1;
	v->a[40504] = sym_comment;
	v->a[40505] = actions(1326);
	v->a[40506] = 1;
	v->a[40507] = anon_sym_PIPE;
	v->a[40508] = actions(1330);
	v->a[40509] = 1;
	v->a[40510] = anon_sym_AMP_AMP;
	v->a[40511] = actions(1332);
	v->a[40512] = 1;
	v->a[40513] = anon_sym_PIPE_PIPE;
	v->a[40514] = actions(1334);
	v->a[40515] = 1;
	v->a[40516] = anon_sym_EQ;
	v->a[40517] = actions(1342);
	v->a[40518] = 1;
	v->a[40519] = anon_sym_CARET;
	small_parse_table_2026(v);
}

void	small_parse_table_2026(t_small_parse_table_array *v)
{
	v->a[40520] = actions(1344);
	v->a[40521] = 1;
	v->a[40522] = anon_sym_AMP;
	v->a[40523] = actions(1354);
	v->a[40524] = 1;
	v->a[40525] = anon_sym_QMARK;
	v->a[40526] = actions(1428);
	v->a[40527] = 1;
	v->a[40528] = anon_sym_RPAREN;
	v->a[40529] = actions(1336);
	v->a[40530] = 2;
	v->a[40531] = anon_sym_LT;
	v->a[40532] = anon_sym_GT;
	v->a[40533] = actions(1338);
	v->a[40534] = 2;
	v->a[40535] = anon_sym_GT_GT;
	v->a[40536] = anon_sym_LT_LT;
	v->a[40537] = actions(1346);
	v->a[40538] = 2;
	v->a[40539] = anon_sym_EQ_EQ;
	small_parse_table_2027(v);
}

void	small_parse_table_2027(t_small_parse_table_array *v)
{
	v->a[40540] = anon_sym_BANG_EQ;
	v->a[40541] = actions(1348);
	v->a[40542] = 2;
	v->a[40543] = anon_sym_LT_EQ;
	v->a[40544] = anon_sym_GT_EQ;
	v->a[40545] = actions(1350);
	v->a[40546] = 2;
	v->a[40547] = anon_sym_PLUS;
	v->a[40548] = anon_sym_DASH;
	v->a[40549] = actions(1356);
	v->a[40550] = 2;
	v->a[40551] = anon_sym_PLUS_PLUS2;
	v->a[40552] = anon_sym_DASH_DASH2;
	v->a[40553] = actions(1352);
	v->a[40554] = 3;
	v->a[40555] = anon_sym_STAR;
	v->a[40556] = anon_sym_SLASH;
	v->a[40557] = anon_sym_PERCENT;
	v->a[40558] = actions(1340);
	v->a[40559] = 10;
	small_parse_table_2028(v);
}

void	small_parse_table_2028(t_small_parse_table_array *v)
{
	v->a[40560] = anon_sym_PLUS_EQ;
	v->a[40561] = anon_sym_DASH_EQ;
	v->a[40562] = anon_sym_STAR_EQ;
	v->a[40563] = anon_sym_SLASH_EQ;
	v->a[40564] = anon_sym_PERCENT_EQ;
	v->a[40565] = anon_sym_LT_LT_EQ;
	v->a[40566] = anon_sym_GT_GT_EQ;
	v->a[40567] = anon_sym_AMP_EQ;
	v->a[40568] = anon_sym_CARET_EQ;
	v->a[40569] = anon_sym_PIPE_EQ;
	v->a[40570] = 5;
	v->a[40571] = actions(3);
	v->a[40572] = 1;
	v->a[40573] = sym_comment;
	v->a[40574] = actions(538);
	v->a[40575] = 2;
	v->a[40576] = sym_file_descriptor;
	v->a[40577] = sym_variable_name;
	v->a[40578] = state(587);
	v->a[40579] = 2;
	small_parse_table_2029(v);
}

void	small_parse_table_2029(t_small_parse_table_array *v)
{
	v->a[40580] = sym_concatenation;
	v->a[40581] = aux_sym_for_statement_repeat1;
	v->a[40582] = state(828);
	v->a[40583] = 5;
	v->a[40584] = sym_arithmetic_expansion;
	v->a[40585] = sym_string;
	v->a[40586] = sym_simple_expansion;
	v->a[40587] = sym_expansion;
	v->a[40588] = sym_command_substitution;
	v->a[40589] = actions(540);
	v->a[40590] = 24;
	v->a[40591] = anon_sym_PIPE;
	v->a[40592] = anon_sym_AMP_AMP;
	v->a[40593] = anon_sym_PIPE_PIPE;
	v->a[40594] = anon_sym_LT;
	v->a[40595] = anon_sym_GT;
	v->a[40596] = anon_sym_GT_GT;
	v->a[40597] = anon_sym_AMP_GT;
	v->a[40598] = anon_sym_AMP_GT_GT;
	v->a[40599] = anon_sym_LT_AMP;
	small_parse_table_2030(v);
}

/* EOF small_parse_table_405.c */
