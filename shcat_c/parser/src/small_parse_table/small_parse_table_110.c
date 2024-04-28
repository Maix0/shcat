/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_110.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_550(t_small_parse_table_array *v)
{
	v->a[11000] = anon_sym_GT_LPAREN;
	v->a[11001] = sym_word;
	v->a[11002] = 8;
	v->a[11003] = actions(3);
	v->a[11004] = 1;
	v->a[11005] = sym_comment;
	v->a[11006] = actions(1765);
	v->a[11007] = 1;
	v->a[11008] = anon_sym_DQUOTE;
	v->a[11009] = actions(2959);
	v->a[11010] = 1;
	v->a[11011] = sym_variable_name;
	v->a[11012] = state(1213);
	v->a[11013] = 1;
	v->a[11014] = sym_string;
	v->a[11015] = actions(2957);
	v->a[11016] = 2;
	v->a[11017] = aux_sym__simple_variable_name_token1;
	v->a[11018] = aux_sym__multiline_variable_name_token1;
	v->a[11019] = actions(1235);
	small_parse_table_551(v);
}

void	small_parse_table_551(t_small_parse_table_array *v)
{
	v->a[11020] = 3;
	v->a[11021] = sym_file_descriptor;
	v->a[11022] = sym_test_operator;
	v->a[11023] = sym__brace_start;
	v->a[11024] = actions(2955);
	v->a[11025] = 9;
	v->a[11026] = anon_sym_DASH;
	v->a[11027] = anon_sym_STAR;
	v->a[11028] = anon_sym_BANG;
	v->a[11029] = anon_sym_QMARK;
	v->a[11030] = anon_sym_DOLLAR;
	v->a[11031] = anon_sym_POUND;
	v->a[11032] = anon_sym_AT2;
	v->a[11033] = anon_sym_0;
	v->a[11034] = anon_sym__;
	v->a[11035] = actions(1227);
	v->a[11036] = 38;
	v->a[11037] = anon_sym_LPAREN_LPAREN;
	v->a[11038] = anon_sym_SEMI;
	v->a[11039] = anon_sym_PIPE_PIPE;
	small_parse_table_552(v);
}

void	small_parse_table_552(t_small_parse_table_array *v)
{
	v->a[11040] = anon_sym_AMP_AMP;
	v->a[11041] = anon_sym_PIPE;
	v->a[11042] = anon_sym_AMP;
	v->a[11043] = anon_sym_LT;
	v->a[11044] = anon_sym_GT;
	v->a[11045] = anon_sym_LT_LT;
	v->a[11046] = anon_sym_GT_GT;
	v->a[11047] = anon_sym_esac;
	v->a[11048] = anon_sym_SEMI_SEMI;
	v->a[11049] = anon_sym_SEMI_AMP;
	v->a[11050] = anon_sym_SEMI_SEMI_AMP;
	v->a[11051] = anon_sym_PIPE_AMP;
	v->a[11052] = anon_sym_AMP_GT;
	v->a[11053] = anon_sym_AMP_GT_GT;
	v->a[11054] = anon_sym_LT_AMP;
	v->a[11055] = anon_sym_GT_AMP;
	v->a[11056] = anon_sym_GT_PIPE;
	v->a[11057] = anon_sym_LT_AMP_DASH;
	v->a[11058] = anon_sym_GT_AMP_DASH;
	v->a[11059] = anon_sym_LT_LT_DASH;
	small_parse_table_553(v);
}

void	small_parse_table_553(t_small_parse_table_array *v)
{
	v->a[11060] = aux_sym_heredoc_redirect_token1;
	v->a[11061] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11062] = anon_sym_DOLLAR_LBRACK;
	v->a[11063] = sym__special_character;
	v->a[11064] = sym_raw_string;
	v->a[11065] = sym_ansi_c_string;
	v->a[11066] = aux_sym_number_token1;
	v->a[11067] = aux_sym_number_token2;
	v->a[11068] = anon_sym_DOLLAR_LBRACE;
	v->a[11069] = anon_sym_DOLLAR_LPAREN;
	v->a[11070] = anon_sym_BQUOTE;
	v->a[11071] = anon_sym_DOLLAR_BQUOTE;
	v->a[11072] = anon_sym_LT_LPAREN;
	v->a[11073] = anon_sym_GT_LPAREN;
	v->a[11074] = sym_word;
	v->a[11075] = 6;
	v->a[11076] = actions(3);
	v->a[11077] = 1;
	v->a[11078] = sym_comment;
	v->a[11079] = state(1801);
	small_parse_table_554(v);
}

void	small_parse_table_554(t_small_parse_table_array *v)
{
	v->a[11080] = 1;
	v->a[11081] = aux_sym__literal_repeat1;
	v->a[11082] = state(651);
	v->a[11083] = 2;
	v->a[11084] = sym_concatenation;
	v->a[11085] = aux_sym_for_statement_repeat1;
	v->a[11086] = actions(2096);
	v->a[11087] = 6;
	v->a[11088] = sym_file_descriptor;
	v->a[11089] = sym_variable_name;
	v->a[11090] = sym_test_operator;
	v->a[11091] = sym__brace_start;
	v->a[11092] = ts_builtin_sym_end;
	v->a[11093] = aux_sym_heredoc_redirect_token1;
	v->a[11094] = state(1399);
	v->a[11095] = 9;
	v->a[11096] = sym_arithmetic_expansion;
	v->a[11097] = sym_brace_expression;
	v->a[11098] = sym_string;
	v->a[11099] = sym_translated_string;
	small_parse_table_555(v);
}

/* EOF small_parse_table_110.c */
