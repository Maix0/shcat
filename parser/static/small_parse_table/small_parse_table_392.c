/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_392.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1960(t_small_parse_table_array *v)
{
	v->a[39200] = ts_builtin_sym_end;
	v->a[39201] = aux_sym_heredoc_redirect_token1;
	v->a[39202] = actions(2652);
	v->a[39203] = 31;
	v->a[39204] = anon_sym_PIPE;
	v->a[39205] = anon_sym_SEMI_SEMI;
	v->a[39206] = anon_sym_PIPE_AMP;
	v->a[39207] = anon_sym_AMP_AMP;
	v->a[39208] = anon_sym_PIPE_PIPE;
	v->a[39209] = anon_sym_LT;
	v->a[39210] = anon_sym_GT;
	v->a[39211] = anon_sym_GT_GT;
	v->a[39212] = anon_sym_AMP_GT;
	v->a[39213] = anon_sym_AMP_GT_GT;
	v->a[39214] = anon_sym_LT_AMP;
	v->a[39215] = anon_sym_GT_AMP;
	v->a[39216] = anon_sym_GT_PIPE;
	v->a[39217] = anon_sym_LT_AMP_DASH;
	v->a[39218] = anon_sym_GT_AMP_DASH;
	v->a[39219] = anon_sym_LT_LT;
	small_parse_table_1961(v);
}

void	small_parse_table_1961(t_small_parse_table_array *v)
{
	v->a[39220] = anon_sym_LT_LT_DASH;
	v->a[39221] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39222] = anon_sym_AMP;
	v->a[39223] = anon_sym_DOLLAR;
	v->a[39224] = sym__special_character;
	v->a[39225] = anon_sym_DQUOTE;
	v->a[39226] = sym_raw_string;
	v->a[39227] = aux_sym_number_token1;
	v->a[39228] = aux_sym_number_token2;
	v->a[39229] = anon_sym_DOLLAR_LBRACE;
	v->a[39230] = anon_sym_DOLLAR_LPAREN;
	v->a[39231] = anon_sym_BQUOTE;
	v->a[39232] = anon_sym_DOLLAR_BQUOTE;
	v->a[39233] = sym_word;
	v->a[39234] = anon_sym_SEMI;
	v->a[39235] = 5;
	v->a[39236] = actions(3);
	v->a[39237] = 1;
	v->a[39238] = sym_comment;
	v->a[39239] = actions(3521);
	small_parse_table_1962(v);
}

void	small_parse_table_1962(t_small_parse_table_array *v)
{
	v->a[39240] = 1;
	v->a[39241] = sym__special_character;
	v->a[39242] = state(971);
	v->a[39243] = 1;
	v->a[39244] = aux_sym__literal_repeat1;
	v->a[39245] = actions(3543);
	v->a[39246] = 5;
	v->a[39247] = sym_file_descriptor;
	v->a[39248] = sym_variable_name;
	v->a[39249] = sym_test_operator;
	v->a[39250] = sym__brace_start;
	v->a[39251] = aux_sym_heredoc_redirect_token1;
	v->a[39252] = actions(3541);
	v->a[39253] = 33;
	v->a[39254] = anon_sym_esac;
	v->a[39255] = anon_sym_PIPE;
	v->a[39256] = anon_sym_SEMI_SEMI;
	v->a[39257] = anon_sym_SEMI_AMP;
	v->a[39258] = anon_sym_SEMI_SEMI_AMP;
	v->a[39259] = anon_sym_PIPE_AMP;
	small_parse_table_1963(v);
}

void	small_parse_table_1963(t_small_parse_table_array *v)
{
	v->a[39260] = anon_sym_AMP_AMP;
	v->a[39261] = anon_sym_PIPE_PIPE;
	v->a[39262] = anon_sym_LT;
	v->a[39263] = anon_sym_GT;
	v->a[39264] = anon_sym_GT_GT;
	v->a[39265] = anon_sym_AMP_GT;
	v->a[39266] = anon_sym_AMP_GT_GT;
	v->a[39267] = anon_sym_LT_AMP;
	v->a[39268] = anon_sym_GT_AMP;
	v->a[39269] = anon_sym_GT_PIPE;
	v->a[39270] = anon_sym_LT_AMP_DASH;
	v->a[39271] = anon_sym_GT_AMP_DASH;
	v->a[39272] = anon_sym_LT_LT;
	v->a[39273] = anon_sym_LT_LT_DASH;
	v->a[39274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39275] = anon_sym_AMP;
	v->a[39276] = anon_sym_DOLLAR;
	v->a[39277] = anon_sym_DQUOTE;
	v->a[39278] = sym_raw_string;
	v->a[39279] = aux_sym_number_token1;
	small_parse_table_1964(v);
}

void	small_parse_table_1964(t_small_parse_table_array *v)
{
	v->a[39280] = aux_sym_number_token2;
	v->a[39281] = anon_sym_DOLLAR_LBRACE;
	v->a[39282] = anon_sym_DOLLAR_LPAREN;
	v->a[39283] = anon_sym_BQUOTE;
	v->a[39284] = anon_sym_DOLLAR_BQUOTE;
	v->a[39285] = sym_word;
	v->a[39286] = anon_sym_SEMI;
	v->a[39287] = 6;
	v->a[39288] = actions(3);
	v->a[39289] = 1;
	v->a[39290] = sym_comment;
	v->a[39291] = actions(3450);
	v->a[39292] = 1;
	v->a[39293] = aux_sym_concatenation_token1;
	v->a[39294] = actions(3545);
	v->a[39295] = 1;
	v->a[39296] = sym__concat;
	v->a[39297] = state(883);
	v->a[39298] = 1;
	v->a[39299] = aux_sym_concatenation_repeat1;
	small_parse_table_1965(v);
}

/* EOF small_parse_table_392.c */
