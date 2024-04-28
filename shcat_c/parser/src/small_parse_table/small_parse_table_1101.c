/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1101.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5505(t_small_parse_table_array *v)
{
	v->a[110100] = anon_sym_PIPE_PIPE;
	v->a[110101] = anon_sym_AMP_AMP;
	v->a[110102] = anon_sym_PIPE;
	v->a[110103] = anon_sym_AMP;
	v->a[110104] = anon_sym_LT;
	v->a[110105] = anon_sym_GT;
	v->a[110106] = anon_sym_LT_LT;
	v->a[110107] = anon_sym_GT_GT;
	v->a[110108] = anon_sym_SEMI_SEMI;
	v->a[110109] = anon_sym_SEMI_AMP;
	v->a[110110] = anon_sym_SEMI_SEMI_AMP;
	v->a[110111] = anon_sym_PIPE_AMP;
	v->a[110112] = anon_sym_AMP_GT;
	v->a[110113] = anon_sym_AMP_GT_GT;
	v->a[110114] = anon_sym_LT_AMP;
	v->a[110115] = anon_sym_GT_AMP;
	v->a[110116] = anon_sym_GT_PIPE;
	v->a[110117] = anon_sym_LT_AMP_DASH;
	v->a[110118] = anon_sym_GT_AMP_DASH;
	v->a[110119] = anon_sym_LT_LT_DASH;
	small_parse_table_5506(v);
}

void	small_parse_table_5506(t_small_parse_table_array *v)
{
	v->a[110120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110121] = anon_sym_DOLLAR_LBRACK;
	v->a[110122] = anon_sym_DOLLAR;
	v->a[110123] = anon_sym_DQUOTE;
	v->a[110124] = sym_raw_string;
	v->a[110125] = sym_ansi_c_string;
	v->a[110126] = aux_sym_number_token1;
	v->a[110127] = aux_sym_number_token2;
	v->a[110128] = anon_sym_DOLLAR_LBRACE;
	v->a[110129] = anon_sym_DOLLAR_LPAREN;
	v->a[110130] = anon_sym_BQUOTE;
	v->a[110131] = anon_sym_DOLLAR_BQUOTE;
	v->a[110132] = anon_sym_LT_LPAREN;
	v->a[110133] = anon_sym_GT_LPAREN;
	v->a[110134] = sym_word;
	v->a[110135] = 8;
	v->a[110136] = actions(3);
	v->a[110137] = 1;
	v->a[110138] = sym_comment;
	v->a[110139] = actions(5826);
	small_parse_table_5507(v);
}

void	small_parse_table_5507(t_small_parse_table_array *v)
{
	v->a[110140] = 1;
	v->a[110141] = aux_sym_heredoc_redirect_token1;
	v->a[110142] = actions(5828);
	v->a[110143] = 1;
	v->a[110144] = sym_file_descriptor;
	v->a[110145] = actions(6259);
	v->a[110146] = 1;
	v->a[110147] = anon_sym_RPAREN;
	v->a[110148] = actions(5831);
	v->a[110149] = 3;
	v->a[110150] = sym_variable_name;
	v->a[110151] = sym_test_operator;
	v->a[110152] = sym__brace_start;
	v->a[110153] = actions(5821);
	v->a[110154] = 9;
	v->a[110155] = anon_sym_SEMI;
	v->a[110156] = anon_sym_PIPE_PIPE;
	v->a[110157] = anon_sym_AMP_AMP;
	v->a[110158] = anon_sym_PIPE;
	v->a[110159] = anon_sym_AMP;
	small_parse_table_5508(v);
}

void	small_parse_table_5508(t_small_parse_table_array *v)
{
	v->a[110160] = anon_sym_LT_LT;
	v->a[110161] = anon_sym_SEMI_SEMI;
	v->a[110162] = anon_sym_PIPE_AMP;
	v->a[110163] = anon_sym_LT_LT_DASH;
	v->a[110164] = actions(5823);
	v->a[110165] = 11;
	v->a[110166] = anon_sym_LT;
	v->a[110167] = anon_sym_GT;
	v->a[110168] = anon_sym_GT_GT;
	v->a[110169] = anon_sym_AMP_GT;
	v->a[110170] = anon_sym_AMP_GT_GT;
	v->a[110171] = anon_sym_LT_AMP;
	v->a[110172] = anon_sym_GT_AMP;
	v->a[110173] = anon_sym_GT_PIPE;
	v->a[110174] = anon_sym_LT_AMP_DASH;
	v->a[110175] = anon_sym_GT_AMP_DASH;
	v->a[110176] = anon_sym_LT_LT_LT;
	v->a[110177] = actions(5819);
	v->a[110178] = 17;
	v->a[110179] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5509(v);
}

void	small_parse_table_5509(t_small_parse_table_array *v)
{
	v->a[110180] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110181] = anon_sym_DOLLAR_LBRACK;
	v->a[110182] = anon_sym_DOLLAR;
	v->a[110183] = sym__special_character;
	v->a[110184] = anon_sym_DQUOTE;
	v->a[110185] = sym_raw_string;
	v->a[110186] = sym_ansi_c_string;
	v->a[110187] = aux_sym_number_token1;
	v->a[110188] = aux_sym_number_token2;
	v->a[110189] = anon_sym_DOLLAR_LBRACE;
	v->a[110190] = anon_sym_DOLLAR_LPAREN;
	v->a[110191] = anon_sym_BQUOTE;
	v->a[110192] = anon_sym_DOLLAR_BQUOTE;
	v->a[110193] = anon_sym_LT_LPAREN;
	v->a[110194] = anon_sym_GT_LPAREN;
	v->a[110195] = sym_word;
	v->a[110196] = 8;
	v->a[110197] = actions(3);
	v->a[110198] = 1;
	v->a[110199] = sym_comment;
	small_parse_table_5510(v);
}

/* EOF small_parse_table_1101.c */
