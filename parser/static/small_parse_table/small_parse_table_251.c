/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_251.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1255(t_small_parse_table_array *v)
{
	v->a[25100] = anon_sym_SEMI_SEMI;
	v->a[25101] = anon_sym_SEMI_AMP;
	v->a[25102] = anon_sym_SEMI_SEMI_AMP;
	v->a[25103] = anon_sym_PIPE_AMP;
	v->a[25104] = anon_sym_AMP_AMP;
	v->a[25105] = anon_sym_PIPE_PIPE;
	v->a[25106] = anon_sym_LT;
	v->a[25107] = anon_sym_GT;
	v->a[25108] = anon_sym_GT_GT;
	v->a[25109] = anon_sym_AMP_GT;
	v->a[25110] = anon_sym_AMP_GT_GT;
	v->a[25111] = anon_sym_LT_AMP;
	v->a[25112] = anon_sym_GT_AMP;
	v->a[25113] = anon_sym_GT_PIPE;
	v->a[25114] = anon_sym_LT_AMP_DASH;
	v->a[25115] = anon_sym_GT_AMP_DASH;
	v->a[25116] = anon_sym_LT_LT;
	v->a[25117] = anon_sym_LT_LT_DASH;
	v->a[25118] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25119] = anon_sym_AMP;
	small_parse_table_1256(v);
}

void	small_parse_table_1256(t_small_parse_table_array *v)
{
	v->a[25120] = aux_sym_concatenation_token1;
	v->a[25121] = anon_sym_DOLLAR;
	v->a[25122] = sym__special_character;
	v->a[25123] = anon_sym_DQUOTE;
	v->a[25124] = sym_raw_string;
	v->a[25125] = aux_sym_number_token1;
	v->a[25126] = aux_sym_number_token2;
	v->a[25127] = anon_sym_DOLLAR_LBRACE;
	v->a[25128] = anon_sym_DOLLAR_LPAREN;
	v->a[25129] = anon_sym_BQUOTE;
	v->a[25130] = anon_sym_DOLLAR_BQUOTE;
	v->a[25131] = aux_sym__simple_variable_name_token1;
	v->a[25132] = sym_word;
	v->a[25133] = anon_sym_SEMI;
	v->a[25134] = 6;
	v->a[25135] = actions(3);
	v->a[25136] = 1;
	v->a[25137] = sym_comment;
	v->a[25138] = actions(3167);
	v->a[25139] = 1;
	small_parse_table_1257(v);
}

void	small_parse_table_1257(t_small_parse_table_array *v)
{
	v->a[25140] = aux_sym_concatenation_token1;
	v->a[25141] = actions(3169);
	v->a[25142] = 1;
	v->a[25143] = sym__concat;
	v->a[25144] = state(715);
	v->a[25145] = 1;
	v->a[25146] = aux_sym_concatenation_repeat1;
	v->a[25147] = actions(2690);
	v->a[25148] = 5;
	v->a[25149] = sym_file_descriptor;
	v->a[25150] = sym_variable_name;
	v->a[25151] = sym_test_operator;
	v->a[25152] = sym__brace_start;
	v->a[25153] = aux_sym_heredoc_redirect_token1;
	v->a[25154] = actions(2688);
	v->a[25155] = 33;
	v->a[25156] = anon_sym_PIPE;
	v->a[25157] = anon_sym_RPAREN;
	v->a[25158] = anon_sym_SEMI_SEMI;
	v->a[25159] = anon_sym_PIPE_AMP;
	small_parse_table_1258(v);
}

void	small_parse_table_1258(t_small_parse_table_array *v)
{
	v->a[25160] = anon_sym_AMP_AMP;
	v->a[25161] = anon_sym_PIPE_PIPE;
	v->a[25162] = anon_sym_LT;
	v->a[25163] = anon_sym_GT;
	v->a[25164] = anon_sym_GT_GT;
	v->a[25165] = anon_sym_AMP_GT;
	v->a[25166] = anon_sym_AMP_GT_GT;
	v->a[25167] = anon_sym_LT_AMP;
	v->a[25168] = anon_sym_GT_AMP;
	v->a[25169] = anon_sym_GT_PIPE;
	v->a[25170] = anon_sym_LT_AMP_DASH;
	v->a[25171] = anon_sym_GT_AMP_DASH;
	v->a[25172] = anon_sym_LT_LT;
	v->a[25173] = anon_sym_LT_LT_DASH;
	v->a[25174] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25175] = anon_sym_AMP;
	v->a[25176] = anon_sym_DOLLAR;
	v->a[25177] = sym__special_character;
	v->a[25178] = anon_sym_DQUOTE;
	v->a[25179] = sym_raw_string;
	small_parse_table_1259(v);
}

void	small_parse_table_1259(t_small_parse_table_array *v)
{
	v->a[25180] = aux_sym_number_token1;
	v->a[25181] = aux_sym_number_token2;
	v->a[25182] = anon_sym_DOLLAR_LBRACE;
	v->a[25183] = anon_sym_DOLLAR_LPAREN;
	v->a[25184] = anon_sym_BQUOTE;
	v->a[25185] = anon_sym_DOLLAR_BQUOTE;
	v->a[25186] = aux_sym__simple_variable_name_token1;
	v->a[25187] = sym_word;
	v->a[25188] = anon_sym_SEMI;
	v->a[25189] = 3;
	v->a[25190] = actions(3);
	v->a[25191] = 1;
	v->a[25192] = sym_comment;
	v->a[25193] = actions(3020);
	v->a[25194] = 5;
	v->a[25195] = sym_file_descriptor;
	v->a[25196] = sym__concat;
	v->a[25197] = sym_test_operator;
	v->a[25198] = sym__brace_start;
	v->a[25199] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1260(v);
}

/* EOF small_parse_table_251.c */
