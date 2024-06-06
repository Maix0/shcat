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
	v->a[7100] = sym__brace_start;
	v->a[7101] = actions(1723);
	v->a[7102] = 9;
	v->a[7103] = anon_sym_BANG;
	v->a[7104] = anon_sym_DASH;
	v->a[7105] = anon_sym_STAR;
	v->a[7106] = anon_sym_QMARK;
	v->a[7107] = anon_sym_DOLLAR;
	v->a[7108] = anon_sym_POUND;
	v->a[7109] = anon_sym_AT;
	v->a[7110] = anon_sym_0;
	v->a[7111] = anon_sym__;
	v->a[7112] = actions(826);
	v->a[7113] = 32;
	v->a[7114] = anon_sym_PIPE;
	v->a[7115] = anon_sym_RPAREN;
	v->a[7116] = anon_sym_SEMI_SEMI;
	v->a[7117] = anon_sym_PIPE_AMP;
	v->a[7118] = anon_sym_AMP_AMP;
	v->a[7119] = anon_sym_PIPE_PIPE;
	small_parse_table_356(v);
}

void	small_parse_table_356(t_small_parse_table_array *v)
{
	v->a[7120] = anon_sym_LT;
	v->a[7121] = anon_sym_GT;
	v->a[7122] = anon_sym_GT_GT;
	v->a[7123] = anon_sym_AMP_GT;
	v->a[7124] = anon_sym_AMP_GT_GT;
	v->a[7125] = anon_sym_LT_AMP;
	v->a[7126] = anon_sym_GT_AMP;
	v->a[7127] = anon_sym_GT_PIPE;
	v->a[7128] = anon_sym_LT_AMP_DASH;
	v->a[7129] = anon_sym_GT_AMP_DASH;
	v->a[7130] = anon_sym_LT_LT;
	v->a[7131] = anon_sym_LT_LT_DASH;
	v->a[7132] = aux_sym_heredoc_redirect_token1;
	v->a[7133] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7134] = anon_sym_AMP;
	v->a[7135] = sym__special_character;
	v->a[7136] = anon_sym_DQUOTE;
	v->a[7137] = sym_raw_string;
	v->a[7138] = aux_sym_number_token1;
	v->a[7139] = aux_sym_number_token2;
	small_parse_table_357(v);
}

void	small_parse_table_357(t_small_parse_table_array *v)
{
	v->a[7140] = anon_sym_DOLLAR_LBRACE;
	v->a[7141] = anon_sym_DOLLAR_LPAREN;
	v->a[7142] = anon_sym_BQUOTE;
	v->a[7143] = anon_sym_DOLLAR_BQUOTE;
	v->a[7144] = sym_word;
	v->a[7145] = anon_sym_SEMI;
	v->a[7146] = 6;
	v->a[7147] = actions(3);
	v->a[7148] = 1;
	v->a[7149] = sym_comment;
	v->a[7150] = actions(1733);
	v->a[7151] = 1;
	v->a[7152] = sym_variable_name;
	v->a[7153] = actions(1731);
	v->a[7154] = 2;
	v->a[7155] = aux_sym__simple_variable_name_token1;
	v->a[7156] = aux_sym__multiline_variable_name_token1;
	v->a[7157] = actions(828);
	v->a[7158] = 4;
	v->a[7159] = sym_file_descriptor;
	small_parse_table_358(v);
}

void	small_parse_table_358(t_small_parse_table_array *v)
{
	v->a[7160] = sym_test_operator;
	v->a[7161] = sym__brace_start;
	v->a[7162] = ts_builtin_sym_end;
	v->a[7163] = actions(1729);
	v->a[7164] = 9;
	v->a[7165] = anon_sym_BANG;
	v->a[7166] = anon_sym_DASH;
	v->a[7167] = anon_sym_STAR;
	v->a[7168] = anon_sym_QMARK;
	v->a[7169] = anon_sym_DOLLAR;
	v->a[7170] = anon_sym_POUND;
	v->a[7171] = anon_sym_AT;
	v->a[7172] = anon_sym_0;
	v->a[7173] = anon_sym__;
	v->a[7174] = actions(826);
	v->a[7175] = 31;
	v->a[7176] = anon_sym_PIPE;
	v->a[7177] = anon_sym_SEMI_SEMI;
	v->a[7178] = anon_sym_PIPE_AMP;
	v->a[7179] = anon_sym_AMP_AMP;
	small_parse_table_359(v);
}

void	small_parse_table_359(t_small_parse_table_array *v)
{
	v->a[7180] = anon_sym_PIPE_PIPE;
	v->a[7181] = anon_sym_LT;
	v->a[7182] = anon_sym_GT;
	v->a[7183] = anon_sym_GT_GT;
	v->a[7184] = anon_sym_AMP_GT;
	v->a[7185] = anon_sym_AMP_GT_GT;
	v->a[7186] = anon_sym_LT_AMP;
	v->a[7187] = anon_sym_GT_AMP;
	v->a[7188] = anon_sym_GT_PIPE;
	v->a[7189] = anon_sym_LT_AMP_DASH;
	v->a[7190] = anon_sym_GT_AMP_DASH;
	v->a[7191] = anon_sym_LT_LT;
	v->a[7192] = anon_sym_LT_LT_DASH;
	v->a[7193] = aux_sym_heredoc_redirect_token1;
	v->a[7194] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7195] = anon_sym_AMP;
	v->a[7196] = sym__special_character;
	v->a[7197] = anon_sym_DQUOTE;
	v->a[7198] = sym_raw_string;
	v->a[7199] = aux_sym_number_token1;
	small_parse_table_360(v);
}

/* EOF small_parse_table_71.c */
