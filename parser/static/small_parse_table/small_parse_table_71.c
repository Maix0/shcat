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
	v->a[7100] = anon_sym_DOLLAR_LBRACE;
	v->a[7101] = actions(69);
	v->a[7102] = 1;
	v->a[7103] = anon_sym_DOLLAR_LPAREN;
	v->a[7104] = actions(71);
	v->a[7105] = 1;
	v->a[7106] = anon_sym_BQUOTE;
	v->a[7107] = actions(220);
	v->a[7108] = 1;
	v->a[7109] = sym_word;
	v->a[7110] = actions(222);
	v->a[7111] = 1;
	v->a[7112] = anon_sym_BANG;
	v->a[7113] = actions(230);
	v->a[7114] = 1;
	v->a[7115] = sym_file_descriptor;
	v->a[7116] = actions(232);
	v->a[7117] = 1;
	v->a[7118] = sym_variable_name;
	v->a[7119] = state(126);
	small_parse_table_356(v);
}

void	small_parse_table_356(t_small_parse_table_array *v)
{
	v->a[7120] = 1;
	v->a[7121] = aux_sym__statements_repeat1;
	v->a[7122] = state(184);
	v->a[7123] = 1;
	v->a[7124] = sym_command_name;
	v->a[7125] = state(268);
	v->a[7126] = 1;
	v->a[7127] = sym_variable_assignment;
	v->a[7128] = state(647);
	v->a[7129] = 1;
	v->a[7130] = sym_concatenation;
	v->a[7131] = state(758);
	v->a[7132] = 1;
	v->a[7133] = sym_file_redirect;
	v->a[7134] = state(828);
	v->a[7135] = 1;
	v->a[7136] = aux_sym_command_repeat1;
	v->a[7137] = state(1314);
	v->a[7138] = 1;
	v->a[7139] = sym_pipeline;
	small_parse_table_357(v);
}

void	small_parse_table_357(t_small_parse_table_array *v)
{
	v->a[7140] = state(1331);
	v->a[7141] = 1;
	v->a[7142] = aux_sym_redirected_statement_repeat2;
	v->a[7143] = state(2252);
	v->a[7144] = 1;
	v->a[7145] = sym__statement_not_pipeline;
	v->a[7146] = state(2309);
	v->a[7147] = 1;
	v->a[7148] = sym__statements;
	v->a[7149] = actions(11);
	v->a[7150] = 2;
	v->a[7151] = anon_sym_while;
	v->a[7152] = anon_sym_until;
	v->a[7153] = actions(226);
	v->a[7154] = 2;
	v->a[7155] = anon_sym_LT_AMP_DASH;
	v->a[7156] = anon_sym_GT_AMP_DASH;
	v->a[7157] = actions(228);
	v->a[7158] = 2;
	v->a[7159] = sym_raw_string;
	small_parse_table_358(v);
}

void	small_parse_table_358(t_small_parse_table_array *v)
{
	v->a[7160] = sym_number;
	v->a[7161] = state(294);
	v->a[7162] = 5;
	v->a[7163] = sym_arithmetic_expansion;
	v->a[7164] = sym_string;
	v->a[7165] = sym_simple_expansion;
	v->a[7166] = sym_expansion;
	v->a[7167] = sym_command_substitution;
	v->a[7168] = actions(224);
	v->a[7169] = 8;
	v->a[7170] = anon_sym_LT;
	v->a[7171] = anon_sym_GT;
	v->a[7172] = anon_sym_GT_GT;
	v->a[7173] = anon_sym_AMP_GT;
	v->a[7174] = anon_sym_AMP_GT_GT;
	v->a[7175] = anon_sym_LT_AMP;
	v->a[7176] = anon_sym_GT_AMP;
	v->a[7177] = anon_sym_GT_PIPE;
	v->a[7178] = state(1188);
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
	v->a[7191] = sym_variable_assignments;
	v->a[7192] = 32;
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
