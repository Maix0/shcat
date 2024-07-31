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
	v->a[45300] = sym_expansion;
	v->a[45301] = sym_command_substitution;
	v->a[45302] = 3;
	v->a[45303] = actions(3);
	v->a[45304] = 1;
	v->a[45305] = sym_comment;
	v->a[45306] = actions(1011);
	v->a[45307] = 4;
	v->a[45308] = sym__concat;
	v->a[45309] = sym_variable_name;
	v->a[45310] = ts_builtin_sym_end;
	v->a[45311] = aux_sym_heredoc_redirect_token1;
	v->a[45312] = actions(1003);
	v->a[45313] = 17;
	v->a[45314] = anon_sym_PIPE;
	v->a[45315] = anon_sym_RPAREN;
	v->a[45316] = anon_sym_SEMI_SEMI;
	v->a[45317] = anon_sym_AMP_AMP;
	v->a[45318] = anon_sym_PIPE_PIPE;
	v->a[45319] = anon_sym_LT;
	small_parse_table_2266(v);
}

void	small_parse_table_2266(t_small_parse_table_array *v)
{
	v->a[45320] = anon_sym_GT;
	v->a[45321] = anon_sym_GT_GT;
	v->a[45322] = anon_sym_LT_AMP;
	v->a[45323] = anon_sym_GT_AMP;
	v->a[45324] = anon_sym_GT_PIPE;
	v->a[45325] = anon_sym_LT_GT;
	v->a[45326] = anon_sym_LT_LT;
	v->a[45327] = anon_sym_LT_LT_DASH;
	v->a[45328] = aux_sym_concatenation_token1;
	v->a[45329] = anon_sym_BQUOTE;
	v->a[45330] = anon_sym_SEMI;
	v->a[45331] = 15;
	v->a[45332] = actions(3);
	v->a[45333] = 1;
	v->a[45334] = sym_comment;
	v->a[45335] = actions(1337);
	v->a[45336] = 1;
	v->a[45337] = anon_sym_LPAREN;
	v->a[45338] = actions(1341);
	v->a[45339] = 1;
	small_parse_table_2267(v);
}

void	small_parse_table_2267(t_small_parse_table_array *v)
{
	v->a[45340] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45341] = actions(1343);
	v->a[45342] = 1;
	v->a[45343] = anon_sym_DOLLAR;
	v->a[45344] = actions(1345);
	v->a[45345] = 1;
	v->a[45346] = anon_sym_DQUOTE;
	v->a[45347] = actions(1347);
	v->a[45348] = 1;
	v->a[45349] = anon_sym_DOLLAR_LBRACE;
	v->a[45350] = actions(1349);
	v->a[45351] = 1;
	v->a[45352] = anon_sym_DOLLAR_LPAREN;
	v->a[45353] = actions(1351);
	v->a[45354] = 1;
	v->a[45355] = anon_sym_BQUOTE;
	v->a[45356] = actions(1353);
	v->a[45357] = 1;
	v->a[45358] = sym_extglob_pattern;
	v->a[45359] = state(839);
	small_parse_table_2268(v);
}

void	small_parse_table_2268(t_small_parse_table_array *v)
{
	v->a[45360] = 1;
	v->a[45361] = aux_sym_case_statement_repeat1;
	v->a[45362] = state(1432);
	v->a[45363] = 1;
	v->a[45364] = sym_case_item;
	v->a[45365] = state(1783);
	v->a[45366] = 1;
	v->a[45367] = sym__case_item_last;
	v->a[45368] = state(1594);
	v->a[45369] = 2;
	v->a[45370] = sym_concatenation;
	v->a[45371] = sym__extglob_blob;
	v->a[45372] = actions(1333);
	v->a[45373] = 3;
	v->a[45374] = sym_raw_string;
	v->a[45375] = sym_number;
	v->a[45376] = sym_word;
	v->a[45377] = state(1520);
	v->a[45378] = 5;
	v->a[45379] = sym_arithmetic_expansion;
	small_parse_table_2269(v);
}

void	small_parse_table_2269(t_small_parse_table_array *v)
{
	v->a[45380] = sym_string;
	v->a[45381] = sym_simple_expansion;
	v->a[45382] = sym_expansion;
	v->a[45383] = sym_command_substitution;
	v->a[45384] = 3;
	v->a[45385] = actions(3);
	v->a[45386] = 1;
	v->a[45387] = sym_comment;
	v->a[45388] = actions(445);
	v->a[45389] = 4;
	v->a[45390] = sym__concat;
	v->a[45391] = sym_variable_name;
	v->a[45392] = ts_builtin_sym_end;
	v->a[45393] = aux_sym_heredoc_redirect_token1;
	v->a[45394] = actions(443);
	v->a[45395] = 17;
	v->a[45396] = anon_sym_PIPE;
	v->a[45397] = anon_sym_RPAREN;
	v->a[45398] = anon_sym_SEMI_SEMI;
	v->a[45399] = anon_sym_AMP_AMP;
	small_parse_table_2270(v);
}

/* EOF small_parse_table_453.c */
