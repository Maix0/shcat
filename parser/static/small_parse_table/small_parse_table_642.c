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
	v->a[64200] = actions(1002);
	v->a[64201] = 1;
	v->a[64202] = anon_sym_PIPE;
	v->a[64203] = actions(2310);
	v->a[64204] = 1;
	v->a[64205] = sym_file_descriptor;
	v->a[64206] = actions(2316);
	v->a[64207] = 1;
	v->a[64208] = aux_sym_heredoc_redirect_token1;
	v->a[64209] = actions(1033);
	v->a[64210] = 2;
	v->a[64211] = anon_sym_esac;
	v->a[64212] = anon_sym_SEMI_SEMI;
	v->a[64213] = actions(1035);
	v->a[64214] = 2;
	v->a[64215] = anon_sym_AMP_AMP;
	v->a[64216] = anon_sym_PIPE_PIPE;
	v->a[64217] = actions(1037);
	v->a[64218] = 2;
	v->a[64219] = anon_sym_LT_LT;
	small_parse_table_3211(v);
}

void	small_parse_table_3211(t_small_parse_table_array *v)
{
	v->a[64220] = anon_sym_LT_LT_DASH;
	v->a[64221] = actions(1039);
	v->a[64222] = 2;
	v->a[64223] = anon_sym_AMP;
	v->a[64224] = anon_sym_SEMI;
	v->a[64225] = actions(2306);
	v->a[64226] = 2;
	v->a[64227] = anon_sym_LT_AMP_DASH;
	v->a[64228] = anon_sym_GT_AMP_DASH;
	v->a[64229] = state(1035);
	v->a[64230] = 3;
	v->a[64231] = sym_file_redirect;
	v->a[64232] = sym_heredoc_redirect;
	v->a[64233] = aux_sym_redirected_statement_repeat1;
	v->a[64234] = actions(2304);
	v->a[64235] = 8;
	v->a[64236] = anon_sym_LT;
	v->a[64237] = anon_sym_GT;
	v->a[64238] = anon_sym_GT_GT;
	v->a[64239] = anon_sym_AMP_GT;
	small_parse_table_3212(v);
}

void	small_parse_table_3212(t_small_parse_table_array *v)
{
	v->a[64240] = anon_sym_AMP_GT_GT;
	v->a[64241] = anon_sym_LT_AMP;
	v->a[64242] = anon_sym_GT_AMP;
	v->a[64243] = anon_sym_GT_PIPE;
	v->a[64244] = 5;
	v->a[64245] = actions(3);
	v->a[64246] = 1;
	v->a[64247] = sym_comment;
	v->a[64248] = actions(1006);
	v->a[64249] = 1;
	v->a[64250] = sym_file_descriptor;
	v->a[64251] = actions(1831);
	v->a[64252] = 1;
	v->a[64253] = sym_variable_name;
	v->a[64254] = state(1346);
	v->a[64255] = 2;
	v->a[64256] = sym_variable_assignment;
	v->a[64257] = aux_sym_variable_assignments_repeat1;
	v->a[64258] = actions(1000);
	v->a[64259] = 20;
	small_parse_table_3213(v);
}

void	small_parse_table_3213(t_small_parse_table_array *v)
{
	v->a[64260] = anon_sym_LT;
	v->a[64261] = anon_sym_GT;
	v->a[64262] = anon_sym_GT_GT;
	v->a[64263] = anon_sym_AMP_GT;
	v->a[64264] = anon_sym_AMP_GT_GT;
	v->a[64265] = anon_sym_LT_AMP;
	v->a[64266] = anon_sym_GT_AMP;
	v->a[64267] = anon_sym_GT_PIPE;
	v->a[64268] = anon_sym_LT_AMP_DASH;
	v->a[64269] = anon_sym_GT_AMP_DASH;
	v->a[64270] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64271] = anon_sym_DOLLAR;
	v->a[64272] = anon_sym_DQUOTE;
	v->a[64273] = sym_raw_string;
	v->a[64274] = aux_sym_number_token1;
	v->a[64275] = aux_sym_number_token2;
	v->a[64276] = anon_sym_DOLLAR_LBRACE;
	v->a[64277] = anon_sym_DOLLAR_LPAREN;
	v->a[64278] = anon_sym_BQUOTE;
	v->a[64279] = sym_word;
	small_parse_table_3214(v);
}

void	small_parse_table_3214(t_small_parse_table_array *v)
{
	v->a[64280] = 6;
	v->a[64281] = actions(3);
	v->a[64282] = 1;
	v->a[64283] = sym_comment;
	v->a[64284] = actions(2199);
	v->a[64285] = 1;
	v->a[64286] = aux_sym_concatenation_token1;
	v->a[64287] = actions(2201);
	v->a[64288] = 1;
	v->a[64289] = sym__concat;
	v->a[64290] = state(1036);
	v->a[64291] = 1;
	v->a[64292] = aux_sym_concatenation_repeat1;
	v->a[64293] = actions(1202);
	v->a[64294] = 3;
	v->a[64295] = sym_file_descriptor;
	v->a[64296] = sym_variable_name;
	v->a[64297] = aux_sym_heredoc_redirect_token1;
	v->a[64298] = actions(1198);
	v->a[64299] = 18;
	small_parse_table_3215(v);
}

/* EOF small_parse_table_642.c */
