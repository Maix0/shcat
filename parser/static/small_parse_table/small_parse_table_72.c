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
	v->a[7201] = anon_sym_if;
	v->a[7202] = actions(15);
	v->a[7203] = 1;
	v->a[7204] = anon_sym_case;
	v->a[7205] = actions(17);
	v->a[7206] = 1;
	v->a[7207] = anon_sym_LPAREN;
	v->a[7208] = actions(19);
	v->a[7209] = 1;
	v->a[7210] = anon_sym_LBRACE;
	v->a[7211] = actions(53);
	v->a[7212] = 1;
	v->a[7213] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7214] = actions(55);
	v->a[7215] = 1;
	v->a[7216] = anon_sym_DOLLAR;
	v->a[7217] = actions(57);
	v->a[7218] = 1;
	v->a[7219] = anon_sym_DQUOTE;
	small_parse_table_361(v);
}

void	small_parse_table_361(t_small_parse_table_array *v)
{
	v->a[7220] = actions(61);
	v->a[7221] = 1;
	v->a[7222] = anon_sym_DOLLAR_LBRACE;
	v->a[7223] = actions(63);
	v->a[7224] = 1;
	v->a[7225] = anon_sym_DOLLAR_LPAREN;
	v->a[7226] = actions(65);
	v->a[7227] = 1;
	v->a[7228] = anon_sym_BQUOTE;
	v->a[7229] = actions(206);
	v->a[7230] = 1;
	v->a[7231] = sym_word;
	v->a[7232] = actions(208);
	v->a[7233] = 1;
	v->a[7234] = anon_sym_BANG;
	v->a[7235] = actions(214);
	v->a[7236] = 1;
	v->a[7237] = sym_variable_name;
	v->a[7238] = state(106);
	v->a[7239] = 1;
	small_parse_table_362(v);
}

void	small_parse_table_362(t_small_parse_table_array *v)
{
	v->a[7240] = aux_sym__statements_repeat1;
	v->a[7241] = state(227);
	v->a[7242] = 1;
	v->a[7243] = sym_command_name;
	v->a[7244] = state(277);
	v->a[7245] = 1;
	v->a[7246] = sym_variable_assignment;
	v->a[7247] = state(506);
	v->a[7248] = 1;
	v->a[7249] = aux_sym_command_repeat1;
	v->a[7250] = state(602);
	v->a[7251] = 1;
	v->a[7252] = sym_concatenation;
	v->a[7253] = state(620);
	v->a[7254] = 1;
	v->a[7255] = sym_file_redirect;
	v->a[7256] = state(911);
	v->a[7257] = 1;
	v->a[7258] = sym_pipeline;
	v->a[7259] = state(1001);
	small_parse_table_363(v);
}

void	small_parse_table_363(t_small_parse_table_array *v)
{
	v->a[7260] = 1;
	v->a[7261] = aux_sym_redirected_statement_repeat2;
	v->a[7262] = state(1606);
	v->a[7263] = 1;
	v->a[7264] = sym__statement_not_pipeline;
	v->a[7265] = state(1710);
	v->a[7266] = 1;
	v->a[7267] = sym__statements;
	v->a[7268] = actions(11);
	v->a[7269] = 2;
	v->a[7270] = anon_sym_while;
	v->a[7271] = anon_sym_until;
	v->a[7272] = actions(212);
	v->a[7273] = 2;
	v->a[7274] = sym_raw_string;
	v->a[7275] = sym_number;
	v->a[7276] = state(327);
	v->a[7277] = 5;
	v->a[7278] = sym_arithmetic_expansion;
	v->a[7279] = sym_string;
	small_parse_table_364(v);
}

void	small_parse_table_364(t_small_parse_table_array *v)
{
	v->a[7280] = sym_simple_expansion;
	v->a[7281] = sym_expansion;
	v->a[7282] = sym_command_substitution;
	v->a[7283] = actions(210);
	v->a[7284] = 7;
	v->a[7285] = anon_sym_LT;
	v->a[7286] = anon_sym_GT;
	v->a[7287] = anon_sym_GT_GT;
	v->a[7288] = anon_sym_LT_AMP;
	v->a[7289] = anon_sym_GT_AMP;
	v->a[7290] = anon_sym_GT_PIPE;
	v->a[7291] = anon_sym_LT_GT;
	v->a[7292] = state(884);
	v->a[7293] = 12;
	v->a[7294] = sym_redirected_statement;
	v->a[7295] = sym_for_statement;
	v->a[7296] = sym_while_statement;
	v->a[7297] = sym_if_statement;
	v->a[7298] = sym_case_statement;
	v->a[7299] = sym_function_definition;
	small_parse_table_365(v);
}

/* EOF small_parse_table_72.c */
