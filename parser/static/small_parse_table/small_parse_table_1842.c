/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1842.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9210(t_small_parse_table_array *v)
{
	v->a[184200] = actions(3);
	v->a[184201] = 1;
	v->a[184202] = sym_comment;
	v->a[184203] = actions(1253);
	v->a[184204] = 5;
	v->a[184205] = sym_file_descriptor;
	v->a[184206] = sym__concat;
	v->a[184207] = sym_test_operator;
	v->a[184208] = sym__brace_start;
	v->a[184209] = aux_sym_heredoc_redirect_token1;
	v->a[184210] = actions(1251);
	v->a[184211] = 31;
	v->a[184212] = anon_sym_LPAREN_LPAREN;
	v->a[184213] = anon_sym_PIPE_PIPE;
	v->a[184214] = anon_sym_AMP_AMP;
	v->a[184215] = anon_sym_LT;
	v->a[184216] = anon_sym_GT;
	v->a[184217] = anon_sym_GT_GT;
	v->a[184218] = anon_sym_AMP_GT;
	v->a[184219] = anon_sym_AMP_GT_GT;
	small_parse_table_9211(v);
}

void	small_parse_table_9211(t_small_parse_table_array *v)
{
	v->a[184220] = anon_sym_LT_AMP;
	v->a[184221] = anon_sym_GT_AMP;
	v->a[184222] = anon_sym_GT_PIPE;
	v->a[184223] = anon_sym_LT_AMP_DASH;
	v->a[184224] = anon_sym_GT_AMP_DASH;
	v->a[184225] = anon_sym_LT_LT_LT;
	v->a[184226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[184227] = anon_sym_DOLLAR_LBRACK;
	v->a[184228] = aux_sym_concatenation_token1;
	v->a[184229] = anon_sym_DOLLAR;
	v->a[184230] = sym__special_character;
	v->a[184231] = anon_sym_DQUOTE;
	v->a[184232] = sym_raw_string;
	v->a[184233] = sym_ansi_c_string;
	v->a[184234] = aux_sym_number_token1;
	v->a[184235] = aux_sym_number_token2;
	v->a[184236] = anon_sym_DOLLAR_LBRACE;
	v->a[184237] = anon_sym_DOLLAR_LPAREN;
	v->a[184238] = anon_sym_BQUOTE;
	v->a[184239] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9212(v);
}

void	small_parse_table_9212(t_small_parse_table_array *v)
{
	v->a[184240] = anon_sym_LT_LPAREN;
	v->a[184241] = anon_sym_GT_LPAREN;
	v->a[184242] = sym_word;
	v->a[184243] = 24;
	v->a[184244] = actions(71);
	v->a[184245] = 1;
	v->a[184246] = sym_comment;
	v->a[184247] = actions(6474);
	v->a[184248] = 1;
	v->a[184249] = sym_word;
	v->a[184250] = actions(6480);
	v->a[184251] = 1;
	v->a[184252] = anon_sym_LPAREN;
	v->a[184253] = actions(6488);
	v->a[184254] = 1;
	v->a[184255] = anon_sym_DOLLAR;
	v->a[184256] = actions(6494);
	v->a[184257] = 1;
	v->a[184258] = aux_sym_number_token1;
	v->a[184259] = actions(6496);
	small_parse_table_9213(v);
}

void	small_parse_table_9213(t_small_parse_table_array *v)
{
	v->a[184260] = 1;
	v->a[184261] = aux_sym_number_token2;
	v->a[184262] = actions(6500);
	v->a[184263] = 1;
	v->a[184264] = anon_sym_DOLLAR_LPAREN;
	v->a[184265] = actions(6508);
	v->a[184266] = 1;
	v->a[184267] = sym_test_operator;
	v->a[184268] = actions(6510);
	v->a[184269] = 1;
	v->a[184270] = sym_extglob_pattern;
	v->a[184271] = actions(6512);
	v->a[184272] = 1;
	v->a[184273] = sym__brace_start;
	v->a[184274] = actions(7226);
	v->a[184275] = 1;
	v->a[184276] = anon_sym_DOLLAR_LBRACK;
	v->a[184277] = actions(7228);
	v->a[184278] = 1;
	v->a[184279] = sym__special_character;
	small_parse_table_9214(v);
}

void	small_parse_table_9214(t_small_parse_table_array *v)
{
	v->a[184280] = actions(7230);
	v->a[184281] = 1;
	v->a[184282] = anon_sym_DQUOTE;
	v->a[184283] = actions(7234);
	v->a[184284] = 1;
	v->a[184285] = anon_sym_DOLLAR_LBRACE;
	v->a[184286] = actions(7236);
	v->a[184287] = 1;
	v->a[184288] = anon_sym_BQUOTE;
	v->a[184289] = actions(7238);
	v->a[184290] = 1;
	v->a[184291] = anon_sym_DOLLAR_BQUOTE;
	v->a[184292] = state(6426);
	v->a[184293] = 1;
	v->a[184294] = aux_sym__literal_repeat1;
	v->a[184295] = state(7451);
	v->a[184296] = 1;
	v->a[184297] = sym_last_case_item;
	v->a[184298] = actions(7224);
	v->a[184299] = 2;
	small_parse_table_9215(v);
}

/* EOF small_parse_table_1842.c */
