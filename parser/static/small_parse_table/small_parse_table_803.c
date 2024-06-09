/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_803.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4015(t_small_parse_table_array *v)
{
	v->a[80300] = 1;
	v->a[80301] = anon_sym_BQUOTE;
	v->a[80302] = actions(3326);
	v->a[80303] = 1;
	v->a[80304] = sym__bare_dollar;
	v->a[80305] = actions(3324);
	v->a[80306] = 3;
	v->a[80307] = sym_raw_string;
	v->a[80308] = sym__comment_word;
	v->a[80309] = sym_word;
	v->a[80310] = state(1533);
	v->a[80311] = 6;
	v->a[80312] = sym_arithmetic_expansion;
	v->a[80313] = sym_string;
	v->a[80314] = sym_number;
	v->a[80315] = sym_simple_expansion;
	v->a[80316] = sym_expansion;
	v->a[80317] = sym_command_substitution;
	v->a[80318] = 12;
	v->a[80319] = actions(3);
	small_parse_table_4016(v);
}

void	small_parse_table_4016(t_small_parse_table_array *v)
{
	v->a[80320] = 1;
	v->a[80321] = sym_comment;
	v->a[80322] = actions(2851);
	v->a[80323] = 1;
	v->a[80324] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80325] = actions(2855);
	v->a[80326] = 1;
	v->a[80327] = anon_sym_DQUOTE;
	v->a[80328] = actions(2857);
	v->a[80329] = 1;
	v->a[80330] = aux_sym_number_token1;
	v->a[80331] = actions(2859);
	v->a[80332] = 1;
	v->a[80333] = aux_sym_number_token2;
	v->a[80334] = actions(2861);
	v->a[80335] = 1;
	v->a[80336] = anon_sym_DOLLAR_LBRACE;
	v->a[80337] = actions(2863);
	v->a[80338] = 1;
	v->a[80339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4017(v);
}

void	small_parse_table_4017(t_small_parse_table_array *v)
{
	v->a[80340] = actions(2865);
	v->a[80341] = 1;
	v->a[80342] = anon_sym_BQUOTE;
	v->a[80343] = actions(3220);
	v->a[80344] = 1;
	v->a[80345] = sym__bare_dollar;
	v->a[80346] = actions(3328);
	v->a[80347] = 1;
	v->a[80348] = anon_sym_DOLLAR;
	v->a[80349] = actions(3218);
	v->a[80350] = 3;
	v->a[80351] = sym_raw_string;
	v->a[80352] = sym__comment_word;
	v->a[80353] = sym_word;
	v->a[80354] = state(1052);
	v->a[80355] = 6;
	v->a[80356] = sym_arithmetic_expansion;
	v->a[80357] = sym_string;
	v->a[80358] = sym_number;
	v->a[80359] = sym_simple_expansion;
	small_parse_table_4018(v);
}

void	small_parse_table_4018(t_small_parse_table_array *v)
{
	v->a[80360] = sym_expansion;
	v->a[80361] = sym_command_substitution;
	v->a[80362] = 12;
	v->a[80363] = actions(3);
	v->a[80364] = 1;
	v->a[80365] = sym_comment;
	v->a[80366] = actions(117);
	v->a[80367] = 1;
	v->a[80368] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80369] = actions(121);
	v->a[80370] = 1;
	v->a[80371] = anon_sym_DQUOTE;
	v->a[80372] = actions(125);
	v->a[80373] = 1;
	v->a[80374] = aux_sym_number_token1;
	v->a[80375] = actions(127);
	v->a[80376] = 1;
	v->a[80377] = aux_sym_number_token2;
	v->a[80378] = actions(129);
	v->a[80379] = 1;
	small_parse_table_4019(v);
}

void	small_parse_table_4019(t_small_parse_table_array *v)
{
	v->a[80380] = anon_sym_DOLLAR_LBRACE;
	v->a[80381] = actions(131);
	v->a[80382] = 1;
	v->a[80383] = anon_sym_DOLLAR_LPAREN;
	v->a[80384] = actions(133);
	v->a[80385] = 1;
	v->a[80386] = anon_sym_BQUOTE;
	v->a[80387] = actions(3316);
	v->a[80388] = 1;
	v->a[80389] = sym__bare_dollar;
	v->a[80390] = actions(3330);
	v->a[80391] = 1;
	v->a[80392] = anon_sym_DOLLAR;
	v->a[80393] = actions(3314);
	v->a[80394] = 3;
	v->a[80395] = sym_raw_string;
	v->a[80396] = sym__comment_word;
	v->a[80397] = sym_word;
	v->a[80398] = state(396);
	v->a[80399] = 6;
	small_parse_table_4020(v);
}

/* EOF small_parse_table_803.c */
