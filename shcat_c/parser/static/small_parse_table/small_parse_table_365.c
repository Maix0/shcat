/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_365.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1825(t_small_parse_table_array *v)
{
	v->a[36500] = state(2368);
	v->a[36501] = 1;
	v->a[36502] = sym_concatenation;
	v->a[36503] = state(6771);
	v->a[36504] = 1;
	v->a[36505] = sym_subscript;
	v->a[36506] = actions(1041);
	v->a[36507] = 2;
	v->a[36508] = anon_sym_LPAREN_LPAREN;
	v->a[36509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36510] = actions(1051);
	v->a[36511] = 2;
	v->a[36512] = sym_raw_string;
	v->a[36513] = sym_ansi_c_string;
	v->a[36514] = actions(1065);
	v->a[36515] = 2;
	v->a[36516] = anon_sym_LT_LPAREN;
	v->a[36517] = anon_sym_GT_LPAREN;
	v->a[36518] = actions(1392);
	v->a[36519] = 2;
	small_parse_table_1826(v);
}

void	small_parse_table_1826(t_small_parse_table_array *v)
{
	v->a[36520] = anon_sym_LT_AMP_DASH;
	v->a[36521] = anon_sym_GT_AMP_DASH;
	v->a[36522] = state(3127);
	v->a[36523] = 2;
	v->a[36524] = sym_variable_assignment;
	v->a[36525] = aux_sym_command_repeat1;
	v->a[36526] = state(3581);
	v->a[36527] = 2;
	v->a[36528] = sym_file_redirect;
	v->a[36529] = sym_herestring_redirect;
	v->a[36530] = actions(1390);
	v->a[36531] = 3;
	v->a[36532] = anon_sym_GT_GT;
	v->a[36533] = anon_sym_AMP_GT_GT;
	v->a[36534] = anon_sym_GT_PIPE;
	v->a[36535] = actions(1388);
	v->a[36536] = 5;
	v->a[36537] = anon_sym_LT;
	v->a[36538] = anon_sym_GT;
	v->a[36539] = anon_sym_AMP_GT;
	small_parse_table_1827(v);
}

void	small_parse_table_1827(t_small_parse_table_array *v)
{
	v->a[36540] = anon_sym_LT_AMP;
	v->a[36541] = anon_sym_GT_AMP;
	v->a[36542] = state(1799);
	v->a[36543] = 9;
	v->a[36544] = sym_arithmetic_expansion;
	v->a[36545] = sym_brace_expression;
	v->a[36546] = sym_string;
	v->a[36547] = sym_translated_string;
	v->a[36548] = sym_number;
	v->a[36549] = sym_simple_expansion;
	v->a[36550] = sym_expansion;
	v->a[36551] = sym_command_substitution;
	v->a[36552] = sym_process_substitution;
	v->a[36553] = 8;
	v->a[36554] = actions(3);
	v->a[36555] = 1;
	v->a[36556] = sym_comment;
	v->a[36557] = actions(4867);
	v->a[36558] = 1;
	v->a[36559] = anon_sym_DQUOTE;
	small_parse_table_1828(v);
}

void	small_parse_table_1828(t_small_parse_table_array *v)
{
	v->a[36560] = actions(4871);
	v->a[36561] = 1;
	v->a[36562] = sym_variable_name;
	v->a[36563] = state(2525);
	v->a[36564] = 1;
	v->a[36565] = sym_string;
	v->a[36566] = actions(4869);
	v->a[36567] = 2;
	v->a[36568] = aux_sym__simple_variable_name_token1;
	v->a[36569] = aux_sym__multiline_variable_name_token1;
	v->a[36570] = actions(1235);
	v->a[36571] = 3;
	v->a[36572] = sym_file_descriptor;
	v->a[36573] = sym_test_operator;
	v->a[36574] = sym__brace_start;
	v->a[36575] = actions(4865);
	v->a[36576] = 9;
	v->a[36577] = anon_sym_DASH;
	v->a[36578] = anon_sym_STAR;
	v->a[36579] = anon_sym_BANG;
	small_parse_table_1829(v);
}

void	small_parse_table_1829(t_small_parse_table_array *v)
{
	v->a[36580] = anon_sym_QMARK;
	v->a[36581] = anon_sym_DOLLAR;
	v->a[36582] = anon_sym_POUND;
	v->a[36583] = anon_sym_AT2;
	v->a[36584] = anon_sym_0;
	v->a[36585] = anon_sym__;
	v->a[36586] = actions(1227);
	v->a[36587] = 32;
	v->a[36588] = anon_sym_LPAREN_LPAREN;
	v->a[36589] = anon_sym_PIPE_PIPE;
	v->a[36590] = anon_sym_AMP_AMP;
	v->a[36591] = anon_sym_PIPE;
	v->a[36592] = anon_sym_LT;
	v->a[36593] = anon_sym_GT;
	v->a[36594] = anon_sym_LT_LT;
	v->a[36595] = anon_sym_GT_GT;
	v->a[36596] = anon_sym_PIPE_AMP;
	v->a[36597] = anon_sym_AMP_GT;
	v->a[36598] = anon_sym_AMP_GT_GT;
	v->a[36599] = anon_sym_LT_AMP;
	small_parse_table_1830(v);
}

/* EOF small_parse_table_365.c */
