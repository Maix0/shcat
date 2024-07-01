/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_694.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3470(t_small_parse_table_array *v)
{
	v->a[69400] = state(1022);
	v->a[69401] = 2;
	v->a[69402] = sym_concatenation;
	v->a[69403] = aux_sym_for_statement_repeat1;
	v->a[69404] = actions(1891);
	v->a[69405] = 3;
	v->a[69406] = sym_raw_string;
	v->a[69407] = sym_number;
	v->a[69408] = sym_word;
	v->a[69409] = state(1398);
	v->a[69410] = 5;
	v->a[69411] = sym_arithmetic_expansion;
	v->a[69412] = sym_string;
	v->a[69413] = sym_simple_expansion;
	v->a[69414] = sym_expansion;
	v->a[69415] = sym_command_substitution;
	v->a[69416] = 10;
	v->a[69417] = actions(3);
	v->a[69418] = 1;
	v->a[69419] = sym_comment;
	small_parse_table_3471(v);
}

void	small_parse_table_3471(t_small_parse_table_array *v)
{
	v->a[69420] = actions(871);
	v->a[69421] = 1;
	v->a[69422] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69423] = actions(873);
	v->a[69424] = 1;
	v->a[69425] = anon_sym_DOLLAR;
	v->a[69426] = actions(875);
	v->a[69427] = 1;
	v->a[69428] = anon_sym_DQUOTE;
	v->a[69429] = actions(877);
	v->a[69430] = 1;
	v->a[69431] = anon_sym_DOLLAR_LBRACE;
	v->a[69432] = actions(879);
	v->a[69433] = 1;
	v->a[69434] = anon_sym_DOLLAR_LPAREN;
	v->a[69435] = actions(881);
	v->a[69436] = 1;
	v->a[69437] = anon_sym_BQUOTE;
	v->a[69438] = state(265);
	v->a[69439] = 2;
	small_parse_table_3472(v);
}

void	small_parse_table_3472(t_small_parse_table_array *v)
{
	v->a[69440] = sym_concatenation;
	v->a[69441] = aux_sym_for_statement_repeat1;
	v->a[69442] = actions(947);
	v->a[69443] = 3;
	v->a[69444] = sym_raw_string;
	v->a[69445] = sym_number;
	v->a[69446] = sym_word;
	v->a[69447] = state(616);
	v->a[69448] = 5;
	v->a[69449] = sym_arithmetic_expansion;
	v->a[69450] = sym_string;
	v->a[69451] = sym_simple_expansion;
	v->a[69452] = sym_expansion;
	v->a[69453] = sym_command_substitution;
	v->a[69454] = 5;
	v->a[69455] = actions(664);
	v->a[69456] = 1;
	v->a[69457] = sym_comment;
	v->a[69458] = actions(2716);
	v->a[69459] = 1;
	small_parse_table_3473(v);
}

void	small_parse_table_3473(t_small_parse_table_array *v)
{
	v->a[69460] = sym_variable_name;
	v->a[69461] = state(1367);
	v->a[69462] = 2;
	v->a[69463] = sym_variable_assignment;
	v->a[69464] = aux_sym__variable_assignments_repeat1;
	v->a[69465] = actions(1916);
	v->a[69466] = 4;
	v->a[69467] = anon_sym_PIPE;
	v->a[69468] = anon_sym_LT;
	v->a[69469] = anon_sym_GT;
	v->a[69470] = anon_sym_LT_LT;
	v->a[69471] = actions(1914);
	v->a[69472] = 9;
	v->a[69473] = sym_file_descriptor;
	v->a[69474] = anon_sym_AMP_AMP;
	v->a[69475] = anon_sym_PIPE_PIPE;
	v->a[69476] = anon_sym_GT_GT;
	v->a[69477] = anon_sym_LT_AMP;
	v->a[69478] = anon_sym_GT_AMP;
	v->a[69479] = anon_sym_GT_PIPE;
	small_parse_table_3474(v);
}

void	small_parse_table_3474(t_small_parse_table_array *v)
{
	v->a[69480] = anon_sym_LT_GT;
	v->a[69481] = anon_sym_LT_LT_DASH;
	v->a[69482] = 3;
	v->a[69483] = actions(664);
	v->a[69484] = 1;
	v->a[69485] = sym_comment;
	v->a[69486] = actions(1199);
	v->a[69487] = 4;
	v->a[69488] = anon_sym_PIPE;
	v->a[69489] = anon_sym_LT;
	v->a[69490] = anon_sym_GT;
	v->a[69491] = anon_sym_LT_LT;
	v->a[69492] = actions(1201);
	v->a[69493] = 12;
	v->a[69494] = sym_file_descriptor;
	v->a[69495] = sym__concat;
	v->a[69496] = sym_variable_name;
	v->a[69497] = anon_sym_AMP_AMP;
	v->a[69498] = anon_sym_PIPE_PIPE;
	v->a[69499] = anon_sym_GT_GT;
	small_parse_table_3475(v);
}

/* EOF small_parse_table_694.c */
