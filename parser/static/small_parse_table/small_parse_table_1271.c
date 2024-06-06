/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1271.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6355(t_small_parse_table_array *v)
{
	v->a[127100] = actions(2945);
	v->a[127101] = 1;
	v->a[127102] = anon_sym_LT_LT;
	v->a[127103] = actions(5680);
	v->a[127104] = 1;
	v->a[127105] = sym_file_descriptor;
	v->a[127106] = actions(7241);
	v->a[127107] = 1;
	v->a[127108] = anon_sym_LT_LT_DASH;
	v->a[127109] = actions(7272);
	v->a[127110] = 2;
	v->a[127111] = anon_sym_AMP_AMP;
	v->a[127112] = anon_sym_PIPE_PIPE;
	v->a[127113] = actions(7276);
	v->a[127114] = 2;
	v->a[127115] = anon_sym_LT_AMP_DASH;
	v->a[127116] = anon_sym_GT_AMP_DASH;
	v->a[127117] = actions(7274);
	v->a[127118] = 3;
	v->a[127119] = anon_sym_GT_GT;
	small_parse_table_6356(v);
}

void	small_parse_table_6356(t_small_parse_table_array *v)
{
	v->a[127120] = anon_sym_AMP_GT_GT;
	v->a[127121] = anon_sym_GT_PIPE;
	v->a[127122] = state(2109);
	v->a[127123] = 3;
	v->a[127124] = sym_file_redirect;
	v->a[127125] = sym_heredoc_redirect;
	v->a[127126] = aux_sym_redirected_statement_repeat1;
	v->a[127127] = actions(5676);
	v->a[127128] = 5;
	v->a[127129] = anon_sym_LT;
	v->a[127130] = anon_sym_GT;
	v->a[127131] = anon_sym_AMP_GT;
	v->a[127132] = anon_sym_LT_AMP;
	v->a[127133] = anon_sym_GT_AMP;
	v->a[127134] = 6;
	v->a[127135] = actions(3);
	v->a[127136] = 1;
	v->a[127137] = sym_comment;
	v->a[127138] = actions(7278);
	v->a[127139] = 1;
	small_parse_table_6357(v);
}

void	small_parse_table_6357(t_small_parse_table_array *v)
{
	v->a[127140] = aux_sym_concatenation_token1;
	v->a[127141] = actions(7280);
	v->a[127142] = 1;
	v->a[127143] = sym__concat;
	v->a[127144] = state(2725);
	v->a[127145] = 1;
	v->a[127146] = aux_sym_concatenation_repeat1;
	v->a[127147] = actions(2664);
	v->a[127148] = 2;
	v->a[127149] = sym_file_descriptor;
	v->a[127150] = aux_sym_heredoc_redirect_token1;
	v->a[127151] = actions(2662);
	v->a[127152] = 13;
	v->a[127153] = anon_sym_AMP_AMP;
	v->a[127154] = anon_sym_PIPE_PIPE;
	v->a[127155] = anon_sym_LT;
	v->a[127156] = anon_sym_GT;
	v->a[127157] = anon_sym_GT_GT;
	v->a[127158] = anon_sym_AMP_GT;
	v->a[127159] = anon_sym_AMP_GT_GT;
	small_parse_table_6358(v);
}

void	small_parse_table_6358(t_small_parse_table_array *v)
{
	v->a[127160] = anon_sym_LT_AMP;
	v->a[127161] = anon_sym_GT_AMP;
	v->a[127162] = anon_sym_GT_PIPE;
	v->a[127163] = anon_sym_LT_AMP_DASH;
	v->a[127164] = anon_sym_GT_AMP_DASH;
	v->a[127165] = sym__special_character;
	v->a[127166] = 6;
	v->a[127167] = actions(3);
	v->a[127168] = 1;
	v->a[127169] = sym_comment;
	v->a[127170] = actions(7092);
	v->a[127171] = 1;
	v->a[127172] = aux_sym_concatenation_token1;
	v->a[127173] = actions(7094);
	v->a[127174] = 1;
	v->a[127175] = sym__concat;
	v->a[127176] = state(2698);
	v->a[127177] = 1;
	v->a[127178] = aux_sym_concatenation_repeat1;
	v->a[127179] = actions(2664);
	small_parse_table_6359(v);
}

void	small_parse_table_6359(t_small_parse_table_array *v)
{
	v->a[127180] = 3;
	v->a[127181] = sym_test_operator;
	v->a[127182] = sym__brace_start;
	v->a[127183] = aux_sym_heredoc_redirect_token1;
	v->a[127184] = actions(2662);
	v->a[127185] = 12;
	v->a[127186] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[127187] = anon_sym_DOLLAR;
	v->a[127188] = sym__special_character;
	v->a[127189] = anon_sym_DQUOTE;
	v->a[127190] = sym_raw_string;
	v->a[127191] = aux_sym_number_token1;
	v->a[127192] = aux_sym_number_token2;
	v->a[127193] = anon_sym_DOLLAR_LBRACE;
	v->a[127194] = anon_sym_DOLLAR_LPAREN;
	v->a[127195] = anon_sym_BQUOTE;
	v->a[127196] = anon_sym_DOLLAR_BQUOTE;
	v->a[127197] = sym_word;
	v->a[127198] = 6;
	v->a[127199] = actions(3);
	small_parse_table_6360(v);
}

/* EOF small_parse_table_1271.c */
