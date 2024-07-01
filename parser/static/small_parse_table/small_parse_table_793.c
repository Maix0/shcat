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
	v->a[79300] = 2;
	v->a[79301] = sym_file_descriptor;
	v->a[79302] = aux_sym_heredoc_redirect_token1;
	v->a[79303] = actions(2095);
	v->a[79304] = 12;
	v->a[79305] = anon_sym_AMP_AMP;
	v->a[79306] = anon_sym_PIPE_PIPE;
	v->a[79307] = anon_sym_LT;
	v->a[79308] = anon_sym_GT;
	v->a[79309] = anon_sym_GT_GT;
	v->a[79310] = anon_sym_LT_AMP;
	v->a[79311] = anon_sym_GT_AMP;
	v->a[79312] = anon_sym_GT_PIPE;
	v->a[79313] = anon_sym_LT_AMP_DASH;
	v->a[79314] = anon_sym_GT_AMP_DASH;
	v->a[79315] = anon_sym_LT_LT;
	v->a[79316] = anon_sym_LT_LT_DASH;
	v->a[79317] = 10;
	v->a[79318] = actions(3);
	v->a[79319] = 1;
	small_parse_table_3966(v);
}

void	small_parse_table_3966(t_small_parse_table_array *v)
{
	v->a[79320] = sym_comment;
	v->a[79321] = actions(717);
	v->a[79322] = 1;
	v->a[79323] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79324] = actions(719);
	v->a[79325] = 1;
	v->a[79326] = anon_sym_DOLLAR;
	v->a[79327] = actions(721);
	v->a[79328] = 1;
	v->a[79329] = anon_sym_DQUOTE;
	v->a[79330] = actions(723);
	v->a[79331] = 1;
	v->a[79332] = anon_sym_DOLLAR_LBRACE;
	v->a[79333] = actions(725);
	v->a[79334] = 1;
	v->a[79335] = anon_sym_DOLLAR_LPAREN;
	v->a[79336] = actions(727);
	v->a[79337] = 1;
	v->a[79338] = anon_sym_BQUOTE;
	v->a[79339] = state(227);
	small_parse_table_3967(v);
}

void	small_parse_table_3967(t_small_parse_table_array *v)
{
	v->a[79340] = 2;
	v->a[79341] = sym_concatenation;
	v->a[79342] = aux_sym_for_statement_repeat1;
	v->a[79343] = actions(715);
	v->a[79344] = 3;
	v->a[79345] = sym_raw_string;
	v->a[79346] = sym_number;
	v->a[79347] = sym_word;
	v->a[79348] = state(577);
	v->a[79349] = 5;
	v->a[79350] = sym_arithmetic_expansion;
	v->a[79351] = sym_string;
	v->a[79352] = sym_simple_expansion;
	v->a[79353] = sym_expansion;
	v->a[79354] = sym_command_substitution;
	v->a[79355] = 10;
	v->a[79356] = actions(3);
	v->a[79357] = 1;
	v->a[79358] = sym_comment;
	v->a[79359] = actions(2643);
	small_parse_table_3968(v);
}

void	small_parse_table_3968(t_small_parse_table_array *v)
{
	v->a[79360] = 1;
	v->a[79361] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79362] = actions(2645);
	v->a[79363] = 1;
	v->a[79364] = anon_sym_DOLLAR;
	v->a[79365] = actions(2647);
	v->a[79366] = 1;
	v->a[79367] = anon_sym_DQUOTE;
	v->a[79368] = actions(2649);
	v->a[79369] = 1;
	v->a[79370] = anon_sym_DOLLAR_LBRACE;
	v->a[79371] = actions(2651);
	v->a[79372] = 1;
	v->a[79373] = anon_sym_DOLLAR_LPAREN;
	v->a[79374] = actions(2653);
	v->a[79375] = 1;
	v->a[79376] = anon_sym_BQUOTE;
	v->a[79377] = state(889);
	v->a[79378] = 2;
	v->a[79379] = sym_concatenation;
	small_parse_table_3969(v);
}

void	small_parse_table_3969(t_small_parse_table_array *v)
{
	v->a[79380] = aux_sym_for_statement_repeat1;
	v->a[79381] = actions(3073);
	v->a[79382] = 3;
	v->a[79383] = sym_raw_string;
	v->a[79384] = sym_number;
	v->a[79385] = sym_word;
	v->a[79386] = state(1118);
	v->a[79387] = 5;
	v->a[79388] = sym_arithmetic_expansion;
	v->a[79389] = sym_string;
	v->a[79390] = sym_simple_expansion;
	v->a[79391] = sym_expansion;
	v->a[79392] = sym_command_substitution;
	v->a[79393] = 10;
	v->a[79394] = actions(3);
	v->a[79395] = 1;
	v->a[79396] = sym_comment;
	v->a[79397] = actions(894);
	v->a[79398] = 1;
	v->a[79399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3970(v);
}

/* EOF small_parse_table_793.c */
