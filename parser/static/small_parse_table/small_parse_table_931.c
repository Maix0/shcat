/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_931.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4655(t_small_parse_table_array *v)
{
	v->a[93100] = actions(1183);
	v->a[93101] = 2;
	v->a[93102] = sym_raw_string;
	v->a[93103] = sym_ansi_c_string;
	v->a[93104] = state(2594);
	v->a[93105] = 6;
	v->a[93106] = sym_binary_expression;
	v->a[93107] = sym_ternary_expression;
	v->a[93108] = sym_unary_expression;
	v->a[93109] = sym_postfix_expression;
	v->a[93110] = sym_parenthesized_expression;
	v->a[93111] = sym_concatenation;
	v->a[93112] = state(2456);
	v->a[93113] = 9;
	v->a[93114] = sym_arithmetic_expansion;
	v->a[93115] = sym_brace_expression;
	v->a[93116] = sym_string;
	v->a[93117] = sym_translated_string;
	v->a[93118] = sym_number;
	v->a[93119] = sym_simple_expansion;
	small_parse_table_4656(v);
}

void	small_parse_table_4656(t_small_parse_table_array *v)
{
	v->a[93120] = sym_expansion;
	v->a[93121] = sym_command_substitution;
	v->a[93122] = sym_process_substitution;
	v->a[93123] = 6;
	v->a[93124] = actions(3);
	v->a[93125] = 1;
	v->a[93126] = sym_comment;
	v->a[93127] = actions(5844);
	v->a[93128] = 1;
	v->a[93129] = aux_sym_concatenation_token1;
	v->a[93130] = actions(6110);
	v->a[93131] = 1;
	v->a[93132] = sym__concat;
	v->a[93133] = state(1722);
	v->a[93134] = 1;
	v->a[93135] = aux_sym_concatenation_repeat1;
	v->a[93136] = actions(1267);
	v->a[93137] = 4;
	v->a[93138] = sym_file_descriptor;
	v->a[93139] = sym_test_operator;
	small_parse_table_4657(v);
}

void	small_parse_table_4657(t_small_parse_table_array *v)
{
	v->a[93140] = sym__brace_start;
	v->a[93141] = aux_sym_heredoc_redirect_token1;
	v->a[93142] = actions(1265);
	v->a[93143] = 37;
	v->a[93144] = anon_sym_LPAREN_LPAREN;
	v->a[93145] = anon_sym_SEMI;
	v->a[93146] = anon_sym_PIPE_PIPE;
	v->a[93147] = anon_sym_AMP_AMP;
	v->a[93148] = anon_sym_PIPE;
	v->a[93149] = anon_sym_AMP;
	v->a[93150] = anon_sym_LT;
	v->a[93151] = anon_sym_GT;
	v->a[93152] = anon_sym_LT_LT;
	v->a[93153] = anon_sym_GT_GT;
	v->a[93154] = anon_sym_SEMI_SEMI;
	v->a[93155] = anon_sym_PIPE_AMP;
	v->a[93156] = anon_sym_AMP_GT;
	v->a[93157] = anon_sym_AMP_GT_GT;
	v->a[93158] = anon_sym_LT_AMP;
	v->a[93159] = anon_sym_GT_AMP;
	small_parse_table_4658(v);
}

void	small_parse_table_4658(t_small_parse_table_array *v)
{
	v->a[93160] = anon_sym_GT_PIPE;
	v->a[93161] = anon_sym_LT_AMP_DASH;
	v->a[93162] = anon_sym_GT_AMP_DASH;
	v->a[93163] = anon_sym_LT_LT_DASH;
	v->a[93164] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[93165] = anon_sym_DOLLAR_LBRACK;
	v->a[93166] = anon_sym_DOLLAR;
	v->a[93167] = sym__special_character;
	v->a[93168] = anon_sym_DQUOTE;
	v->a[93169] = sym_raw_string;
	v->a[93170] = sym_ansi_c_string;
	v->a[93171] = aux_sym_number_token1;
	v->a[93172] = aux_sym_number_token2;
	v->a[93173] = anon_sym_DOLLAR_LBRACE;
	v->a[93174] = anon_sym_DOLLAR_LPAREN;
	v->a[93175] = anon_sym_BQUOTE;
	v->a[93176] = anon_sym_DOLLAR_BQUOTE;
	v->a[93177] = anon_sym_LT_LPAREN;
	v->a[93178] = anon_sym_GT_LPAREN;
	v->a[93179] = aux_sym__simple_variable_name_token1;
	small_parse_table_4659(v);
}

void	small_parse_table_4659(t_small_parse_table_array *v)
{
	v->a[93180] = sym_word;
	v->a[93181] = 6;
	v->a[93182] = actions(3);
	v->a[93183] = 1;
	v->a[93184] = sym_comment;
	v->a[93185] = actions(5844);
	v->a[93186] = 1;
	v->a[93187] = aux_sym_concatenation_token1;
	v->a[93188] = actions(5846);
	v->a[93189] = 1;
	v->a[93190] = sym__concat;
	v->a[93191] = state(1914);
	v->a[93192] = 1;
	v->a[93193] = aux_sym_concatenation_repeat1;
	v->a[93194] = actions(1263);
	v->a[93195] = 4;
	v->a[93196] = sym_file_descriptor;
	v->a[93197] = sym_test_operator;
	v->a[93198] = sym__brace_start;
	v->a[93199] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4660(v);
}

/* EOF small_parse_table_931.c */
