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
	v->a[52300] = actions(1782);
	v->a[52301] = 1;
	v->a[52302] = anon_sym_DQUOTE;
	v->a[52303] = actions(1784);
	v->a[52304] = 1;
	v->a[52305] = anon_sym_DOLLAR_LBRACE;
	v->a[52306] = actions(1786);
	v->a[52307] = 1;
	v->a[52308] = anon_sym_DOLLAR_LPAREN;
	v->a[52309] = actions(1788);
	v->a[52310] = 1;
	v->a[52311] = anon_sym_BQUOTE;
	v->a[52312] = actions(1790);
	v->a[52313] = 1;
	v->a[52314] = sym_extglob_pattern;
	v->a[52315] = actions(1840);
	v->a[52316] = 1;
	v->a[52317] = anon_sym_esac;
	v->a[52318] = state(1171);
	v->a[52319] = 1;
	small_parse_table_2616(v);
}

void	small_parse_table_2616(t_small_parse_table_array *v)
{
	v->a[52320] = sym_terminator;
	v->a[52321] = state(1233);
	v->a[52322] = 1;
	v->a[52323] = aux_sym_case_statement_repeat1;
	v->a[52324] = state(1920);
	v->a[52325] = 1;
	v->a[52326] = sym_case_item;
	v->a[52327] = state(2139);
	v->a[52328] = 1;
	v->a[52329] = sym__case_item_last;
	v->a[52330] = state(2096);
	v->a[52331] = 2;
	v->a[52332] = sym_concatenation;
	v->a[52333] = sym__extglob_blob;
	v->a[52334] = actions(1770);
	v->a[52335] = 3;
	v->a[52336] = sym_raw_string;
	v->a[52337] = sym_number;
	v->a[52338] = sym_word;
	v->a[52339] = actions(1776);
	small_parse_table_2617(v);
}

void	small_parse_table_2617(t_small_parse_table_array *v)
{
	v->a[52340] = 4;
	v->a[52341] = anon_sym_SEMI_SEMI;
	v->a[52342] = aux_sym_heredoc_redirect_token1;
	v->a[52343] = anon_sym_AMP;
	v->a[52344] = anon_sym_SEMI;
	v->a[52345] = state(2001);
	v->a[52346] = 5;
	v->a[52347] = sym_arithmetic_expansion;
	v->a[52348] = sym_string;
	v->a[52349] = sym_simple_expansion;
	v->a[52350] = sym_expansion;
	v->a[52351] = sym_command_substitution;
	v->a[52352] = 3;
	v->a[52353] = actions(3);
	v->a[52354] = 1;
	v->a[52355] = sym_comment;
	v->a[52356] = actions(970);
	v->a[52357] = 3;
	v->a[52358] = sym_file_descriptor;
	v->a[52359] = sym__concat;
	small_parse_table_2618(v);
}

void	small_parse_table_2618(t_small_parse_table_array *v)
{
	v->a[52360] = sym__bare_dollar;
	v->a[52361] = actions(968);
	v->a[52362] = 24;
	v->a[52363] = anon_sym_LPAREN;
	v->a[52364] = anon_sym_PIPE;
	v->a[52365] = anon_sym_AMP_AMP;
	v->a[52366] = anon_sym_PIPE_PIPE;
	v->a[52367] = anon_sym_LT;
	v->a[52368] = anon_sym_GT;
	v->a[52369] = anon_sym_GT_GT;
	v->a[52370] = anon_sym_LT_AMP;
	v->a[52371] = anon_sym_GT_AMP;
	v->a[52372] = anon_sym_GT_PIPE;
	v->a[52373] = anon_sym_LT_AMP_DASH;
	v->a[52374] = anon_sym_GT_AMP_DASH;
	v->a[52375] = anon_sym_LT_LT;
	v->a[52376] = anon_sym_LT_LT_DASH;
	v->a[52377] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52378] = aux_sym_concatenation_token1;
	v->a[52379] = anon_sym_DOLLAR;
	small_parse_table_2619(v);
}

void	small_parse_table_2619(t_small_parse_table_array *v)
{
	v->a[52380] = anon_sym_DQUOTE;
	v->a[52381] = sym_raw_string;
	v->a[52382] = sym_number;
	v->a[52383] = anon_sym_DOLLAR_LBRACE;
	v->a[52384] = anon_sym_DOLLAR_LPAREN;
	v->a[52385] = anon_sym_BQUOTE;
	v->a[52386] = sym_word;
	v->a[52387] = 3;
	v->a[52388] = actions(3);
	v->a[52389] = 1;
	v->a[52390] = sym_comment;
	v->a[52391] = actions(1033);
	v->a[52392] = 3;
	v->a[52393] = sym_file_descriptor;
	v->a[52394] = sym__concat;
	v->a[52395] = sym__bare_dollar;
	v->a[52396] = actions(1031);
	v->a[52397] = 24;
	v->a[52398] = anon_sym_LPAREN;
	v->a[52399] = anon_sym_PIPE;
	small_parse_table_2620(v);
}

/* EOF small_parse_table_523.c */
