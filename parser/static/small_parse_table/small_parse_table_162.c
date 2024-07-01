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
	v->a[16200] = actions(97);
	v->a[16201] = 1;
	v->a[16202] = anon_sym_LPAREN;
	v->a[16203] = actions(101);
	v->a[16204] = 1;
	v->a[16205] = anon_sym_LBRACE;
	v->a[16206] = actions(103);
	v->a[16207] = 1;
	v->a[16208] = anon_sym_BANG;
	v->a[16209] = actions(107);
	v->a[16210] = 1;
	v->a[16211] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16212] = actions(109);
	v->a[16213] = 1;
	v->a[16214] = anon_sym_DOLLAR;
	v->a[16215] = actions(111);
	v->a[16216] = 1;
	v->a[16217] = anon_sym_DQUOTE;
	v->a[16218] = actions(115);
	v->a[16219] = 1;
	small_parse_table_811(v);
}

void	small_parse_table_811(t_small_parse_table_array *v)
{
	v->a[16220] = anon_sym_DOLLAR_LBRACE;
	v->a[16221] = actions(117);
	v->a[16222] = 1;
	v->a[16223] = anon_sym_DOLLAR_LPAREN;
	v->a[16224] = actions(119);
	v->a[16225] = 1;
	v->a[16226] = anon_sym_BQUOTE;
	v->a[16227] = actions(121);
	v->a[16228] = 1;
	v->a[16229] = sym_file_descriptor;
	v->a[16230] = actions(123);
	v->a[16231] = 1;
	v->a[16232] = sym_variable_name;
	v->a[16233] = state(178);
	v->a[16234] = 1;
	v->a[16235] = sym_command_name;
	v->a[16236] = state(272);
	v->a[16237] = 1;
	v->a[16238] = sym_variable_assignment;
	v->a[16239] = state(592);
	small_parse_table_812(v);
}

void	small_parse_table_812(t_small_parse_table_array *v)
{
	v->a[16240] = 1;
	v->a[16241] = sym_concatenation;
	v->a[16242] = state(641);
	v->a[16243] = 1;
	v->a[16244] = sym_file_redirect;
	v->a[16245] = state(662);
	v->a[16246] = 1;
	v->a[16247] = aux_sym_command_repeat1;
	v->a[16248] = state(1070);
	v->a[16249] = 1;
	v->a[16250] = sym_pipeline;
	v->a[16251] = state(1168);
	v->a[16252] = 1;
	v->a[16253] = aux_sym_redirected_statement_repeat2;
	v->a[16254] = state(1901);
	v->a[16255] = 1;
	v->a[16256] = sym__statement_not_pipeline;
	v->a[16257] = actions(91);
	v->a[16258] = 2;
	v->a[16259] = anon_sym_while;
	small_parse_table_813(v);
}

void	small_parse_table_813(t_small_parse_table_array *v)
{
	v->a[16260] = anon_sym_until;
	v->a[16261] = actions(113);
	v->a[16262] = 2;
	v->a[16263] = sym_raw_string;
	v->a[16264] = sym_number;
	v->a[16265] = state(359);
	v->a[16266] = 5;
	v->a[16267] = sym_arithmetic_expansion;
	v->a[16268] = sym_string;
	v->a[16269] = sym_simple_expansion;
	v->a[16270] = sym_expansion;
	v->a[16271] = sym_command_substitution;
	v->a[16272] = actions(105);
	v->a[16273] = 7;
	v->a[16274] = anon_sym_LT;
	v->a[16275] = anon_sym_GT;
	v->a[16276] = anon_sym_GT_GT;
	v->a[16277] = anon_sym_LT_AMP;
	v->a[16278] = anon_sym_GT_AMP;
	v->a[16279] = anon_sym_GT_PIPE;
	small_parse_table_814(v);
}

void	small_parse_table_814(t_small_parse_table_array *v)
{
	v->a[16280] = anon_sym_LT_GT;
	v->a[16281] = state(1071);
	v->a[16282] = 12;
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
	v->a[16295] = 28;
	v->a[16296] = actions(3);
	v->a[16297] = 1;
	v->a[16298] = sym_comment;
	v->a[16299] = actions(87);
	small_parse_table_815(v);
}

/* EOF small_parse_table_162.c */
