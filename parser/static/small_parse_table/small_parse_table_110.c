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
	v->a[11000] = actions(183);
	v->a[11001] = 1;
	v->a[11002] = sym_variable_name;
	v->a[11003] = state(96);
	v->a[11004] = 1;
	v->a[11005] = aux_sym__terminated_statement;
	v->a[11006] = state(271);
	v->a[11007] = 1;
	v->a[11008] = sym_command_name;
	v->a[11009] = state(284);
	v->a[11010] = 1;
	v->a[11011] = sym_variable_assignment;
	v->a[11012] = state(482);
	v->a[11013] = 1;
	v->a[11014] = aux_sym_command_repeat1;
	v->a[11015] = state(600);
	v->a[11016] = 1;
	v->a[11017] = sym_file_redirect;
	v->a[11018] = state(602);
	v->a[11019] = 1;
	small_parse_table_551(v);
}

void	small_parse_table_551(t_small_parse_table_array *v)
{
	v->a[11020] = sym_concatenation;
	v->a[11021] = state(1005);
	v->a[11022] = 1;
	v->a[11023] = sym_pipeline;
	v->a[11024] = state(1068);
	v->a[11025] = 1;
	v->a[11026] = aux_sym_redirected_statement_repeat2;
	v->a[11027] = state(1609);
	v->a[11028] = 1;
	v->a[11029] = sym__statement_not_pipeline;
	v->a[11030] = actions(139);
	v->a[11031] = 2;
	v->a[11032] = anon_sym_while;
	v->a[11033] = anon_sym_until;
	v->a[11034] = actions(171);
	v->a[11035] = 2;
	v->a[11036] = sym_raw_string;
	v->a[11037] = sym_number;
	v->a[11038] = state(425);
	v->a[11039] = 5;
	small_parse_table_552(v);
}

void	small_parse_table_552(t_small_parse_table_array *v)
{
	v->a[11040] = sym_arithmetic_expansion;
	v->a[11041] = sym_string;
	v->a[11042] = sym_simple_expansion;
	v->a[11043] = sym_expansion;
	v->a[11044] = sym_command_substitution;
	v->a[11045] = actions(159);
	v->a[11046] = 7;
	v->a[11047] = anon_sym_LT;
	v->a[11048] = anon_sym_GT;
	v->a[11049] = anon_sym_GT_GT;
	v->a[11050] = anon_sym_LT_AMP;
	v->a[11051] = anon_sym_GT_AMP;
	v->a[11052] = anon_sym_GT_PIPE;
	v->a[11053] = anon_sym_LT_GT;
	v->a[11054] = state(938);
	v->a[11055] = 12;
	v->a[11056] = sym_redirected_statement;
	v->a[11057] = sym_for_statement;
	v->a[11058] = sym_while_statement;
	v->a[11059] = sym_if_statement;
	small_parse_table_553(v);
}

void	small_parse_table_553(t_small_parse_table_array *v)
{
	v->a[11060] = sym_case_statement;
	v->a[11061] = sym_function_definition;
	v->a[11062] = sym_compound_statement;
	v->a[11063] = sym_subshell;
	v->a[11064] = sym_list;
	v->a[11065] = sym_negated_command;
	v->a[11066] = sym_command;
	v->a[11067] = sym__variable_assignments;
	v->a[11068] = 30;
	v->a[11069] = actions(3);
	v->a[11070] = 1;
	v->a[11071] = sym_comment;
	v->a[11072] = actions(9);
	v->a[11073] = 1;
	v->a[11074] = anon_sym_for;
	v->a[11075] = actions(13);
	v->a[11076] = 1;
	v->a[11077] = anon_sym_if;
	v->a[11078] = actions(15);
	v->a[11079] = 1;
	small_parse_table_554(v);
}

void	small_parse_table_554(t_small_parse_table_array *v)
{
	v->a[11080] = anon_sym_case;
	v->a[11081] = actions(17);
	v->a[11082] = 1;
	v->a[11083] = anon_sym_LPAREN;
	v->a[11084] = actions(19);
	v->a[11085] = 1;
	v->a[11086] = anon_sym_LBRACE;
	v->a[11087] = actions(53);
	v->a[11088] = 1;
	v->a[11089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11090] = actions(55);
	v->a[11091] = 1;
	v->a[11092] = anon_sym_DOLLAR;
	v->a[11093] = actions(57);
	v->a[11094] = 1;
	v->a[11095] = anon_sym_DQUOTE;
	v->a[11096] = actions(61);
	v->a[11097] = 1;
	v->a[11098] = anon_sym_DOLLAR_LBRACE;
	v->a[11099] = actions(63);
	small_parse_table_555(v);
}

/* EOF small_parse_table_110.c */
