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
	v->a[52300] = actions(1713);
	v->a[52301] = 1;
	v->a[52302] = anon_sym_RPAREN;
	v->a[52303] = actions(1558);
	v->a[52304] = 9;
	v->a[52305] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52306] = anon_sym_DOLLAR;
	v->a[52307] = anon_sym_DQUOTE;
	v->a[52308] = sym_raw_string;
	v->a[52309] = sym_number;
	v->a[52310] = anon_sym_DOLLAR_LBRACE;
	v->a[52311] = anon_sym_DOLLAR_LPAREN;
	v->a[52312] = anon_sym_BQUOTE;
	v->a[52313] = sym_word;
	v->a[52314] = actions(1560);
	v->a[52315] = 9;
	v->a[52316] = anon_sym_PIPE;
	v->a[52317] = anon_sym_SEMI_SEMI;
	v->a[52318] = anon_sym_AMP_AMP;
	v->a[52319] = anon_sym_PIPE_PIPE;
	small_parse_table_2616(v);
}

void	small_parse_table_2616(t_small_parse_table_array *v)
{
	v->a[52320] = anon_sym_LT_LT;
	v->a[52321] = anon_sym_LT_LT_DASH;
	v->a[52322] = aux_sym_heredoc_redirect_token1;
	v->a[52323] = anon_sym_AMP;
	v->a[52324] = anon_sym_SEMI;
	v->a[52325] = actions(1562);
	v->a[52326] = 10;
	v->a[52327] = anon_sym_LT;
	v->a[52328] = anon_sym_GT;
	v->a[52329] = anon_sym_GT_GT;
	v->a[52330] = anon_sym_AMP_GT;
	v->a[52331] = anon_sym_AMP_GT_GT;
	v->a[52332] = anon_sym_LT_AMP;
	v->a[52333] = anon_sym_GT_AMP;
	v->a[52334] = anon_sym_GT_PIPE;
	v->a[52335] = anon_sym_LT_AMP_DASH;
	v->a[52336] = anon_sym_GT_AMP_DASH;
	v->a[52337] = 4;
	v->a[52338] = actions(3);
	v->a[52339] = 1;
	small_parse_table_2617(v);
}

void	small_parse_table_2617(t_small_parse_table_array *v)
{
	v->a[52340] = sym_comment;
	v->a[52341] = actions(1554);
	v->a[52342] = 2;
	v->a[52343] = anon_sym_RPAREN;
	v->a[52344] = anon_sym_SEMI_SEMI;
	v->a[52345] = actions(1556);
	v->a[52346] = 2;
	v->a[52347] = sym_file_descriptor;
	v->a[52348] = sym_variable_name;
	v->a[52349] = actions(1552);
	v->a[52350] = 27;
	v->a[52351] = anon_sym_for;
	v->a[52352] = anon_sym_while;
	v->a[52353] = anon_sym_until;
	v->a[52354] = anon_sym_if;
	v->a[52355] = anon_sym_case;
	v->a[52356] = anon_sym_LPAREN;
	v->a[52357] = anon_sym_LBRACE;
	v->a[52358] = anon_sym_BANG;
	v->a[52359] = anon_sym_LT;
	small_parse_table_2618(v);
}

void	small_parse_table_2618(t_small_parse_table_array *v)
{
	v->a[52360] = anon_sym_GT;
	v->a[52361] = anon_sym_GT_GT;
	v->a[52362] = anon_sym_AMP_GT;
	v->a[52363] = anon_sym_AMP_GT_GT;
	v->a[52364] = anon_sym_LT_AMP;
	v->a[52365] = anon_sym_GT_AMP;
	v->a[52366] = anon_sym_GT_PIPE;
	v->a[52367] = anon_sym_LT_AMP_DASH;
	v->a[52368] = anon_sym_GT_AMP_DASH;
	v->a[52369] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52370] = anon_sym_DOLLAR;
	v->a[52371] = anon_sym_DQUOTE;
	v->a[52372] = sym_raw_string;
	v->a[52373] = sym_number;
	v->a[52374] = anon_sym_DOLLAR_LBRACE;
	v->a[52375] = anon_sym_DOLLAR_LPAREN;
	v->a[52376] = anon_sym_BQUOTE;
	v->a[52377] = sym_word;
	v->a[52378] = 3;
	v->a[52379] = actions(3);
	small_parse_table_2619(v);
}

void	small_parse_table_2619(t_small_parse_table_array *v)
{
	v->a[52380] = 1;
	v->a[52381] = sym_comment;
	v->a[52382] = actions(608);
	v->a[52383] = 3;
	v->a[52384] = sym_file_descriptor;
	v->a[52385] = sym_variable_name;
	v->a[52386] = ts_builtin_sym_end;
	v->a[52387] = actions(610);
	v->a[52388] = 28;
	v->a[52389] = anon_sym_PIPE;
	v->a[52390] = anon_sym_SEMI_SEMI;
	v->a[52391] = anon_sym_AMP_AMP;
	v->a[52392] = anon_sym_PIPE_PIPE;
	v->a[52393] = anon_sym_LT;
	v->a[52394] = anon_sym_GT;
	v->a[52395] = anon_sym_GT_GT;
	v->a[52396] = anon_sym_AMP_GT;
	v->a[52397] = anon_sym_AMP_GT_GT;
	v->a[52398] = anon_sym_LT_AMP;
	v->a[52399] = anon_sym_GT_AMP;
	small_parse_table_2620(v);
}

/* EOF small_parse_table_523.c */
