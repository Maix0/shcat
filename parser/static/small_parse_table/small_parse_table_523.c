/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_523.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2615(t_small_parse_table_array *v)
{
	v->a[52300] = anon_sym_GT_GT;
	v->a[52301] = anon_sym_LT_LT;
	v->a[52302] = 6;
	v->a[52303] = actions(1436);
	v->a[52304] = 1;
	v->a[52305] = sym_comment;
	v->a[52306] = actions(2642);
	v->a[52307] = 1;
	v->a[52308] = aux_sym_concatenation_token1;
	v->a[52309] = actions(2644);
	v->a[52310] = 1;
	v->a[52311] = sym__concat;
	v->a[52312] = state(1223);
	v->a[52313] = 1;
	v->a[52314] = aux_sym_concatenation_repeat1;
	v->a[52315] = actions(923);
	v->a[52316] = 3;
	v->a[52317] = anon_sym_PIPE;
	v->a[52318] = anon_sym_LT;
	v->a[52319] = anon_sym_GT;
	small_parse_table_2616(v);
}

void	small_parse_table_2616(t_small_parse_table_array *v)
{
	v->a[52320] = actions(921);
	v->a[52321] = 5;
	v->a[52322] = sym_variable_name;
	v->a[52323] = anon_sym_AMP_AMP;
	v->a[52324] = anon_sym_PIPE_PIPE;
	v->a[52325] = anon_sym_GT_GT;
	v->a[52326] = anon_sym_LT_LT;
	v->a[52327] = 6;
	v->a[52328] = actions(3);
	v->a[52329] = 1;
	v->a[52330] = sym_comment;
	v->a[52331] = actions(597);
	v->a[52332] = 1;
	v->a[52333] = anon_sym_LT_LT;
	v->a[52334] = actions(1938);
	v->a[52335] = 1;
	v->a[52336] = aux_sym_heredoc_redirect_token1;
	v->a[52337] = actions(1936);
	v->a[52338] = 3;
	v->a[52339] = anon_sym_PIPE;
	small_parse_table_2617(v);
}

void	small_parse_table_2617(t_small_parse_table_array *v)
{
	v->a[52340] = anon_sym_AMP_AMP;
	v->a[52341] = anon_sym_PIPE_PIPE;
	v->a[52342] = actions(2633);
	v->a[52343] = 3;
	v->a[52344] = anon_sym_LT;
	v->a[52345] = anon_sym_GT;
	v->a[52346] = anon_sym_GT_GT;
	v->a[52347] = state(1229);
	v->a[52348] = 3;
	v->a[52349] = sym_file_redirect;
	v->a[52350] = sym_heredoc_redirect;
	v->a[52351] = aux_sym_redirected_statement_repeat1;
	v->a[52352] = 5;
	v->a[52353] = actions(3);
	v->a[52354] = 1;
	v->a[52355] = sym_comment;
	v->a[52356] = actions(580);
	v->a[52357] = 1;
	v->a[52358] = anon_sym_PIPE;
	v->a[52359] = actions(827);
	small_parse_table_2618(v);
}

void	small_parse_table_2618(t_small_parse_table_array *v)
{
	v->a[52360] = 1;
	v->a[52361] = aux_sym_heredoc_redirect_token1;
	v->a[52362] = state(1225);
	v->a[52363] = 3;
	v->a[52364] = sym_file_redirect;
	v->a[52365] = sym_heredoc_redirect;
	v->a[52366] = aux_sym_redirected_statement_repeat1;
	v->a[52367] = actions(816);
	v->a[52368] = 6;
	v->a[52369] = anon_sym_AMP_AMP;
	v->a[52370] = anon_sym_PIPE_PIPE;
	v->a[52371] = anon_sym_LT;
	v->a[52372] = anon_sym_GT;
	v->a[52373] = anon_sym_GT_GT;
	v->a[52374] = anon_sym_LT_LT;
	v->a[52375] = 4;
	v->a[52376] = actions(3);
	v->a[52377] = 1;
	v->a[52378] = sym_comment;
	v->a[52379] = actions(387);
	small_parse_table_2619(v);
}

void	small_parse_table_2619(t_small_parse_table_array *v)
{
	v->a[52380] = 1;
	v->a[52381] = sym_variable_name;
	v->a[52382] = actions(385);
	v->a[52383] = 2;
	v->a[52384] = aux_sym__simple_variable_name_token1;
	v->a[52385] = aux_sym__multiline_variable_name_token1;
	v->a[52386] = actions(383);
	v->a[52387] = 8;
	v->a[52388] = anon_sym_BANG;
	v->a[52389] = anon_sym_DASH;
	v->a[52390] = anon_sym_STAR;
	v->a[52391] = anon_sym_QMARK;
	v->a[52392] = anon_sym_DOLLAR;
	v->a[52393] = anon_sym_POUND;
	v->a[52394] = anon_sym_AT;
	v->a[52395] = anon_sym_0;
	v->a[52396] = 4;
	v->a[52397] = actions(3);
	v->a[52398] = 1;
	v->a[52399] = sym_comment;
	small_parse_table_2620(v);
}

/* EOF small_parse_table_523.c */
