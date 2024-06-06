/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_612.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3060(t_small_parse_table_array *v)
{
	v->a[61200] = sym_test_operator;
	v->a[61201] = sym__brace_start;
	v->a[61202] = actions(3627);
	v->a[61203] = 9;
	v->a[61204] = anon_sym_PIPE;
	v->a[61205] = anon_sym_SEMI_SEMI;
	v->a[61206] = anon_sym_PIPE_AMP;
	v->a[61207] = anon_sym_AMP_AMP;
	v->a[61208] = anon_sym_PIPE_PIPE;
	v->a[61209] = anon_sym_LT_LT;
	v->a[61210] = anon_sym_LT_LT_DASH;
	v->a[61211] = anon_sym_AMP;
	v->a[61212] = anon_sym_SEMI;
	v->a[61213] = actions(3629);
	v->a[61214] = 10;
	v->a[61215] = anon_sym_LT;
	v->a[61216] = anon_sym_GT;
	v->a[61217] = anon_sym_GT_GT;
	v->a[61218] = anon_sym_AMP_GT;
	v->a[61219] = anon_sym_AMP_GT_GT;
	small_parse_table_3061(v);
}

void	small_parse_table_3061(t_small_parse_table_array *v)
{
	v->a[61220] = anon_sym_LT_AMP;
	v->a[61221] = anon_sym_GT_AMP;
	v->a[61222] = anon_sym_GT_PIPE;
	v->a[61223] = anon_sym_LT_AMP_DASH;
	v->a[61224] = anon_sym_GT_AMP_DASH;
	v->a[61225] = actions(3625);
	v->a[61226] = 12;
	v->a[61227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61228] = anon_sym_DOLLAR;
	v->a[61229] = sym__special_character;
	v->a[61230] = anon_sym_DQUOTE;
	v->a[61231] = sym_raw_string;
	v->a[61232] = aux_sym_number_token1;
	v->a[61233] = aux_sym_number_token2;
	v->a[61234] = anon_sym_DOLLAR_LBRACE;
	v->a[61235] = anon_sym_DOLLAR_LPAREN;
	v->a[61236] = anon_sym_BQUOTE;
	v->a[61237] = anon_sym_DOLLAR_BQUOTE;
	v->a[61238] = sym_word;
	v->a[61239] = 7;
	small_parse_table_3062(v);
}

void	small_parse_table_3062(t_small_parse_table_array *v)
{
	v->a[61240] = actions(3);
	v->a[61241] = 1;
	v->a[61242] = sym_comment;
	v->a[61243] = actions(3632);
	v->a[61244] = 1;
	v->a[61245] = aux_sym_heredoc_redirect_token1;
	v->a[61246] = actions(3634);
	v->a[61247] = 1;
	v->a[61248] = sym_file_descriptor;
	v->a[61249] = actions(3637);
	v->a[61250] = 3;
	v->a[61251] = sym_variable_name;
	v->a[61252] = sym_test_operator;
	v->a[61253] = sym__brace_start;
	v->a[61254] = actions(3627);
	v->a[61255] = 10;
	v->a[61256] = anon_sym_PIPE;
	v->a[61257] = anon_sym_RPAREN;
	v->a[61258] = anon_sym_SEMI_SEMI;
	v->a[61259] = anon_sym_PIPE_AMP;
	small_parse_table_3063(v);
}

void	small_parse_table_3063(t_small_parse_table_array *v)
{
	v->a[61260] = anon_sym_AMP_AMP;
	v->a[61261] = anon_sym_PIPE_PIPE;
	v->a[61262] = anon_sym_LT_LT;
	v->a[61263] = anon_sym_LT_LT_DASH;
	v->a[61264] = anon_sym_AMP;
	v->a[61265] = anon_sym_SEMI;
	v->a[61266] = actions(3629);
	v->a[61267] = 10;
	v->a[61268] = anon_sym_LT;
	v->a[61269] = anon_sym_GT;
	v->a[61270] = anon_sym_GT_GT;
	v->a[61271] = anon_sym_AMP_GT;
	v->a[61272] = anon_sym_AMP_GT_GT;
	v->a[61273] = anon_sym_LT_AMP;
	v->a[61274] = anon_sym_GT_AMP;
	v->a[61275] = anon_sym_GT_PIPE;
	v->a[61276] = anon_sym_LT_AMP_DASH;
	v->a[61277] = anon_sym_GT_AMP_DASH;
	v->a[61278] = actions(3625);
	v->a[61279] = 12;
	small_parse_table_3064(v);
}

void	small_parse_table_3064(t_small_parse_table_array *v)
{
	v->a[61280] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61281] = anon_sym_DOLLAR;
	v->a[61282] = sym__special_character;
	v->a[61283] = anon_sym_DQUOTE;
	v->a[61284] = sym_raw_string;
	v->a[61285] = aux_sym_number_token1;
	v->a[61286] = aux_sym_number_token2;
	v->a[61287] = anon_sym_DOLLAR_LBRACE;
	v->a[61288] = anon_sym_DOLLAR_LPAREN;
	v->a[61289] = anon_sym_BQUOTE;
	v->a[61290] = anon_sym_DOLLAR_BQUOTE;
	v->a[61291] = sym_word;
	v->a[61292] = 5;
	v->a[61293] = actions(3);
	v->a[61294] = 1;
	v->a[61295] = sym_comment;
	v->a[61296] = actions(4010);
	v->a[61297] = 1;
	v->a[61298] = sym__special_character;
	v->a[61299] = state(1274);
	small_parse_table_3065(v);
}

/* EOF small_parse_table_612.c */
