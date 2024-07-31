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
	v->a[58300] = anon_sym_GT_AMP;
	v->a[58301] = anon_sym_GT_PIPE;
	v->a[58302] = anon_sym_LT_GT;
	v->a[58303] = 3;
	v->a[58304] = actions(3);
	v->a[58305] = 1;
	v->a[58306] = sym_comment;
	v->a[58307] = actions(1787);
	v->a[58308] = 1;
	v->a[58309] = aux_sym_heredoc_redirect_token1;
	v->a[58310] = actions(1789);
	v->a[58311] = 15;
	v->a[58312] = anon_sym_esac;
	v->a[58313] = anon_sym_PIPE;
	v->a[58314] = anon_sym_SEMI_SEMI;
	v->a[58315] = anon_sym_AMP_AMP;
	v->a[58316] = anon_sym_PIPE_PIPE;
	v->a[58317] = anon_sym_LT;
	v->a[58318] = anon_sym_GT;
	v->a[58319] = anon_sym_GT_GT;
	small_parse_table_2916(v);
}

void	small_parse_table_2916(t_small_parse_table_array *v)
{
	v->a[58320] = anon_sym_LT_AMP;
	v->a[58321] = anon_sym_GT_AMP;
	v->a[58322] = anon_sym_GT_PIPE;
	v->a[58323] = anon_sym_LT_GT;
	v->a[58324] = anon_sym_LT_LT;
	v->a[58325] = anon_sym_LT_LT_DASH;
	v->a[58326] = anon_sym_SEMI;
	v->a[58327] = 10;
	v->a[58328] = actions(3);
	v->a[58329] = 1;
	v->a[58330] = sym_comment;
	v->a[58331] = actions(930);
	v->a[58332] = 1;
	v->a[58333] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58334] = actions(932);
	v->a[58335] = 1;
	v->a[58336] = anon_sym_DOLLAR;
	v->a[58337] = actions(934);
	v->a[58338] = 1;
	v->a[58339] = anon_sym_DQUOTE;
	small_parse_table_2917(v);
}

void	small_parse_table_2917(t_small_parse_table_array *v)
{
	v->a[58340] = actions(936);
	v->a[58341] = 1;
	v->a[58342] = anon_sym_DOLLAR_LBRACE;
	v->a[58343] = actions(938);
	v->a[58344] = 1;
	v->a[58345] = anon_sym_DOLLAR_LPAREN;
	v->a[58346] = actions(940);
	v->a[58347] = 1;
	v->a[58348] = anon_sym_BQUOTE;
	v->a[58349] = state(865);
	v->a[58350] = 2;
	v->a[58351] = sym_concatenation;
	v->a[58352] = aux_sym_for_statement_repeat1;
	v->a[58353] = actions(1607);
	v->a[58354] = 3;
	v->a[58355] = sym_raw_string;
	v->a[58356] = sym_number;
	v->a[58357] = sym_word;
	v->a[58358] = state(1227);
	v->a[58359] = 5;
	small_parse_table_2918(v);
}

void	small_parse_table_2918(t_small_parse_table_array *v)
{
	v->a[58360] = sym_arithmetic_expansion;
	v->a[58361] = sym_string;
	v->a[58362] = sym_simple_expansion;
	v->a[58363] = sym_expansion;
	v->a[58364] = sym_command_substitution;
	v->a[58365] = 10;
	v->a[58366] = actions(3);
	v->a[58367] = 1;
	v->a[58368] = sym_comment;
	v->a[58369] = actions(2015);
	v->a[58370] = 1;
	v->a[58371] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58372] = actions(2017);
	v->a[58373] = 1;
	v->a[58374] = anon_sym_DOLLAR;
	v->a[58375] = actions(2019);
	v->a[58376] = 1;
	v->a[58377] = anon_sym_DQUOTE;
	v->a[58378] = actions(2021);
	v->a[58379] = 1;
	small_parse_table_2919(v);
}

void	small_parse_table_2919(t_small_parse_table_array *v)
{
	v->a[58380] = anon_sym_DOLLAR_LBRACE;
	v->a[58381] = actions(2023);
	v->a[58382] = 1;
	v->a[58383] = anon_sym_DOLLAR_LPAREN;
	v->a[58384] = actions(2025);
	v->a[58385] = 1;
	v->a[58386] = anon_sym_BQUOTE;
	v->a[58387] = state(316);
	v->a[58388] = 2;
	v->a[58389] = sym_concatenation;
	v->a[58390] = aux_sym_for_statement_repeat1;
	v->a[58391] = actions(2330);
	v->a[58392] = 3;
	v->a[58393] = sym_raw_string;
	v->a[58394] = sym_number;
	v->a[58395] = sym_word;
	v->a[58396] = state(604);
	v->a[58397] = 5;
	v->a[58398] = sym_arithmetic_expansion;
	v->a[58399] = sym_string;
	small_parse_table_2920(v);
}

/* EOF small_parse_table_583.c */
