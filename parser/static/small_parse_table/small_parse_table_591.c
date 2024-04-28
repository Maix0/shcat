/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_591.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2955(t_small_parse_table_array *v)
{
	v->a[59100] = actions(5642);
	v->a[59101] = 1;
	v->a[59102] = sym__special_character;
	v->a[59103] = state(1358);
	v->a[59104] = 1;
	v->a[59105] = aux_sym__literal_repeat1;
	v->a[59106] = actions(4548);
	v->a[59107] = 5;
	v->a[59108] = sym_file_descriptor;
	v->a[59109] = sym_test_operator;
	v->a[59110] = sym__bare_dollar;
	v->a[59111] = sym__brace_start;
	v->a[59112] = aux_sym_heredoc_redirect_token1;
	v->a[59113] = actions(4546);
	v->a[59114] = 39;
	v->a[59115] = anon_sym_LPAREN_LPAREN;
	v->a[59116] = anon_sym_SEMI;
	v->a[59117] = anon_sym_PIPE_PIPE;
	v->a[59118] = anon_sym_AMP_AMP;
	v->a[59119] = anon_sym_PIPE;
	small_parse_table_2956(v);
}

void	small_parse_table_2956(t_small_parse_table_array *v)
{
	v->a[59120] = anon_sym_AMP;
	v->a[59121] = anon_sym_EQ_EQ;
	v->a[59122] = anon_sym_LT;
	v->a[59123] = anon_sym_GT;
	v->a[59124] = anon_sym_LT_LT;
	v->a[59125] = anon_sym_GT_GT;
	v->a[59126] = anon_sym_RPAREN;
	v->a[59127] = anon_sym_SEMI_SEMI;
	v->a[59128] = anon_sym_PIPE_AMP;
	v->a[59129] = anon_sym_EQ_TILDE;
	v->a[59130] = anon_sym_AMP_GT;
	v->a[59131] = anon_sym_AMP_GT_GT;
	v->a[59132] = anon_sym_LT_AMP;
	v->a[59133] = anon_sym_GT_AMP;
	v->a[59134] = anon_sym_GT_PIPE;
	v->a[59135] = anon_sym_LT_AMP_DASH;
	v->a[59136] = anon_sym_GT_AMP_DASH;
	v->a[59137] = anon_sym_LT_LT_DASH;
	v->a[59138] = anon_sym_LT_LT_LT;
	v->a[59139] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2957(v);
}

void	small_parse_table_2957(t_small_parse_table_array *v)
{
	v->a[59140] = anon_sym_DOLLAR_LBRACK;
	v->a[59141] = anon_sym_DOLLAR;
	v->a[59142] = anon_sym_DQUOTE;
	v->a[59143] = sym_raw_string;
	v->a[59144] = sym_ansi_c_string;
	v->a[59145] = aux_sym_number_token1;
	v->a[59146] = aux_sym_number_token2;
	v->a[59147] = anon_sym_DOLLAR_LBRACE;
	v->a[59148] = anon_sym_DOLLAR_LPAREN;
	v->a[59149] = anon_sym_BQUOTE;
	v->a[59150] = anon_sym_DOLLAR_BQUOTE;
	v->a[59151] = anon_sym_LT_LPAREN;
	v->a[59152] = anon_sym_GT_LPAREN;
	v->a[59153] = sym_word;
	v->a[59154] = 6;
	v->a[59155] = actions(3);
	v->a[59156] = 1;
	v->a[59157] = sym_comment;
	v->a[59158] = actions(5634);
	v->a[59159] = 1;
	small_parse_table_2958(v);
}

void	small_parse_table_2958(t_small_parse_table_array *v)
{
	v->a[59160] = aux_sym_concatenation_token1;
	v->a[59161] = actions(5636);
	v->a[59162] = 1;
	v->a[59163] = sym__concat;
	v->a[59164] = state(1443);
	v->a[59165] = 1;
	v->a[59166] = aux_sym_concatenation_repeat1;
	v->a[59167] = actions(5176);
	v->a[59168] = 6;
	v->a[59169] = sym_file_descriptor;
	v->a[59170] = sym_variable_name;
	v->a[59171] = sym_test_operator;
	v->a[59172] = sym__brace_start;
	v->a[59173] = ts_builtin_sym_end;
	v->a[59174] = aux_sym_heredoc_redirect_token1;
	v->a[59175] = actions(5174);
	v->a[59176] = 37;
	v->a[59177] = anon_sym_LPAREN_LPAREN;
	v->a[59178] = anon_sym_SEMI;
	v->a[59179] = anon_sym_PIPE_PIPE;
	small_parse_table_2959(v);
}

void	small_parse_table_2959(t_small_parse_table_array *v)
{
	v->a[59180] = anon_sym_AMP_AMP;
	v->a[59181] = anon_sym_PIPE;
	v->a[59182] = anon_sym_AMP;
	v->a[59183] = anon_sym_LT;
	v->a[59184] = anon_sym_GT;
	v->a[59185] = anon_sym_LT_LT;
	v->a[59186] = anon_sym_GT_GT;
	v->a[59187] = anon_sym_SEMI_SEMI;
	v->a[59188] = anon_sym_PIPE_AMP;
	v->a[59189] = anon_sym_AMP_GT;
	v->a[59190] = anon_sym_AMP_GT_GT;
	v->a[59191] = anon_sym_LT_AMP;
	v->a[59192] = anon_sym_GT_AMP;
	v->a[59193] = anon_sym_GT_PIPE;
	v->a[59194] = anon_sym_LT_AMP_DASH;
	v->a[59195] = anon_sym_GT_AMP_DASH;
	v->a[59196] = anon_sym_LT_LT_DASH;
	v->a[59197] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59198] = anon_sym_DOLLAR_LBRACK;
	v->a[59199] = anon_sym_DOLLAR;
	small_parse_table_2960(v);
}

/* EOF small_parse_table_591.c */
