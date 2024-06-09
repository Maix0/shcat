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
	v->a[51300] = sym_file_descriptor;
	v->a[51301] = actions(1709);
	v->a[51302] = 1;
	v->a[51303] = sym_variable_name;
	v->a[51304] = actions(1882);
	v->a[51305] = 1;
	v->a[51306] = anon_sym_RPAREN;
	v->a[51307] = actions(1698);
	v->a[51308] = 9;
	v->a[51309] = anon_sym_PIPE;
	v->a[51310] = anon_sym_SEMI_SEMI;
	v->a[51311] = anon_sym_AMP_AMP;
	v->a[51312] = anon_sym_PIPE_PIPE;
	v->a[51313] = anon_sym_LT_LT;
	v->a[51314] = anon_sym_LT_LT_DASH;
	v->a[51315] = aux_sym_heredoc_redirect_token1;
	v->a[51316] = anon_sym_AMP;
	v->a[51317] = anon_sym_SEMI;
	v->a[51318] = actions(1696);
	v->a[51319] = 10;
	small_parse_table_2566(v);
}

void	small_parse_table_2566(t_small_parse_table_array *v)
{
	v->a[51320] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51321] = anon_sym_DOLLAR;
	v->a[51322] = anon_sym_DQUOTE;
	v->a[51323] = sym_raw_string;
	v->a[51324] = aux_sym_number_token1;
	v->a[51325] = aux_sym_number_token2;
	v->a[51326] = anon_sym_DOLLAR_LBRACE;
	v->a[51327] = anon_sym_DOLLAR_LPAREN;
	v->a[51328] = anon_sym_BQUOTE;
	v->a[51329] = sym_word;
	v->a[51330] = actions(1703);
	v->a[51331] = 10;
	v->a[51332] = anon_sym_LT;
	v->a[51333] = anon_sym_GT;
	v->a[51334] = anon_sym_GT_GT;
	v->a[51335] = anon_sym_AMP_GT;
	v->a[51336] = anon_sym_AMP_GT_GT;
	v->a[51337] = anon_sym_LT_AMP;
	v->a[51338] = anon_sym_GT_AMP;
	v->a[51339] = anon_sym_GT_PIPE;
	small_parse_table_2567(v);
}

void	small_parse_table_2567(t_small_parse_table_array *v)
{
	v->a[51340] = anon_sym_LT_AMP_DASH;
	v->a[51341] = anon_sym_GT_AMP_DASH;
	v->a[51342] = 3;
	v->a[51343] = actions(3);
	v->a[51344] = 1;
	v->a[51345] = sym_comment;
	v->a[51346] = actions(1261);
	v->a[51347] = 2;
	v->a[51348] = sym_file_descriptor;
	v->a[51349] = sym__bare_dollar;
	v->a[51350] = actions(1259);
	v->a[51351] = 30;
	v->a[51352] = anon_sym_PIPE;
	v->a[51353] = anon_sym_RPAREN;
	v->a[51354] = anon_sym_SEMI_SEMI;
	v->a[51355] = anon_sym_AMP_AMP;
	v->a[51356] = anon_sym_PIPE_PIPE;
	v->a[51357] = anon_sym_LT;
	v->a[51358] = anon_sym_GT;
	v->a[51359] = anon_sym_GT_GT;
	small_parse_table_2568(v);
}

void	small_parse_table_2568(t_small_parse_table_array *v)
{
	v->a[51360] = anon_sym_AMP_GT;
	v->a[51361] = anon_sym_AMP_GT_GT;
	v->a[51362] = anon_sym_LT_AMP;
	v->a[51363] = anon_sym_GT_AMP;
	v->a[51364] = anon_sym_GT_PIPE;
	v->a[51365] = anon_sym_LT_AMP_DASH;
	v->a[51366] = anon_sym_GT_AMP_DASH;
	v->a[51367] = anon_sym_LT_LT;
	v->a[51368] = anon_sym_LT_LT_DASH;
	v->a[51369] = aux_sym_heredoc_redirect_token1;
	v->a[51370] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51371] = anon_sym_AMP;
	v->a[51372] = anon_sym_DOLLAR;
	v->a[51373] = anon_sym_DQUOTE;
	v->a[51374] = sym_raw_string;
	v->a[51375] = aux_sym_number_token1;
	v->a[51376] = aux_sym_number_token2;
	v->a[51377] = anon_sym_DOLLAR_LBRACE;
	v->a[51378] = anon_sym_DOLLAR_LPAREN;
	v->a[51379] = anon_sym_BQUOTE;
	small_parse_table_2569(v);
}

void	small_parse_table_2569(t_small_parse_table_array *v)
{
	v->a[51380] = sym_word;
	v->a[51381] = anon_sym_SEMI;
	v->a[51382] = 7;
	v->a[51383] = actions(3);
	v->a[51384] = 1;
	v->a[51385] = sym_comment;
	v->a[51386] = actions(1885);
	v->a[51387] = 1;
	v->a[51388] = anon_sym_LPAREN;
	v->a[51389] = actions(1888);
	v->a[51390] = 1;
	v->a[51391] = aux_sym_concatenation_token1;
	v->a[51392] = actions(1890);
	v->a[51393] = 1;
	v->a[51394] = sym__concat;
	v->a[51395] = state(756);
	v->a[51396] = 1;
	v->a[51397] = aux_sym_concatenation_repeat1;
	v->a[51398] = actions(1108);
	v->a[51399] = 2;
	small_parse_table_2570(v);
}

/* EOF small_parse_table_513.c */
