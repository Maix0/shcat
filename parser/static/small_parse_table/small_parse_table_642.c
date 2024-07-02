/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_642.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3210(t_small_parse_table_array *v)
{
	v->a[64200] = anon_sym_GT_PIPE;
	v->a[64201] = anon_sym_LT_GT;
	v->a[64202] = anon_sym_LT_LT;
	v->a[64203] = anon_sym_LT_LT_DASH;
	v->a[64204] = anon_sym_AMP;
	v->a[64205] = anon_sym_SEMI;
	v->a[64206] = 6;
	v->a[64207] = actions(3);
	v->a[64208] = 1;
	v->a[64209] = sym_comment;
	v->a[64210] = actions(1881);
	v->a[64211] = 1;
	v->a[64212] = aux_sym_concatenation_token1;
	v->a[64213] = actions(1904);
	v->a[64214] = 1;
	v->a[64215] = sym__concat;
	v->a[64216] = state(1233);
	v->a[64217] = 1;
	v->a[64218] = aux_sym_concatenation_repeat1;
	v->a[64219] = actions(1158);
	small_parse_table_3211(v);
}

void	small_parse_table_3211(t_small_parse_table_array *v)
{
	v->a[64220] = 3;
	v->a[64221] = sym_file_descriptor;
	v->a[64222] = sym_variable_name;
	v->a[64223] = aux_sym_heredoc_redirect_token1;
	v->a[64224] = actions(1154);
	v->a[64225] = 12;
	v->a[64226] = anon_sym_PIPE;
	v->a[64227] = anon_sym_AMP_AMP;
	v->a[64228] = anon_sym_PIPE_PIPE;
	v->a[64229] = anon_sym_LT;
	v->a[64230] = anon_sym_GT;
	v->a[64231] = anon_sym_GT_GT;
	v->a[64232] = anon_sym_LT_AMP;
	v->a[64233] = anon_sym_GT_AMP;
	v->a[64234] = anon_sym_GT_PIPE;
	v->a[64235] = anon_sym_LT_GT;
	v->a[64236] = anon_sym_LT_LT;
	v->a[64237] = anon_sym_LT_LT_DASH;
	v->a[64238] = 3;
	v->a[64239] = actions(3);
	small_parse_table_3212(v);
}

void	small_parse_table_3212(t_small_parse_table_array *v)
{
	v->a[64240] = 1;
	v->a[64241] = sym_comment;
	v->a[64242] = actions(1457);
	v->a[64243] = 2;
	v->a[64244] = sym_file_descriptor;
	v->a[64245] = aux_sym_heredoc_redirect_token1;
	v->a[64246] = actions(1459);
	v->a[64247] = 16;
	v->a[64248] = anon_sym_esac;
	v->a[64249] = anon_sym_PIPE;
	v->a[64250] = anon_sym_SEMI_SEMI;
	v->a[64251] = anon_sym_AMP_AMP;
	v->a[64252] = anon_sym_PIPE_PIPE;
	v->a[64253] = anon_sym_LT;
	v->a[64254] = anon_sym_GT;
	v->a[64255] = anon_sym_GT_GT;
	v->a[64256] = anon_sym_LT_AMP;
	v->a[64257] = anon_sym_GT_AMP;
	v->a[64258] = anon_sym_GT_PIPE;
	v->a[64259] = anon_sym_LT_GT;
	small_parse_table_3213(v);
}

void	small_parse_table_3213(t_small_parse_table_array *v)
{
	v->a[64260] = anon_sym_LT_LT;
	v->a[64261] = anon_sym_LT_LT_DASH;
	v->a[64262] = anon_sym_AMP;
	v->a[64263] = anon_sym_SEMI;
	v->a[64264] = 3;
	v->a[64265] = actions(3);
	v->a[64266] = 1;
	v->a[64267] = sym_comment;
	v->a[64268] = actions(1158);
	v->a[64269] = 2;
	v->a[64270] = sym_file_descriptor;
	v->a[64271] = sym_variable_name;
	v->a[64272] = actions(1154);
	v->a[64273] = 16;
	v->a[64274] = anon_sym_LT;
	v->a[64275] = anon_sym_GT;
	v->a[64276] = anon_sym_GT_GT;
	v->a[64277] = anon_sym_LT_AMP;
	v->a[64278] = anon_sym_GT_AMP;
	v->a[64279] = anon_sym_GT_PIPE;
	small_parse_table_3214(v);
}

void	small_parse_table_3214(t_small_parse_table_array *v)
{
	v->a[64280] = anon_sym_LT_GT;
	v->a[64281] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64282] = anon_sym_DOLLAR;
	v->a[64283] = anon_sym_DQUOTE;
	v->a[64284] = sym_raw_string;
	v->a[64285] = sym_number;
	v->a[64286] = anon_sym_DOLLAR_LBRACE;
	v->a[64287] = anon_sym_DOLLAR_LPAREN;
	v->a[64288] = anon_sym_BQUOTE;
	v->a[64289] = sym_word;
	v->a[64290] = 3;
	v->a[64291] = actions(3);
	v->a[64292] = 1;
	v->a[64293] = sym_comment;
	v->a[64294] = actions(1457);
	v->a[64295] = 2;
	v->a[64296] = sym_file_descriptor;
	v->a[64297] = aux_sym_heredoc_redirect_token1;
	v->a[64298] = actions(1459);
	v->a[64299] = 16;
	small_parse_table_3215(v);
}

/* EOF small_parse_table_642.c */
