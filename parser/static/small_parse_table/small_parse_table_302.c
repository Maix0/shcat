/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_302.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1510(t_small_parse_table_array *v)
{
	v->a[30200] = 15;
	v->a[30201] = actions(3);
	v->a[30202] = 1;
	v->a[30203] = sym_comment;
	v->a[30204] = actions(778);
	v->a[30205] = 1;
	v->a[30206] = anon_sym_LPAREN;
	v->a[30207] = actions(782);
	v->a[30208] = 1;
	v->a[30209] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30210] = actions(784);
	v->a[30211] = 1;
	v->a[30212] = anon_sym_DOLLAR;
	v->a[30213] = actions(786);
	v->a[30214] = 1;
	v->a[30215] = anon_sym_DQUOTE;
	v->a[30216] = actions(788);
	v->a[30217] = 1;
	v->a[30218] = anon_sym_DOLLAR_LBRACE;
	v->a[30219] = actions(790);
	small_parse_table_1511(v);
}

void	small_parse_table_1511(t_small_parse_table_array *v)
{
	v->a[30220] = 1;
	v->a[30221] = anon_sym_DOLLAR_LPAREN;
	v->a[30222] = actions(792);
	v->a[30223] = 1;
	v->a[30224] = anon_sym_BQUOTE;
	v->a[30225] = actions(794);
	v->a[30226] = 1;
	v->a[30227] = sym_extglob_pattern;
	v->a[30228] = state(597);
	v->a[30229] = 1;
	v->a[30230] = aux_sym_case_statement_repeat1;
	v->a[30231] = state(1232);
	v->a[30232] = 1;
	v->a[30233] = sym_case_item;
	v->a[30234] = state(1640);
	v->a[30235] = 1;
	v->a[30236] = sym__case_item_last;
	v->a[30237] = state(1538);
	v->a[30238] = 2;
	v->a[30239] = sym_concatenation;
	small_parse_table_1512(v);
}

void	small_parse_table_1512(t_small_parse_table_array *v)
{
	v->a[30240] = sym__extglob_blob;
	v->a[30241] = actions(774);
	v->a[30242] = 3;
	v->a[30243] = sym_raw_string;
	v->a[30244] = sym_number;
	v->a[30245] = sym_word;
	v->a[30246] = state(1468);
	v->a[30247] = 5;
	v->a[30248] = sym_arithmetic_expansion;
	v->a[30249] = sym_string;
	v->a[30250] = sym_simple_expansion;
	v->a[30251] = sym_expansion;
	v->a[30252] = sym_command_substitution;
	v->a[30253] = 6;
	v->a[30254] = actions(3);
	v->a[30255] = 1;
	v->a[30256] = sym_comment;
	v->a[30257] = actions(1251);
	v->a[30258] = 1;
	v->a[30259] = anon_sym_RPAREN;
	small_parse_table_1513(v);
}

void	small_parse_table_1513(t_small_parse_table_array *v)
{
	v->a[30260] = actions(1257);
	v->a[30261] = 1;
	v->a[30262] = sym_variable_name;
	v->a[30263] = actions(1254);
	v->a[30264] = 3;
	v->a[30265] = anon_sym_LT;
	v->a[30266] = anon_sym_GT;
	v->a[30267] = anon_sym_GT_GT;
	v->a[30268] = actions(1249);
	v->a[30269] = 7;
	v->a[30270] = anon_sym_PIPE;
	v->a[30271] = anon_sym_SEMI_SEMI;
	v->a[30272] = anon_sym_AMP_AMP;
	v->a[30273] = anon_sym_PIPE_PIPE;
	v->a[30274] = anon_sym_LT_LT;
	v->a[30275] = aux_sym_heredoc_redirect_token1;
	v->a[30276] = anon_sym_SEMI;
	v->a[30277] = actions(1247);
	v->a[30278] = 9;
	v->a[30279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1514(v);
}

void	small_parse_table_1514(t_small_parse_table_array *v)
{
	v->a[30280] = anon_sym_DOLLAR;
	v->a[30281] = anon_sym_DQUOTE;
	v->a[30282] = sym_raw_string;
	v->a[30283] = sym_number;
	v->a[30284] = anon_sym_DOLLAR_LBRACE;
	v->a[30285] = anon_sym_DOLLAR_LPAREN;
	v->a[30286] = anon_sym_BQUOTE;
	v->a[30287] = sym_word;
	v->a[30288] = 6;
	v->a[30289] = actions(3);
	v->a[30290] = 1;
	v->a[30291] = sym_comment;
	v->a[30292] = actions(1257);
	v->a[30293] = 1;
	v->a[30294] = sym_variable_name;
	v->a[30295] = actions(1259);
	v->a[30296] = 1;
	v->a[30297] = anon_sym_RPAREN;
	v->a[30298] = actions(1254);
	v->a[30299] = 3;
	small_parse_table_1515(v);
}

/* EOF small_parse_table_302.c */
