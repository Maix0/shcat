/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_362.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1810(t_small_parse_table_array *v)
{
	v->a[36200] = anon_sym_LT_LT_DASH;
	v->a[36201] = aux_sym_heredoc_redirect_token1;
	v->a[36202] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36203] = anon_sym_AMP;
	v->a[36204] = anon_sym_DOLLAR;
	v->a[36205] = anon_sym_DQUOTE;
	v->a[36206] = sym_raw_string;
	v->a[36207] = aux_sym_number_token1;
	v->a[36208] = aux_sym_number_token2;
	v->a[36209] = anon_sym_DOLLAR_LBRACE;
	v->a[36210] = anon_sym_DOLLAR_LPAREN;
	v->a[36211] = anon_sym_BQUOTE;
	v->a[36212] = sym_word;
	v->a[36213] = anon_sym_SEMI;
	v->a[36214] = 14;
	v->a[36215] = actions(3);
	v->a[36216] = 1;
	v->a[36217] = sym_comment;
	v->a[36218] = actions(565);
	v->a[36219] = 1;
	small_parse_table_1811(v);
}

void	small_parse_table_1811(t_small_parse_table_array *v)
{
	v->a[36220] = sym_file_descriptor;
	v->a[36221] = actions(1479);
	v->a[36222] = 1;
	v->a[36223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36224] = actions(1481);
	v->a[36225] = 1;
	v->a[36226] = anon_sym_DOLLAR;
	v->a[36227] = actions(1483);
	v->a[36228] = 1;
	v->a[36229] = anon_sym_DQUOTE;
	v->a[36230] = actions(1485);
	v->a[36231] = 1;
	v->a[36232] = aux_sym_number_token1;
	v->a[36233] = actions(1487);
	v->a[36234] = 1;
	v->a[36235] = aux_sym_number_token2;
	v->a[36236] = actions(1489);
	v->a[36237] = 1;
	v->a[36238] = anon_sym_DOLLAR_LBRACE;
	v->a[36239] = actions(1491);
	small_parse_table_1812(v);
}

void	small_parse_table_1812(t_small_parse_table_array *v)
{
	v->a[36240] = 1;
	v->a[36241] = anon_sym_DOLLAR_LPAREN;
	v->a[36242] = actions(1493);
	v->a[36243] = 1;
	v->a[36244] = anon_sym_BQUOTE;
	v->a[36245] = actions(1477);
	v->a[36246] = 2;
	v->a[36247] = sym_raw_string;
	v->a[36248] = sym_word;
	v->a[36249] = state(421);
	v->a[36250] = 2;
	v->a[36251] = sym_concatenation;
	v->a[36252] = aux_sym_for_statement_repeat1;
	v->a[36253] = state(832);
	v->a[36254] = 6;
	v->a[36255] = sym_arithmetic_expansion;
	v->a[36256] = sym_string;
	v->a[36257] = sym_number;
	v->a[36258] = sym_simple_expansion;
	v->a[36259] = sym_expansion;
	small_parse_table_1813(v);
}

void	small_parse_table_1813(t_small_parse_table_array *v)
{
	v->a[36260] = sym_command_substitution;
	v->a[36261] = actions(567);
	v->a[36262] = 15;
	v->a[36263] = anon_sym_PIPE;
	v->a[36264] = anon_sym_AMP_AMP;
	v->a[36265] = anon_sym_PIPE_PIPE;
	v->a[36266] = anon_sym_LT;
	v->a[36267] = anon_sym_GT;
	v->a[36268] = anon_sym_GT_GT;
	v->a[36269] = anon_sym_AMP_GT;
	v->a[36270] = anon_sym_AMP_GT_GT;
	v->a[36271] = anon_sym_LT_AMP;
	v->a[36272] = anon_sym_GT_AMP;
	v->a[36273] = anon_sym_GT_PIPE;
	v->a[36274] = anon_sym_LT_AMP_DASH;
	v->a[36275] = anon_sym_GT_AMP_DASH;
	v->a[36276] = anon_sym_LT_LT;
	v->a[36277] = anon_sym_LT_LT_DASH;
	v->a[36278] = 3;
	v->a[36279] = actions(1404);
	small_parse_table_1814(v);
}

void	small_parse_table_1814(t_small_parse_table_array *v)
{
	v->a[36280] = 1;
	v->a[36281] = sym_comment;
	v->a[36282] = actions(1495);
	v->a[36283] = 13;
	v->a[36284] = anon_sym_PIPE;
	v->a[36285] = anon_sym_EQ;
	v->a[36286] = anon_sym_LT;
	v->a[36287] = anon_sym_GT;
	v->a[36288] = anon_sym_GT_GT;
	v->a[36289] = anon_sym_LT_LT;
	v->a[36290] = anon_sym_CARET;
	v->a[36291] = anon_sym_AMP;
	v->a[36292] = anon_sym_PLUS;
	v->a[36293] = anon_sym_DASH;
	v->a[36294] = anon_sym_STAR;
	v->a[36295] = anon_sym_SLASH;
	v->a[36296] = anon_sym_PERCENT;
	v->a[36297] = actions(1497);
	v->a[36298] = 21;
	v->a[36299] = anon_sym_AMP_AMP;
	small_parse_table_1815(v);
}

/* EOF small_parse_table_362.c */
