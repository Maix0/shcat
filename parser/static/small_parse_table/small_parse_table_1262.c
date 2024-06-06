/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1262.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6310(t_small_parse_table_array *v)
{
	v->a[126200] = anon_sym_LT_LT_DASH;
	v->a[126201] = actions(7141);
	v->a[126202] = 5;
	v->a[126203] = anon_sym_LT;
	v->a[126204] = anon_sym_GT;
	v->a[126205] = anon_sym_AMP_GT;
	v->a[126206] = anon_sym_LT_AMP;
	v->a[126207] = anon_sym_GT_AMP;
	v->a[126208] = 3;
	v->a[126209] = actions(57);
	v->a[126210] = 1;
	v->a[126211] = sym_comment;
	v->a[126212] = actions(2965);
	v->a[126213] = 7;
	v->a[126214] = anon_sym_PIPE;
	v->a[126215] = anon_sym_LT;
	v->a[126216] = anon_sym_GT;
	v->a[126217] = anon_sym_AMP_GT;
	v->a[126218] = anon_sym_LT_AMP;
	v->a[126219] = anon_sym_GT_AMP;
	small_parse_table_6311(v);
}

void	small_parse_table_6311(t_small_parse_table_array *v)
{
	v->a[126220] = anon_sym_LT_LT;
	v->a[126221] = actions(2967);
	v->a[126222] = 12;
	v->a[126223] = sym_file_descriptor;
	v->a[126224] = sym__concat;
	v->a[126225] = anon_sym_PIPE_AMP;
	v->a[126226] = anon_sym_AMP_AMP;
	v->a[126227] = anon_sym_PIPE_PIPE;
	v->a[126228] = anon_sym_GT_GT;
	v->a[126229] = anon_sym_AMP_GT_GT;
	v->a[126230] = anon_sym_GT_PIPE;
	v->a[126231] = anon_sym_LT_AMP_DASH;
	v->a[126232] = anon_sym_GT_AMP_DASH;
	v->a[126233] = anon_sym_LT_LT_DASH;
	v->a[126234] = aux_sym_concatenation_token1;
	v->a[126235] = 5;
	v->a[126236] = actions(3);
	v->a[126237] = 1;
	v->a[126238] = sym_comment;
	v->a[126239] = state(2686);
	small_parse_table_6312(v);
}

void	small_parse_table_6312(t_small_parse_table_array *v)
{
	v->a[126240] = 1;
	v->a[126241] = aux_sym_pipeline_repeat1;
	v->a[126242] = actions(5367);
	v->a[126243] = 2;
	v->a[126244] = sym_file_descriptor;
	v->a[126245] = aux_sym_heredoc_redirect_token1;
	v->a[126246] = actions(7218);
	v->a[126247] = 2;
	v->a[126248] = anon_sym_PIPE;
	v->a[126249] = anon_sym_PIPE_AMP;
	v->a[126250] = actions(5362);
	v->a[126251] = 14;
	v->a[126252] = anon_sym_AMP_AMP;
	v->a[126253] = anon_sym_PIPE_PIPE;
	v->a[126254] = anon_sym_LT;
	v->a[126255] = anon_sym_GT;
	v->a[126256] = anon_sym_GT_GT;
	v->a[126257] = anon_sym_AMP_GT;
	v->a[126258] = anon_sym_AMP_GT_GT;
	v->a[126259] = anon_sym_LT_AMP;
	small_parse_table_6313(v);
}

void	small_parse_table_6313(t_small_parse_table_array *v)
{
	v->a[126260] = anon_sym_GT_AMP;
	v->a[126261] = anon_sym_GT_PIPE;
	v->a[126262] = anon_sym_LT_AMP_DASH;
	v->a[126263] = anon_sym_GT_AMP_DASH;
	v->a[126264] = anon_sym_LT_LT;
	v->a[126265] = anon_sym_LT_LT_DASH;
	v->a[126266] = 8;
	v->a[126267] = actions(3);
	v->a[126268] = 1;
	v->a[126269] = sym_comment;
	v->a[126270] = actions(3803);
	v->a[126271] = 1;
	v->a[126272] = aux_sym_heredoc_redirect_token1;
	v->a[126273] = actions(7134);
	v->a[126274] = 1;
	v->a[126275] = sym_file_descriptor;
	v->a[126276] = actions(2945);
	v->a[126277] = 2;
	v->a[126278] = anon_sym_LT_LT;
	v->a[126279] = anon_sym_LT_LT_DASH;
	small_parse_table_6314(v);
}

void	small_parse_table_6314(t_small_parse_table_array *v)
{
	v->a[126280] = actions(3799);
	v->a[126281] = 2;
	v->a[126282] = anon_sym_AMP_AMP;
	v->a[126283] = anon_sym_PIPE_PIPE;
	v->a[126284] = actions(7132);
	v->a[126285] = 2;
	v->a[126286] = anon_sym_LT_AMP_DASH;
	v->a[126287] = anon_sym_GT_AMP_DASH;
	v->a[126288] = state(2613);
	v->a[126289] = 3;
	v->a[126290] = sym_file_redirect;
	v->a[126291] = sym_heredoc_redirect;
	v->a[126292] = aux_sym_redirected_statement_repeat1;
	v->a[126293] = actions(7130);
	v->a[126294] = 8;
	v->a[126295] = anon_sym_LT;
	v->a[126296] = anon_sym_GT;
	v->a[126297] = anon_sym_GT_GT;
	v->a[126298] = anon_sym_AMP_GT;
	v->a[126299] = anon_sym_AMP_GT_GT;
	small_parse_table_6315(v);
}

/* EOF small_parse_table_1262.c */
