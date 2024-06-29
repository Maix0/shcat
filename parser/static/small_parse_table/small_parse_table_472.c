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
	v->a[47200] = 9;
	v->a[47201] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47202] = anon_sym_DOLLAR;
	v->a[47203] = anon_sym_DQUOTE;
	v->a[47204] = sym_raw_string;
	v->a[47205] = sym_number;
	v->a[47206] = anon_sym_DOLLAR_LBRACE;
	v->a[47207] = anon_sym_DOLLAR_LPAREN;
	v->a[47208] = anon_sym_BQUOTE;
	v->a[47209] = sym_word;
	v->a[47210] = actions(1528);
	v->a[47211] = 9;
	v->a[47212] = anon_sym_PIPE;
	v->a[47213] = anon_sym_SEMI_SEMI;
	v->a[47214] = anon_sym_AMP_AMP;
	v->a[47215] = anon_sym_PIPE_PIPE;
	v->a[47216] = anon_sym_LT_LT;
	v->a[47217] = anon_sym_LT_LT_DASH;
	v->a[47218] = aux_sym_heredoc_redirect_token1;
	v->a[47219] = anon_sym_AMP;
	small_parse_table_2361(v);
}

void	small_parse_table_2361(t_small_parse_table_array *v)
{
	v->a[47220] = anon_sym_SEMI;
	v->a[47221] = actions(1533);
	v->a[47222] = 10;
	v->a[47223] = anon_sym_LT;
	v->a[47224] = anon_sym_GT;
	v->a[47225] = anon_sym_GT_GT;
	v->a[47226] = anon_sym_AMP_GT;
	v->a[47227] = anon_sym_AMP_GT_GT;
	v->a[47228] = anon_sym_LT_AMP;
	v->a[47229] = anon_sym_GT_AMP;
	v->a[47230] = anon_sym_GT_PIPE;
	v->a[47231] = anon_sym_LT_AMP_DASH;
	v->a[47232] = anon_sym_GT_AMP_DASH;
	v->a[47233] = 3;
	v->a[47234] = actions(3);
	v->a[47235] = 1;
	v->a[47236] = sym_comment;
	v->a[47237] = actions(548);
	v->a[47238] = 2;
	v->a[47239] = sym_file_descriptor;
	small_parse_table_2362(v);
}

void	small_parse_table_2362(t_small_parse_table_array *v)
{
	v->a[47240] = sym_variable_name;
	v->a[47241] = actions(546);
	v->a[47242] = 29;
	v->a[47243] = anon_sym_PIPE;
	v->a[47244] = anon_sym_RPAREN;
	v->a[47245] = anon_sym_SEMI_SEMI;
	v->a[47246] = anon_sym_AMP_AMP;
	v->a[47247] = anon_sym_PIPE_PIPE;
	v->a[47248] = anon_sym_LT;
	v->a[47249] = anon_sym_GT;
	v->a[47250] = anon_sym_GT_GT;
	v->a[47251] = anon_sym_AMP_GT;
	v->a[47252] = anon_sym_AMP_GT_GT;
	v->a[47253] = anon_sym_LT_AMP;
	v->a[47254] = anon_sym_GT_AMP;
	v->a[47255] = anon_sym_GT_PIPE;
	v->a[47256] = anon_sym_LT_AMP_DASH;
	v->a[47257] = anon_sym_GT_AMP_DASH;
	v->a[47258] = anon_sym_LT_LT;
	v->a[47259] = anon_sym_LT_LT_DASH;
	small_parse_table_2363(v);
}

void	small_parse_table_2363(t_small_parse_table_array *v)
{
	v->a[47260] = aux_sym_heredoc_redirect_token1;
	v->a[47261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47262] = anon_sym_AMP;
	v->a[47263] = anon_sym_DOLLAR;
	v->a[47264] = anon_sym_DQUOTE;
	v->a[47265] = sym_raw_string;
	v->a[47266] = sym_number;
	v->a[47267] = anon_sym_DOLLAR_LBRACE;
	v->a[47268] = anon_sym_DOLLAR_LPAREN;
	v->a[47269] = anon_sym_BQUOTE;
	v->a[47270] = sym_word;
	v->a[47271] = anon_sym_SEMI;
	v->a[47272] = 3;
	v->a[47273] = actions(3);
	v->a[47274] = 1;
	v->a[47275] = sym_comment;
	v->a[47276] = actions(1128);
	v->a[47277] = 3;
	v->a[47278] = sym_file_descriptor;
	v->a[47279] = sym__bare_dollar;
	small_parse_table_2364(v);
}

void	small_parse_table_2364(t_small_parse_table_array *v)
{
	v->a[47280] = ts_builtin_sym_end;
	v->a[47281] = actions(1130);
	v->a[47282] = 28;
	v->a[47283] = anon_sym_PIPE;
	v->a[47284] = anon_sym_SEMI_SEMI;
	v->a[47285] = anon_sym_AMP_AMP;
	v->a[47286] = anon_sym_PIPE_PIPE;
	v->a[47287] = anon_sym_LT;
	v->a[47288] = anon_sym_GT;
	v->a[47289] = anon_sym_GT_GT;
	v->a[47290] = anon_sym_AMP_GT;
	v->a[47291] = anon_sym_AMP_GT_GT;
	v->a[47292] = anon_sym_LT_AMP;
	v->a[47293] = anon_sym_GT_AMP;
	v->a[47294] = anon_sym_GT_PIPE;
	v->a[47295] = anon_sym_LT_AMP_DASH;
	v->a[47296] = anon_sym_GT_AMP_DASH;
	v->a[47297] = anon_sym_LT_LT;
	v->a[47298] = anon_sym_LT_LT_DASH;
	v->a[47299] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2365(v);
}

/* EOF small_parse_table_472.c */
