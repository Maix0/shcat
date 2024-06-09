/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_72.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_360(t_small_parse_table_array *v)
{
	v->a[7200] = 1;
	v->a[7201] = anon_sym_BQUOTE;
	v->a[7202] = actions(81);
	v->a[7203] = 1;
	v->a[7204] = sym_file_descriptor;
	v->a[7205] = actions(83);
	v->a[7206] = 1;
	v->a[7207] = sym_variable_name;
	v->a[7208] = actions(266);
	v->a[7209] = 1;
	v->a[7210] = anon_sym_then;
	v->a[7211] = state(37);
	v->a[7212] = 1;
	v->a[7213] = aux_sym__terminated_statement;
	v->a[7214] = state(190);
	v->a[7215] = 1;
	v->a[7216] = sym_command_name;
	v->a[7217] = state(303);
	v->a[7218] = 1;
	v->a[7219] = sym_variable_assignment;
	small_parse_table_361(v);
}

void	small_parse_table_361(t_small_parse_table_array *v)
{
	v->a[7220] = state(582);
	v->a[7221] = 1;
	v->a[7222] = sym_concatenation;
	v->a[7223] = state(587);
	v->a[7224] = 1;
	v->a[7225] = aux_sym_command_repeat1;
	v->a[7226] = state(718);
	v->a[7227] = 1;
	v->a[7228] = sym_file_redirect;
	v->a[7229] = state(1213);
	v->a[7230] = 1;
	v->a[7231] = aux_sym_redirected_statement_repeat2;
	v->a[7232] = state(1225);
	v->a[7233] = 1;
	v->a[7234] = sym_pipeline;
	v->a[7235] = state(2035);
	v->a[7236] = 1;
	v->a[7237] = sym__statement_not_pipeline;
	v->a[7238] = actions(11);
	v->a[7239] = 2;
	small_parse_table_362(v);
}

void	small_parse_table_362(t_small_parse_table_array *v)
{
	v->a[7240] = anon_sym_while;
	v->a[7241] = anon_sym_until;
	v->a[7242] = actions(61);
	v->a[7243] = 2;
	v->a[7244] = anon_sym_LT_AMP_DASH;
	v->a[7245] = anon_sym_GT_AMP_DASH;
	v->a[7246] = state(397);
	v->a[7247] = 6;
	v->a[7248] = sym_arithmetic_expansion;
	v->a[7249] = sym_string;
	v->a[7250] = sym_number;
	v->a[7251] = sym_simple_expansion;
	v->a[7252] = sym_expansion;
	v->a[7253] = sym_command_substitution;
	v->a[7254] = actions(59);
	v->a[7255] = 8;
	v->a[7256] = anon_sym_LT;
	v->a[7257] = anon_sym_GT;
	v->a[7258] = anon_sym_GT_GT;
	v->a[7259] = anon_sym_AMP_GT;
	small_parse_table_363(v);
}

void	small_parse_table_363(t_small_parse_table_array *v)
{
	v->a[7260] = anon_sym_AMP_GT_GT;
	v->a[7261] = anon_sym_LT_AMP;
	v->a[7262] = anon_sym_GT_AMP;
	v->a[7263] = anon_sym_GT_PIPE;
	v->a[7264] = state(1137);
	v->a[7265] = 12;
	v->a[7266] = sym_redirected_statement;
	v->a[7267] = sym_for_statement;
	v->a[7268] = sym_while_statement;
	v->a[7269] = sym_if_statement;
	v->a[7270] = sym_case_statement;
	v->a[7271] = sym_function_definition;
	v->a[7272] = sym_compound_statement;
	v->a[7273] = sym_subshell;
	v->a[7274] = sym_list;
	v->a[7275] = sym_negated_command;
	v->a[7276] = sym_command;
	v->a[7277] = sym_variable_assignments;
	v->a[7278] = 34;
	v->a[7279] = actions(3);
	small_parse_table_364(v);
}

void	small_parse_table_364(t_small_parse_table_array *v)
{
	v->a[7280] = 1;
	v->a[7281] = sym_comment;
	v->a[7282] = actions(9);
	v->a[7283] = 1;
	v->a[7284] = anon_sym_for;
	v->a[7285] = actions(13);
	v->a[7286] = 1;
	v->a[7287] = anon_sym_if;
	v->a[7288] = actions(15);
	v->a[7289] = 1;
	v->a[7290] = anon_sym_case;
	v->a[7291] = actions(17);
	v->a[7292] = 1;
	v->a[7293] = anon_sym_LPAREN;
	v->a[7294] = actions(19);
	v->a[7295] = 1;
	v->a[7296] = anon_sym_LBRACE;
	v->a[7297] = actions(63);
	v->a[7298] = 1;
	v->a[7299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_365(v);
}

/* EOF small_parse_table_72.c */
