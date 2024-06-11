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
	v->a[72300] = sym_file_descriptor;
	v->a[72301] = actions(861);
	v->a[72302] = 2;
	v->a[72303] = anon_sym_LT_LT;
	v->a[72304] = anon_sym_LT_LT_DASH;
	v->a[72305] = actions(2067);
	v->a[72306] = 2;
	v->a[72307] = anon_sym_LT_AMP_DASH;
	v->a[72308] = anon_sym_GT_AMP_DASH;
	v->a[72309] = actions(2182);
	v->a[72310] = 2;
	v->a[72311] = ts_builtin_sym_end;
	v->a[72312] = aux_sym_heredoc_redirect_token1;
	v->a[72313] = state(1205);
	v->a[72314] = 3;
	v->a[72315] = sym_file_redirect;
	v->a[72316] = sym_heredoc_redirect;
	v->a[72317] = aux_sym_redirected_statement_repeat1;
	v->a[72318] = actions(2176);
	v->a[72319] = 6;
	small_parse_table_3616(v);
}

void	small_parse_table_3616(t_small_parse_table_array *v)
{
	v->a[72320] = anon_sym_PIPE;
	v->a[72321] = anon_sym_SEMI_SEMI;
	v->a[72322] = anon_sym_AMP_AMP;
	v->a[72323] = anon_sym_PIPE_PIPE;
	v->a[72324] = anon_sym_AMP;
	v->a[72325] = anon_sym_SEMI;
	v->a[72326] = actions(2065);
	v->a[72327] = 8;
	v->a[72328] = anon_sym_LT;
	v->a[72329] = anon_sym_GT;
	v->a[72330] = anon_sym_GT_GT;
	v->a[72331] = anon_sym_AMP_GT;
	v->a[72332] = anon_sym_AMP_GT_GT;
	v->a[72333] = anon_sym_LT_AMP;
	v->a[72334] = anon_sym_GT_AMP;
	v->a[72335] = anon_sym_GT_PIPE;
	v->a[72336] = 13;
	v->a[72337] = actions(3);
	v->a[72338] = 1;
	v->a[72339] = sym_comment;
	small_parse_table_3617(v);
}

void	small_parse_table_3617(t_small_parse_table_array *v)
{
	v->a[72340] = actions(807);
	v->a[72341] = 1;
	v->a[72342] = anon_sym_PIPE;
	v->a[72343] = actions(840);
	v->a[72344] = 1;
	v->a[72345] = anon_sym_RPAREN;
	v->a[72346] = actions(2083);
	v->a[72347] = 1;
	v->a[72348] = sym_file_descriptor;
	v->a[72349] = actions(2561);
	v->a[72350] = 1;
	v->a[72351] = anon_sym_SEMI_SEMI;
	v->a[72352] = actions(2563);
	v->a[72353] = 1;
	v->a[72354] = aux_sym_heredoc_redirect_token1;
	v->a[72355] = actions(2565);
	v->a[72356] = 1;
	v->a[72357] = anon_sym_AMP;
	v->a[72358] = actions(2567);
	v->a[72359] = 1;
	small_parse_table_3618(v);
}

void	small_parse_table_3618(t_small_parse_table_array *v)
{
	v->a[72360] = anon_sym_SEMI;
	v->a[72361] = actions(859);
	v->a[72362] = 2;
	v->a[72363] = anon_sym_AMP_AMP;
	v->a[72364] = anon_sym_PIPE_PIPE;
	v->a[72365] = actions(861);
	v->a[72366] = 2;
	v->a[72367] = anon_sym_LT_LT;
	v->a[72368] = anon_sym_LT_LT_DASH;
	v->a[72369] = actions(2079);
	v->a[72370] = 2;
	v->a[72371] = anon_sym_LT_AMP_DASH;
	v->a[72372] = anon_sym_GT_AMP_DASH;
	v->a[72373] = state(1283);
	v->a[72374] = 3;
	v->a[72375] = sym_file_redirect;
	v->a[72376] = sym_heredoc_redirect;
	v->a[72377] = aux_sym_redirected_statement_repeat1;
	v->a[72378] = actions(2077);
	v->a[72379] = 8;
	small_parse_table_3619(v);
}

void	small_parse_table_3619(t_small_parse_table_array *v)
{
	v->a[72380] = anon_sym_LT;
	v->a[72381] = anon_sym_GT;
	v->a[72382] = anon_sym_GT_GT;
	v->a[72383] = anon_sym_AMP_GT;
	v->a[72384] = anon_sym_AMP_GT_GT;
	v->a[72385] = anon_sym_LT_AMP;
	v->a[72386] = anon_sym_GT_AMP;
	v->a[72387] = anon_sym_GT_PIPE;
	v->a[72388] = 3;
	v->a[72389] = actions(3);
	v->a[72390] = 1;
	v->a[72391] = sym_comment;
	v->a[72392] = actions(1205);
	v->a[72393] = 4;
	v->a[72394] = sym_file_descriptor;
	v->a[72395] = sym__concat;
	v->a[72396] = sym_variable_name;
	v->a[72397] = aux_sym_heredoc_redirect_token1;
	v->a[72398] = actions(1203);
	v->a[72399] = 20;
	small_parse_table_3620(v);
}

/* EOF small_parse_table_723.c */
