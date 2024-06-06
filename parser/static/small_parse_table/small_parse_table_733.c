/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_733.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3665(t_small_parse_table_array *v)
{
	v->a[73300] = actions(3);
	v->a[73301] = 1;
	v->a[73302] = sym_comment;
	v->a[73303] = actions(816);
	v->a[73304] = 1;
	v->a[73305] = sym_file_descriptor;
	v->a[73306] = actions(4412);
	v->a[73307] = 1;
	v->a[73308] = sym_variable_name;
	v->a[73309] = actions(4410);
	v->a[73310] = 2;
	v->a[73311] = aux_sym__simple_variable_name_token1;
	v->a[73312] = aux_sym__multiline_variable_name_token1;
	v->a[73313] = actions(4408);
	v->a[73314] = 9;
	v->a[73315] = anon_sym_BANG;
	v->a[73316] = anon_sym_DASH;
	v->a[73317] = anon_sym_STAR;
	v->a[73318] = anon_sym_QMARK;
	v->a[73319] = anon_sym_DOLLAR;
	small_parse_table_3666(v);
}

void	small_parse_table_3666(t_small_parse_table_array *v)
{
	v->a[73320] = anon_sym_POUND;
	v->a[73321] = anon_sym_AT;
	v->a[73322] = anon_sym_0;
	v->a[73323] = anon_sym__;
	v->a[73324] = actions(810);
	v->a[73325] = 21;
	v->a[73326] = anon_sym_PIPE;
	v->a[73327] = anon_sym_SEMI_SEMI;
	v->a[73328] = anon_sym_PIPE_AMP;
	v->a[73329] = anon_sym_AMP_AMP;
	v->a[73330] = anon_sym_PIPE_PIPE;
	v->a[73331] = anon_sym_LT;
	v->a[73332] = anon_sym_GT;
	v->a[73333] = anon_sym_GT_GT;
	v->a[73334] = anon_sym_AMP_GT;
	v->a[73335] = anon_sym_AMP_GT_GT;
	v->a[73336] = anon_sym_LT_AMP;
	v->a[73337] = anon_sym_GT_AMP;
	v->a[73338] = anon_sym_GT_PIPE;
	v->a[73339] = anon_sym_LT_AMP_DASH;
	small_parse_table_3667(v);
}

void	small_parse_table_3667(t_small_parse_table_array *v)
{
	v->a[73340] = anon_sym_GT_AMP_DASH;
	v->a[73341] = anon_sym_LT_LT;
	v->a[73342] = anon_sym_LT_LT_DASH;
	v->a[73343] = aux_sym_heredoc_redirect_token1;
	v->a[73344] = anon_sym_AMP;
	v->a[73345] = anon_sym_BQUOTE;
	v->a[73346] = anon_sym_SEMI;
	v->a[73347] = 6;
	v->a[73348] = actions(3);
	v->a[73349] = 1;
	v->a[73350] = sym_comment;
	v->a[73351] = actions(816);
	v->a[73352] = 1;
	v->a[73353] = sym_file_descriptor;
	v->a[73354] = actions(4412);
	v->a[73355] = 1;
	v->a[73356] = sym_variable_name;
	v->a[73357] = actions(4410);
	v->a[73358] = 2;
	v->a[73359] = aux_sym__simple_variable_name_token1;
	small_parse_table_3668(v);
}

void	small_parse_table_3668(t_small_parse_table_array *v)
{
	v->a[73360] = aux_sym__multiline_variable_name_token1;
	v->a[73361] = actions(4408);
	v->a[73362] = 9;
	v->a[73363] = anon_sym_BANG;
	v->a[73364] = anon_sym_DASH;
	v->a[73365] = anon_sym_STAR;
	v->a[73366] = anon_sym_QMARK;
	v->a[73367] = anon_sym_DOLLAR;
	v->a[73368] = anon_sym_POUND;
	v->a[73369] = anon_sym_AT;
	v->a[73370] = anon_sym_0;
	v->a[73371] = anon_sym__;
	v->a[73372] = actions(810);
	v->a[73373] = 21;
	v->a[73374] = anon_sym_PIPE;
	v->a[73375] = anon_sym_RPAREN;
	v->a[73376] = anon_sym_SEMI_SEMI;
	v->a[73377] = anon_sym_PIPE_AMP;
	v->a[73378] = anon_sym_AMP_AMP;
	v->a[73379] = anon_sym_PIPE_PIPE;
	small_parse_table_3669(v);
}

void	small_parse_table_3669(t_small_parse_table_array *v)
{
	v->a[73380] = anon_sym_LT;
	v->a[73381] = anon_sym_GT;
	v->a[73382] = anon_sym_GT_GT;
	v->a[73383] = anon_sym_AMP_GT;
	v->a[73384] = anon_sym_AMP_GT_GT;
	v->a[73385] = anon_sym_LT_AMP;
	v->a[73386] = anon_sym_GT_AMP;
	v->a[73387] = anon_sym_GT_PIPE;
	v->a[73388] = anon_sym_LT_AMP_DASH;
	v->a[73389] = anon_sym_GT_AMP_DASH;
	v->a[73390] = anon_sym_LT_LT;
	v->a[73391] = anon_sym_LT_LT_DASH;
	v->a[73392] = aux_sym_heredoc_redirect_token1;
	v->a[73393] = anon_sym_AMP;
	v->a[73394] = anon_sym_SEMI;
	v->a[73395] = 3;
	v->a[73396] = actions(57);
	v->a[73397] = 1;
	v->a[73398] = sym_comment;
	v->a[73399] = actions(2906);
	small_parse_table_3670(v);
}

/* EOF small_parse_table_733.c */
