/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_182.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_910(t_small_parse_table_array *v)
{
	v->a[18200] = anon_sym_DOLLAR_LPAREN;
	v->a[18201] = anon_sym_BQUOTE;
	v->a[18202] = sym_word;
	v->a[18203] = anon_sym_SEMI;
	v->a[18204] = 6;
	v->a[18205] = actions(3);
	v->a[18206] = 1;
	v->a[18207] = sym_comment;
	v->a[18208] = actions(375);
	v->a[18209] = 1;
	v->a[18210] = sym_variable_name;
	v->a[18211] = actions(373);
	v->a[18212] = 2;
	v->a[18213] = aux_sym__simple_variable_name_token1;
	v->a[18214] = aux_sym__multiline_variable_name_token1;
	v->a[18215] = actions(367);
	v->a[18216] = 3;
	v->a[18217] = sym_file_descriptor;
	v->a[18218] = sym__bare_dollar;
	v->a[18219] = ts_builtin_sym_end;
	small_parse_table_911(v);
}

void	small_parse_table_911(t_small_parse_table_array *v)
{
	v->a[18220] = actions(371);
	v->a[18221] = 9;
	v->a[18222] = anon_sym_BANG;
	v->a[18223] = anon_sym_DASH;
	v->a[18224] = anon_sym_STAR;
	v->a[18225] = anon_sym_QMARK;
	v->a[18226] = anon_sym_DOLLAR;
	v->a[18227] = anon_sym_POUND;
	v->a[18228] = anon_sym_AT;
	v->a[18229] = anon_sym_0;
	v->a[18230] = anon_sym__;
	v->a[18231] = actions(361);
	v->a[18232] = 25;
	v->a[18233] = anon_sym_LPAREN;
	v->a[18234] = anon_sym_PIPE;
	v->a[18235] = anon_sym_SEMI_SEMI;
	v->a[18236] = anon_sym_AMP_AMP;
	v->a[18237] = anon_sym_PIPE_PIPE;
	v->a[18238] = anon_sym_LT;
	v->a[18239] = anon_sym_GT;
	small_parse_table_912(v);
}

void	small_parse_table_912(t_small_parse_table_array *v)
{
	v->a[18240] = anon_sym_GT_GT;
	v->a[18241] = anon_sym_LT_AMP;
	v->a[18242] = anon_sym_GT_AMP;
	v->a[18243] = anon_sym_GT_PIPE;
	v->a[18244] = anon_sym_LT_GT;
	v->a[18245] = anon_sym_LT_LT;
	v->a[18246] = anon_sym_LT_LT_DASH;
	v->a[18247] = aux_sym_heredoc_redirect_token1;
	v->a[18248] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18249] = anon_sym_AMP;
	v->a[18250] = anon_sym_DQUOTE;
	v->a[18251] = sym_raw_string;
	v->a[18252] = sym_number;
	v->a[18253] = anon_sym_DOLLAR_LBRACE;
	v->a[18254] = anon_sym_DOLLAR_LPAREN;
	v->a[18255] = anon_sym_BQUOTE;
	v->a[18256] = sym_word;
	v->a[18257] = anon_sym_SEMI;
	v->a[18258] = 6;
	v->a[18259] = actions(3);
	small_parse_table_913(v);
}

void	small_parse_table_913(t_small_parse_table_array *v)
{
	v->a[18260] = 1;
	v->a[18261] = sym_comment;
	v->a[18262] = actions(381);
	v->a[18263] = 1;
	v->a[18264] = sym_variable_name;
	v->a[18265] = actions(367);
	v->a[18266] = 2;
	v->a[18267] = sym_file_descriptor;
	v->a[18268] = sym__bare_dollar;
	v->a[18269] = actions(379);
	v->a[18270] = 2;
	v->a[18271] = aux_sym__simple_variable_name_token1;
	v->a[18272] = aux_sym__multiline_variable_name_token1;
	v->a[18273] = actions(377);
	v->a[18274] = 9;
	v->a[18275] = anon_sym_BANG;
	v->a[18276] = anon_sym_DASH;
	v->a[18277] = anon_sym_STAR;
	v->a[18278] = anon_sym_QMARK;
	v->a[18279] = anon_sym_DOLLAR;
	small_parse_table_914(v);
}

void	small_parse_table_914(t_small_parse_table_array *v)
{
	v->a[18280] = anon_sym_POUND;
	v->a[18281] = anon_sym_AT;
	v->a[18282] = anon_sym_0;
	v->a[18283] = anon_sym__;
	v->a[18284] = actions(361);
	v->a[18285] = 26;
	v->a[18286] = anon_sym_LPAREN;
	v->a[18287] = anon_sym_PIPE;
	v->a[18288] = anon_sym_RPAREN;
	v->a[18289] = anon_sym_SEMI_SEMI;
	v->a[18290] = anon_sym_AMP_AMP;
	v->a[18291] = anon_sym_PIPE_PIPE;
	v->a[18292] = anon_sym_LT;
	v->a[18293] = anon_sym_GT;
	v->a[18294] = anon_sym_GT_GT;
	v->a[18295] = anon_sym_LT_AMP;
	v->a[18296] = anon_sym_GT_AMP;
	v->a[18297] = anon_sym_GT_PIPE;
	v->a[18298] = anon_sym_LT_GT;
	v->a[18299] = anon_sym_LT_LT;
	small_parse_table_915(v);
}

/* EOF small_parse_table_182.c */
