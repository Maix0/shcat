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
	v->a[25100] = 12;
	v->a[25101] = actions(3);
	v->a[25102] = 1;
	v->a[25103] = sym_comment;
	v->a[25104] = actions(713);
	v->a[25105] = 1;
	v->a[25106] = sym_file_descriptor;
	v->a[25107] = actions(910);
	v->a[25108] = 1;
	v->a[25109] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25110] = actions(912);
	v->a[25111] = 1;
	v->a[25112] = anon_sym_DOLLAR;
	v->a[25113] = actions(914);
	v->a[25114] = 1;
	v->a[25115] = anon_sym_DQUOTE;
	v->a[25116] = actions(916);
	v->a[25117] = 1;
	v->a[25118] = anon_sym_DOLLAR_LBRACE;
	v->a[25119] = actions(918);
	small_parse_table_1256(v);
}

void	small_parse_table_1256(t_small_parse_table_array *v)
{
	v->a[25120] = 1;
	v->a[25121] = anon_sym_DOLLAR_LPAREN;
	v->a[25122] = actions(920);
	v->a[25123] = 1;
	v->a[25124] = anon_sym_BQUOTE;
	v->a[25125] = state(1468);
	v->a[25126] = 1;
	v->a[25127] = sym_concatenation;
	v->a[25128] = actions(922);
	v->a[25129] = 3;
	v->a[25130] = sym_raw_string;
	v->a[25131] = sym_number;
	v->a[25132] = sym_word;
	v->a[25133] = state(1191);
	v->a[25134] = 5;
	v->a[25135] = sym_arithmetic_expansion;
	v->a[25136] = sym_string;
	v->a[25137] = sym_simple_expansion;
	v->a[25138] = sym_expansion;
	v->a[25139] = sym_command_substitution;
	small_parse_table_1257(v);
}

void	small_parse_table_1257(t_small_parse_table_array *v)
{
	v->a[25140] = actions(715);
	v->a[25141] = 20;
	v->a[25142] = anon_sym_esac;
	v->a[25143] = anon_sym_PIPE;
	v->a[25144] = anon_sym_SEMI_SEMI;
	v->a[25145] = anon_sym_AMP_AMP;
	v->a[25146] = anon_sym_PIPE_PIPE;
	v->a[25147] = anon_sym_LT;
	v->a[25148] = anon_sym_GT;
	v->a[25149] = anon_sym_GT_GT;
	v->a[25150] = anon_sym_AMP_GT;
	v->a[25151] = anon_sym_AMP_GT_GT;
	v->a[25152] = anon_sym_LT_AMP;
	v->a[25153] = anon_sym_GT_AMP;
	v->a[25154] = anon_sym_GT_PIPE;
	v->a[25155] = anon_sym_LT_AMP_DASH;
	v->a[25156] = anon_sym_GT_AMP_DASH;
	v->a[25157] = anon_sym_LT_LT;
	v->a[25158] = anon_sym_LT_LT_DASH;
	v->a[25159] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1258(v);
}

void	small_parse_table_1258(t_small_parse_table_array *v)
{
	v->a[25160] = anon_sym_AMP;
	v->a[25161] = anon_sym_SEMI;
	v->a[25162] = 20;
	v->a[25163] = actions(3);
	v->a[25164] = 1;
	v->a[25165] = sym_comment;
	v->a[25166] = actions(884);
	v->a[25167] = 1;
	v->a[25168] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25169] = actions(886);
	v->a[25170] = 1;
	v->a[25171] = anon_sym_DOLLAR;
	v->a[25172] = actions(888);
	v->a[25173] = 1;
	v->a[25174] = anon_sym_DQUOTE;
	v->a[25175] = actions(890);
	v->a[25176] = 1;
	v->a[25177] = anon_sym_DOLLAR_LBRACE;
	v->a[25178] = actions(892);
	v->a[25179] = 1;
	small_parse_table_1259(v);
}

void	small_parse_table_1259(t_small_parse_table_array *v)
{
	v->a[25180] = anon_sym_DOLLAR_LPAREN;
	v->a[25181] = actions(894);
	v->a[25182] = 1;
	v->a[25183] = anon_sym_BQUOTE;
	v->a[25184] = actions(896);
	v->a[25185] = 1;
	v->a[25186] = sym_file_descriptor;
	v->a[25187] = actions(924);
	v->a[25188] = 1;
	v->a[25189] = aux_sym_heredoc_redirect_token1;
	v->a[25190] = state(1720);
	v->a[25191] = 1;
	v->a[25192] = aux_sym__heredoc_command;
	v->a[25193] = state(2098);
	v->a[25194] = 1;
	v->a[25195] = sym_concatenation;
	v->a[25196] = state(2289);
	v->a[25197] = 1;
	v->a[25198] = sym__heredoc_pipeline;
	v->a[25199] = state(2292);
	small_parse_table_1260(v);
}

/* EOF small_parse_table_251.c */
