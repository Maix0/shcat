/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_632.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3160(t_small_parse_table_array *v)
{
	v->a[63200] = actions(5648);
	v->a[63201] = 1;
	v->a[63202] = aux_sym_concatenation_token1;
	v->a[63203] = actions(5654);
	v->a[63204] = 1;
	v->a[63205] = sym__concat;
	v->a[63206] = state(1357);
	v->a[63207] = 1;
	v->a[63208] = aux_sym_concatenation_repeat1;
	v->a[63209] = actions(5069);
	v->a[63210] = 6;
	v->a[63211] = sym_file_descriptor;
	v->a[63212] = sym_variable_name;
	v->a[63213] = sym_test_operator;
	v->a[63214] = sym__brace_start;
	v->a[63215] = ts_builtin_sym_end;
	v->a[63216] = aux_sym_heredoc_redirect_token1;
	v->a[63217] = actions(5067);
	v->a[63218] = 37;
	v->a[63219] = anon_sym_LPAREN_LPAREN;
	small_parse_table_3161(v);
}

void	small_parse_table_3161(t_small_parse_table_array *v)
{
	v->a[63220] = anon_sym_SEMI;
	v->a[63221] = anon_sym_PIPE_PIPE;
	v->a[63222] = anon_sym_AMP_AMP;
	v->a[63223] = anon_sym_PIPE;
	v->a[63224] = anon_sym_AMP;
	v->a[63225] = anon_sym_LT;
	v->a[63226] = anon_sym_GT;
	v->a[63227] = anon_sym_LT_LT;
	v->a[63228] = anon_sym_GT_GT;
	v->a[63229] = anon_sym_SEMI_SEMI;
	v->a[63230] = anon_sym_PIPE_AMP;
	v->a[63231] = anon_sym_AMP_GT;
	v->a[63232] = anon_sym_AMP_GT_GT;
	v->a[63233] = anon_sym_LT_AMP;
	v->a[63234] = anon_sym_GT_AMP;
	v->a[63235] = anon_sym_GT_PIPE;
	v->a[63236] = anon_sym_LT_AMP_DASH;
	v->a[63237] = anon_sym_GT_AMP_DASH;
	v->a[63238] = anon_sym_LT_LT_DASH;
	v->a[63239] = anon_sym_LT_LT_LT;
	small_parse_table_3162(v);
}

void	small_parse_table_3162(t_small_parse_table_array *v)
{
	v->a[63240] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63241] = anon_sym_DOLLAR_LBRACK;
	v->a[63242] = anon_sym_DOLLAR;
	v->a[63243] = sym__special_character;
	v->a[63244] = anon_sym_DQUOTE;
	v->a[63245] = sym_raw_string;
	v->a[63246] = sym_ansi_c_string;
	v->a[63247] = aux_sym_number_token1;
	v->a[63248] = aux_sym_number_token2;
	v->a[63249] = anon_sym_DOLLAR_LBRACE;
	v->a[63250] = anon_sym_DOLLAR_LPAREN;
	v->a[63251] = anon_sym_BQUOTE;
	v->a[63252] = anon_sym_DOLLAR_BQUOTE;
	v->a[63253] = anon_sym_LT_LPAREN;
	v->a[63254] = anon_sym_GT_LPAREN;
	v->a[63255] = sym_word;
	v->a[63256] = 3;
	v->a[63257] = actions(3);
	v->a[63258] = 1;
	v->a[63259] = sym_comment;
	small_parse_table_3163(v);
}

void	small_parse_table_3163(t_small_parse_table_array *v)
{
	v->a[63260] = actions(1318);
	v->a[63261] = 6;
	v->a[63262] = sym_file_descriptor;
	v->a[63263] = sym__concat;
	v->a[63264] = sym_variable_name;
	v->a[63265] = sym_test_operator;
	v->a[63266] = sym__brace_start;
	v->a[63267] = aux_sym_heredoc_redirect_token1;
	v->a[63268] = actions(1316);
	v->a[63269] = 40;
	v->a[63270] = anon_sym_LPAREN_LPAREN;
	v->a[63271] = anon_sym_SEMI;
	v->a[63272] = anon_sym_PIPE_PIPE;
	v->a[63273] = anon_sym_AMP_AMP;
	v->a[63274] = anon_sym_PIPE;
	v->a[63275] = anon_sym_AMP;
	v->a[63276] = anon_sym_LT;
	v->a[63277] = anon_sym_GT;
	v->a[63278] = anon_sym_LT_LT;
	v->a[63279] = anon_sym_GT_GT;
	small_parse_table_3164(v);
}

void	small_parse_table_3164(t_small_parse_table_array *v)
{
	v->a[63280] = anon_sym_SEMI_SEMI;
	v->a[63281] = anon_sym_SEMI_AMP;
	v->a[63282] = anon_sym_SEMI_SEMI_AMP;
	v->a[63283] = anon_sym_PIPE_AMP;
	v->a[63284] = anon_sym_AMP_GT;
	v->a[63285] = anon_sym_AMP_GT_GT;
	v->a[63286] = anon_sym_LT_AMP;
	v->a[63287] = anon_sym_GT_AMP;
	v->a[63288] = anon_sym_GT_PIPE;
	v->a[63289] = anon_sym_LT_AMP_DASH;
	v->a[63290] = anon_sym_GT_AMP_DASH;
	v->a[63291] = anon_sym_LT_LT_DASH;
	v->a[63292] = anon_sym_LT_LT_LT;
	v->a[63293] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63294] = anon_sym_DOLLAR_LBRACK;
	v->a[63295] = aux_sym_concatenation_token1;
	v->a[63296] = anon_sym_DOLLAR;
	v->a[63297] = sym__special_character;
	v->a[63298] = anon_sym_DQUOTE;
	v->a[63299] = sym_raw_string;
	small_parse_table_3165(v);
}

/* EOF small_parse_table_632.c */