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
	v->a[32200] = anon_sym_DOLLAR;
	v->a[32201] = anon_sym_DQUOTE;
	v->a[32202] = sym_raw_string;
	v->a[32203] = sym_number;
	v->a[32204] = anon_sym_DOLLAR_LBRACE;
	v->a[32205] = anon_sym_DOLLAR_LPAREN;
	v->a[32206] = anon_sym_BQUOTE;
	v->a[32207] = sym_word;
	v->a[32208] = 3;
	v->a[32209] = actions(3);
	v->a[32210] = 1;
	v->a[32211] = sym_comment;
	v->a[32212] = actions(469);
	v->a[32213] = 1;
	v->a[32214] = sym__concat;
	v->a[32215] = actions(467);
	v->a[32216] = 26;
	v->a[32217] = anon_sym_PIPE;
	v->a[32218] = anon_sym_RPAREN;
	v->a[32219] = anon_sym_SEMI_SEMI;
	small_parse_table_1611(v);
}

void	small_parse_table_1611(t_small_parse_table_array *v)
{
	v->a[32220] = anon_sym_AMP_AMP;
	v->a[32221] = anon_sym_PIPE_PIPE;
	v->a[32222] = anon_sym_LT;
	v->a[32223] = anon_sym_GT;
	v->a[32224] = anon_sym_GT_GT;
	v->a[32225] = anon_sym_LT_AMP;
	v->a[32226] = anon_sym_GT_AMP;
	v->a[32227] = anon_sym_GT_PIPE;
	v->a[32228] = anon_sym_LT_GT;
	v->a[32229] = anon_sym_LT_LT;
	v->a[32230] = anon_sym_LT_LT_DASH;
	v->a[32231] = aux_sym_heredoc_redirect_token1;
	v->a[32232] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32233] = aux_sym_concatenation_token1;
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
	v->a[32242] = anon_sym_SEMI;
	v->a[32243] = 5;
	v->a[32244] = actions(3);
	v->a[32245] = 1;
	v->a[32246] = sym_comment;
	v->a[32247] = actions(1255);
	v->a[32248] = 1;
	v->a[32249] = sym_variable_name;
	v->a[32250] = actions(1253);
	v->a[32251] = 2;
	v->a[32252] = aux_sym__simple_variable_name_token1;
	v->a[32253] = aux_sym__multiline_variable_name_token1;
	v->a[32254] = actions(1251);
	v->a[32255] = 8;
	v->a[32256] = anon_sym_BANG;
	v->a[32257] = anon_sym_DASH;
	v->a[32258] = anon_sym_STAR;
	v->a[32259] = anon_sym_QMARK;
	small_parse_table_1613(v);
}

void	small_parse_table_1613(t_small_parse_table_array *v)
{
	v->a[32260] = anon_sym_DOLLAR;
	v->a[32261] = anon_sym_POUND;
	v->a[32262] = anon_sym_AT;
	v->a[32263] = anon_sym_0;
	v->a[32264] = actions(345);
	v->a[32265] = 16;
	v->a[32266] = anon_sym_PIPE;
	v->a[32267] = anon_sym_RPAREN;
	v->a[32268] = anon_sym_SEMI_SEMI;
	v->a[32269] = anon_sym_AMP_AMP;
	v->a[32270] = anon_sym_PIPE_PIPE;
	v->a[32271] = anon_sym_LT;
	v->a[32272] = anon_sym_GT;
	v->a[32273] = anon_sym_GT_GT;
	v->a[32274] = anon_sym_LT_AMP;
	v->a[32275] = anon_sym_GT_AMP;
	v->a[32276] = anon_sym_GT_PIPE;
	v->a[32277] = anon_sym_LT_GT;
	v->a[32278] = anon_sym_LT_LT;
	v->a[32279] = anon_sym_LT_LT_DASH;
	small_parse_table_1614(v);
}

void	small_parse_table_1614(t_small_parse_table_array *v)
{
	v->a[32280] = aux_sym_heredoc_redirect_token1;
	v->a[32281] = anon_sym_SEMI;
	v->a[32282] = 3;
	v->a[32283] = actions(3);
	v->a[32284] = 1;
	v->a[32285] = sym_comment;
	v->a[32286] = actions(1177);
	v->a[32287] = 1;
	v->a[32288] = sym_variable_name;
	v->a[32289] = actions(1175);
	v->a[32290] = 26;
	v->a[32291] = anon_sym_for;
	v->a[32292] = anon_sym_while;
	v->a[32293] = anon_sym_until;
	v->a[32294] = anon_sym_done;
	v->a[32295] = anon_sym_if;
	v->a[32296] = anon_sym_then;
	v->a[32297] = anon_sym_case;
	v->a[32298] = anon_sym_LPAREN;
	v->a[32299] = anon_sym_LBRACE;
	small_parse_table_1615(v);
}

/* EOF small_parse_table_322.c */
