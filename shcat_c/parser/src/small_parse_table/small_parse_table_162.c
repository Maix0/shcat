/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_162.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_810(t_small_parse_table_array *v)
{
	v->a[16200] = sym__bare_dollar;
	v->a[16201] = sym__brace_start;
	v->a[16202] = actions(1809);
	v->a[16203] = 9;
	v->a[16204] = anon_sym_DASH;
	v->a[16205] = anon_sym_STAR;
	v->a[16206] = anon_sym_BANG;
	v->a[16207] = anon_sym_QMARK;
	v->a[16208] = anon_sym_DOLLAR;
	v->a[16209] = anon_sym_POUND;
	v->a[16210] = anon_sym_AT2;
	v->a[16211] = anon_sym_0;
	v->a[16212] = anon_sym__;
	v->a[16213] = actions(1227);
	v->a[16214] = 36;
	v->a[16215] = anon_sym_LPAREN_LPAREN;
	v->a[16216] = anon_sym_PIPE_PIPE;
	v->a[16217] = anon_sym_AMP_AMP;
	v->a[16218] = anon_sym_PIPE;
	v->a[16219] = anon_sym_EQ_EQ;
	small_parse_table_811(v);
}

void	small_parse_table_811(t_small_parse_table_array *v)
{
	v->a[16220] = anon_sym_LT;
	v->a[16221] = anon_sym_GT;
	v->a[16222] = anon_sym_LT_LT;
	v->a[16223] = anon_sym_GT_GT;
	v->a[16224] = anon_sym_LPAREN;
	v->a[16225] = anon_sym_PIPE_AMP;
	v->a[16226] = anon_sym_EQ_TILDE;
	v->a[16227] = anon_sym_AMP_GT;
	v->a[16228] = anon_sym_AMP_GT_GT;
	v->a[16229] = anon_sym_LT_AMP;
	v->a[16230] = anon_sym_GT_AMP;
	v->a[16231] = anon_sym_GT_PIPE;
	v->a[16232] = anon_sym_LT_AMP_DASH;
	v->a[16233] = anon_sym_GT_AMP_DASH;
	v->a[16234] = anon_sym_LT_LT_DASH;
	v->a[16235] = aux_sym_heredoc_redirect_token1;
	v->a[16236] = anon_sym_LT_LT_LT;
	v->a[16237] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16238] = anon_sym_DOLLAR_LBRACK;
	v->a[16239] = sym__special_character;
	small_parse_table_812(v);
}

void	small_parse_table_812(t_small_parse_table_array *v)
{
	v->a[16240] = sym_raw_string;
	v->a[16241] = sym_ansi_c_string;
	v->a[16242] = aux_sym_number_token1;
	v->a[16243] = aux_sym_number_token2;
	v->a[16244] = anon_sym_DOLLAR_LBRACE;
	v->a[16245] = anon_sym_DOLLAR_LPAREN;
	v->a[16246] = anon_sym_BQUOTE;
	v->a[16247] = anon_sym_DOLLAR_BQUOTE;
	v->a[16248] = anon_sym_LT_LPAREN;
	v->a[16249] = anon_sym_GT_LPAREN;
	v->a[16250] = sym_word;
	v->a[16251] = 8;
	v->a[16252] = actions(3);
	v->a[16253] = 1;
	v->a[16254] = sym_comment;
	v->a[16255] = actions(3423);
	v->a[16256] = 1;
	v->a[16257] = anon_sym_DQUOTE;
	v->a[16258] = actions(3427);
	v->a[16259] = 1;
	small_parse_table_813(v);
}

void	small_parse_table_813(t_small_parse_table_array *v)
{
	v->a[16260] = sym_variable_name;
	v->a[16261] = state(1686);
	v->a[16262] = 1;
	v->a[16263] = sym_string;
	v->a[16264] = actions(3425);
	v->a[16265] = 2;
	v->a[16266] = aux_sym__simple_variable_name_token1;
	v->a[16267] = aux_sym__multiline_variable_name_token1;
	v->a[16268] = actions(1241);
	v->a[16269] = 4;
	v->a[16270] = sym_file_descriptor;
	v->a[16271] = sym_test_operator;
	v->a[16272] = sym__brace_start;
	v->a[16273] = ts_builtin_sym_end;
	v->a[16274] = actions(3421);
	v->a[16275] = 9;
	v->a[16276] = anon_sym_DASH;
	v->a[16277] = anon_sym_STAR;
	v->a[16278] = anon_sym_BANG;
	v->a[16279] = anon_sym_QMARK;
	small_parse_table_814(v);
}

void	small_parse_table_814(t_small_parse_table_array *v)
{
	v->a[16280] = anon_sym_DOLLAR;
	v->a[16281] = anon_sym_POUND;
	v->a[16282] = anon_sym_AT2;
	v->a[16283] = anon_sym_0;
	v->a[16284] = anon_sym__;
	v->a[16285] = actions(1239);
	v->a[16286] = 36;
	v->a[16287] = anon_sym_LPAREN_LPAREN;
	v->a[16288] = anon_sym_SEMI;
	v->a[16289] = anon_sym_PIPE_PIPE;
	v->a[16290] = anon_sym_AMP_AMP;
	v->a[16291] = anon_sym_PIPE;
	v->a[16292] = anon_sym_AMP;
	v->a[16293] = anon_sym_LT;
	v->a[16294] = anon_sym_GT;
	v->a[16295] = anon_sym_LT_LT;
	v->a[16296] = anon_sym_GT_GT;
	v->a[16297] = anon_sym_SEMI_SEMI;
	v->a[16298] = anon_sym_PIPE_AMP;
	v->a[16299] = anon_sym_AMP_GT;
	small_parse_table_815(v);
}

/* EOF small_parse_table_162.c */
