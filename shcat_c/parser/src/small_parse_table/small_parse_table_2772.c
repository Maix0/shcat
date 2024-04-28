/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2772.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13860(t_small_parse_table_array *v)
{
	v->a[277200] = 3;
	v->a[277201] = sym_file_redirect;
	v->a[277202] = sym_herestring_redirect;
	v->a[277203] = aux_sym_redirected_statement_repeat2;
	v->a[277204] = actions(11307);
	v->a[277205] = 6;
	v->a[277206] = anon_sym_PIPE_PIPE;
	v->a[277207] = anon_sym_AMP_AMP;
	v->a[277208] = anon_sym_PIPE;
	v->a[277209] = anon_sym_LT_LT;
	v->a[277210] = anon_sym_PIPE_AMP;
	v->a[277211] = anon_sym_LT_LT_DASH;
	v->a[277212] = actions(12455);
	v->a[277213] = 8;
	v->a[277214] = anon_sym_LT;
	v->a[277215] = anon_sym_GT;
	v->a[277216] = anon_sym_GT_GT;
	v->a[277217] = anon_sym_AMP_GT;
	v->a[277218] = anon_sym_AMP_GT_GT;
	v->a[277219] = anon_sym_LT_AMP;
	small_parse_table_13861(v);
}

void	small_parse_table_13861(t_small_parse_table_array *v)
{
	v->a[277220] = anon_sym_GT_AMP;
	v->a[277221] = anon_sym_GT_PIPE;
	v->a[277222] = 5;
	v->a[277223] = actions(71);
	v->a[277224] = 1;
	v->a[277225] = sym_comment;
	v->a[277226] = state(5180);
	v->a[277227] = 1;
	v->a[277228] = aux_sym_concatenation_repeat1;
	v->a[277229] = actions(12327);
	v->a[277230] = 2;
	v->a[277231] = sym__concat;
	v->a[277232] = aux_sym_concatenation_token1;
	v->a[277233] = actions(2094);
	v->a[277234] = 7;
	v->a[277235] = anon_sym_PIPE;
	v->a[277236] = anon_sym_LT;
	v->a[277237] = anon_sym_GT;
	v->a[277238] = anon_sym_LT_LT;
	v->a[277239] = anon_sym_AMP_GT;
	small_parse_table_13862(v);
}

void	small_parse_table_13862(t_small_parse_table_array *v)
{
	v->a[277240] = anon_sym_LT_AMP;
	v->a[277241] = anon_sym_GT_AMP;
	v->a[277242] = actions(2096);
	v->a[277243] = 12;
	v->a[277244] = sym_file_descriptor;
	v->a[277245] = anon_sym_PIPE_PIPE;
	v->a[277246] = anon_sym_AMP_AMP;
	v->a[277247] = anon_sym_GT_GT;
	v->a[277248] = anon_sym_PIPE_AMP;
	v->a[277249] = anon_sym_RBRACK;
	v->a[277250] = anon_sym_AMP_GT_GT;
	v->a[277251] = anon_sym_GT_PIPE;
	v->a[277252] = anon_sym_LT_AMP_DASH;
	v->a[277253] = anon_sym_GT_AMP_DASH;
	v->a[277254] = anon_sym_LT_LT_DASH;
	v->a[277255] = anon_sym_LT_LT_LT;
	v->a[277256] = 4;
	v->a[277257] = actions(71);
	v->a[277258] = 1;
	v->a[277259] = sym_comment;
	small_parse_table_13863(v);
}

void	small_parse_table_13863(t_small_parse_table_array *v)
{
	v->a[277260] = actions(12471);
	v->a[277261] = 1;
	v->a[277262] = anon_sym_esac;
	v->a[277263] = actions(12467);
	v->a[277264] = 6;
	v->a[277265] = anon_sym_LPAREN;
	v->a[277266] = anon_sym_DOLLAR;
	v->a[277267] = aux_sym_number_token1;
	v->a[277268] = aux_sym_number_token2;
	v->a[277269] = anon_sym_DOLLAR_LPAREN;
	v->a[277270] = sym_word;
	v->a[277271] = actions(12469);
	v->a[277272] = 15;
	v->a[277273] = sym_test_operator;
	v->a[277274] = sym_extglob_pattern;
	v->a[277275] = sym__brace_start;
	v->a[277276] = anon_sym_LPAREN_LPAREN;
	v->a[277277] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[277278] = anon_sym_DOLLAR_LBRACK;
	v->a[277279] = sym__special_character;
	small_parse_table_13864(v);
}

void	small_parse_table_13864(t_small_parse_table_array *v)
{
	v->a[277280] = anon_sym_DQUOTE;
	v->a[277281] = sym_raw_string;
	v->a[277282] = sym_ansi_c_string;
	v->a[277283] = anon_sym_DOLLAR_LBRACE;
	v->a[277284] = anon_sym_BQUOTE;
	v->a[277285] = anon_sym_DOLLAR_BQUOTE;
	v->a[277286] = anon_sym_LT_LPAREN;
	v->a[277287] = anon_sym_GT_LPAREN;
	v->a[277288] = 8;
	v->a[277289] = actions(71);
	v->a[277290] = 1;
	v->a[277291] = sym_comment;
	v->a[277292] = actions(4253);
	v->a[277293] = 1;
	v->a[277294] = anon_sym_PIPE;
	v->a[277295] = actions(4348);
	v->a[277296] = 1;
	v->a[277297] = anon_sym_PIPE_AMP;
	v->a[277298] = actions(12473);
	v->a[277299] = 1;
	small_parse_table_13865(v);
}

/* EOF small_parse_table_2772.c */
