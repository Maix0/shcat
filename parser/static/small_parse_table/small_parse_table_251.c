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
	v->a[25100] = anon_sym_AMP;
	v->a[25101] = anon_sym_SEMI;
	v->a[25102] = 16;
	v->a[25103] = actions(3);
	v->a[25104] = 1;
	v->a[25105] = sym_comment;
	v->a[25106] = actions(17);
	v->a[25107] = 1;
	v->a[25108] = anon_sym_LPAREN;
	v->a[25109] = actions(455);
	v->a[25110] = 1;
	v->a[25111] = sym_file_descriptor;
	v->a[25112] = actions(477);
	v->a[25113] = 1;
	v->a[25114] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25115] = actions(479);
	v->a[25116] = 1;
	v->a[25117] = anon_sym_DOLLAR;
	v->a[25118] = actions(481);
	v->a[25119] = 1;
	small_parse_table_1256(v);
}

void	small_parse_table_1256(t_small_parse_table_array *v)
{
	v->a[25120] = anon_sym_DQUOTE;
	v->a[25121] = actions(483);
	v->a[25122] = 1;
	v->a[25123] = anon_sym_DOLLAR_LBRACE;
	v->a[25124] = actions(485);
	v->a[25125] = 1;
	v->a[25126] = anon_sym_DOLLAR_LPAREN;
	v->a[25127] = actions(487);
	v->a[25128] = 1;
	v->a[25129] = anon_sym_BQUOTE;
	v->a[25130] = actions(489);
	v->a[25131] = 1;
	v->a[25132] = sym__bare_dollar;
	v->a[25133] = state(391);
	v->a[25134] = 1;
	v->a[25135] = aux_sym_command_repeat2;
	v->a[25136] = state(712);
	v->a[25137] = 1;
	v->a[25138] = sym_concatenation;
	v->a[25139] = state(1204);
	small_parse_table_1257(v);
}

void	small_parse_table_1257(t_small_parse_table_array *v)
{
	v->a[25140] = 1;
	v->a[25141] = sym_subshell;
	v->a[25142] = actions(891);
	v->a[25143] = 3;
	v->a[25144] = sym_raw_string;
	v->a[25145] = sym_number;
	v->a[25146] = sym_word;
	v->a[25147] = state(796);
	v->a[25148] = 5;
	v->a[25149] = sym_arithmetic_expansion;
	v->a[25150] = sym_string;
	v->a[25151] = sym_simple_expansion;
	v->a[25152] = sym_expansion;
	v->a[25153] = sym_command_substitution;
	v->a[25154] = actions(459);
	v->a[25155] = 16;
	v->a[25156] = anon_sym_PIPE;
	v->a[25157] = anon_sym_AMP_AMP;
	v->a[25158] = anon_sym_PIPE_PIPE;
	v->a[25159] = anon_sym_LT;
	small_parse_table_1258(v);
}

void	small_parse_table_1258(t_small_parse_table_array *v)
{
	v->a[25160] = anon_sym_GT;
	v->a[25161] = anon_sym_GT_GT;
	v->a[25162] = anon_sym_AMP_GT;
	v->a[25163] = anon_sym_AMP_GT_GT;
	v->a[25164] = anon_sym_LT_AMP;
	v->a[25165] = anon_sym_GT_AMP;
	v->a[25166] = anon_sym_GT_PIPE;
	v->a[25167] = anon_sym_LT_AMP_DASH;
	v->a[25168] = anon_sym_GT_AMP_DASH;
	v->a[25169] = anon_sym_LT_LT;
	v->a[25170] = anon_sym_LT_LT_DASH;
	v->a[25171] = aux_sym_heredoc_redirect_token1;
	v->a[25172] = 11;
	v->a[25173] = actions(3);
	v->a[25174] = 1;
	v->a[25175] = sym_comment;
	v->a[25176] = actions(766);
	v->a[25177] = 1;
	v->a[25178] = anon_sym_PIPE;
	v->a[25179] = actions(774);
	small_parse_table_1259(v);
}

void	small_parse_table_1259(t_small_parse_table_array *v)
{
	v->a[25180] = 1;
	v->a[25181] = sym_file_descriptor;
	v->a[25182] = actions(895);
	v->a[25183] = 1;
	v->a[25184] = sym_variable_name;
	v->a[25185] = state(692);
	v->a[25186] = 1;
	v->a[25187] = sym_terminator;
	v->a[25188] = actions(804);
	v->a[25189] = 2;
	v->a[25190] = anon_sym_LT_LT;
	v->a[25191] = anon_sym_LT_LT_DASH;
	v->a[25192] = actions(893);
	v->a[25193] = 2;
	v->a[25194] = anon_sym_AMP_AMP;
	v->a[25195] = anon_sym_PIPE_PIPE;
	v->a[25196] = state(1270);
	v->a[25197] = 2;
	v->a[25198] = sym_variable_assignment;
	v->a[25199] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1260(v);
}

/* EOF small_parse_table_251.c */
