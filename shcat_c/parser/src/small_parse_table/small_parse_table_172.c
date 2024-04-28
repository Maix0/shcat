/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_172.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_860(t_small_parse_table_array *v)
{
	v->a[17200] = anon_sym_PIPE_PIPE;
	v->a[17201] = anon_sym_AMP_AMP;
	v->a[17202] = anon_sym_PIPE;
	v->a[17203] = anon_sym_AMP;
	v->a[17204] = anon_sym_LT;
	v->a[17205] = anon_sym_GT;
	v->a[17206] = anon_sym_LT_LT;
	v->a[17207] = anon_sym_GT_GT;
	v->a[17208] = anon_sym_RPAREN;
	v->a[17209] = anon_sym_SEMI_SEMI;
	v->a[17210] = anon_sym_PIPE_AMP;
	v->a[17211] = anon_sym_AMP_GT;
	v->a[17212] = anon_sym_AMP_GT_GT;
	v->a[17213] = anon_sym_LT_AMP;
	v->a[17214] = anon_sym_GT_AMP;
	v->a[17215] = anon_sym_GT_PIPE;
	v->a[17216] = anon_sym_LT_AMP_DASH;
	v->a[17217] = anon_sym_GT_AMP_DASH;
	v->a[17218] = anon_sym_LT_LT_DASH;
	v->a[17219] = 8;
	small_parse_table_861(v);
}

void	small_parse_table_861(t_small_parse_table_array *v)
{
	v->a[17220] = actions(3);
	v->a[17221] = 1;
	v->a[17222] = sym_comment;
	v->a[17223] = actions(3580);
	v->a[17224] = 1;
	v->a[17225] = anon_sym_DQUOTE;
	v->a[17226] = actions(3584);
	v->a[17227] = 1;
	v->a[17228] = sym_variable_name;
	v->a[17229] = state(2121);
	v->a[17230] = 1;
	v->a[17231] = sym_string;
	v->a[17232] = actions(3582);
	v->a[17233] = 2;
	v->a[17234] = aux_sym__simple_variable_name_token1;
	v->a[17235] = aux_sym__multiline_variable_name_token1;
	v->a[17236] = actions(1235);
	v->a[17237] = 3;
	v->a[17238] = sym_file_descriptor;
	v->a[17239] = sym_test_operator;
	small_parse_table_862(v);
}

void	small_parse_table_862(t_small_parse_table_array *v)
{
	v->a[17240] = sym__brace_start;
	v->a[17241] = actions(3578);
	v->a[17242] = 9;
	v->a[17243] = anon_sym_DASH;
	v->a[17244] = anon_sym_STAR;
	v->a[17245] = anon_sym_BANG;
	v->a[17246] = anon_sym_QMARK;
	v->a[17247] = anon_sym_DOLLAR;
	v->a[17248] = anon_sym_POUND;
	v->a[17249] = anon_sym_AT2;
	v->a[17250] = anon_sym_0;
	v->a[17251] = anon_sym__;
	v->a[17252] = actions(1227);
	v->a[17253] = 36;
	v->a[17254] = anon_sym_LPAREN_LPAREN;
	v->a[17255] = anon_sym_SEMI;
	v->a[17256] = anon_sym_PIPE_PIPE;
	v->a[17257] = anon_sym_AMP_AMP;
	v->a[17258] = anon_sym_PIPE;
	v->a[17259] = anon_sym_AMP;
	small_parse_table_863(v);
}

void	small_parse_table_863(t_small_parse_table_array *v)
{
	v->a[17260] = anon_sym_LT;
	v->a[17261] = anon_sym_GT;
	v->a[17262] = anon_sym_LT_LT;
	v->a[17263] = anon_sym_GT_GT;
	v->a[17264] = anon_sym_RPAREN;
	v->a[17265] = anon_sym_SEMI_SEMI;
	v->a[17266] = anon_sym_PIPE_AMP;
	v->a[17267] = anon_sym_AMP_GT;
	v->a[17268] = anon_sym_AMP_GT_GT;
	v->a[17269] = anon_sym_LT_AMP;
	v->a[17270] = anon_sym_GT_AMP;
	v->a[17271] = anon_sym_GT_PIPE;
	v->a[17272] = anon_sym_LT_AMP_DASH;
	v->a[17273] = anon_sym_GT_AMP_DASH;
	v->a[17274] = anon_sym_LT_LT_DASH;
	v->a[17275] = aux_sym_heredoc_redirect_token1;
	v->a[17276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17277] = anon_sym_DOLLAR_LBRACK;
	v->a[17278] = sym__special_character;
	v->a[17279] = sym_raw_string;
	small_parse_table_864(v);
}

void	small_parse_table_864(t_small_parse_table_array *v)
{
	v->a[17280] = sym_ansi_c_string;
	v->a[17281] = aux_sym_number_token1;
	v->a[17282] = aux_sym_number_token2;
	v->a[17283] = anon_sym_DOLLAR_LBRACE;
	v->a[17284] = anon_sym_DOLLAR_LPAREN;
	v->a[17285] = anon_sym_BQUOTE;
	v->a[17286] = anon_sym_DOLLAR_BQUOTE;
	v->a[17287] = anon_sym_LT_LPAREN;
	v->a[17288] = anon_sym_GT_LPAREN;
	v->a[17289] = sym_word;
	v->a[17290] = 35;
	v->a[17291] = actions(71);
	v->a[17292] = 1;
	v->a[17293] = sym_comment;
	v->a[17294] = actions(1141);
	v->a[17295] = 1;
	v->a[17296] = anon_sym_DOLLAR_LBRACK;
	v->a[17297] = actions(1145);
	v->a[17298] = 1;
	v->a[17299] = anon_sym_DOLLAR;
	small_parse_table_865(v);
}

/* EOF small_parse_table_172.c */
