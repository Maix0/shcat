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
	v->a[79300] = anon_sym_DOLLAR;
	v->a[79301] = anon_sym_DQUOTE;
	v->a[79302] = sym_raw_string;
	v->a[79303] = sym_number;
	v->a[79304] = anon_sym_DOLLAR_LBRACE;
	v->a[79305] = anon_sym_DOLLAR_LPAREN;
	v->a[79306] = anon_sym_BQUOTE;
	v->a[79307] = sym_word;
	v->a[79308] = 5;
	v->a[79309] = actions(664);
	v->a[79310] = 1;
	v->a[79311] = sym_comment;
	v->a[79312] = actions(3432);
	v->a[79313] = 1;
	v->a[79314] = anon_sym_LT_LT;
	v->a[79315] = actions(3434);
	v->a[79316] = 1;
	v->a[79317] = anon_sym_LT_LT_DASH;
	v->a[79318] = actions(3428);
	v->a[79319] = 2;
	small_parse_table_3966(v);
}

void	small_parse_table_3966(t_small_parse_table_array *v)
{
	v->a[79320] = anon_sym_LT;
	v->a[79321] = anon_sym_GT;
	v->a[79322] = actions(3430);
	v->a[79323] = 5;
	v->a[79324] = anon_sym_GT_GT;
	v->a[79325] = anon_sym_LT_AMP;
	v->a[79326] = anon_sym_GT_AMP;
	v->a[79327] = anon_sym_GT_PIPE;
	v->a[79328] = anon_sym_LT_GT;
	v->a[79329] = 5;
	v->a[79330] = actions(664);
	v->a[79331] = 1;
	v->a[79332] = sym_comment;
	v->a[79333] = actions(3432);
	v->a[79334] = 1;
	v->a[79335] = anon_sym_LT_LT;
	v->a[79336] = actions(3434);
	v->a[79337] = 1;
	v->a[79338] = anon_sym_LT_LT_DASH;
	v->a[79339] = actions(3436);
	small_parse_table_3967(v);
}

void	small_parse_table_3967(t_small_parse_table_array *v)
{
	v->a[79340] = 2;
	v->a[79341] = anon_sym_LT;
	v->a[79342] = anon_sym_GT;
	v->a[79343] = actions(3438);
	v->a[79344] = 5;
	v->a[79345] = anon_sym_GT_GT;
	v->a[79346] = anon_sym_LT_AMP;
	v->a[79347] = anon_sym_GT_AMP;
	v->a[79348] = anon_sym_GT_PIPE;
	v->a[79349] = anon_sym_LT_GT;
	v->a[79350] = 8;
	v->a[79351] = actions(3);
	v->a[79352] = 1;
	v->a[79353] = sym_comment;
	v->a[79354] = actions(3440);
	v->a[79355] = 1;
	v->a[79356] = anon_sym_in;
	v->a[79357] = actions(3442);
	v->a[79358] = 1;
	v->a[79359] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3968(v);
}

void	small_parse_table_3968(t_small_parse_table_array *v)
{
	v->a[79360] = actions(3444);
	v->a[79361] = 1;
	v->a[79362] = aux_sym_concatenation_token1;
	v->a[79363] = actions(3446);
	v->a[79364] = 1;
	v->a[79365] = sym__concat;
	v->a[79366] = state(1740);
	v->a[79367] = 1;
	v->a[79368] = aux_sym_concatenation_repeat1;
	v->a[79369] = state(2106);
	v->a[79370] = 1;
	v->a[79371] = sym_terminator;
	v->a[79372] = actions(1893);
	v->a[79373] = 3;
	v->a[79374] = anon_sym_SEMI_SEMI;
	v->a[79375] = anon_sym_AMP;
	v->a[79376] = anon_sym_SEMI;
	v->a[79377] = 5;
	v->a[79378] = actions(664);
	v->a[79379] = 1;
	small_parse_table_3969(v);
}

void	small_parse_table_3969(t_small_parse_table_array *v)
{
	v->a[79380] = sym_comment;
	v->a[79381] = actions(3452);
	v->a[79382] = 1;
	v->a[79383] = anon_sym_LT_LT;
	v->a[79384] = actions(3454);
	v->a[79385] = 1;
	v->a[79386] = anon_sym_LT_LT_DASH;
	v->a[79387] = actions(3448);
	v->a[79388] = 2;
	v->a[79389] = anon_sym_LT;
	v->a[79390] = anon_sym_GT;
	v->a[79391] = actions(3450);
	v->a[79392] = 5;
	v->a[79393] = anon_sym_GT_GT;
	v->a[79394] = anon_sym_LT_AMP;
	v->a[79395] = anon_sym_GT_AMP;
	v->a[79396] = anon_sym_GT_PIPE;
	v->a[79397] = anon_sym_LT_GT;
	v->a[79398] = 8;
	v->a[79399] = actions(3);
	small_parse_table_3970(v);
}

/* EOF small_parse_table_793.c */
