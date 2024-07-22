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
	v->a[69400] = 1;
	v->a[69401] = sym_comment;
	v->a[69402] = actions(2755);
	v->a[69403] = 1;
	v->a[69404] = sym_variable_name;
	v->a[69405] = state(1386);
	v->a[69406] = 2;
	v->a[69407] = sym_variable_assignment;
	v->a[69408] = aux_sym__variable_assignments_repeat1;
	v->a[69409] = actions(1953);
	v->a[69410] = 4;
	v->a[69411] = anon_sym_PIPE;
	v->a[69412] = anon_sym_LT;
	v->a[69413] = anon_sym_GT;
	v->a[69414] = anon_sym_LT_LT;
	v->a[69415] = actions(1955);
	v->a[69416] = 9;
	v->a[69417] = sym_file_descriptor;
	v->a[69418] = anon_sym_AMP_AMP;
	v->a[69419] = anon_sym_PIPE_PIPE;
	small_parse_table_3471(v);
}

void	small_parse_table_3471(t_small_parse_table_array *v)
{
	v->a[69420] = anon_sym_GT_GT;
	v->a[69421] = anon_sym_LT_AMP;
	v->a[69422] = anon_sym_GT_AMP;
	v->a[69423] = anon_sym_GT_PIPE;
	v->a[69424] = anon_sym_LT_GT;
	v->a[69425] = anon_sym_LT_LT_DASH;
	v->a[69426] = 10;
	v->a[69427] = actions(3);
	v->a[69428] = 1;
	v->a[69429] = sym_comment;
	v->a[69430] = actions(1504);
	v->a[69431] = 1;
	v->a[69432] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69433] = actions(1506);
	v->a[69434] = 1;
	v->a[69435] = anon_sym_DOLLAR;
	v->a[69436] = actions(1508);
	v->a[69437] = 1;
	v->a[69438] = anon_sym_DQUOTE;
	v->a[69439] = actions(1510);
	small_parse_table_3472(v);
}

void	small_parse_table_3472(t_small_parse_table_array *v)
{
	v->a[69440] = 1;
	v->a[69441] = anon_sym_DOLLAR_LBRACE;
	v->a[69442] = actions(1512);
	v->a[69443] = 1;
	v->a[69444] = anon_sym_DOLLAR_LPAREN;
	v->a[69445] = actions(1514);
	v->a[69446] = 1;
	v->a[69447] = anon_sym_BQUOTE;
	v->a[69448] = state(669);
	v->a[69449] = 2;
	v->a[69450] = sym_concatenation;
	v->a[69451] = aux_sym_for_statement_repeat1;
	v->a[69452] = actions(1502);
	v->a[69453] = 3;
	v->a[69454] = sym_raw_string;
	v->a[69455] = sym_number;
	v->a[69456] = sym_word;
	v->a[69457] = state(902);
	v->a[69458] = 5;
	v->a[69459] = sym_arithmetic_expansion;
	small_parse_table_3473(v);
}

void	small_parse_table_3473(t_small_parse_table_array *v)
{
	v->a[69460] = sym_string;
	v->a[69461] = sym_simple_expansion;
	v->a[69462] = sym_expansion;
	v->a[69463] = sym_command_substitution;
	v->a[69464] = 10;
	v->a[69465] = actions(3);
	v->a[69466] = 1;
	v->a[69467] = sym_comment;
	v->a[69468] = actions(2611);
	v->a[69469] = 1;
	v->a[69470] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69471] = actions(2613);
	v->a[69472] = 1;
	v->a[69473] = anon_sym_DOLLAR;
	v->a[69474] = actions(2615);
	v->a[69475] = 1;
	v->a[69476] = anon_sym_DQUOTE;
	v->a[69477] = actions(2617);
	v->a[69478] = 1;
	v->a[69479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3474(v);
}

void	small_parse_table_3474(t_small_parse_table_array *v)
{
	v->a[69480] = actions(2619);
	v->a[69481] = 1;
	v->a[69482] = anon_sym_DOLLAR_LPAREN;
	v->a[69483] = actions(2621);
	v->a[69484] = 1;
	v->a[69485] = anon_sym_BQUOTE;
	v->a[69486] = state(230);
	v->a[69487] = 2;
	v->a[69488] = sym_concatenation;
	v->a[69489] = aux_sym_for_statement_repeat1;
	v->a[69490] = actions(2753);
	v->a[69491] = 3;
	v->a[69492] = sym_raw_string;
	v->a[69493] = sym_number;
	v->a[69494] = sym_word;
	v->a[69495] = state(387);
	v->a[69496] = 5;
	v->a[69497] = sym_arithmetic_expansion;
	v->a[69498] = sym_string;
	v->a[69499] = sym_simple_expansion;
	small_parse_table_3475(v);
}

/* EOF small_parse_table_694.c */
