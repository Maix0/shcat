/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2842.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14210(t_small_parse_table_array *v)
{
	v->a[284200] = sym_word;
	v->a[284201] = actions(5395);
	v->a[284202] = 14;
	v->a[284203] = sym_test_operator;
	v->a[284204] = sym__brace_start;
	v->a[284205] = anon_sym_LPAREN_LPAREN;
	v->a[284206] = anon_sym_RPAREN;
	v->a[284207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[284208] = anon_sym_DOLLAR_LBRACK;
	v->a[284209] = anon_sym_DQUOTE;
	v->a[284210] = sym_raw_string;
	v->a[284211] = sym_ansi_c_string;
	v->a[284212] = anon_sym_DOLLAR_LBRACE;
	v->a[284213] = anon_sym_BQUOTE;
	v->a[284214] = anon_sym_DOLLAR_BQUOTE;
	v->a[284215] = anon_sym_LT_LPAREN;
	v->a[284216] = anon_sym_GT_LPAREN;
	v->a[284217] = 8;
	v->a[284218] = actions(3);
	v->a[284219] = 1;
	small_parse_table_14211(v);
}

void	small_parse_table_14211(t_small_parse_table_array *v)
{
	v->a[284220] = sym_comment;
	v->a[284221] = actions(11455);
	v->a[284222] = 1;
	v->a[284223] = aux_sym_heredoc_redirect_token1;
	v->a[284224] = actions(12778);
	v->a[284225] = 1;
	v->a[284226] = sym_file_descriptor;
	v->a[284227] = actions(4692);
	v->a[284228] = 2;
	v->a[284229] = anon_sym_LT_LT;
	v->a[284230] = anon_sym_LT_LT_DASH;
	v->a[284231] = actions(12346);
	v->a[284232] = 2;
	v->a[284233] = anon_sym_LT_AMP_DASH;
	v->a[284234] = anon_sym_GT_AMP_DASH;
	v->a[284235] = state(5370);
	v->a[284236] = 3;
	v->a[284237] = sym_file_redirect;
	v->a[284238] = sym_heredoc_redirect;
	v->a[284239] = aux_sym_redirected_statement_repeat1;
	small_parse_table_14212(v);
}

void	small_parse_table_14212(t_small_parse_table_array *v)
{
	v->a[284240] = actions(11453);
	v->a[284241] = 4;
	v->a[284242] = anon_sym_PIPE_PIPE;
	v->a[284243] = anon_sym_AMP_AMP;
	v->a[284244] = anon_sym_PIPE;
	v->a[284245] = anon_sym_PIPE_AMP;
	v->a[284246] = actions(12344);
	v->a[284247] = 8;
	v->a[284248] = anon_sym_LT;
	v->a[284249] = anon_sym_GT;
	v->a[284250] = anon_sym_GT_GT;
	v->a[284251] = anon_sym_AMP_GT;
	v->a[284252] = anon_sym_AMP_GT_GT;
	v->a[284253] = anon_sym_LT_AMP;
	v->a[284254] = anon_sym_GT_AMP;
	v->a[284255] = anon_sym_GT_PIPE;
	v->a[284256] = 8;
	v->a[284257] = actions(3);
	v->a[284258] = 1;
	v->a[284259] = sym_comment;
	small_parse_table_14213(v);
}

void	small_parse_table_14213(t_small_parse_table_array *v)
{
	v->a[284260] = actions(11535);
	v->a[284261] = 1;
	v->a[284262] = aux_sym_heredoc_redirect_token1;
	v->a[284263] = actions(12317);
	v->a[284264] = 1;
	v->a[284265] = anon_sym_LT_LT_LT;
	v->a[284266] = actions(12780);
	v->a[284267] = 1;
	v->a[284268] = sym_file_descriptor;
	v->a[284269] = actions(12346);
	v->a[284270] = 2;
	v->a[284271] = anon_sym_LT_AMP_DASH;
	v->a[284272] = anon_sym_GT_AMP_DASH;
	v->a[284273] = state(4877);
	v->a[284274] = 2;
	v->a[284275] = sym_file_redirect;
	v->a[284276] = sym_herestring_redirect;
	v->a[284277] = actions(11533);
	v->a[284278] = 6;
	v->a[284279] = anon_sym_PIPE_PIPE;
	small_parse_table_14214(v);
}

void	small_parse_table_14214(t_small_parse_table_array *v)
{
	v->a[284280] = anon_sym_AMP_AMP;
	v->a[284281] = anon_sym_PIPE;
	v->a[284282] = anon_sym_LT_LT;
	v->a[284283] = anon_sym_PIPE_AMP;
	v->a[284284] = anon_sym_LT_LT_DASH;
	v->a[284285] = actions(12344);
	v->a[284286] = 8;
	v->a[284287] = anon_sym_LT;
	v->a[284288] = anon_sym_GT;
	v->a[284289] = anon_sym_GT_GT;
	v->a[284290] = anon_sym_AMP_GT;
	v->a[284291] = anon_sym_AMP_GT_GT;
	v->a[284292] = anon_sym_LT_AMP;
	v->a[284293] = anon_sym_GT_AMP;
	v->a[284294] = anon_sym_GT_PIPE;
	v->a[284295] = 5;
	v->a[284296] = actions(3);
	v->a[284297] = 1;
	v->a[284298] = sym_comment;
	v->a[284299] = actions(4253);
	small_parse_table_14215(v);
}

/* EOF small_parse_table_2842.c */
