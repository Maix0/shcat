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
	v->a[11000] = 1;
	v->a[11001] = anon_sym_DQUOTE;
	v->a[11002] = actions(67);
	v->a[11003] = 1;
	v->a[11004] = anon_sym_DOLLAR_LBRACE;
	v->a[11005] = actions(69);
	v->a[11006] = 1;
	v->a[11007] = anon_sym_DOLLAR_LPAREN;
	v->a[11008] = actions(71);
	v->a[11009] = 1;
	v->a[11010] = anon_sym_BQUOTE;
	v->a[11011] = actions(220);
	v->a[11012] = 1;
	v->a[11013] = sym_word;
	v->a[11014] = actions(222);
	v->a[11015] = 1;
	v->a[11016] = anon_sym_BANG;
	v->a[11017] = actions(230);
	v->a[11018] = 1;
	v->a[11019] = sym_file_descriptor;
	small_parse_table_551(v);
}

void	small_parse_table_551(t_small_parse_table_array *v)
{
	v->a[11020] = actions(232);
	v->a[11021] = 1;
	v->a[11022] = sym_variable_name;
	v->a[11023] = state(138);
	v->a[11024] = 1;
	v->a[11025] = aux_sym__statements_repeat1;
	v->a[11026] = state(185);
	v->a[11027] = 1;
	v->a[11028] = sym_command_name;
	v->a[11029] = state(235);
	v->a[11030] = 1;
	v->a[11031] = sym_variable_assignment;
	v->a[11032] = state(624);
	v->a[11033] = 1;
	v->a[11034] = sym_concatenation;
	v->a[11035] = state(668);
	v->a[11036] = 1;
	v->a[11037] = sym_file_redirect;
	v->a[11038] = state(765);
	v->a[11039] = 1;
	small_parse_table_552(v);
}

void	small_parse_table_552(t_small_parse_table_array *v)
{
	v->a[11040] = aux_sym_command_repeat1;
	v->a[11041] = state(1110);
	v->a[11042] = 1;
	v->a[11043] = sym_pipeline;
	v->a[11044] = state(1188);
	v->a[11045] = 1;
	v->a[11046] = aux_sym_redirected_statement_repeat2;
	v->a[11047] = state(2115);
	v->a[11048] = 1;
	v->a[11049] = sym__statement_not_pipeline;
	v->a[11050] = state(2298);
	v->a[11051] = 1;
	v->a[11052] = sym__statements;
	v->a[11053] = actions(11);
	v->a[11054] = 2;
	v->a[11055] = anon_sym_while;
	v->a[11056] = anon_sym_until;
	v->a[11057] = actions(226);
	v->a[11058] = 2;
	v->a[11059] = anon_sym_LT_AMP_DASH;
	small_parse_table_553(v);
}

void	small_parse_table_553(t_small_parse_table_array *v)
{
	v->a[11060] = anon_sym_GT_AMP_DASH;
	v->a[11061] = actions(228);
	v->a[11062] = 2;
	v->a[11063] = sym_raw_string;
	v->a[11064] = sym_number;
	v->a[11065] = state(299);
	v->a[11066] = 5;
	v->a[11067] = sym_arithmetic_expansion;
	v->a[11068] = sym_string;
	v->a[11069] = sym_simple_expansion;
	v->a[11070] = sym_expansion;
	v->a[11071] = sym_command_substitution;
	v->a[11072] = actions(224);
	v->a[11073] = 8;
	v->a[11074] = anon_sym_LT;
	v->a[11075] = anon_sym_GT;
	v->a[11076] = anon_sym_GT_GT;
	v->a[11077] = anon_sym_AMP_GT;
	v->a[11078] = anon_sym_AMP_GT_GT;
	v->a[11079] = anon_sym_LT_AMP;
	small_parse_table_554(v);
}

void	small_parse_table_554(t_small_parse_table_array *v)
{
	v->a[11080] = anon_sym_GT_AMP;
	v->a[11081] = anon_sym_GT_PIPE;
	v->a[11082] = state(1072);
	v->a[11083] = 12;
	v->a[11084] = sym_redirected_statement;
	v->a[11085] = sym_for_statement;
	v->a[11086] = sym_while_statement;
	v->a[11087] = sym_if_statement;
	v->a[11088] = sym_case_statement;
	v->a[11089] = sym_function_definition;
	v->a[11090] = sym_compound_statement;
	v->a[11091] = sym_subshell;
	v->a[11092] = sym_list;
	v->a[11093] = sym_negated_command;
	v->a[11094] = sym_command;
	v->a[11095] = sym__variable_assignments;
	v->a[11096] = 32;
	v->a[11097] = actions(3);
	v->a[11098] = 1;
	v->a[11099] = sym_comment;
	small_parse_table_555(v);
}

/* EOF small_parse_table_110.c */
