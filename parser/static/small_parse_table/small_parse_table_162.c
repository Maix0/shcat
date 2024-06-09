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
	v->a[16200] = 2;
	v->a[16201] = anon_sym_LT_AMP_DASH;
	v->a[16202] = anon_sym_GT_AMP_DASH;
	v->a[16203] = state(397);
	v->a[16204] = 6;
	v->a[16205] = sym_arithmetic_expansion;
	v->a[16206] = sym_string;
	v->a[16207] = sym_number;
	v->a[16208] = sym_simple_expansion;
	v->a[16209] = sym_expansion;
	v->a[16210] = sym_command_substitution;
	v->a[16211] = actions(59);
	v->a[16212] = 8;
	v->a[16213] = anon_sym_LT;
	v->a[16214] = anon_sym_GT;
	v->a[16215] = anon_sym_GT_GT;
	v->a[16216] = anon_sym_AMP_GT;
	v->a[16217] = anon_sym_AMP_GT_GT;
	v->a[16218] = anon_sym_LT_AMP;
	v->a[16219] = anon_sym_GT_AMP;
	small_parse_table_811(v);
}

void	small_parse_table_811(t_small_parse_table_array *v)
{
	v->a[16220] = anon_sym_GT_PIPE;
	v->a[16221] = state(1121);
	v->a[16222] = 12;
	v->a[16223] = sym_redirected_statement;
	v->a[16224] = sym_for_statement;
	v->a[16225] = sym_while_statement;
	v->a[16226] = sym_if_statement;
	v->a[16227] = sym_case_statement;
	v->a[16228] = sym_function_definition;
	v->a[16229] = sym_compound_statement;
	v->a[16230] = sym_subshell;
	v->a[16231] = sym_list;
	v->a[16232] = sym_negated_command;
	v->a[16233] = sym_command;
	v->a[16234] = sym_variable_assignments;
	v->a[16235] = 33;
	v->a[16236] = actions(3);
	v->a[16237] = 1;
	v->a[16238] = sym_comment;
	v->a[16239] = actions(9);
	small_parse_table_812(v);
}

void	small_parse_table_812(t_small_parse_table_array *v)
{
	v->a[16240] = 1;
	v->a[16241] = anon_sym_for;
	v->a[16242] = actions(13);
	v->a[16243] = 1;
	v->a[16244] = anon_sym_if;
	v->a[16245] = actions(15);
	v->a[16246] = 1;
	v->a[16247] = anon_sym_case;
	v->a[16248] = actions(17);
	v->a[16249] = 1;
	v->a[16250] = anon_sym_LPAREN;
	v->a[16251] = actions(19);
	v->a[16252] = 1;
	v->a[16253] = anon_sym_LBRACE;
	v->a[16254] = actions(49);
	v->a[16255] = 1;
	v->a[16256] = sym_word;
	v->a[16257] = actions(57);
	v->a[16258] = 1;
	v->a[16259] = anon_sym_BANG;
	small_parse_table_813(v);
}

void	small_parse_table_813(t_small_parse_table_array *v)
{
	v->a[16260] = actions(63);
	v->a[16261] = 1;
	v->a[16262] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16263] = actions(65);
	v->a[16264] = 1;
	v->a[16265] = anon_sym_DOLLAR;
	v->a[16266] = actions(67);
	v->a[16267] = 1;
	v->a[16268] = anon_sym_DQUOTE;
	v->a[16269] = actions(69);
	v->a[16270] = 1;
	v->a[16271] = sym_raw_string;
	v->a[16272] = actions(71);
	v->a[16273] = 1;
	v->a[16274] = aux_sym_number_token1;
	v->a[16275] = actions(73);
	v->a[16276] = 1;
	v->a[16277] = aux_sym_number_token2;
	v->a[16278] = actions(75);
	v->a[16279] = 1;
	small_parse_table_814(v);
}

void	small_parse_table_814(t_small_parse_table_array *v)
{
	v->a[16280] = anon_sym_DOLLAR_LBRACE;
	v->a[16281] = actions(77);
	v->a[16282] = 1;
	v->a[16283] = anon_sym_DOLLAR_LPAREN;
	v->a[16284] = actions(79);
	v->a[16285] = 1;
	v->a[16286] = anon_sym_BQUOTE;
	v->a[16287] = actions(81);
	v->a[16288] = 1;
	v->a[16289] = sym_file_descriptor;
	v->a[16290] = actions(83);
	v->a[16291] = 1;
	v->a[16292] = sym_variable_name;
	v->a[16293] = state(38);
	v->a[16294] = 1;
	v->a[16295] = aux_sym__terminated_statement;
	v->a[16296] = state(190);
	v->a[16297] = 1;
	v->a[16298] = sym_command_name;
	v->a[16299] = state(280);
	small_parse_table_815(v);
}

/* EOF small_parse_table_162.c */
