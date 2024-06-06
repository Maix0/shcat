/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1112.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5560(t_small_parse_table_array *v)
{
	v->a[111200] = 1;
	v->a[111201] = aux_sym_number_token1;
	v->a[111202] = actions(899);
	v->a[111203] = 1;
	v->a[111204] = aux_sym_number_token2;
	v->a[111205] = actions(903);
	v->a[111206] = 1;
	v->a[111207] = anon_sym_DOLLAR_LPAREN;
	v->a[111208] = actions(915);
	v->a[111209] = 1;
	v->a[111210] = sym__brace_start;
	v->a[111211] = actions(5621);
	v->a[111212] = 1;
	v->a[111213] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[111214] = actions(5625);
	v->a[111215] = 1;
	v->a[111216] = anon_sym_DQUOTE;
	v->a[111217] = actions(5629);
	v->a[111218] = 1;
	v->a[111219] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5561(v);
}

void	small_parse_table_5561(t_small_parse_table_array *v)
{
	v->a[111220] = actions(5631);
	v->a[111221] = 1;
	v->a[111222] = anon_sym_BQUOTE;
	v->a[111223] = actions(5633);
	v->a[111224] = 1;
	v->a[111225] = anon_sym_DOLLAR_BQUOTE;
	v->a[111226] = actions(6378);
	v->a[111227] = 1;
	v->a[111228] = sym_word;
	v->a[111229] = actions(6380);
	v->a[111230] = 1;
	v->a[111231] = sym__special_character;
	v->a[111232] = actions(6384);
	v->a[111233] = 1;
	v->a[111234] = sym__comment_word;
	v->a[111235] = actions(6382);
	v->a[111236] = 3;
	v->a[111237] = sym_test_operator;
	v->a[111238] = sym__bare_dollar;
	v->a[111239] = sym_raw_string;
	small_parse_table_5562(v);
}

void	small_parse_table_5562(t_small_parse_table_array *v)
{
	v->a[111240] = state(710);
	v->a[111241] = 7;
	v->a[111242] = sym_arithmetic_expansion;
	v->a[111243] = sym_brace_expression;
	v->a[111244] = sym_string;
	v->a[111245] = sym_number;
	v->a[111246] = sym_simple_expansion;
	v->a[111247] = sym_expansion;
	v->a[111248] = sym_command_substitution;
	v->a[111249] = 7;
	v->a[111250] = actions(3);
	v->a[111251] = 1;
	v->a[111252] = sym_comment;
	v->a[111253] = actions(5443);
	v->a[111254] = 1;
	v->a[111255] = aux_sym_heredoc_redirect_token1;
	v->a[111256] = actions(6280);
	v->a[111257] = 1;
	v->a[111258] = sym_file_descriptor;
	v->a[111259] = state(2311);
	small_parse_table_5563(v);
}

void	small_parse_table_5563(t_small_parse_table_array *v)
{
	v->a[111260] = 1;
	v->a[111261] = sym_file_redirect;
	v->a[111262] = actions(5678);
	v->a[111263] = 2;
	v->a[111264] = anon_sym_LT_AMP_DASH;
	v->a[111265] = anon_sym_GT_AMP_DASH;
	v->a[111266] = actions(5676);
	v->a[111267] = 8;
	v->a[111268] = anon_sym_LT;
	v->a[111269] = anon_sym_GT;
	v->a[111270] = anon_sym_GT_GT;
	v->a[111271] = anon_sym_AMP_GT;
	v->a[111272] = anon_sym_AMP_GT_GT;
	v->a[111273] = anon_sym_LT_AMP;
	v->a[111274] = anon_sym_GT_AMP;
	v->a[111275] = anon_sym_GT_PIPE;
	v->a[111276] = actions(5441);
	v->a[111277] = 10;
	v->a[111278] = anon_sym_PIPE;
	v->a[111279] = anon_sym_RPAREN;
	small_parse_table_5564(v);
}

void	small_parse_table_5564(t_small_parse_table_array *v)
{
	v->a[111280] = anon_sym_SEMI_SEMI;
	v->a[111281] = anon_sym_PIPE_AMP;
	v->a[111282] = anon_sym_AMP_AMP;
	v->a[111283] = anon_sym_PIPE_PIPE;
	v->a[111284] = anon_sym_LT_LT;
	v->a[111285] = anon_sym_LT_LT_DASH;
	v->a[111286] = anon_sym_AMP;
	v->a[111287] = anon_sym_SEMI;
	v->a[111288] = 3;
	v->a[111289] = actions(3);
	v->a[111290] = 1;
	v->a[111291] = sym_comment;
	v->a[111292] = actions(6155);
	v->a[111293] = 2;
	v->a[111294] = sym_file_descriptor;
	v->a[111295] = aux_sym_heredoc_redirect_token1;
	v->a[111296] = actions(6153);
	v->a[111297] = 21;
	v->a[111298] = anon_sym_PIPE;
	v->a[111299] = anon_sym_SEMI_SEMI;
	small_parse_table_5565(v);
}

/* EOF small_parse_table_1112.c */
