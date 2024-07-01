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
	v->a[7100] = state(1910);
	v->a[7101] = 1;
	v->a[7102] = sym__statement_not_pipeline;
	v->a[7103] = actions(11);
	v->a[7104] = 2;
	v->a[7105] = anon_sym_while;
	v->a[7106] = anon_sym_until;
	v->a[7107] = actions(61);
	v->a[7108] = 2;
	v->a[7109] = sym_raw_string;
	v->a[7110] = sym_number;
	v->a[7111] = state(436);
	v->a[7112] = 5;
	v->a[7113] = sym_arithmetic_expansion;
	v->a[7114] = sym_string;
	v->a[7115] = sym_simple_expansion;
	v->a[7116] = sym_expansion;
	v->a[7117] = sym_command_substitution;
	v->a[7118] = actions(53);
	v->a[7119] = 7;
	small_parse_table_356(v);
}

void	small_parse_table_356(t_small_parse_table_array *v)
{
	v->a[7120] = anon_sym_LT;
	v->a[7121] = anon_sym_GT;
	v->a[7122] = anon_sym_GT_GT;
	v->a[7123] = anon_sym_LT_AMP;
	v->a[7124] = anon_sym_GT_AMP;
	v->a[7125] = anon_sym_GT_PIPE;
	v->a[7126] = anon_sym_LT_GT;
	v->a[7127] = state(1021);
	v->a[7128] = 12;
	v->a[7129] = sym_redirected_statement;
	v->a[7130] = sym_for_statement;
	v->a[7131] = sym_while_statement;
	v->a[7132] = sym_if_statement;
	v->a[7133] = sym_case_statement;
	v->a[7134] = sym_function_definition;
	v->a[7135] = sym_compound_statement;
	v->a[7136] = sym_subshell;
	v->a[7137] = sym_list;
	v->a[7138] = sym_negated_command;
	v->a[7139] = sym_command;
	small_parse_table_357(v);
}

void	small_parse_table_357(t_small_parse_table_array *v)
{
	v->a[7140] = sym__variable_assignments;
	v->a[7141] = 31;
	v->a[7142] = actions(3);
	v->a[7143] = 1;
	v->a[7144] = sym_comment;
	v->a[7145] = actions(9);
	v->a[7146] = 1;
	v->a[7147] = anon_sym_for;
	v->a[7148] = actions(13);
	v->a[7149] = 1;
	v->a[7150] = anon_sym_if;
	v->a[7151] = actions(15);
	v->a[7152] = 1;
	v->a[7153] = anon_sym_case;
	v->a[7154] = actions(17);
	v->a[7155] = 1;
	v->a[7156] = anon_sym_LPAREN;
	v->a[7157] = actions(19);
	v->a[7158] = 1;
	v->a[7159] = anon_sym_LBRACE;
	small_parse_table_358(v);
}

void	small_parse_table_358(t_small_parse_table_array *v)
{
	v->a[7160] = actions(43);
	v->a[7161] = 1;
	v->a[7162] = sym_word;
	v->a[7163] = actions(51);
	v->a[7164] = 1;
	v->a[7165] = anon_sym_BANG;
	v->a[7166] = actions(55);
	v->a[7167] = 1;
	v->a[7168] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7169] = actions(57);
	v->a[7170] = 1;
	v->a[7171] = anon_sym_DOLLAR;
	v->a[7172] = actions(59);
	v->a[7173] = 1;
	v->a[7174] = anon_sym_DQUOTE;
	v->a[7175] = actions(63);
	v->a[7176] = 1;
	v->a[7177] = anon_sym_DOLLAR_LBRACE;
	v->a[7178] = actions(65);
	v->a[7179] = 1;
	small_parse_table_359(v);
}

void	small_parse_table_359(t_small_parse_table_array *v)
{
	v->a[7180] = anon_sym_DOLLAR_LPAREN;
	v->a[7181] = actions(67);
	v->a[7182] = 1;
	v->a[7183] = anon_sym_BQUOTE;
	v->a[7184] = actions(69);
	v->a[7185] = 1;
	v->a[7186] = sym_file_descriptor;
	v->a[7187] = actions(71);
	v->a[7188] = 1;
	v->a[7189] = sym_variable_name;
	v->a[7190] = actions(239);
	v->a[7191] = 1;
	v->a[7192] = anon_sym_done;
	v->a[7193] = state(60);
	v->a[7194] = 1;
	v->a[7195] = aux_sym__terminated_statement;
	v->a[7196] = state(183);
	v->a[7197] = 1;
	v->a[7198] = sym_command_name;
	v->a[7199] = state(341);
	small_parse_table_360(v);
}

/* EOF small_parse_table_71.c */
