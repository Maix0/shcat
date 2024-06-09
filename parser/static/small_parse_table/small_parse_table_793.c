/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_793.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3965(t_small_parse_table_array *v)
{
	v->a[79300] = sym_arithmetic_expansion;
	v->a[79301] = sym_string;
	v->a[79302] = sym_number;
	v->a[79303] = sym_simple_expansion;
	v->a[79304] = sym_expansion;
	v->a[79305] = sym_command_substitution;
	v->a[79306] = 12;
	v->a[79307] = actions(3);
	v->a[79308] = 1;
	v->a[79309] = sym_comment;
	v->a[79310] = actions(2905);
	v->a[79311] = 1;
	v->a[79312] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79313] = actions(2909);
	v->a[79314] = 1;
	v->a[79315] = anon_sym_DQUOTE;
	v->a[79316] = actions(2911);
	v->a[79317] = 1;
	v->a[79318] = aux_sym_number_token1;
	v->a[79319] = actions(2913);
	small_parse_table_3966(v);
}

void	small_parse_table_3966(t_small_parse_table_array *v)
{
	v->a[79320] = 1;
	v->a[79321] = aux_sym_number_token2;
	v->a[79322] = actions(2915);
	v->a[79323] = 1;
	v->a[79324] = anon_sym_DOLLAR_LBRACE;
	v->a[79325] = actions(2917);
	v->a[79326] = 1;
	v->a[79327] = anon_sym_DOLLAR_LPAREN;
	v->a[79328] = actions(2919);
	v->a[79329] = 1;
	v->a[79330] = anon_sym_BQUOTE;
	v->a[79331] = actions(3272);
	v->a[79332] = 1;
	v->a[79333] = sym__bare_dollar;
	v->a[79334] = actions(3274);
	v->a[79335] = 1;
	v->a[79336] = anon_sym_DOLLAR;
	v->a[79337] = actions(3270);
	v->a[79338] = 3;
	v->a[79339] = sym_raw_string;
	small_parse_table_3967(v);
}

void	small_parse_table_3967(t_small_parse_table_array *v)
{
	v->a[79340] = sym__comment_word;
	v->a[79341] = sym_word;
	v->a[79342] = state(532);
	v->a[79343] = 6;
	v->a[79344] = sym_arithmetic_expansion;
	v->a[79345] = sym_string;
	v->a[79346] = sym_number;
	v->a[79347] = sym_simple_expansion;
	v->a[79348] = sym_expansion;
	v->a[79349] = sym_command_substitution;
	v->a[79350] = 12;
	v->a[79351] = actions(3);
	v->a[79352] = 1;
	v->a[79353] = sym_comment;
	v->a[79354] = actions(485);
	v->a[79355] = 1;
	v->a[79356] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79357] = actions(489);
	v->a[79358] = 1;
	v->a[79359] = anon_sym_DQUOTE;
	small_parse_table_3968(v);
}

void	small_parse_table_3968(t_small_parse_table_array *v)
{
	v->a[79360] = actions(491);
	v->a[79361] = 1;
	v->a[79362] = aux_sym_number_token1;
	v->a[79363] = actions(493);
	v->a[79364] = 1;
	v->a[79365] = aux_sym_number_token2;
	v->a[79366] = actions(495);
	v->a[79367] = 1;
	v->a[79368] = anon_sym_DOLLAR_LBRACE;
	v->a[79369] = actions(497);
	v->a[79370] = 1;
	v->a[79371] = anon_sym_DOLLAR_LPAREN;
	v->a[79372] = actions(499);
	v->a[79373] = 1;
	v->a[79374] = anon_sym_BQUOTE;
	v->a[79375] = actions(3278);
	v->a[79376] = 1;
	v->a[79377] = anon_sym_DOLLAR;
	v->a[79378] = actions(3280);
	v->a[79379] = 1;
	small_parse_table_3969(v);
}

void	small_parse_table_3969(t_small_parse_table_array *v)
{
	v->a[79380] = sym__bare_dollar;
	v->a[79381] = actions(3276);
	v->a[79382] = 3;
	v->a[79383] = sym_raw_string;
	v->a[79384] = sym__comment_word;
	v->a[79385] = sym_word;
	v->a[79386] = state(522);
	v->a[79387] = 6;
	v->a[79388] = sym_arithmetic_expansion;
	v->a[79389] = sym_string;
	v->a[79390] = sym_number;
	v->a[79391] = sym_simple_expansion;
	v->a[79392] = sym_expansion;
	v->a[79393] = sym_command_substitution;
	v->a[79394] = 12;
	v->a[79395] = actions(3);
	v->a[79396] = 1;
	v->a[79397] = sym_comment;
	v->a[79398] = actions(1479);
	v->a[79399] = 1;
	small_parse_table_3970(v);
}

/* EOF small_parse_table_793.c */
