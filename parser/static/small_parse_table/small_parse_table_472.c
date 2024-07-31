/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_472.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2360(t_small_parse_table_array *v)
{
	v->a[47200] = anon_sym_LT_AMP;
	v->a[47201] = anon_sym_GT_AMP;
	v->a[47202] = anon_sym_GT_PIPE;
	v->a[47203] = anon_sym_LT_GT;
	v->a[47204] = 10;
	v->a[47205] = actions(3);
	v->a[47206] = 1;
	v->a[47207] = sym_comment;
	v->a[47208] = actions(746);
	v->a[47209] = 1;
	v->a[47210] = anon_sym_PIPE;
	v->a[47211] = actions(844);
	v->a[47212] = 1;
	v->a[47213] = ts_builtin_sym_end;
	v->a[47214] = actions(1605);
	v->a[47215] = 1;
	v->a[47216] = aux_sym_heredoc_redirect_token1;
	v->a[47217] = state(585);
	v->a[47218] = 1;
	v->a[47219] = sym_terminator;
	small_parse_table_2361(v);
}

void	small_parse_table_2361(t_small_parse_table_array *v)
{
	v->a[47220] = actions(846);
	v->a[47221] = 2;
	v->a[47222] = anon_sym_SEMI_SEMI;
	v->a[47223] = anon_sym_SEMI;
	v->a[47224] = actions(848);
	v->a[47225] = 2;
	v->a[47226] = anon_sym_AMP_AMP;
	v->a[47227] = anon_sym_PIPE_PIPE;
	v->a[47228] = actions(850);
	v->a[47229] = 2;
	v->a[47230] = anon_sym_LT_LT;
	v->a[47231] = anon_sym_LT_LT_DASH;
	v->a[47232] = state(924);
	v->a[47233] = 3;
	v->a[47234] = sym_file_redirect;
	v->a[47235] = sym_heredoc_redirect;
	v->a[47236] = aux_sym_redirected_statement_repeat1;
	v->a[47237] = actions(1603);
	v->a[47238] = 7;
	v->a[47239] = anon_sym_LT;
	small_parse_table_2362(v);
}

void	small_parse_table_2362(t_small_parse_table_array *v)
{
	v->a[47240] = anon_sym_GT;
	v->a[47241] = anon_sym_GT_GT;
	v->a[47242] = anon_sym_LT_AMP;
	v->a[47243] = anon_sym_GT_AMP;
	v->a[47244] = anon_sym_GT_PIPE;
	v->a[47245] = anon_sym_LT_GT;
	v->a[47246] = 12;
	v->a[47247] = actions(3);
	v->a[47248] = 1;
	v->a[47249] = sym_comment;
	v->a[47250] = actions(930);
	v->a[47251] = 1;
	v->a[47252] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47253] = actions(932);
	v->a[47254] = 1;
	v->a[47255] = anon_sym_DOLLAR;
	v->a[47256] = actions(934);
	v->a[47257] = 1;
	v->a[47258] = anon_sym_DQUOTE;
	v->a[47259] = actions(936);
	small_parse_table_2363(v);
}

void	small_parse_table_2363(t_small_parse_table_array *v)
{
	v->a[47260] = 1;
	v->a[47261] = anon_sym_DOLLAR_LBRACE;
	v->a[47262] = actions(938);
	v->a[47263] = 1;
	v->a[47264] = anon_sym_DOLLAR_LPAREN;
	v->a[47265] = actions(940);
	v->a[47266] = 1;
	v->a[47267] = anon_sym_BQUOTE;
	v->a[47268] = state(1608);
	v->a[47269] = 1;
	v->a[47270] = sym_terminator;
	v->a[47271] = state(945);
	v->a[47272] = 2;
	v->a[47273] = sym_concatenation;
	v->a[47274] = aux_sym_for_statement_repeat1;
	v->a[47275] = actions(1607);
	v->a[47276] = 3;
	v->a[47277] = sym_raw_string;
	v->a[47278] = sym_number;
	v->a[47279] = sym_word;
	small_parse_table_2364(v);
}

void	small_parse_table_2364(t_small_parse_table_array *v)
{
	v->a[47280] = actions(1609);
	v->a[47281] = 3;
	v->a[47282] = anon_sym_SEMI_SEMI;
	v->a[47283] = aux_sym_heredoc_redirect_token1;
	v->a[47284] = anon_sym_SEMI;
	v->a[47285] = state(1227);
	v->a[47286] = 5;
	v->a[47287] = sym_arithmetic_expansion;
	v->a[47288] = sym_string;
	v->a[47289] = sym_simple_expansion;
	v->a[47290] = sym_expansion;
	v->a[47291] = sym_command_substitution;
	v->a[47292] = 10;
	v->a[47293] = actions(3);
	v->a[47294] = 1;
	v->a[47295] = sym_comment;
	v->a[47296] = actions(746);
	v->a[47297] = 1;
	v->a[47298] = anon_sym_PIPE;
	v->a[47299] = actions(842);
	small_parse_table_2365(v);
}

/* EOF small_parse_table_472.c */
