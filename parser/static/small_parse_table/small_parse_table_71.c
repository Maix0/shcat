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
	v->a[7100] = anon_sym_BQUOTE;
	v->a[7101] = actions(67);
	v->a[7102] = 1;
	v->a[7103] = sym_variable_name;
	v->a[7104] = actions(228);
	v->a[7105] = 1;
	v->a[7106] = anon_sym_RBRACE;
	v->a[7107] = state(42);
	v->a[7108] = 1;
	v->a[7109] = aux_sym__terminated_statement;
	v->a[7110] = state(185);
	v->a[7111] = 1;
	v->a[7112] = sym_command_name;
	v->a[7113] = state(209);
	v->a[7114] = 1;
	v->a[7115] = sym_variable_assignment;
	v->a[7116] = state(411);
	v->a[7117] = 1;
	v->a[7118] = aux_sym_command_repeat1;
	v->a[7119] = state(551);
	small_parse_table_356(v);
}

void	small_parse_table_356(t_small_parse_table_array *v)
{
	v->a[7120] = 1;
	v->a[7121] = sym_file_redirect;
	v->a[7122] = state(555);
	v->a[7123] = 1;
	v->a[7124] = sym_concatenation;
	v->a[7125] = state(974);
	v->a[7126] = 1;
	v->a[7127] = sym_pipeline;
	v->a[7128] = state(1126);
	v->a[7129] = 1;
	v->a[7130] = aux_sym_redirected_statement_repeat2;
	v->a[7131] = state(1561);
	v->a[7132] = 1;
	v->a[7133] = sym__statement_not_pipeline;
	v->a[7134] = actions(11);
	v->a[7135] = 2;
	v->a[7136] = anon_sym_while;
	v->a[7137] = anon_sym_until;
	v->a[7138] = actions(59);
	v->a[7139] = 2;
	small_parse_table_357(v);
}

void	small_parse_table_357(t_small_parse_table_array *v)
{
	v->a[7140] = sym_raw_string;
	v->a[7141] = sym_number;
	v->a[7142] = actions(51);
	v->a[7143] = 3;
	v->a[7144] = anon_sym_LT;
	v->a[7145] = anon_sym_GT;
	v->a[7146] = anon_sym_GT_GT;
	v->a[7147] = state(401);
	v->a[7148] = 5;
	v->a[7149] = sym_arithmetic_expansion;
	v->a[7150] = sym_string;
	v->a[7151] = sym_simple_expansion;
	v->a[7152] = sym_expansion;
	v->a[7153] = sym_command_substitution;
	v->a[7154] = state(955);
	v->a[7155] = 12;
	v->a[7156] = sym_redirected_statement;
	v->a[7157] = sym_for_statement;
	v->a[7158] = sym_while_statement;
	v->a[7159] = sym_if_statement;
	small_parse_table_358(v);
}

void	small_parse_table_358(t_small_parse_table_array *v)
{
	v->a[7160] = sym_case_statement;
	v->a[7161] = sym_function_definition;
	v->a[7162] = sym_compound_statement;
	v->a[7163] = sym_subshell;
	v->a[7164] = sym_list;
	v->a[7165] = sym_negated_command;
	v->a[7166] = sym_command;
	v->a[7167] = sym__variable_assignments;
	v->a[7168] = 30;
	v->a[7169] = actions(3);
	v->a[7170] = 1;
	v->a[7171] = sym_comment;
	v->a[7172] = actions(9);
	v->a[7173] = 1;
	v->a[7174] = anon_sym_for;
	v->a[7175] = actions(13);
	v->a[7176] = 1;
	v->a[7177] = anon_sym_if;
	v->a[7178] = actions(15);
	v->a[7179] = 1;
	small_parse_table_359(v);
}

void	small_parse_table_359(t_small_parse_table_array *v)
{
	v->a[7180] = anon_sym_case;
	v->a[7181] = actions(17);
	v->a[7182] = 1;
	v->a[7183] = anon_sym_LPAREN;
	v->a[7184] = actions(19);
	v->a[7185] = 1;
	v->a[7186] = anon_sym_LBRACE;
	v->a[7187] = actions(53);
	v->a[7188] = 1;
	v->a[7189] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7190] = actions(55);
	v->a[7191] = 1;
	v->a[7192] = anon_sym_DOLLAR;
	v->a[7193] = actions(57);
	v->a[7194] = 1;
	v->a[7195] = anon_sym_DQUOTE;
	v->a[7196] = actions(61);
	v->a[7197] = 1;
	v->a[7198] = anon_sym_DOLLAR_LBRACE;
	v->a[7199] = actions(63);
	small_parse_table_360(v);
}

/* EOF small_parse_table_71.c */
