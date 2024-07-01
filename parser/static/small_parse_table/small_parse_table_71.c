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
	v->a[7100] = actions(53);
	v->a[7101] = 1;
	v->a[7102] = anon_sym_BANG;
	v->a[7103] = actions(59);
	v->a[7104] = 1;
	v->a[7105] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7106] = actions(61);
	v->a[7107] = 1;
	v->a[7108] = anon_sym_DOLLAR;
	v->a[7109] = actions(63);
	v->a[7110] = 1;
	v->a[7111] = anon_sym_DQUOTE;
	v->a[7112] = actions(67);
	v->a[7113] = 1;
	v->a[7114] = anon_sym_DOLLAR_LBRACE;
	v->a[7115] = actions(69);
	v->a[7116] = 1;
	v->a[7117] = anon_sym_DOLLAR_LPAREN;
	v->a[7118] = actions(71);
	v->a[7119] = 1;
	small_parse_table_356(v);
}

void	small_parse_table_356(t_small_parse_table_array *v)
{
	v->a[7120] = anon_sym_BQUOTE;
	v->a[7121] = actions(73);
	v->a[7122] = 1;
	v->a[7123] = sym_file_descriptor;
	v->a[7124] = actions(75);
	v->a[7125] = 1;
	v->a[7126] = sym_variable_name;
	v->a[7127] = actions(250);
	v->a[7128] = 1;
	v->a[7129] = anon_sym_RBRACE;
	v->a[7130] = state(42);
	v->a[7131] = 1;
	v->a[7132] = aux_sym__terminated_statement;
	v->a[7133] = state(189);
	v->a[7134] = 1;
	v->a[7135] = sym_command_name;
	v->a[7136] = state(249);
	v->a[7137] = 1;
	v->a[7138] = sym_variable_assignment;
	v->a[7139] = state(650);
	small_parse_table_357(v);
}

void	small_parse_table_357(t_small_parse_table_array *v)
{
	v->a[7140] = 1;
	v->a[7141] = sym_concatenation;
	v->a[7142] = state(712);
	v->a[7143] = 1;
	v->a[7144] = sym_file_redirect;
	v->a[7145] = state(713);
	v->a[7146] = 1;
	v->a[7147] = aux_sym_command_repeat1;
	v->a[7148] = state(1236);
	v->a[7149] = 1;
	v->a[7150] = sym_pipeline;
	v->a[7151] = state(1333);
	v->a[7152] = 1;
	v->a[7153] = aux_sym_redirected_statement_repeat2;
	v->a[7154] = state(2103);
	v->a[7155] = 1;
	v->a[7156] = sym__statement_not_pipeline;
	v->a[7157] = actions(11);
	v->a[7158] = 2;
	v->a[7159] = anon_sym_while;
	small_parse_table_358(v);
}

void	small_parse_table_358(t_small_parse_table_array *v)
{
	v->a[7160] = anon_sym_until;
	v->a[7161] = actions(57);
	v->a[7162] = 2;
	v->a[7163] = anon_sym_LT_AMP_DASH;
	v->a[7164] = anon_sym_GT_AMP_DASH;
	v->a[7165] = actions(65);
	v->a[7166] = 2;
	v->a[7167] = sym_raw_string;
	v->a[7168] = sym_number;
	v->a[7169] = state(443);
	v->a[7170] = 5;
	v->a[7171] = sym_arithmetic_expansion;
	v->a[7172] = sym_string;
	v->a[7173] = sym_simple_expansion;
	v->a[7174] = sym_expansion;
	v->a[7175] = sym_command_substitution;
	v->a[7176] = actions(55);
	v->a[7177] = 6;
	v->a[7178] = anon_sym_LT;
	v->a[7179] = anon_sym_GT;
	small_parse_table_359(v);
}

void	small_parse_table_359(t_small_parse_table_array *v)
{
	v->a[7180] = anon_sym_GT_GT;
	v->a[7181] = anon_sym_LT_AMP;
	v->a[7182] = anon_sym_GT_AMP;
	v->a[7183] = anon_sym_GT_PIPE;
	v->a[7184] = state(1157);
	v->a[7185] = 12;
	v->a[7186] = sym_redirected_statement;
	v->a[7187] = sym_for_statement;
	v->a[7188] = sym_while_statement;
	v->a[7189] = sym_if_statement;
	v->a[7190] = sym_case_statement;
	v->a[7191] = sym_function_definition;
	v->a[7192] = sym_compound_statement;
	v->a[7193] = sym_subshell;
	v->a[7194] = sym_list;
	v->a[7195] = sym_negated_command;
	v->a[7196] = sym_command;
	v->a[7197] = sym__variable_assignments;
	v->a[7198] = 32;
	v->a[7199] = actions(3);
	small_parse_table_360(v);
}

/* EOF small_parse_table_71.c */
