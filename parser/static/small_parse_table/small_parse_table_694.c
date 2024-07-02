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
	v->a[69400] = sym_simple_expansion;
	v->a[69401] = sym_expansion;
	v->a[69402] = sym_command_substitution;
	v->a[69403] = 3;
	v->a[69404] = actions(680);
	v->a[69405] = 1;
	v->a[69406] = sym_comment;
	v->a[69407] = actions(742);
	v->a[69408] = 4;
	v->a[69409] = anon_sym_PIPE;
	v->a[69410] = anon_sym_LT;
	v->a[69411] = anon_sym_GT;
	v->a[69412] = anon_sym_LT_LT;
	v->a[69413] = actions(744);
	v->a[69414] = 12;
	v->a[69415] = sym_file_descriptor;
	v->a[69416] = sym__concat;
	v->a[69417] = sym_variable_name;
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
	v->a[69426] = aux_sym_concatenation_token1;
	v->a[69427] = 10;
	v->a[69428] = actions(3);
	v->a[69429] = 1;
	v->a[69430] = sym_comment;
	v->a[69431] = actions(2474);
	v->a[69432] = 1;
	v->a[69433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69434] = actions(2478);
	v->a[69435] = 1;
	v->a[69436] = anon_sym_DQUOTE;
	v->a[69437] = actions(2480);
	v->a[69438] = 1;
	v->a[69439] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3472(v);
}

void	small_parse_table_3472(t_small_parse_table_array *v)
{
	v->a[69440] = actions(2482);
	v->a[69441] = 1;
	v->a[69442] = anon_sym_DOLLAR_LPAREN;
	v->a[69443] = actions(2484);
	v->a[69444] = 1;
	v->a[69445] = anon_sym_BQUOTE;
	v->a[69446] = actions(2644);
	v->a[69447] = 1;
	v->a[69448] = anon_sym_DOLLAR;
	v->a[69449] = state(546);
	v->a[69450] = 2;
	v->a[69451] = sym_concatenation;
	v->a[69452] = aux_sym_for_statement_repeat1;
	v->a[69453] = actions(2745);
	v->a[69454] = 3;
	v->a[69455] = sym_raw_string;
	v->a[69456] = sym_number;
	v->a[69457] = sym_word;
	v->a[69458] = state(802);
	v->a[69459] = 5;
	small_parse_table_3473(v);
}

void	small_parse_table_3473(t_small_parse_table_array *v)
{
	v->a[69460] = sym_arithmetic_expansion;
	v->a[69461] = sym_string;
	v->a[69462] = sym_simple_expansion;
	v->a[69463] = sym_expansion;
	v->a[69464] = sym_command_substitution;
	v->a[69465] = 10;
	v->a[69466] = actions(3);
	v->a[69467] = 1;
	v->a[69468] = sym_comment;
	v->a[69469] = actions(821);
	v->a[69470] = 1;
	v->a[69471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69472] = actions(823);
	v->a[69473] = 1;
	v->a[69474] = anon_sym_DOLLAR;
	v->a[69475] = actions(825);
	v->a[69476] = 1;
	v->a[69477] = anon_sym_DQUOTE;
	v->a[69478] = actions(827);
	v->a[69479] = 1;
	small_parse_table_3474(v);
}

void	small_parse_table_3474(t_small_parse_table_array *v)
{
	v->a[69480] = anon_sym_DOLLAR_LBRACE;
	v->a[69481] = actions(829);
	v->a[69482] = 1;
	v->a[69483] = anon_sym_DOLLAR_LPAREN;
	v->a[69484] = actions(831);
	v->a[69485] = 1;
	v->a[69486] = anon_sym_BQUOTE;
	v->a[69487] = state(339);
	v->a[69488] = 2;
	v->a[69489] = sym_concatenation;
	v->a[69490] = aux_sym_for_statement_repeat1;
	v->a[69491] = actions(919);
	v->a[69492] = 3;
	v->a[69493] = sym_raw_string;
	v->a[69494] = sym_number;
	v->a[69495] = sym_word;
	v->a[69496] = state(593);
	v->a[69497] = 5;
	v->a[69498] = sym_arithmetic_expansion;
	v->a[69499] = sym_string;
	small_parse_table_3475(v);
}

/* EOF small_parse_table_694.c */
