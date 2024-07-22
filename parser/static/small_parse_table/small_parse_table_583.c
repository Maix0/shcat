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
	v->a[58301] = sym_terminator;
	v->a[58302] = state(1132);
	v->a[58303] = 2;
	v->a[58304] = sym_concatenation;
	v->a[58305] = aux_sym_for_statement_repeat1;
	v->a[58306] = actions(1973);
	v->a[58307] = 3;
	v->a[58308] = sym_raw_string;
	v->a[58309] = sym_number;
	v->a[58310] = sym_word;
	v->a[58311] = actions(1975);
	v->a[58312] = 3;
	v->a[58313] = anon_sym_SEMI_SEMI;
	v->a[58314] = aux_sym_heredoc_redirect_token1;
	v->a[58315] = anon_sym_SEMI;
	v->a[58316] = state(1424);
	v->a[58317] = 5;
	v->a[58318] = sym_arithmetic_expansion;
	v->a[58319] = sym_string;
	small_parse_table_2916(v);
}

void	small_parse_table_2916(t_small_parse_table_array *v)
{
	v->a[58320] = sym_simple_expansion;
	v->a[58321] = sym_expansion;
	v->a[58322] = sym_command_substitution;
	v->a[58323] = 5;
	v->a[58324] = actions(3);
	v->a[58325] = 1;
	v->a[58326] = sym_comment;
	v->a[58327] = actions(1981);
	v->a[58328] = 1;
	v->a[58329] = sym_variable_name;
	v->a[58330] = state(1103);
	v->a[58331] = 2;
	v->a[58332] = sym_variable_assignment;
	v->a[58333] = aux_sym__variable_assignments_repeat1;
	v->a[58334] = actions(1977);
	v->a[58335] = 3;
	v->a[58336] = sym_file_descriptor;
	v->a[58337] = ts_builtin_sym_end;
	v->a[58338] = aux_sym_heredoc_redirect_token1;
	v->a[58339] = actions(1979);
	small_parse_table_2917(v);
}

void	small_parse_table_2917(t_small_parse_table_array *v)
{
	v->a[58340] = 14;
	v->a[58341] = anon_sym_PIPE;
	v->a[58342] = anon_sym_SEMI_SEMI;
	v->a[58343] = anon_sym_AMP_AMP;
	v->a[58344] = anon_sym_PIPE_PIPE;
	v->a[58345] = anon_sym_LT;
	v->a[58346] = anon_sym_GT;
	v->a[58347] = anon_sym_GT_GT;
	v->a[58348] = anon_sym_LT_AMP;
	v->a[58349] = anon_sym_GT_AMP;
	v->a[58350] = anon_sym_GT_PIPE;
	v->a[58351] = anon_sym_LT_GT;
	v->a[58352] = anon_sym_LT_LT;
	v->a[58353] = anon_sym_LT_LT_DASH;
	v->a[58354] = anon_sym_SEMI;
	v->a[58355] = 5;
	v->a[58356] = actions(3);
	v->a[58357] = 1;
	v->a[58358] = sym_comment;
	v->a[58359] = actions(792);
	small_parse_table_2918(v);
}

void	small_parse_table_2918(t_small_parse_table_array *v)
{
	v->a[58360] = 1;
	v->a[58361] = sym_file_descriptor;
	v->a[58362] = actions(812);
	v->a[58363] = 1;
	v->a[58364] = sym_variable_name;
	v->a[58365] = state(1048);
	v->a[58366] = 2;
	v->a[58367] = sym_variable_assignment;
	v->a[58368] = aux_sym__variable_assignments_repeat1;
	v->a[58369] = actions(780);
	v->a[58370] = 16;
	v->a[58371] = anon_sym_LT;
	v->a[58372] = anon_sym_GT;
	v->a[58373] = anon_sym_GT_GT;
	v->a[58374] = anon_sym_LT_AMP;
	v->a[58375] = anon_sym_GT_AMP;
	v->a[58376] = anon_sym_GT_PIPE;
	v->a[58377] = anon_sym_LT_GT;
	v->a[58378] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58379] = anon_sym_DOLLAR;
	small_parse_table_2919(v);
}

void	small_parse_table_2919(t_small_parse_table_array *v)
{
	v->a[58380] = anon_sym_DQUOTE;
	v->a[58381] = sym_raw_string;
	v->a[58382] = sym_number;
	v->a[58383] = anon_sym_DOLLAR_LBRACE;
	v->a[58384] = anon_sym_DOLLAR_LPAREN;
	v->a[58385] = anon_sym_BQUOTE;
	v->a[58386] = sym_word;
	v->a[58387] = 14;
	v->a[58388] = actions(3);
	v->a[58389] = 1;
	v->a[58390] = sym_comment;
	v->a[58391] = actions(1986);
	v->a[58392] = 1;
	v->a[58393] = anon_sym_LPAREN;
	v->a[58394] = actions(1989);
	v->a[58395] = 1;
	v->a[58396] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58397] = actions(1992);
	v->a[58398] = 1;
	v->a[58399] = anon_sym_DOLLAR;
	small_parse_table_2920(v);
}

/* EOF small_parse_table_583.c */
