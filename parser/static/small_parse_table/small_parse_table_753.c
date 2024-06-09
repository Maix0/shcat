/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_753.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3765(t_small_parse_table_array *v)
{
	v->a[75300] = sym_file_descriptor;
	v->a[75301] = actions(2341);
	v->a[75302] = 2;
	v->a[75303] = anon_sym_AMP_AMP;
	v->a[75304] = anon_sym_PIPE_PIPE;
	v->a[75305] = actions(2986);
	v->a[75306] = 2;
	v->a[75307] = anon_sym_LT_AMP_DASH;
	v->a[75308] = anon_sym_GT_AMP_DASH;
	v->a[75309] = actions(2983);
	v->a[75310] = 3;
	v->a[75311] = anon_sym_GT_GT;
	v->a[75312] = anon_sym_AMP_GT_GT;
	v->a[75313] = anon_sym_GT_PIPE;
	v->a[75314] = state(1344);
	v->a[75315] = 3;
	v->a[75316] = sym_file_redirect;
	v->a[75317] = sym_heredoc_redirect;
	v->a[75318] = aux_sym_redirected_statement_repeat1;
	v->a[75319] = actions(2980);
	small_parse_table_3766(v);
}

void	small_parse_table_3766(t_small_parse_table_array *v)
{
	v->a[75320] = 5;
	v->a[75321] = anon_sym_LT;
	v->a[75322] = anon_sym_GT;
	v->a[75323] = anon_sym_AMP_GT;
	v->a[75324] = anon_sym_LT_AMP;
	v->a[75325] = anon_sym_GT_AMP;
	v->a[75326] = 7;
	v->a[75327] = actions(3);
	v->a[75328] = 1;
	v->a[75329] = sym_comment;
	v->a[75330] = actions(2414);
	v->a[75331] = 1;
	v->a[75332] = aux_sym_heredoc_redirect_token1;
	v->a[75333] = actions(3004);
	v->a[75334] = 1;
	v->a[75335] = sym_file_descriptor;
	v->a[75336] = actions(3001);
	v->a[75337] = 2;
	v->a[75338] = anon_sym_LT_AMP_DASH;
	v->a[75339] = anon_sym_GT_AMP_DASH;
	small_parse_table_3767(v);
}

void	small_parse_table_3767(t_small_parse_table_array *v)
{
	v->a[75340] = state(1345);
	v->a[75341] = 2;
	v->a[75342] = sym_file_redirect;
	v->a[75343] = aux_sym_redirected_statement_repeat2;
	v->a[75344] = actions(2406);
	v->a[75345] = 5;
	v->a[75346] = anon_sym_PIPE;
	v->a[75347] = anon_sym_AMP_AMP;
	v->a[75348] = anon_sym_PIPE_PIPE;
	v->a[75349] = anon_sym_LT_LT;
	v->a[75350] = anon_sym_LT_LT_DASH;
	v->a[75351] = actions(2998);
	v->a[75352] = 8;
	v->a[75353] = anon_sym_LT;
	v->a[75354] = anon_sym_GT;
	v->a[75355] = anon_sym_GT_GT;
	v->a[75356] = anon_sym_AMP_GT;
	v->a[75357] = anon_sym_AMP_GT_GT;
	v->a[75358] = anon_sym_LT_AMP;
	v->a[75359] = anon_sym_GT_AMP;
	small_parse_table_3768(v);
}

void	small_parse_table_3768(t_small_parse_table_array *v)
{
	v->a[75360] = anon_sym_GT_PIPE;
	v->a[75361] = 5;
	v->a[75362] = actions(1404);
	v->a[75363] = 1;
	v->a[75364] = sym_comment;
	v->a[75365] = actions(3007);
	v->a[75366] = 1;
	v->a[75367] = sym_variable_name;
	v->a[75368] = state(1343);
	v->a[75369] = 2;
	v->a[75370] = sym_variable_assignment;
	v->a[75371] = aux_sym_variable_assignments_repeat1;
	v->a[75372] = actions(2265);
	v->a[75373] = 7;
	v->a[75374] = anon_sym_PIPE;
	v->a[75375] = anon_sym_LT;
	v->a[75376] = anon_sym_GT;
	v->a[75377] = anon_sym_AMP_GT;
	v->a[75378] = anon_sym_LT_AMP;
	v->a[75379] = anon_sym_GT_AMP;
	small_parse_table_3769(v);
}

void	small_parse_table_3769(t_small_parse_table_array *v)
{
	v->a[75380] = anon_sym_LT_LT;
	v->a[75381] = actions(2267);
	v->a[75382] = 9;
	v->a[75383] = sym_file_descriptor;
	v->a[75384] = anon_sym_AMP_AMP;
	v->a[75385] = anon_sym_PIPE_PIPE;
	v->a[75386] = anon_sym_GT_GT;
	v->a[75387] = anon_sym_AMP_GT_GT;
	v->a[75388] = anon_sym_GT_PIPE;
	v->a[75389] = anon_sym_LT_AMP_DASH;
	v->a[75390] = anon_sym_GT_AMP_DASH;
	v->a[75391] = anon_sym_LT_LT_DASH;
	v->a[75392] = 4;
	v->a[75393] = actions(1404);
	v->a[75394] = 1;
	v->a[75395] = sym_comment;
	v->a[75396] = state(1351);
	v->a[75397] = 3;
	v->a[75398] = sym_file_redirect;
	v->a[75399] = sym_heredoc_redirect;
	small_parse_table_3770(v);
}

/* EOF small_parse_table_753.c */
