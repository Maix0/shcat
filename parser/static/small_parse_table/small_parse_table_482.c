/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_482.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2410(t_small_parse_table_array *v)
{
	v->a[48200] = 2;
	v->a[48201] = anon_sym_GT_GT;
	v->a[48202] = anon_sym_LT_LT;
	v->a[48203] = actions(1412);
	v->a[48204] = 2;
	v->a[48205] = anon_sym_LT_EQ;
	v->a[48206] = anon_sym_GT_EQ;
	v->a[48207] = actions(1414);
	v->a[48208] = 2;
	v->a[48209] = anon_sym_PLUS;
	v->a[48210] = anon_sym_DASH;
	v->a[48211] = actions(1416);
	v->a[48212] = 2;
	v->a[48213] = anon_sym_EQ_EQ;
	v->a[48214] = anon_sym_BANG_EQ;
	v->a[48215] = actions(1406);
	v->a[48216] = 3;
	v->a[48217] = anon_sym_STAR;
	v->a[48218] = anon_sym_SLASH;
	v->a[48219] = anon_sym_PERCENT;
	small_parse_table_2411(v);
}

void	small_parse_table_2411(t_small_parse_table_array *v)
{
	v->a[48220] = actions(1543);
	v->a[48221] = 10;
	v->a[48222] = anon_sym_PLUS_EQ;
	v->a[48223] = anon_sym_DASH_EQ;
	v->a[48224] = anon_sym_STAR_EQ;
	v->a[48225] = anon_sym_SLASH_EQ;
	v->a[48226] = anon_sym_PERCENT_EQ;
	v->a[48227] = anon_sym_LT_LT_EQ;
	v->a[48228] = anon_sym_GT_GT_EQ;
	v->a[48229] = anon_sym_AMP_EQ;
	v->a[48230] = anon_sym_CARET_EQ;
	v->a[48231] = anon_sym_PIPE_EQ;
	v->a[48232] = 6;
	v->a[48233] = actions(3);
	v->a[48234] = 1;
	v->a[48235] = sym_comment;
	v->a[48236] = actions(1159);
	v->a[48237] = 1;
	v->a[48238] = aux_sym_concatenation_token1;
	v->a[48239] = actions(1161);
	small_parse_table_2412(v);
}

void	small_parse_table_2412(t_small_parse_table_array *v)
{
	v->a[48240] = 1;
	v->a[48241] = sym__concat;
	v->a[48242] = state(741);
	v->a[48243] = 1;
	v->a[48244] = aux_sym_concatenation_repeat1;
	v->a[48245] = actions(1108);
	v->a[48246] = 2;
	v->a[48247] = sym_file_descriptor;
	v->a[48248] = sym__bare_dollar;
	v->a[48249] = actions(1104);
	v->a[48250] = 27;
	v->a[48251] = anon_sym_LPAREN;
	v->a[48252] = anon_sym_PIPE;
	v->a[48253] = anon_sym_AMP_AMP;
	v->a[48254] = anon_sym_PIPE_PIPE;
	v->a[48255] = anon_sym_LT;
	v->a[48256] = anon_sym_GT;
	v->a[48257] = anon_sym_GT_GT;
	v->a[48258] = anon_sym_AMP_GT;
	v->a[48259] = anon_sym_AMP_GT_GT;
	small_parse_table_2413(v);
}

void	small_parse_table_2413(t_small_parse_table_array *v)
{
	v->a[48260] = anon_sym_LT_AMP;
	v->a[48261] = anon_sym_GT_AMP;
	v->a[48262] = anon_sym_GT_PIPE;
	v->a[48263] = anon_sym_LT_AMP_DASH;
	v->a[48264] = anon_sym_GT_AMP_DASH;
	v->a[48265] = anon_sym_LT_LT;
	v->a[48266] = anon_sym_LT_LT_DASH;
	v->a[48267] = aux_sym_heredoc_redirect_token1;
	v->a[48268] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48269] = anon_sym_DOLLAR;
	v->a[48270] = anon_sym_DQUOTE;
	v->a[48271] = sym_raw_string;
	v->a[48272] = aux_sym_number_token1;
	v->a[48273] = aux_sym_number_token2;
	v->a[48274] = anon_sym_DOLLAR_LBRACE;
	v->a[48275] = anon_sym_DOLLAR_LPAREN;
	v->a[48276] = anon_sym_BQUOTE;
	v->a[48277] = sym_word;
	v->a[48278] = 7;
	v->a[48279] = actions(3);
	small_parse_table_2414(v);
}

void	small_parse_table_2414(t_small_parse_table_array *v)
{
	v->a[48280] = 1;
	v->a[48281] = sym_comment;
	v->a[48282] = actions(1700);
	v->a[48283] = 1;
	v->a[48284] = anon_sym_RPAREN;
	v->a[48285] = actions(1706);
	v->a[48286] = 1;
	v->a[48287] = sym_file_descriptor;
	v->a[48288] = actions(1709);
	v->a[48289] = 1;
	v->a[48290] = sym_variable_name;
	v->a[48291] = actions(1698);
	v->a[48292] = 9;
	v->a[48293] = anon_sym_PIPE;
	v->a[48294] = anon_sym_SEMI_SEMI;
	v->a[48295] = anon_sym_AMP_AMP;
	v->a[48296] = anon_sym_PIPE_PIPE;
	v->a[48297] = anon_sym_LT_LT;
	v->a[48298] = anon_sym_LT_LT_DASH;
	v->a[48299] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2415(v);
}

/* EOF small_parse_table_482.c */
