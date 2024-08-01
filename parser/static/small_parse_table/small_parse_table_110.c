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
	v->a[11000] = sym_string;
	v->a[11001] = sym_simple_expansion;
	v->a[11002] = sym_expansion;
	v->a[11003] = sym_command_substitution;
	v->a[11004] = state(949);
	v->a[11005] = 12;
	v->a[11006] = sym_redirected_statement;
	v->a[11007] = sym_for_statement;
	v->a[11008] = sym_while_statement;
	v->a[11009] = sym_if_statement;
	v->a[11010] = sym_case_statement;
	v->a[11011] = sym_function_definition;
	v->a[11012] = sym_compound_statement;
	v->a[11013] = sym_subshell;
	v->a[11014] = sym_list;
	v->a[11015] = sym_negated_command;
	v->a[11016] = sym_command;
	v->a[11017] = sym__variable_assignments;
	v->a[11018] = 30;
	v->a[11019] = actions(3);
	small_parse_table_551(v);
}

void	small_parse_table_551(t_small_parse_table_array *v)
{
	v->a[11020] = 1;
	v->a[11021] = sym_comment;
	v->a[11022] = actions(9);
	v->a[11023] = 1;
	v->a[11024] = anon_sym_for;
	v->a[11025] = actions(13);
	v->a[11026] = 1;
	v->a[11027] = anon_sym_if;
	v->a[11028] = actions(15);
	v->a[11029] = 1;
	v->a[11030] = anon_sym_case;
	v->a[11031] = actions(17);
	v->a[11032] = 1;
	v->a[11033] = anon_sym_LPAREN;
	v->a[11034] = actions(19);
	v->a[11035] = 1;
	v->a[11036] = anon_sym_LBRACE;
	v->a[11037] = actions(53);
	v->a[11038] = 1;
	v->a[11039] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_552(v);
}

void	small_parse_table_552(t_small_parse_table_array *v)
{
	v->a[11040] = actions(55);
	v->a[11041] = 1;
	v->a[11042] = anon_sym_DOLLAR;
	v->a[11043] = actions(57);
	v->a[11044] = 1;
	v->a[11045] = anon_sym_DQUOTE;
	v->a[11046] = actions(61);
	v->a[11047] = 1;
	v->a[11048] = anon_sym_DOLLAR_LBRACE;
	v->a[11049] = actions(63);
	v->a[11050] = 1;
	v->a[11051] = anon_sym_DOLLAR_LPAREN;
	v->a[11052] = actions(65);
	v->a[11053] = 1;
	v->a[11054] = anon_sym_BQUOTE;
	v->a[11055] = actions(208);
	v->a[11056] = 1;
	v->a[11057] = sym_word;
	v->a[11058] = actions(210);
	v->a[11059] = 1;
	small_parse_table_553(v);
}

void	small_parse_table_553(t_small_parse_table_array *v)
{
	v->a[11060] = anon_sym_BANG;
	v->a[11061] = actions(216);
	v->a[11062] = 1;
	v->a[11063] = sym_variable_name;
	v->a[11064] = state(112);
	v->a[11065] = 1;
	v->a[11066] = aux_sym__statements_repeat1;
	v->a[11067] = state(158);
	v->a[11068] = 1;
	v->a[11069] = sym_command_name;
	v->a[11070] = state(186);
	v->a[11071] = 1;
	v->a[11072] = sym_variable_assignment;
	v->a[11073] = state(298);
	v->a[11074] = 1;
	v->a[11075] = aux_sym_command_repeat1;
	v->a[11076] = state(551);
	v->a[11077] = 1;
	v->a[11078] = sym_file_redirect;
	v->a[11079] = state(555);
	small_parse_table_554(v);
}

void	small_parse_table_554(t_small_parse_table_array *v)
{
	v->a[11080] = 1;
	v->a[11081] = sym_concatenation;
	v->a[11082] = state(937);
	v->a[11083] = 1;
	v->a[11084] = sym_pipeline;
	v->a[11085] = state(1019);
	v->a[11086] = 1;
	v->a[11087] = aux_sym_redirected_statement_repeat2;
	v->a[11088] = state(1557);
	v->a[11089] = 1;
	v->a[11090] = sym__statement_not_pipeline;
	v->a[11091] = state(1719);
	v->a[11092] = 1;
	v->a[11093] = sym__statements;
	v->a[11094] = actions(11);
	v->a[11095] = 2;
	v->a[11096] = anon_sym_while;
	v->a[11097] = anon_sym_until;
	v->a[11098] = actions(214);
	v->a[11099] = 2;
	small_parse_table_555(v);
}

/* EOF small_parse_table_110.c */
