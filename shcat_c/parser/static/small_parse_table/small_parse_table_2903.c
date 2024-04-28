/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2903.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14515(t_small_parse_table_array *v)
{
	v->a[290300] = anon_sym_GT_PIPE;
	v->a[290301] = state(4697);
	v->a[290302] = 3;
	v->a[290303] = sym_file_redirect;
	v->a[290304] = sym_heredoc_redirect;
	v->a[290305] = aux_sym_redirected_statement_repeat1;
	v->a[290306] = actions(11485);
	v->a[290307] = 5;
	v->a[290308] = anon_sym_LT;
	v->a[290309] = anon_sym_GT;
	v->a[290310] = anon_sym_AMP_GT;
	v->a[290311] = anon_sym_LT_AMP;
	v->a[290312] = anon_sym_GT_AMP;
	v->a[290313] = 9;
	v->a[290314] = actions(71);
	v->a[290315] = 1;
	v->a[290316] = sym_comment;
	v->a[290317] = actions(4692);
	v->a[290318] = 1;
	v->a[290319] = anon_sym_LT_LT;
	small_parse_table_14516(v);
}

void	small_parse_table_14516(t_small_parse_table_array *v)
{
	v->a[290320] = actions(12778);
	v->a[290321] = 1;
	v->a[290322] = sym_file_descriptor;
	v->a[290323] = actions(12954);
	v->a[290324] = 1;
	v->a[290325] = anon_sym_LT_LT_DASH;
	v->a[290326] = actions(12974);
	v->a[290327] = 2;
	v->a[290328] = anon_sym_PIPE_PIPE;
	v->a[290329] = anon_sym_AMP_AMP;
	v->a[290330] = actions(12978);
	v->a[290331] = 2;
	v->a[290332] = anon_sym_LT_AMP_DASH;
	v->a[290333] = anon_sym_GT_AMP_DASH;
	v->a[290334] = actions(12976);
	v->a[290335] = 3;
	v->a[290336] = anon_sym_GT_GT;
	v->a[290337] = anon_sym_AMP_GT_GT;
	v->a[290338] = anon_sym_GT_PIPE;
	v->a[290339] = state(5366);
	small_parse_table_14517(v);
}

void	small_parse_table_14517(t_small_parse_table_array *v)
{
	v->a[290340] = 3;
	v->a[290341] = sym_file_redirect;
	v->a[290342] = sym_heredoc_redirect;
	v->a[290343] = aux_sym_redirected_statement_repeat1;
	v->a[290344] = actions(12344);
	v->a[290345] = 5;
	v->a[290346] = anon_sym_LT;
	v->a[290347] = anon_sym_GT;
	v->a[290348] = anon_sym_AMP_GT;
	v->a[290349] = anon_sym_LT_AMP;
	v->a[290350] = anon_sym_GT_AMP;
	v->a[290351] = 3;
	v->a[290352] = actions(71);
	v->a[290353] = 1;
	v->a[290354] = sym_comment;
	v->a[290355] = actions(11780);
	v->a[290356] = 7;
	v->a[290357] = anon_sym_PIPE;
	v->a[290358] = anon_sym_LT;
	v->a[290359] = anon_sym_GT;
	small_parse_table_14518(v);
}

void	small_parse_table_14518(t_small_parse_table_array *v)
{
	v->a[290360] = anon_sym_LT_LT;
	v->a[290361] = anon_sym_AMP_GT;
	v->a[290362] = anon_sym_LT_AMP;
	v->a[290363] = anon_sym_GT_AMP;
	v->a[290364] = actions(11782);
	v->a[290365] = 11;
	v->a[290366] = sym_file_descriptor;
	v->a[290367] = anon_sym_PIPE_PIPE;
	v->a[290368] = anon_sym_AMP_AMP;
	v->a[290369] = anon_sym_GT_GT;
	v->a[290370] = anon_sym_PIPE_AMP;
	v->a[290371] = anon_sym_AMP_GT_GT;
	v->a[290372] = anon_sym_GT_PIPE;
	v->a[290373] = anon_sym_LT_AMP_DASH;
	v->a[290374] = anon_sym_GT_AMP_DASH;
	v->a[290375] = anon_sym_LT_LT_DASH;
	v->a[290376] = anon_sym_LT_LT_LT;
	v->a[290377] = 6;
	v->a[290378] = actions(71);
	v->a[290379] = 1;
	small_parse_table_14519(v);
}

void	small_parse_table_14519(t_small_parse_table_array *v)
{
	v->a[290380] = sym_comment;
	v->a[290381] = actions(11745);
	v->a[290382] = 1;
	v->a[290383] = anon_sym_PIPE;
	v->a[290384] = actions(12980);
	v->a[290385] = 1;
	v->a[290386] = anon_sym_PIPE_AMP;
	v->a[290387] = state(5602);
	v->a[290388] = 1;
	v->a[290389] = aux_sym_pipeline_repeat1;
	v->a[290390] = actions(11743);
	v->a[290391] = 6;
	v->a[290392] = anon_sym_LT;
	v->a[290393] = anon_sym_GT;
	v->a[290394] = anon_sym_LT_LT;
	v->a[290395] = anon_sym_AMP_GT;
	v->a[290396] = anon_sym_LT_AMP;
	v->a[290397] = anon_sym_GT_AMP;
	v->a[290398] = actions(11748);
	v->a[290399] = 9;
	small_parse_table_14520(v);
}

/* EOF small_parse_table_2903.c */
