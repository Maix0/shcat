/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_723.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3615(t_small_parse_table_array *v)
{
	v->a[72300] = ts_builtin_sym_end;
	v->a[72301] = aux_sym_heredoc_redirect_token1;
	v->a[72302] = actions(2444);
	v->a[72303] = 17;
	v->a[72304] = anon_sym_SEMI_SEMI;
	v->a[72305] = anon_sym_AMP_AMP;
	v->a[72306] = anon_sym_PIPE_PIPE;
	v->a[72307] = anon_sym_LT;
	v->a[72308] = anon_sym_GT;
	v->a[72309] = anon_sym_GT_GT;
	v->a[72310] = anon_sym_AMP_GT;
	v->a[72311] = anon_sym_AMP_GT_GT;
	v->a[72312] = anon_sym_LT_AMP;
	v->a[72313] = anon_sym_GT_AMP;
	v->a[72314] = anon_sym_GT_PIPE;
	v->a[72315] = anon_sym_LT_AMP_DASH;
	v->a[72316] = anon_sym_GT_AMP_DASH;
	v->a[72317] = anon_sym_LT_LT;
	v->a[72318] = anon_sym_LT_LT_DASH;
	v->a[72319] = anon_sym_AMP;
	small_parse_table_3616(v);
}

void	small_parse_table_3616(t_small_parse_table_array *v)
{
	v->a[72320] = anon_sym_SEMI;
	v->a[72321] = 5;
	v->a[72322] = actions(3);
	v->a[72323] = 1;
	v->a[72324] = sym_comment;
	v->a[72325] = actions(2446);
	v->a[72326] = 1;
	v->a[72327] = anon_sym_PIPE;
	v->a[72328] = state(1310);
	v->a[72329] = 1;
	v->a[72330] = aux_sym_pipeline_repeat1;
	v->a[72331] = actions(2440);
	v->a[72332] = 2;
	v->a[72333] = sym_file_descriptor;
	v->a[72334] = aux_sym_heredoc_redirect_token1;
	v->a[72335] = actions(2444);
	v->a[72336] = 18;
	v->a[72337] = anon_sym_SEMI_SEMI;
	v->a[72338] = anon_sym_AMP_AMP;
	v->a[72339] = anon_sym_PIPE_PIPE;
	small_parse_table_3617(v);
}

void	small_parse_table_3617(t_small_parse_table_array *v)
{
	v->a[72340] = anon_sym_LT;
	v->a[72341] = anon_sym_GT;
	v->a[72342] = anon_sym_GT_GT;
	v->a[72343] = anon_sym_AMP_GT;
	v->a[72344] = anon_sym_AMP_GT_GT;
	v->a[72345] = anon_sym_LT_AMP;
	v->a[72346] = anon_sym_GT_AMP;
	v->a[72347] = anon_sym_GT_PIPE;
	v->a[72348] = anon_sym_LT_AMP_DASH;
	v->a[72349] = anon_sym_GT_AMP_DASH;
	v->a[72350] = anon_sym_LT_LT;
	v->a[72351] = anon_sym_LT_LT_DASH;
	v->a[72352] = anon_sym_AMP;
	v->a[72353] = anon_sym_BQUOTE;
	v->a[72354] = anon_sym_SEMI;
	v->a[72355] = 7;
	v->a[72356] = actions(3);
	v->a[72357] = 1;
	v->a[72358] = sym_comment;
	v->a[72359] = actions(2218);
	small_parse_table_3618(v);
}

void	small_parse_table_3618(t_small_parse_table_array *v)
{
	v->a[72360] = 1;
	v->a[72361] = aux_sym_heredoc_redirect_token1;
	v->a[72362] = actions(2454);
	v->a[72363] = 1;
	v->a[72364] = sym_file_descriptor;
	v->a[72365] = actions(2451);
	v->a[72366] = 2;
	v->a[72367] = anon_sym_LT_AMP_DASH;
	v->a[72368] = anon_sym_GT_AMP_DASH;
	v->a[72369] = state(1303);
	v->a[72370] = 2;
	v->a[72371] = sym_file_redirect;
	v->a[72372] = aux_sym_redirected_statement_repeat2;
	v->a[72373] = actions(2210);
	v->a[72374] = 8;
	v->a[72375] = anon_sym_PIPE;
	v->a[72376] = anon_sym_SEMI_SEMI;
	v->a[72377] = anon_sym_AMP_AMP;
	v->a[72378] = anon_sym_PIPE_PIPE;
	v->a[72379] = anon_sym_LT_LT;
	small_parse_table_3619(v);
}

void	small_parse_table_3619(t_small_parse_table_array *v)
{
	v->a[72380] = anon_sym_LT_LT_DASH;
	v->a[72381] = anon_sym_AMP;
	v->a[72382] = anon_sym_SEMI;
	v->a[72383] = actions(2448);
	v->a[72384] = 8;
	v->a[72385] = anon_sym_LT;
	v->a[72386] = anon_sym_GT;
	v->a[72387] = anon_sym_GT_GT;
	v->a[72388] = anon_sym_AMP_GT;
	v->a[72389] = anon_sym_AMP_GT_GT;
	v->a[72390] = anon_sym_LT_AMP;
	v->a[72391] = anon_sym_GT_AMP;
	v->a[72392] = anon_sym_GT_PIPE;
	v->a[72393] = 5;
	v->a[72394] = actions(3);
	v->a[72395] = 1;
	v->a[72396] = sym_comment;
	v->a[72397] = actions(2457);
	v->a[72398] = 1;
	v->a[72399] = anon_sym_PIPE;
	small_parse_table_3620(v);
}

/* EOF small_parse_table_723.c */
