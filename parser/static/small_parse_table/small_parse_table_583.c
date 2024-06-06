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
	v->a[58300] = actions(3627);
	v->a[58301] = 9;
	v->a[58302] = anon_sym_PIPE;
	v->a[58303] = anon_sym_SEMI_SEMI;
	v->a[58304] = anon_sym_PIPE_AMP;
	v->a[58305] = anon_sym_AMP_AMP;
	v->a[58306] = anon_sym_PIPE_PIPE;
	v->a[58307] = anon_sym_LT_LT;
	v->a[58308] = anon_sym_LT_LT_DASH;
	v->a[58309] = anon_sym_AMP;
	v->a[58310] = anon_sym_SEMI;
	v->a[58311] = actions(3629);
	v->a[58312] = 10;
	v->a[58313] = anon_sym_LT;
	v->a[58314] = anon_sym_GT;
	v->a[58315] = anon_sym_GT_GT;
	v->a[58316] = anon_sym_AMP_GT;
	v->a[58317] = anon_sym_AMP_GT_GT;
	v->a[58318] = anon_sym_LT_AMP;
	v->a[58319] = anon_sym_GT_AMP;
	small_parse_table_2916(v);
}

void	small_parse_table_2916(t_small_parse_table_array *v)
{
	v->a[58320] = anon_sym_GT_PIPE;
	v->a[58321] = anon_sym_LT_AMP_DASH;
	v->a[58322] = anon_sym_GT_AMP_DASH;
	v->a[58323] = actions(3625);
	v->a[58324] = 12;
	v->a[58325] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58326] = anon_sym_DOLLAR;
	v->a[58327] = sym__special_character;
	v->a[58328] = anon_sym_DQUOTE;
	v->a[58329] = sym_raw_string;
	v->a[58330] = aux_sym_number_token1;
	v->a[58331] = aux_sym_number_token2;
	v->a[58332] = anon_sym_DOLLAR_LBRACE;
	v->a[58333] = anon_sym_DOLLAR_LPAREN;
	v->a[58334] = anon_sym_BQUOTE;
	v->a[58335] = anon_sym_DOLLAR_BQUOTE;
	v->a[58336] = sym_word;
	v->a[58337] = 3;
	v->a[58338] = actions(3);
	v->a[58339] = 1;
	small_parse_table_2917(v);
}

void	small_parse_table_2917(t_small_parse_table_array *v)
{
	v->a[58340] = sym_comment;
	v->a[58341] = actions(2664);
	v->a[58342] = 6;
	v->a[58343] = sym_file_descriptor;
	v->a[58344] = sym_test_operator;
	v->a[58345] = sym__bare_dollar;
	v->a[58346] = sym__brace_start;
	v->a[58347] = ts_builtin_sym_end;
	v->a[58348] = aux_sym_heredoc_redirect_token1;
	v->a[58349] = actions(2662);
	v->a[58350] = 31;
	v->a[58351] = anon_sym_PIPE;
	v->a[58352] = anon_sym_SEMI_SEMI;
	v->a[58353] = anon_sym_PIPE_AMP;
	v->a[58354] = anon_sym_AMP_AMP;
	v->a[58355] = anon_sym_PIPE_PIPE;
	v->a[58356] = anon_sym_LT;
	v->a[58357] = anon_sym_GT;
	v->a[58358] = anon_sym_GT_GT;
	v->a[58359] = anon_sym_AMP_GT;
	small_parse_table_2918(v);
}

void	small_parse_table_2918(t_small_parse_table_array *v)
{
	v->a[58360] = anon_sym_AMP_GT_GT;
	v->a[58361] = anon_sym_LT_AMP;
	v->a[58362] = anon_sym_GT_AMP;
	v->a[58363] = anon_sym_GT_PIPE;
	v->a[58364] = anon_sym_LT_AMP_DASH;
	v->a[58365] = anon_sym_GT_AMP_DASH;
	v->a[58366] = anon_sym_LT_LT;
	v->a[58367] = anon_sym_LT_LT_DASH;
	v->a[58368] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58369] = anon_sym_AMP;
	v->a[58370] = anon_sym_DOLLAR;
	v->a[58371] = sym__special_character;
	v->a[58372] = anon_sym_DQUOTE;
	v->a[58373] = sym_raw_string;
	v->a[58374] = aux_sym_number_token1;
	v->a[58375] = aux_sym_number_token2;
	v->a[58376] = anon_sym_DOLLAR_LBRACE;
	v->a[58377] = anon_sym_DOLLAR_LPAREN;
	v->a[58378] = anon_sym_BQUOTE;
	v->a[58379] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2919(v);
}

void	small_parse_table_2919(t_small_parse_table_array *v)
{
	v->a[58380] = sym_word;
	v->a[58381] = anon_sym_SEMI;
	v->a[58382] = 8;
	v->a[58383] = actions(3);
	v->a[58384] = 1;
	v->a[58385] = sym_comment;
	v->a[58386] = actions(3632);
	v->a[58387] = 1;
	v->a[58388] = aux_sym_heredoc_redirect_token1;
	v->a[58389] = actions(3634);
	v->a[58390] = 1;
	v->a[58391] = sym_file_descriptor;
	v->a[58392] = actions(3865);
	v->a[58393] = 1;
	v->a[58394] = anon_sym_RPAREN;
	v->a[58395] = actions(3637);
	v->a[58396] = 3;
	v->a[58397] = sym_variable_name;
	v->a[58398] = sym_test_operator;
	v->a[58399] = sym__brace_start;
	small_parse_table_2920(v);
}

/* EOF small_parse_table_583.c */
