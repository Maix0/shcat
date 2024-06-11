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
	v->a[16200] = actions(11);
	v->a[16201] = 2;
	v->a[16202] = anon_sym_while;
	v->a[16203] = anon_sym_until;
	v->a[16204] = actions(57);
	v->a[16205] = 2;
	v->a[16206] = anon_sym_LT_AMP_DASH;
	v->a[16207] = anon_sym_GT_AMP_DASH;
	v->a[16208] = actions(65);
	v->a[16209] = 2;
	v->a[16210] = sym_raw_string;
	v->a[16211] = sym_number;
	v->a[16212] = state(394);
	v->a[16213] = 5;
	v->a[16214] = sym_arithmetic_expansion;
	v->a[16215] = sym_string;
	v->a[16216] = sym_simple_expansion;
	v->a[16217] = sym_expansion;
	v->a[16218] = sym_command_substitution;
	v->a[16219] = actions(55);
	small_parse_table_811(v);
}

void	small_parse_table_811(t_small_parse_table_array *v)
{
	v->a[16220] = 8;
	v->a[16221] = anon_sym_LT;
	v->a[16222] = anon_sym_GT;
	v->a[16223] = anon_sym_GT_GT;
	v->a[16224] = anon_sym_AMP_GT;
	v->a[16225] = anon_sym_AMP_GT_GT;
	v->a[16226] = anon_sym_LT_AMP;
	v->a[16227] = anon_sym_GT_AMP;
	v->a[16228] = anon_sym_GT_PIPE;
	v->a[16229] = state(1359);
	v->a[16230] = 12;
	v->a[16231] = sym_redirected_statement;
	v->a[16232] = sym_for_statement;
	v->a[16233] = sym_while_statement;
	v->a[16234] = sym_if_statement;
	v->a[16235] = sym_case_statement;
	v->a[16236] = sym_function_definition;
	v->a[16237] = sym_compound_statement;
	v->a[16238] = sym_subshell;
	v->a[16239] = sym_list;
	small_parse_table_812(v);
}

void	small_parse_table_812(t_small_parse_table_array *v)
{
	v->a[16240] = sym_negated_command;
	v->a[16241] = sym_command;
	v->a[16242] = sym_variable_assignments;
	v->a[16243] = 31;
	v->a[16244] = actions(3);
	v->a[16245] = 1;
	v->a[16246] = sym_comment;
	v->a[16247] = actions(268);
	v->a[16248] = 1;
	v->a[16249] = sym_word;
	v->a[16250] = actions(271);
	v->a[16251] = 1;
	v->a[16252] = anon_sym_for;
	v->a[16253] = actions(277);
	v->a[16254] = 1;
	v->a[16255] = anon_sym_if;
	v->a[16256] = actions(280);
	v->a[16257] = 1;
	v->a[16258] = anon_sym_case;
	v->a[16259] = actions(283);
	small_parse_table_813(v);
}

void	small_parse_table_813(t_small_parse_table_array *v)
{
	v->a[16260] = 1;
	v->a[16261] = anon_sym_LPAREN;
	v->a[16262] = actions(286);
	v->a[16263] = 1;
	v->a[16264] = anon_sym_LBRACE;
	v->a[16265] = actions(289);
	v->a[16266] = 1;
	v->a[16267] = anon_sym_BANG;
	v->a[16268] = actions(298);
	v->a[16269] = 1;
	v->a[16270] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16271] = actions(301);
	v->a[16272] = 1;
	v->a[16273] = anon_sym_DOLLAR;
	v->a[16274] = actions(304);
	v->a[16275] = 1;
	v->a[16276] = anon_sym_DQUOTE;
	v->a[16277] = actions(310);
	v->a[16278] = 1;
	v->a[16279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_814(v);
}

void	small_parse_table_814(t_small_parse_table_array *v)
{
	v->a[16280] = actions(313);
	v->a[16281] = 1;
	v->a[16282] = anon_sym_DOLLAR_LPAREN;
	v->a[16283] = actions(316);
	v->a[16284] = 1;
	v->a[16285] = anon_sym_BQUOTE;
	v->a[16286] = actions(319);
	v->a[16287] = 1;
	v->a[16288] = sym_file_descriptor;
	v->a[16289] = actions(322);
	v->a[16290] = 1;
	v->a[16291] = sym_variable_name;
	v->a[16292] = state(133);
	v->a[16293] = 1;
	v->a[16294] = aux_sym__statements_repeat1;
	v->a[16295] = state(187);
	v->a[16296] = 1;
	v->a[16297] = sym_command_name;
	v->a[16298] = state(297);
	v->a[16299] = 1;
	small_parse_table_815(v);
}

/* EOF small_parse_table_162.c */
