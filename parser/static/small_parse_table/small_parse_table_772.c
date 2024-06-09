/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_772.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3860(t_small_parse_table_array *v)
{
	v->a[77200] = sym_arithmetic_expansion;
	v->a[77201] = sym_string;
	v->a[77202] = sym_number;
	v->a[77203] = sym_simple_expansion;
	v->a[77204] = sym_expansion;
	v->a[77205] = sym_command_substitution;
	v->a[77206] = 12;
	v->a[77207] = actions(3);
	v->a[77208] = 1;
	v->a[77209] = sym_comment;
	v->a[77210] = actions(978);
	v->a[77211] = 1;
	v->a[77212] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77213] = actions(982);
	v->a[77214] = 1;
	v->a[77215] = anon_sym_DQUOTE;
	v->a[77216] = actions(984);
	v->a[77217] = 1;
	v->a[77218] = aux_sym_number_token1;
	v->a[77219] = actions(986);
	small_parse_table_3861(v);
}

void	small_parse_table_3861(t_small_parse_table_array *v)
{
	v->a[77220] = 1;
	v->a[77221] = aux_sym_number_token2;
	v->a[77222] = actions(988);
	v->a[77223] = 1;
	v->a[77224] = anon_sym_DOLLAR_LBRACE;
	v->a[77225] = actions(990);
	v->a[77226] = 1;
	v->a[77227] = anon_sym_DOLLAR_LPAREN;
	v->a[77228] = actions(992);
	v->a[77229] = 1;
	v->a[77230] = anon_sym_BQUOTE;
	v->a[77231] = actions(3132);
	v->a[77232] = 1;
	v->a[77233] = anon_sym_DOLLAR;
	v->a[77234] = actions(3134);
	v->a[77235] = 1;
	v->a[77236] = sym__bare_dollar;
	v->a[77237] = actions(3130);
	v->a[77238] = 3;
	v->a[77239] = sym_raw_string;
	small_parse_table_3862(v);
}

void	small_parse_table_3862(t_small_parse_table_array *v)
{
	v->a[77240] = sym__comment_word;
	v->a[77241] = sym_word;
	v->a[77242] = state(1195);
	v->a[77243] = 6;
	v->a[77244] = sym_arithmetic_expansion;
	v->a[77245] = sym_string;
	v->a[77246] = sym_number;
	v->a[77247] = sym_simple_expansion;
	v->a[77248] = sym_expansion;
	v->a[77249] = sym_command_substitution;
	v->a[77250] = 12;
	v->a[77251] = actions(3);
	v->a[77252] = 1;
	v->a[77253] = sym_comment;
	v->a[77254] = actions(797);
	v->a[77255] = 1;
	v->a[77256] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77257] = actions(801);
	v->a[77258] = 1;
	v->a[77259] = anon_sym_DQUOTE;
	small_parse_table_3863(v);
}

void	small_parse_table_3863(t_small_parse_table_array *v)
{
	v->a[77260] = actions(803);
	v->a[77261] = 1;
	v->a[77262] = aux_sym_number_token1;
	v->a[77263] = actions(805);
	v->a[77264] = 1;
	v->a[77265] = aux_sym_number_token2;
	v->a[77266] = actions(807);
	v->a[77267] = 1;
	v->a[77268] = anon_sym_DOLLAR_LBRACE;
	v->a[77269] = actions(809);
	v->a[77270] = 1;
	v->a[77271] = anon_sym_DOLLAR_LPAREN;
	v->a[77272] = actions(811);
	v->a[77273] = 1;
	v->a[77274] = anon_sym_BQUOTE;
	v->a[77275] = actions(3138);
	v->a[77276] = 1;
	v->a[77277] = anon_sym_DOLLAR;
	v->a[77278] = actions(3140);
	v->a[77279] = 1;
	small_parse_table_3864(v);
}

void	small_parse_table_3864(t_small_parse_table_array *v)
{
	v->a[77280] = sym__bare_dollar;
	v->a[77281] = actions(3136);
	v->a[77282] = 3;
	v->a[77283] = sym_raw_string;
	v->a[77284] = sym__comment_word;
	v->a[77285] = sym_word;
	v->a[77286] = state(607);
	v->a[77287] = 6;
	v->a[77288] = sym_arithmetic_expansion;
	v->a[77289] = sym_string;
	v->a[77290] = sym_number;
	v->a[77291] = sym_simple_expansion;
	v->a[77292] = sym_expansion;
	v->a[77293] = sym_command_substitution;
	v->a[77294] = 3;
	v->a[77295] = actions(1404);
	v->a[77296] = 1;
	v->a[77297] = sym_comment;
	v->a[77298] = actions(1253);
	v->a[77299] = 7;
	small_parse_table_3865(v);
}

/* EOF small_parse_table_772.c */
