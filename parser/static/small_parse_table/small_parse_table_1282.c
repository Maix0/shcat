/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1282.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6410(t_small_parse_table_array *v)
{
	v->a[128200] = anon_sym_PIPE;
	v->a[128201] = anon_sym_LT;
	v->a[128202] = anon_sym_GT;
	v->a[128203] = anon_sym_AMP_GT;
	v->a[128204] = anon_sym_LT_AMP;
	v->a[128205] = anon_sym_GT_AMP;
	v->a[128206] = anon_sym_LT_LT;
	v->a[128207] = actions(6043);
	v->a[128208] = 10;
	v->a[128209] = sym_file_descriptor;
	v->a[128210] = anon_sym_PIPE_AMP;
	v->a[128211] = anon_sym_AMP_AMP;
	v->a[128212] = anon_sym_PIPE_PIPE;
	v->a[128213] = anon_sym_GT_GT;
	v->a[128214] = anon_sym_AMP_GT_GT;
	v->a[128215] = anon_sym_GT_PIPE;
	v->a[128216] = anon_sym_LT_AMP_DASH;
	v->a[128217] = anon_sym_GT_AMP_DASH;
	v->a[128218] = anon_sym_LT_LT_DASH;
	v->a[128219] = 3;
	small_parse_table_6411(v);
}

void	small_parse_table_6411(t_small_parse_table_array *v)
{
	v->a[128220] = actions(57);
	v->a[128221] = 1;
	v->a[128222] = sym_comment;
	v->a[128223] = actions(6067);
	v->a[128224] = 7;
	v->a[128225] = anon_sym_PIPE;
	v->a[128226] = anon_sym_LT;
	v->a[128227] = anon_sym_GT;
	v->a[128228] = anon_sym_AMP_GT;
	v->a[128229] = anon_sym_LT_AMP;
	v->a[128230] = anon_sym_GT_AMP;
	v->a[128231] = anon_sym_LT_LT;
	v->a[128232] = actions(6069);
	v->a[128233] = 10;
	v->a[128234] = sym_file_descriptor;
	v->a[128235] = anon_sym_PIPE_AMP;
	v->a[128236] = anon_sym_AMP_AMP;
	v->a[128237] = anon_sym_PIPE_PIPE;
	v->a[128238] = anon_sym_GT_GT;
	v->a[128239] = anon_sym_AMP_GT_GT;
	small_parse_table_6412(v);
}

void	small_parse_table_6412(t_small_parse_table_array *v)
{
	v->a[128240] = anon_sym_GT_PIPE;
	v->a[128241] = anon_sym_LT_AMP_DASH;
	v->a[128242] = anon_sym_GT_AMP_DASH;
	v->a[128243] = anon_sym_LT_LT_DASH;
	v->a[128244] = 3;
	v->a[128245] = actions(57);
	v->a[128246] = 1;
	v->a[128247] = sym_comment;
	v->a[128248] = actions(6091);
	v->a[128249] = 7;
	v->a[128250] = anon_sym_PIPE;
	v->a[128251] = anon_sym_LT;
	v->a[128252] = anon_sym_GT;
	v->a[128253] = anon_sym_AMP_GT;
	v->a[128254] = anon_sym_LT_AMP;
	v->a[128255] = anon_sym_GT_AMP;
	v->a[128256] = anon_sym_LT_LT;
	v->a[128257] = actions(6089);
	v->a[128258] = 10;
	v->a[128259] = sym_file_descriptor;
	small_parse_table_6413(v);
}

void	small_parse_table_6413(t_small_parse_table_array *v)
{
	v->a[128260] = anon_sym_PIPE_AMP;
	v->a[128261] = anon_sym_AMP_AMP;
	v->a[128262] = anon_sym_PIPE_PIPE;
	v->a[128263] = anon_sym_GT_GT;
	v->a[128264] = anon_sym_AMP_GT_GT;
	v->a[128265] = anon_sym_GT_PIPE;
	v->a[128266] = anon_sym_LT_AMP_DASH;
	v->a[128267] = anon_sym_GT_AMP_DASH;
	v->a[128268] = anon_sym_LT_LT_DASH;
	v->a[128269] = 8;
	v->a[128270] = actions(3);
	v->a[128271] = 1;
	v->a[128272] = sym_comment;
	v->a[128273] = actions(2478);
	v->a[128274] = 1;
	v->a[128275] = sym_file_descriptor;
	v->a[128276] = actions(7370);
	v->a[128277] = 1;
	v->a[128278] = aux_sym_heredoc_redirect_token1;
	v->a[128279] = state(3736);
	small_parse_table_6414(v);
}

void	small_parse_table_6414(t_small_parse_table_array *v)
{
	v->a[128280] = 1;
	v->a[128281] = sym__heredoc_expression;
	v->a[128282] = actions(2450);
	v->a[128283] = 2;
	v->a[128284] = anon_sym_AMP_AMP;
	v->a[128285] = anon_sym_PIPE_PIPE;
	v->a[128286] = actions(2454);
	v->a[128287] = 2;
	v->a[128288] = anon_sym_LT_AMP_DASH;
	v->a[128289] = anon_sym_GT_AMP_DASH;
	v->a[128290] = state(2874);
	v->a[128291] = 2;
	v->a[128292] = sym_file_redirect;
	v->a[128293] = aux_sym_redirected_statement_repeat2;
	v->a[128294] = actions(2452);
	v->a[128295] = 8;
	v->a[128296] = anon_sym_LT;
	v->a[128297] = anon_sym_GT;
	v->a[128298] = anon_sym_GT_GT;
	v->a[128299] = anon_sym_AMP_GT;
	small_parse_table_6415(v);
}

/* EOF small_parse_table_1282.c */
