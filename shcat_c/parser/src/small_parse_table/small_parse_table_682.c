/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_682.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3410(t_small_parse_table_array *v)
{
	v->a[68200] = aux_sym_number_token1;
	v->a[68201] = aux_sym_number_token2;
	v->a[68202] = anon_sym_DOLLAR_LBRACE;
	v->a[68203] = anon_sym_DOLLAR_LPAREN;
	v->a[68204] = anon_sym_BQUOTE;
	v->a[68205] = anon_sym_DOLLAR_BQUOTE;
	v->a[68206] = anon_sym_LT_LPAREN;
	v->a[68207] = anon_sym_GT_LPAREN;
	v->a[68208] = aux_sym__simple_variable_name_token1;
	v->a[68209] = sym_word;
	v->a[68210] = 6;
	v->a[68211] = actions(3);
	v->a[68212] = 1;
	v->a[68213] = sym_comment;
	v->a[68214] = actions(5664);
	v->a[68215] = 1;
	v->a[68216] = aux_sym_concatenation_token1;
	v->a[68217] = actions(5666);
	v->a[68218] = 1;
	v->a[68219] = sym__concat;
	small_parse_table_3411(v);
}

void	small_parse_table_3411(t_small_parse_table_array *v)
{
	v->a[68220] = state(1663);
	v->a[68221] = 1;
	v->a[68222] = aux_sym_concatenation_repeat1;
	v->a[68223] = actions(5180);
	v->a[68224] = 5;
	v->a[68225] = sym_file_descriptor;
	v->a[68226] = sym_variable_name;
	v->a[68227] = sym_test_operator;
	v->a[68228] = sym__brace_start;
	v->a[68229] = aux_sym_heredoc_redirect_token1;
	v->a[68230] = actions(5178);
	v->a[68231] = 37;
	v->a[68232] = anon_sym_LPAREN_LPAREN;
	v->a[68233] = anon_sym_SEMI;
	v->a[68234] = anon_sym_PIPE_PIPE;
	v->a[68235] = anon_sym_AMP_AMP;
	v->a[68236] = anon_sym_PIPE;
	v->a[68237] = anon_sym_AMP;
	v->a[68238] = anon_sym_LT;
	v->a[68239] = anon_sym_GT;
	small_parse_table_3412(v);
}

void	small_parse_table_3412(t_small_parse_table_array *v)
{
	v->a[68240] = anon_sym_LT_LT;
	v->a[68241] = anon_sym_GT_GT;
	v->a[68242] = anon_sym_SEMI_SEMI;
	v->a[68243] = anon_sym_PIPE_AMP;
	v->a[68244] = anon_sym_AMP_GT;
	v->a[68245] = anon_sym_AMP_GT_GT;
	v->a[68246] = anon_sym_LT_AMP;
	v->a[68247] = anon_sym_GT_AMP;
	v->a[68248] = anon_sym_GT_PIPE;
	v->a[68249] = anon_sym_LT_AMP_DASH;
	v->a[68250] = anon_sym_GT_AMP_DASH;
	v->a[68251] = anon_sym_LT_LT_DASH;
	v->a[68252] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68253] = anon_sym_DOLLAR_LBRACK;
	v->a[68254] = anon_sym_DOLLAR;
	v->a[68255] = sym__special_character;
	v->a[68256] = anon_sym_DQUOTE;
	v->a[68257] = sym_raw_string;
	v->a[68258] = sym_ansi_c_string;
	v->a[68259] = aux_sym_number_token1;
	small_parse_table_3413(v);
}

void	small_parse_table_3413(t_small_parse_table_array *v)
{
	v->a[68260] = aux_sym_number_token2;
	v->a[68261] = anon_sym_DOLLAR_LBRACE;
	v->a[68262] = anon_sym_DOLLAR_LPAREN;
	v->a[68263] = anon_sym_BQUOTE;
	v->a[68264] = anon_sym_DOLLAR_BQUOTE;
	v->a[68265] = anon_sym_LT_LPAREN;
	v->a[68266] = anon_sym_GT_LPAREN;
	v->a[68267] = aux_sym__simple_variable_name_token1;
	v->a[68268] = sym_word;
	v->a[68269] = 3;
	v->a[68270] = actions(3);
	v->a[68271] = 1;
	v->a[68272] = sym_comment;
	v->a[68273] = actions(1346);
	v->a[68274] = 7;
	v->a[68275] = sym_file_descriptor;
	v->a[68276] = sym__concat;
	v->a[68277] = sym_variable_name;
	v->a[68278] = sym_test_operator;
	v->a[68279] = sym__brace_start;
	small_parse_table_3414(v);
}

void	small_parse_table_3414(t_small_parse_table_array *v)
{
	v->a[68280] = ts_builtin_sym_end;
	v->a[68281] = aux_sym_heredoc_redirect_token1;
	v->a[68282] = actions(1344);
	v->a[68283] = 38;
	v->a[68284] = anon_sym_LPAREN_LPAREN;
	v->a[68285] = anon_sym_SEMI;
	v->a[68286] = anon_sym_PIPE_PIPE;
	v->a[68287] = anon_sym_AMP_AMP;
	v->a[68288] = anon_sym_PIPE;
	v->a[68289] = anon_sym_AMP;
	v->a[68290] = anon_sym_LT;
	v->a[68291] = anon_sym_GT;
	v->a[68292] = anon_sym_LT_LT;
	v->a[68293] = anon_sym_GT_GT;
	v->a[68294] = anon_sym_SEMI_SEMI;
	v->a[68295] = anon_sym_PIPE_AMP;
	v->a[68296] = anon_sym_AMP_GT;
	v->a[68297] = anon_sym_AMP_GT_GT;
	v->a[68298] = anon_sym_LT_AMP;
	v->a[68299] = anon_sym_GT_AMP;
	small_parse_table_3415(v);
}

/* EOF small_parse_table_682.c */
