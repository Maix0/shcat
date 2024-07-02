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
	v->a[16200] = 1;
	v->a[16201] = anon_sym_case;
	v->a[16202] = actions(17);
	v->a[16203] = 1;
	v->a[16204] = anon_sym_LPAREN;
	v->a[16205] = actions(19);
	v->a[16206] = 1;
	v->a[16207] = anon_sym_LBRACE;
	v->a[16208] = actions(21);
	v->a[16209] = 1;
	v->a[16210] = anon_sym_BANG;
	v->a[16211] = actions(25);
	v->a[16212] = 1;
	v->a[16213] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16214] = actions(27);
	v->a[16215] = 1;
	v->a[16216] = anon_sym_DOLLAR;
	v->a[16217] = actions(29);
	v->a[16218] = 1;
	v->a[16219] = anon_sym_DQUOTE;
	small_parse_table_811(v);
}

void	small_parse_table_811(t_small_parse_table_array *v)
{
	v->a[16220] = actions(33);
	v->a[16221] = 1;
	v->a[16222] = anon_sym_DOLLAR_LBRACE;
	v->a[16223] = actions(35);
	v->a[16224] = 1;
	v->a[16225] = anon_sym_DOLLAR_LPAREN;
	v->a[16226] = actions(37);
	v->a[16227] = 1;
	v->a[16228] = anon_sym_BQUOTE;
	v->a[16229] = actions(39);
	v->a[16230] = 1;
	v->a[16231] = sym_file_descriptor;
	v->a[16232] = actions(41);
	v->a[16233] = 1;
	v->a[16234] = sym_variable_name;
	v->a[16235] = state(175);
	v->a[16236] = 1;
	v->a[16237] = sym_command_name;
	v->a[16238] = state(303);
	v->a[16239] = 1;
	small_parse_table_812(v);
}

void	small_parse_table_812(t_small_parse_table_array *v)
{
	v->a[16240] = sym_variable_assignment;
	v->a[16241] = state(583);
	v->a[16242] = 1;
	v->a[16243] = sym_concatenation;
	v->a[16244] = state(621);
	v->a[16245] = 1;
	v->a[16246] = sym_file_redirect;
	v->a[16247] = state(624);
	v->a[16248] = 1;
	v->a[16249] = aux_sym_command_repeat1;
	v->a[16250] = state(1104);
	v->a[16251] = 1;
	v->a[16252] = aux_sym_redirected_statement_repeat2;
	v->a[16253] = state(1451);
	v->a[16254] = 1;
	v->a[16255] = sym_pipeline;
	v->a[16256] = actions(11);
	v->a[16257] = 2;
	v->a[16258] = anon_sym_while;
	v->a[16259] = anon_sym_until;
	small_parse_table_813(v);
}

void	small_parse_table_813(t_small_parse_table_array *v)
{
	v->a[16260] = actions(31);
	v->a[16261] = 2;
	v->a[16262] = sym_raw_string;
	v->a[16263] = sym_number;
	v->a[16264] = state(345);
	v->a[16265] = 5;
	v->a[16266] = sym_arithmetic_expansion;
	v->a[16267] = sym_string;
	v->a[16268] = sym_simple_expansion;
	v->a[16269] = sym_expansion;
	v->a[16270] = sym_command_substitution;
	v->a[16271] = actions(23);
	v->a[16272] = 7;
	v->a[16273] = anon_sym_LT;
	v->a[16274] = anon_sym_GT;
	v->a[16275] = anon_sym_GT_GT;
	v->a[16276] = anon_sym_LT_AMP;
	v->a[16277] = anon_sym_GT_AMP;
	v->a[16278] = anon_sym_GT_PIPE;
	v->a[16279] = anon_sym_LT_GT;
	small_parse_table_814(v);
}

void	small_parse_table_814(t_small_parse_table_array *v)
{
	v->a[16280] = state(1009);
	v->a[16281] = 13;
	v->a[16282] = sym__statement_not_pipeline;
	v->a[16283] = sym_redirected_statement;
	v->a[16284] = sym_for_statement;
	v->a[16285] = sym_while_statement;
	v->a[16286] = sym_if_statement;
	v->a[16287] = sym_case_statement;
	v->a[16288] = sym_function_definition;
	v->a[16289] = sym_compound_statement;
	v->a[16290] = sym_subshell;
	v->a[16291] = sym_list;
	v->a[16292] = sym_negated_command;
	v->a[16293] = sym_command;
	v->a[16294] = sym__variable_assignments;
	v->a[16295] = 29;
	v->a[16296] = actions(3);
	v->a[16297] = 1;
	v->a[16298] = sym_comment;
	v->a[16299] = actions(9);
	small_parse_table_815(v);
}

/* EOF small_parse_table_162.c */
