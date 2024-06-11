/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_583.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2915(t_small_parse_table_array *v)
{
	v->a[58300] = 1;
	v->a[58301] = anon_sym_BQUOTE;
	v->a[58302] = state(1901);
	v->a[58303] = 1;
	v->a[58304] = sym_concatenation;
	v->a[58305] = actions(1816);
	v->a[58306] = 3;
	v->a[58307] = sym_raw_string;
	v->a[58308] = sym_number;
	v->a[58309] = sym_word;
	v->a[58310] = state(1707);
	v->a[58311] = 5;
	v->a[58312] = sym_arithmetic_expansion;
	v->a[58313] = sym_string;
	v->a[58314] = sym_simple_expansion;
	v->a[58315] = sym_expansion;
	v->a[58316] = sym_command_substitution;
	v->a[58317] = actions(719);
	v->a[58318] = 13;
	v->a[58319] = anon_sym_AMP_AMP;
	small_parse_table_2916(v);
}

void	small_parse_table_2916(t_small_parse_table_array *v)
{
	v->a[58320] = anon_sym_PIPE_PIPE;
	v->a[58321] = anon_sym_LT;
	v->a[58322] = anon_sym_GT;
	v->a[58323] = anon_sym_GT_GT;
	v->a[58324] = anon_sym_AMP_GT;
	v->a[58325] = anon_sym_AMP_GT_GT;
	v->a[58326] = anon_sym_LT_AMP;
	v->a[58327] = anon_sym_GT_AMP;
	v->a[58328] = anon_sym_GT_PIPE;
	v->a[58329] = anon_sym_LT_AMP_DASH;
	v->a[58330] = anon_sym_GT_AMP_DASH;
	v->a[58331] = aux_sym_heredoc_redirect_token1;
	v->a[58332] = 3;
	v->a[58333] = actions(3);
	v->a[58334] = 1;
	v->a[58335] = sym_comment;
	v->a[58336] = actions(1100);
	v->a[58337] = 3;
	v->a[58338] = sym_file_descriptor;
	v->a[58339] = sym__concat;
	small_parse_table_2917(v);
}

void	small_parse_table_2917(t_small_parse_table_array *v)
{
	v->a[58340] = sym__bare_dollar;
	v->a[58341] = actions(1102);
	v->a[58342] = 26;
	v->a[58343] = anon_sym_LPAREN;
	v->a[58344] = anon_sym_PIPE;
	v->a[58345] = anon_sym_AMP_AMP;
	v->a[58346] = anon_sym_PIPE_PIPE;
	v->a[58347] = anon_sym_LT;
	v->a[58348] = anon_sym_GT;
	v->a[58349] = anon_sym_GT_GT;
	v->a[58350] = anon_sym_AMP_GT;
	v->a[58351] = anon_sym_AMP_GT_GT;
	v->a[58352] = anon_sym_LT_AMP;
	v->a[58353] = anon_sym_GT_AMP;
	v->a[58354] = anon_sym_GT_PIPE;
	v->a[58355] = anon_sym_LT_AMP_DASH;
	v->a[58356] = anon_sym_GT_AMP_DASH;
	v->a[58357] = anon_sym_LT_LT;
	v->a[58358] = anon_sym_LT_LT_DASH;
	v->a[58359] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2918(v);
}

void	small_parse_table_2918(t_small_parse_table_array *v)
{
	v->a[58360] = aux_sym_concatenation_token1;
	v->a[58361] = anon_sym_DOLLAR;
	v->a[58362] = anon_sym_DQUOTE;
	v->a[58363] = sym_raw_string;
	v->a[58364] = sym_number;
	v->a[58365] = anon_sym_DOLLAR_LBRACE;
	v->a[58366] = anon_sym_DOLLAR_LPAREN;
	v->a[58367] = anon_sym_BQUOTE;
	v->a[58368] = sym_word;
	v->a[58369] = 3;
	v->a[58370] = actions(3);
	v->a[58371] = 1;
	v->a[58372] = sym_comment;
	v->a[58373] = actions(1159);
	v->a[58374] = 3;
	v->a[58375] = sym_file_descriptor;
	v->a[58376] = sym__concat;
	v->a[58377] = sym__bare_dollar;
	v->a[58378] = actions(1157);
	v->a[58379] = 26;
	small_parse_table_2919(v);
}

void	small_parse_table_2919(t_small_parse_table_array *v)
{
	v->a[58380] = anon_sym_LPAREN;
	v->a[58381] = anon_sym_PIPE;
	v->a[58382] = anon_sym_AMP_AMP;
	v->a[58383] = anon_sym_PIPE_PIPE;
	v->a[58384] = anon_sym_LT;
	v->a[58385] = anon_sym_GT;
	v->a[58386] = anon_sym_GT_GT;
	v->a[58387] = anon_sym_AMP_GT;
	v->a[58388] = anon_sym_AMP_GT_GT;
	v->a[58389] = anon_sym_LT_AMP;
	v->a[58390] = anon_sym_GT_AMP;
	v->a[58391] = anon_sym_GT_PIPE;
	v->a[58392] = anon_sym_LT_AMP_DASH;
	v->a[58393] = anon_sym_GT_AMP_DASH;
	v->a[58394] = anon_sym_LT_LT;
	v->a[58395] = anon_sym_LT_LT_DASH;
	v->a[58396] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58397] = aux_sym_concatenation_token1;
	v->a[58398] = anon_sym_DOLLAR;
	v->a[58399] = anon_sym_DQUOTE;
	small_parse_table_2920(v);
}

/* EOF small_parse_table_583.c */
