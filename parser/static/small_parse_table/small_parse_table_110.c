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
	v->a[11000] = sym_command;
	v->a[11001] = sym__variable_assignments;
	v->a[11002] = 31;
	v->a[11003] = actions(3);
	v->a[11004] = 1;
	v->a[11005] = sym_comment;
	v->a[11006] = actions(9);
	v->a[11007] = 1;
	v->a[11008] = anon_sym_for;
	v->a[11009] = actions(13);
	v->a[11010] = 1;
	v->a[11011] = anon_sym_if;
	v->a[11012] = actions(15);
	v->a[11013] = 1;
	v->a[11014] = anon_sym_case;
	v->a[11015] = actions(17);
	v->a[11016] = 1;
	v->a[11017] = anon_sym_LPAREN;
	v->a[11018] = actions(19);
	v->a[11019] = 1;
	small_parse_table_551(v);
}

void	small_parse_table_551(t_small_parse_table_array *v)
{
	v->a[11020] = anon_sym_LBRACE;
	v->a[11021] = actions(43);
	v->a[11022] = 1;
	v->a[11023] = sym_word;
	v->a[11024] = actions(51);
	v->a[11025] = 1;
	v->a[11026] = anon_sym_BANG;
	v->a[11027] = actions(55);
	v->a[11028] = 1;
	v->a[11029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11030] = actions(57);
	v->a[11031] = 1;
	v->a[11032] = anon_sym_DOLLAR;
	v->a[11033] = actions(59);
	v->a[11034] = 1;
	v->a[11035] = anon_sym_DQUOTE;
	v->a[11036] = actions(63);
	v->a[11037] = 1;
	v->a[11038] = anon_sym_DOLLAR_LBRACE;
	v->a[11039] = actions(65);
	small_parse_table_552(v);
}

void	small_parse_table_552(t_small_parse_table_array *v)
{
	v->a[11040] = 1;
	v->a[11041] = anon_sym_DOLLAR_LPAREN;
	v->a[11042] = actions(67);
	v->a[11043] = 1;
	v->a[11044] = anon_sym_BQUOTE;
	v->a[11045] = actions(69);
	v->a[11046] = 1;
	v->a[11047] = sym_file_descriptor;
	v->a[11048] = actions(71);
	v->a[11049] = 1;
	v->a[11050] = sym_variable_name;
	v->a[11051] = actions(247);
	v->a[11052] = 1;
	v->a[11053] = anon_sym_done;
	v->a[11054] = state(36);
	v->a[11055] = 1;
	v->a[11056] = aux_sym__terminated_statement;
	v->a[11057] = state(183);
	v->a[11058] = 1;
	v->a[11059] = sym_command_name;
	small_parse_table_553(v);
}

void	small_parse_table_553(t_small_parse_table_array *v)
{
	v->a[11060] = state(341);
	v->a[11061] = 1;
	v->a[11062] = sym_variable_assignment;
	v->a[11063] = state(603);
	v->a[11064] = 1;
	v->a[11065] = sym_concatenation;
	v->a[11066] = state(639);
	v->a[11067] = 1;
	v->a[11068] = aux_sym_command_repeat1;
	v->a[11069] = state(644);
	v->a[11070] = 1;
	v->a[11071] = sym_file_redirect;
	v->a[11072] = state(1122);
	v->a[11073] = 1;
	v->a[11074] = sym_pipeline;
	v->a[11075] = state(1196);
	v->a[11076] = 1;
	v->a[11077] = aux_sym_redirected_statement_repeat2;
	v->a[11078] = state(1910);
	v->a[11079] = 1;
	small_parse_table_554(v);
}

void	small_parse_table_554(t_small_parse_table_array *v)
{
	v->a[11080] = sym__statement_not_pipeline;
	v->a[11081] = actions(11);
	v->a[11082] = 2;
	v->a[11083] = anon_sym_while;
	v->a[11084] = anon_sym_until;
	v->a[11085] = actions(61);
	v->a[11086] = 2;
	v->a[11087] = sym_raw_string;
	v->a[11088] = sym_number;
	v->a[11089] = state(436);
	v->a[11090] = 5;
	v->a[11091] = sym_arithmetic_expansion;
	v->a[11092] = sym_string;
	v->a[11093] = sym_simple_expansion;
	v->a[11094] = sym_expansion;
	v->a[11095] = sym_command_substitution;
	v->a[11096] = actions(53);
	v->a[11097] = 7;
	v->a[11098] = anon_sym_LT;
	v->a[11099] = anon_sym_GT;
	small_parse_table_555(v);
}

/* EOF small_parse_table_110.c */
