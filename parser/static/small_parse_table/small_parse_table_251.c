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
	v->a[25100] = anon_sym_LT_LT;
	v->a[25101] = anon_sym_LT_LT_DASH;
	v->a[25102] = aux_sym_heredoc_redirect_token1;
	v->a[25103] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25104] = anon_sym_DOLLAR;
	v->a[25105] = anon_sym_DQUOTE;
	v->a[25106] = sym_raw_string;
	v->a[25107] = sym_number;
	v->a[25108] = anon_sym_DOLLAR_LBRACE;
	v->a[25109] = anon_sym_DOLLAR_LPAREN;
	v->a[25110] = anon_sym_BQUOTE;
	v->a[25111] = sym_word;
	v->a[25112] = anon_sym_SEMI;
	v->a[25113] = 7;
	v->a[25114] = actions(3);
	v->a[25115] = 1;
	v->a[25116] = sym_comment;
	v->a[25117] = actions(977);
	v->a[25118] = 1;
	v->a[25119] = anon_sym_LPAREN;
	small_parse_table_1256(v);
}

void	small_parse_table_1256(t_small_parse_table_array *v)
{
	v->a[25120] = actions(979);
	v->a[25121] = 1;
	v->a[25122] = aux_sym_concatenation_token1;
	v->a[25123] = actions(981);
	v->a[25124] = 1;
	v->a[25125] = sym__concat;
	v->a[25126] = state(348);
	v->a[25127] = 1;
	v->a[25128] = aux_sym_concatenation_repeat1;
	v->a[25129] = actions(975);
	v->a[25130] = 2;
	v->a[25131] = sym__bare_dollar;
	v->a[25132] = ts_builtin_sym_end;
	v->a[25133] = actions(967);
	v->a[25134] = 24;
	v->a[25135] = anon_sym_PIPE;
	v->a[25136] = anon_sym_SEMI_SEMI;
	v->a[25137] = anon_sym_AMP_AMP;
	v->a[25138] = anon_sym_PIPE_PIPE;
	v->a[25139] = anon_sym_LT;
	small_parse_table_1257(v);
}

void	small_parse_table_1257(t_small_parse_table_array *v)
{
	v->a[25140] = anon_sym_GT;
	v->a[25141] = anon_sym_GT_GT;
	v->a[25142] = anon_sym_LT_AMP;
	v->a[25143] = anon_sym_GT_AMP;
	v->a[25144] = anon_sym_GT_PIPE;
	v->a[25145] = anon_sym_LT_GT;
	v->a[25146] = anon_sym_LT_LT;
	v->a[25147] = anon_sym_LT_LT_DASH;
	v->a[25148] = aux_sym_heredoc_redirect_token1;
	v->a[25149] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25150] = anon_sym_DOLLAR;
	v->a[25151] = anon_sym_DQUOTE;
	v->a[25152] = sym_raw_string;
	v->a[25153] = sym_number;
	v->a[25154] = anon_sym_DOLLAR_LBRACE;
	v->a[25155] = anon_sym_DOLLAR_LPAREN;
	v->a[25156] = anon_sym_BQUOTE;
	v->a[25157] = sym_word;
	v->a[25158] = anon_sym_SEMI;
	v->a[25159] = 7;
	small_parse_table_1258(v);
}

void	small_parse_table_1258(t_small_parse_table_array *v)
{
	v->a[25160] = actions(3);
	v->a[25161] = 1;
	v->a[25162] = sym_comment;
	v->a[25163] = actions(746);
	v->a[25164] = 1;
	v->a[25165] = anon_sym_PIPE;
	v->a[25166] = actions(900);
	v->a[25167] = 1;
	v->a[25168] = sym_variable_name;
	v->a[25169] = state(1002);
	v->a[25170] = 2;
	v->a[25171] = sym_variable_assignment;
	v->a[25172] = aux_sym__variable_assignments_repeat1;
	v->a[25173] = state(984);
	v->a[25174] = 3;
	v->a[25175] = sym_file_redirect;
	v->a[25176] = sym_heredoc_redirect;
	v->a[25177] = aux_sym_redirected_statement_repeat1;
	v->a[25178] = actions(916);
	v->a[25179] = 7;
	small_parse_table_1259(v);
}

void	small_parse_table_1259(t_small_parse_table_array *v)
{
	v->a[25180] = anon_sym_SEMI_SEMI;
	v->a[25181] = anon_sym_AMP_AMP;
	v->a[25182] = anon_sym_PIPE_PIPE;
	v->a[25183] = anon_sym_LT_LT;
	v->a[25184] = anon_sym_LT_LT_DASH;
	v->a[25185] = aux_sym_heredoc_redirect_token1;
	v->a[25186] = anon_sym_SEMI;
	v->a[25187] = actions(742);
	v->a[25188] = 16;
	v->a[25189] = anon_sym_LT;
	v->a[25190] = anon_sym_GT;
	v->a[25191] = anon_sym_GT_GT;
	v->a[25192] = anon_sym_LT_AMP;
	v->a[25193] = anon_sym_GT_AMP;
	v->a[25194] = anon_sym_GT_PIPE;
	v->a[25195] = anon_sym_LT_GT;
	v->a[25196] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25197] = anon_sym_DOLLAR;
	v->a[25198] = anon_sym_DQUOTE;
	v->a[25199] = sym_raw_string;
	small_parse_table_1260(v);
}

/* EOF small_parse_table_251.c */
