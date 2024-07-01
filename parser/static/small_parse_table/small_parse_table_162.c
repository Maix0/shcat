/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_162.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_810(t_small_parse_table_array *v)
{
	v->a[16200] = actions(13);
	v->a[16201] = 1;
	v->a[16202] = anon_sym_if;
	v->a[16203] = actions(15);
	v->a[16204] = 1;
	v->a[16205] = anon_sym_case;
	v->a[16206] = actions(17);
	v->a[16207] = 1;
	v->a[16208] = anon_sym_LPAREN;
	v->a[16209] = actions(19);
	v->a[16210] = 1;
	v->a[16211] = anon_sym_LBRACE;
	v->a[16212] = actions(45);
	v->a[16213] = 1;
	v->a[16214] = sym_word;
	v->a[16215] = actions(53);
	v->a[16216] = 1;
	v->a[16217] = anon_sym_BANG;
	v->a[16218] = actions(59);
	v->a[16219] = 1;
	small_parse_table_811(v);
}

void	small_parse_table_811(t_small_parse_table_array *v)
{
	v->a[16220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16221] = actions(61);
	v->a[16222] = 1;
	v->a[16223] = anon_sym_DOLLAR;
	v->a[16224] = actions(63);
	v->a[16225] = 1;
	v->a[16226] = anon_sym_DQUOTE;
	v->a[16227] = actions(67);
	v->a[16228] = 1;
	v->a[16229] = anon_sym_DOLLAR_LBRACE;
	v->a[16230] = actions(69);
	v->a[16231] = 1;
	v->a[16232] = anon_sym_DOLLAR_LPAREN;
	v->a[16233] = actions(71);
	v->a[16234] = 1;
	v->a[16235] = anon_sym_BQUOTE;
	v->a[16236] = actions(73);
	v->a[16237] = 1;
	v->a[16238] = sym_file_descriptor;
	v->a[16239] = actions(75);
	small_parse_table_812(v);
}

void	small_parse_table_812(t_small_parse_table_array *v)
{
	v->a[16240] = 1;
	v->a[16241] = sym_variable_name;
	v->a[16242] = state(131);
	v->a[16243] = 1;
	v->a[16244] = aux_sym__statements_repeat1;
	v->a[16245] = state(189);
	v->a[16246] = 1;
	v->a[16247] = sym_command_name;
	v->a[16248] = state(287);
	v->a[16249] = 1;
	v->a[16250] = sym_variable_assignment;
	v->a[16251] = state(650);
	v->a[16252] = 1;
	v->a[16253] = sym_concatenation;
	v->a[16254] = state(712);
	v->a[16255] = 1;
	v->a[16256] = sym_file_redirect;
	v->a[16257] = state(713);
	v->a[16258] = 1;
	v->a[16259] = aux_sym_command_repeat1;
	small_parse_table_813(v);
}

void	small_parse_table_813(t_small_parse_table_array *v)
{
	v->a[16260] = state(1134);
	v->a[16261] = 1;
	v->a[16262] = sym_redirected_statement;
	v->a[16263] = state(1135);
	v->a[16264] = 1;
	v->a[16265] = sym_for_statement;
	v->a[16266] = state(1136);
	v->a[16267] = 1;
	v->a[16268] = sym_while_statement;
	v->a[16269] = state(1137);
	v->a[16270] = 1;
	v->a[16271] = sym_if_statement;
	v->a[16272] = state(1138);
	v->a[16273] = 1;
	v->a[16274] = sym_case_statement;
	v->a[16275] = state(1139);
	v->a[16276] = 1;
	v->a[16277] = sym_function_definition;
	v->a[16278] = state(1141);
	v->a[16279] = 1;
	small_parse_table_814(v);
}

void	small_parse_table_814(t_small_parse_table_array *v)
{
	v->a[16280] = sym_compound_statement;
	v->a[16281] = state(1143);
	v->a[16282] = 1;
	v->a[16283] = sym_subshell;
	v->a[16284] = state(1144);
	v->a[16285] = 1;
	v->a[16286] = sym_list;
	v->a[16287] = state(1145);
	v->a[16288] = 1;
	v->a[16289] = sym_negated_command;
	v->a[16290] = state(1146);
	v->a[16291] = 1;
	v->a[16292] = sym_command;
	v->a[16293] = state(1147);
	v->a[16294] = 1;
	v->a[16295] = sym__variable_assignments;
	v->a[16296] = state(1262);
	v->a[16297] = 1;
	v->a[16298] = sym_pipeline;
	v->a[16299] = state(1333);
	small_parse_table_815(v);
}

/* EOF small_parse_table_162.c */
