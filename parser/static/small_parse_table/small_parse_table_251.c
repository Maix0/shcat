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
	v->a[25100] = sym_comment;
	v->a[25101] = actions(580);
	v->a[25102] = 1;
	v->a[25103] = anon_sym_PIPE;
	v->a[25104] = actions(597);
	v->a[25105] = 1;
	v->a[25106] = anon_sym_LT_LT;
	v->a[25107] = actions(1037);
	v->a[25108] = 1;
	v->a[25109] = sym_variable_name;
	v->a[25110] = actions(1140);
	v->a[25111] = 1;
	v->a[25112] = aux_sym_heredoc_redirect_token1;
	v->a[25113] = actions(1033);
	v->a[25114] = 2;
	v->a[25115] = anon_sym_AMP_AMP;
	v->a[25116] = anon_sym_PIPE_PIPE;
	v->a[25117] = state(1277);
	v->a[25118] = 2;
	v->a[25119] = sym_variable_assignment;
	small_parse_table_1256(v);
}

void	small_parse_table_1256(t_small_parse_table_array *v)
{
	v->a[25120] = aux_sym__variable_assignments_repeat1;
	v->a[25121] = state(1225);
	v->a[25122] = 3;
	v->a[25123] = sym_file_redirect;
	v->a[25124] = sym_heredoc_redirect;
	v->a[25125] = aux_sym_redirected_statement_repeat1;
	v->a[25126] = actions(576);
	v->a[25127] = 12;
	v->a[25128] = anon_sym_LT;
	v->a[25129] = anon_sym_GT;
	v->a[25130] = anon_sym_GT_GT;
	v->a[25131] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25132] = anon_sym_DOLLAR;
	v->a[25133] = anon_sym_DQUOTE;
	v->a[25134] = sym_raw_string;
	v->a[25135] = sym_number;
	v->a[25136] = anon_sym_DOLLAR_LBRACE;
	v->a[25137] = anon_sym_DOLLAR_LPAREN;
	v->a[25138] = anon_sym_BQUOTE;
	v->a[25139] = sym_word;
	small_parse_table_1257(v);
}

void	small_parse_table_1257(t_small_parse_table_array *v)
{
	v->a[25140] = 3;
	v->a[25141] = actions(3);
	v->a[25142] = 1;
	v->a[25143] = sym_comment;
	v->a[25144] = actions(1116);
	v->a[25145] = 2;
	v->a[25146] = sym__concat;
	v->a[25147] = sym_variable_name;
	v->a[25148] = actions(1114);
	v->a[25149] = 21;
	v->a[25150] = anon_sym_PIPE;
	v->a[25151] = anon_sym_RPAREN;
	v->a[25152] = anon_sym_SEMI_SEMI;
	v->a[25153] = anon_sym_AMP_AMP;
	v->a[25154] = anon_sym_PIPE_PIPE;
	v->a[25155] = anon_sym_LT;
	v->a[25156] = anon_sym_GT;
	v->a[25157] = anon_sym_GT_GT;
	v->a[25158] = anon_sym_LT_LT;
	v->a[25159] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1258(v);
}

void	small_parse_table_1258(t_small_parse_table_array *v)
{
	v->a[25160] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25161] = aux_sym_concatenation_token1;
	v->a[25162] = anon_sym_DOLLAR;
	v->a[25163] = anon_sym_DQUOTE;
	v->a[25164] = sym_raw_string;
	v->a[25165] = sym_number;
	v->a[25166] = anon_sym_DOLLAR_LBRACE;
	v->a[25167] = anon_sym_DOLLAR_LPAREN;
	v->a[25168] = anon_sym_BQUOTE;
	v->a[25169] = sym_word;
	v->a[25170] = anon_sym_SEMI;
	v->a[25171] = 11;
	v->a[25172] = actions(3);
	v->a[25173] = 1;
	v->a[25174] = sym_comment;
	v->a[25175] = actions(1144);
	v->a[25176] = 1;
	v->a[25177] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25178] = actions(1146);
	v->a[25179] = 1;
	small_parse_table_1259(v);
}

void	small_parse_table_1259(t_small_parse_table_array *v)
{
	v->a[25180] = anon_sym_DOLLAR;
	v->a[25181] = actions(1148);
	v->a[25182] = 1;
	v->a[25183] = anon_sym_DQUOTE;
	v->a[25184] = actions(1150);
	v->a[25185] = 1;
	v->a[25186] = anon_sym_DOLLAR_LBRACE;
	v->a[25187] = actions(1152);
	v->a[25188] = 1;
	v->a[25189] = anon_sym_DOLLAR_LPAREN;
	v->a[25190] = actions(1154);
	v->a[25191] = 1;
	v->a[25192] = anon_sym_BQUOTE;
	v->a[25193] = state(313);
	v->a[25194] = 2;
	v->a[25195] = sym_concatenation;
	v->a[25196] = aux_sym_for_statement_repeat1;
	v->a[25197] = actions(1142);
	v->a[25198] = 3;
	v->a[25199] = sym_raw_string;
	small_parse_table_1260(v);
}

/* EOF small_parse_table_251.c */
