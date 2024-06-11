/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_782.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3910(t_small_parse_table_array *v)
{
	v->a[78200] = anon_sym_GT_AMP;
	v->a[78201] = anon_sym_GT_PIPE;
	v->a[78202] = 9;
	v->a[78203] = actions(3);
	v->a[78204] = 1;
	v->a[78205] = sym_comment;
	v->a[78206] = actions(2602);
	v->a[78207] = 1;
	v->a[78208] = sym_file_descriptor;
	v->a[78209] = actions(2864);
	v->a[78210] = 1;
	v->a[78211] = aux_sym_heredoc_redirect_token1;
	v->a[78212] = actions(861);
	v->a[78213] = 2;
	v->a[78214] = anon_sym_LT_LT;
	v->a[78215] = anon_sym_LT_LT_DASH;
	v->a[78216] = actions(965);
	v->a[78217] = 2;
	v->a[78218] = anon_sym_AMP_AMP;
	v->a[78219] = anon_sym_PIPE_PIPE;
	small_parse_table_3911(v);
}

void	small_parse_table_3911(t_small_parse_table_array *v)
{
	v->a[78220] = actions(2598);
	v->a[78221] = 2;
	v->a[78222] = anon_sym_LT_AMP_DASH;
	v->a[78223] = anon_sym_GT_AMP_DASH;
	v->a[78224] = actions(1053);
	v->a[78225] = 3;
	v->a[78226] = anon_sym_SEMI_SEMI;
	v->a[78227] = anon_sym_AMP;
	v->a[78228] = anon_sym_SEMI;
	v->a[78229] = state(1322);
	v->a[78230] = 3;
	v->a[78231] = sym_file_redirect;
	v->a[78232] = sym_heredoc_redirect;
	v->a[78233] = aux_sym_redirected_statement_repeat1;
	v->a[78234] = actions(2596);
	v->a[78235] = 8;
	v->a[78236] = anon_sym_LT;
	v->a[78237] = anon_sym_GT;
	v->a[78238] = anon_sym_GT_GT;
	v->a[78239] = anon_sym_AMP_GT;
	small_parse_table_3912(v);
}

void	small_parse_table_3912(t_small_parse_table_array *v)
{
	v->a[78240] = anon_sym_AMP_GT_GT;
	v->a[78241] = anon_sym_LT_AMP;
	v->a[78242] = anon_sym_GT_AMP;
	v->a[78243] = anon_sym_GT_PIPE;
	v->a[78244] = 5;
	v->a[78245] = actions(3);
	v->a[78246] = 1;
	v->a[78247] = sym_comment;
	v->a[78248] = actions(2897);
	v->a[78249] = 1;
	v->a[78250] = anon_sym_PIPE;
	v->a[78251] = state(1442);
	v->a[78252] = 1;
	v->a[78253] = aux_sym_pipeline_repeat1;
	v->a[78254] = actions(2880);
	v->a[78255] = 2;
	v->a[78256] = sym_file_descriptor;
	v->a[78257] = aux_sym_heredoc_redirect_token1;
	v->a[78258] = actions(2878);
	v->a[78259] = 18;
	small_parse_table_3913(v);
}

void	small_parse_table_3913(t_small_parse_table_array *v)
{
	v->a[78260] = anon_sym_esac;
	v->a[78261] = anon_sym_SEMI_SEMI;
	v->a[78262] = anon_sym_AMP_AMP;
	v->a[78263] = anon_sym_PIPE_PIPE;
	v->a[78264] = anon_sym_LT;
	v->a[78265] = anon_sym_GT;
	v->a[78266] = anon_sym_GT_GT;
	v->a[78267] = anon_sym_AMP_GT;
	v->a[78268] = anon_sym_AMP_GT_GT;
	v->a[78269] = anon_sym_LT_AMP;
	v->a[78270] = anon_sym_GT_AMP;
	v->a[78271] = anon_sym_GT_PIPE;
	v->a[78272] = anon_sym_LT_AMP_DASH;
	v->a[78273] = anon_sym_GT_AMP_DASH;
	v->a[78274] = anon_sym_LT_LT;
	v->a[78275] = anon_sym_LT_LT_DASH;
	v->a[78276] = anon_sym_AMP;
	v->a[78277] = anon_sym_SEMI;
	v->a[78278] = 16;
	v->a[78279] = actions(3);
	small_parse_table_3914(v);
}

void	small_parse_table_3914(t_small_parse_table_array *v)
{
	v->a[78280] = 1;
	v->a[78281] = sym_comment;
	v->a[78282] = actions(1959);
	v->a[78283] = 1;
	v->a[78284] = anon_sym_LPAREN;
	v->a[78285] = actions(1963);
	v->a[78286] = 1;
	v->a[78287] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78288] = actions(1965);
	v->a[78289] = 1;
	v->a[78290] = anon_sym_DOLLAR;
	v->a[78291] = actions(1967);
	v->a[78292] = 1;
	v->a[78293] = anon_sym_DQUOTE;
	v->a[78294] = actions(1969);
	v->a[78295] = 1;
	v->a[78296] = anon_sym_DOLLAR_LBRACE;
	v->a[78297] = actions(1971);
	v->a[78298] = 1;
	v->a[78299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3915(v);
}

/* EOF small_parse_table_782.c */
