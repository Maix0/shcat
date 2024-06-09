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
	v->a[25100] = actions(757);
	v->a[25101] = 30;
	v->a[25102] = anon_sym_esac;
	v->a[25103] = anon_sym_PIPE;
	v->a[25104] = anon_sym_SEMI_SEMI;
	v->a[25105] = anon_sym_AMP_AMP;
	v->a[25106] = anon_sym_PIPE_PIPE;
	v->a[25107] = anon_sym_LT;
	v->a[25108] = anon_sym_GT;
	v->a[25109] = anon_sym_GT_GT;
	v->a[25110] = anon_sym_AMP_GT;
	v->a[25111] = anon_sym_AMP_GT_GT;
	v->a[25112] = anon_sym_LT_AMP;
	v->a[25113] = anon_sym_GT_AMP;
	v->a[25114] = anon_sym_GT_PIPE;
	v->a[25115] = anon_sym_LT_AMP_DASH;
	v->a[25116] = anon_sym_GT_AMP_DASH;
	v->a[25117] = anon_sym_LT_LT;
	v->a[25118] = anon_sym_LT_LT_DASH;
	v->a[25119] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1256(v);
}

void	small_parse_table_1256(t_small_parse_table_array *v)
{
	v->a[25120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25121] = anon_sym_AMP;
	v->a[25122] = anon_sym_DOLLAR;
	v->a[25123] = anon_sym_DQUOTE;
	v->a[25124] = sym_raw_string;
	v->a[25125] = aux_sym_number_token1;
	v->a[25126] = aux_sym_number_token2;
	v->a[25127] = anon_sym_DOLLAR_LBRACE;
	v->a[25128] = anon_sym_DOLLAR_LPAREN;
	v->a[25129] = anon_sym_BQUOTE;
	v->a[25130] = sym_word;
	v->a[25131] = anon_sym_SEMI;
	v->a[25132] = 15;
	v->a[25133] = actions(3);
	v->a[25134] = 1;
	v->a[25135] = sym_comment;
	v->a[25136] = actions(485);
	v->a[25137] = 1;
	v->a[25138] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25139] = actions(487);
	small_parse_table_1257(v);
}

void	small_parse_table_1257(t_small_parse_table_array *v)
{
	v->a[25140] = 1;
	v->a[25141] = anon_sym_DOLLAR;
	v->a[25142] = actions(489);
	v->a[25143] = 1;
	v->a[25144] = anon_sym_DQUOTE;
	v->a[25145] = actions(491);
	v->a[25146] = 1;
	v->a[25147] = aux_sym_number_token1;
	v->a[25148] = actions(493);
	v->a[25149] = 1;
	v->a[25150] = aux_sym_number_token2;
	v->a[25151] = actions(495);
	v->a[25152] = 1;
	v->a[25153] = anon_sym_DOLLAR_LBRACE;
	v->a[25154] = actions(497);
	v->a[25155] = 1;
	v->a[25156] = anon_sym_DOLLAR_LPAREN;
	v->a[25157] = actions(501);
	v->a[25158] = 1;
	v->a[25159] = sym__bare_dollar;
	small_parse_table_1258(v);
}

void	small_parse_table_1258(t_small_parse_table_array *v)
{
	v->a[25160] = actions(563);
	v->a[25161] = 1;
	v->a[25162] = sym_file_descriptor;
	v->a[25163] = state(224);
	v->a[25164] = 1;
	v->a[25165] = aux_sym_command_repeat2;
	v->a[25166] = state(753);
	v->a[25167] = 1;
	v->a[25168] = sym_concatenation;
	v->a[25169] = actions(551);
	v->a[25170] = 2;
	v->a[25171] = sym_raw_string;
	v->a[25172] = sym_word;
	v->a[25173] = state(452);
	v->a[25174] = 6;
	v->a[25175] = sym_arithmetic_expansion;
	v->a[25176] = sym_string;
	v->a[25177] = sym_number;
	v->a[25178] = sym_simple_expansion;
	v->a[25179] = sym_expansion;
	small_parse_table_1259(v);
}

void	small_parse_table_1259(t_small_parse_table_array *v)
{
	v->a[25180] = sym_command_substitution;
	v->a[25181] = actions(561);
	v->a[25182] = 20;
	v->a[25183] = anon_sym_PIPE;
	v->a[25184] = anon_sym_SEMI_SEMI;
	v->a[25185] = anon_sym_AMP_AMP;
	v->a[25186] = anon_sym_PIPE_PIPE;
	v->a[25187] = anon_sym_LT;
	v->a[25188] = anon_sym_GT;
	v->a[25189] = anon_sym_GT_GT;
	v->a[25190] = anon_sym_AMP_GT;
	v->a[25191] = anon_sym_AMP_GT_GT;
	v->a[25192] = anon_sym_LT_AMP;
	v->a[25193] = anon_sym_GT_AMP;
	v->a[25194] = anon_sym_GT_PIPE;
	v->a[25195] = anon_sym_LT_AMP_DASH;
	v->a[25196] = anon_sym_GT_AMP_DASH;
	v->a[25197] = anon_sym_LT_LT;
	v->a[25198] = anon_sym_LT_LT_DASH;
	v->a[25199] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1260(v);
}

/* EOF small_parse_table_251.c */
