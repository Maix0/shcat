/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_453.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2265(t_small_parse_table_array *v)
{
	v->a[45300] = aux_sym_heredoc_redirect_token1;
	v->a[45301] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45302] = anon_sym_AMP;
	v->a[45303] = aux_sym_concatenation_token1;
	v->a[45304] = anon_sym_DOLLAR;
	v->a[45305] = anon_sym_DQUOTE;
	v->a[45306] = sym_raw_string;
	v->a[45307] = sym_number;
	v->a[45308] = anon_sym_DOLLAR_LBRACE;
	v->a[45309] = anon_sym_DOLLAR_LPAREN;
	v->a[45310] = anon_sym_BQUOTE;
	v->a[45311] = sym_word;
	v->a[45312] = anon_sym_SEMI;
	v->a[45313] = 6;
	v->a[45314] = actions(3);
	v->a[45315] = 1;
	v->a[45316] = sym_comment;
	v->a[45317] = actions(385);
	v->a[45318] = 1;
	v->a[45319] = sym_file_descriptor;
	small_parse_table_2266(v);
}

void	small_parse_table_2266(t_small_parse_table_array *v)
{
	v->a[45320] = actions(1306);
	v->a[45321] = 1;
	v->a[45322] = sym_variable_name;
	v->a[45323] = actions(1304);
	v->a[45324] = 2;
	v->a[45325] = aux_sym__simple_variable_name_token1;
	v->a[45326] = aux_sym__multiline_variable_name_token1;
	v->a[45327] = actions(1302);
	v->a[45328] = 9;
	v->a[45329] = anon_sym_BANG;
	v->a[45330] = anon_sym_DASH;
	v->a[45331] = anon_sym_STAR;
	v->a[45332] = anon_sym_QMARK;
	v->a[45333] = anon_sym_DOLLAR;
	v->a[45334] = anon_sym_POUND;
	v->a[45335] = anon_sym_AT;
	v->a[45336] = anon_sym_0;
	v->a[45337] = anon_sym__;
	v->a[45338] = actions(379);
	v->a[45339] = 19;
	small_parse_table_2267(v);
}

void	small_parse_table_2267(t_small_parse_table_array *v)
{
	v->a[45340] = anon_sym_PIPE;
	v->a[45341] = anon_sym_SEMI_SEMI;
	v->a[45342] = anon_sym_AMP_AMP;
	v->a[45343] = anon_sym_PIPE_PIPE;
	v->a[45344] = anon_sym_LT;
	v->a[45345] = anon_sym_GT;
	v->a[45346] = anon_sym_GT_GT;
	v->a[45347] = anon_sym_AMP_GT;
	v->a[45348] = anon_sym_AMP_GT_GT;
	v->a[45349] = anon_sym_LT_AMP;
	v->a[45350] = anon_sym_GT_AMP;
	v->a[45351] = anon_sym_GT_PIPE;
	v->a[45352] = anon_sym_LT_AMP_DASH;
	v->a[45353] = anon_sym_GT_AMP_DASH;
	v->a[45354] = anon_sym_LT_LT;
	v->a[45355] = anon_sym_LT_LT_DASH;
	v->a[45356] = aux_sym_heredoc_redirect_token1;
	v->a[45357] = anon_sym_AMP;
	v->a[45358] = anon_sym_SEMI;
	v->a[45359] = 3;
	small_parse_table_2268(v);
}

void	small_parse_table_2268(t_small_parse_table_array *v)
{
	v->a[45360] = actions(3);
	v->a[45361] = 1;
	v->a[45362] = sym_comment;
	v->a[45363] = actions(1276);
	v->a[45364] = 2;
	v->a[45365] = sym_file_descriptor;
	v->a[45366] = sym_variable_name;
	v->a[45367] = actions(1274);
	v->a[45368] = 30;
	v->a[45369] = anon_sym_for;
	v->a[45370] = anon_sym_while;
	v->a[45371] = anon_sym_until;
	v->a[45372] = anon_sym_if;
	v->a[45373] = anon_sym_fi;
	v->a[45374] = anon_sym_elif;
	v->a[45375] = anon_sym_else;
	v->a[45376] = anon_sym_case;
	v->a[45377] = anon_sym_LPAREN;
	v->a[45378] = anon_sym_LBRACE;
	v->a[45379] = anon_sym_BANG;
	small_parse_table_2269(v);
}

void	small_parse_table_2269(t_small_parse_table_array *v)
{
	v->a[45380] = anon_sym_LT;
	v->a[45381] = anon_sym_GT;
	v->a[45382] = anon_sym_GT_GT;
	v->a[45383] = anon_sym_AMP_GT;
	v->a[45384] = anon_sym_AMP_GT_GT;
	v->a[45385] = anon_sym_LT_AMP;
	v->a[45386] = anon_sym_GT_AMP;
	v->a[45387] = anon_sym_GT_PIPE;
	v->a[45388] = anon_sym_LT_AMP_DASH;
	v->a[45389] = anon_sym_GT_AMP_DASH;
	v->a[45390] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45391] = anon_sym_DOLLAR;
	v->a[45392] = anon_sym_DQUOTE;
	v->a[45393] = sym_raw_string;
	v->a[45394] = sym_number;
	v->a[45395] = anon_sym_DOLLAR_LBRACE;
	v->a[45396] = anon_sym_DOLLAR_LPAREN;
	v->a[45397] = anon_sym_BQUOTE;
	v->a[45398] = sym_word;
	v->a[45399] = 12;
	small_parse_table_2270(v);
}

/* EOF small_parse_table_453.c */
