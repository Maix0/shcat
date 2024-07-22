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
	v->a[7201] = aux_sym_command_repeat1;
	v->a[7202] = state(661);
	v->a[7203] = 1;
	v->a[7204] = sym_concatenation;
	v->a[7205] = state(707);
	v->a[7206] = 1;
	v->a[7207] = sym_file_redirect;
	v->a[7208] = state(1070);
	v->a[7209] = 1;
	v->a[7210] = sym_pipeline;
	v->a[7211] = state(1177);
	v->a[7212] = 1;
	v->a[7213] = aux_sym_redirected_statement_repeat2;
	v->a[7214] = state(1919);
	v->a[7215] = 1;
	v->a[7216] = sym__statement_not_pipeline;
	v->a[7217] = state(1975);
	v->a[7218] = 1;
	v->a[7219] = sym__statements;
	small_parse_table_361(v);
}

void	small_parse_table_361(t_small_parse_table_array *v)
{
	v->a[7220] = actions(11);
	v->a[7221] = 2;
	v->a[7222] = anon_sym_while;
	v->a[7223] = anon_sym_until;
	v->a[7224] = actions(217);
	v->a[7225] = 2;
	v->a[7226] = sym_raw_string;
	v->a[7227] = sym_number;
	v->a[7228] = state(374);
	v->a[7229] = 5;
	v->a[7230] = sym_arithmetic_expansion;
	v->a[7231] = sym_string;
	v->a[7232] = sym_simple_expansion;
	v->a[7233] = sym_expansion;
	v->a[7234] = sym_command_substitution;
	v->a[7235] = actions(215);
	v->a[7236] = 7;
	v->a[7237] = anon_sym_LT;
	v->a[7238] = anon_sym_GT;
	v->a[7239] = anon_sym_GT_GT;
	small_parse_table_362(v);
}

void	small_parse_table_362(t_small_parse_table_array *v)
{
	v->a[7240] = anon_sym_LT_AMP;
	v->a[7241] = anon_sym_GT_AMP;
	v->a[7242] = anon_sym_GT_PIPE;
	v->a[7243] = anon_sym_LT_GT;
	v->a[7244] = state(989);
	v->a[7245] = 12;
	v->a[7246] = sym_redirected_statement;
	v->a[7247] = sym_for_statement;
	v->a[7248] = sym_while_statement;
	v->a[7249] = sym_if_statement;
	v->a[7250] = sym_case_statement;
	v->a[7251] = sym_function_definition;
	v->a[7252] = sym_compound_statement;
	v->a[7253] = sym_subshell;
	v->a[7254] = sym_list;
	v->a[7255] = sym_negated_command;
	v->a[7256] = sym_command;
	v->a[7257] = sym__variable_assignments;
	v->a[7258] = 31;
	v->a[7259] = actions(3);
	small_parse_table_363(v);
}

void	small_parse_table_363(t_small_parse_table_array *v)
{
	v->a[7260] = 1;
	v->a[7261] = sym_comment;
	v->a[7262] = actions(9);
	v->a[7263] = 1;
	v->a[7264] = anon_sym_for;
	v->a[7265] = actions(13);
	v->a[7266] = 1;
	v->a[7267] = anon_sym_if;
	v->a[7268] = actions(15);
	v->a[7269] = 1;
	v->a[7270] = anon_sym_case;
	v->a[7271] = actions(17);
	v->a[7272] = 1;
	v->a[7273] = anon_sym_LPAREN;
	v->a[7274] = actions(19);
	v->a[7275] = 1;
	v->a[7276] = anon_sym_LBRACE;
	v->a[7277] = actions(55);
	v->a[7278] = 1;
	v->a[7279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_364(v);
}

void	small_parse_table_364(t_small_parse_table_array *v)
{
	v->a[7280] = actions(57);
	v->a[7281] = 1;
	v->a[7282] = anon_sym_DOLLAR;
	v->a[7283] = actions(59);
	v->a[7284] = 1;
	v->a[7285] = anon_sym_DQUOTE;
	v->a[7286] = actions(63);
	v->a[7287] = 1;
	v->a[7288] = anon_sym_DOLLAR_LBRACE;
	v->a[7289] = actions(65);
	v->a[7290] = 1;
	v->a[7291] = anon_sym_DOLLAR_LPAREN;
	v->a[7292] = actions(67);
	v->a[7293] = 1;
	v->a[7294] = anon_sym_BQUOTE;
	v->a[7295] = actions(211);
	v->a[7296] = 1;
	v->a[7297] = sym_word;
	v->a[7298] = actions(213);
	v->a[7299] = 1;
	small_parse_table_365(v);
}

/* EOF small_parse_table_72.c */
