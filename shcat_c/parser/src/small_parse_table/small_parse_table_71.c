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
	v->a[7100] = 9;
	v->a[7101] = sym_arithmetic_expansion;
	v->a[7102] = sym_brace_expression;
	v->a[7103] = sym_string;
	v->a[7104] = sym_translated_string;
	v->a[7105] = sym_number;
	v->a[7106] = sym_simple_expansion;
	v->a[7107] = sym_expansion;
	v->a[7108] = sym_command_substitution;
	v->a[7109] = sym_process_substitution;
	v->a[7110] = actions(2440);
	v->a[7111] = 22;
	v->a[7112] = anon_sym_SEMI;
	v->a[7113] = anon_sym_PIPE_PIPE;
	v->a[7114] = anon_sym_AMP_AMP;
	v->a[7115] = anon_sym_PIPE;
	v->a[7116] = anon_sym_AMP;
	v->a[7117] = anon_sym_LT;
	v->a[7118] = anon_sym_GT;
	v->a[7119] = anon_sym_LT_LT;
	small_parse_table_356(v);
}

void	small_parse_table_356(t_small_parse_table_array *v)
{
	v->a[7120] = anon_sym_GT_GT;
	v->a[7121] = anon_sym_esac;
	v->a[7122] = anon_sym_SEMI_SEMI;
	v->a[7123] = anon_sym_SEMI_AMP;
	v->a[7124] = anon_sym_SEMI_SEMI_AMP;
	v->a[7125] = anon_sym_PIPE_AMP;
	v->a[7126] = anon_sym_AMP_GT;
	v->a[7127] = anon_sym_AMP_GT_GT;
	v->a[7128] = anon_sym_LT_AMP;
	v->a[7129] = anon_sym_GT_AMP;
	v->a[7130] = anon_sym_GT_PIPE;
	v->a[7131] = anon_sym_LT_AMP_DASH;
	v->a[7132] = anon_sym_GT_AMP_DASH;
	v->a[7133] = anon_sym_LT_LT_DASH;
	v->a[7134] = 3;
	v->a[7135] = actions(71);
	v->a[7136] = 1;
	v->a[7137] = sym_comment;
	v->a[7138] = actions(809);
	v->a[7139] = 23;
	small_parse_table_357(v);
}

void	small_parse_table_357(t_small_parse_table_array *v)
{
	v->a[7140] = sym_file_descriptor;
	v->a[7141] = sym_variable_name;
	v->a[7142] = sym_test_operator;
	v->a[7143] = sym__brace_start;
	v->a[7144] = anon_sym_LPAREN_LPAREN;
	v->a[7145] = anon_sym_GT_GT;
	v->a[7146] = anon_sym_LBRACE;
	v->a[7147] = anon_sym_LBRACK_LBRACK;
	v->a[7148] = anon_sym_AMP_GT_GT;
	v->a[7149] = anon_sym_GT_PIPE;
	v->a[7150] = anon_sym_LT_AMP_DASH;
	v->a[7151] = anon_sym_GT_AMP_DASH;
	v->a[7152] = anon_sym_LT_LT_LT;
	v->a[7153] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7154] = anon_sym_DOLLAR_LBRACK;
	v->a[7155] = anon_sym_DQUOTE;
	v->a[7156] = sym_raw_string;
	v->a[7157] = sym_ansi_c_string;
	v->a[7158] = anon_sym_DOLLAR_LBRACE;
	v->a[7159] = anon_sym_BQUOTE;
	small_parse_table_358(v);
}

void	small_parse_table_358(t_small_parse_table_array *v)
{
	v->a[7160] = anon_sym_DOLLAR_BQUOTE;
	v->a[7161] = anon_sym_LT_LPAREN;
	v->a[7162] = anon_sym_GT_LPAREN;
	v->a[7163] = actions(579);
	v->a[7164] = 33;
	v->a[7165] = anon_sym_for;
	v->a[7166] = anon_sym_select;
	v->a[7167] = anon_sym_LT;
	v->a[7168] = anon_sym_GT;
	v->a[7169] = anon_sym_LPAREN;
	v->a[7170] = anon_sym_while;
	v->a[7171] = anon_sym_until;
	v->a[7172] = anon_sym_do;
	v->a[7173] = anon_sym_if;
	v->a[7174] = anon_sym_then;
	v->a[7175] = anon_sym_fi;
	v->a[7176] = anon_sym_elif;
	v->a[7177] = anon_sym_else;
	v->a[7178] = anon_sym_case;
	v->a[7179] = anon_sym_function;
	small_parse_table_359(v);
}

void	small_parse_table_359(t_small_parse_table_array *v)
{
	v->a[7180] = anon_sym_BANG;
	v->a[7181] = anon_sym_LBRACK;
	v->a[7182] = anon_sym_declare;
	v->a[7183] = anon_sym_typeset;
	v->a[7184] = anon_sym_export;
	v->a[7185] = anon_sym_readonly;
	v->a[7186] = anon_sym_local;
	v->a[7187] = anon_sym_unset;
	v->a[7188] = anon_sym_unsetenv;
	v->a[7189] = anon_sym_AMP_GT;
	v->a[7190] = anon_sym_LT_AMP;
	v->a[7191] = anon_sym_GT_AMP;
	v->a[7192] = anon_sym_DOLLAR;
	v->a[7193] = sym__special_character;
	v->a[7194] = aux_sym_number_token1;
	v->a[7195] = aux_sym_number_token2;
	v->a[7196] = anon_sym_DOLLAR_LPAREN;
	v->a[7197] = sym_word;
	v->a[7198] = 28;
	v->a[7199] = actions(3);
	small_parse_table_360(v);
}

/* EOF small_parse_table_71.c */
