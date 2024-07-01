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
	v->a[48200] = anon_sym_BQUOTE;
	v->a[48201] = sym_word;
	v->a[48202] = anon_sym_SEMI;
	v->a[48203] = 7;
	v->a[48204] = actions(3);
	v->a[48205] = 1;
	v->a[48206] = sym_comment;
	v->a[48207] = actions(1530);
	v->a[48208] = 1;
	v->a[48209] = sym_file_descriptor;
	v->a[48210] = actions(1533);
	v->a[48211] = 1;
	v->a[48212] = sym_variable_name;
	v->a[48213] = actions(1669);
	v->a[48214] = 1;
	v->a[48215] = anon_sym_RPAREN;
	v->a[48216] = actions(1527);
	v->a[48217] = 8;
	v->a[48218] = anon_sym_LT;
	v->a[48219] = anon_sym_GT;
	small_parse_table_2411(v);
}

void	small_parse_table_2411(t_small_parse_table_array *v)
{
	v->a[48220] = anon_sym_GT_GT;
	v->a[48221] = anon_sym_LT_AMP;
	v->a[48222] = anon_sym_GT_AMP;
	v->a[48223] = anon_sym_GT_PIPE;
	v->a[48224] = anon_sym_LT_AMP_DASH;
	v->a[48225] = anon_sym_GT_AMP_DASH;
	v->a[48226] = actions(1520);
	v->a[48227] = 9;
	v->a[48228] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48229] = anon_sym_DOLLAR;
	v->a[48230] = anon_sym_DQUOTE;
	v->a[48231] = sym_raw_string;
	v->a[48232] = sym_number;
	v->a[48233] = anon_sym_DOLLAR_LBRACE;
	v->a[48234] = anon_sym_DOLLAR_LPAREN;
	v->a[48235] = anon_sym_BQUOTE;
	v->a[48236] = sym_word;
	v->a[48237] = actions(1522);
	v->a[48238] = 9;
	v->a[48239] = anon_sym_PIPE;
	small_parse_table_2412(v);
}

void	small_parse_table_2412(t_small_parse_table_array *v)
{
	v->a[48240] = anon_sym_SEMI_SEMI;
	v->a[48241] = anon_sym_AMP_AMP;
	v->a[48242] = anon_sym_PIPE_PIPE;
	v->a[48243] = anon_sym_LT_LT;
	v->a[48244] = anon_sym_LT_LT_DASH;
	v->a[48245] = aux_sym_heredoc_redirect_token1;
	v->a[48246] = anon_sym_AMP;
	v->a[48247] = anon_sym_SEMI;
	v->a[48248] = 4;
	v->a[48249] = actions(3);
	v->a[48250] = 1;
	v->a[48251] = sym_comment;
	v->a[48252] = actions(1575);
	v->a[48253] = 2;
	v->a[48254] = anon_sym_RPAREN;
	v->a[48255] = anon_sym_SEMI_SEMI;
	v->a[48256] = actions(1577);
	v->a[48257] = 2;
	v->a[48258] = sym_file_descriptor;
	v->a[48259] = sym_variable_name;
	small_parse_table_2413(v);
}

void	small_parse_table_2413(t_small_parse_table_array *v)
{
	v->a[48260] = actions(1573);
	v->a[48261] = 25;
	v->a[48262] = anon_sym_for;
	v->a[48263] = anon_sym_while;
	v->a[48264] = anon_sym_until;
	v->a[48265] = anon_sym_if;
	v->a[48266] = anon_sym_case;
	v->a[48267] = anon_sym_LPAREN;
	v->a[48268] = anon_sym_LBRACE;
	v->a[48269] = anon_sym_BANG;
	v->a[48270] = anon_sym_LT;
	v->a[48271] = anon_sym_GT;
	v->a[48272] = anon_sym_GT_GT;
	v->a[48273] = anon_sym_LT_AMP;
	v->a[48274] = anon_sym_GT_AMP;
	v->a[48275] = anon_sym_GT_PIPE;
	v->a[48276] = anon_sym_LT_AMP_DASH;
	v->a[48277] = anon_sym_GT_AMP_DASH;
	v->a[48278] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48279] = anon_sym_DOLLAR;
	small_parse_table_2414(v);
}

void	small_parse_table_2414(t_small_parse_table_array *v)
{
	v->a[48280] = anon_sym_DQUOTE;
	v->a[48281] = sym_raw_string;
	v->a[48282] = sym_number;
	v->a[48283] = anon_sym_DOLLAR_LBRACE;
	v->a[48284] = anon_sym_DOLLAR_LPAREN;
	v->a[48285] = anon_sym_BQUOTE;
	v->a[48286] = sym_word;
	v->a[48287] = 4;
	v->a[48288] = actions(3);
	v->a[48289] = 1;
	v->a[48290] = sym_comment;
	v->a[48291] = actions(1575);
	v->a[48292] = 2;
	v->a[48293] = anon_sym_RPAREN;
	v->a[48294] = anon_sym_SEMI_SEMI;
	v->a[48295] = actions(1577);
	v->a[48296] = 2;
	v->a[48297] = sym_file_descriptor;
	v->a[48298] = sym_variable_name;
	v->a[48299] = actions(1573);
	small_parse_table_2415(v);
}

/* EOF small_parse_table_482.c */
