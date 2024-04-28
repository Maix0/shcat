/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2503.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12515(t_small_parse_table_array *v)
{
	v->a[250300] = anon_sym_AMP;
	v->a[250301] = anon_sym_LT;
	v->a[250302] = anon_sym_GT;
	v->a[250303] = anon_sym_LT_LT;
	v->a[250304] = anon_sym_GT_GT;
	v->a[250305] = anon_sym_SEMI_SEMI;
	v->a[250306] = anon_sym_PIPE_AMP;
	v->a[250307] = anon_sym_AMP_GT;
	v->a[250308] = anon_sym_AMP_GT_GT;
	v->a[250309] = anon_sym_LT_AMP;
	v->a[250310] = anon_sym_GT_AMP;
	v->a[250311] = anon_sym_GT_PIPE;
	v->a[250312] = anon_sym_LT_AMP_DASH;
	v->a[250313] = anon_sym_GT_AMP_DASH;
	v->a[250314] = anon_sym_LT_LT_DASH;
	v->a[250315] = sym__special_character;
	v->a[250316] = 6;
	v->a[250317] = actions(3);
	v->a[250318] = 1;
	v->a[250319] = sym_comment;
	small_parse_table_12516(v);
}

void	small_parse_table_12516(t_small_parse_table_array *v)
{
	v->a[250320] = actions(11512);
	v->a[250321] = 1;
	v->a[250322] = aux_sym_concatenation_token1;
	v->a[250323] = actions(11514);
	v->a[250324] = 1;
	v->a[250325] = sym__concat;
	v->a[250326] = state(4583);
	v->a[250327] = 1;
	v->a[250328] = aux_sym_concatenation_repeat1;
	v->a[250329] = actions(5723);
	v->a[250330] = 2;
	v->a[250331] = sym_file_descriptor;
	v->a[250332] = aux_sym_heredoc_redirect_token1;
	v->a[250333] = actions(5721);
	v->a[250334] = 21;
	v->a[250335] = anon_sym_SEMI;
	v->a[250336] = anon_sym_PIPE_PIPE;
	v->a[250337] = anon_sym_AMP_AMP;
	v->a[250338] = anon_sym_PIPE;
	v->a[250339] = anon_sym_AMP;
	small_parse_table_12517(v);
}

void	small_parse_table_12517(t_small_parse_table_array *v)
{
	v->a[250340] = anon_sym_LT;
	v->a[250341] = anon_sym_GT;
	v->a[250342] = anon_sym_LT_LT;
	v->a[250343] = anon_sym_GT_GT;
	v->a[250344] = anon_sym_SEMI_SEMI;
	v->a[250345] = anon_sym_PIPE_AMP;
	v->a[250346] = anon_sym_AMP_GT;
	v->a[250347] = anon_sym_AMP_GT_GT;
	v->a[250348] = anon_sym_LT_AMP;
	v->a[250349] = anon_sym_GT_AMP;
	v->a[250350] = anon_sym_GT_PIPE;
	v->a[250351] = anon_sym_LT_AMP_DASH;
	v->a[250352] = anon_sym_GT_AMP_DASH;
	v->a[250353] = anon_sym_LT_LT_DASH;
	v->a[250354] = anon_sym_LT_LT_LT;
	v->a[250355] = anon_sym_BQUOTE;
	v->a[250356] = 12;
	v->a[250357] = actions(3);
	v->a[250358] = 1;
	v->a[250359] = sym_comment;
	small_parse_table_12518(v);
}

void	small_parse_table_12518(t_small_parse_table_array *v)
{
	v->a[250360] = actions(5101);
	v->a[250361] = 1;
	v->a[250362] = aux_sym_heredoc_redirect_token1;
	v->a[250363] = actions(11558);
	v->a[250364] = 1;
	v->a[250365] = anon_sym_LT_LT_LT;
	v->a[250366] = actions(11560);
	v->a[250367] = 1;
	v->a[250368] = sym_file_descriptor;
	v->a[250369] = state(4912);
	v->a[250370] = 1;
	v->a[250371] = sym_herestring_redirect;
	v->a[250372] = actions(4253);
	v->a[250373] = 2;
	v->a[250374] = anon_sym_PIPE;
	v->a[250375] = anon_sym_PIPE_AMP;
	v->a[250376] = actions(4692);
	v->a[250377] = 2;
	v->a[250378] = anon_sym_LT_LT;
	v->a[250379] = anon_sym_LT_LT_DASH;
	small_parse_table_12519(v);
}

void	small_parse_table_12519(t_small_parse_table_array *v)
{
	v->a[250380] = actions(5099);
	v->a[250381] = 2;
	v->a[250382] = anon_sym_PIPE_PIPE;
	v->a[250383] = anon_sym_AMP_AMP;
	v->a[250384] = actions(11556);
	v->a[250385] = 2;
	v->a[250386] = anon_sym_LT_AMP_DASH;
	v->a[250387] = anon_sym_GT_AMP_DASH;
	v->a[250388] = actions(5097);
	v->a[250389] = 3;
	v->a[250390] = anon_sym_SEMI;
	v->a[250391] = anon_sym_AMP;
	v->a[250392] = anon_sym_SEMI_SEMI;
	v->a[250393] = state(4986);
	v->a[250394] = 3;
	v->a[250395] = sym_file_redirect;
	v->a[250396] = sym_heredoc_redirect;
	v->a[250397] = aux_sym_redirected_statement_repeat1;
	v->a[250398] = actions(11554);
	v->a[250399] = 8;
	small_parse_table_12520(v);
}

/* EOF small_parse_table_2503.c */
