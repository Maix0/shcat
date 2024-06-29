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
	v->a[32200] = anon_sym_LPAREN;
	v->a[32201] = anon_sym_PIPE;
	v->a[32202] = anon_sym_SEMI_SEMI;
	v->a[32203] = anon_sym_AMP_AMP;
	v->a[32204] = anon_sym_PIPE_PIPE;
	v->a[32205] = anon_sym_LT;
	v->a[32206] = anon_sym_GT;
	v->a[32207] = anon_sym_GT_GT;
	v->a[32208] = anon_sym_AMP_GT;
	v->a[32209] = anon_sym_AMP_GT_GT;
	v->a[32210] = anon_sym_LT_AMP;
	v->a[32211] = anon_sym_GT_AMP;
	v->a[32212] = anon_sym_GT_PIPE;
	v->a[32213] = anon_sym_LT_AMP_DASH;
	v->a[32214] = anon_sym_GT_AMP_DASH;
	v->a[32215] = anon_sym_LT_LT;
	v->a[32216] = anon_sym_LT_LT_DASH;
	v->a[32217] = aux_sym_heredoc_redirect_token1;
	v->a[32218] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32219] = anon_sym_AMP;
	small_parse_table_1611(v);
}

void	small_parse_table_1611(t_small_parse_table_array *v)
{
	v->a[32220] = aux_sym_concatenation_token1;
	v->a[32221] = anon_sym_DOLLAR;
	v->a[32222] = anon_sym_DQUOTE;
	v->a[32223] = sym_raw_string;
	v->a[32224] = sym_number;
	v->a[32225] = anon_sym_DOLLAR_LBRACE;
	v->a[32226] = anon_sym_DOLLAR_LPAREN;
	v->a[32227] = anon_sym_BQUOTE;
	v->a[32228] = sym_word;
	v->a[32229] = anon_sym_SEMI;
	v->a[32230] = 3;
	v->a[32231] = actions(3);
	v->a[32232] = 1;
	v->a[32233] = sym_comment;
	v->a[32234] = actions(1126);
	v->a[32235] = 3;
	v->a[32236] = sym_file_descriptor;
	v->a[32237] = sym__concat;
	v->a[32238] = sym__bare_dollar;
	v->a[32239] = actions(1124);
	small_parse_table_1612(v);
}

void	small_parse_table_1612(t_small_parse_table_array *v)
{
	v->a[32240] = 31;
	v->a[32241] = anon_sym_esac;
	v->a[32242] = anon_sym_LPAREN;
	v->a[32243] = anon_sym_PIPE;
	v->a[32244] = anon_sym_SEMI_SEMI;
	v->a[32245] = anon_sym_AMP_AMP;
	v->a[32246] = anon_sym_PIPE_PIPE;
	v->a[32247] = anon_sym_LT;
	v->a[32248] = anon_sym_GT;
	v->a[32249] = anon_sym_GT_GT;
	v->a[32250] = anon_sym_AMP_GT;
	v->a[32251] = anon_sym_AMP_GT_GT;
	v->a[32252] = anon_sym_LT_AMP;
	v->a[32253] = anon_sym_GT_AMP;
	v->a[32254] = anon_sym_GT_PIPE;
	v->a[32255] = anon_sym_LT_AMP_DASH;
	v->a[32256] = anon_sym_GT_AMP_DASH;
	v->a[32257] = anon_sym_LT_LT;
	v->a[32258] = anon_sym_LT_LT_DASH;
	v->a[32259] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1613(v);
}

void	small_parse_table_1613(t_small_parse_table_array *v)
{
	v->a[32260] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32261] = anon_sym_AMP;
	v->a[32262] = aux_sym_concatenation_token1;
	v->a[32263] = anon_sym_DOLLAR;
	v->a[32264] = anon_sym_DQUOTE;
	v->a[32265] = sym_raw_string;
	v->a[32266] = sym_number;
	v->a[32267] = anon_sym_DOLLAR_LBRACE;
	v->a[32268] = anon_sym_DOLLAR_LPAREN;
	v->a[32269] = anon_sym_BQUOTE;
	v->a[32270] = sym_word;
	v->a[32271] = anon_sym_SEMI;
	v->a[32272] = 14;
	v->a[32273] = actions(3);
	v->a[32274] = 1;
	v->a[32275] = sym_comment;
	v->a[32276] = actions(577);
	v->a[32277] = 1;
	v->a[32278] = sym_file_descriptor;
	v->a[32279] = actions(585);
	small_parse_table_1614(v);
}

void	small_parse_table_1614(t_small_parse_table_array *v)
{
	v->a[32280] = 1;
	v->a[32281] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32282] = actions(588);
	v->a[32283] = 1;
	v->a[32284] = anon_sym_DOLLAR;
	v->a[32285] = actions(591);
	v->a[32286] = 1;
	v->a[32287] = anon_sym_DQUOTE;
	v->a[32288] = actions(594);
	v->a[32289] = 1;
	v->a[32290] = anon_sym_DOLLAR_LBRACE;
	v->a[32291] = actions(597);
	v->a[32292] = 1;
	v->a[32293] = anon_sym_DOLLAR_LPAREN;
	v->a[32294] = actions(600);
	v->a[32295] = 1;
	v->a[32296] = anon_sym_BQUOTE;
	v->a[32297] = actions(603);
	v->a[32298] = 1;
	v->a[32299] = sym__bare_dollar;
	small_parse_table_1615(v);
}

/* EOF small_parse_table_322.c */
