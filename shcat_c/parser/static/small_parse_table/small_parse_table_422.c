/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_422.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2110(t_small_parse_table_array *v)
{
	v->a[42200] = sym_raw_string;
	v->a[42201] = sym_ansi_c_string;
	v->a[42202] = aux_sym_number_token1;
	v->a[42203] = aux_sym_number_token2;
	v->a[42204] = anon_sym_DOLLAR_LBRACE;
	v->a[42205] = anon_sym_DOLLAR_LPAREN;
	v->a[42206] = anon_sym_BQUOTE;
	v->a[42207] = anon_sym_DOLLAR_BQUOTE;
	v->a[42208] = anon_sym_LT_LPAREN;
	v->a[42209] = anon_sym_GT_LPAREN;
	v->a[42210] = sym_word;
	v->a[42211] = 8;
	v->a[42212] = actions(3);
	v->a[42213] = 1;
	v->a[42214] = sym_comment;
	v->a[42215] = actions(5061);
	v->a[42216] = 1;
	v->a[42217] = anon_sym_DQUOTE;
	v->a[42218] = actions(5065);
	v->a[42219] = 1;
	small_parse_table_2111(v);
}

void	small_parse_table_2111(t_small_parse_table_array *v)
{
	v->a[42220] = sym_variable_name;
	v->a[42221] = state(2712);
	v->a[42222] = 1;
	v->a[42223] = sym_string;
	v->a[42224] = actions(5063);
	v->a[42225] = 2;
	v->a[42226] = aux_sym__simple_variable_name_token1;
	v->a[42227] = aux_sym__multiline_variable_name_token1;
	v->a[42228] = actions(1235);
	v->a[42229] = 3;
	v->a[42230] = sym_file_descriptor;
	v->a[42231] = sym_test_operator;
	v->a[42232] = sym__brace_start;
	v->a[42233] = actions(5059);
	v->a[42234] = 9;
	v->a[42235] = anon_sym_DASH;
	v->a[42236] = anon_sym_STAR;
	v->a[42237] = anon_sym_BANG;
	v->a[42238] = anon_sym_QMARK;
	v->a[42239] = anon_sym_DOLLAR;
	small_parse_table_2112(v);
}

void	small_parse_table_2112(t_small_parse_table_array *v)
{
	v->a[42240] = anon_sym_POUND;
	v->a[42241] = anon_sym_AT2;
	v->a[42242] = anon_sym_0;
	v->a[42243] = anon_sym__;
	v->a[42244] = actions(1227);
	v->a[42245] = 31;
	v->a[42246] = anon_sym_LPAREN_LPAREN;
	v->a[42247] = anon_sym_PIPE_PIPE;
	v->a[42248] = anon_sym_AMP_AMP;
	v->a[42249] = anon_sym_PIPE;
	v->a[42250] = anon_sym_LT;
	v->a[42251] = anon_sym_GT;
	v->a[42252] = anon_sym_LT_LT;
	v->a[42253] = anon_sym_GT_GT;
	v->a[42254] = anon_sym_PIPE_AMP;
	v->a[42255] = anon_sym_AMP_GT;
	v->a[42256] = anon_sym_AMP_GT_GT;
	v->a[42257] = anon_sym_LT_AMP;
	v->a[42258] = anon_sym_GT_AMP;
	v->a[42259] = anon_sym_GT_PIPE;
	small_parse_table_2113(v);
}

void	small_parse_table_2113(t_small_parse_table_array *v)
{
	v->a[42260] = anon_sym_LT_AMP_DASH;
	v->a[42261] = anon_sym_GT_AMP_DASH;
	v->a[42262] = anon_sym_LT_LT_DASH;
	v->a[42263] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42264] = anon_sym_DOLLAR_LBRACK;
	v->a[42265] = sym__special_character;
	v->a[42266] = sym_raw_string;
	v->a[42267] = sym_ansi_c_string;
	v->a[42268] = aux_sym_number_token1;
	v->a[42269] = aux_sym_number_token2;
	v->a[42270] = anon_sym_DOLLAR_LBRACE;
	v->a[42271] = anon_sym_DOLLAR_LPAREN;
	v->a[42272] = anon_sym_BQUOTE;
	v->a[42273] = anon_sym_DOLLAR_BQUOTE;
	v->a[42274] = anon_sym_LT_LPAREN;
	v->a[42275] = anon_sym_GT_LPAREN;
	v->a[42276] = sym_word;
	v->a[42277] = 6;
	v->a[42278] = actions(3);
	v->a[42279] = 1;
	small_parse_table_2114(v);
}

void	small_parse_table_2114(t_small_parse_table_array *v)
{
	v->a[42280] = sym_comment;
	v->a[42281] = actions(5144);
	v->a[42282] = 1;
	v->a[42283] = aux_sym_concatenation_token1;
	v->a[42284] = actions(5146);
	v->a[42285] = 1;
	v->a[42286] = sym__concat;
	v->a[42287] = state(1123);
	v->a[42288] = 1;
	v->a[42289] = aux_sym_concatenation_repeat1;
	v->a[42290] = actions(4482);
	v->a[42291] = 6;
	v->a[42292] = sym_file_descriptor;
	v->a[42293] = sym_test_operator;
	v->a[42294] = sym__bare_dollar;
	v->a[42295] = sym__brace_start;
	v->a[42296] = ts_builtin_sym_end;
	v->a[42297] = aux_sym_heredoc_redirect_token1;
	v->a[42298] = actions(4480);
	v->a[42299] = 39;
	small_parse_table_2115(v);
}

/* EOF small_parse_table_422.c */
