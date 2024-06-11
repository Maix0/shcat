/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_643.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3215(t_small_parse_table_array *v)
{
	v->a[64300] = anon_sym_DQUOTE;
	v->a[64301] = actions(1969);
	v->a[64302] = 1;
	v->a[64303] = anon_sym_DOLLAR_LBRACE;
	v->a[64304] = actions(1971);
	v->a[64305] = 1;
	v->a[64306] = anon_sym_DOLLAR_LPAREN;
	v->a[64307] = actions(1973);
	v->a[64308] = 1;
	v->a[64309] = anon_sym_BQUOTE;
	v->a[64310] = actions(1975);
	v->a[64311] = 1;
	v->a[64312] = sym_extglob_pattern;
	v->a[64313] = actions(1993);
	v->a[64314] = 1;
	v->a[64315] = anon_sym_esac;
	v->a[64316] = state(1526);
	v->a[64317] = 1;
	v->a[64318] = aux_sym_case_statement_repeat1;
	v->a[64319] = state(2080);
	small_parse_table_3216(v);
}

void	small_parse_table_3216(t_small_parse_table_array *v)
{
	v->a[64320] = 1;
	v->a[64321] = sym_case_item;
	v->a[64322] = state(2383);
	v->a[64323] = 1;
	v->a[64324] = sym__case_item_last;
	v->a[64325] = state(2224);
	v->a[64326] = 2;
	v->a[64327] = sym_concatenation;
	v->a[64328] = sym__extglob_blob;
	v->a[64329] = actions(1955);
	v->a[64330] = 3;
	v->a[64331] = sym_raw_string;
	v->a[64332] = sym_number;
	v->a[64333] = sym_word;
	v->a[64334] = actions(1995);
	v->a[64335] = 4;
	v->a[64336] = anon_sym_SEMI_SEMI;
	v->a[64337] = aux_sym_heredoc_redirect_token1;
	v->a[64338] = anon_sym_AMP;
	v->a[64339] = anon_sym_SEMI;
	small_parse_table_3217(v);
}

void	small_parse_table_3217(t_small_parse_table_array *v)
{
	v->a[64340] = state(2157);
	v->a[64341] = 5;
	v->a[64342] = sym_arithmetic_expansion;
	v->a[64343] = sym_string;
	v->a[64344] = sym_simple_expansion;
	v->a[64345] = sym_expansion;
	v->a[64346] = sym_command_substitution;
	v->a[64347] = 6;
	v->a[64348] = actions(3);
	v->a[64349] = 1;
	v->a[64350] = sym_comment;
	v->a[64351] = actions(1997);
	v->a[64352] = 1;
	v->a[64353] = aux_sym_concatenation_token1;
	v->a[64354] = actions(2000);
	v->a[64355] = 1;
	v->a[64356] = sym__concat;
	v->a[64357] = state(1108);
	v->a[64358] = 1;
	v->a[64359] = aux_sym_concatenation_repeat1;
	small_parse_table_3218(v);
}

void	small_parse_table_3218(t_small_parse_table_array *v)
{
	v->a[64360] = actions(1004);
	v->a[64361] = 3;
	v->a[64362] = sym_file_descriptor;
	v->a[64363] = ts_builtin_sym_end;
	v->a[64364] = aux_sym_heredoc_redirect_token1;
	v->a[64365] = actions(999);
	v->a[64366] = 20;
	v->a[64367] = anon_sym_PIPE;
	v->a[64368] = anon_sym_RPAREN;
	v->a[64369] = anon_sym_SEMI_SEMI;
	v->a[64370] = anon_sym_AMP_AMP;
	v->a[64371] = anon_sym_PIPE_PIPE;
	v->a[64372] = anon_sym_LT;
	v->a[64373] = anon_sym_GT;
	v->a[64374] = anon_sym_GT_GT;
	v->a[64375] = anon_sym_AMP_GT;
	v->a[64376] = anon_sym_AMP_GT_GT;
	v->a[64377] = anon_sym_LT_AMP;
	v->a[64378] = anon_sym_GT_AMP;
	v->a[64379] = anon_sym_GT_PIPE;
	small_parse_table_3219(v);
}

void	small_parse_table_3219(t_small_parse_table_array *v)
{
	v->a[64380] = anon_sym_LT_AMP_DASH;
	v->a[64381] = anon_sym_GT_AMP_DASH;
	v->a[64382] = anon_sym_LT_LT;
	v->a[64383] = anon_sym_LT_LT_DASH;
	v->a[64384] = anon_sym_AMP;
	v->a[64385] = anon_sym_BQUOTE;
	v->a[64386] = anon_sym_SEMI;
	v->a[64387] = 3;
	v->a[64388] = actions(3);
	v->a[64389] = 1;
	v->a[64390] = sym_comment;
	v->a[64391] = actions(1579);
	v->a[64392] = 2;
	v->a[64393] = sym_file_descriptor;
	v->a[64394] = sym__bare_dollar;
	v->a[64395] = actions(1577);
	v->a[64396] = 24;
	v->a[64397] = anon_sym_PIPE;
	v->a[64398] = anon_sym_AMP_AMP;
	v->a[64399] = anon_sym_PIPE_PIPE;
	small_parse_table_3220(v);
}

/* EOF small_parse_table_643.c */
