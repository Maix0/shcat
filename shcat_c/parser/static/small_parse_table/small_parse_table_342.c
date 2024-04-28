/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_342.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1710(t_small_parse_table_array *v)
{
	v->a[34200] = anon_sym_GT_PIPE;
	v->a[34201] = anon_sym_LT_AMP_DASH;
	v->a[34202] = anon_sym_GT_AMP_DASH;
	v->a[34203] = anon_sym_LT_LT_DASH;
	v->a[34204] = anon_sym_LT_LT_LT;
	v->a[34205] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34206] = anon_sym_DOLLAR_LBRACK;
	v->a[34207] = aux_sym_concatenation_token1;
	v->a[34208] = anon_sym_DOLLAR;
	v->a[34209] = sym__special_character;
	v->a[34210] = anon_sym_DQUOTE;
	v->a[34211] = sym_raw_string;
	v->a[34212] = sym_ansi_c_string;
	v->a[34213] = aux_sym_number_token1;
	v->a[34214] = aux_sym_number_token2;
	v->a[34215] = anon_sym_DOLLAR_LBRACE;
	v->a[34216] = anon_sym_DOLLAR_LPAREN;
	v->a[34217] = anon_sym_BQUOTE;
	v->a[34218] = anon_sym_DOLLAR_BQUOTE;
	v->a[34219] = anon_sym_LT_LPAREN;
	small_parse_table_1711(v);
}

void	small_parse_table_1711(t_small_parse_table_array *v)
{
	v->a[34220] = anon_sym_GT_LPAREN;
	v->a[34221] = sym_word;
	v->a[34222] = 30;
	v->a[34223] = actions(71);
	v->a[34224] = 1;
	v->a[34225] = sym_comment;
	v->a[34226] = actions(451);
	v->a[34227] = 1;
	v->a[34228] = anon_sym_DOLLAR_LBRACK;
	v->a[34229] = actions(453);
	v->a[34230] = 1;
	v->a[34231] = anon_sym_DOLLAR;
	v->a[34232] = actions(457);
	v->a[34233] = 1;
	v->a[34234] = anon_sym_DQUOTE;
	v->a[34235] = actions(461);
	v->a[34236] = 1;
	v->a[34237] = aux_sym_number_token1;
	v->a[34238] = actions(463);
	v->a[34239] = 1;
	small_parse_table_1712(v);
}

void	small_parse_table_1712(t_small_parse_table_array *v)
{
	v->a[34240] = aux_sym_number_token2;
	v->a[34241] = actions(465);
	v->a[34242] = 1;
	v->a[34243] = anon_sym_DOLLAR_LBRACE;
	v->a[34244] = actions(467);
	v->a[34245] = 1;
	v->a[34246] = anon_sym_DOLLAR_LPAREN;
	v->a[34247] = actions(469);
	v->a[34248] = 1;
	v->a[34249] = anon_sym_BQUOTE;
	v->a[34250] = actions(471);
	v->a[34251] = 1;
	v->a[34252] = anon_sym_DOLLAR_BQUOTE;
	v->a[34253] = actions(479);
	v->a[34254] = 1;
	v->a[34255] = sym_test_operator;
	v->a[34256] = actions(481);
	v->a[34257] = 1;
	v->a[34258] = sym__brace_start;
	v->a[34259] = actions(1394);
	small_parse_table_1713(v);
}

void	small_parse_table_1713(t_small_parse_table_array *v)
{
	v->a[34260] = 1;
	v->a[34261] = anon_sym_LT_LT_LT;
	v->a[34262] = actions(1396);
	v->a[34263] = 1;
	v->a[34264] = sym_file_descriptor;
	v->a[34265] = actions(3018);
	v->a[34266] = 1;
	v->a[34267] = sym_word;
	v->a[34268] = actions(4703);
	v->a[34269] = 1;
	v->a[34270] = sym__special_character;
	v->a[34271] = actions(4705);
	v->a[34272] = 1;
	v->a[34273] = sym_variable_name;
	v->a[34274] = state(529);
	v->a[34275] = 1;
	v->a[34276] = sym_command_name;
	v->a[34277] = state(926);
	v->a[34278] = 1;
	v->a[34279] = aux_sym__literal_repeat1;
	small_parse_table_1714(v);
}

void	small_parse_table_1714(t_small_parse_table_array *v)
{
	v->a[34280] = state(1082);
	v->a[34281] = 1;
	v->a[34282] = sym_concatenation;
	v->a[34283] = state(6771);
	v->a[34284] = 1;
	v->a[34285] = sym_subscript;
	v->a[34286] = actions(449);
	v->a[34287] = 2;
	v->a[34288] = anon_sym_LPAREN_LPAREN;
	v->a[34289] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34290] = actions(459);
	v->a[34291] = 2;
	v->a[34292] = sym_raw_string;
	v->a[34293] = sym_ansi_c_string;
	v->a[34294] = actions(473);
	v->a[34295] = 2;
	v->a[34296] = anon_sym_LT_LPAREN;
	v->a[34297] = anon_sym_GT_LPAREN;
	v->a[34298] = actions(1392);
	v->a[34299] = 2;
	small_parse_table_1715(v);
}

/* EOF small_parse_table_342.c */
