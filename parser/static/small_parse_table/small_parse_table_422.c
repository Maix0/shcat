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
	v->a[42200] = 34;
	v->a[42201] = anon_sym_LPAREN;
	v->a[42202] = anon_sym_PIPE;
	v->a[42203] = anon_sym_RPAREN;
	v->a[42204] = anon_sym_SEMI_SEMI;
	v->a[42205] = anon_sym_PIPE_AMP;
	v->a[42206] = anon_sym_AMP_AMP;
	v->a[42207] = anon_sym_PIPE_PIPE;
	v->a[42208] = anon_sym_LT;
	v->a[42209] = anon_sym_GT;
	v->a[42210] = anon_sym_GT_GT;
	v->a[42211] = anon_sym_AMP_GT;
	v->a[42212] = anon_sym_AMP_GT_GT;
	v->a[42213] = anon_sym_LT_AMP;
	v->a[42214] = anon_sym_GT_AMP;
	v->a[42215] = anon_sym_GT_PIPE;
	v->a[42216] = anon_sym_LT_AMP_DASH;
	v->a[42217] = anon_sym_GT_AMP_DASH;
	v->a[42218] = anon_sym_LT_LT;
	v->a[42219] = anon_sym_LT_LT_DASH;
	small_parse_table_2111(v);
}

void	small_parse_table_2111(t_small_parse_table_array *v)
{
	v->a[42220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42221] = anon_sym_AMP;
	v->a[42222] = aux_sym_concatenation_token1;
	v->a[42223] = anon_sym_DOLLAR;
	v->a[42224] = sym__special_character;
	v->a[42225] = anon_sym_DQUOTE;
	v->a[42226] = sym_raw_string;
	v->a[42227] = aux_sym_number_token1;
	v->a[42228] = aux_sym_number_token2;
	v->a[42229] = anon_sym_DOLLAR_LBRACE;
	v->a[42230] = anon_sym_DOLLAR_LPAREN;
	v->a[42231] = anon_sym_BQUOTE;
	v->a[42232] = anon_sym_DOLLAR_BQUOTE;
	v->a[42233] = sym_word;
	v->a[42234] = anon_sym_SEMI;
	v->a[42235] = 6;
	v->a[42236] = actions(3);
	v->a[42237] = 1;
	v->a[42238] = sym_comment;
	v->a[42239] = actions(3434);
	small_parse_table_2112(v);
}

void	small_parse_table_2112(t_small_parse_table_array *v)
{
	v->a[42240] = 1;
	v->a[42241] = aux_sym_concatenation_token1;
	v->a[42242] = actions(3436);
	v->a[42243] = 1;
	v->a[42244] = sym__concat;
	v->a[42245] = state(926);
	v->a[42246] = 1;
	v->a[42247] = aux_sym_concatenation_repeat1;
	v->a[42248] = actions(2664);
	v->a[42249] = 5;
	v->a[42250] = sym_file_descriptor;
	v->a[42251] = sym_test_operator;
	v->a[42252] = sym__brace_start;
	v->a[42253] = ts_builtin_sym_end;
	v->a[42254] = aux_sym_heredoc_redirect_token1;
	v->a[42255] = actions(2662);
	v->a[42256] = 32;
	v->a[42257] = anon_sym_PIPE;
	v->a[42258] = anon_sym_SEMI_SEMI;
	v->a[42259] = anon_sym_PIPE_AMP;
	small_parse_table_2113(v);
}

void	small_parse_table_2113(t_small_parse_table_array *v)
{
	v->a[42260] = anon_sym_AMP_AMP;
	v->a[42261] = anon_sym_PIPE_PIPE;
	v->a[42262] = anon_sym_LT;
	v->a[42263] = anon_sym_GT;
	v->a[42264] = anon_sym_GT_GT;
	v->a[42265] = anon_sym_AMP_GT;
	v->a[42266] = anon_sym_AMP_GT_GT;
	v->a[42267] = anon_sym_LT_AMP;
	v->a[42268] = anon_sym_GT_AMP;
	v->a[42269] = anon_sym_GT_PIPE;
	v->a[42270] = anon_sym_LT_AMP_DASH;
	v->a[42271] = anon_sym_GT_AMP_DASH;
	v->a[42272] = anon_sym_LT_LT;
	v->a[42273] = anon_sym_LT_LT_DASH;
	v->a[42274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42275] = anon_sym_AMP;
	v->a[42276] = anon_sym_DOLLAR;
	v->a[42277] = sym__special_character;
	v->a[42278] = anon_sym_DQUOTE;
	v->a[42279] = sym_raw_string;
	small_parse_table_2114(v);
}

void	small_parse_table_2114(t_small_parse_table_array *v)
{
	v->a[42280] = aux_sym_number_token1;
	v->a[42281] = aux_sym_number_token2;
	v->a[42282] = anon_sym_DOLLAR_LBRACE;
	v->a[42283] = anon_sym_DOLLAR_LPAREN;
	v->a[42284] = anon_sym_BQUOTE;
	v->a[42285] = anon_sym_DOLLAR_BQUOTE;
	v->a[42286] = aux_sym__simple_variable_name_token1;
	v->a[42287] = sym_word;
	v->a[42288] = anon_sym_SEMI;
	v->a[42289] = 6;
	v->a[42290] = actions(3);
	v->a[42291] = 1;
	v->a[42292] = sym_comment;
	v->a[42293] = actions(3358);
	v->a[42294] = 1;
	v->a[42295] = aux_sym_concatenation_token1;
	v->a[42296] = actions(3360);
	v->a[42297] = 1;
	v->a[42298] = sym__concat;
	v->a[42299] = state(878);
	small_parse_table_2115(v);
}

/* EOF small_parse_table_422.c */
