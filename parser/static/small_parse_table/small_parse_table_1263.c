/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1263.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6315(t_small_parse_table_array *v)
{
	v->a[126300] = anon_sym_LT_AMP;
	v->a[126301] = anon_sym_GT_AMP;
	v->a[126302] = anon_sym_GT_PIPE;
	v->a[126303] = 8;
	v->a[126304] = actions(3);
	v->a[126305] = 1;
	v->a[126306] = sym_comment;
	v->a[126307] = actions(3801);
	v->a[126308] = 1;
	v->a[126309] = aux_sym_heredoc_redirect_token1;
	v->a[126310] = actions(7134);
	v->a[126311] = 1;
	v->a[126312] = sym_file_descriptor;
	v->a[126313] = actions(2945);
	v->a[126314] = 2;
	v->a[126315] = anon_sym_LT_LT;
	v->a[126316] = anon_sym_LT_LT_DASH;
	v->a[126317] = actions(3799);
	v->a[126318] = 2;
	v->a[126319] = anon_sym_AMP_AMP;
	small_parse_table_6316(v);
}

void	small_parse_table_6316(t_small_parse_table_array *v)
{
	v->a[126320] = anon_sym_PIPE_PIPE;
	v->a[126321] = actions(7132);
	v->a[126322] = 2;
	v->a[126323] = anon_sym_LT_AMP_DASH;
	v->a[126324] = anon_sym_GT_AMP_DASH;
	v->a[126325] = state(2613);
	v->a[126326] = 3;
	v->a[126327] = sym_file_redirect;
	v->a[126328] = sym_heredoc_redirect;
	v->a[126329] = aux_sym_redirected_statement_repeat1;
	v->a[126330] = actions(7130);
	v->a[126331] = 8;
	v->a[126332] = anon_sym_LT;
	v->a[126333] = anon_sym_GT;
	v->a[126334] = anon_sym_GT_GT;
	v->a[126335] = anon_sym_AMP_GT;
	v->a[126336] = anon_sym_AMP_GT_GT;
	v->a[126337] = anon_sym_LT_AMP;
	v->a[126338] = anon_sym_GT_AMP;
	v->a[126339] = anon_sym_GT_PIPE;
	small_parse_table_6317(v);
}

void	small_parse_table_6317(t_small_parse_table_array *v)
{
	v->a[126340] = 3;
	v->a[126341] = actions(57);
	v->a[126342] = 1;
	v->a[126343] = sym_comment;
	v->a[126344] = actions(2826);
	v->a[126345] = 7;
	v->a[126346] = anon_sym_PIPE;
	v->a[126347] = anon_sym_LT;
	v->a[126348] = anon_sym_GT;
	v->a[126349] = anon_sym_AMP_GT;
	v->a[126350] = anon_sym_LT_AMP;
	v->a[126351] = anon_sym_GT_AMP;
	v->a[126352] = anon_sym_LT_LT;
	v->a[126353] = actions(2828);
	v->a[126354] = 12;
	v->a[126355] = sym_file_descriptor;
	v->a[126356] = sym__concat;
	v->a[126357] = anon_sym_PIPE_AMP;
	v->a[126358] = anon_sym_AMP_AMP;
	v->a[126359] = anon_sym_PIPE_PIPE;
	small_parse_table_6318(v);
}

void	small_parse_table_6318(t_small_parse_table_array *v)
{
	v->a[126360] = anon_sym_GT_GT;
	v->a[126361] = anon_sym_AMP_GT_GT;
	v->a[126362] = anon_sym_GT_PIPE;
	v->a[126363] = anon_sym_LT_AMP_DASH;
	v->a[126364] = anon_sym_GT_AMP_DASH;
	v->a[126365] = anon_sym_LT_LT_DASH;
	v->a[126366] = aux_sym_concatenation_token1;
	v->a[126367] = 3;
	v->a[126368] = actions(57);
	v->a[126369] = 1;
	v->a[126370] = sym_comment;
	v->a[126371] = actions(2652);
	v->a[126372] = 7;
	v->a[126373] = anon_sym_PIPE;
	v->a[126374] = anon_sym_LT;
	v->a[126375] = anon_sym_GT;
	v->a[126376] = anon_sym_AMP_GT;
	v->a[126377] = anon_sym_LT_AMP;
	v->a[126378] = anon_sym_GT_AMP;
	v->a[126379] = anon_sym_LT_LT;
	small_parse_table_6319(v);
}

void	small_parse_table_6319(t_small_parse_table_array *v)
{
	v->a[126380] = actions(2654);
	v->a[126381] = 12;
	v->a[126382] = sym_file_descriptor;
	v->a[126383] = sym__concat;
	v->a[126384] = anon_sym_PIPE_AMP;
	v->a[126385] = anon_sym_AMP_AMP;
	v->a[126386] = anon_sym_PIPE_PIPE;
	v->a[126387] = anon_sym_GT_GT;
	v->a[126388] = anon_sym_AMP_GT_GT;
	v->a[126389] = anon_sym_GT_PIPE;
	v->a[126390] = anon_sym_LT_AMP_DASH;
	v->a[126391] = anon_sym_GT_AMP_DASH;
	v->a[126392] = anon_sym_LT_LT_DASH;
	v->a[126393] = aux_sym_concatenation_token1;
	v->a[126394] = 3;
	v->a[126395] = actions(57);
	v->a[126396] = 1;
	v->a[126397] = sym_comment;
	v->a[126398] = actions(2886);
	v->a[126399] = 7;
	small_parse_table_6320(v);
}

/* EOF small_parse_table_1263.c */
