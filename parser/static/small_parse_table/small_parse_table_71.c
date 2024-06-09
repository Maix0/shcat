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
	v->a[7100] = sym_pipeline;
	v->a[7101] = state(1196);
	v->a[7102] = 1;
	v->a[7103] = aux_sym_redirected_statement_repeat2;
	v->a[7104] = state(2037);
	v->a[7105] = 1;
	v->a[7106] = sym__statement_not_pipeline;
	v->a[7107] = state(2191);
	v->a[7108] = 1;
	v->a[7109] = sym__statements;
	v->a[7110] = actions(11);
	v->a[7111] = 2;
	v->a[7112] = anon_sym_while;
	v->a[7113] = anon_sym_until;
	v->a[7114] = actions(254);
	v->a[7115] = 2;
	v->a[7116] = anon_sym_LT_AMP_DASH;
	v->a[7117] = anon_sym_GT_AMP_DASH;
	v->a[7118] = state(295);
	v->a[7119] = 6;
	small_parse_table_356(v);
}

void	small_parse_table_356(t_small_parse_table_array *v)
{
	v->a[7120] = sym_arithmetic_expansion;
	v->a[7121] = sym_string;
	v->a[7122] = sym_number;
	v->a[7123] = sym_simple_expansion;
	v->a[7124] = sym_expansion;
	v->a[7125] = sym_command_substitution;
	v->a[7126] = actions(252);
	v->a[7127] = 8;
	v->a[7128] = anon_sym_LT;
	v->a[7129] = anon_sym_GT;
	v->a[7130] = anon_sym_GT_GT;
	v->a[7131] = anon_sym_AMP_GT;
	v->a[7132] = anon_sym_AMP_GT_GT;
	v->a[7133] = anon_sym_LT_AMP;
	v->a[7134] = anon_sym_GT_AMP;
	v->a[7135] = anon_sym_GT_PIPE;
	v->a[7136] = state(1031);
	v->a[7137] = 12;
	v->a[7138] = sym_redirected_statement;
	v->a[7139] = sym_for_statement;
	small_parse_table_357(v);
}

void	small_parse_table_357(t_small_parse_table_array *v)
{
	v->a[7140] = sym_while_statement;
	v->a[7141] = sym_if_statement;
	v->a[7142] = sym_case_statement;
	v->a[7143] = sym_function_definition;
	v->a[7144] = sym_compound_statement;
	v->a[7145] = sym_subshell;
	v->a[7146] = sym_list;
	v->a[7147] = sym_negated_command;
	v->a[7148] = sym_command;
	v->a[7149] = sym_variable_assignments;
	v->a[7150] = 34;
	v->a[7151] = actions(3);
	v->a[7152] = 1;
	v->a[7153] = sym_comment;
	v->a[7154] = actions(9);
	v->a[7155] = 1;
	v->a[7156] = anon_sym_for;
	v->a[7157] = actions(13);
	v->a[7158] = 1;
	v->a[7159] = anon_sym_if;
	small_parse_table_358(v);
}

void	small_parse_table_358(t_small_parse_table_array *v)
{
	v->a[7160] = actions(15);
	v->a[7161] = 1;
	v->a[7162] = anon_sym_case;
	v->a[7163] = actions(17);
	v->a[7164] = 1;
	v->a[7165] = anon_sym_LPAREN;
	v->a[7166] = actions(19);
	v->a[7167] = 1;
	v->a[7168] = anon_sym_LBRACE;
	v->a[7169] = actions(49);
	v->a[7170] = 1;
	v->a[7171] = sym_word;
	v->a[7172] = actions(57);
	v->a[7173] = 1;
	v->a[7174] = anon_sym_BANG;
	v->a[7175] = actions(63);
	v->a[7176] = 1;
	v->a[7177] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7178] = actions(65);
	v->a[7179] = 1;
	small_parse_table_359(v);
}

void	small_parse_table_359(t_small_parse_table_array *v)
{
	v->a[7180] = anon_sym_DOLLAR;
	v->a[7181] = actions(67);
	v->a[7182] = 1;
	v->a[7183] = anon_sym_DQUOTE;
	v->a[7184] = actions(69);
	v->a[7185] = 1;
	v->a[7186] = sym_raw_string;
	v->a[7187] = actions(71);
	v->a[7188] = 1;
	v->a[7189] = aux_sym_number_token1;
	v->a[7190] = actions(73);
	v->a[7191] = 1;
	v->a[7192] = aux_sym_number_token2;
	v->a[7193] = actions(75);
	v->a[7194] = 1;
	v->a[7195] = anon_sym_DOLLAR_LBRACE;
	v->a[7196] = actions(77);
	v->a[7197] = 1;
	v->a[7198] = anon_sym_DOLLAR_LPAREN;
	v->a[7199] = actions(79);
	small_parse_table_360(v);
}

/* EOF small_parse_table_71.c */
