/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_513.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2565(t_small_parse_table_array *v)
{
	v->a[51300] = sym_number;
	v->a[51301] = anon_sym_DOLLAR_LBRACE;
	v->a[51302] = anon_sym_DOLLAR_LPAREN;
	v->a[51303] = anon_sym_BQUOTE;
	v->a[51304] = sym_word;
	v->a[51305] = 3;
	v->a[51306] = actions(3);
	v->a[51307] = 1;
	v->a[51308] = sym_comment;
	v->a[51309] = actions(835);
	v->a[51310] = 3;
	v->a[51311] = sym_file_descriptor;
	v->a[51312] = sym__concat;
	v->a[51313] = sym_variable_name;
	v->a[51314] = actions(833);
	v->a[51315] = 22;
	v->a[51316] = anon_sym_PIPE;
	v->a[51317] = anon_sym_AMP_AMP;
	v->a[51318] = anon_sym_PIPE_PIPE;
	v->a[51319] = anon_sym_LT;
	small_parse_table_2566(v);
}

void	small_parse_table_2566(t_small_parse_table_array *v)
{
	v->a[51320] = anon_sym_GT;
	v->a[51321] = anon_sym_GT_GT;
	v->a[51322] = anon_sym_LT_AMP;
	v->a[51323] = anon_sym_GT_AMP;
	v->a[51324] = anon_sym_GT_PIPE;
	v->a[51325] = anon_sym_LT_GT;
	v->a[51326] = anon_sym_LT_LT;
	v->a[51327] = anon_sym_LT_LT_DASH;
	v->a[51328] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51329] = aux_sym_concatenation_token1;
	v->a[51330] = anon_sym_DOLLAR;
	v->a[51331] = anon_sym_DQUOTE;
	v->a[51332] = sym_raw_string;
	v->a[51333] = sym_number;
	v->a[51334] = anon_sym_DOLLAR_LBRACE;
	v->a[51335] = anon_sym_DOLLAR_LPAREN;
	v->a[51336] = anon_sym_BQUOTE;
	v->a[51337] = sym_word;
	v->a[51338] = 3;
	v->a[51339] = actions(3);
	small_parse_table_2567(v);
}

void	small_parse_table_2567(t_small_parse_table_array *v)
{
	v->a[51340] = 1;
	v->a[51341] = sym_comment;
	v->a[51342] = actions(1092);
	v->a[51343] = 3;
	v->a[51344] = sym_file_descriptor;
	v->a[51345] = sym__concat;
	v->a[51346] = sym__bare_dollar;
	v->a[51347] = actions(1094);
	v->a[51348] = 22;
	v->a[51349] = anon_sym_PIPE;
	v->a[51350] = anon_sym_AMP_AMP;
	v->a[51351] = anon_sym_PIPE_PIPE;
	v->a[51352] = anon_sym_LT;
	v->a[51353] = anon_sym_GT;
	v->a[51354] = anon_sym_GT_GT;
	v->a[51355] = anon_sym_LT_AMP;
	v->a[51356] = anon_sym_GT_AMP;
	v->a[51357] = anon_sym_GT_PIPE;
	v->a[51358] = anon_sym_LT_GT;
	v->a[51359] = anon_sym_LT_LT;
	small_parse_table_2568(v);
}

void	small_parse_table_2568(t_small_parse_table_array *v)
{
	v->a[51360] = anon_sym_LT_LT_DASH;
	v->a[51361] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51362] = aux_sym_concatenation_token1;
	v->a[51363] = anon_sym_DOLLAR;
	v->a[51364] = anon_sym_DQUOTE;
	v->a[51365] = sym_raw_string;
	v->a[51366] = sym_number;
	v->a[51367] = anon_sym_DOLLAR_LBRACE;
	v->a[51368] = anon_sym_DOLLAR_LPAREN;
	v->a[51369] = anon_sym_BQUOTE;
	v->a[51370] = sym_word;
	v->a[51371] = 5;
	v->a[51372] = actions(3);
	v->a[51373] = 1;
	v->a[51374] = sym_comment;
	v->a[51375] = actions(515);
	v->a[51376] = 2;
	v->a[51377] = sym_file_descriptor;
	v->a[51378] = sym_variable_name;
	v->a[51379] = state(852);
	small_parse_table_2569(v);
}

void	small_parse_table_2569(t_small_parse_table_array *v)
{
	v->a[51380] = 2;
	v->a[51381] = sym_concatenation;
	v->a[51382] = aux_sym_for_statement_repeat1;
	v->a[51383] = state(1079);
	v->a[51384] = 5;
	v->a[51385] = sym_arithmetic_expansion;
	v->a[51386] = sym_string;
	v->a[51387] = sym_simple_expansion;
	v->a[51388] = sym_expansion;
	v->a[51389] = sym_command_substitution;
	v->a[51390] = actions(513);
	v->a[51391] = 16;
	v->a[51392] = anon_sym_LT;
	v->a[51393] = anon_sym_GT;
	v->a[51394] = anon_sym_GT_GT;
	v->a[51395] = anon_sym_LT_AMP;
	v->a[51396] = anon_sym_GT_AMP;
	v->a[51397] = anon_sym_GT_PIPE;
	v->a[51398] = anon_sym_LT_GT;
	v->a[51399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2570(v);
}

/* EOF small_parse_table_513.c */
