/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_872.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4360(t_small_parse_table_array *v)
{
	v->a[87200] = sym__brace_start;
	v->a[87201] = aux_sym_heredoc_redirect_token1;
	v->a[87202] = actions(1292);
	v->a[87203] = 39;
	v->a[87204] = anon_sym_LPAREN_LPAREN;
	v->a[87205] = anon_sym_SEMI;
	v->a[87206] = anon_sym_PIPE_PIPE;
	v->a[87207] = anon_sym_AMP_AMP;
	v->a[87208] = anon_sym_PIPE;
	v->a[87209] = anon_sym_AMP;
	v->a[87210] = anon_sym_LT;
	v->a[87211] = anon_sym_GT;
	v->a[87212] = anon_sym_LT_LT;
	v->a[87213] = anon_sym_GT_GT;
	v->a[87214] = anon_sym_RPAREN;
	v->a[87215] = anon_sym_SEMI_SEMI;
	v->a[87216] = anon_sym_PIPE_AMP;
	v->a[87217] = anon_sym_AMP_GT;
	v->a[87218] = anon_sym_AMP_GT_GT;
	v->a[87219] = anon_sym_LT_AMP;
	small_parse_table_4361(v);
}

void	small_parse_table_4361(t_small_parse_table_array *v)
{
	v->a[87220] = anon_sym_GT_AMP;
	v->a[87221] = anon_sym_GT_PIPE;
	v->a[87222] = anon_sym_LT_AMP_DASH;
	v->a[87223] = anon_sym_GT_AMP_DASH;
	v->a[87224] = anon_sym_LT_LT_DASH;
	v->a[87225] = anon_sym_LT_LT_LT;
	v->a[87226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87227] = anon_sym_DOLLAR_LBRACK;
	v->a[87228] = aux_sym_concatenation_token1;
	v->a[87229] = anon_sym_DOLLAR;
	v->a[87230] = sym__special_character;
	v->a[87231] = anon_sym_DQUOTE;
	v->a[87232] = sym_raw_string;
	v->a[87233] = sym_ansi_c_string;
	v->a[87234] = aux_sym_number_token1;
	v->a[87235] = aux_sym_number_token2;
	v->a[87236] = anon_sym_DOLLAR_LBRACE;
	v->a[87237] = anon_sym_DOLLAR_LPAREN;
	v->a[87238] = anon_sym_BQUOTE;
	v->a[87239] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4362(v);
}

void	small_parse_table_4362(t_small_parse_table_array *v)
{
	v->a[87240] = anon_sym_LT_LPAREN;
	v->a[87241] = anon_sym_GT_LPAREN;
	v->a[87242] = sym_word;
	v->a[87243] = 5;
	v->a[87244] = actions(3);
	v->a[87245] = 1;
	v->a[87246] = sym_comment;
	v->a[87247] = actions(6004);
	v->a[87248] = 1;
	v->a[87249] = sym__special_character;
	v->a[87250] = state(1873);
	v->a[87251] = 1;
	v->a[87252] = aux_sym__literal_repeat1;
	v->a[87253] = actions(5180);
	v->a[87254] = 6;
	v->a[87255] = sym_file_descriptor;
	v->a[87256] = sym_variable_name;
	v->a[87257] = sym_test_operator;
	v->a[87258] = sym__brace_start;
	v->a[87259] = ts_builtin_sym_end;
	small_parse_table_4363(v);
}

void	small_parse_table_4363(t_small_parse_table_array *v)
{
	v->a[87260] = aux_sym_heredoc_redirect_token1;
	v->a[87261] = actions(5178);
	v->a[87262] = 36;
	v->a[87263] = anon_sym_LPAREN_LPAREN;
	v->a[87264] = anon_sym_SEMI;
	v->a[87265] = anon_sym_PIPE_PIPE;
	v->a[87266] = anon_sym_AMP_AMP;
	v->a[87267] = anon_sym_PIPE;
	v->a[87268] = anon_sym_AMP;
	v->a[87269] = anon_sym_LT;
	v->a[87270] = anon_sym_GT;
	v->a[87271] = anon_sym_LT_LT;
	v->a[87272] = anon_sym_GT_GT;
	v->a[87273] = anon_sym_SEMI_SEMI;
	v->a[87274] = anon_sym_PIPE_AMP;
	v->a[87275] = anon_sym_AMP_GT;
	v->a[87276] = anon_sym_AMP_GT_GT;
	v->a[87277] = anon_sym_LT_AMP;
	v->a[87278] = anon_sym_GT_AMP;
	v->a[87279] = anon_sym_GT_PIPE;
	small_parse_table_4364(v);
}

void	small_parse_table_4364(t_small_parse_table_array *v)
{
	v->a[87280] = anon_sym_LT_AMP_DASH;
	v->a[87281] = anon_sym_GT_AMP_DASH;
	v->a[87282] = anon_sym_LT_LT_DASH;
	v->a[87283] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87284] = anon_sym_DOLLAR_LBRACK;
	v->a[87285] = anon_sym_DOLLAR;
	v->a[87286] = anon_sym_DQUOTE;
	v->a[87287] = sym_raw_string;
	v->a[87288] = sym_ansi_c_string;
	v->a[87289] = aux_sym_number_token1;
	v->a[87290] = aux_sym_number_token2;
	v->a[87291] = anon_sym_DOLLAR_LBRACE;
	v->a[87292] = anon_sym_DOLLAR_LPAREN;
	v->a[87293] = anon_sym_BQUOTE;
	v->a[87294] = anon_sym_DOLLAR_BQUOTE;
	v->a[87295] = anon_sym_LT_LPAREN;
	v->a[87296] = anon_sym_GT_LPAREN;
	v->a[87297] = aux_sym__simple_variable_name_token1;
	v->a[87298] = sym_word;
	v->a[87299] = 3;
	small_parse_table_4365(v);
}

/* EOF small_parse_table_872.c */
