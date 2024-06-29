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
	v->a[70200] = 1;
	v->a[70201] = sym_file_descriptor;
	v->a[70202] = actions(2352);
	v->a[70203] = 1;
	v->a[70204] = aux_sym_heredoc_redirect_token1;
	v->a[70205] = actions(2041);
	v->a[70206] = 2;
	v->a[70207] = anon_sym_LT_AMP_DASH;
	v->a[70208] = anon_sym_GT_AMP_DASH;
	v->a[70209] = state(1218);
	v->a[70210] = 2;
	v->a[70211] = sym_file_redirect;
	v->a[70212] = aux_sym_redirected_statement_repeat2;
	v->a[70213] = actions(2039);
	v->a[70214] = 8;
	v->a[70215] = anon_sym_LT;
	v->a[70216] = anon_sym_GT;
	v->a[70217] = anon_sym_GT_GT;
	v->a[70218] = anon_sym_AMP_GT;
	v->a[70219] = anon_sym_AMP_GT_GT;
	small_parse_table_3511(v);
}

void	small_parse_table_3511(t_small_parse_table_array *v)
{
	v->a[70220] = anon_sym_LT_AMP;
	v->a[70221] = anon_sym_GT_AMP;
	v->a[70222] = anon_sym_GT_PIPE;
	v->a[70223] = actions(2350);
	v->a[70224] = 9;
	v->a[70225] = anon_sym_PIPE;
	v->a[70226] = anon_sym_RPAREN;
	v->a[70227] = anon_sym_SEMI_SEMI;
	v->a[70228] = anon_sym_AMP_AMP;
	v->a[70229] = anon_sym_PIPE_PIPE;
	v->a[70230] = anon_sym_LT_LT;
	v->a[70231] = anon_sym_LT_LT_DASH;
	v->a[70232] = anon_sym_AMP;
	v->a[70233] = anon_sym_SEMI;
	v->a[70234] = 3;
	v->a[70235] = actions(3);
	v->a[70236] = 1;
	v->a[70237] = sym_comment;
	v->a[70238] = actions(2354);
	v->a[70239] = 3;
	small_parse_table_3512(v);
}

void	small_parse_table_3512(t_small_parse_table_array *v)
{
	v->a[70240] = sym_file_descriptor;
	v->a[70241] = ts_builtin_sym_end;
	v->a[70242] = aux_sym_heredoc_redirect_token1;
	v->a[70243] = actions(2356);
	v->a[70244] = 20;
	v->a[70245] = anon_sym_PIPE;
	v->a[70246] = anon_sym_RPAREN;
	v->a[70247] = anon_sym_SEMI_SEMI;
	v->a[70248] = anon_sym_AMP_AMP;
	v->a[70249] = anon_sym_PIPE_PIPE;
	v->a[70250] = anon_sym_LT;
	v->a[70251] = anon_sym_GT;
	v->a[70252] = anon_sym_GT_GT;
	v->a[70253] = anon_sym_AMP_GT;
	v->a[70254] = anon_sym_AMP_GT_GT;
	v->a[70255] = anon_sym_LT_AMP;
	v->a[70256] = anon_sym_GT_AMP;
	v->a[70257] = anon_sym_GT_PIPE;
	v->a[70258] = anon_sym_LT_AMP_DASH;
	v->a[70259] = anon_sym_GT_AMP_DASH;
	small_parse_table_3513(v);
}

void	small_parse_table_3513(t_small_parse_table_array *v)
{
	v->a[70260] = anon_sym_LT_LT;
	v->a[70261] = anon_sym_LT_LT_DASH;
	v->a[70262] = anon_sym_AMP;
	v->a[70263] = anon_sym_BQUOTE;
	v->a[70264] = anon_sym_SEMI;
	v->a[70265] = 3;
	v->a[70266] = actions(3);
	v->a[70267] = 1;
	v->a[70268] = sym_comment;
	v->a[70269] = actions(2358);
	v->a[70270] = 3;
	v->a[70271] = sym_file_descriptor;
	v->a[70272] = ts_builtin_sym_end;
	v->a[70273] = aux_sym_heredoc_redirect_token1;
	v->a[70274] = actions(2360);
	v->a[70275] = 20;
	v->a[70276] = anon_sym_PIPE;
	v->a[70277] = anon_sym_RPAREN;
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
	v->a[70294] = anon_sym_BQUOTE;
	v->a[70295] = anon_sym_SEMI;
	v->a[70296] = 3;
	v->a[70297] = actions(3);
	v->a[70298] = 1;
	v->a[70299] = sym_comment;
	small_parse_table_3515(v);
}

/* EOF small_parse_table_702.c */
