/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_702.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3510(t_small_parse_table_array *v)
{
	v->a[70200] = anon_sym_GT_AMP_DASH;
	v->a[70201] = state(1198);
	v->a[70202] = 2;
	v->a[70203] = sym_file_redirect;
	v->a[70204] = aux_sym_redirected_statement_repeat2;
	v->a[70205] = actions(2406);
	v->a[70206] = 8;
	v->a[70207] = anon_sym_PIPE;
	v->a[70208] = anon_sym_SEMI_SEMI;
	v->a[70209] = anon_sym_AMP_AMP;
	v->a[70210] = anon_sym_PIPE_PIPE;
	v->a[70211] = anon_sym_LT_LT;
	v->a[70212] = anon_sym_LT_LT_DASH;
	v->a[70213] = anon_sym_AMP;
	v->a[70214] = anon_sym_SEMI;
	v->a[70215] = actions(2601);
	v->a[70216] = 8;
	v->a[70217] = anon_sym_LT;
	v->a[70218] = anon_sym_GT;
	v->a[70219] = anon_sym_GT_GT;
	small_parse_table_3511(v);
}

void	small_parse_table_3511(t_small_parse_table_array *v)
{
	v->a[70220] = anon_sym_AMP_GT;
	v->a[70221] = anon_sym_AMP_GT_GT;
	v->a[70222] = anon_sym_LT_AMP;
	v->a[70223] = anon_sym_GT_AMP;
	v->a[70224] = anon_sym_GT_PIPE;
	v->a[70225] = 6;
	v->a[70226] = actions(3);
	v->a[70227] = 1;
	v->a[70228] = sym_comment;
	v->a[70229] = actions(2261);
	v->a[70230] = 1;
	v->a[70231] = aux_sym_concatenation_token1;
	v->a[70232] = actions(2263);
	v->a[70233] = 1;
	v->a[70234] = sym__concat;
	v->a[70235] = state(1107);
	v->a[70236] = 1;
	v->a[70237] = aux_sym_concatenation_repeat1;
	v->a[70238] = actions(555);
	v->a[70239] = 2;
	small_parse_table_3512(v);
}

void	small_parse_table_3512(t_small_parse_table_array *v)
{
	v->a[70240] = sym_file_descriptor;
	v->a[70241] = aux_sym_heredoc_redirect_token1;
	v->a[70242] = actions(553);
	v->a[70243] = 18;
	v->a[70244] = anon_sym_PIPE;
	v->a[70245] = anon_sym_SEMI_SEMI;
	v->a[70246] = anon_sym_AMP_AMP;
	v->a[70247] = anon_sym_PIPE_PIPE;
	v->a[70248] = anon_sym_LT;
	v->a[70249] = anon_sym_GT;
	v->a[70250] = anon_sym_GT_GT;
	v->a[70251] = anon_sym_AMP_GT;
	v->a[70252] = anon_sym_AMP_GT_GT;
	v->a[70253] = anon_sym_LT_AMP;
	v->a[70254] = anon_sym_GT_AMP;
	v->a[70255] = anon_sym_GT_PIPE;
	v->a[70256] = anon_sym_LT_AMP_DASH;
	v->a[70257] = anon_sym_GT_AMP_DASH;
	v->a[70258] = anon_sym_LT_LT;
	v->a[70259] = anon_sym_LT_LT_DASH;
	small_parse_table_3513(v);
}

void	small_parse_table_3513(t_small_parse_table_array *v)
{
	v->a[70260] = anon_sym_AMP;
	v->a[70261] = anon_sym_SEMI;
	v->a[70262] = 4;
	v->a[70263] = actions(3);
	v->a[70264] = 1;
	v->a[70265] = sym_comment;
	v->a[70266] = actions(1071);
	v->a[70267] = 2;
	v->a[70268] = sym_file_descriptor;
	v->a[70269] = aux_sym_heredoc_redirect_token1;
	v->a[70270] = state(1160);
	v->a[70271] = 3;
	v->a[70272] = sym_file_redirect;
	v->a[70273] = sym_heredoc_redirect;
	v->a[70274] = aux_sym_redirected_statement_repeat1;
	v->a[70275] = actions(1004);
	v->a[70276] = 18;
	v->a[70277] = anon_sym_PIPE;
	v->a[70278] = anon_sym_SEMI_SEMI;
	v->a[70279] = anon_sym_AMP_AMP;
	small_parse_table_3514(v);
}

void	small_parse_table_3514(t_small_parse_table_array *v)
{
	v->a[70280] = anon_sym_PIPE_PIPE;
	v->a[70281] = anon_sym_LT;
	v->a[70282] = anon_sym_GT;
	v->a[70283] = anon_sym_GT_GT;
	v->a[70284] = anon_sym_AMP_GT;
	v->a[70285] = anon_sym_AMP_GT_GT;
	v->a[70286] = anon_sym_LT_AMP;
	v->a[70287] = anon_sym_GT_AMP;
	v->a[70288] = anon_sym_GT_PIPE;
	v->a[70289] = anon_sym_LT_AMP_DASH;
	v->a[70290] = anon_sym_GT_AMP_DASH;
	v->a[70291] = anon_sym_LT_LT;
	v->a[70292] = anon_sym_LT_LT_DASH;
	v->a[70293] = anon_sym_AMP;
	v->a[70294] = anon_sym_SEMI;
	v->a[70295] = 10;
	v->a[70296] = actions(3);
	v->a[70297] = 1;
	v->a[70298] = sym_comment;
	v->a[70299] = actions(1067);
	small_parse_table_3515(v);
}

/* EOF small_parse_table_702.c */
