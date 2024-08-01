/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_322.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1610(t_small_parse_table_array *v)
{
	v->a[32200] = anon_sym_DQUOTE;
	v->a[32201] = sym_raw_string;
	v->a[32202] = sym_number;
	v->a[32203] = anon_sym_DOLLAR_LBRACE;
	v->a[32204] = anon_sym_DOLLAR_LPAREN;
	v->a[32205] = anon_sym_BQUOTE;
	v->a[32206] = sym_word;
	v->a[32207] = 6;
	v->a[32208] = actions(3);
	v->a[32209] = 1;
	v->a[32210] = sym_comment;
	v->a[32211] = actions(921);
	v->a[32212] = 1;
	v->a[32213] = sym_variable_name;
	v->a[32214] = actions(927);
	v->a[32215] = 1;
	v->a[32216] = aux_sym_concatenation_token1;
	v->a[32217] = actions(1321);
	v->a[32218] = 1;
	v->a[32219] = sym__concat;
	small_parse_table_1611(v);
}

void	small_parse_table_1611(t_small_parse_table_array *v)
{
	v->a[32220] = state(279);
	v->a[32221] = 1;
	v->a[32222] = aux_sym_concatenation_repeat1;
	v->a[32223] = actions(923);
	v->a[32224] = 17;
	v->a[32225] = anon_sym_PIPE;
	v->a[32226] = anon_sym_AMP_AMP;
	v->a[32227] = anon_sym_PIPE_PIPE;
	v->a[32228] = anon_sym_LT;
	v->a[32229] = anon_sym_GT;
	v->a[32230] = anon_sym_GT_GT;
	v->a[32231] = anon_sym_LT_LT;
	v->a[32232] = aux_sym_heredoc_redirect_token1;
	v->a[32233] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32234] = anon_sym_DOLLAR;
	v->a[32235] = anon_sym_DQUOTE;
	v->a[32236] = sym_raw_string;
	v->a[32237] = sym_number;
	v->a[32238] = anon_sym_DOLLAR_LBRACE;
	v->a[32239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1612(v);
}

void	small_parse_table_1612(t_small_parse_table_array *v)
{
	v->a[32240] = anon_sym_BQUOTE;
	v->a[32241] = sym_word;
	v->a[32242] = 3;
	v->a[32243] = actions(3);
	v->a[32244] = 1;
	v->a[32245] = sym_comment;
	v->a[32246] = actions(911);
	v->a[32247] = 1;
	v->a[32248] = sym__bare_dollar;
	v->a[32249] = actions(909);
	v->a[32250] = 20;
	v->a[32251] = anon_sym_PIPE;
	v->a[32252] = anon_sym_RPAREN;
	v->a[32253] = anon_sym_SEMI_SEMI;
	v->a[32254] = anon_sym_AMP_AMP;
	v->a[32255] = anon_sym_PIPE_PIPE;
	v->a[32256] = anon_sym_LT;
	v->a[32257] = anon_sym_GT;
	v->a[32258] = anon_sym_GT_GT;
	v->a[32259] = anon_sym_LT_LT;
	small_parse_table_1613(v);
}

void	small_parse_table_1613(t_small_parse_table_array *v)
{
	v->a[32260] = aux_sym_heredoc_redirect_token1;
	v->a[32261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32262] = anon_sym_DOLLAR;
	v->a[32263] = anon_sym_DQUOTE;
	v->a[32264] = sym_raw_string;
	v->a[32265] = sym_number;
	v->a[32266] = anon_sym_DOLLAR_LBRACE;
	v->a[32267] = anon_sym_DOLLAR_LPAREN;
	v->a[32268] = anon_sym_BQUOTE;
	v->a[32269] = sym_word;
	v->a[32270] = anon_sym_SEMI;
	v->a[32271] = 15;
	v->a[32272] = actions(3);
	v->a[32273] = 1;
	v->a[32274] = sym_comment;
	v->a[32275] = actions(778);
	v->a[32276] = 1;
	v->a[32277] = anon_sym_LPAREN;
	v->a[32278] = actions(782);
	v->a[32279] = 1;
	small_parse_table_1614(v);
}

void	small_parse_table_1614(t_small_parse_table_array *v)
{
	v->a[32280] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32281] = actions(784);
	v->a[32282] = 1;
	v->a[32283] = anon_sym_DOLLAR;
	v->a[32284] = actions(786);
	v->a[32285] = 1;
	v->a[32286] = anon_sym_DQUOTE;
	v->a[32287] = actions(788);
	v->a[32288] = 1;
	v->a[32289] = anon_sym_DOLLAR_LBRACE;
	v->a[32290] = actions(790);
	v->a[32291] = 1;
	v->a[32292] = anon_sym_DOLLAR_LPAREN;
	v->a[32293] = actions(792);
	v->a[32294] = 1;
	v->a[32295] = anon_sym_BQUOTE;
	v->a[32296] = actions(794);
	v->a[32297] = 1;
	v->a[32298] = sym_extglob_pattern;
	v->a[32299] = state(597);
	small_parse_table_1615(v);
}

/* EOF small_parse_table_322.c */
