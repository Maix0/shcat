/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_71.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_355(t_small_parse_table_array *v)
{
	v->a[7100] = actions(55);
	v->a[7101] = 1;
	v->a[7102] = anon_sym_DOLLAR;
	v->a[7103] = actions(57);
	v->a[7104] = 1;
	v->a[7105] = anon_sym_DQUOTE;
	v->a[7106] = actions(61);
	v->a[7107] = 1;
	v->a[7108] = anon_sym_DOLLAR_LBRACE;
	v->a[7109] = actions(63);
	v->a[7110] = 1;
	v->a[7111] = anon_sym_DOLLAR_LPAREN;
	v->a[7112] = actions(65);
	v->a[7113] = 1;
	v->a[7114] = anon_sym_BQUOTE;
	v->a[7115] = actions(67);
	v->a[7116] = 1;
	v->a[7117] = sym_variable_name;
	v->a[7118] = actions(202);
	v->a[7119] = 1;
	small_parse_table_356(v);
}

void	small_parse_table_356(t_small_parse_table_array *v)
{
	v->a[7120] = sym_word;
	v->a[7121] = actions(204);
	v->a[7122] = 1;
	v->a[7123] = anon_sym_BANG;
	v->a[7124] = state(119);
	v->a[7125] = 1;
	v->a[7126] = aux_sym__statements_repeat1;
	v->a[7127] = state(272);
	v->a[7128] = 1;
	v->a[7129] = sym_command_name;
	v->a[7130] = state(283);
	v->a[7131] = 1;
	v->a[7132] = sym_variable_assignment;
	v->a[7133] = state(486);
	v->a[7134] = 1;
	v->a[7135] = aux_sym_command_repeat1;
	v->a[7136] = state(602);
	v->a[7137] = 1;
	v->a[7138] = sym_concatenation;
	v->a[7139] = state(636);
	small_parse_table_357(v);
}

void	small_parse_table_357(t_small_parse_table_array *v)
{
	v->a[7140] = 1;
	v->a[7141] = sym_file_redirect;
	v->a[7142] = state(951);
	v->a[7143] = 1;
	v->a[7144] = sym_pipeline;
	v->a[7145] = state(1006);
	v->a[7146] = 1;
	v->a[7147] = aux_sym_redirected_statement_repeat2;
	v->a[7148] = state(1605);
	v->a[7149] = 1;
	v->a[7150] = sym__statement_not_pipeline;
	v->a[7151] = state(1652);
	v->a[7152] = 1;
	v->a[7153] = sym__statements;
	v->a[7154] = actions(11);
	v->a[7155] = 2;
	v->a[7156] = anon_sym_while;
	v->a[7157] = anon_sym_until;
	v->a[7158] = actions(59);
	v->a[7159] = 2;
	small_parse_table_358(v);
}

void	small_parse_table_358(t_small_parse_table_array *v)
{
	v->a[7160] = sym_raw_string;
	v->a[7161] = sym_number;
	v->a[7162] = state(425);
	v->a[7163] = 5;
	v->a[7164] = sym_arithmetic_expansion;
	v->a[7165] = sym_string;
	v->a[7166] = sym_simple_expansion;
	v->a[7167] = sym_expansion;
	v->a[7168] = sym_command_substitution;
	v->a[7169] = actions(51);
	v->a[7170] = 7;
	v->a[7171] = anon_sym_LT;
	v->a[7172] = anon_sym_GT;
	v->a[7173] = anon_sym_GT_GT;
	v->a[7174] = anon_sym_LT_AMP;
	v->a[7175] = anon_sym_GT_AMP;
	v->a[7176] = anon_sym_GT_PIPE;
	v->a[7177] = anon_sym_LT_GT;
	v->a[7178] = state(849);
	v->a[7179] = 12;
	small_parse_table_359(v);
}

void	small_parse_table_359(t_small_parse_table_array *v)
{
	v->a[7180] = sym_redirected_statement;
	v->a[7181] = sym_for_statement;
	v->a[7182] = sym_while_statement;
	v->a[7183] = sym_if_statement;
	v->a[7184] = sym_case_statement;
	v->a[7185] = sym_function_definition;
	v->a[7186] = sym_compound_statement;
	v->a[7187] = sym_subshell;
	v->a[7188] = sym_list;
	v->a[7189] = sym_negated_command;
	v->a[7190] = sym_command;
	v->a[7191] = sym__variable_assignments;
	v->a[7192] = 30;
	v->a[7193] = actions(3);
	v->a[7194] = 1;
	v->a[7195] = sym_comment;
	v->a[7196] = actions(9);
	v->a[7197] = 1;
	v->a[7198] = anon_sym_for;
	v->a[7199] = actions(13);
	small_parse_table_360(v);
}

/* EOF small_parse_table_71.c */
