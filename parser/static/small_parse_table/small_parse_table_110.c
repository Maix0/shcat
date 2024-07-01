/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_110.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_550(t_small_parse_table_array *v)
{
	v->a[11000] = anon_sym_until;
	v->a[11001] = actions(57);
	v->a[11002] = 2;
	v->a[11003] = anon_sym_LT_AMP_DASH;
	v->a[11004] = anon_sym_GT_AMP_DASH;
	v->a[11005] = actions(65);
	v->a[11006] = 2;
	v->a[11007] = sym_raw_string;
	v->a[11008] = sym_number;
	v->a[11009] = state(443);
	v->a[11010] = 5;
	v->a[11011] = sym_arithmetic_expansion;
	v->a[11012] = sym_string;
	v->a[11013] = sym_simple_expansion;
	v->a[11014] = sym_expansion;
	v->a[11015] = sym_command_substitution;
	v->a[11016] = actions(55);
	v->a[11017] = 6;
	v->a[11018] = anon_sym_LT;
	v->a[11019] = anon_sym_GT;
	small_parse_table_551(v);
}

void	small_parse_table_551(t_small_parse_table_array *v)
{
	v->a[11020] = anon_sym_GT_GT;
	v->a[11021] = anon_sym_LT_AMP;
	v->a[11022] = anon_sym_GT_AMP;
	v->a[11023] = anon_sym_GT_PIPE;
	v->a[11024] = state(1030);
	v->a[11025] = 12;
	v->a[11026] = sym_redirected_statement;
	v->a[11027] = sym_for_statement;
	v->a[11028] = sym_while_statement;
	v->a[11029] = sym_if_statement;
	v->a[11030] = sym_case_statement;
	v->a[11031] = sym_function_definition;
	v->a[11032] = sym_compound_statement;
	v->a[11033] = sym_subshell;
	v->a[11034] = sym_list;
	v->a[11035] = sym_negated_command;
	v->a[11036] = sym_command;
	v->a[11037] = sym__variable_assignments;
	v->a[11038] = 32;
	v->a[11039] = actions(3);
	small_parse_table_552(v);
}

void	small_parse_table_552(t_small_parse_table_array *v)
{
	v->a[11040] = 1;
	v->a[11041] = sym_comment;
	v->a[11042] = actions(9);
	v->a[11043] = 1;
	v->a[11044] = anon_sym_for;
	v->a[11045] = actions(13);
	v->a[11046] = 1;
	v->a[11047] = anon_sym_if;
	v->a[11048] = actions(15);
	v->a[11049] = 1;
	v->a[11050] = anon_sym_case;
	v->a[11051] = actions(17);
	v->a[11052] = 1;
	v->a[11053] = anon_sym_LPAREN;
	v->a[11054] = actions(19);
	v->a[11055] = 1;
	v->a[11056] = anon_sym_LBRACE;
	v->a[11057] = actions(59);
	v->a[11058] = 1;
	v->a[11059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_553(v);
}

void	small_parse_table_553(t_small_parse_table_array *v)
{
	v->a[11060] = actions(61);
	v->a[11061] = 1;
	v->a[11062] = anon_sym_DOLLAR;
	v->a[11063] = actions(63);
	v->a[11064] = 1;
	v->a[11065] = anon_sym_DQUOTE;
	v->a[11066] = actions(67);
	v->a[11067] = 1;
	v->a[11068] = anon_sym_DOLLAR_LBRACE;
	v->a[11069] = actions(69);
	v->a[11070] = 1;
	v->a[11071] = anon_sym_DOLLAR_LPAREN;
	v->a[11072] = actions(71);
	v->a[11073] = 1;
	v->a[11074] = anon_sym_BQUOTE;
	v->a[11075] = actions(73);
	v->a[11076] = 1;
	v->a[11077] = sym_file_descriptor;
	v->a[11078] = actions(75);
	v->a[11079] = 1;
	small_parse_table_554(v);
}

void	small_parse_table_554(t_small_parse_table_array *v)
{
	v->a[11080] = sym_variable_name;
	v->a[11081] = actions(240);
	v->a[11082] = 1;
	v->a[11083] = sym_word;
	v->a[11084] = actions(242);
	v->a[11085] = 1;
	v->a[11086] = anon_sym_BANG;
	v->a[11087] = state(136);
	v->a[11088] = 1;
	v->a[11089] = aux_sym__statements_repeat1;
	v->a[11090] = state(188);
	v->a[11091] = 1;
	v->a[11092] = sym_command_name;
	v->a[11093] = state(297);
	v->a[11094] = 1;
	v->a[11095] = sym_variable_assignment;
	v->a[11096] = state(650);
	v->a[11097] = 1;
	v->a[11098] = sym_concatenation;
	v->a[11099] = state(749);
	small_parse_table_555(v);
}

/* EOF small_parse_table_110.c */
